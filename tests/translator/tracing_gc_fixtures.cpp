#include "tracing_gc.hpp"
#include <atomic>
#include <chrono>
#include <iostream>
#include <stdexcept>
#include <string>
#include <thread>
#include <vector>
#if defined(__3DS__)
#include "ctr_stack_bounds.hpp"
#include <cstdio>
#define PLS_TEST_NOINLINE __attribute__((noinline))
#else
#define PLS_TEST_NOINLINE __declspec(noinline)
#endif

using namespace pls::gc;
namespace {
int assertions = 0;
const char* current_fixture = "startup";
void check(bool value) { ++assertions; if (!value) throw std::runtime_error("Tracing GC assertion " + std::to_string(assertions)); }
void fixture_yield() {
#if defined(__3DS__)
    // devkitARM's sched_yield returns ENOSYS; a higher-priority main-thread
    // spin would prevent the libctru worker from ever entering its function.
    std::this_thread::sleep_for(std::chrono::milliseconds(1));
#else
    std::this_thread::yield();
#endif
}
struct Node {
    Node* edge = nullptr;
    std::uintptr_t scalar = 0;
    int value = 37;
    static void trace(const void* p, Edges edges) { edges(static_cast<const Node*>(p)->edge); }
};
template<class F> void isolated(Heap& heap, F action) {
    // No object addresses from this worker remain on the collector's stack.
    std::exception_ptr failure;
    std::thread thread([&] { try { Mutator mutator(heap); action(); } catch (...) { failure=std::current_exception(); } });
    { NativeWait wait(heap); thread.join(); }
    if(failure)std::rethrow_exception(failure);
}
void collect_without_caller_roots(Heap& heap) {
    // Only use after this fixture has dropped all intended caller roots. Its
    // previous conservative snapshots/registers may still contain dead values.
    // Test exact heap reachability with a fresh collector and no caller stack.
    heap.leave();
    std::exception_ptr failure;
    std::thread collector([&]{try{
#if defined(__3DS__)
        // libctru reuses malloc-backed worker stacks without zeroing them.
        // Overwrite the retired test worker's unused frame slots, so this
        // exact-reclamation assertion is not testing conservative false roots.
        volatile std::uintptr_t clean_frame[1024]{};
        (void)clean_frame;
#endif
        Mutator scope(heap);heap.collect();
    }catch(...){failure=std::current_exception();}});
    collector.join();heap.enter();
    if(failure)std::rethrow_exception(failure);
}
struct NativeResource {
    static std::atomic<int> payloads;
    bool open = true;
    NativeResource() { ++payloads; }
    void dispose() { if (open) { open = false; --payloads; } }
    ~NativeResource() { dispose(); }
};
std::atomic<int> NativeResource::payloads{0};
extern "C" PLS_TEST_NOINLINE void* register_allocate(Heap* heap) { return make<Node>(*heap, &Node::trace); }
extern "C" PLS_TEST_NOINLINE void register_collect(Heap* heap) { heap->collect(); }
extern "C" void* register_only_fixture(Heap* heap);
#if defined(__3DS__)
extern "C" void* register_vfp_only_fixture(Heap* heap);
#endif
void precise_and_cycles() {
    Heap heap; Mutator mutator(heap);
    std::vector<Node*> roots;
    Roots provider(heap, [&](Edges edges) { for (auto p : roots) edges(p); });
    isolated(heap, [&] {
        auto a = make<Node>(heap, &Node::trace);
        auto b = make<Node>(heap, &Node::trace);
        auto scalar_only = make<Node>(heap, &Node::trace);
        a->edge = b; b->edge = a;
        a->scalar = reinterpret_cast<std::uintptr_t>(scalar_only);
        roots.push_back(a);
    });
    // Retire the collector thread between observations: its previous register
    // snapshot may conservatively retain a node after explicit roots clear.
    isolated(heap,[&]{heap.collect();});
    check(heap.statistics().objects == 2); // Integer-looking pointers in heap are NOT roots.
    check(heap.statistics().reclaimed_objects == 1);
    roots.clear();
    isolated(heap,[&]{heap.collect();});
    check(heap.statistics().objects == 0); // Unreachable exact cycle.
}
void interior_and_payload() {
    Heap heap; Mutator mutator(heap);
    const void* interior = nullptr;
    Roots root(heap, [&](Edges edges) { edges(interior); });
    isolated(heap, [&] {
        auto node = make<Node>(heap, &Node::trace);
        interior = &node->value;
    });
    heap.collect();
    check(heap.statistics().objects == 1);
    check(*static_cast<const int*>(interior) == 37);
    interior = nullptr;
    // Separate storage must resolve back to its owning managed object.
    struct Array {
        std::vector<int> values = std::vector<int>(32, 19);
    };
    isolated(heap, [&] {
        auto array = make<Array>(heap, nullptr);
        heap.add_range(array, array->values.data(), array->values.size() * sizeof(int));
        interior = &array->values[17];
    });
    heap.collect();
    check(*static_cast<const int*>(interior) == 19);
    check(heap.statistics().objects >= 1); // Previous stack read may conservatively retain Node.
}
void native_lifetime() {
    Heap heap; Mutator mutator(heap);
    NativeResource* root = nullptr;
    Roots provider(heap, [&](Edges edges) { edges(root); });
    isolated(heap, [&] { root = make<NativeResource>(heap, nullptr); });
    check(NativeResource::payloads == 1);
    heap.collect(); check(NativeResource::payloads == 1);
    isolated(heap, [&] { root->dispose(); });
    check(NativeResource::payloads == 0); // Explicit release is immediate even while reachable.
    root = nullptr;
    heap.collect(); check(heap.statistics().objects == 0);
    isolated(heap, [&] { (void)make<NativeResource>(heap, nullptr); });
    check(NativeResource::payloads == 1); // No refcount-triggered destruction.
    heap.collect(); check(NativeResource::payloads == 0);
}
void registers() {
    Heap heap; Mutator mutator(heap);
    auto node = static_cast<Node*>(register_only_fixture(&heap));
    check(heap.contains(node)); check(node->value == 37);
#if defined(__3DS__)
    auto vfp_node=static_cast<Node*>(register_vfp_only_fixture(&heap));
    check(heap.contains(vfp_node)); check(vfp_node->value==37);
#endif
}
void nested_construction() {
    Heap heap; Mutator mutator(heap);
    struct Parent {
        Node* child;
        explicit Parent(Heap& heap) : child(make<Node>(heap, &Node::trace)) {
            heap.collect();
            if (!heap.contains(child)) throw std::runtime_error("Nested constructor lost child");
        }
        static void trace(const void* p, Edges edges) { edges(static_cast<const Parent*>(p)->child); }
    };
    auto parent = make<Parent>(heap, &Parent::trace, heap);
    heap.collect(); check(parent->child->value == 37); check(heap.statistics().objects == 2);
}
void workers() {
    Heap heap; Mutator mutator(heap);
    std::atomic<bool> ready{false}, finish{false};
    std::atomic<int> valid{0};
    std::thread worker([&] {
        Mutator scope(heap);
#if defined(__3DS__)
        const auto bounds=ctr_detail::current_stack();
        std::printf("worker_stack bottom=%lu top=%lu size=%lu\n",static_cast<unsigned long>(bounds.bottom),static_cast<unsigned long>(bounds.top),static_cast<unsigned long>(bounds.top-bounds.bottom));
        std::fflush(stdout);
#endif
        auto root = make<Node>(heap, &Node::trace);
        root->value = 71;
        ready = true;
        while (!finish.load()) { (void)make<Node>(heap, &Node::trace); heap.safepoint(); fixture_yield(); }
        valid = root->value;
    });
    while (!ready.load()) fixture_yield();
    for (int i = 0; i != 12; ++i) isolated(heap,[&]{heap.collect();});
    finish = true;
    { NativeWait wait(heap); worker.join(); }
    check(valid == 71); check(heap.statistics().collections == 12);
    collect_without_caller_roots(heap);
#if defined(__3DS__)
    std::printf("workers_after_drop objects=%u roots=%u\n",unsigned(heap.statistics().objects),unsigned(heap.statistics().last_roots));std::fflush(stdout);
#endif
    check(heap.statistics().objects == 0);
}
void native_waits() {
    Heap heap; Mutator mutator(heap);
    std::atomic<bool> blocked{false}, finish{false};
    std::atomic<int> valid{0};
    std::thread worker([&] {
        Mutator scope(heap);
        auto root = make<Node>(heap, &Node::trace);
        root->value = 89;
        {
            NativeWait outer(heap);
            { NativeWait inner(heap); blocked = true; while (!finish.load()) fixture_yield(); }
        }
        valid = root->value;
    });
    while (!blocked.load()) fixture_yield();
    isolated(heap,[&]{heap.collect();}); check(heap.statistics().objects == 1);
    finish = true;
    { NativeWait wait(heap); worker.join(); }
    check(valid == 89);
    collect_without_caller_roots(heap); check(heap.statistics().objects == 0);
}
void timeout_and_limit() {
    Heap heap; Mutator mutator(heap);
    heap.limit(1);
    bool failed = false;
    try { (void)make<Node>(heap, &Node::trace); } catch (const std::bad_alloc&) { failed = true; }
    check(failed); check(heap.statistics().objects == 0);
    heap.limit(1024); heap.stop_timeout(std::chrono::milliseconds(20));
    std::atomic<bool> ready{false}, finish{false};
    std::thread worker([&] { Mutator scope(heap); ready = true; while (!finish.load()) fixture_yield(); });
    while (!ready.load()) fixture_yield();
    failed = false;
    try { heap.collect(); } catch (const std::runtime_error&) { failed = true; }
    check(failed); check(heap.statistics().collections == 0); check(!heap.collection_requested());
    finish = true;
    { NativeWait wait(heap); worker.join(); }
    heap.threshold(1);
    auto node = make<Node>(heap, &Node::trace);
    check(heap.collect_if_needed()); check(node->value == 37); check(!heap.collect_if_needed());
}
void concurrent_collectors() {
    Heap heap; Mutator mutator(heap);
    std::atomic<int> ready{0}, finished{0};
    std::atomic<bool> start{false};
    auto action = [&] {
        Mutator scope(heap);
        auto node = make<Node>(heap, &Node::trace);
        ++ready;
        while (!start.load()) fixture_yield();
        for (int i = 0; i != 20; ++i) heap.collect();
        if (node->value == 37) ++finished;
    };
    std::thread a(action), b(action);
    while (ready.load() != 2) fixture_yield();
    {
        NativeWait wait(heap);
        start = true;
        a.join(); b.join();
    }
    check(finished == 2);
    collect_without_caller_roots(heap); check(heap.statistics().objects == 0);
}
void descriptor_failure() {
    Heap heap; Mutator mutator(heap);
    auto bad_trace = [](const void*, Edges) { throw std::runtime_error("fixture descriptor failure"); };
    auto node = make<Node>(heap, bad_trace);
    Roots root(heap, [&](Edges edges) { edges(node); });
    bool failed = false;
    try { heap.collect(); } catch (const std::runtime_error&) { failed = true; }
    check(failed); check(heap.statistics().objects == 1); check(heap.statistics().collections == 0);
    check(!heap.collection_requested()); check(node->value == 37);
}
void runtime_weak_cache() {
    Heap heap; Mutator mutator(heap);
    // Dedicated storage prevents native allocator address reuse from turning
    // stale conservative values from earlier fixtures into roots of this node.
    // This fixture tests weak identity, independently of stack false positives.
    static std::aligned_storage_t<sizeof(Node), alignof(Node)> storage;
    std::uintptr_t encoded = 0;
    std::uint64_t token = 0;
    isolated(heap, [&] {
        auto node = new (&storage) Node;
        Descriptor descriptor;
        descriptor.trace = &Node::trace;
        descriptor.destroy = [](void* p) noexcept { static_cast<Node*>(p)->~Node(); };
        heap.adopt(node, sizeof(Node), descriptor);
        encoded = ~reinterpret_cast<std::uintptr_t>(node);
        token = heap.identity(node);
    });
    check(token != 0);
    collect_without_caller_roots(heap); check(heap.statistics().objects == 0);
    check(!heap.alive(reinterpret_cast<void*>(~encoded), token));
    check(!heap.alive(nullptr, 0));
}
void retired_dynamic_payload_address() {
    // A resizable payload can release an address that the allocator immediately
    // reuses for an object body. Its GC-only interior range must not survive the
    // stopped-world snapshot. Fixed storage makes address reuse deterministic.
    alignas(Node) unsigned char storage[sizeof(Node)]{};
    struct Owner { const void* payload = nullptr; };
    Heap heap; Mutator mutator(heap);
    Descriptor descriptor;
    descriptor.ranges = [](const void* p, Ranges ranges) {
        const auto owner = static_cast<const Owner*>(p);
        if (owner->payload) ranges(owner->payload, sizeof(Node));
    };
    auto owner = make_described<Owner>(heap, descriptor);
    owner->payload = storage;
    Roots root(heap, [&](Edges edges) { edges(owner); });
    heap.collect();
    check(heap.statistics().objects == 1);
    owner->payload = nullptr; // Equivalent to freeing/reallocating a buffer.
    auto reused = new (storage) Node;
    Descriptor node;
    node.trace = &Node::trace;
    node.destroy = [](void* p) noexcept { static_cast<Node*>(p)->~Node(); };
    heap.adopt(reused, sizeof(Node), node);
    check(heap.contains(reused));
    heap.collect();
    check(reused->value == 37);
}
void retained_memory_and_growth() {
    Heap heap; Mutator mutator(heap);
    struct Buffers {
        std::vector<unsigned char> bytes;
        unsigned char inline_bytes[16]{};
    };
    Buffers* root=nullptr;
    Roots provider(heap,[&](Edges edges){edges(root);});
    Descriptor descriptor;
    descriptor.retained_ranges=[](const void* p,Ranges ranges){
        const auto b=static_cast<const Buffers*>(p);
        ranges(b->bytes.data(),b->bytes.capacity());
        ranges(b->bytes.data(),b->bytes.capacity()); // A second view is not another allocation.
        ranges(b->inline_bytes,sizeof(b->inline_bytes));
    };
    isolated(heap,[&]{root=make_described<Buffers>(heap,descriptor);root->bytes.reserve(4096);});
    heap.threshold(2048);
    heap.refresh_memory_accounting();
    check(heap.statistics().body_bytes==sizeof(Buffers));
    check(heap.statistics().external_bytes==root->bytes.capacity());
    check(heap.statistics().bytes==sizeof(Buffers)+root->bytes.capacity());
    check(heap.collection_due());
    heap.collect();check(!heap.collection_due());
    const auto previous=heap.statistics();
    isolated(heap,[&]{root->bytes.reserve(16384);});
    heap.refresh_memory_accounting();
    check(heap.statistics().allocations==previous.allocations);
    check(heap.statistics().external_bytes==root->bytes.capacity());
    check(heap.statistics().external_growth_bytes>previous.external_growth_bytes);
    check(heap.collection_due()); // Buffer grew without allocating an object body.
    isolated(heap,[&]{std::vector<unsigned char>().swap(root->bytes);});
    heap.refresh_memory_accounting();check(heap.statistics().external_bytes==0);
    check(heap.statistics().bytes==sizeof(Buffers));
    check(heap.statistics().peak_bytes>=sizeof(Buffers)+16384);
    root=nullptr;heap.collect();check(heap.statistics().bytes==0);
}
}
int main() {
#if defined(__3DS__)
    if (!std::freopen("sdmc:/pls-benchmark/tracing-gc-fixture.log", "w", stdout)) return 2;
    std::freopen("sdmc:/pls-benchmark/tracing-gc-fixture.err", "w", stderr);
    const auto bounds=pls::gc::ctr_detail::current_stack();
    std::printf("main_stack bottom=%lu top=%lu size=%lu\n",static_cast<unsigned long>(bounds.bottom),static_cast<unsigned long>(bounds.top),static_cast<unsigned long>(bounds.top-bounds.bottom));
    std::fflush(stdout);
    std::set_terminate([]{
        if(auto* file=std::fopen("sdmc:/pls-benchmark/tracing-gc-fixture.err","a")) {
            std::fprintf(file,"terminate: ");
            try { if(auto failure=std::current_exception())std::rethrow_exception(failure); }
            catch(const std::exception& error){std::fprintf(file,"%s",error.what());}
            catch(...){std::fprintf(file,"non-standard exception");}
            std::fprintf(file,"\n");std::fclose(file);
        }
        std::abort();
    });
#endif
    try {
#if defined(__3DS__)
#define RUN_FIXTURE(name) do { std::printf("begin %s\n",#name);std::fflush(stdout);name(); } while(false)
#else
#define RUN_FIXTURE(name) do { current_fixture=#name; name(); } while(false)
#endif
        RUN_FIXTURE(precise_and_cycles); RUN_FIXTURE(interior_and_payload); RUN_FIXTURE(native_lifetime); RUN_FIXTURE(registers);
        RUN_FIXTURE(nested_construction); RUN_FIXTURE(workers); RUN_FIXTURE(native_waits); RUN_FIXTURE(timeout_and_limit);
        RUN_FIXTURE(concurrent_collectors); RUN_FIXTURE(descriptor_failure); RUN_FIXTURE(runtime_weak_cache);
        RUN_FIXTURE(retired_dynamic_payload_address);
        RUN_FIXTURE(retained_memory_and_growth);
#undef RUN_FIXTURE
#if defined(__3DS__)
        std::printf("{\"assertions\":%d,\"status\":\"PASS\"}\n",assertions);
        std::fflush(stdout);
#else
        std::cout << "{\"assertions\":" << assertions << ",\"status\":\"PASS\"}\n";
#endif
    } catch (const std::exception& error) {
#if defined(__3DS__)
        std::fprintf(stderr,"%s\n",error.what());std::fflush(stderr);
#else
        std::cerr << current_fixture << ": " << error.what() << '\n';
#endif
        return 1;
    }
}
