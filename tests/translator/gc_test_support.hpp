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
