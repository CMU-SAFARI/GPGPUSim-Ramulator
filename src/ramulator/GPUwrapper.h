#ifndef __GPU_WRAPPER_H
#define __GPU_WRAPPER_H

#include <string>

#include "Config.h"

using namespace std;

namespace ramulator
{

class Request;
class MemoryBase;

class GPUwrapper 
{
public:
    MemoryBase *mem;
    double tCK;
    GPUwrapper(const Config& configs, int cacheline);
    ~GPUwrapper();
    void tick();
    bool send(Request req);
    void finish(void);
};

} /*namespace ramulator*/

#endif /*__GPU_WRAPPER_H*/
