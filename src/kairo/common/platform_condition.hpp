#pragma once
#include <chrono>
#include <condition_variable>
#include <future>

namespace pls::cs {
// The r68/libctru 2.7.1/Azahar notification fixture can lose an indefinite
// waiter. Rechecking the protected predicate permits spurious wakeups without
// weakening the mutex or allowing progress while the condition is false.
template<class Condition,class Lock,class Predicate>
void platform_condition_wait(Condition&condition,Lock&lock,Predicate predicate){
#if defined(__3DS__)
    while(!predicate())condition.wait_for(lock,std::chrono::milliseconds(1));
#else
    condition.wait(lock,predicate);
#endif
}
template<class Future>void platform_future_wait(Future&future){
#if defined(__3DS__)
    while(future.wait_for(std::chrono::milliseconds(1))==std::future_status::timeout){}
#else
    future.wait();
#endif
}
}
