#include "semantic_runtime.hpp"
#include "gc_test_support.hpp"
#include <iostream>
using namespace pls::cs;
namespace {
int assertions=0;void check(bool condition,const char*message){++assertions;if(!condition){std::cerr<<message<<'\n';throw Exception(message);}}
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
    auto holder=make_ref<Holder>();Weak<Item>weak;Ref<Item>popped{};
    isolated_gc_mutator([&]{auto item=make_ref<Item>();item->self=item;weak=item;holder->stack.Push(item);});
    gc_collect(0);isolated_gc_mutator([&]{check(!weak.expired(),"Live stack traces its item");check(holder->stack.get_Count()==1,"Live count");popped=holder->stack.Pop();check(holder->stack.get_Count()==0,"Pop removes active slot");});
    gc_collect(0);isolated_gc_mutator([&]{check(!weak.expired(),"Pop result preserves strong reference");clear_ref(popped);});
    gc_collect(0);isolated_gc_mutator([&]{check(weak.expired(),"Popped slot releases reference even while stack backing remains alive");auto duplicate=make_ref<Item>();duplicate->self=duplicate;weak=duplicate;holder->stack.Push(duplicate);holder->stack.Push(duplicate);(void)holder->stack.Pop();});
    gc_collect(0);isolated_gc_mutator([&]{check(!weak.expired(),"Remaining duplicate slot retains reference");(void)holder->stack.Pop();});
    gc_collect(0);isolated_gc_mutator([&]{check(weak.expired(),"All duplicate slots cleared");});
    holder->stack.Push(nullptr);check(!holder->stack.Peek()&&!holder->stack.Pop(),"Null reference element survives roundtrip");
    pls::cs::Weak<Holder>weak_holder;pls::cs::Weak<Object>weak_storage;
    isolated_gc_mutator([&]{auto cycle=make_ref<Holder>();auto child=make_ref<Item>();child->owner=cycle;cycle->stack.Push(child);weak_holder=cycle;weak=child;weak_storage=cycle->stack.as_object();});
    gc_collect(0);isolated_gc_mutator([&]{check(weak_holder.expired(),"Unrooted owner-stack-item cycle collected");check(weak.expired(),"Cycle item released");check(weak_storage.expired(),"Stack storage released in collected graph");});
    Stack<Ref<Item>>alias;Ref<Item>value{};
    isolated_gc_mutator([&]{auto original=Stack<Ref<Item>>::make();alias=original;auto child=make_ref<Item>();child->self=child;weak=child;original.Push(child);});
    gc_collect(0);isolated_gc_mutator([&]{check(!weak.expired()&&alias.get_Count()==1,"Stack alias retains storage and element");value=alias.Pop();alias={};});
    gc_collect(0);isolated_gc_mutator([&]{check(!weak.expired(),"Returned element independent of stack lifetime");clear_ref(value);});
    gc_collect(0);isolated_gc_mutator([&]{check(weak.expired(),"Returned element collected after external root drops");});
    std::cout<<"{\"status\":\"PASS\",\"assertions\":"<<assertions<<",\"game_executed\":false}\n";
}
