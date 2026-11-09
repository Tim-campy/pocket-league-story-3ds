#include "semantic_runtime.hpp"
#include <iostream>
using namespace pls::cs;
namespace {
int assertions=0;void check(bool condition,const char*message){++assertions;if(!condition)throw Exception(message);}
struct Item:Object {
    Ref<Object>owner;Ref<Item>self;
    void trace_edges(const EdgeVisitor&visitor)const override{trace_value(owner,visitor);trace_value(self,visitor);}
    void release_edges()override{release_value(owner);release_value(self);}
};
struct Holder:Object {
    Stack<Ref<Item>>stack=Stack<Ref<Item>>::make();
    void trace_edges(const EdgeVisitor&visitor)const override{trace_value(stack,visitor);}
    void release_edges()override{release_value(stack);}
};
}
int main(){GcMutatorScope mutator;
    auto holder=make_ref<Holder>();auto item=make_ref<Item>();item->self=item;std::weak_ptr<Item>weak=item;holder->stack.Push(item);item.reset();
    gc_collect(0);check(!weak.expired(),"Live stack traces its item");check(holder->stack.get_Count()==1,"Live count");
    auto popped=holder->stack.Pop();check(holder->stack.get_Count()==0,"Pop removes active slot");gc_collect(0);check(!weak.expired(),"Pop result preserves strong reference");
    popped.reset();gc_collect(0);check(weak.expired(),"Popped slot releases reference even while stack backing remains alive");
    auto duplicate=make_ref<Item>();duplicate->self=duplicate;weak=duplicate;holder->stack.Push(duplicate);holder->stack.Push(duplicate);duplicate.reset();
    auto one=holder->stack.Pop();one.reset();gc_collect(0);check(!weak.expired(),"Remaining duplicate slot retains reference");auto two=holder->stack.Pop();two.reset();gc_collect(0);check(weak.expired(),"All duplicate slots cleared");
    holder->stack.Push(nullptr);check(!holder->stack.Peek()&&!holder->stack.Pop(),"Null reference element survives roundtrip");
    std::weak_ptr<Holder>weak_holder;std::weak_ptr<Object>weak_storage;
    {auto cycle=make_ref<Holder>();auto child=make_ref<Item>();child->owner=cycle;cycle->stack.Push(child);weak_holder=cycle;weak=child;weak_storage=cycle->stack.as_object();}
    gc_collect(0);check(weak_holder.expired(),"Unrooted owner-stack-item cycle collected");check(weak.expired(),"Cycle item released");check(weak_storage.expired(),"Stack storage released in collected graph");
    auto original=Stack<Ref<Item>>::make();auto alias=original;auto child=make_ref<Item>();child->self=child;weak=child;original.Push(child);child.reset();original={};
    gc_collect(0);check(!weak.expired()&&alias.get_Count()==1,"Stack alias retains storage and element");auto value=alias.Pop();alias={};gc_collect(0);check(!weak.expired(),"Returned element independent of stack lifetime");value.reset();gc_collect(0);check(weak.expired(),"Returned element collected after external root drops");
    std::cout<<"{\"status\":\"PASS\",\"assertions\":"<<assertions<<",\"game_executed\":false}\n";
}
