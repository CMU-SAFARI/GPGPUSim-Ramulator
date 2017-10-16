#ifndef RAMULATOR_H_
#define RAMULATOR_H_

#include <stdio.h>
#include <assert.h>
#include <vector>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <functional>
#include <stdlib.h>
#include "Config.h"
#include <iostream>
#include "../gpgpu-sim/mem_fetch.h"
#include "StatType.h"
extern unsigned long long  gpu_sim_cycle;
extern unsigned long long  gpu_tot_sim_cycle;

namespace ramulator{
class GPUwrapper;
class Request;
}




// This is the true interface code between ramulator and gpgpusim. 
class Ramulator {
	public:
		Ramulator(std::string config_file ,unsigned num_cpus  , unsigned cache_line_size );
		~Ramulator();
		ramulator::GPUwrapper *wrapper;
		void advance_time(unsigned m_id);
		bool FromGpusimDram_push(unsigned partition_id, mem_fetch* mf , int return_queue_size , int sched_queue_size);
		std::map<unsigned, std::deque<mem_fetch*> > to_gpgpusim;
		std::map<int,int> pending;
		std::map<int,int> returned;// Number of access for this m_id, back from Ramulator and waiting in the return_q. Should never ecceed the return_q capacity
		void finish();
		void tick();
		bool from_ramulator_empty(int mid);
		bool to_gpgpusim_empty(int mid);
		bool from_gpgpusim_empty(int mid);
	private:
		std::map<unsigned, std::deque<mem_fetch*> > reads;// all the read requests for all the m_ids recieved from GPGPUSim
		std::map<unsigned, std::deque<mem_fetch*> > writes;
		std::map<unsigned, std::deque<mem_fetch*> > from_ramulator; // access back from Ramulator for each m_id
		std::map<unsigned, std::deque<mem_fetch*> > from_gpgpusim;// recieved from GPGPUSim for each m_id
		std::string config_file;
		ramulator::Config configs;
		std::function<void(ramulator::Request&)> read_cb_func;
		std::function<void(ramulator::Request&)> write_cb_func;
		bool resp_stall;
		bool req_stall;
		void readComplete(ramulator::Request& req);
		void writeComplete(ramulator::Request& req);
		unsigned m_num_cores;
		int return_size;
		int sched_size;
};

#endif
