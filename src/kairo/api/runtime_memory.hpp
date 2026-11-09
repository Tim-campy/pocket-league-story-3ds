#pragma once
#include "semantic_runtime.hpp"
namespace pls::kairo {
// Payload of the native process allocator heaps. Separate from working set,
// virtual reserve, executable images and the managed-object-only GC registry.
struct NativeHeapPayload {std::uint64_t free_bytes{},busy_bytes{},heaps{};};
NativeHeapPayload native_heap_payload();
inline std::int64_t native_heap_free(){auto n=native_heap_payload().free_bytes;if(n>std::uint64_t(INT64_MAX))throw cs::OverflowException();return std::int64_t(n);}
inline std::int64_t native_heap_total(){auto n=native_heap_payload();if(n.free_bytes>std::uint64_t(INT64_MAX)||n.busy_bytes>std::uint64_t(INT64_MAX)-n.free_bytes)throw cs::OverflowException();return std::int64_t(n.free_bytes+n.busy_bytes);}
}
