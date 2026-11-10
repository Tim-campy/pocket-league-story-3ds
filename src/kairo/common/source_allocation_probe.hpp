#pragma once
#include <cstdio>
#include <utility>
#if defined(PLS_ALLOCATION_PROBE)
namespace pls::source_allocations {
void record(const char*kind,const char*site,bool completed)noexcept;
void window(int index)noexcept;
void dump(std::FILE*output)noexcept;
}
#else
namespace pls::source_allocations {inline void window(int)noexcept{}inline void dump(std::FILE*)noexcept{}}
#endif
namespace pls::source_allocations {
// Only completed source operations. Throwing expressions never enter this
// helper; no extra lambda or allocation is introduced by the observer.
template<class T>decltype(auto) completed(const char*kind,const char*site,T&&value)noexcept{
#if defined(PLS_ALLOCATION_PROBE)
    record(kind,site,true);
#else
    (void)kind;(void)site;
#endif
    return std::forward<T>(value);
}
}
