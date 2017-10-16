## GPGPUSim+Ramulator

This reposity contains the source code of GPGPUSim integrated with
Ramulator as a DRAM model.

GPGPU-Sim is a cycle-level simulator modeling contemporary graphics processing units (GPUs) running GPU computing workloads written in CUDA or OpenCL. The GPGPUSim+Ramulator simualtor is using GPGPU-Sim Simulator Version 3.2.2
http://www.ece.ubc.ca/~aamodt/papers/gpgpusim.ispass09.pdf

Ramulator is a fast and extensible DRAM simulator, with built-in support for modeling many different DRAM technologies, described in the IEEE CAL 2015 paper by Kim et al. at http://users.ece.cmu.edu/~omutlu/pub/ramulator_dram_simulator-ieee-cal15.pdf


This Simulator supports these DRAM standards:

- DDR3 (2007), DDR4 (2012)
- LPDDR3 (2012), LPDDR4 (2014)
- GDDR5 (2009)
- WIO (2011), WIO2 (2014)
- HBM (2013)
-----------------------------------------------------
-----------------------------------------------------
BUILDING

- This version requires a C++11 compiler (e.g., clang++, g++-5)
- The process for compiling this version is identical to the process of compiling regular GPGPU-Sim, so first read the GPGPUSim's README file.

-----------------------------------------------------
-----------------------------------------------------
RUNING

- In the gpgpusim.config file:

     Set the gpgpu_ramulator_config to point to the address of the desired DRAM standard. (Supported DRAM standards are provided in Ramulator_configs directory).
      
     Set the gpgpu_ramulator_cache_line_size to the desired L2 cache line size.
      
     Adjust the gpgpu_dram_timing_opt acording to the desired DRAM standard.
      
     In gpgpu_clock_domains, set the <DRAM Clock> acording to the desired DRAM standard.

- The rest of the process for running this version is identical to the process for running regular GPGPU-Sim, so first read the GPGPUSim's README file.

------------------------------------------------------
------------------------------------------------------
Please send questions to nastaran.hajinazar@gmail.com

The current version of the simulator is provided as is, and should be treated as an alpha version.
