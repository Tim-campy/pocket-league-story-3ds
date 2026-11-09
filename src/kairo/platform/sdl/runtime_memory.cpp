#include "runtime_memory.hpp"
#if defined(_WIN32)
#define NOMINMAX
#include <Windows.h>
namespace pls::sdl {
kairo::NativeHeapPayload heap_payload(std::uintptr_t handle){
    if(!handle)throw cs::ArgumentNullException();auto heap=reinterpret_cast<HANDLE>(handle);kairo::NativeHeapPayload result;DWORD error=ERROR_SUCCESS,unlock_error=ERROR_SUCCESS;
    {cs::GcNativeBlockingScope parked;
        if(!HeapLock(heap))error=GetLastError();
        else{PROCESS_HEAP_ENTRY entry{};while(HeapWalk(heap,&entry)){
            if(entry.wFlags&PROCESS_HEAP_ENTRY_BUSY)result.busy_bytes+=entry.cbData;
            else if(!(entry.wFlags&(PROCESS_HEAP_REGION|PROCESS_HEAP_UNCOMMITTED_RANGE)))result.free_bytes+=entry.cbData;
        }error=GetLastError();if(!HeapUnlock(heap))unlock_error=GetLastError();}
    }
    if(error!=ERROR_NO_MORE_ITEMS||unlock_error!=ERROR_SUCCESS)throw cs::IOException("Native heap enumeration failed");result.heaps=1;return result;
}
}
namespace pls::kairo {
NativeHeapPayload native_heap_payload(){
    std::vector<HANDLE> handles;bool complete=false;
    for(int attempt=0;attempt<3;++attempt){const auto count=GetProcessHeaps(0,nullptr);if(!count)throw cs::IOException("Cannot count native process heaps");handles.resize(count);const auto found=GetProcessHeaps(count,handles.data());if(!found)throw cs::IOException("Cannot enumerate native process heaps");if(found<=count){handles.resize(found);complete=true;break;}}
    if(!complete)throw cs::IOException("Native heap list changed during sampling");
    NativeHeapPayload result;for(auto handle:handles){auto one=sdl::heap_payload(reinterpret_cast<std::uintptr_t>(handle));result.free_bytes+=one.free_bytes;result.busy_bytes+=one.busy_bytes;result.heaps+=one.heaps;}return result;
}
}
#else
namespace pls::sdl {kairo::NativeHeapPayload heap_payload(std::uintptr_t){throw cs::NotSupportedException("Native heap provider is not implemented for this PC platform");}}
namespace pls::kairo {NativeHeapPayload native_heap_payload(){throw cs::NotSupportedException("Native heap provider is not implemented for this PC platform");}}
#endif
