#include "tracing_gc.hpp"
#include <algorithm>
#include <condition_variable>
#include <cstring>
#include <map>
#include <mutex>
#include <stdexcept>
#include <thread>
#include <vector>
#if defined(__3DS__)
#include "ctr_stack_bounds.hpp"
#endif
#if defined(_WIN32)
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#define PLS_GC_NOINLINE __declspec(noinline)
#else
#include <csetjmp>
#define PLS_GC_NOINLINE __attribute__((noinline))
#endif

namespace pls::gc {
namespace {
template<class Predicate>
void wait_condition(std::condition_variable& condition,std::unique_lock<std::mutex>& lock,Predicate predicate) {
#if defined(__3DS__)
    // Same protected-predicate polling used by the platform runtime. The
    // r68/libctru 2.7.1 waiter can miss an indefinite notification; spurious
    // timed wakeups do not permit a worker to resume while GC is requested.
    while(!predicate())condition.wait_for(lock,std::chrono::milliseconds(1));
#else
    condition.wait(lock,predicate);
#endif
}
struct Snapshot {
    std::vector<std::uintptr_t> words;
#if defined(_WIN32)
    CONTEXT registers{};
#else
    std::jmp_buf registers{};
#endif
};
// The copy is necessary for NativeWait: native callees may subsequently write
// their stack while collection runs. The saved roots themselves stay immutable.
PLS_GC_NOINLINE void capture(Snapshot& snapshot, std::uintptr_t bottom, std::uintptr_t top) {
    std::uintptr_t low;
#if defined(_WIN32)
    RtlCaptureContext(&snapshot.registers);
#if defined(_M_X64)
    low = static_cast<std::uintptr_t>(snapshot.registers.Rsp);
#else
#error Verify the register spill for this Windows architecture before enabling it.
#endif
#else
    // setjmp is a compiler-visible call which spills caller-live values; its
    // saved register set must also be audited for each target ABI.
    (void)setjmp(snapshot.registers);
    volatile std::uintptr_t anchor = 0;
    low = reinterpret_cast<std::uintptr_t>(&anchor);
#endif
    if (low < bottom || low >= top || top - low > 64u * 1024u * 1024u)
        throw std::runtime_error("GC stack bounds are invalid");
    low = (low + sizeof(void*) - 1) & ~(sizeof(void*) - 1);
    const auto count = (top - low) / sizeof(void*);
    snapshot.words.resize(count);
    std::memcpy(snapshot.words.data(), reinterpret_cast<const void*>(low), count * sizeof(void*));
}
}
struct Heap::Impl {
    struct Block { void* pointer; std::size_t bytes; Descriptor descriptor; std::uint64_t identity; bool marked = false; };
    struct Range { std::size_t bytes; std::uintptr_t owner; };
    struct Thread {
        std::size_t depth = 1, native = 0, construction = 0;
        std::uintptr_t bottom = 0, top = 0;
        bool parked = false;
        Snapshot snapshot;
        std::vector<void*> constructing;
    };
    mutable std::mutex mutex;
    std::condition_variable changed;
    std::map<std::thread::id, Thread> threads;
    std::map<std::uintptr_t, Block> blocks;
    std::map<std::uintptr_t, Range> ranges;
    std::map<std::size_t, std::function<void(Edges)>> roots;
    std::vector<std::uintptr_t> work;
    std::vector<std::pair<std::uintptr_t,std::uintptr_t>> retained;
    std::size_t next_root = 1, threshold = 1024 * 1024, since_collection = 0;
    std::size_t limit = static_cast<std::size_t>(-1);
    bool requested = false;
    std::thread::id collector;
    std::chrono::milliseconds timeout{5000};
    Statistics stats;
    std::uint64_t next_identity = 1;

    void account_retained(bool record_growth = true) {
        // Called only with all managed workers parked. Union avoids counting
        // inline strings, shared native storage or duplicate views twice.
        retained.clear();
        const auto append = [](void* value,const void* pointer,std::size_t bytes) {
            if (!pointer || !bytes) return;
            const auto begin = reinterpret_cast<std::uintptr_t>(pointer);
            if (begin + bytes < begin) throw std::logic_error("Invalid retained GC range");
            static_cast<Impl*>(value)->retained.emplace_back(begin,begin+bytes);
        };
        for (const auto& row : blocks) {
            const auto& block = row.second;
            append(this,block.pointer,block.bytes);
            const auto callback = block.descriptor.retained_ranges ? block.descriptor.retained_ranges : block.descriptor.ranges;
            if (callback) callback(block.pointer,Ranges{this,append});
        }
        if (ranges.size() > blocks.size()) for (const auto& row : ranges) if (row.first != row.second.owner) {
            const auto& descriptor = blocks.at(row.second.owner).descriptor;
            if (!descriptor.ranges) append(this,reinterpret_cast<void*>(row.first),row.second.bytes);
        }
        std::sort(retained.begin(),retained.end());
        std::size_t total = 0;
        std::uintptr_t begin = 0,end = 0;
        for (const auto& range : retained) {
            if (range.first > end) { total += end-begin; begin=range.first; end=range.second; }
            else end=std::max(end,range.second);
        }
        total += end-begin;
        if (total < stats.body_bytes) throw std::logic_error("Retained memory excludes live object bodies");
        const auto external = total-stats.body_bytes;
        if (record_growth && external > stats.external_bytes) {
            const auto growth = external-stats.external_bytes;
            stats.external_growth_bytes += growth;
            stats.allocated_bytes += growth;
            since_collection += growth;
        }
        stats.external_bytes=external;stats.bytes=total;
        stats.peak_bytes=std::max(stats.peak_bytes,total);
    }

    Thread& current() {
        auto it = threads.find(std::this_thread::get_id());
        if (it == threads.end()) throw std::logic_error("Unregistered managed thread");
        return it->second;
    }
    std::uintptr_t owner(std::uintptr_t address) const {
        auto it = ranges.upper_bound(address);
        if (it == ranges.begin()) return 0;
        --it;
        return address - it->first < it->second.bytes ? it->second.owner : 0;
    }
    void range(std::uintptr_t begin, std::size_t bytes, std::uintptr_t owner_key) {
        if (!bytes || begin + bytes < begin) throw std::logic_error("Invalid GC range");
        auto next = ranges.lower_bound(begin);
        if (next != ranges.end() && next->first < begin + bytes)
            throw std::logic_error("Overlapping GC ranges");
        if (next != ranges.begin()) {
            auto prev = std::prev(next);
            if (begin - prev->first < prev->second.bytes) throw std::logic_error("Overlapping GC ranges");
        }
        ranges.emplace(begin, Range{bytes, owner_key});
    }
    void mark(const void* pointer) {
        const auto key = owner(reinterpret_cast<std::uintptr_t>(pointer));
        if (!key) return;
        auto& block = blocks.at(key);
        if (block.marked) return;
        work.push_back(key); // May throw; only change mark after successful push.
        block.marked = true;
    }
    Edges edges() { return Edges{this, [](void* context, const void* p) { static_cast<Impl*>(context)->mark(p); }}; }
    void scan(const void* bytes, std::size_t size) {
        auto p = static_cast<const unsigned char*>(bytes);
        for (std::size_t i = 0; i + sizeof(void*) <= size; i += sizeof(void*)) {
            std::uintptr_t value;
            std::memcpy(&value, p + i, sizeof(value));
            mark(reinterpret_cast<const void*>(value));
        }
    }
    void resume() {
        // Descriptor payload ranges are valid only while mutators are stopped.
        // A vector/string may release or move its storage immediately after
        // resume, and a new object may reuse that address before the next GC.
        // Keep object bodies and explicitly maintained ranges; reconstruct
        // descriptor ranges at the next stopped-world tracing snapshot.
        if (ranges.size() > blocks.size()) for (auto it = ranges.begin(); it != ranges.end();) {
            if (it->first != it->second.owner && blocks.at(it->second.owner).descriptor.ranges)
                it = ranges.erase(it);
            else ++it;
        }
        requested = false;
        collector = {};
        changed.notify_all();
    }
};

Heap::Heap() : impl_(std::make_unique<Impl>()) {}
Heap::~Heap() {
    // Shutdown requires joined workers; no managed finalizers run here.
    for (auto& row : impl_->blocks)
        if (row.second.descriptor.destroy) row.second.descriptor.destroy(row.second.pointer);
}
void Heap::enter(std::uintptr_t bottom, std::uintptr_t top) {
    auto& s = *impl_;
    std::unique_lock<std::mutex> lock(s.mutex);
    auto found = s.threads.find(std::this_thread::get_id());
    if (found != s.threads.end()) {
        if (found->second.native) throw std::logic_error("Managed entry inside native wait");
        ++found->second.depth; return;
    }
    wait_condition(s.changed,lock, [&] { return !s.requested; });
#if defined(_WIN32)
    if (!bottom && !top) {
        ULONG_PTR low, high;
        GetCurrentThreadStackLimits(&low, &high);
        bottom = low; top = high;
    }
#elif defined(__3DS__)
    if (!bottom && !top) {
        const auto bounds = ctr_detail::current_stack();
        bottom = bounds.bottom; top = bounds.top;
    }
#endif
    if (!bottom || bottom >= top) throw std::logic_error("GC requires actual thread stack bounds");
    auto& thread = s.threads[std::this_thread::get_id()];
    thread.bottom = bottom; thread.top = top;
}
void Heap::leave() {
    auto& s = *impl_;
    std::lock_guard<std::mutex> lock(s.mutex);
    auto& thread = s.current();
    if (!--thread.depth) s.threads.erase(std::this_thread::get_id());
    s.changed.notify_all();
}
PLS_GC_NOINLINE void Heap::safepoint() {
    auto& s = *impl_;
    std::unique_lock<std::mutex> lock(s.mutex);
    auto& thread = s.current();
    if (thread.native) throw std::logic_error("Managed access inside native wait");
    if (!s.requested) return;
    if (s.collector == std::this_thread::get_id()) throw std::logic_error("Managed allocation during GC");
    capture(thread.snapshot, thread.bottom, thread.top);
    thread.parked = true;
    s.changed.notify_all();
    wait_condition(s.changed,lock, [&] { return !s.requested; });
    thread.parked = false;
}
void Heap::begin_native_wait() {
    auto& s = *impl_;
    std::unique_lock<std::mutex> lock(s.mutex);
    auto& thread = s.current();
    if (thread.native++) return;
    try { capture(thread.snapshot, thread.bottom, thread.top); }
    catch (...) { --thread.native; throw; }
    s.changed.notify_all();
}
void Heap::end_native_wait() {
    auto& s = *impl_;
    std::unique_lock<std::mutex> lock(s.mutex);
    auto& thread = s.current();
    if (!thread.native) throw std::logic_error("Unbalanced native wait");
    if (thread.native > 1) { --thread.native; return; }
    wait_condition(s.changed,lock, [&] { return !s.requested; });
    --thread.native;
}
void Heap::begin_construction() {
    std::lock_guard<std::mutex> lock(impl_->mutex);
    ++impl_->current().construction;
}
void Heap::end_construction() noexcept {
    std::lock_guard<std::mutex> lock(impl_->mutex);
    auto& thread = impl_->current();
    if (!--thread.construction) thread.constructing.clear();
}
void Heap::adopt(void* object, std::size_t bytes, Descriptor descriptor) {
    auto& s = *impl_;
    std::lock_guard<std::mutex> lock(s.mutex);
    auto& thread = s.current();
    // libctru's main thread has the default pthread identity. Identity alone
    // cannot distinguish an active collector from the idle sentinel.
    if (thread.native || (s.requested && s.collector == std::this_thread::get_id()))
        throw std::logic_error("Allocation outside managed execution");
    if (!object || !bytes) throw std::logic_error("Invalid managed object");
    if (s.stats.bytes > s.limit || bytes > s.limit - s.stats.bytes) throw std::bad_alloc();
    const auto key = reinterpret_cast<std::uintptr_t>(object);
    if (!s.next_identity) throw std::overflow_error("GC allocation identity exhausted");
    auto inserted = s.blocks.emplace(key, Impl::Block{object, bytes, descriptor, s.next_identity++});
    if (!inserted.second) throw std::logic_error("Managed object registered twice");
    bool range_added = false;
    try {
        s.range(key, bytes, key);
        range_added = true;
        if (thread.construction) thread.constructing.push_back(object);
    } catch (...) { if (range_added) s.ranges.erase(key); s.blocks.erase(key); throw; }
    ++s.stats.objects; ++s.stats.allocations;
    s.stats.body_bytes += bytes;
    s.stats.bytes += bytes; s.stats.allocated_bytes += bytes; s.since_collection += bytes;
    s.stats.peak_bytes=std::max(s.stats.peak_bytes,s.stats.bytes);
}
void Heap::add_range(void* owner, const void* begin, std::size_t bytes) {
    std::lock_guard<std::mutex> lock(impl_->mutex);
    auto key = reinterpret_cast<std::uintptr_t>(owner);
    if (!impl_->blocks.count(key)) throw std::logic_error("Unknown range owner");
    impl_->range(reinterpret_cast<std::uintptr_t>(begin), bytes, key);
}
void Heap::remove_range(const void* begin) {
    std::lock_guard<std::mutex> lock(impl_->mutex);
    auto key = reinterpret_cast<std::uintptr_t>(begin);
    if (impl_->blocks.count(key)) throw std::logic_error("Cannot remove object body range");
    impl_->ranges.erase(key);
}
std::size_t Heap::add_roots(std::function<void(Edges)> provider) {
    std::lock_guard<std::mutex> lock(impl_->mutex);
    const auto token = impl_->next_root++;
    impl_->roots.emplace(token, std::move(provider));
    return token;
}
void Heap::remove_roots(std::size_t token) {
    std::lock_guard<std::mutex> lock(impl_->mutex);
    impl_->roots.erase(token);
}
PLS_GC_NOINLINE void Heap::collect() {
    const auto started = std::chrono::steady_clock::now();
    auto& s = *impl_;
    std::unique_lock<std::mutex> lock(s.mutex);
    auto& thread = s.current();
    if (thread.native) throw std::logic_error("Collection inside native wait");
    capture(thread.snapshot, thread.bottom, thread.top);
    // A second collector participates in the first collector's rendezvous.
    if (s.requested) {
        if (s.collector == std::this_thread::get_id()) throw std::logic_error("Recursive collection");
        thread.parked = true;
        s.changed.notify_all();
        wait_condition(s.changed,lock, [&] { return !s.requested; });
        thread.parked = false;
        return;
    }
    s.requested = true; s.collector = std::this_thread::get_id();
    try {
        const bool stopped = s.changed.wait_for(lock, s.timeout, [&] {
            for (const auto& row : s.threads)
                if (row.first != s.collector && !row.second.native && !row.second.parked) return false;
            return true;
        });
        if (!stopped) throw std::runtime_error("GC cooperative rendezvous timed out; no objects swept");
        s.account_retained();
        const auto bytes_before = s.stats.bytes;
        // Rebuild dynamic payload ranges after workers stop. Container storage
        // can move on reserve/resize without any write barrier on references.
        for (auto it=s.ranges.begin();it!=s.ranges.end();)
            if(it->first!=it->second.owner&&s.blocks.at(it->second.owner).descriptor.ranges)it=s.ranges.erase(it);else ++it;
        struct RangeContext{Impl* state;std::uintptr_t owner;};
        for(const auto& row:s.blocks)if(row.second.descriptor.ranges){
            RangeContext context{&s,row.first};
            row.second.descriptor.ranges(row.second.pointer,Ranges{&context,[](void* value,const void* begin,std::size_t bytes){
                auto& context=*static_cast<RangeContext*>(value);
                auto address=reinterpret_cast<std::uintptr_t>(begin);
                if(!begin||!bytes)return;
                const auto& block=context.state->blocks.at(context.owner);
                if(address>=context.owner&&address-context.owner<block.bytes)return; // inline/SSO payload
                context.state->range(address,bytes,context.owner);
            }});
        }
        for (auto& row : s.blocks) row.second.marked = false;
        s.work.clear();
        for (const auto& row : s.roots) row.second(s.edges());
        for (const auto& row : s.threads) {
            const auto& saved = row.second.snapshot;
            s.scan(&saved.registers, sizeof(saved.registers));
            s.scan(saved.words.data(), saved.words.size() * sizeof(void*));
            for (auto p : row.second.constructing) s.mark(p);
        }
        s.stats.last_roots = s.work.size();
        while (!s.work.empty()) {
            const auto key = s.work.back(); s.work.pop_back();
            const auto& block = s.blocks.at(key);
            if (block.descriptor.trace) block.descriptor.trace(block.pointer, s.edges());
        }
        // Unlink all dead objects before destruction. Destructors release native
        // payloads only; no managed callbacks, allocations or resurrection.
        std::vector<Impl::Block> dead;
        dead.reserve(s.blocks.size());
        for (auto it = s.blocks.begin(); it != s.blocks.end();) {
            if (it->second.marked) { ++it; continue; }
            dead.push_back(it->second);
            --s.stats.objects; s.stats.bytes -= it->second.bytes;
            s.stats.body_bytes -= it->second.bytes;
            ++s.stats.reclaimed_objects;
            it = s.blocks.erase(it);
        }
        for (auto it = s.ranges.begin(); it != s.ranges.end();)
            if (!s.blocks.count(it->second.owner)) it = s.ranges.erase(it); else ++it;
        s.account_retained(false);
        s.stats.reclaimed_bytes += bytes_before-s.stats.bytes;
        // Keep mutators stopped, but allow native cleanup to unregister ranges
        // or root handles without recursively taking the heap lock.
        lock.unlock();
        for (const auto& block : dead) if (block.descriptor.destroy) block.descriptor.destroy(block.pointer);
        lock.lock();
        ++s.stats.collections; s.since_collection = 0;
        s.stats.last_pause_ns = static_cast<std::uint64_t>(std::chrono::duration_cast<std::chrono::nanoseconds>(
            std::chrono::steady_clock::now() - started).count());
        s.stats.pause_ns += s.stats.last_pause_ns;
        s.stats.interval_max_pause_ns=std::max(s.stats.interval_max_pause_ns,s.stats.last_pause_ns);
        s.resume();
    } catch (...) { s.resume(); throw; }
}
bool Heap::collect_if_needed() {
    if (!collection_due()) return false;
    collect(); return true;
}
bool Heap::collection_due() const {
    std::lock_guard<std::mutex> lock(impl_->mutex);
    return impl_->since_collection >= impl_->threshold;
}
void Heap::inspect(const std::function<void(void*,std::size_t,const Descriptor&)>& visitor,const std::function<void()>& finish) {
    auto& s=*impl_;
    std::unique_lock<std::mutex> lock(s.mutex);
    auto& thread=s.current();
    if(thread.native)throw std::logic_error("Memory snapshot inside native wait");
    capture(thread.snapshot,thread.bottom,thread.top);
    if(s.requested){
        if(s.collector==std::this_thread::get_id())throw std::logic_error("Recursive heap inspection");
        thread.parked=true;s.changed.notify_all();
        wait_condition(s.changed,lock,[&]{return !s.requested;});thread.parked=false;
    }
    s.requested=true;s.collector=std::this_thread::get_id();
    try{
        if(!s.changed.wait_for(lock,s.timeout,[&]{
            for(const auto& row:s.threads)if(row.first!=s.collector&&!row.second.native&&!row.second.parked)return false;
            return true;
        }))throw std::runtime_error("Managed worker did not reach heap inspection safepoint");
        lock.unlock();
        // No mutator may access the heap until resume. The callback can inspect
        // identity metadata, but cannot allocate or start another collection.
        try{if(visitor)for(const auto& row:s.blocks)visitor(row.second.pointer,row.second.bytes,row.second.descriptor);if(finish)finish();}
        catch(...){lock.lock();throw;}
        lock.lock();s.resume();
    }catch(...){s.resume();throw;}
}
void Heap::threshold(std::size_t bytes) { std::lock_guard<std::mutex> lock(impl_->mutex); impl_->threshold = bytes; }
void Heap::limit(std::size_t bytes) { std::lock_guard<std::mutex> lock(impl_->mutex); impl_->limit = bytes; }
Statistics Heap::statistics() const { std::lock_guard<std::mutex> lock(impl_->mutex); return impl_->stats; }
Statistics Heap::statistics_and_reset_pause_peak() {
    std::lock_guard<std::mutex> lock(impl_->mutex);
    const auto result=impl_->stats;impl_->stats.interval_max_pause_ns=0;return result;
}
void Heap::refresh_memory_accounting() {
    const auto started=std::chrono::steady_clock::now();
    inspect({},[&] {
        std::lock_guard<std::mutex> lock(impl_->mutex);
        impl_->account_retained();
    });
    std::lock_guard<std::mutex> lock(impl_->mutex);
    impl_->stats.accounting_ns+=static_cast<std::uint64_t>(std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now()-started).count());
}
bool Heap::contains(const void* p) const {
    std::lock_guard<std::mutex> lock(impl_->mutex); return impl_->owner(reinterpret_cast<std::uintptr_t>(p)) != 0;
}
bool Heap::collection_requested() const { std::lock_guard<std::mutex> lock(impl_->mutex); return impl_->requested; }
std::uint64_t Heap::identity(const void* p) const {
    std::lock_guard<std::mutex> lock(impl_->mutex);
    const auto owner = impl_->owner(reinterpret_cast<std::uintptr_t>(p));
    return owner ? impl_->blocks.at(owner).identity : 0;
}
bool Heap::alive(const void* p, std::uint64_t identity_value) const {
    return identity_value && identity(p) == identity_value;
}
void Heap::stop_timeout(std::chrono::milliseconds value) { std::lock_guard<std::mutex> lock(impl_->mutex); impl_->timeout = value; }
}
