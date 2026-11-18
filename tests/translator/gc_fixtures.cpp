#include "managed_dictionary.hpp"
#include "gc_test_support.hpp"
#include <atomic>
#include <thread>
#include <iostream>
using namespace pls::cs;
struct Node:Object {
    std::int32_t value=0;Ref<Node>next;Ref<Object>body;Array<Ref<Object>>array;List<Ref<Object>>list;Dictionary<String,Ref<Object>>dictionary;Delegate<std::int32_t()>callback;
    void trace_edges(const EdgeVisitor&visitor)const override{trace_value(next,visitor);trace_value(body,visitor);trace_value(array,visitor);trace_value(list,visitor);trace_value(dictionary,visitor);trace_value(callback,visitor);}
};
template<class F>std::string error(F work){try{work();return "none";}catch(const Exception&e){return e.type_name();}}
static const char*tf(bool value){return value?"True":"False";}
static int own_native_tests(){
    std::size_t passed=0;auto check=[&](bool value){if(!value){std::cerr<<"Own GC assertion "<<(passed+1)<<'\n';throw std::runtime_error("Own native GC invariant failed");}++passed;};
    GcMutatorScope host;
    auto root=Array<std::int32_t>::from({37});Weak<Node> weak;
    scrub_stack();isolated_gc_collect();const auto before=gc_registry_stats();
    scrub_stack();isolated_gc_mutator([&]{for(int i=0;i<8192;++i){auto value=make_ref<Node>();value->value=i;weak=value;}});
    check(gc_registry_stats().entries==before.entries+8192);
    isolated_gc_mutator([&]{check(!weak.expired());}); // No last-reference release.
    scrub_stack();isolated_gc_collect();isolated_gc_mutator([&]{check(weak.expired());});check(root[0]==37);
    auto cycle=[&](auto configure){isolated_gc_mutator([&]{auto value=make_ref<Node>();configure(value);weak=value;});isolated_gc_collect();isolated_gc_mutator([&]{check(weak.expired());});};
    scrub_stack();cycle([](auto node){node->next=node;});
    scrub_stack();cycle([](auto node){node->next=make_ref<Node>();node->next->next=node;});
    scrub_stack();cycle([](auto node){node->array=Array<Ref<Object>>::from({node});});
    scrub_stack();cycle([](auto node){node->list=List<Ref<Object>>::make();node->list.Add(node);});
    scrub_stack();cycle([](auto node){node->dictionary=Dictionary<String,Ref<Object>>::make();node->dictionary.Add(String(u"self"),node);});
    scrub_stack();cycle([](auto node){node->body=make_ref<Cell<Ref<Node>>>(node);});
    scrub_stack();cycle([](auto node){node->callback=Delegate<std::int32_t()>::from_native("exact-native-cycle",[node]{return node->value;},node);});
    Ref<Node> held{};
    scrub_stack();isolated_gc_mutator([&]{held=make_ref<Node>();held->next=held;held->value=29;weak=held;});
    scrub_stack();isolated_gc_collect();isolated_gc_mutator([&]{check(!weak.expired()&&held->next==held&&held->value==29);clear_ref(held);});
    scrub_stack();isolated_gc_collect();isolated_gc_mutator([&]{check(weak.expired());});
    check(gc_max_generation()==0&&gc_generation(root.as_object())==0);
    check(error([]{gc_collect(-1);})=="System.ArgumentOutOfRangeException");
    check(error([]{gc_collect(999);})=="none");
    check(error([]{visit_managed_memory([](const void*,std::size_t,pls::memory::Category){throw ArgumentException();});})=="System.ArgumentException");
    check(error([]{gc_collect();})=="none");
    {struct Left{virtual ~Left()=default;std::uint64_t padding=7;};struct Offset:Left,Object{};auto value=make_ref<Offset>();bool found=false;visit_managed_memory([&](const void*data,std::size_t bytes,pls::memory::Category){if(data==raw(value)&&bytes==sizeof(Offset))found=true;});check(found);}
    std::cout<<"{\"operation\":\"own-precise-heap-conservative-stack-invariants\",\"assertions\":"<<passed<<",\"passed\":"<<passed<<",\"isolated_producer_stacks\":true,\"original_binary_used\":false}\n";return 0;
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
