// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_381ecfc7910ffbab.hpp"
#include "game_generated_type_4368d694d01424b0.hpp"
#include "game_generated_type_b489b0d33bb37bb8.hpp"
namespace pls::game {

void cs_4368d694d01424b0::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_e57500c12d1324ce,visitor);pls::cs::trace_value(cs_c8c6e41546654cef,visitor);pls::cs::trace_value(cs_5d5ca7bd52c7784a,visitor);}

void cs_4368d694d01424b0::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_e57500c12d1324ce);pls::cs::release_value(cs_c8c6e41546654cef);pls::cs::release_value(cs_5d5ca7bd52c7784a);}

void cs_4368d694d01424b0::cs_virtual_9ed05c6b3a5346ec() {cs_9ed05c6b3a5346ec(pls::cs::static_pointer_cast<cs_4368d694d01424b0>(shared_from_this()));}

void cs_4368d694d01424b0::cs_virtual_2186b93ea03d07c2() {cs_2186b93ea03d07c2(pls::cs::static_pointer_cast<cs_4368d694d01424b0>(shared_from_this()));}

static pls::cs::Ref<cs_4368d694d01424b0> cs_af3cecaddfff33af_value{};

void cs_init_4368d694d01424b0(){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(cs_af3cecaddfff33af_value,visitor);});static pls::cs::TypeInitState state;state.run("kairo.unity.system.notification.ui.NotifyManager",[](){

});}

pls::cs::Ref<cs_4368d694d01424b0>& cs_af3cecaddfff33af(){cs_init_4368d694d01424b0();return cs_af3cecaddfff33af_value;}

// M:kairo.unity.system.notification.ui.NotifyManager.#ctor
pls::cs::Ref<cs_4368d694d01424b0> cs_f936e6cee1a07442() { cs_init_4368d694d01424b0();
{ auto cs_this = pls::cs::make_ref<cs_4368d694d01424b0>(); cs_f936e6cee1a07442_init(cs_this); return cs_this; }
}

void cs_f936e6cee1a07442_init(pls::cs::Ref<cs_4368d694d01424b0> cs_this) {
cs_this->cs_5d5ca7bd52c7784a = static_cast<std::int32_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)));
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.notification.ui.NotifyManager.#ctor",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/system/notification/ui/NotifyManager.cs:M:kairo.unity.system.notification.ui.NotifyManager.#ctor:587",pls::cs::List<pls::cs::String>::make()); pls::game::cs_require(cs_target)->cs_e57500c12d1324ce = cs_value; return cs_value; }());
pls::cs::Array<pls::cs::String> v_array_619 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005f" u"\x006e" u"\x006f" u"\x0074" u"\x0069" u"\x0066" u"\x0069" u"\x0063" u"\x0061" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"\x005f" u"\x0064" u"\x0061" u"\x0074" u"\x0061" u"",18);return cs_literal;}()); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"",0);return cs_literal;}()); return pls::kairo::PlayerPrefs::GetString(cs_arg0,cs_arg1); }());});auto cs_separators=pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/system/notification/ui/NotifyManager.cs:M:kairo.unity.system.notification.ui.NotifyManager.#ctor:681",([&](){auto cs_initial_array_921=pls::cs::Array<char16_t>::make(1);cs_initial_array_921.at(0)=char16_t(10);return cs_initial_array_921;}()));if(cs_text.is_null())throw pls::cs::NullReferenceException();return pls::cs::string_split(cs_text,cs_separators,true);}());});
{ auto cs_each922 = v_array_619; for (std::int32_t cs_i922=0; cs_i922<cs_each922.length(); ++cs_i922) { pls::cs::String v_item_746 = cs_each922.get_Item(cs_i922); {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e57500c12d1324ce; }()); auto cs_arg0 = v_item_746; cs_receiver.Add(cs_arg0); }());});
} } }
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int32_t { return cs_e26bb0fd33c26b1a(); }())); pls::game::cs_require(cs_target)->cs_5d5ca7bd52c7784a = cs_value; return cs_value; }());
}
}
}

// M:kairo.unity.system.notification.ui.NotifyManager.DoCancel
void cs_fb49ecfe97c9cd02(pls::cs::Ref<cs_4368d694d01424b0> cs_this) { cs_init_4368d694d01424b0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.notification.ui.NotifyManager.DoCancel",kairo);
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
}

// M:kairo.unity.system.notification.ui.NotifyManager.DoNotify
void cs_f30d255f82bcb932(pls::cs::Ref<cs_4368d694d01424b0> cs_this) { cs_init_4368d694d01424b0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.notification.ui.NotifyManager.DoNotify",kairo);
{
pls::cs::Ref<cs_b489b0d33bb37bb8> v_instance_2705 = ([&]() -> pls::cs::Ref<cs_b489b0d33bb37bb8> { return cs_3eff1227bb0de063(); }());
if ((([&]() { auto cs_left = pls::cs::box(v_instance_2705); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_instance_2705); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ab34005322458eed(cs_receiver); }()))) {
([&]() -> void { bool cs_arg0 = false; auto cs_arg1 = true; cs_749d49646f9339d3(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4368d694d01424b0>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_9ed05c6b3a5346ec(); }());
}
}
}
}
}

// M:kairo.unity.system.notification.ui.NotifyManager.GetInstance
pls::cs::Ref<cs_4368d694d01424b0> cs_fc7db26d427c32ff() { cs_init_4368d694d01424b0();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.notification.ui.NotifyManager.GetInstance",kairo);
{
return cs_af3cecaddfff33af_value;
}
}
}

// M:kairo.unity.system.notification.ui.NotifyManager.IsPushEnable
bool cs_c4e7fa21030fbd91(pls::cs::Ref<cs_4368d694d01424b0> cs_this) { cs_init_4368d694d01424b0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.notification.ui.NotifyManager.IsPushEnable",kairo);
{
return false;
}
}
}
}

// M:kairo.unity.system.notification.ui.NotifyManager.OnNotify
void cs_9ed05c6b3a5346ec(pls::cs::Ref<cs_4368d694d01424b0> cs_this) { cs_init_4368d694d01424b0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.notification.ui.NotifyManager.OnNotify",kairo);
{

}
}
}
}

// M:kairo.unity.system.notification.ui.NotifyManager.OnReceiveValue
void cs_2186b93ea03d07c2(pls::cs::Ref<cs_4368d694d01424b0> cs_this) { cs_init_4368d694d01424b0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.notification.ui.NotifyManager.OnReceiveValue",kairo);
{

}
}
}
}
}
