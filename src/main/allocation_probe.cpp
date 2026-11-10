// Separate allocation experiment. Never linked into the CPU timing executable.
#include "allocation_probe.hpp"
#include <cstdlib>
#include <new>
#if defined(_WIN32)
#include <malloc.h>
#elif defined(__3DS__)
#include <malloc.h>
#endif
#if defined(PLS_REPORT_ALLOCATION_FAILURE)
#include <cstdio>
#include <unwind.h>
#endif
#if !defined(PLS_ALLOCATION_PROBE) && !defined(PLS_REPORT_ALLOCATION_FAILURE)
#error Allocation hooks require their explicitly separate probe build
#endif
namespace {
void* allocate(std::size_t requested,std::size_t alignment=0){
    for(;;){void*p=nullptr;const auto size=requested?requested:1;
        if(!alignment)p=std::malloc(size);
#if defined(_WIN32)
        else p=_aligned_malloc(size,alignment);
#elif defined(__3DS__)
        else p=memalign(alignment,size);
#else
        else if(posix_memalign(&p,alignment,size)!=0)p=nullptr;
#endif
        if(p){
#if defined(PLS_ALLOCATION_PROBE)
            pls::allocation_probe::allocated(requested);
#endif
            return p;
        }
        auto handler=std::get_new_handler();if(!handler){
#if defined(PLS_REPORT_ALLOCATION_FAILURE)
            std::fprintf(stderr,"PLS_ARM_ALLOCATION_FAILURE bytes=%u\n",unsigned(requested));
            _Unwind_Backtrace([](_Unwind_Context*context,void*){
                std::fprintf(stderr,"PLS_ARM_ALLOCATION_FRAME=%p\n",reinterpret_cast<void*>(_Unwind_GetIP(context)));
                return _URC_NO_REASON;
            },nullptr);std::fflush(stderr);
#endif
            throw std::bad_alloc();
        }handler();
    }
}
void aligned_free(void*p){
#if defined(_WIN32)
    _aligned_free(p);
#else
    std::free(p);
#endif
}
}
void*operator new(std::size_t n){return allocate(n);}void*operator new[](std::size_t n){return allocate(n);}
void operator delete(void*p)noexcept{std::free(p);}void operator delete[](void*p)noexcept{std::free(p);}
void operator delete(void*p,std::size_t)noexcept{std::free(p);}void operator delete[](void*p,std::size_t)noexcept{std::free(p);}
void*operator new(std::size_t n,std::align_val_t a){return allocate(n,std::size_t(a));}void*operator new[](std::size_t n,std::align_val_t a){return allocate(n,std::size_t(a));}
void operator delete(void*p,std::align_val_t)noexcept{aligned_free(p);}void operator delete[](void*p,std::align_val_t)noexcept{aligned_free(p);}
void operator delete(void*p,std::size_t,std::align_val_t)noexcept{aligned_free(p);}void operator delete[](void*p,std::size_t,std::align_val_t)noexcept{aligned_free(p);}
