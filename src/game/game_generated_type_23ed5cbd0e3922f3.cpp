// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_23ed5cbd0e3922f3.hpp"
#include "game_generated_type_4368d694d01424b0.hpp"
namespace pls::game {

void cs_23ed5cbd0e3922f3::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_4368d694d01424b0::trace_edges(visitor);}

void cs_23ed5cbd0e3922f3::release_edges(){cs_4368d694d01424b0::release_edges();}

void cs_23ed5cbd0e3922f3::cs_virtual_9ed05c6b3a5346ec() {cs_a56b328f925cc5e4(pls::cs::static_pointer_cast<cs_23ed5cbd0e3922f3>(shared_from_this()));}

void cs_23ed5cbd0e3922f3::cs_virtual_2186b93ea03d07c2() {cs_e17b9d62b02e038f(pls::cs::static_pointer_cast<cs_23ed5cbd0e3922f3>(shared_from_this()));}

void cs_init_23ed5cbd0e3922f3(){static pls::cs::TypeInitState state;state.run("system.notification.MyNotify",[](){

});}

// M:system.notification.MyNotify.#ctor
pls::cs::Ref<cs_23ed5cbd0e3922f3> cs_ad74a61a58fd6836() { cs_init_23ed5cbd0e3922f3();
{ auto cs_this = pls::cs::make_ref<cs_23ed5cbd0e3922f3>(); cs_ad74a61a58fd6836_init(cs_this); return cs_this; }
}

void cs_ad74a61a58fd6836_init(pls::cs::Ref<cs_23ed5cbd0e3922f3> cs_this) {
([&]() { cs_f936e6cee1a07442_init(pls::cs::static_pointer_cast<cs_4368d694d01424b0>(cs_this)); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.notification.MyNotify.#ctor",game);
{

}
}
}

// M:system.notification.MyNotify.GetInstance
pls::cs::Ref<cs_23ed5cbd0e3922f3> cs_baa886ffdf138e8e() { cs_init_23ed5cbd0e3922f3();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.notification.MyNotify.GetInstance",game);
{
if (([&]() { auto cs_left = pls::cs::box(cs_af3cecaddfff33af()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/notification/MyNotify.cs:M:system.notification.MyNotify.GetInstance:269",([&]() -> pls::cs::Ref<cs_23ed5cbd0e3922f3> { return cs_ad74a61a58fd6836(); }())); cs_af3cecaddfff33af() = cs_value; return cs_value; }());
}
return pls::cs::unbox<pls::cs::Ref<cs_23ed5cbd0e3922f3>>(pls::cs::box(cs_af3cecaddfff33af()));
}
}
}

// M:system.notification.MyNotify.OnNotify
void cs_a56b328f925cc5e4(pls::cs::Ref<cs_23ed5cbd0e3922f3> cs_this) { cs_init_23ed5cbd0e3922f3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.notification.MyNotify.OnNotify",game);
{

}
}
}
}

// M:system.notification.MyNotify.OnReceiveValue
void cs_e17b9d62b02e038f(pls::cs::Ref<cs_23ed5cbd0e3922f3> cs_this) { cs_init_23ed5cbd0e3922f3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.notification.MyNotify.OnReceiveValue",game);
{
return;
}
}
}
}
}
