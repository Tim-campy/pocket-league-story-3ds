#include "gc_memory_resource.hpp"
#include <cstdlib>
#include <cstdio>
#include <malloc.h>
#include <vector>

namespace { bool enabled=false;std::size_t calls=0; }
void* operator new(std::size_t n){if(enabled)++calls;if(auto p=std::malloc(n?n:1))return p;throw std::bad_alloc();}
void* operator new[](std::size_t n){return ::operator new(n);}
void operator delete(void* p)noexcept{std::free(p);}
void operator delete[](void* p)noexcept{std::free(p);}
void operator delete(void* p,std::size_t)noexcept{std::free(p);}
void operator delete[](void* p,std::size_t)noexcept{std::free(p);}
void* operator new(std::size_t n,std::align_val_t alignment){if(enabled)++calls;if(auto p=_aligned_malloc(n?n:1,std::size_t(alignment)))return p;throw std::bad_alloc();}
void* operator new[](std::size_t n,std::align_val_t a){return ::operator new(n,a);}
void operator delete(void* p,std::align_val_t)noexcept{_aligned_free(p);}
void operator delete[](void* p,std::align_val_t)noexcept{_aligned_free(p);}
void operator delete(void* p,std::size_t,std::align_val_t)noexcept{_aligned_free(p);}
void operator delete[](void* p,std::size_t,std::align_val_t)noexcept{_aligned_free(p);}
std::size_t measure(std::pmr::memory_resource& resource,std::size_t alignment){
    calls=0;enabled=true;auto pointer=resource.allocate(4096,alignment);enabled=false;
    const auto result=calls;resource.deallocate(pointer,4096,alignment);return result;
}
int main(){
    pls::gc::detail::NativeMemoryResource upstream;
    const auto standard=measure(*std::pmr::new_delete_resource(),8);
    const auto native=measure(upstream,8),aligned=measure(upstream,64);
    if(native!=1||aligned!=1)return 1;
    std::pmr::unsynchronized_pool_resource pool(&upstream);
    std::vector<void*> addresses(1000);
    calls=0;enabled=true;for(auto& p:addresses)p=pool.allocate(48,8);enabled=false;
    const auto growth=calls;if(!growth||growth>=addresses.size())return 2;
    for(auto p:addresses)pool.deallocate(p,48,8);
    calls=0;enabled=true;for(auto& p:addresses)p=pool.allocate(48,8);enabled=false;
    const auto reuse=calls;for(auto p:addresses)pool.deallocate(p,48,8);
    // MSVC may release excess completely empty chunks. Require a reduction,
    // not the unsupported promise that every freed chunk stays reserved.
    if(reuse>=growth)return 3;
    std::printf("{\"standard_resource_observed_new\":%zu,\"native_resource_observed_new\":%zu,\"aligned_observed_new\":%zu,\"pool_growth_requests\":%zu,\"pool_reuse_requests\":%zu,\"assertions\":4}\n",standard,native,aligned,growth,reuse);
}
