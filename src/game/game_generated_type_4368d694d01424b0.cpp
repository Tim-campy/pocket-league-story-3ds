// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_381ecfc7910ffbab.hpp"
#include "game_generated_type_4368d694d01424b0.hpp"
#include "game_generated_type_b489b0d33bb37bb8.hpp"
namespace pls::game {

void cs_4368d694d01424b0::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_e57500c12d1324ce,visitor);pls::cs::trace_value(cs_c8c6e41546654cef,visitor);pls::cs::trace_value(cs_5d5ca7bd52c7784a,visitor);}

void cs_4368d694d01424b0::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_e57500c12d1324ce);pls::cs::release_value(cs_c8c6e41546654cef);pls::cs::release_value(cs_5d5ca7bd52c7784a);}

void cs_4368d694d01424b0::cs_virtual_9ed05c6b3a5346ec() {cs_9ed05c6b3a5346ec(std::static_pointer_cast<cs_4368d694d01424b0>(shared_from_this()));}

void cs_4368d694d01424b0::cs_virtual_2186b93ea03d07c2() {cs_2186b93ea03d07c2(std::static_pointer_cast<cs_4368d694d01424b0>(shared_from_this()));}

static pls::cs::Ref<cs_4368d694d01424b0> cs_af3cecaddfff33af_value{};

void cs_init_4368d694d01424b0(){static pls::cs::TypeInitState state;state.run("kairo.unity.system.notification.ui.NotifyManager",[](){

});}

pls::cs::Ref<cs_4368d694d01424b0>& cs_af3cecaddfff33af(){cs_init_4368d694d01424b0();return cs_af3cecaddfff33af_value;}

// M:kairo.unity.system.notification.ui.NotifyManager.DoCancel
void cs_fb49ecfe97c9cd02(pls::cs::Ref<cs_4368d694d01424b0> cs_this) { cs_init_4368d694d01424b0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_b489b0d33bb37bb8> v_instance_3003 = ([&]() -> pls::cs::Ref<cs_b489b0d33bb37bb8> { return cs_3eff1227bb0de063(); }());
if ((([&]() { auto cs_left = pls::cs::box(v_instance_3003); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_instance_3003); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ab34005322458eed(cs_receiver); }()))) {
([&]() -> void { auto cs_arg0 = true; auto cs_arg1 = true; cs_749d49646f9339d3(cs_arg0,cs_arg1); }());
} else {
([&]() -> void { bool cs_arg0 = true; bool cs_arg1 = false; cs_749d49646f9339d3(cs_arg0,cs_arg1); }());
}
}
}
}

// M:kairo.unity.system.notification.ui.NotifyManager.DoNotify
void cs_f30d255f82bcb932(pls::cs::Ref<cs_4368d694d01424b0> cs_this) { cs_init_4368d694d01424b0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_b489b0d33bb37bb8> v_instance_2705 = ([&]() -> pls::cs::Ref<cs_b489b0d33bb37bb8> { return cs_3eff1227bb0de063(); }());
if ((([&]() { auto cs_left = pls::cs::box(v_instance_2705); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_instance_2705); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ab34005322458eed(cs_receiver); }()))) {
([&]() -> void { bool cs_arg0 = false; auto cs_arg1 = true; cs_749d49646f9339d3(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4368d694d01424b0>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_9ed05c6b3a5346ec(); }());
}
}
}
}

// M:kairo.unity.system.notification.ui.NotifyManager.GetInstance
pls::cs::Ref<cs_4368d694d01424b0> cs_fc7db26d427c32ff() { cs_init_4368d694d01424b0();
{
return cs_af3cecaddfff33af();
}
}

// M:kairo.unity.system.notification.ui.NotifyManager.IsPushEnable
bool cs_c4e7fa21030fbd91(pls::cs::Ref<cs_4368d694d01424b0> cs_this) { cs_init_4368d694d01424b0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return false;
}
}
}

// M:kairo.unity.system.notification.ui.NotifyManager.OnNotify
void cs_9ed05c6b3a5346ec(pls::cs::Ref<cs_4368d694d01424b0> cs_this) { cs_init_4368d694d01424b0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}

// M:kairo.unity.system.notification.ui.NotifyManager.OnReceiveValue
void cs_2186b93ea03d07c2(pls::cs::Ref<cs_4368d694d01424b0> cs_this) { cs_init_4368d694d01424b0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{

}
}
}
}
