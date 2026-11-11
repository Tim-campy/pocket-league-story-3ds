#include "managed_exceptions.hpp"
#include <atomic>
#include <iostream>
#include <thread>
using namespace pls::cs;
struct Payload final:Object {
    static std::atomic<int> destroyed;
    int value;
    explicit Payload(int v):value(v){}
    ~Payload()override{++destroyed;}
};
std::atomic<int> Payload::destroyed{0};
struct ThrowingValue {
    static int live,created;
    ThrowingValue(){if(++created==3)throw InvalidOperationException();++live;}
    ~ThrowingValue(){--live;}
};
int ThrowingValue::live=0;int ThrowingValue::created=0;
int main(){
    static_assert(std::is_pointer_v<Ref<Object>>,"Production references must be plain pointers");
    static_assert(sizeof(Array<int>)==sizeof(void*),"Primitive array wrappers must contain only the storage pointer");
    static_assert(sizeof(Array<Array<int>>)==sizeof(void*),"Jagged array wrappers do not need a covariance view");
    GcMutatorScope main_thread;
    int assertions=0;
    auto check=[&](bool value){if(!value)throw std::runtime_error("Tracing runtime invariant failed");++assertions;};
    bool oversized=false;
    try{(void)Array<Ref<Payload>>::make(INT32_MAX);}catch(const OutOfMemoryException&){oversized=true;}
    check(oversized);
    oversized=false;
    try{(void)Array<Array<std::uint8_t>>::make(INT32_MAX);}catch(const OutOfMemoryException&){oversized=true;}
    check(oversized);
    oversized=false;
    try{(void)Array<String>::make(INT32_MAX);}catch(const OutOfMemoryException&){oversized=true;}
    check(oversized);
    oversized=false;
    try{(void)Array<Delegate<void()>>::make(INT32_MAX);}catch(const OutOfMemoryException&){oversized=true;}
    check(oversized);
    oversized=false;
    try{(void)Array<Ref<Payload>>::make(1073741820);}catch(const OutOfMemoryException&){oversized=true;}
    check(oversized);
    bool negative=false;
    try{(void)Array<Ref<Payload>>::make(-1);}catch(const OverflowException&){negative=true;}
    check(negative);
    auto contiguous=Array<std::int32_t>::make(11);
    const auto base=reinterpret_cast<std::uintptr_t>(raw(contiguous.as_object()));
    const auto payload=reinterpret_cast<std::uintptr_t>(&contiguous.at(0));
    check(base%64==0&&payload>base&&payload-base<256);
    check(&contiguous.at(10)-&contiguous.at(0)==10);
    check(contiguous.at(10)==0&&tracing_heap().contains(&contiguous.at(10)));
    auto aligned=Array<double>::from({3.25,73.5});
    check(reinterpret_cast<std::uintptr_t>(&aligned.at(0))%alignof(double)==0&&aligned.at(1)==73.5);
    auto empty=Array<int>::make(0);check(empty.length()==0);
    bool range=false;try{empty.at(0);}catch(const IndexOutOfRangeException&){range=true;}check(range);
    bool failed=false;try{Array<ThrowingValue>::make(4);}catch(const InvalidOperationException&){failed=true;}
    check(failed&&ThrowingValue::live==0);
    gc_collect();check(contiguous.at(10)==0&&aligned.at(1)==73.5);
    // The producer thread terminates before collection. Its stack cannot keep
    // the result alive: the sole root is the native exception allocation.
    std::exception_ptr delayed;
    std::thread producer([&]{GcMutatorScope active;
        try{ReturnFlow<Ref<Payload>> first(make_ref<Payload>(37));auto copied=first;throw copied;}
        catch(...){delayed=std::current_exception();}
    });
    {GcNativeBlockingScope wait;producer.join();}
    gc_collect();check(Payload::destroyed==0);
    try{std::rethrow_exception(delayed);}catch(const ReturnFlow<Ref<Payload>>&flow){check(flow.value->value==37);}
    // Managed throws use a separate exact native root, including their message
    // and inner exception. No pointer to these objects crosses via the stack.
    std::exception_ptr managed;
    std::thread throwing([&]{GcMutatorScope active;
        try{throw_exception(make_exception("System.IO.IOException",String(u"own-gc-message"),make_exception("System.Exception",String(u"own-inner"))));}
        catch(...){managed=std::current_exception();}
    });
    {GcNativeBlockingScope wait;throwing.join();}
    gc_collect();
    try{std::rethrow_exception(managed);}catch(const IOException&raw){
        auto value=capture_exception(raw);check(value->get_Message()==String(u"own-gc-message"));
        check(value->get_InnerException()->get_Message()==String(u"own-inner"));
    }
    // A native capture must enumerate its managed edges; its C++ closure heap
    // is deliberately not scanned conservatively.
    Delegate<int()> callback;
    GcRootProvider root([&](const EdgeVisitor&visit){trace_value(callback,visit);});
    std::thread capturing([&]{GcMutatorScope active;auto value=make_ref<Payload>(53);
        callback=Delegate<int()>::from_native("own-explicit-capture",[value]{return value->value;},value);
    });
    {GcNativeBlockingScope wait;capturing.join();}
    gc_collect();check(callback()==53);check(Payload::destroyed==0);
    Ref<Object> invocation{};
    callback.trace_edges([&](const Ref<Object>& value){invocation=value;});
    bool fixed=false;std::size_t fixed_ranges=0;
    tracing_heap().inspect([&](void* object,std::size_t,const pls::gc::Descriptor& descriptor){
        if(object!=raw(invocation))return;
        fixed=descriptor.stable_ranges;
        if(descriptor.ranges)descriptor.ranges(object,pls::gc::Ranges{&fixed_ranges,[](void* n,const void*,std::size_t){++*static_cast<std::size_t*>(n);}});
    });
    check(fixed&&fixed_ranges>=2); // Binding vector and non-SSO method identity.
    auto old_callback=callback;
    auto extra=Delegate<int()>::from_static("own-long-method-identity-with-a-separate-buffer",[]{return 71;});
    callback+=extra;gc_collect();check(callback()==71&&old_callback()==53);
    callback-=extra;gc_collect();check(callback()==53&&old_callback()==53);
    tracing_heap().refresh_memory_accounting();const auto memory=tracing_heap().statistics();
    tracing_heap().refresh_memory_accounting();check(memory.bytes==tracing_heap().statistics().bytes);
    std::cout<<"{\"assertions\":"<<assertions<<",\"plain_pointer_references\":true,\"exception_roots\":true,\"native_capture_maps\":true}\n";
}
