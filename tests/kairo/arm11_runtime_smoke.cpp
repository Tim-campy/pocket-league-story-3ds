// Asset-free ARM11 portability diagnostic. Local SD output only.
#include "semantic_runtime.hpp"
#include <3ds.h>
#include <chrono>
#include <atomic>
#include <malloc.h>
#include <cstdio>
#include <thread>
#include <mutex>
#include <condition_variable>

int main(){
    auto* log=std::fopen("sdmc:/pls-benchmark/runtime-smoke.log","w");
    if(!log)return 2;
    auto stage=[&](const char* text){std::fprintf(log,"%s\n",text);std::fflush(log);};
    try{
        std::fprintf(log,"memory application_used=%u application_capacity=%u heap_used=%d heap_free=%d\n",osGetMemRegionUsed(MEMREGION_APPLICATION),osGetMemRegionSize(MEMREGION_APPLICATION),mallinfo().uordblks,mallinfo().fordblks);std::fflush(log);
        stage("clock-before");
        auto begin=std::chrono::steady_clock::now();auto tick=svcGetSystemTick();
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
        std::fprintf(log,"clock-after chrono_ns=%lld ticks=%llu\n",
            (long long)std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now()-begin).count(),
            (unsigned long long)(svcGetSystemTick()-tick));std::fflush(log);
        stage("thread-before");
        int result=0;std::thread worker([&]{result=42;});worker.join();
        if(result!=42)throw std::runtime_error("Thread result differs");
        stage("thread-after");
        {std::mutex mutex;std::condition_variable changed;std::unique_lock<std::mutex> lock(mutex);
         stage("condition-before");changed.wait_for(lock,std::chrono::milliseconds(2));stage("condition-after");}
        stage("gc-before");
        {pls::cs::GcMutatorScope scope;auto array=pls::cs::Array<std::int32_t>::make(2);array[0]=123;
         pls::cs::gc_collect(pls::cs::gc_max_generation());if(array[0]!=123)throw std::runtime_error("GC root lost");}
        stage("gc-after");
        std::fprintf(log,"ABI int=%u long=%u pointer=%u float=%u double=%u atomic64_alignment=%u\n",
            unsigned(sizeof(int)),unsigned(sizeof(long)),unsigned(sizeof(void*)),unsigned(sizeof(float)),unsigned(sizeof(double)),unsigned(alignof(std::atomic<std::uint64_t>)));
        stage("PASS");std::fclose(log);return 0;
    }catch(const std::exception&e){std::fprintf(log,"FAIL %s\n",e.what());std::fclose(log);return 1;}
}
