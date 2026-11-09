#define NOMINMAX
#include <Windows.h>
#include "../../src/kairo/platform/sdl/runtime_memory.hpp"
#include <iostream>
int main(){using namespace pls;cs::GcMutatorScope scope;unsigned count=0;auto check=[&](bool value){if(!value)throw cs::InvalidOperationException("Native heap payload fixture mismatch");++count;};
    HANDLE heap=HeapCreate(0,65536,0);if(!heap)throw cs::IOException("Private test heap creation failed");
    cs::run_finally([&]{auto before=sdl::heap_payload(reinterpret_cast<std::uintptr_t>(heap));check(before.busy_bytes==0);
        auto a=HeapAlloc(heap,0,513),b=HeapAlloc(heap,0,8192),c=HeapAlloc(heap,0,131072);if(!a||!b||!c)throw cs::OutOfMemoryException();
        const auto expected=HeapSize(heap,0,a)+HeapSize(heap,0,b)+HeapSize(heap,0,c);auto full=sdl::heap_payload(reinterpret_cast<std::uintptr_t>(heap));check(full.busy_bytes==expected);check(full.heaps==1);
        check(HeapFree(heap,0,b)!=0);auto freed=sdl::heap_payload(reinterpret_cast<std::uintptr_t>(heap));check(freed.busy_bytes==HeapSize(heap,0,a)+HeapSize(heap,0,c));
        auto all=kairo::native_heap_payload();check(all.heaps>=1&&all.busy_bytes>=freed.busy_bytes);check(kairo::native_heap_total()>0);check(kairo::native_heap_free()>=0);
        bool rejected=false;try{sdl::heap_payload(0);}catch(const cs::ArgumentNullException&){rejected=true;}check(rejected);
    },[&]{HeapDestroy(heap);});
    std::cout<<"{\"status\":\"PASS\",\"assertions\":"<<count<<",\"private_heap_payload_compared_with_HeapSize\":true,\"game_boot\":false}\n";
}
