#include "managed_dictionary.hpp"
#include "gc_test_support.hpp"
#include <atomic>
#include <thread>
#include <iostream>
using namespace pls::cs;
struct Node:Object {
    std::int32_t value=0;Ref<Node>next;Ref<Object>body;Array<Ref<Object>>array;List<Ref<Object>>list;Dictionary<String,Ref<Object>>dictionary;Delegate<std::int32_t()>callback;
    void trace_edges(const EdgeVisitor&visitor)const override{trace_value(next,visitor);trace_value(body,visitor);trace_value(array,visitor);trace_value(list,visitor);trace_value(dictionary,visitor);trace_value(callback,visitor);}
    void release_edges()override{release_value(next);release_value(body);release_value(array);release_value(list);release_value(dictionary);release_value(callback);}
};
template<class F>std::string error(F work){try{work();return "none";}catch(const Exception&e){return e.type_name();}}
static const char*tf(bool value){return value?"True":"False";}
static int own_native_tests(){
    std::size_t passed=0;auto check=[&](bool value){if(!value){std::cerr<<"Own GC assertion "<<(passed+1)<<'\n';throw std::runtime_error("Own native GC invariant failed");}++passed;};
#if PLS_TRACING_GC
    GcMutatorScope host;
    auto root=Array<std::int32_t>::from({37});Weak<Node> weak;
    gc_collect();const auto before=gc_registry_stats();
    isolated_gc_mutator([&]{for(int i=0;i<8192;++i){auto value=make_ref<Node>();value->value=i;weak=value;}});
    check(gc_registry_stats().entries==before.entries+8192);
    isolated_gc_mutator([&]{check(!weak.expired());}); // No last-reference release.
    gc_collect();isolated_gc_mutator([&]{check(weak.expired());});check(root[0]==37);
    auto cycle=[&](auto configure){isolated_gc_mutator([&]{auto value=make_ref<Node>();configure(value);weak=value;});gc_collect();isolated_gc_mutator([&]{check(weak.expired());});};
    cycle([](auto node){node->next=node;});
    cycle([](auto node){node->next=make_ref<Node>();node->next->next=node;});
    cycle([](auto node){node->array=Array<Ref<Object>>::from({node});});
    cycle([](auto node){node->list=List<Ref<Object>>::make();node->list.Add(node);});
    cycle([](auto node){node->dictionary=Dictionary<String,Ref<Object>>::make();node->dictionary.Add(String(u"self"),node);});
    cycle([](auto node){node->body=make_ref<Cell<Ref<Node>>>(node);});
    cycle([](auto node){node->callback=Delegate<std::int32_t()>::from_native("exact-native-cycle",[node]{return node->value;},node);});
    Ref<Node> held{};
    isolated_gc_mutator([&]{held=make_ref<Node>();held->next=held;held->value=29;weak=held;});
    gc_collect();isolated_gc_mutator([&]{check(!weak.expired()&&held->next==held&&held->value==29);clear_ref(held);});
    gc_collect();isolated_gc_mutator([&]{check(weak.expired());});
    check(gc_max_generation()==0&&gc_generation(root.as_object())==0);
    check(error([]{gc_collect(-1);})=="System.ArgumentOutOfRangeException");
    check(error([]{gc_collect(999);})=="none");
    check(error([]{visit_managed_memory([](const void*,std::size_t,pls::memory::Category){throw ArgumentException();});})=="System.ArgumentException");
    check(error([]{gc_collect();})=="none");
    {struct Left{virtual ~Left()=default;std::uint64_t padding=7;};struct Offset:Left,Object{};auto value=make_ref<Offset>();bool found=false;visit_managed_memory([&](const void*data,std::size_t bytes,pls::memory::Category){if(data==raw(value)&&bytes==sizeof(Offset))found=true;});check(found);}
    std::cout<<"{\"operation\":\"own-precise-heap-conservative-stack-invariants\",\"assertions\":"<<passed<<",\"passed\":"<<passed<<",\"isolated_producer_stacks\":true,\"original_binary_used\":false}\n";return 0;
#else
    {gc_collect();auto root=Array<std::int32_t>::from({37});pls::cs::Weak<Node>cycle,dead;
        {auto node=make_ref<Node>();node->next=node;cycle=node;}
        const auto baseline=gc_registry_stats();const auto generation=gc_generation(root.as_object());
        for(int i=0;i<8192;++i){auto temporary=make_ref<Node>();temporary->value=i;dead=temporary;}
        const auto after=gc_registry_stats();
        check(after.entries<baseline.entries+4096);check(dead.expired());
        check(!cycle.expired()&&root[0]==37&&gc_generation(root.as_object())==generation);
        gc_collect();check(cycle.expired());}
    {struct Left{virtual ~Left()=default;std::uint64_t padding=7;};struct Offset:Left,Object{};auto value=make_ref<Offset>();bool found=false;visit_managed_memory([&](const void*data,std::size_t bytes,pls::memory::Category){if(data==pls::cs::raw(value)&&bytes==sizeof(Offset))found=true;});check(found);}
    {auto node=make_ref<Node>();node->next=node;const auto generation=gc_generation(node);auto array=Array<int>::make(23);String text(u"own snapshot fixture string");std::size_t bytes=0;bool finished=false;
        visit_managed_memory([&](const void*,std::size_t n,pls::memory::Category){bytes+=n;},[&]{finished=true;});
        check(bytes>=sizeof(Node)+23*sizeof(int));check(finished&&gc_generation(node)==generation&&node->next==node);
        check(error([]{visit_managed_memory([](const void*,std::size_t,pls::memory::Category){throw ArgumentException();});})=="System.ArgumentException");check(error([]{gc_collect();})=="none");pls::cs::clear_ref(node->next);}
    pls::cs::Weak<Node>a,b;
    {auto node=make_ref<Node>();node->next=node;a=node;}gc_collect();check(a.expired());
    {auto one=make_ref<Node>(),two=make_ref<Node>();one->next=two;two->next=one;a=one;b=two;}gc_collect();check(a.expired()&&b.expired());
    {auto node=make_ref<Node>();node->next=node;a=node;gc_collect();check(!a.expired()&&node->next==node);}gc_collect();check(a.expired());
    {auto node=make_ref<Node>();node->array=Array<Ref<Object>>::from({node});a=node;}gc_collect();check(a.expired());
    {auto node=make_ref<Node>();node->list=List<Ref<Object>>::make();node->list.Add(node);a=node;}gc_collect();check(a.expired());
    {auto node=make_ref<Node>();node->dictionary=Dictionary<String,Ref<Object>>::make();node->dictionary.Add(String(u"self"),node);a=node;}gc_collect();check(a.expired());
    {auto node=make_ref<Node>();pls::cs::Weak<Node>weak=node;node->callback=Delegate<std::int32_t()>::bind(node,"weak-binding",[weak]{return weak.lock()->value;});a=node;}gc_collect();check(a.expired());
    {auto node=make_ref<Node>();node->callback=Delegate<std::int32_t()>::bind(node,"opaque-binding",[node]{return node->value;});a=node;}gc_collect();check(!a.expired());
    {auto node=a.lock();node->callback={};}gc_collect();check(a.expired());
    {auto node=make_ref<Node>();auto cell=make_ref<Cell<Ref<Node>>>(node);node->body=cell;a=node;}gc_collect();check(a.expired());
    const auto previous_profile=runtime_profile;runtime_profile=RuntimeProfile::DotNet;
    {auto node=make_ref<Node>();node->next=node;a=node;gc_collect(0);check(gc_generation(node)==1);}gc_collect(0);check(!a.expired());gc_collect(1);check(a.expired());runtime_profile=previous_profile;
    std::atomic<bool>ready{false},stop{false};pls::cs::Weak<Node>worker_node;
    std::thread worker([&]{GcMutatorScope scope;auto node=make_ref<Node>();node->value=29;node->next=node;worker_node=node;ready.store(true);while(!stop.load()){gc_safepoint();std::this_thread::yield();}pls::cs::clear_ref(node->next);});
    while(!ready.load())std::this_thread::yield();gc_collect();check(!worker_node.expired());{auto node=worker_node.lock();check(node->value==29);}stop.store(true);worker.join();gc_collect();check(worker_node.expired());
    ready.store(false);stop.store(false);
    std::thread uncooperative([&]{GcMutatorScope scope;ready.store(true);while(!stop.load())std::this_thread::yield();});
    while(!ready.load())std::this_thread::yield();const auto refusal=error([]{gc_collect();});stop.store(true);uncooperative.join();check(refusal=="System.NotSupportedException");gc_collect();check(gc_last_collection().unreachable==gc_last_collection().collected);
    ready.store(false);stop.store(false);
    std::thread allocator([&]{GcMutatorScope scope;ready.store(true);while(!stop.load()){auto node=make_ref<Node>();node->value=31;}});
    while(!ready.load())std::this_thread::yield();check(error([]{gc_collect();})=="none");stop.store(true);allocator.join();
    std::atomic<int>arrived{0},errors{0};std::atomic<bool>go{false};
    auto concurrent=[&]{GcMutatorScope scope;++arrived;while(!go.load()){gc_safepoint();std::this_thread::yield();}if(error([]{gc_collect();})!="none")++errors;};
    std::thread first(concurrent),second(concurrent);while(arrived.load()!=2)std::this_thread::yield();go.store(true);first.join();second.join();check(errors.load()==0);
    std::cout<<"{\"operation\":\"own-native-cooperative-cycle-collector-invariants\",\"assertions\":"<<passed<<",\"passed\":"<<passed<<",\"opaque_captures_conservative\":true,\"registered_worker_safepoints_tested\":true,\"uncooperative_worker_refused\":true,\"original_binary_used\":false}"<<'\n';return 0;
#endif
}
int main(int argc,char**argv){
    if(argc>1&&std::string(argv[1])=="native-only")return own_native_tests();if(argc>1&&std::string(argv[1])=="dotnet")runtime_profile=RuntimeProfile::DotNet;
    std::cout<<"max-generation="<<gc_max_generation()<<'\n';auto young=make_ref<Node>();std::cout<<"generation-new="<<gc_generation(young)<<'\n';gc_collect(0);std::cout<<"generation-zero="<<gc_generation(young)<<'\n';gc_collect(1);std::cout<<"generation-one="<<gc_generation(young)<<'\n';
    auto self=make_ref<Node>();self->value=7;self->next=self;gc_collect(2);std::cout<<"rooted-self="<<self->next->value<<'\n';
    auto pair=make_ref<Node>();pair->value=11;self->next=pair;pair->next=self;gc_collect(2);std::cout<<"rooted-pair="<<self->next->value<<','<<self->next->next->value<<'\n';
    auto array=Array<Ref<Node>>::from({self,pair});pls::cs::clear_ref(self);pls::cs::clear_ref(pair);gc_collect(2);std::cout<<"rooted-array="<<array.at(0)->value<<','<<array.at(1)->next->value<<'\n';
    auto list=List<Ref<Object>>::make();list.Add(list.as_object());gc_collect(2);std::cout<<"rooted-list="<<tf(list.as_object()==list.get_Item(0))<<'\n';
    auto dict=Dictionary<String,Ref<Object>>::make();dict.Add(String(u"self"),dict.as_object());gc_collect(2);std::cout<<"rooted-dictionary="<<tf(dict.as_object()==dict.get_Item(String(u"self")))<<'\n';
    auto value=make_ref<Cell<std::int32_t>>(19);auto callback=Delegate<std::int32_t()>::bind(value,"fixture",[value]{return value->value;});gc_collect(2);std::cout<<"rooted-delegate="<<callback()<<'\n';
    pls::cs::Weak<Object>weak=array.as_object();gc_collect(2);std::cout<<"rooted-weak="<<tf(!weak.expired())<<','<<array.at(1)->value<<'\n';
    std::cout<<"negative-generation="<<error([]{gc_collect(-1);})<<'\n';std::cout<<"large-generation="<<error([]{gc_collect(999);})<<'\n';
}
