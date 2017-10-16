#include "Ramulator.h"
//#include "mem_fetch.h"
#include "../option_parser.h"
#include <functional>
#include "GPUwrapper.h"
#include "Request.h"
using namespace std;

Ramulator::Ramulator(std::string config_file ,unsigned num_cpus , unsigned cache_line_size ):
	config_file(config_file),
	configs(config_file),
	wrapper(NULL),
	read_cb_func(std::bind(&Ramulator::readComplete, this, std::placeholders::_1)),
	write_cb_func(std::bind(&Ramulator::writeComplete, this, std::placeholders::_1)),
	resp_stall(false),
	req_stall(false)

{

	configs.set_core_num(num_cpus);
	m_num_cores=num_cpus;
	wrapper = new  ramulator::GPUwrapper(configs, cache_line_size);
	Stats_ramulator::statlist.output("ramulator.stats");
}

Ramulator::~Ramulator(){
	delete wrapper;

}
bool Ramulator::FromGpusimDram_push(unsigned partition_id, mem_fetch* mf, int return_queue_size, int sched_queue_size) {
	return_size=return_queue_size;
	sched_size=sched_queue_size;
	bool accepted = true;
	if(mf->get_sid()<=m_num_cores){
		if( mf->get_type() == READ_REQUEST ){
			reads[mf->get_addr()].push_back(mf);
			from_gpgpusim[partition_id].push_back(mf);
		} else if ( mf->get_type() == WRITE_REQUEST) {
			from_gpgpusim[partition_id].push_back(mf);
		} else {
			//the access is not read nor write!
			assert(0);
		}
	}else{
		//Keep it simple and send a response back
		from_gpgpusim[partition_id].push_back(mf);

	}
	return accepted;


}
void Ramulator::advance_time(unsigned m_id)
{

	if (req_stall){
		req_stall = false;
	}
	//if the return queue is not full, complete some accesses
	if(returned[m_id]<return_size &&  !from_ramulator_empty(m_id)){
		auto& pkt_q = from_ramulator.find(m_id)->second;
		mem_fetch* mf = pkt_q.front();
		if(mf){
			to_gpgpusim[m_id].push_back(mf);
			returned[m_id]++;
			pending[m_id]--;
			pkt_q.pop_front();
			if (!pkt_q.size()){
				from_ramulator.erase(m_id);
			}
		}
	}


	bool accepted = true;
	// if scheduling queue is not full, send requestst to Ramulator
	while(pending[m_id]<sched_size && !from_gpgpusim_empty(m_id) /*avail[m_id] */&& !req_stall){
		if( !from_gpgpusim_empty(m_id) && pending[m_id]<sched_size){
			auto& pkt_q = from_gpgpusim.find(m_id)->second;
			mem_fetch* mf = pkt_q.front();
			if(mf){
				if(mf->get_sid()<=m_num_cores && mf->get_type() == READ_REQUEST ){
					ramulator::Request req(mf->get_addr(), ramulator::Request::Type::READ, read_cb_func, mf->get_sid());
					accepted = wrapper->send(req);
				}
				else if(mf->get_sid()<=m_num_cores && mf->get_type() == WRITE_REQUEST){
					ramulator::Request req(mf->get_addr(), ramulator::Request::Type::WRITE, write_cb_func, mf->get_sid());
					accepted = wrapper->send(req);
				}else{accepted =true;}
				if(accepted){
					if(pending[mf->m_mid]<=0) pending[mf->m_mid]=1;
					else pending[mf->m_mid]++;
					pkt_q.pop_front();
					if (!pkt_q.size()){
						from_gpgpusim.erase(m_id);
					}
					if(mf->get_type() == WRITE_REQUEST || mf->get_sid()>m_num_cores){
						from_ramulator[mf->m_mid].push_back(mf);
					}

				}else{
					req_stall = true;			
				}
			}
		}
	}//while	
}
void Ramulator::readComplete(ramulator::Request& req){

	auto& pkt_q = reads.find(req.addr)->second;
	mem_fetch* mf = pkt_q.front();

	pkt_q.pop_front();
	if (!pkt_q.size())
		reads.erase(req.addr);
	from_ramulator[mf->m_mid].push_back(mf);
}


//This function actually never gets called because write accesses don't call the callback function!
void Ramulator::writeComplete(ramulator::Request& req){

	auto& pkt_q = writes.find(req.addr)->second;
	mem_fetch* mf = pkt_q.front();
	pkt_q.pop_front();
	if (!pkt_q.size())
		writes.erase(req.addr);
	from_ramulator[mf->m_mid].push_back(mf);

}

void Ramulator::finish(){
	Stats_ramulator::statlist.printall();
	wrapper->finish();
}

void Ramulator::tick(){
        wrapper->tick();
}
bool Ramulator::from_ramulator_empty(int mid){
	return ( from_ramulator[mid].empty());
}
bool Ramulator::to_gpgpusim_empty(int mid){
	return (to_gpgpusim[mid].empty());
}
bool Ramulator::from_gpgpusim_empty(int mid){
	return (from_gpgpusim[mid].empty());	
}
