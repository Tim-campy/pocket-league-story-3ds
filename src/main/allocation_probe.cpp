// Separate allocation experiment. Never linked into the CPU timing executable.
#include "allocation_probe.hpp"
#include "native_allocation_sites.hpp"
#include <cstdlib>
#include <new>
#if defined(_WIN32)
#include <malloc.h>
#define NOMINMAX
#include <windows.h>
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
#if defined(PLS_ALLOCATION_PROBE) && defined(_WIN32)
namespace pls::allocation_sites {
namespace {
constexpr unsigned capacity=16384,depth=10,windows=300;
struct Site{void*stack[depth]{};unsigned frames{};std::uint64_t count{},bytes{};};
Site sites[capacity];
std::atomic<int> active_window{-1};
std::atomic<unsigned> in_flight{};
std::atomic_flag table_lock=ATOMIC_FLAG_INIT;
std::atomic<std::uint64_t> counts[windows]{},sizes[windows]{},overflow{};
thread_local bool inside=false;
std::atomic<std::uint64_t> recursive{};
}
void window(int index)noexcept{active_window.store(index,std::memory_order_release);}
void record(std::size_t bytes)noexcept{
    in_flight.fetch_add(1,std::memory_order_acquire);
    const int index=active_window.load(std::memory_order_acquire);
    if(index<0||index>=int(windows)){in_flight.fetch_sub(1,std::memory_order_release);return;}
    if(inside){recursive.fetch_add(1,std::memory_order_relaxed);in_flight.fetch_sub(1,std::memory_order_release);return;}
    inside=true;void*stack[depth]{};
    const unsigned frames=CaptureStackBackTrace(1,depth,stack,nullptr);
    std::uintptr_t hash=1469598103934665603ull;
    for(unsigned i=0;i<frames;++i)hash=(hash^reinterpret_cast<std::uintptr_t>(stack[i]))*1099511628211ull;
    counts[index].fetch_add(1,std::memory_order_relaxed);sizes[index].fetch_add(bytes,std::memory_order_relaxed);
    while(table_lock.test_and_set(std::memory_order_acquire))YieldProcessor();
    bool stored=false;
    for(unsigned probe=0;probe<capacity;++probe){auto&site=sites[(hash+probe)%capacity];
        bool equal=site.frames==frames;
        for(unsigned i=0;equal&&i<frames;++i)equal=site.stack[i]==stack[i];
        if(!site.count||equal){if(!site.count){site.frames=frames;for(unsigned i=0;i<frames;++i)site.stack[i]=stack[i];}++site.count;site.bytes+=bytes;stored=true;break;}
    }
    if(!stored)overflow.fetch_add(1,std::memory_order_relaxed);
    table_lock.clear(std::memory_order_release);inside=false;in_flight.fetch_sub(1,std::memory_order_release);
}
void dump(std::FILE*output)noexcept{
    window(-1);while(in_flight.load(std::memory_order_acquire))YieldProcessor();
    std::fprintf(output,"PLS_ALLOC_TRACE_META base=%llu overflow=%llu recursive=%llu\n",
        static_cast<unsigned long long>(reinterpret_cast<std::uintptr_t>(GetModuleHandleW(nullptr))),
        static_cast<unsigned long long>(overflow.load()),static_cast<unsigned long long>(recursive.load()));
    for(unsigned i=0;i<windows;++i)std::fprintf(output,"PLS_ALLOC_TRACE_WINDOW %u %llu %llu\n",i,
        static_cast<unsigned long long>(counts[i].load()),static_cast<unsigned long long>(sizes[i].load()));
    for(const auto&site:sites)if(site.count){std::fprintf(output,"PLS_ALLOC_SITE %llu %llu",static_cast<unsigned long long>(site.count),static_cast<unsigned long long>(site.bytes));
        for(unsigned i=0;i<site.frames;++i)std::fprintf(output," %llu",static_cast<unsigned long long>(reinterpret_cast<std::uintptr_t>(site.stack[i])));
        std::fputc('\n',output);
    }std::fflush(output);
}
}
#endif
#if defined(PLS_ALLOCATION_PROBE)
namespace pls::source_allocations {
namespace {
struct Site{const char*kind{};const char*id{};std::uint64_t completed{},failed{};};
Site sites[32768];std::atomic_flag gate=ATOMIC_FLAG_INIT;
std::atomic<int> active{-1};std::atomic<unsigned> in_flight{};
std::atomic<std::uint64_t> completed[300]{},failed[300]{},overflow{};
bool equal(const char*a,const char*b){while(*a&&*a==*b){++a;++b;}return *a==*b;}
}
void window(int index)noexcept{active.store(index,std::memory_order_release);}
void record(const char*kind,const char*id,bool success)noexcept{
    in_flight.fetch_add(1,std::memory_order_acquire);const int index=active.load(std::memory_order_acquire);
    if(index<0||index>=300){in_flight.fetch_sub(1,std::memory_order_release);return;}
    (success?completed[index]:failed[index]).fetch_add(1,std::memory_order_relaxed);
    std::uint64_t hash=1469598103934665603ull;
    for(const char*p=id;*p;++p)hash=(hash^static_cast<unsigned char>(*p))*1099511628211ull;
    for(const char*p=kind;*p;++p)hash=(hash^static_cast<unsigned char>(*p))*1099511628211ull;
    while(gate.test_and_set(std::memory_order_acquire)){}
    bool stored=false;
    for(unsigned i=0;i<32768;++i){auto&s=sites[(hash+i)%32768];
        if(!s.id||(equal(s.id,id)&&equal(s.kind,kind))){s.id=id;s.kind=kind;if(success)++s.completed;else ++s.failed;stored=true;break;}}
    if(!stored)overflow.fetch_add(1,std::memory_order_relaxed);
    gate.clear(std::memory_order_release);in_flight.fetch_sub(1,std::memory_order_release);
}
void dump(std::FILE*output)noexcept{
    window(-1);while(in_flight.load(std::memory_order_acquire)){}
    std::fprintf(output,"PLS_SOURCE_META overflow=%llu scope=translated_source_operations_not_CLR_heap\n",static_cast<unsigned long long>(overflow.load()));
    for(unsigned i=0;i<300;++i)std::fprintf(output,"PLS_SOURCE_WINDOW %u %llu %llu\n",i,static_cast<unsigned long long>(completed[i].load()),static_cast<unsigned long long>(failed[i].load()));
    for(const auto&s:sites)if(s.id)std::fprintf(output,"PLS_SOURCE_SITE %s %llu %llu %s\n",s.kind,static_cast<unsigned long long>(s.completed),static_cast<unsigned long long>(s.failed),s.id);
    std::fflush(output);
}
}
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
            pls::allocation_sites::record(requested);
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
