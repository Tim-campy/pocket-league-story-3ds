#pragma once
#include <memory_resource>
#include <new>

namespace pls::gc::detail {
// Keep upstream allocation in the executable. A DLL-owned standard PMR
// singleton can otherwise bypass the diagnostic global-new replacement.
// Pool operations still run under their owner's existing mutex.
class NativeMemoryResource final : public std::pmr::memory_resource {
    void* do_allocate(std::size_t bytes,std::size_t alignment) override {
        if(alignment>__STDCPP_DEFAULT_NEW_ALIGNMENT__)
            return ::operator new(bytes,std::align_val_t(alignment));
        return ::operator new(bytes);
    }
    void do_deallocate(void* pointer,std::size_t,std::size_t alignment) override {
        if(alignment>__STDCPP_DEFAULT_NEW_ALIGNMENT__)
            ::operator delete(pointer,std::align_val_t(alignment));
        else ::operator delete(pointer);
    }
    bool do_is_equal(const std::pmr::memory_resource& other)const noexcept override {
        return this==&other;
    }
};
}
