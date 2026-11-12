#pragma once
#include "semantic_runtime.hpp"
#include <thread>
#include <exception>

// Lifetime assertions must not depend on a compiler erasing dead stack words.
// A finished producer leaves no registered conservative stack. Deliberately
// retained roots live in caller-owned slots, captured by the caller's wait.
template<class F>void isolated_gc_mutator(F&& action){
    std::exception_ptr isolated_failure;
    std::thread worker([&]{pls::cs::GcMutatorScope mutator;try{action();}catch(...){isolated_failure=std::current_exception();}});
    {pls::cs::GcNativeBlockingScope wait;worker.join();}
    if(isolated_failure)std::rethrow_exception(isolated_failure);
}
// Collect from a finished worker too: the collector's own frames otherwise
// leave stale heap words in the caller's later stack slots. Measured root of
// the former intermittent failure: an uninitialized slot of Heap::collect's
// frame on the main thread, interior to a recycled delegate buffer.
inline void isolated_gc_collect(){isolated_gc_mutator([]{pls::cs::gc_collect();});}
// Zero the stack area that the next calls at this depth will occupy. Second
// measured root (main thread, native wait): an uninitialized slot holding a
// stale word left by an earlier Array<int>::at call at the same depth, which
// malloc had made interior to a recycled Array<Object*> buffer.
#if defined(_MSC_VER)
__declspec(noinline)
#else
__attribute__((noinline))
#endif
inline void scrub_stack(){volatile unsigned char area[64*1024];for(std::size_t i=0;i<sizeof(area);++i)area[i]=0;}
