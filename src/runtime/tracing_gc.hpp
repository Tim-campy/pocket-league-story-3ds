#pragma once
// Non-moving tracing heap. Managed references are ordinary pointers. Native
// owners must register roots; opaque native closures are not scanned as heaps.
#include <chrono>
#include <cstddef>
#include <cstdint>
#include <functional>
#include <memory>
#include <type_traits>
#include <utility>

namespace pls::gc {
struct Edges {
    void* context;
    void (*visit)(void*, const void*);
    void operator()(const void* pointer) const { visit(context, pointer); }
};
struct Ranges {
    void* context;
    void (*visit)(void*,const void*,std::size_t);
    void operator()(const void* pointer,std::size_t bytes)const{visit(context,pointer,bytes);}
};
struct Descriptor {
    // Maps enumerate only pointer-bearing fields, including embedded values.
    // Neither callback may allocate managed objects or enter a safepoint.
    void (*trace)(const void*, Edges) = nullptr;
    void (*destroy)(void*) noexcept = nullptr;
    const char* name = nullptr;
    void (*ranges)(const void*,Ranges) = nullptr;
    void* (*managed_base)(void*) = nullptr;
    // All retained native buffers, including non-pointer-bearing textures and
    // audio. Accounting never turns their contents into managed references.
    void (*retained_ranges)(const void*,Ranges) = nullptr;
};
struct Statistics {
    std::size_t objects = 0, bytes = 0, allocations = 0, allocated_bytes = 0;
    std::size_t collections = 0, reclaimed_objects = 0, reclaimed_bytes = 0;
    std::size_t last_roots = 0;
    std::uint64_t pause_ns = 0, last_pause_ns = 0;
    std::size_t body_bytes = 0, external_bytes = 0, peak_bytes = 0;
    std::size_t external_growth_bytes = 0;
    std::uint64_t interval_max_pause_ns = 0, accounting_ns = 0;
};
class Heap {
    struct Impl;
    std::unique_ptr<Impl> impl_;
public:
    Heap();
    ~Heap();
    Heap(const Heap&) = delete;
    Heap& operator=(const Heap&) = delete;
    // Each managed thread registers its real stack bounds before touching the
    // heap. Windows discovers these; ARM callers supply libctru stack bounds.
    void enter(std::uintptr_t stack_bottom = 0, std::uintptr_t stack_top = 0);
    void leave();
    void safepoint();
    void begin_native_wait();
    void end_native_wait();
    void begin_construction();
    void end_construction() noexcept;
    void adopt(void* object, std::size_t bytes, Descriptor descriptor);
    // Separately allocated array/vector payloads are interior-pointer ranges
    // owned by the containing managed object, NOT conservatively traced heaps.
    void add_range(void* owner, const void* begin, std::size_t bytes);
    void remove_range(const void* begin);
    std::size_t add_roots(std::function<void(Edges)> provider);
    void remove_roots(std::size_t token);
    void collect();
    void inspect(const std::function<void(void*,std::size_t,const Descriptor&)>& visitor,const std::function<void()>& finish = {});
    bool collect_if_needed();
    bool collection_due() const;
    void threshold(std::size_t bytes);
    void limit(std::size_t bytes);
    Statistics statistics() const;
    Statistics statistics_and_reset_pause_peak();
    // Refresh capacities at a cooperative safe point, even when no new object
    // body was allocated. Growth of an existing vector must trigger the limit.
    void refresh_memory_accounting();
    bool contains(const void* pointer) const;
    // Runtime-only weak cache tokens. These do not keep the object alive and
    // distinguish a later allocation which reuses the same address.
    std::uint64_t identity(const void* pointer) const;
    bool alive(const void* pointer, std::uint64_t identity) const;
    bool collection_requested() const;
    void stop_timeout(std::chrono::milliseconds value);
};
class Mutator {
    Heap& heap_;
public:
    explicit Mutator(Heap& heap, std::uintptr_t bottom = 0, std::uintptr_t top = 0)
        : heap_(heap) { heap_.enter(bottom, top); }
    ~Mutator() { heap_.leave(); }
    Mutator(const Mutator&) = delete;
    Mutator& operator=(const Mutator&) = delete;
};
class NativeWait {
    Heap& heap_;
public:
    explicit NativeWait(Heap& heap) : heap_(heap) { heap_.begin_native_wait(); }
    ~NativeWait() { heap_.end_native_wait(); }
    NativeWait(const NativeWait&) = delete;
    NativeWait& operator=(const NativeWait&) = delete;
};
class Roots {
    Heap& heap_;
    std::size_t token_;
public:
    Roots(Heap& heap, std::function<void(Edges)> provider)
        : heap_(heap), token_(heap.add_roots(std::move(provider))) {}
    ~Roots() { heap_.remove_roots(token_); }
    Roots(const Roots&) = delete;
    Roots& operator=(const Roots&) = delete;
};
template<class T, class... A>
T* make_described(Heap& heap, Descriptor descriptor, A&&... arguments) {
    // Root allocations made by nested constructors until the outermost object
    // is registered. A constructor may itself call GC.Collect.
    heap.safepoint();
    heap.begin_construction();
    struct End { Heap& heap; ~End() { heap.end_construction(); } } end{heap};
    auto object = std::make_unique<T>(std::forward<A>(arguments)...);
    descriptor.destroy=[](void* p) noexcept { delete static_cast<T*>(p); };
    heap.adopt(object.get(), sizeof(T), descriptor);
    return object.release();
}
template<class T, class... A>
T* make(Heap& heap, void (*trace)(const void*, Edges), A&&... arguments) {
    return make_described<T>(heap,Descriptor{trace},std::forward<A>(arguments)...);
}
}
