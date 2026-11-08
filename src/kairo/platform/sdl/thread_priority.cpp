#include "thread_priority.hpp"
#include "../../common/managed_thread.hpp"
#if defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#endif

namespace pls::sdl {
#if defined(_WIN32)
namespace {
cs::ThreadPriority read_priority(HANDLE handle){
    const int priority=GetThreadPriority(handle);
    if(priority==THREAD_PRIORITY_ERROR_RETURN)throw cs::SystemException("GetThreadPriority failed");
    if(priority<=THREAD_PRIORITY_LOWEST)return cs::ThreadPriority::Lowest;
    if(priority==THREAD_PRIORITY_BELOW_NORMAL)return cs::ThreadPriority::BelowNormal;
    if(priority==THREAD_PRIORITY_NORMAL)return cs::ThreadPriority::Normal;
    if(priority==THREAD_PRIORITY_ABOVE_NORMAL)return cs::ThreadPriority::AboveNormal;
    return cs::ThreadPriority::Highest;
}
void write_priority(HANDLE handle,cs::ThreadPriority priority){
    const int native[]={THREAD_PRIORITY_LOWEST,THREAD_PRIORITY_BELOW_NORMAL,THREAD_PRIORITY_NORMAL,THREAD_PRIORITY_ABOVE_NORMAL,THREAD_PRIORITY_HIGHEST};
    const auto index=static_cast<std::int32_t>(priority);
    if(index<0 || index>4)throw cs::ArgumentOutOfRangeException();
    if(!SetThreadPriority(handle,native[index]))throw cs::SystemException("SetThreadPriority failed");
}
}
#endif
void install_thread_priority_backend(){
#if defined(_WIN32)
    cs::install_thread_priority_backend({[](std::thread::native_handle_type h){return read_priority(h);},
        [](std::thread::native_handle_type h,cs::ThreadPriority p){write_priority(h,p);},
        []{return read_priority(GetCurrentThread());},[](cs::ThreadPriority p){write_priority(GetCurrentThread(),p);}});
#else
    throw cs::NotSupportedException("Modern profile thread priority backend is not implemented for this host");
#endif
}
} // namespace pls::sdl
