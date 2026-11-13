// Included once by semantic_runtime.cpp inside pls::cs. This bridge replaces
// the legacy ownership-count collector when PLS_TRACING_GC is enabled.
#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4996) // Standard getenv, read once during heap initialization.
#endif
gc::Heap& tracing_heap(){
    // Like the native root registry, heap metadata outlives static/TLS owners.
    static auto* heap=[](){
        auto value=std::make_unique<gc::Heap>();
        // Volume collections are a fallback; explicit source calls and screen
        // transitions remain immediate safe points. ARM: the stable heap after
        // the title is ~16.5 MB retained (Azahar suite trace, 2026-11-13) with
        // ~15 MB malloc headroom; 4 MiB (about a quarter of the stable heap)
        // halves load-time volume collections and keeps the peak within reserve.
#ifndef PLS_GC_THRESHOLD_BYTES_DEFAULT
#if defined(__3DS__)
#define PLS_GC_THRESHOLD_BYTES_DEFAULT (4u*1024u*1024u)
#else
#define PLS_GC_THRESHOLD_BYTES_DEFAULT (8u*1024u*1024u)
#endif
#endif
        value->threshold(PLS_GC_THRESHOLD_BYTES_DEFAULT);
        if(const char* configured=std::getenv("PLS_GC_THRESHOLD_BYTES")){
            for(const char* p=configured;*p;++p)if(*p<'0'||*p>'9')throw std::logic_error("Invalid PLS_GC_THRESHOLD_BYTES");
            char* end=nullptr;
            errno=0;
            const auto bytes=std::strtoull(configured,&end,10);
            if(!*configured||!end||*end||!bytes||errno==ERANGE||bytes>std::numeric_limits<std::size_t>::max())
                throw std::logic_error("Invalid PLS_GC_THRESHOLD_BYTES");
            value->threshold(static_cast<std::size_t>(bytes));
        }
        value->add_roots([](gc::Edges edges){visit_gc_roots([edges](const Ref<Object>& object){edges(object);});});
        return value.release();
    }();
    return *heap;
}
#if defined(_MSC_VER)
#pragma warning(pop)
#endif
void ensure_gc_thread(){
    struct Registration{Registration(){tracing_heap().enter();}~Registration(){tracing_heap().leave();}};
    thread_local Registration registration;
    (void)registration;
}
std::uint64_t managed_identity(const void* pointer){return tracing_heap().identity(pointer);}
bool managed_alive(const void* pointer,std::uint64_t identity){return tracing_heap().alive(pointer,identity);}
void register_managed_object(const Ref<Object>&,std::size_t,const void*){
    throw InvalidOperationException("Tracing objects must be allocated with their generated descriptor");
}
void visit_managed_memory(const memory::RangeVisitor& visitor,const std::function<void()>& finish){
    ensure_gc_thread();
    tracing_heap().inspect([&](void* pointer,std::size_t bytes,const gc::Descriptor& descriptor){
        visitor(pointer,bytes,memory::Category::managed_heap);
        if(descriptor.managed_base)static_cast<Object*>(descriptor.managed_base(pointer))->memory_ranges(visitor);
    },finish);
}
std::int32_t gc_max_generation()noexcept{return 0;}
std::int32_t gc_generation(const Ref<Object>& object){
    if(!object)throw ArgumentNullException();
    if(!tracing_heap().contains(object))throw NotSupportedException("Unregistered managed object");
    return 0;
}
GcMutatorScope::GcMutatorScope(){try{ensure_gc_thread();tracing_heap().enter();}catch(const std::logic_error&e){throw InvalidOperationException(e.what());}}
GcMutatorScope::~GcMutatorScope(){tracing_heap().leave();}
void gc_safepoint(){try{ensure_gc_thread();tracing_heap().safepoint();}catch(const std::logic_error&e){throw InvalidOperationException(e.what());}}
GcNativeBlockingScope::GcNativeBlockingScope(){try{ensure_gc_thread();tracing_heap().begin_native_wait();}catch(const std::logic_error&e){throw InvalidOperationException(e.what());}}
GcNativeBlockingScope::~GcNativeBlockingScope(){tracing_heap().end_native_wait();}
namespace {std::mutex tracing_stats_mutex;GcCollectionStats tracing_last;std::atomic<bool> tracing_collection_pending{false};}
GcCollectionStats gc_last_collection(){std::lock_guard<std::mutex>lock(tracing_stats_mutex);return tracing_last;}
GcRegistryStats gc_registry_stats(){return {tracing_heap().statistics().objects,0};}
#if defined(PLS_GC_TRACE)
}
// Diagnostic build only: written by the asset catalog, printed per collection.
extern "C" char pls_gc_trace_note[160]={};
extern "C" unsigned long pls_gc_trace_reads=0;
// Last 128 real catalog reads: kind digit and key prefix.
extern "C" char pls_gc_trace_ring[128][24]={};
namespace {unsigned long pls_gc_trace_printed=0;}
namespace pls::cs {
#endif
namespace {
std::mutex gc_event_mutex;std::array<GcEvent,64> gc_event_ring{};std::uint64_t gc_event_sequence=0;
char gc_pending_source[48]{};char gc_explicit_context[48]{};
void gc_collect_as(GcTrigger trigger,const char* source);
}
void gc_collect(std::int32_t generation){
    if(generation<0)throw ArgumentOutOfRangeException();
    char context[48];{std::lock_guard<std::mutex>lock(gc_event_mutex);std::memcpy(context,gc_explicit_context,sizeof(context));}
    gc_collect_as(GcTrigger::explicit_call,context[0]?context:nullptr);
}
void gc_context(const char* context){
    std::lock_guard<std::mutex>lock(gc_event_mutex);std::size_t i=0;
    if(context)for(;context[i]&&i+1<sizeof(gc_explicit_context);++i)gc_explicit_context[i]=context[i];
    gc_explicit_context[i]=0;
}
std::vector<GcEvent> gc_events_after(std::uint64_t sequence){
    std::lock_guard<std::mutex>lock(gc_event_mutex);std::vector<GcEvent> result;
    const auto first=gc_event_sequence>gc_event_ring.size()?gc_event_sequence-gc_event_ring.size():0;
    for(auto s=std::max(first,sequence);s<gc_event_sequence;++s)result.push_back(gc_event_ring[s%gc_event_ring.size()]);
    return result;
}
namespace {
void gc_collect_as(GcTrigger trigger,const char* source){
    ensure_gc_thread();
    const auto before=tracing_heap().statistics();
    [[maybe_unused]] allocation_probe::Collection measurement;
    try{tracing_heap().collect();}
    catch(const std::bad_alloc&){throw OutOfMemoryException();}
    catch(const std::logic_error&error){throw InvalidOperationException(error.what());}
    catch(const std::runtime_error&error){throw NotSupportedException(error.what());}
    const auto after=tracing_heap().statistics();
    const auto freed=after.reclaimed_objects-before.reclaimed_objects;
    {std::lock_guard<std::mutex>lock(tracing_stats_mutex);tracing_last={before.objects,after.last_roots,freed,freed};}
    {std::lock_guard<std::mutex>lock(gc_event_mutex);auto& event=gc_event_ring[gc_event_sequence%gc_event_ring.size()];
     event=GcEvent{};event.sequence=++gc_event_sequence;event.trigger=trigger;event.pause_ns=after.last_pause_ns;
     if(source){std::size_t i=0;for(;source[i]&&i+1<sizeof(event.source);++i)event.source[i]=source[i];event.source[i]=0;}}
#if defined(PLS_GC_TRACE)
    // Diagnostic build only: one line per collection, after the pause clock.
    {
#if defined(__3DS__)
        const auto heap=mallinfo();const long malloc_used=heap.uordblks;
#else
        const long malloc_used=-1;
#endif
        std::fprintf(stderr,"PLS_GC_TRACE={\"collection\":%llu,\"objects_before\":%llu,\"objects_after\":%llu,\"retained_after\":%llu,\"pause_ns\":%llu,\"malloc_used\":%ld,\"catalog_reads\":%lu,\"last_catalog_key\":\"%s\",\"allocated_bytes_total\":%llu,\"external_growth_total\":%llu,\"allocations_total\":%llu}\n",
            static_cast<unsigned long long>(after.collections),static_cast<unsigned long long>(before.objects),
            static_cast<unsigned long long>(after.objects),static_cast<unsigned long long>(after.bytes),
            static_cast<unsigned long long>(after.last_pause_ns),malloc_used,pls_gc_trace_reads,pls_gc_trace_note,
            static_cast<unsigned long long>(after.allocated_bytes),static_cast<unsigned long long>(after.external_growth_bytes),static_cast<unsigned long long>(after.allocations));
        {const auto total=pls_gc_trace_reads;auto first=total>128&&total-128>pls_gc_trace_printed?total-128:pls_gc_trace_printed;
         std::fprintf(stderr,"PLS_GC_RING=%lu:",first);for(auto i=first;i<total;++i)std::fprintf(stderr,"%s%s",i==first?"":",",pls_gc_trace_ring[i%128]);
         std::fputc(10,stderr);pls_gc_trace_printed=total;}
        std::fflush(stderr);
    }
#endif
}
}
void gc_request_collection(const char* source){
    {std::lock_guard<std::mutex>lock(gc_event_mutex);
     std::size_t i=0;if(source)for(;source[i]&&i+1<sizeof(gc_pending_source);++i)gc_pending_source[i]=source[i];gc_pending_source[i]=0;}
    tracing_collection_pending.store(true,std::memory_order_release);
}
void gc_loading_safepoint(){
    ensure_gc_thread();
    if(tracing_heap().collection_due())gc_collect_as(GcTrigger::loading,nullptr);
}
void gc_frame_end(){
    ensure_gc_thread();
    tracing_heap().refresh_memory_accounting();
    if(tracing_collection_pending.exchange(false,std::memory_order_acq_rel)){
        char source[48];{std::lock_guard<std::mutex>lock(gc_event_mutex);std::memcpy(source,gc_pending_source,sizeof(source));}
        gc_collect_as(GcTrigger::transition,source);
    }else if(tracing_heap().collection_due())gc_collect_as(GcTrigger::volume,nullptr);
}
