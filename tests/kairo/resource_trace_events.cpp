#include "resource_load_trace.hpp"
#include <atomic>
#include <thread>

int main() {
    using namespace pls::diagnostic;
    enable_resource_events(true);
    for(unsigned i=0;i<600;++i)resource_event("overflow",i,7,4);
    flush_resource_events();
    std::atomic<unsigned> finished{0};
    auto produce=[&](const char* name,unsigned ns) {
        for(unsigned i=0;i<1000;++i)resource_event(name,i,ns,9);
        ++finished;
    };
    std::thread left(produce,"left",11),right(produce,"right",13);
    while(finished.load()!=2){flush_resource_events();std::this_thread::yield();}
    left.join();right.join();flush_resource_events();
}
