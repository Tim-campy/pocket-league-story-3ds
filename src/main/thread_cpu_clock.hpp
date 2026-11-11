#pragma once
#include <cstdint>
#include <stdexcept>
#if defined(_WIN32)
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#elif !defined(__3DS__)
#include <time.h>
#endif
namespace pls::measurement {
struct ThreadCpu {
    std::uint64_t ns=0,cycles=0;
    static ThreadCpu now() {
#if defined(_WIN32)
        FILETIME creation{},exit{},kernel{},user{};ULONG64 cycles{};
        if(!GetThreadTimes(GetCurrentThread(),&creation,&exit,&kernel,&user)||
           !QueryThreadCycleTime(GetCurrentThread(),&cycles))
            throw std::runtime_error("Main-thread CPU clock failed");
        const auto ticks=[](FILETIME t){return (std::uint64_t(t.dwHighDateTime)<<32)|t.dwLowDateTime;};
        // Cycles are reported separately: variable CPU frequency makes division
        // by a nominal GHz value an invalid conversion to CPU milliseconds.
        return {(ticks(kernel)+ticks(user))*100,cycles};
#elif !defined(__3DS__)
        timespec t{};if(clock_gettime(CLOCK_THREAD_CPUTIME_ID,&t))throw std::runtime_error("Thread CPU clock failed");
        return {std::uint64_t(t.tv_sec)*1000000000+t.tv_nsec,0};
#else
        return {}; // System ticks are not scheduled thread CPU on this target.
#endif
    }
};
}
