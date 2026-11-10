#include "native_allocation_sites.hpp"
#include <array>
#include <atomic>
#include <new>
#include <thread>
int main(){
    std::array<std::array<void*,64>,2> pointers{};
    std::atomic<bool> start{false};std::atomic<unsigned> done{};
    auto worker=[&](unsigned index){while(!start.load(std::memory_order_acquire))std::this_thread::yield();
        for(unsigned i=0;i<64;++i)pointers[index][i]=::operator new(i+1);
        done.fetch_add(1,std::memory_order_release);
    };
    std::thread a(worker,0),b(worker,1);
    pls::allocation_sites::window(0);start.store(true,std::memory_order_release);
    while(done.load(std::memory_order_acquire)!=2)std::this_thread::yield();
    pls::allocation_sites::window(-1);a.join();b.join();
    for(auto&row:pointers)for(auto p:row)::operator delete(p);
    pls::allocation_sites::window(1);
    auto regular=::operator new(128);auto aligned=::operator new(64,std::align_val_t(64));
    pls::allocation_sites::window(-1);
    if(reinterpret_cast<std::uintptr_t>(aligned)%64)return 1;
    ::operator delete(regular);::operator delete(aligned,std::align_val_t(64));
    // These calls must not enter the attributed measurement.
    auto outside=::operator new(999);::operator delete(outside);
    pls::allocation_sites::dump(stdout);
}
