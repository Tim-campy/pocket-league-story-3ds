// Included once by semantic_runtime.cpp inside pls::cs. This bridge replaces
// the legacy ownership-count collector when PLS_TRACING_GC is enabled.
gc::Heap& tracing_heap(){
    // Like the native root registry, heap metadata outlives static/TLS owners.
    static auto* heap=[](){
        auto* value=new gc::Heap;
        value->add_roots([](gc::Edges edges){visit_gc_roots([edges](const Ref<Object>& object){edges(object);});});
        return value;
    }();
    return *heap;
}
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
void gc_collect(std::int32_t generation){
    if(generation<0)throw ArgumentOutOfRangeException();
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
}
void gc_request_collection(){tracing_collection_pending.store(true,std::memory_order_release);}
void gc_frame_end(){
    ensure_gc_thread();
    if(tracing_collection_pending.exchange(false,std::memory_order_acq_rel)||tracing_heap().collection_due())gc_collect(0);
}
