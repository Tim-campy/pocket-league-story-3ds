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
int main(){
    static_assert(std::is_pointer_v<Ref<Object>>,"Production references must be plain pointers");
    GcMutatorScope main_thread;
    int assertions=0;
    auto check=[&](bool value){if(!value)throw std::runtime_error("Tracing runtime invariant failed");++assertions;};
    bool oversized=false;
    try{(void)Array<Ref<Payload>>::make(INT32_MAX);}catch(const OutOfMemoryException&){oversized=true;}
    check(oversized);
    oversized=false;
    try{(void)Array<Ref<Payload>>::make(1073741820);}catch(const OutOfMemoryException&){oversized=true;}
    check(oversized);
    bool negative=false;
    try{(void)Array<Ref<Payload>>::make(-1);}catch(const OverflowException&){negative=true;}
    check(negative);
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
    std::cout<<"{\"assertions\":"<<assertions<<",\"plain_pointer_references\":true,\"exception_roots\":true,\"native_capture_maps\":true}\n";
}
