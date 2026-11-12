#include "tracing_gc.hpp"
#include "gc_memory_resource.hpp"
#include <algorithm>
#include <condition_variable>
#include <cstring>
#include <map>
#include <memory_resource>
#include <mutex>
#include <stdexcept>
#include <thread>
#include <unordered_map>
#include <vector>
#if defined(PLS_GC_ROOT_TRACE)
#include <atomic>
#include <cstdio>
#include <unordered_set>
#if defined(_WIN32)
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <dbghelp.h>
#pragma comment(lib,"dbghelp.lib")
#endif
#endif
#if defined(PLS_GC_PHASE_PROFILE)
#include <array>
#include <cstdio>
#endif
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
#if defined(PLS_GC_ROOT_TRACE)
// Diagnostic only: address of an object whose retention must be explained.
// Stored as an integer in static data, which the collector never scans.
std::atomic<std::uintptr_t> root_trace_target{0};
#endif
namespace {
#if defined(PLS_GC_PHASE_PROFILE)
enum class Phase { setup,registers,stack_copy,rendezvous,account_before,ranges,clear_marks,roots,stack_scan,mark,sweep,account_after,destroy,resume,count };
struct CollectionProbe;
thread_local CollectionProbe* collection_probe=nullptr;
struct CollectionProbe {
    using Clock=std::chrono::steady_clock;
    CollectionProbe* previous=collection_probe;
    std::array<std::uint64_t,static_cast<std::size_t>(Phase::count)> phases{},lookup{};
    Phase phase=Phase::setup;
    Clock::time_point last=Clock::now();
    std::size_t calls=0,objects=0,retained=0;
    bool complete=false;
    CollectionProbe(){collection_probe=this;}
    void next(Phase p){const auto now=Clock::now();phases[static_cast<std::size_t>(phase)]+=std::chrono::duration_cast<std::chrono::nanoseconds>(now-last).count();last=now;phase=p;}
    ~CollectionProbe(){
        next(phase);collection_probe=previous;
        std::fprintf(stderr,"PLS_GC_PHASE={\"complete\":%s,\"objects_before\":%llu,\"retained_before\":%llu,\"lookup_calls\":%llu,\"phase_ns\":[",complete?"true":"false",static_cast<unsigned long long>(objects),static_cast<unsigned long long>(retained),static_cast<unsigned long long>(calls));
        for(std::size_t i=0;i<phases.size();++i)std::fprintf(stderr,"%s%llu",i?",":"",static_cast<unsigned long long>(phases[i]));
        std::fprintf(stderr,"],\"lookup_inclusive_ns\":[");
        for(std::size_t i=0;i<lookup.size();++i)std::fprintf(stderr,"%s%llu",i?",":"",static_cast<unsigned long long>(lookup[i]));
        std::fprintf(stderr,"]}\n");
    }
};
struct LookupProbe {
    CollectionProbe* probe=collection_probe;
    CollectionProbe::Clock::time_point start=probe?CollectionProbe::Clock::now():CollectionProbe::Clock::time_point{};
    ~LookupProbe(){if(probe){probe->lookup[static_cast<std::size_t>(probe->phase)]+=std::chrono::duration_cast<std::chrono::nanoseconds>(CollectionProbe::Clock::now()-start).count();++probe->calls;}}
};
#define PLS_GC_PHASE(name) do{if(collection_probe)collection_probe->next(Phase::name);}while(false)
#else
#define PLS_GC_PHASE(name) ((void)0)
#endif
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
// Bounded wait with the same protected-predicate polling on CTR (see
// wait_condition): an indefinite or timed condvar wait may miss the parking
// notification there and would sleep for the whole timeout.
template<class Predicate>
bool wait_condition_for(std::condition_variable& condition,std::unique_lock<std::mutex>& lock,std::chrono::milliseconds timeout,Predicate predicate) {
#if defined(__3DS__)
    const auto deadline=std::chrono::steady_clock::now()+timeout;
    while(!predicate()){
        if(std::chrono::steady_clock::now()>=deadline)return predicate();
        condition.wait_for(lock,std::chrono::milliseconds(1));
    }
    return true;
#else
    return condition.wait_for(lock,timeout,predicate);
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
    PLS_GC_PHASE(registers);
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
    PLS_GC_PHASE(stack_copy);
    if (low < bottom || low >= top || top - low > 64u * 1024u * 1024u)
        throw std::runtime_error("GC stack bounds are invalid");
    low = (low + sizeof(void*) - 1) & ~(sizeof(void*) - 1);
    const auto count = (top - low) / sizeof(void*);
    snapshot.words.resize(count);
    std::memcpy(snapshot.words.data(), reinterpret_cast<const void*>(low), count * sizeof(void*));
}
}
struct Heap::Impl {
    struct Block { void* pointer; std::size_t bytes; Descriptor descriptor; std::uint64_t identity; bool marked = false; std::size_t stable_bytes = 0; std::size_t dynamic_index = static_cast<std::size_t>(-1); };
    // Dense records make collection scans sequential. Addresses in the page
    // index are borrowed only between construction of that index and sweep;
    // mutators cannot insert/reallocate records during this interval.
    class Blocks {
        using Records=std::vector<std::pair<std::uintptr_t,Block>>;
        struct Position{std::uintptr_t key=0;std::size_t index=0;};
        Records records;
        std::vector<Position> positions;
        std::size_t used=0;
        static std::size_t hash(std::uintptr_t key){
            std::uint64_t value=key;value^=value>>30;value*=UINT64_C(0xbf58476d1ce4e5b9);
            value^=value>>27;value*=UINT64_C(0x94d049bb133111eb);return static_cast<std::size_t>(value^(value>>31));
        }
        std::size_t slot(std::uintptr_t key)const{
            auto i=hash(key)&(positions.size()-1);
            while(positions[i].key&&positions[i].key!=key)i=(i+1)&(positions.size()-1);
            return i;
        }
        void rebuild(std::size_t capacity){
            std::vector<Position> next(capacity);
            for(std::size_t n=0;n<records.size();++n){auto i=hash(records[n].first)&(capacity-1);while(next[i].key)i=(i+1)&(capacity-1);next[i]={records[n].first,n};}
            positions.swap(next);used=records.size();
        }
    public:
        explicit Blocks(std::pmr::memory_resource*){}
        auto begin(){return records.begin();}auto end(){return records.end();}
        auto begin()const{return records.begin();}auto end()const{return records.end();}
        auto size()const{return records.size();}
        auto count(std::uintptr_t key)const{return !positions.empty()&&key>1&&positions[slot(key)].key==key;}
        Block* find(std::uintptr_t key){
            if(key<=1||positions.empty())return nullptr;
            const auto& entry=positions[slot(key)];return entry.key==key?&records[entry.index].second:nullptr;
        }
        Block& at(std::uintptr_t key){return const_cast<Block&>(static_cast<const Blocks&>(*this).at(key));}
        const Block& at(std::uintptr_t key)const{
            if(key<=1||positions.empty())throw std::out_of_range("Unknown GC block");
            const auto& entry=positions[slot(key)];if(entry.key!=key)throw std::out_of_range("Unknown GC block");
            return records[entry.index].second;
        }
        std::pair<Records::iterator,bool> emplace(std::uintptr_t key,Block block){
            if(key<=1)throw std::logic_error("Invalid managed allocation address");
            if(positions.empty())rebuild(16);
            if(count(key))return {records.begin()+positions[slot(key)].index,false};
            if((used+1)*2>=positions.size())rebuild(records.size()*4<positions.size()?positions.size():positions.size()*2);
            auto i=hash(key)&(positions.size()-1);while(positions[i].key>1)i=(i+1)&(positions.size()-1);
            records.emplace_back(key,block); // No table mutation before this may throw.
            if(!positions[i].key)++used;
            positions[i]={key,records.size()-1};return {records.end()-1,true};
        }
        auto erase(Records::iterator it){
            const auto index=static_cast<std::size_t>(it-records.begin());
            positions[slot(it->first)].key=1; // Tombstone; no rehash/allocation during sweep.
            if(index+1!=records.size()){
                *it=records.back();positions[slot(it->first)].index=index;
            }
            records.pop_back();return records.begin()+index;
        }
        void erase(std::uintptr_t key){if(count(key))erase(records.begin()+positions[slot(key)].index);}
    };
    struct Range { std::size_t bytes; std::uintptr_t owner; bool explicit_range=false; };
    struct IndexedRange { std::uintptr_t begin, end; Block* block; };
    struct PersistentRange {std::uintptr_t begin,end,owner;};
    struct Page { std::uintptr_t key = 0; std::size_t first = 0, last = 0; };
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
    // Every access to these pools remains under the existing heap mutex or
    // during shutdown with joined workers. No threading contract is weakened.
    detail::NativeMemoryResource metadata_upstream;
    std::pmr::unsynchronized_pool_resource metadata_pool{&metadata_upstream};
    Blocks blocks{&metadata_pool};
    // Only these descriptors can change retained capacity. Keep addresses,
    // not pointers into Blocks' movable dense vector. Existing heap mutex and
    // cooperative rendezvous protect registration, removal and enumeration.
    std::vector<std::uintptr_t> dynamic_buffers;
    void register_dynamic(std::uintptr_t key,Block& block){
        if(block.descriptor.stable_ranges||(!block.descriptor.ranges&&!block.descriptor.retained_ranges))return;
        dynamic_buffers.push_back(key);
        block.dynamic_index=dynamic_buffers.size()-1;
    }
    void unregister_dynamic(Block& block)noexcept{
        const auto index=block.dynamic_index;
        if(index==static_cast<std::size_t>(-1))return;
        if(index+1!=dynamic_buffers.size()){
            dynamic_buffers[index]=dynamic_buffers.back();
            blocks.find(dynamic_buffers[index])->dynamic_index=index;
        }
        dynamic_buffers.pop_back();block.dynamic_index=static_cast<std::size_t>(-1);
    }
    std::pmr::map<std::uintptr_t, Range> ranges{&metadata_pool};
    // Fixed ranges are indexed once at registration, not rebuilt each GC.
    // Sorted buckets are bounded by one 4 KiB page; entries retain addresses,
    // never pointers into the movable dense metadata vector.
    std::pmr::unordered_map<std::uintptr_t,std::pmr::vector<PersistentRange>> fixed_pages{&metadata_pool};
    std::map<std::size_t, std::function<void(Edges)>> roots;
    std::vector<Block*> work;
    std::vector<Block> dead;
    std::vector<IndexedRange> snapshot_ranges;
    std::vector<Page> pages;
    bool snapshot_active = false;
    std::vector<std::pair<std::uintptr_t,std::uintptr_t>> retained;
    std::size_t next_root = 1, threshold = 1024 * 1024, since_collection = 0;
    std::size_t stable_external_bytes=0,explicit_ranges=0;
    std::size_t limit = static_cast<std::size_t>(-1);
    bool requested = false;
    std::thread::id collector;
    std::chrono::milliseconds timeout{5000};
    Statistics stats;
    std::uint64_t next_identity = 1;
    std::size_t marked_count = 0;

    void account_retained(bool record_growth = true) {
        // Called only with all managed workers parked. Union avoids counting
        // inline strings, shared native storage or duplicate views twice.
        retained.clear();
#if defined(PLS_GC_PHASE_PROFILE)
        const auto account_start=std::chrono::steady_clock::now();
        std::size_t stable_count=0,callback_count=0;
#endif
        struct AccountingContext { Impl* state;std::uintptr_t begin,end; };
        const auto append = [](void* value,const void* pointer,std::size_t bytes) {
            if (!pointer || !bytes) return;
            const auto begin = reinterpret_cast<std::uintptr_t>(pointer);
            if (begin + bytes < begin) throw std::logic_error("Invalid retained GC range");
            auto& context=*static_cast<AccountingContext*>(value);
            if(begin>=context.begin&&begin+bytes<=context.end)return;
            context.state->retained.emplace_back(begin,begin+bytes);
        };
#if defined(PLS_GC_PHASE_PROFILE)
        for(const auto& row:blocks)if(row.second.descriptor.stable_ranges)++stable_count;
#endif
        for (const auto key : dynamic_buffers) {
            const auto& block = blocks.at(key);
            const auto begin=reinterpret_cast<std::uintptr_t>(block.pointer);
            AccountingContext context{this,begin,begin+block.bytes};
            const auto callback = block.descriptor.retained_ranges ? block.descriptor.retained_ranges : block.descriptor.ranges;
            if (callback) {
#if defined(PLS_GC_PHASE_PROFILE)
                ++callback_count;
#endif
                callback(block.pointer,Ranges{&context,append});
            }
        }
        if (explicit_ranges) for (const auto& row : ranges) if (row.second.explicit_range) {
            const auto& descriptor = blocks.at(row.second.owner).descriptor;
            if (!descriptor.ranges) {AccountingContext context{this,0,0};append(&context,reinterpret_cast<void*>(row.first),row.second.bytes);}
        }
#if defined(PLS_GC_PHASE_PROFILE)
        const auto account_callbacks=std::chrono::steady_clock::now();
#endif
        std::sort(retained.begin(),retained.end());
#if defined(PLS_GC_PHASE_PROFILE)
        const auto account_sorted=std::chrono::steady_clock::now();
#endif
        std::size_t total = stats.body_bytes+stable_external_bytes;
        std::uintptr_t begin = 0,end = 0;
        const auto add_external=[&](std::uintptr_t first,std::uintptr_t last){
            if(first==last)return;
            total+=last-first;
            auto it=ranges.lower_bound(first);
            if(it!=ranges.begin()){auto previous=std::prev(it);if(previous->first+previous->second.bytes>first)it=previous;}
            for(;it!=ranges.end()&&it->first<last;++it){
                if(it->first!=it->second.owner&&!blocks.at(it->second.owner).descriptor.stable_ranges)continue;
                const auto low=std::max(first,it->first),high=std::min(last,it->first+it->second.bytes);
                if(high>low)total-=high-low;
            }
        };
        for(const auto& range:retained){
            if(range.first>end){add_external(begin,end);begin=range.first;end=range.second;}
            else end=std::max(end,range.second);
        }
        add_external(begin,end);
#if defined(PLS_GC_PHASE_PROFILE)
        if(collection_probe){
            const auto ns=[](auto a,auto b){return static_cast<unsigned long long>(std::chrono::duration_cast<std::chrono::nanoseconds>(b-a).count());};
            std::fprintf(stderr,"PLS_GC_ACCOUNT={\"stable\":%llu,\"callbacks\":%llu,\"ranges\":%llu,\"callback_ns\":%llu,\"sort_ns\":%llu,\"union_ns\":%llu}\n",static_cast<unsigned long long>(stable_count),static_cast<unsigned long long>(callback_count),static_cast<unsigned long long>(retained.size()),ns(account_start,account_callbacks),ns(account_callbacks,account_sorted),ns(account_sorted,std::chrono::steady_clock::now()));
        }
#endif
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
    static std::size_t page_hash(std::uintptr_t page) {
        // Fixed integer mixing, no allocation and no managed pointer access.
        std::uint64_t value=page;
        value^=value>>30;value*=UINT64_C(0xbf58476d1ce4e5b9);
        value^=value>>27;value*=UINT64_C(0x94d049bb133111eb);
        return static_cast<std::size_t>(value^(value>>31));
    }
    void index_range(std::uintptr_t begin,std::size_t bytes,Block* block) {
        if(!bytes||begin+bytes<begin)throw std::logic_error("Invalid GC range");
        auto next=ranges.lower_bound(begin);
        if(next!=ranges.end()&&next->first<begin+bytes)throw std::logic_error("Overlapping GC ranges");
        if(next!=ranges.begin()){auto previous=std::prev(next);if(begin-previous->first<previous->second.bytes)throw std::logic_error("Overlapping GC ranges");}
        snapshot_ranges.push_back({begin,begin+bytes,block});
    }
    std::uintptr_t fixed_owner(std::uintptr_t address)const{
        auto found=fixed_pages.find(address>>12);if(found==fixed_pages.end())return 0;
        const auto& bucket=found->second;
        auto it=std::upper_bound(bucket.begin(),bucket.end(),address,[](std::uintptr_t value,const PersistentRange&r){return value<r.begin;});
        if(it==bucket.begin())return 0;
        --it;return address<it->end?it->owner:0;
    }
    void remove_fixed(std::uintptr_t begin,std::size_t bytes)noexcept{
        for(auto page=begin>>12;page<=(begin+bytes-1)>>12;++page){
            auto found=fixed_pages.find(page);if(found==fixed_pages.end())continue;
            auto& bucket=found->second;
            auto it=std::lower_bound(bucket.begin(),bucket.end(),begin,[](const PersistentRange&r,std::uintptr_t value){return r.begin<value;});
            if(it!=bucket.end()&&it->begin==begin)bucket.erase(it);
            if(bucket.empty())fixed_pages.erase(found);
        }
    }
    void add_fixed(std::uintptr_t begin,std::size_t bytes,std::uintptr_t owner_key){
        try{
            for(auto page=begin>>12;page<=(begin+bytes-1)>>12;++page){
                auto& bucket=fixed_pages[page];
                auto it=std::lower_bound(bucket.begin(),bucket.end(),begin,[](const PersistentRange&r,std::uintptr_t value){return r.begin<value;});
                bucket.insert(it,{begin,begin+bytes,owner_key});
            }
        }catch(...){remove_fixed(begin,bytes);throw;}
    }
    void build_page_index() {
        std::sort(snapshot_ranges.begin(),snapshot_ranges.end(),[](const auto& a,const auto& b){return a.begin<b.begin;});
        std::size_t count=0;std::uintptr_t previous_end=0,previous_page=static_cast<std::uintptr_t>(-1);
        for(const auto& range:snapshot_ranges){
            if(range.begin<previous_end)throw std::logic_error("Overlapping GC ranges");
            previous_end=range.end;
            const auto first=range.begin>>12,last=(range.end-1)>>12;
            count+=static_cast<std::size_t>(last-first+1)-(first==previous_page?1:0);previous_page=last;
        }
        std::size_t capacity=16;
        while(capacity<count*2)capacity*=2;
        if(pages.size()<capacity)pages.resize(capacity);
        std::fill(pages.begin(),pages.end(),Page{});
        for(std::size_t i=0;i<snapshot_ranges.size();++i){
            const auto& range=snapshot_ranges[i];
            for(auto page=range.begin>>12;page<=(range.end-1)>>12;++page){
                const auto key=page+1;auto slot=page_hash(page)&(pages.size()-1);
                while(pages[slot].key&&pages[slot].key!=key)slot=(slot+1)&(pages.size()-1);
                auto& entry=pages[slot];
                if(!entry.key){entry.key=key;entry.first=i;}
                entry.last=i+1;
            }
        }
        snapshot_active=true;
    }
    Block* indexed_owner(std::uintptr_t address) const {
        if(const auto fixed=fixed_owner(address))return const_cast<Blocks&>(blocks).find(fixed);
        const auto page=address>>12,key=page+1;auto slot=page_hash(page)&(pages.size()-1);
        while(pages[slot].key&&pages[slot].key!=key)slot=(slot+1)&(pages.size()-1);
        const auto& entry=pages[slot];if(!entry.key)return nullptr;
        // At most 4096 disjoint nonempty ranges can intersect one 4 KiB page.
        // Search is bounded by page size, not the total number of heap objects.
        auto first=snapshot_ranges.begin()+entry.first,last=snapshot_ranges.begin()+entry.last;
        auto it=std::upper_bound(first,last,address,[](std::uintptr_t value,const IndexedRange& r){return value<r.begin;});
        if(it==first)return nullptr;
        --it;return address<it->end?it->block:nullptr;
    }
    std::uintptr_t owner(std::uintptr_t address) const {
#if defined(PLS_GC_PHASE_PROFILE)
        LookupProbe lookup_probe;
#endif
        if(snapshot_active){auto block=indexed_owner(address);return block?reinterpret_cast<std::uintptr_t>(block->pointer):0;}
        return fixed_owner(address);
    }
    void range(std::uintptr_t begin, std::size_t bytes, std::uintptr_t owner_key,bool explicit_range=false) {
        if (!bytes || begin + bytes < begin) throw std::logic_error("Invalid GC range");
        auto next = ranges.lower_bound(begin);
        if (next != ranges.end() && next->first < begin + bytes)
            throw std::logic_error("Overlapping GC ranges");
        if (next != ranges.begin()) {
            auto prev = std::prev(next);
            if (begin - prev->first < prev->second.bytes) throw std::logic_error("Overlapping GC ranges");
        }
        auto inserted=ranges.emplace(begin, Range{bytes, owner_key,explicit_range});
        try{add_fixed(begin,bytes,owner_key);}catch(...){ranges.erase(inserted.first);throw;}
        if(explicit_range)++explicit_ranges;
    }
    auto erase_range(decltype(ranges)::iterator it){remove_fixed(it->first,it->second.bytes);if(it->second.explicit_range)--explicit_ranges;return ranges.erase(it);}
    void mark(const void* pointer) {
        if(!pointer)return; // Null cannot belong to any allocation or interior range.
        Block* block;
        {
#if defined(PLS_GC_PHASE_PROFILE)
            LookupProbe lookup_probe;
#endif
            const auto address=reinterpret_cast<std::uintptr_t>(pointer);
            block=blocks.find(address);
            if(!block)block=indexed_owner(address);
        }
        if (!block || block->marked) return;
        work.push_back(block); // May throw; only change mark after successful push.
        block->marked = true;
        ++marked_count;
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
#if defined(PLS_GC_ROOT_TRACE)
    // After marking, re-enumerate every root WITHOUT marking and report each
    // one from which the target is reachable through precise heap edges.
    void trace_root_paths() {
        const auto target=root_trace_target.load();
        if(!target)return;
        Block* goal=blocks.find(target);
        std::fprintf(stderr,"PLS_GC_ROOT_TRACE target=0x%llx registered=%d retained=%d\n",(unsigned long long)target,goal?1:0,goal&&goal->marked?1:0);
        if(!goal||!goal->marked)return;
        auto resolve=[&](std::uintptr_t v)->Block*{if(v<=1)return nullptr;Block* b=blocks.find(v);return b?b:indexed_owner(v);};
        struct Walk{Impl* state;std::vector<Block*>* stack;std::unordered_set<Block*>* seen;};
        auto reaches=[&](Block* start)->bool{
            std::vector<Block*> stack{start};std::unordered_set<Block*> seen{start};Walk walk{this,&stack,&seen};
            while(!stack.empty()){
                Block* b=stack.back();stack.pop_back();if(b==goal)return true;
                if(b->descriptor.trace)b->descriptor.trace(b->pointer,Edges{&walk,[](void* c,const void* p){
                    auto& w=*static_cast<Walk*>(c);const auto v=reinterpret_cast<std::uintptr_t>(p);if(v<=1)return;
                    Block* n=w.state->blocks.find(v);if(!n)n=w.state->indexed_owner(v);
                    if(n&&w.seen->insert(n).second)w.stack->push_back(n);}});
            }
            return false;
        };
        auto name=[](Block* b){return b->descriptor.name?b->descriptor.name:"?";};
#if defined(_WIN32)
        static bool symbols=SymInitialize(GetCurrentProcess(),nullptr,TRUE)!=FALSE;
        auto symbol=[&](std::uintptr_t address,char* out,std::size_t size){
            alignas(SYMBOL_INFO) unsigned char buffer[sizeof(SYMBOL_INFO)+512]{};auto* info=reinterpret_cast<SYMBOL_INFO*>(buffer);
            info->SizeOfStruct=sizeof(SYMBOL_INFO);info->MaxNameLen=511;DWORD64 displacement=0;
            if(symbols&&SymFromAddr(GetCurrentProcess(),address,&displacement,info))std::snprintf(out,size,"%s+0x%llx",info->Name,(unsigned long long)displacement);
            else std::snprintf(out,size,"0x%llx",(unsigned long long)address);
        };
        auto describe=[&](Block* b){
            char text[600];std::uintptr_t vtable=0;if(b->bytes>=sizeof(vtable))std::memcpy(&vtable,b->pointer,sizeof(vtable));
            symbol(vtable,text,sizeof(text));
            std::fprintf(stderr,"PLS_GC_ROOT_TRACE root_object=0x%llx bytes=%zu first_word=%s\n",(unsigned long long)reinterpret_cast<std::uintptr_t>(b->pointer),b->bytes,text);
        };
#endif
        for(const auto& row:roots){
            std::vector<std::uintptr_t> hits;
            row.second(Edges{&hits,[](void* c,const void* p){static_cast<std::vector<std::uintptr_t>*>(c)->push_back(reinterpret_cast<std::uintptr_t>(p));}});
            for(auto v:hits)if(auto b=resolve(v))if(reaches(b))
                std::fprintf(stderr,"PLS_GC_ROOT_TRACE kind=provider token=%llu value=0x%llx block=%s\n",(unsigned long long)row.first,(unsigned long long)v,name(b));
        }
        std::size_t thread_index=0;
        for(const auto& row:threads){
            const auto& saved=row.second.snapshot;
            std::fprintf(stderr,"PLS_GC_ROOT_TRACE thread=%zu bottom=0x%llx top=0x%llx copied_words=%zu copied_low=0x%llx native=%zu parked=%d\n",thread_index,
                (unsigned long long)row.second.bottom,(unsigned long long)row.second.top,saved.words.size(),(unsigned long long)(row.second.top-saved.words.size()*sizeof(void*)),row.second.native,row.second.parked?1:0);
            const auto* regs=reinterpret_cast<const unsigned char*>(&saved.registers);
            for(std::size_t i=0;i+sizeof(void*)<=sizeof(saved.registers);i+=sizeof(void*)){
                std::uintptr_t v;std::memcpy(&v,regs+i,sizeof(v));
                if(auto b=resolve(v))if(reaches(b))std::fprintf(stderr,"PLS_GC_ROOT_TRACE kind=register thread=%zu context_offset=%zu value=0x%llx block=%s\n",thread_index,i,(unsigned long long)v,name(b));
            }
            const auto& w=saved.words;
            for(std::size_t i=0;i<w.size();++i)if(auto b=resolve(w[i]))if(reaches(b)){
                std::fprintf(stderr,"PLS_GC_ROOT_TRACE kind=stack thread=%zu word_from_sp=%zu address=0x%llx value=0x%llx block=%s neighbors=",thread_index,i,
                    (unsigned long long)(row.second.top-(w.size()-i)*sizeof(void*)),(unsigned long long)w[i],name(b));
                for(std::size_t j=i>=8?i-8:0;j<w.size()&&j<i+24;++j)std::fprintf(stderr,"%s0x%llx",j==(i>=8?i-8:0)?"":",",(unsigned long long)w[j]);
                std::fprintf(stderr,"\n");
#if defined(_WIN32)
                describe(b);
                // Return addresses near the word identify its frame on any thread.
                for(std::size_t j=i>=16?i-16:0;j<w.size()&&j<i+48;++j){
                    alignas(SYMBOL_INFO) unsigned char buffer[sizeof(SYMBOL_INFO)+512]{};auto* info=reinterpret_cast<SYMBOL_INFO*>(buffer);
                    info->SizeOfStruct=sizeof(SYMBOL_INFO);info->MaxNameLen=511;DWORD64 displacement=0;
                    if(symbols&&SymFromAddr(GetCurrentProcess(),w[j],&displacement,info)&&displacement<0x4000)
                        std::fprintf(stderr,"PLS_GC_ROOT_TRACE near word_from_sp=%zu (root %+lld) code=%s+0x%llx\n",j,(long long)j-(long long)i,info->Name,(unsigned long long)displacement);
                }
                if(row.first==std::this_thread::get_id()){
                    // Unwind the collector's own (still intact) stack from the
                    // captured context; report the frame whose extent holds the word.
                    const auto address=row.second.top-(w.size()-i)*sizeof(void*);
                    CONTEXT context=saved.registers;
                    for(int frame=0;frame<64&&context.Rip;++frame){
                        DWORD64 image=0;const auto rip=context.Rip,sp=context.Rsp;
                        auto* entry=RtlLookupFunctionEntry(rip,&image,nullptr);
                        if(!entry){context.Rip=*reinterpret_cast<DWORD64*>(context.Rsp);context.Rsp+=8;}
                        else{void* handler=nullptr;DWORD64 establisher=0;RtlVirtualUnwind(UNW_FLAG_NHANDLER,image,rip,entry,&context,&handler,&establisher,nullptr);}
                        char text[600];symbol(rip,text,sizeof(text));
                        std::fprintf(stderr,"PLS_GC_ROOT_TRACE frame=%d function=%s frame_sp=0x%llx frame_end=0x%llx%s\n",frame,text,(unsigned long long)sp,(unsigned long long)context.Rsp,address>=sp&&address<context.Rsp?" CONTAINS_ROOT":"");
                    }
                }
#endif
            }
            for(auto p:row.second.constructing)if(auto b=resolve(reinterpret_cast<std::uintptr_t>(p)))if(reaches(b))std::fprintf(stderr,"PLS_GC_ROOT_TRACE kind=constructing thread=%zu block=%s\n",thread_index,name(b));
            ++thread_index;
        }
    }
#endif
    std::uintptr_t collect_body();
    void resume() {
        snapshot_active=false;
        snapshot_ranges.clear();
        // Descriptor payload ranges are valid only while mutators are stopped.
        // A vector/string may release or move its storage immediately after
        // resume, and a new object may reuse that address before the next GC.
        // Keep object bodies and explicitly maintained ranges; reconstruct
        // descriptor ranges at the next stopped-world tracing snapshot.
        // Dynamic descriptors now populate only snapshot_ranges. The persistent
        // map contains bodies and immutable buffers, except explicit user ranges.
        // Ordinary inspections create no temporary ranges to retire.
        if (explicit_ranges && ranges.size() > blocks.size()) for (auto it = ranges.begin(); it != ranges.end();) {
            if (it->first != it->second.owner && blocks.at(it->second.owner).descriptor.ranges&&!blocks.at(it->second.owner).descriptor.stable_ranges)
                it = erase_range(it);
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
        if(descriptor.stable_ranges){
            if(descriptor.retained_ranges&&!descriptor.ranges)throw std::logic_error("Stable retained buffers require fixed ranges");
            struct Context {Impl* state;std::uintptr_t key;Impl::Block* block;} context{&s,key,&inserted.first->second};
            if(descriptor.ranges)descriptor.ranges(object,Ranges{&context,[](void* value,const void* begin,std::size_t size){
                auto& c=*static_cast<Context*>(value);const auto address=reinterpret_cast<std::uintptr_t>(begin);
                if(!begin||!size)return;
                if(address>=c.key&&address-c.key<c.block->bytes&&size<=c.block->bytes-(address-c.key))return;
                c.state->range(address,size,c.key);c.block->stable_bytes+=size;
            }});
            if(inserted.first->second.stable_bytes>s.limit-s.stats.bytes-bytes)throw std::bad_alloc();
        }
        s.register_dynamic(key,inserted.first->second);
        if (thread.construction) thread.constructing.push_back(object);
    } catch (...) {
        s.unregister_dynamic(inserted.first->second);
        if(range_added)for(auto it=s.ranges.begin();it!=s.ranges.end();)
            if(it->second.owner==key)it=s.erase_range(it);else ++it;
        s.blocks.erase(key);throw;
    }
    const auto stable_bytes=inserted.first->second.stable_bytes;
    s.stable_external_bytes+=stable_bytes;s.stats.external_bytes+=stable_bytes;
    s.stats.external_growth_bytes+=stable_bytes;
    ++s.stats.objects; ++s.stats.allocations;
    s.stats.body_bytes += bytes;
    s.stats.bytes += bytes+stable_bytes; s.stats.allocated_bytes += bytes+stable_bytes; s.since_collection += bytes+stable_bytes;
    s.stats.peak_bytes=std::max(s.stats.peak_bytes,s.stats.bytes);
}
void Heap::add_range(void* owner, const void* begin, std::size_t bytes) {
    std::lock_guard<std::mutex> lock(impl_->mutex);
    auto key = reinterpret_cast<std::uintptr_t>(owner);
    if (!impl_->blocks.count(key)) throw std::logic_error("Unknown range owner");
    impl_->range(reinterpret_cast<std::uintptr_t>(begin), bytes, key,true);
}
void Heap::remove_range(const void* begin) {
    std::lock_guard<std::mutex> lock(impl_->mutex);
    auto key = reinterpret_cast<std::uintptr_t>(begin);
    if (impl_->blocks.count(key)) throw std::logic_error("Cannot remove object body range");
    auto it=impl_->ranges.find(key);
    if(it!=impl_->ranges.end()){
        if(!it->second.explicit_range&&impl_->blocks.at(it->second.owner).descriptor.stable_ranges)throw std::logic_error("Cannot remove immutable owned buffer");
        impl_->erase_range(it);
    }
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
PLS_GC_NOINLINE std::uintptr_t Heap::Impl::collect_body() {
#if defined(PLS_GC_PHASE_PROFILE)
    CollectionProbe profile;
#endif
    const auto started = std::chrono::steady_clock::now();
    auto& s = *this;
    std::unique_lock<std::mutex> lock(s.mutex);
    auto& thread = s.current();
    if (thread.native) throw std::logic_error("Collection inside native wait");
    capture(thread.snapshot, thread.bottom, thread.top);
    // A second collector participates in the first collector's rendezvous.
    PLS_GC_PHASE(rendezvous);
    if (s.requested) {
        if (s.collector == std::this_thread::get_id()) throw std::logic_error("Recursive collection");
        thread.parked = true;
        s.changed.notify_all();
        wait_condition(s.changed,lock, [&] { return !s.requested; });
        thread.parked = false;
        return thread.bottom;
    }
    s.requested = true; s.collector = std::this_thread::get_id();
    try {
        const bool stopped = wait_condition_for(s.changed, lock, s.timeout, [&] {
            for (const auto& row : s.threads)
                if (row.first != s.collector && !row.second.native && !row.second.parked) return false;
            return true;
        });
        if (!stopped) throw std::runtime_error("GC cooperative rendezvous timed out; no objects swept");
        PLS_GC_PHASE(account_before);
        s.account_retained();
        const auto bytes_before = s.stats.bytes;
#if defined(PLS_GC_PHASE_PROFILE)
        profile.objects=s.blocks.size();profile.retained=bytes_before;
#endif
        PLS_GC_PHASE(ranges);
        // Rebuild dynamic payload ranges after workers stop. Container storage
        // can move on reserve/resize without any write barrier on references.
        if(s.explicit_ranges)for (auto it=s.ranges.begin();it!=s.ranges.end();)
            if(it->first!=it->second.owner&&s.blocks.at(it->second.owner).descriptor.ranges&&!s.blocks.at(it->second.owner).descriptor.stable_ranges)it=s.erase_range(it);else ++it;
        s.snapshot_ranges.clear();
        struct RangeContext{Impl* state;std::uintptr_t owner;Impl::Block* block;};
        for(auto key:s.dynamic_buffers){
            auto& block=s.blocks.at(key);
            if(!block.descriptor.ranges)continue;
            RangeContext context{&s,key,&block};
            block.descriptor.ranges(block.pointer,Ranges{&context,[](void* value,const void* begin,std::size_t bytes){
                auto& context=*static_cast<RangeContext*>(value);
                auto address=reinterpret_cast<std::uintptr_t>(begin);
                if(!begin||!bytes)return;
                const auto& block=*context.block;
                if(address>=context.owner&&address-context.owner<block.bytes)return; // inline/SSO payload
                context.state->index_range(address,bytes,context.block);
            }});
        }
        s.build_page_index();
        PLS_GC_PHASE(clear_marks);
        for (auto& row : s.blocks) row.second.marked = false;
        s.marked_count=0;
        s.work.clear();
        PLS_GC_PHASE(roots);
        for (const auto& row : s.roots) row.second(s.edges());
        s.stats.last_explicit_roots=s.work.size();
        PLS_GC_PHASE(stack_scan);
        for (const auto& row : s.threads) {
            const auto& saved = row.second.snapshot;
            s.scan(&saved.registers, sizeof(saved.registers));
            s.scan(saved.words.data(), saved.words.size() * sizeof(void*));
            for (auto p : row.second.constructing) s.mark(p);
        }
        s.stats.last_roots = s.work.size();
        PLS_GC_PHASE(mark);
        while (!s.work.empty()) {
            const auto& block = *s.work.back(); s.work.pop_back();
            if (block.descriptor.trace) block.descriptor.trace(block.pointer, s.edges());
        }
        // Unlink all dead objects before destruction. Destructors release native
        // payloads only; no managed callbacks, allocations or resurrection.
#if defined(PLS_GC_ROOT_TRACE)
        s.trace_root_paths();
#endif
        PLS_GC_PHASE(sweep);
        s.snapshot_active=false;
        s.snapshot_ranges.clear();
        auto& dead_list=s.dead;
        dead_list.clear();
        dead_list.reserve(s.blocks.size());
        // Compact each page once for dense reclamation, instead of moving its
        // range vector for every dead object. Sparse collections keep the
        // individual path. All block records remain valid during compaction.
        const bool bulk_ranges=s.blocks.size()-s.marked_count>s.blocks.size()/4;
        if(bulk_ranges){
            for(auto page=s.fixed_pages.begin();page!=s.fixed_pages.end();){
                auto& bucket=page->second;
                bucket.erase(std::remove_if(bucket.begin(),bucket.end(),[&](const Impl::PersistentRange& range){return !s.blocks.at(range.owner).marked;}),bucket.end());
                if(bucket.empty())page=s.fixed_pages.erase(page);else ++page;
            }
            for(auto it=s.ranges.begin();it!=s.ranges.end();){
                if(!s.blocks.at(it->second.owner).marked){
                    if(it->second.explicit_range)--s.explicit_ranges;
                    it=s.ranges.erase(it);
                }else ++it;
            }
        }
        for (auto it = s.blocks.begin(); it != s.blocks.end();) {
            if (it->second.marked) { ++it; continue; }
            dead_list.push_back(it->second);
            --s.stats.objects; s.stats.bytes -= it->second.bytes;
            s.stats.body_bytes -= it->second.bytes;
            s.stable_external_bytes-=it->second.stable_bytes;
            ++s.stats.reclaimed_objects;
            if(!bulk_ranges&&it->second.descriptor.stable_ranges&&it->second.descriptor.ranges){
                struct DeadContext{Impl* state;std::uintptr_t owner;} context{&s,it->first};
                it->second.descriptor.ranges(it->second.pointer,Ranges{&context,[](void* value,const void* begin,std::size_t){
                    auto& context=*static_cast<DeadContext*>(value);
                    auto found=context.state->ranges.find(reinterpret_cast<std::uintptr_t>(begin));
                    if(found!=context.state->ranges.end()&&found->first!=context.owner&&found->second.owner==context.owner)
                        context.state->erase_range(found);
                }});
            }
            if(!bulk_ranges)s.erase_range(s.ranges.find(it->first));
            s.unregister_dynamic(it->second);
            it = s.blocks.erase(it);
        }
        if(!bulk_ranges&&s.explicit_ranges)for (auto it = s.ranges.begin(); it != s.ranges.end();)
            if (it->first!=it->second.owner&&!s.blocks.count(it->second.owner)) it = s.erase_range(it); else ++it;
        PLS_GC_PHASE(account_after);
        s.account_retained(false);
        s.stats.reclaimed_bytes += bytes_before-s.stats.bytes;
        // Keep mutators stopped, but allow native cleanup to unregister ranges
        // or root handles without recursively taking the heap lock.
        lock.unlock();
        PLS_GC_PHASE(destroy);
        for (const auto& block : dead_list) if (block.descriptor.destroy) block.descriptor.destroy(block.pointer);
        dead_list.clear();
        lock.lock();
        ++s.stats.collections; s.since_collection = 0;
        PLS_GC_PHASE(resume);
        s.resume();
        s.stats.last_pause_ns = static_cast<std::uint64_t>(std::chrono::duration_cast<std::chrono::nanoseconds>(
            std::chrono::steady_clock::now() - started).count());
        s.stats.pause_ns += s.stats.last_pause_ns;
        s.stats.interval_max_pause_ns=std::max(s.stats.interval_max_pause_ns,s.stats.last_pause_ns);
#if defined(PLS_GC_PHASE_PROFILE)
        profile.complete=true;
#endif
        return thread.bottom;
    } catch (...) { s.resume(); throw; }
}
namespace {
// Zero dead stack below the caller. The collector's own frame and marking
// callees leave words naming objects marked in THIS cycle; the next collection
// at the same depth would otherwise find them in its uninitialized slots and
// retain garbage for one more cycle (measured: Stack fixture, slot 75 words
// above SP inside Heap::collect). Bounded by the registered stack bottom so
// small CTR thread stacks are never overrun.
template<std::size_t N> PLS_GC_NOINLINE void scrub_dead_stack() {
    volatile unsigned char area[N];
    for (std::size_t i = 0; i < N; ++i) area[i] = 0;
}
PLS_GC_NOINLINE void scrub_below(std::uintptr_t bottom) {
    volatile unsigned char anchor = 0;
    const auto here = reinterpret_cast<std::uintptr_t>(&anchor);
    const auto available = here > bottom ? here - bottom : 0;
    if (available > 16384 + 8192) scrub_dead_stack<16384>();
    else if (available > 4096 + 4096) scrub_dead_stack<4096>();
}
}
PLS_GC_NOINLINE void Heap::collect() {
    scrub_below(impl_->collect_body());
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
        if(!wait_condition_for(s.changed,lock,s.timeout,[&]{
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
