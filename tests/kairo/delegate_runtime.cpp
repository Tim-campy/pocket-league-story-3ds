#include "semantic_runtime.hpp"
#include "allocation_probe.hpp"
#include <cstdio>
#include <stdexcept>
#include <string>
using namespace pls::cs;
namespace {
int checks{};
void check(bool result){++checks;if(!result)throw std::runtime_error("delegate invariant failed");}
struct Owner:Object {
    Delegate<void()> callback;
    void trace_edges(const EdgeVisitor&v)const override{Object::trace_edges(v);callback.trace_edges(v);}
    void release_edges()override{Object::release_edges();callback.release_edges();}
};
}
int main(){
    GcMutatorScope mutator;
    int calls=0;
    auto hot=Delegate<int()>::from_static("long-static-method-identity-for-allocation-check",[&]{return ++calls;});
    const auto before=pls::allocation_probe::snapshot();pls::allocation_probe::enabled=true;
    for(int i=0;i<10000;++i)if(hot()!=i+1)return 2;
    pls::allocation_probe::enabled=false;const auto after=pls::allocation_probe::snapshot();
    const auto allocations=after.allocations-before.allocations,bytes=after.bytes-before.bytes;
    check(allocations==0);check(bytes==0);check(calls==10000);

    std::string order;Delegate<void()> handlers;
    auto second=Delegate<void()>::from_static("second",[&]{order+='b';});
    auto first=Delegate<void()>::from_static("first",[&]{order+='a';handlers-=second;});
    handlers=first+second;const auto old=handlers;
    handlers();check(order=="ab");order.clear();handlers();check(order=="a");
    order.clear();old();check(order=="ab");check(old==first+second);
    auto duplicate=second;duplicate+=duplicate;order.clear();duplicate();check(order=="bb");
    duplicate-=duplicate;check(duplicate.is_null());
    bool rejected=false;try{duplicate();}catch(const NullReferenceException&){rejected=true;}check(rejected);

    std::weak_ptr<Owner> weak;
    {
        auto owner=make_ref<Owner>();weak=owner;
        owner->callback=Delegate<void()>::bind(owner,"cycle",[target=std::weak_ptr<Owner>(owner)]{if(!target.lock())throw std::runtime_error("lost cycle target");});
    }
    gc_collect();check(weak.expired());
    Delegate<void()> external;
    {
        auto owner=make_ref<Owner>();weak=owner;
        owner->callback=Delegate<void()>::bind(owner,"retained-cycle",[target=std::weak_ptr<Owner>(owner)]{if(!target.lock())throw std::runtime_error("lost retained target");});
        external=owner->callback;
    }
    gc_collect();check(!weak.expired());external();external={};gc_collect();check(weak.expired());

    Delegate<void()> self_reset;bool survived=false;
    {
        auto owner=make_ref<Owner>();weak=owner;
        self_reset=Delegate<void()>::bind(owner,"collect-during-invoke",[&]{self_reset={};gc_collect();survived=!weak.expired();});
    }
    self_reset();check(survived);gc_collect();check(weak.expired());
    std::printf("{\"assertions\":%d,\"invocations\":10000,\"allocations\":%llu,\"bytes\":%llu}\n",checks,
        static_cast<unsigned long long>(allocations),static_cast<unsigned long long>(bytes));
}
