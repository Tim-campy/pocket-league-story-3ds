#include "semantic_runtime.hpp"
#include <iostream>
using namespace pls::cs;
namespace {
template<class F>std::string error(F function){try{function();return "none";}catch(const Exception&e){return e.type_name();}}
const char*boolean(bool value){return value?"True":"False";}
struct Item:Object {int value;explicit Item(int n):value(n){};};
}
int main(int argc,char**argv){if(argc>1&&std::string(argv[1])=="dotnet")runtime_profile=RuntimeProfile::DotNet;
    auto s=Stack<std::int32_t>::make();std::cout<<"initial="<<s.get_Count()<<','<<error([&]{s.Pop();})<<','<<error([&]{s.Peek();})<<'\n';
    s.Push(10);std::cout<<"push="<<s.get_Count()<<','<<s.Peek()<<','<<s.Peek()<<'\n';auto alias=s;alias.Push(20);std::cout<<"alias="<<s.get_Count()<<','<<s.Peek()<<'\n';
    const auto first=s.Pop(),second=s.Pop();std::cout<<"pop-lifo="<<first<<','<<second<<','<<s.get_Count()<<'\n';std::cout<<"underflow="<<error([&]{s.Pop();})<<','<<error([&]{s.Peek();})<<','<<s.get_Count()<<'\n';
    Stack<std::int32_t>missing;std::cout<<"null="<<error([&]{missing.get_Count();})<<','<<error([&]{missing.Push(1);})<<','<<error([&]{missing.Pop();})<<','<<error([&]{missing.Peek();})<<'\n';
    auto refs=Stack<Ref<Item>>::make();refs.Push(nullptr);const bool peek_null=!refs.Peek(),pop_null=!refs.Pop();std::cout<<"null-element="<<boolean(peek_null)<<','<<boolean(pop_null)<<','<<refs.get_Count()<<'\n';
    auto item=make_ref<Item>(7);refs.Push(item);refs.Push(item);const bool same_peek=refs.Peek()==item,same_first=refs.Pop()==item,same_second=refs.Pop()==item;std::cout<<"ref-identity="<<boolean(same_peek)<<','<<boolean(same_first)<<','<<boolean(same_second)<<'\n';
    refs.Push(item);auto popped=refs.Pop();popped->value=9;std::cout<<"pop-copy="<<item->value<<','<<refs.get_Count()<<'\n';
    auto boxed=s.as_object();std::cout<<"object-identity="<<boolean(boxed==s.as_object())<<','<<boolean(Stack<std::int32_t>::from_object(boxed)==s)<<'\n';
    std::cout<<"wrong-object="<<error([]{Stack<std::int32_t>::from_object(make_ref<Object>());})<<','<<error([]{Stack<std::int32_t>::from_object(Stack<std::int64_t>::make().as_object());})<<'\n';
    auto growth=Stack<std::int32_t>::make();for(int i=0;i<100;++i)growth.Push(i);int total=0;for(int i=99;i>=0;--i)if(growth.Pop()==i)++total;std::cout<<"growth-lifo="<<total<<','<<growth.get_Count()<<'\n';
    growth.Push(INT32_MIN);growth.Push(INT32_MAX);const auto maximum=growth.Pop(),minimum=growth.Pop();std::cout<<"int-extremes="<<maximum<<','<<minimum<<'\n';
    auto strings=Stack<String>::make();strings.Push(String(u"a"));strings.Push({});strings.Push(String(u"b"));auto last=strings.Pop();const bool middle_null=strings.Pop().is_null();std::cout<<"strings="<<last.utf8()<<','<<boolean(middle_null)<<','<<strings.Peek().utf8()<<','<<strings.get_Count()<<'\n';
    auto reuse=Stack<std::int32_t>::make();for(int i=0;i<10;++i){reuse.Push(i);const auto peek=reuse.Peek(),pop=reuse.Pop();if(peek!=pop)throw Exception("Own roundtrip mismatch");}std::cout<<"reuse="<<reuse.get_Count()<<'\n';
    auto through_alias=alias;through_alias.Push(33);const auto result=alias.Pop();std::cout<<"alias-return="<<result<<','<<s.get_Count()<<'\n';
}
