// Own synthetic collaborators; the adapter body is emitted by the production
// bootstrap generator into the private test directory.
#include "forms_execution.hpp"
#include "../translator/gc_test_support.hpp"
#include <iostream>
namespace cs=pls::cs;
namespace k=pls::kairo;
struct Source final:cs::Object {
    bool playing=false,enabled=true,fail=false;
    std::int32_t reserve=0,updates=0,saves=0,all=0;
    bool IsPlaying(){return playing;}
    void SetGameState(bool x){playing=x;}
    void UpdateKairo(){if(fail)throw cs::InvalidOperationException("own test");++updates;}
    bool GetReserveEnabled(){return enabled;}
    void SetReserveEnabled(bool x){enabled=x;}
    std::int32_t GetReserve(){return reserve;}
    void SetReserve(std::int32_t x){reserve=x;}
    void Save(){++saves;}void SaveAll(){++all;}
};
static cs::Ref<k::FormKairo> adapt(cs::Ref<Source> value){
    if(!value)return {};
#include "direct_kairo_generated.inc"
    return cs::make_ref<SourceKairoAdapter>(value);
}
static cs::Ref<k::FormKairo> held;
static cs::GcRootProvider roots([](const cs::EdgeVisitor& v){cs::trace_value(held,v);});
static int assertions=0;
static void check(bool condition){++assertions;if(!condition)throw std::runtime_error("direct adapter fixture");}
int main(){
    cs::GcMutatorScope scope;
    check(!adapt({}));
    auto first=cs::make_ref<Source>(),second=cs::make_ref<Source>();
    auto a=adapt(first),b=adapt(second);check(a!=b);check(!a->IsGamePlaying());
    a->SetGameState(true);check(first->playing);check(!second->playing);
    a->SetReserveSaveEnabled(false);check(!a->ReserveSaveEnabled());
    a->SetReserveSave(17);check(a->ReserveSave()==17);check(second->reserve==0);
    a->Update();a->Save();a->SaveAll();check(first->updates==1);check(first->saves==1);check(first->all==1);
    first->fail=true;bool caught=false;try{a->Update();}catch(const cs::InvalidOperationException&){caught=true;}check(caught);check(first->updates==1);
    b->Update();check(second->updates==1);check(first->updates==1);
    unsigned edges=0;a->trace_edges([&](cs::Object* p){check(p==cs::raw(first));++edges;});check(edges==1);
    // After the producer thread exits, only the adapter's precise edge retains
    // the target. The synthetic source has no hidden native callback captures.
    isolated_gc_mutator([]{auto target=cs::make_ref<Source>();target->reserve=73;held=adapt(target);});
    cs::gc_collect();check(held->ReserveSave()==73);held->Update();held->Save();held->SaveAll();
    std::cout<<"{\"assertions\":"<<assertions<<",\"status\":\"PASS\"}\n";
}
