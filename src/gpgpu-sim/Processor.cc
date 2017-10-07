#include "Processor.h"
#include <cassert>

using namespace std;
using namespace ramulator;

Processor::Processor(const Config& configs,
    vector<string> trace_list,
    function<bool(Request)> send_memory,
    MemoryBase& memory)
    : ipcs(trace_list.size(), -1),
    early_exit(configs.is_early_exit()),
    no_core_caches(!configs.has_core_caches()),
    no_shared_cache(!configs.has_l3_cache()),
    cachesys(new CacheSystem(configs, send_memory)),
    llc(l3_size, l3_assoc, l3_blocksz,
         mshr_per_bank * trace_list.size(),
         Cache::Level::L3, cachesys) {

  assert(cachesys != nullptr);
  int tracenum = trace_list.size();
  assert(tracenum > 0);
  printf("tracenum: %d\n", tracenum);
  for (int i = 0 ; i < tracenum ; ++i) {
    printf("trace_list[%d]: %s\n", i, trace_list[i].c_str());
  }
  if (no_shared_cache) {
    for (int i = 0 ; i < tracenum ; ++i) {
      cores.emplace_back(new Core(
          configs, i, trace_list[i], send_memory, nullptr,
          cachesys, memory));
    }
  } else {
    for (int i = 0 ; i < tracenum ; ++i) {
      cores.emplace_back(new Core(configs, i, trace_list[i],
          std::bind(&Cache::send, &llc, std::placeholders::_1),
          &llc, cachesys, memory));
    }
  }
  for (int i = 0 ; i < tracenum ; ++i) {
    cores[i]->callback = std::bind(&Processor::receive, this,
        placeholders::_1);
  }

  // regStats
  cpu_cycles.name("cpu_cycles")
            .desc("cpu cycle number")
            .precision(0)
            ;
  cpu_cycles = 0;
}

void Processor::tick() {
  cpu_cycles++;
  if (!(no_core_caches && no_shared_cache)) {
    cachesys->tick();
  }
  for (unsigned int i = 0 ; i < cores.size() ; ++i) {
    Core* core = cores[i].get();
    core->tick();
  }
}

void Processor::receive(Request& req) {
  if (!no_shared_cache) {
    llc.callback(req);
  } else if (!cores[0]->no_core_caches) {
    // Assume all cores have caches or don't have caches
    // at the same time.
    for (unsigned int i = 0 ; i < cores.size() ; ++i) {
      Core* core = cores[i].get();
      core->caches[0]->callback(req);
    }
  }
  for (unsigned int i = 0 ; i < cores.size() ; ++i) {
    Core* core = cores[i].get();
    core->receive(req);
  }
}

bool Processor::finished() {
  if (early_exit) {
    for (unsigned int i = 0 ; i < cores.size(); ++i) {
      if (cores[i]->finished()) {
        for (unsigned int j = 0 ; j < cores.size() ; ++j) {
          ipc += cores[j]->calc_ipc();
        }
        return true;
      }
    }
    return false;
  } else {
    for (unsigned int i = 0 ; i < cores.size(); ++i) {
      if (!cores[i]->finished()) {
        return false;
      }
      if (ipcs[i] < 0) {
        ipcs[i] = cores[i]->calc_ipc();
        ipc += ipcs[i];
      }
    }
    return true;
  }
}

bool Processor::has_reached_limit() {
  for (unsigned int i = 0 ; i < cores.size() ; ++i) {
    if (!cores[i]->has_reached_limit()) {
      return false;
    }
  }
  return true;
}

Core::Core(const Config& configs, int coreid,
    const string& trace_fname, function<bool(Request)> send_next,
    Cache* llc, std::shared_ptr<CacheSystem> cachesys, MemoryBase& memory)
    : id(coreid), no_core_caches(!configs.has_core_caches()),
    no_shared_cache(!configs.has_l3_cache()),
    llc(llc), trace(trace_fname), memory(memory)
{
  if (configs["rc_trace"] == "true") {
    rc_trace = true;
  }

  // Build cache hierarchy
  if (no_core_caches) {
    send = send_next;
  } else {
    // L2 caches[0]
    caches.emplace_back(new Cache(
        l2_size, l2_assoc, l2_blocksz, l2_mshr_num,
        Cache::Level::L2, cachesys));
    // L1 caches[1]
    caches.emplace_back(new Cache(
        l1_size, l1_assoc, l1_blocksz, l1_mshr_num,
        Cache::Level::L1, cachesys));
    send = bind(&Cache::send, caches[1].get(), placeholders::_1);
    if (llc != nullptr) {
      caches[0]->concatlower(llc);
    }
    caches[1]->concatlower(caches[0].get());
  }
  if (rc_trace) {
    assert(no_core_caches);
    more_reqs = trace.get_rowclone_request(
        bubble_cnt, req_addr, req_type);
  } else {
    if (no_core_caches) {
      more_reqs = trace.get_filtered_request(
          bubble_cnt, req_addr, req_type);
      req_addr = memory.page_allocator(req_addr, id);
    } else {
      more_reqs = trace.get_unfiltered_request(
          bubble_cnt, req_addr, req_type);
      req_addr = memory.page_allocator(req_addr, id);
    }
  }

  // set expected limit instruction for calculating weighted speedup
  expected_limit_insts = configs.get_expected_limit_insts();

  // regStats
  record_cycs.name("record_cycs_core_" + to_string(id))
             .desc("Record cycle number for calculating weighted speedup. (Only valid when expected limit instruction number is non zero in config file.)")
             .precision(0)
             ;

  record_insts.name("record_insts_core_" + to_string(id))
              .desc("Retired instruction number when record cycle number. (Only valid when expected limit instruction number is non zero in config file.)")
              .precision(0)
              ;

  memory_access_cycles.name("memory_access_cycles_core_" + to_string(id))
                      .desc("memory access cycles in memory time domain")
                      .precision(0)
                      ;
  memory_access_cycles = 0;
  cpu_inst.name("cpu_instructions_core_" + to_string(id))
          .desc("cpu instruction number")
          .precision(0)
          ;
  cpu_inst = 0;
}


double Core::calc_ipc()
{
    printf("[%d]retired: %ld, clk, %ld\n", id, retired, clk);
    return (double) retired / clk;
}

void Core::tick()
{
    clk++;

    retired += window.retire();

    if (expected_limit_insts == 0 && !more_reqs) return;

    // bubbles (non-memory operations)
    int inserted = 0;
    while (bubble_cnt > 0) {
        if (inserted == window.ipc) return;
        if (window.is_full()) return;

        window.insert(true, -1);
        inserted++;
        bubble_cnt--;
        cpu_inst++;
        if (long(cpu_inst.value()) == expected_limit_insts && !reached_limit) {
          record_cycs = clk;
          record_insts = long(cpu_inst.value());
          memory.record_core(id);
          reached_limit = true;
        }
    }

    if (req_type == Request::Type::READ) {
        // read request
        if (inserted == window.ipc) return;
        if (window.is_full()) return;

        Request req(req_addr, req_type, callback, id);
        if (!send(req)) return;

        window.insert(false, req_addr);
        cpu_inst++;
    }
    else {
        // write request
        assert(req_type == Request::Type::WRITE);
        Request req(req_addr, req_type, callback, id);
        if (!send(req)) return;
        cpu_inst++;
    }
    if (long(cpu_inst.value()) == expected_limit_insts && !reached_limit) {
      record_cycs = clk;
      record_insts = long(cpu_inst.value());
      memory.record_core(id);
      reached_limit = true;
    }

    if (rc_trace) {
      more_reqs = trace.get_rowclone_request(
          bubble_cnt, req_addr, req_type);
      if (req_addr != -1) {
        req_addr = memory.page_allocator(req_addr, id);
      }
    } else {
      if (no_core_caches) {
        more_reqs = trace.get_filtered_request(
            bubble_cnt, req_addr, req_type);
        if (req_addr != -1) {
          req_addr = memory.page_allocator(req_addr, id);
        }
      } else {
        more_reqs = trace.get_unfiltered_request(
            bubble_cnt, req_addr, req_type);
        if (req_addr != -1) {
          req_addr = memory.page_allocator(req_addr, id);
        }
      }
    }
    if (!more_reqs) {
      if (!reached_limit) { // if the length of this trace is shorter than expected length, then record it when the whole trace finishes, and set reached_limit to true.
        record_cycs = clk;
        record_insts = long(cpu_inst.value());
        memory.record_core(id);
        reached_limit = true;
      }
    }
}

bool Core::finished()
{
    return !more_reqs && window.is_empty();
}

bool Core::has_reached_limit() {
  return reached_limit;
}

void Core::receive(Request& req)
{
    window.set_ready(req.addr, ~(l1_blocksz - 1l));
    if (req.arrive != -1 && req.depart > last) {
      memory_access_cycles += (req.depart - max(last, req.arrive));
      last = req.depart;
    }
}

bool Window::is_full()
{
    return load == depth;
}

bool Window::is_empty()
{
    return load == 0;
}


void Window::insert(bool ready, long addr)
{
    assert(load <= depth);

    ready_list.at(head) = ready;
    addr_list.at(head) = addr;

    head = (head + 1) % depth;
    load++;
}


long Window::retire()
{
    assert(load <= depth);

    if (load == 0) return 0;

    int retired = 0;
    while (load > 0 && retired < ipc) {
        if (!ready_list.at(tail))
            break;

        tail = (tail + 1) % depth;
        load--;
        retired++;
    }

    return retired;
}


void Window::set_ready(long addr, int mask)
{
    if (load == 0) return;

    for (int i = 0; i < load; i++) {
        int index = (tail + i) % depth;
        if ((addr_list.at(index) & mask) != (addr & mask))
            continue;
        ready_list.at(index) = true;
    }
}



Trace::Trace(const string& trace_fname) : file(trace_fname), trace_name(trace_fname)
{
    if (!file.good()) {
        std::cerr << "Bad trace file: " << trace_fname << std::endl;
        exit(1);
    }
}

bool Trace::get_unfiltered_request(long& bubble_cnt, long& req_addr, Request::Type& req_type)
{
    string line;
    getline(file, line);
    if (file.eof()) {
      file.clear();
      file.seekg(0, file.beg);
      return false;
    }
    size_t pos, end;
    bubble_cnt = std::stoul(line, &pos, 10);
    pos = line.find_first_not_of(' ', pos+1);
    req_addr = std::stoul(line.substr(pos), &end, 0);

    pos = line.find_first_not_of(' ', pos+end);

    if (pos == string::npos || line.substr(pos)[0] == 'R')
        req_type = Request::Type::READ;
    else if (line.substr(pos)[0] == 'W')
        req_type = Request::Type::WRITE;
    else assert(false);
    return true;
}

bool Trace::get_filtered_request(long& bubble_cnt, long& req_addr, Request::Type& req_type)
{
    static bool has_write = false;
    static long write_addr;
    static int line_num = 0;

    if (has_write){
        bubble_cnt = 0;
        req_addr = write_addr;
        req_type = Request::Type::WRITE;
        has_write = false;
        return true;
    }
    string line;
    getline(file, line);
    line_num ++;
    if (file.eof() || line.size() == 0) {
        file.clear();
        file.seekg(0, file.beg);
        has_write = false;
        line_num = 0;
        return false;
    }

    size_t pos, end;
    bubble_cnt = std::stoul(line, &pos, 10);

    pos = line.find_first_not_of(' ', pos+1);
    req_addr = stoul(line.substr(pos), &end, 0);
    req_type = Request::Type::READ;

    pos = line.find_first_not_of(' ', pos+end);
    if (pos != string::npos){
        has_write = true;
        write_addr = stoul(line.substr(pos), NULL, 0);
    }
    return true;
}

bool Trace::get_dramtrace_request(long& req_addr, Request::Type& req_type)
{
    string line;
    getline(file, line);
    if (file.eof()) {
        return false;
    }
    size_t pos;
    req_addr = std::stoul(line, &pos, 16);

    pos = line.find_first_not_of(' ', pos+1);

    if (pos == string::npos || line.substr(pos)[0] == 'R')
        req_type = Request::Type::READ;
    else if (line.substr(pos)[0] == 'W')
        req_type = Request::Type::WRITE;
    else assert(false);
    return true;
}

bool Trace::get_rowclone_request(long& bubble_cnt, long& req_addr, Request::Type& req_type)
{
    static bool has_write = false;
    static long write_addr;
    static int line_num = 0;

    static bool batch_cp = false;
    static bool batch_set = false;
    static bool is_src;
    static long src_addr;
    static long src_addr_end;
    static long dst_addr;
    static long dst_addr_end;

    if (has_write){
        bubble_cnt = 0;
        req_addr = write_addr;
        req_type = Request::Type::WRITE;

        has_write = false;
        return true;
    } else if (batch_cp) {
      bubble_cnt = 0;
      if (is_src) {
        req_addr = src_addr;
        req_type = Request::Type::READ;
        if (src_addr < src_addr_end) {
          // FIXME: won't assume cacheline size is 64.
          src_addr += 64;
        }
      } else {
        req_addr = dst_addr;
        req_type = Request::Type::WRITE;
        if (dst_addr < dst_addr_end) {
          // FIXME: won't assume cacheline size is 64.
          dst_addr += 64;
        }
      }
      if (src_addr >= src_addr_end && dst_addr >= dst_addr_end) {
        batch_cp = false;
      } else {
        is_src = !is_src;
      }
      return true;
    } else if (batch_set) {
      bubble_cnt = 0;
      req_addr = dst_addr;
      req_type = Request::Type::WRITE;

      dst_addr += 64;
      if (dst_addr >= dst_addr_end) {
        batch_set = false;
      }
      return true;
    }

    string line;
    getline(file, line);
    line_num ++;
    if (file.eof() || line.size() == 0) {
        file.clear();
        file.seekg(0, file.beg);
        has_write = false;
        line_num = 0;
        return false;
    }

    size_t pos, end;

    char type = line[0];
    switch (type) {
      case 'R': {
        pos = line.find_first_not_of(' ', 1);
        req_addr = stoul(line.substr(pos), &end, 16);
        req_type = Request::Type::READ;

        pos = line.find_first_not_of(' ', pos+end);
        write_addr = stoul(line.substr(pos), &end, 16);
        if (write_addr != 0) {
          has_write = true;
        }

        pos = line.find_first_not_of(' ', pos+end);
        bubble_cnt = stoul(line.substr(pos), NULL, 10);
        break;
      }
      case 'C': {
        batch_cp = true;

        pos = line.find_first_not_of(' ', 1);
        src_addr = stoul(line.substr(pos), &end, 16);

        pos = line.find_first_not_of(' ', pos + end);
        dst_addr = stoul(line.substr(pos), &end, 16);

        pos = line.find_first_not_of(' ', pos + end);
        int cp_data_size = stoul(line.substr(pos), &end, 10);

        pos = line.find_first_not_of(' ', pos + end);
        bubble_cnt = stoul(line.substr(pos), NULL, 10);

        src_addr_end = src_addr + cp_data_size;
        dst_addr_end = dst_addr + cp_data_size;

        req_addr = src_addr;
        is_src = false;
        src_addr += 64;

        req_type = Request::Type::READ;

        break;
      }
      case 'S': {
        batch_set = true;

        pos = line.find_first_not_of(' ', 1);
        dst_addr = stoul(line.substr(pos), &end, 16);

        pos = line.find_first_not_of(' ', pos + end);
        assert(stoul(line.substr(pos), &end, 16) == 0);

        pos = line.find_first_not_of(' ', pos + end);
        int set_data_size = stoul(line.substr(pos), &end, 10);

        pos = line.find_first_not_of(' ', pos + end);
        bubble_cnt = stoul(line.substr(pos), NULL, 10);

        dst_addr_end = dst_addr + set_data_size;

        req_addr = dst_addr;
        req_type = Request::Type::WRITE;
        dst_addr += 64;
        if (dst_addr >= dst_addr_end) {
          batch_set = false;
        }
        break;
      }
    }

    return true;
}
