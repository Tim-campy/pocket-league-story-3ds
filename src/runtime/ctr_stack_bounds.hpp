#pragma once
// libctru 2.7.1 ABI. tools/test_ctr_stack_layout.py validates this mirror
// against the pinned official internal.h before an authenticated ARM build.
#include <3ds.h>
#include <sys/reent.h>
#include <cstdint>
#include <cstddef>
#include <cstring>
#include <stdexcept>
extern "C" {
extern std::uint32_t __ctru_heap;
extern std::uint32_t __stacksize__;
extern const std::size_t __tdata_align;
}
namespace pls::gc::ctr_detail {
struct ThreadLayout {
    Handle handle;
    ThreadFunc ep;
    void* arg;
    int rc;
    bool detached, finished;
    struct _reent reent;
    void* stacktop;
};
struct Bounds { std::uintptr_t bottom, top; };
inline std::uintptr_t align_up(std::uintptr_t n, std::size_t a) {
    return (n+a-1)&~(a-1);
}
inline Bounds current_stack() {
    static_assert(sizeof(void*) == 4);
    const auto current = threadGetCurrent();
    if (!current)
        return {__ctru_heap, align_up(static_cast<std::uintptr_t>(__ctru_heap)+__stacksize__, 8)};
    const auto alignment = __tdata_align > 8 ? __tdata_align : 8;
    if ((alignment&(alignment-1)) != 0)
        throw std::logic_error("Unexpected libctru TLS alignment");
    void* top = nullptr;
    // Read the opaque SDK object without violating C++ strict aliasing.
    std::memcpy(&top, reinterpret_cast<const unsigned char*>(current)+offsetof(ThreadLayout,stacktop), sizeof(top));
    return {reinterpret_cast<std::uintptr_t>(current)+align_up(sizeof(ThreadLayout),alignment),
            reinterpret_cast<std::uintptr_t>(top)};
}
}
