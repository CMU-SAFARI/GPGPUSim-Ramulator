GPGPUSim+Ramulator

This is the source code for GPGPUSim+Ramulator simulator which is the GPGPUSim integrated with the Ramulator DRAM simaltor. In this version, GPGPUSim uses Ramulator to silmulate the DRAM. This Simulator supports these DRAM standards:

- DDR3 (2007), DDR4 (2012)
- LPDDR3 (2012), LPDDR4 (2014)
- GDDR5 (2009)
- WIO (2011), WIO2 (2014)
- HBM (2013)
-----------------------------------------------------
-----------------------------------------------------
BUILDING

- This version requires a C++11 compiler (e.g., clang++, g++-5)
- The process for compiling this version is identical to the process of compiling regular GPGPU-Sim.

-----------------------------------------------------
-----------------------------------------------------
RUNING

- In the gpgpusim.config file, set the gpgpu_ramulator_config to point to the address of the desired DRAM standard. (Supported DRAM standards are provided in Ramulator_configs directory)

- The rest of the process for running this version is identical to the process for running regular GPGPU-Sim, so first read the GPGPUSim's README file.

------------------------------------------------------
------------------------------------------------------
Please send questions to nastaran.hajinazar@gmail.com

The current version of the simulator is provided as is, and should be treated as an alpha version.
