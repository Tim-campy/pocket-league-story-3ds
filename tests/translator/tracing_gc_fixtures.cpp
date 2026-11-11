#include "tracing_gc.hpp"
#include <atomic>
#include <chrono>
#include <iostream>
#include <stdexcept>
#include <string>
#include <thread>
#include <vector>

using namespace pls::gc;
namespace {
int assertions = 0;
void check(bool value) { ++assertions; if (!value) throw std::runtime_error("Tracing GC assertion " + std::to_string(assertions)); }
struct Node {
    Node* edge = nullptr;
    std::uintptr_t scalar = 0;
    int value = 37;
    static void trace(const void* p, Edges edges) { edges(static_cast<const Node*>(p)->edge); }
};
template<class F> void isolated(Heap& heap, F action) {
    // No object addresses from this worker remain on the collector's stack.
    std::thread thread([&] { Mutator mutator(heap); action(); });
    NativeWait wait(heap);
    thread.join();
}
struct NativeResource {
    static std::atomic<int> payloads;
    bool open = true;
    NativeResource() { ++payloads; }
    void dispose() { if (open) { open = false; --payloads; } }
    ~NativeResource() { dispose(); }
};
std::atomic<int> NativeResource::payloads{0};
extern "C" __declspec(noinline) void* register_allocate(Heap* heap) { return make<Node>(*heap, &Node::trace); }
extern "C" __declspec(noinline) void register_collect(Heap* heap) { heap->collect(); }
extern "C" void* register_only_fixture(Heap* heap);
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
    heap.collect();
    check(heap.statistics().objects == 2); // Integer-looking pointers in heap are NOT roots.
    check(heap.statistics().reclaimed_objects == 1);
    roots.clear();
    heap.collect();
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
        auto root = make<Node>(heap, &Node::trace);
        root->value = 71;
        ready = true;
        while (!finish.load()) { (void)make<Node>(heap, &Node::trace); heap.safepoint(); }
        valid = root->value;
    });
    while (!ready.load()) std::this_thread::yield();
    for (int i = 0; i != 12; ++i) heap.collect();
    finish = true;
    { NativeWait wait(heap); worker.join(); }
    check(valid == 71); check(heap.statistics().collections == 12);
    heap.collect(); check(heap.statistics().objects == 0);
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
            { NativeWait inner(heap); blocked = true; while (!finish.load()) std::this_thread::yield(); }
        }
        valid = root->value;
    });
    while (!blocked.load()) std::this_thread::yield();
    heap.collect(); check(heap.statistics().objects == 1);
    finish = true;
    { NativeWait wait(heap); worker.join(); }
    check(valid == 89);
    heap.collect(); check(heap.statistics().objects == 0);
}
void timeout_and_limit() {
    Heap heap; Mutator mutator(heap);
    heap.limit(1);
    bool failed = false;
    try { (void)make<Node>(heap, &Node::trace); } catch (const std::bad_alloc&) { failed = true; }
    check(failed); check(heap.statistics().objects == 0);
    heap.limit(1024); heap.stop_timeout(std::chrono::milliseconds(20));
    std::atomic<bool> ready{false}, finish{false};
    std::thread worker([&] { Mutator scope(heap); ready = true; while (!finish.load()) std::this_thread::yield(); });
    while (!ready.load()) std::this_thread::yield();
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
        while (!start.load()) std::this_thread::yield();
        for (int i = 0; i != 20; ++i) heap.collect();
        if (node->value == 37) ++finished;
    };
    std::thread a(action), b(action);
    while (ready.load() != 2) std::this_thread::yield();
    {
        NativeWait wait(heap);
        start = true;
        a.join(); b.join();
    }
    check(finished == 2);
    heap.collect(); check(heap.statistics().objects == 0);
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
    // Encoded address is fixture bookkeeping, deliberately not a stack root.
    std::uintptr_t encoded = 0;
    std::uint64_t token = 0;
    isolated(heap, [&] {
        auto node = make<Node>(heap, &Node::trace);
        encoded = ~reinterpret_cast<std::uintptr_t>(node);
        token = heap.identity(node);
    });
    check(token != 0);
    heap.collect(); check(heap.statistics().objects == 0);
    check(!heap.alive(reinterpret_cast<void*>(~encoded), token));
    check(!heap.alive(nullptr, 0));
}
}
int main() {
    try {
        precise_and_cycles(); interior_and_payload(); native_lifetime(); registers();
        nested_construction(); workers(); native_waits(); timeout_and_limit();
        concurrent_collectors(); descriptor_failure(); runtime_weak_cache();
        std::cout << "{\"assertions\":" << assertions << ",\"status\":\"PASS\"}\n";
    } catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
