// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_6ee7d14059be1acf.hpp"
#include "game_generated_type_931908081ea62151.hpp"
#include "game_generated_type_feb7ae74aa59a27c.hpp"
#include "generated/portable_generated_type_1ff3292665c8e0c4.hpp"
#include "generated/portable_generated_type_5098bfda9cf65745.hpp"
#include "generated/portable_generated_type_7de6788b61a5af56.hpp"
#include "generated/portable_generated_type_7fd3b635ed6929d0.hpp"
#include "generated/portable_generated_type_bb652fbb61000386.hpp"
#include "generated/portable_generated_type_e7a5499b363ef51b.hpp"
#include "generated/portable_generated_type_ea324a0bbfe717fe.hpp"
#include "game_generated_type_6ee7d14059be1acf_templates.hpp"
namespace pls::game {

void cs_feb7ae74aa59a27c::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_88b3d0bc7988e77a,visitor);pls::cs::trace_value(cs_48404c380c305c6b,visitor);pls::cs::trace_value(cs_1f1b271de448ce48,visitor);pls::cs::trace_value(cs_625190bccd0d0fa4,visitor);pls::cs::trace_value(cs_9764b5b60381a8b6,visitor);pls::cs::trace_value(cs_ccc8fd33eda36b9e,visitor);pls::cs::trace_value(cs_7d0600ed44e25c28,visitor);pls::cs::trace_value(cs_924ce9254cf3db30,visitor);pls::cs::trace_value(cs_f369b68d3e3a2183,visitor);pls::cs::trace_value(cs_9fc1ef5d1c5e7bde,visitor);pls::cs::trace_value(cs_cea09c6a91d7c902,visitor);pls::cs::trace_value(cs_26183201ac982bca,visitor);}

void cs_feb7ae74aa59a27c::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_88b3d0bc7988e77a);pls::cs::release_value(cs_48404c380c305c6b);pls::cs::release_value(cs_1f1b271de448ce48);pls::cs::release_value(cs_625190bccd0d0fa4);pls::cs::release_value(cs_9764b5b60381a8b6);pls::cs::release_value(cs_ccc8fd33eda36b9e);pls::cs::release_value(cs_7d0600ed44e25c28);pls::cs::release_value(cs_924ce9254cf3db30);pls::cs::release_value(cs_f369b68d3e3a2183);pls::cs::release_value(cs_9fc1ef5d1c5e7bde);pls::cs::release_value(cs_cea09c6a91d7c902);pls::cs::release_value(cs_26183201ac982bca);}

void cs_init_feb7ae74aa59a27c(){static pls::cs::TypeInitState state;state.run("system.billing.ui.ApplyTask",[](){

});}

// M:system.billing.ui.ApplyTask.#ctor
pls::cs::Ref<cs_feb7ae74aa59a27c> cs_6dc2344fc05b41a8() { cs_init_feb7ae74aa59a27c();
{ auto cs_this = pls::cs::make_ref<cs_feb7ae74aa59a27c>(); cs_6dc2344fc05b41a8_init(cs_this); return cs_this; }
}

void cs_6dc2344fc05b41a8_init(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this) {
cs_this->cs_9fc1ef5d1c5e7bde = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.#ctor:514",([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }()));
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.ApplyTask.#ctor",game);
{

}
}
}

// M:system.billing.ui.ApplyTask.#ctor(system.billing.ui.BillingItem,System.Int32,System.Boolean)
pls::cs::Ref<cs_feb7ae74aa59a27c> cs_be1899f5ff576e9b(pls::cs::Ref<cs_931908081ea62151> v_item,std::int32_t v_type,bool v_notice) { cs_init_feb7ae74aa59a27c();
{ auto cs_this = pls::cs::make_ref<cs_feb7ae74aa59a27c>(); cs_be1899f5ff576e9b_init(cs_this,v_item,v_type,v_notice); return cs_this; }
}

void cs_be1899f5ff576e9b_init(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this,pls::cs::Ref<cs_931908081ea62151> v_item,std::int32_t v_type,bool v_notice) {
cs_this->cs_9fc1ef5d1c5e7bde = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.#ctor(system.billing.ui.BillingItem,System.Int32,System.Boolean):514",([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }()));
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.ApplyTask.#ctor(system.billing.ui.BillingItem,System.Int32,System.Boolean)",game);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(cs_this); pls::cs::Ref<cs_931908081ea62151> cs_arg0 = v_item; pls::cs::String cs_arg1 = pls::cs::String(u""); std::int32_t cs_arg2 = v_type; bool cs_arg3 = v_notice; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_845c3c904983102e(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}

// M:system.billing.ui.ApplyTask.#ctor(System.String)
pls::cs::Ref<cs_feb7ae74aa59a27c> cs_c9ca6e1962944643(pls::cs::String v_gift) { cs_init_feb7ae74aa59a27c();
{ auto cs_this = pls::cs::make_ref<cs_feb7ae74aa59a27c>(); cs_c9ca6e1962944643_init(cs_this,v_gift); return cs_this; }
}

void cs_c9ca6e1962944643_init(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this,pls::cs::String v_gift) {
cs_this->cs_9fc1ef5d1c5e7bde = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.#ctor(System.String):514",([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }()));
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.ApplyTask.#ctor(System.String)",game);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(cs_this); pls::cs::Ref<cs_931908081ea62151> cs_arg0 = pls::cs::Ref<cs_931908081ea62151>{}; pls::cs::String cs_arg1 = v_gift; std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); bool cs_arg3 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_845c3c904983102e(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}

// M:system.billing.ui.ApplyTask.Deserialize(java.io.InputStream)
void cs_af5dfade08dc055d(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_feb7ae74aa59a27c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.ApplyTask.Deserialize(java.io.InputStream)",game);
{
pls::cs::Ref<cs_6ee7d14059be1acf> v_instance_4193 = ([&]() -> pls::cs::Ref<cs_6ee7d14059be1acf> { return cs_f8eb247e2413618b(); }());
pls::cs::Array<pls::cs::Ref<cs_931908081ea62151>> v_items_4251 = ([&]() -> pls::cs::Array<pls::cs::Ref<cs_931908081ea62151>> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(v_instance_4193); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_0f79ffed5440eb44(); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<cs_931908081ea62151>{}; pls::game::cs_require(cs_target)->cs_88b3d0bc7988e77a = cs_value; return cs_value; }());
std::int32_t v_num_4304 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());});
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_right = v_num_4304; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_num_4304; auto cs_right = (v_items_4251).length(); return (cs_left < cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_items_4251; auto cs_index = v_num_4304; return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_88b3d0bc7988e77a = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.Deserialize(java.io.InputStream):4422",([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }());}); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_48404c380c305c6b = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int8_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1207de83c3a46662(cs_arg0); }());})); pls::game::cs_require(cs_target)->cs_9764b5b60381a8b6 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_5cff189cd1a7d066(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_1f1b271de448ce48 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(cs_this); pls::cs::Ref<cs_931908081ea62151> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }()); pls::cs::String cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }());}); std::int32_t cs_arg2 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9764b5b60381a8b6; }()); bool cs_arg3 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1f1b271de448ce48; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_845c3c904983102e(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
}

// M:system.billing.ui.ApplyTask.Enable
bool cs_6fab53a6524e00ce(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this) { cs_init_feb7ae74aa59a27c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.ApplyTask.Enable",game);
{
return (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d4b12a9d78baa416(cs_receiver); }()) || ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_bd823728f9e6fafc(cs_receiver); }()));
}
}
}
}

// M:system.billing.ui.ApplyTask.Equals(system.billing.ui.ApplyTask)
bool cs_616854ea5e666f2f(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this,pls::cs::Ref<cs_feb7ae74aa59a27c> v_obj) { cs_init_feb7ae74aa59a27c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.ApplyTask.Equals(system.billing.ui.ApplyTask)",game);
{
if ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d4b12a9d78baa416(cs_receiver); }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(v_obj); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d4b12a9d78baa416(cs_receiver); }()))) {
return (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }())); auto cs_right = pls::cs::box(([&]() { auto cs_receiver = v_obj; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }())); return cs_left == cs_right; }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9764b5b60381a8b6; }()); auto cs_right = ([&]() { auto cs_receiver = v_obj; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9764b5b60381a8b6; }()); return (cs_left == cs_right); }()));
}
if ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_bd823728f9e6fafc(cs_receiver); }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(v_obj); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_bd823728f9e6fafc(cs_receiver); }()))) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = v_obj; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_77a6541b4422f624(cs_receiver,cs_arg0); }());});
}
if (((((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_bd823728f9e6fafc(cs_receiver); }()))) && (!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d4b12a9d78baa416(cs_receiver); }())))) && (!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(v_obj); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_bd823728f9e6fafc(cs_receiver); }())))) && (!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(v_obj); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d4b12a9d78baa416(cs_receiver); }()))))) {
return true;
}
return false;
}
}
}
}

// M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean)
void cs_845c3c904983102e(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this,pls::cs::Ref<cs_931908081ea62151> v_item,pls::cs::String v_gift,std::int32_t v_type,bool v_notice) { cs_init_feb7ae74aa59a27c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_item; pls::game::cs_require(cs_target)->cs_88b3d0bc7988e77a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean):913",([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ((([&]() { auto cs_left = pls::cs::box(v_gift); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) ? (v_gift) : (pls::cs::String(u""))); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_48404c380c305c6b = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_type; pls::game::cs_require(cs_target)->cs_9764b5b60381a8b6 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_notice; pls::game::cs_require(cs_target)->cs_1f1b271de448ce48 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_625190bccd0d0fa4 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean):1040",([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = pls::cs::String(u""); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_ccc8fd33eda36b9e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean):1088",([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = pls::cs::String(u""); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_7d0600ed44e25c28 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean):1140",([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = pls::cs::String(u""); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_924ce9254cf3db30 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean):1194",([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = pls::cs::String(u""); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_f369b68d3e3a2183 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean):1248",([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::generated::cs_891849d99054b970(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_9fc1ef5d1c5e7bde = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean):1305",([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d2976a74aad2ceb5(cs_receiver); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_ccc8fd33eda36b9e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean):1357",([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_dd481314101ac6b7(cs_receiver); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_7d0600ed44e25c28 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean):1418",([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f10af6d4bfbcc001(cs_receiver); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_924ce9254cf3db30 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean):1485",([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ea3e9ac545c4eeff(cs_receiver); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_f369b68d3e3a2183 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean):1557",([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1d621b133c4f5a78(cs_receiver); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_9fc1ef5d1c5e7bde = cs_value; return cs_value; }());
} else {
if (([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b9659319b202661(cs_receiver); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
if (([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_9f636226b66780dc(cs_receiver,cs_arg0); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
pls::cs::Array<pls::cs::String> v_array_1700 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->ToString(); }());}); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0009" u"",1);return cs_literal;}()); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1700; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_cea09c6a91d7c902 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean):1816",([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1700; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_26183201ac982bca = cs_value; return cs_value; }());
} else {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0040" u"",1);return cs_literal;}()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_eaf1659172f4a34c(cs_receiver,cs_arg0); }());})) {

} else {
pls::cs::Array<pls::cs::String> v_array2_1923 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->ToString(); }());}); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002c" u"",1);return cs_literal;}()); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean):1991",([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array2_1923; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_7d0600ed44e25c28 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = (v_array2_1923).length(); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean):2069",([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array2_1923; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_ccc8fd33eda36b9e = cs_value; return cs_value; }());
}
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7d0600ed44e25c28; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_6dd0b8d6220bd2b3(cs_receiver); }());}); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005f" u"",1);return cs_literal;}()); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());}); v_array2_1923 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_right = (v_array2_1923).length(); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean):2218",([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array2_1923; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_924ce9254cf3db30 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = (v_array2_1923).length(); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean):2314",([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array2_1923; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_f369b68d3e3a2183 = cs_value; return cs_value; }());
}
try {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f369b68d3e3a2183; }())); pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006f" u"\x006e" u"",2);return cs_literal;}()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_6dfda3f794a136b1(cs_receiver,cs_arg0); }());})) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean):2441",([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::generated::cs_891849d99054b970(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_9fc1ef5d1c5e7bde = cs_value; return cs_value; }());
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f369b68d3e3a2183; }())); pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006f" u"\x0066" u"\x0066" u"",3);return cs_literal;}()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_6dfda3f794a136b1(cs_receiver,cs_arg0); }());})) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean):2548",([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::generated::cs_891849d99054b970(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_9fc1ef5d1c5e7bde = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean):2619",([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f369b68d3e3a2183; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_6dd0b8d6220bd2b3(cs_receiver); }());}); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); return pls::generated::cs_891849d99054b970(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_9fc1ef5d1c5e7bde = cs_value; return cs_value; }());
}
} catch(const pls::cs::Exception& cs_caught_820) {auto cs_exception_820=pls::cs::capture_exception(cs_caught_820);
if(pls::cs::exception_is(cs_exception_820,"System.Exception")) {{

}}
else {throw;} }
if (([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ccc8fd33eda36b9e; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b9659319b202661(cs_receiver); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
pls::cs::Ref<cs_6ee7d14059be1acf> v_instance_2782 = ([&]() -> pls::cs::Ref<cs_6ee7d14059be1acf> { return cs_f8eb247e2413618b(); }());
pls::cs::Array<pls::cs::Ref<cs_931908081ea62151>> v_items_2842 = ([&]() -> pls::cs::Array<pls::cs::Ref<cs_931908081ea62151>> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(v_instance_2782); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_0f79ffed5440eb44(); }());
pls::cs::Ref<cs_931908081ea62151> v_billingItem_2888 = pls::cs::Ref<cs_931908081ea62151>{};
pls::cs::Ref<cs_931908081ea62151> v_billingItem2_2925 = pls::cs::Ref<cs_931908081ea62151>{};
pls::cs::Ref<cs_931908081ea62151> v_billingItem3_2963 = pls::cs::Ref<cs_931908081ea62151>{};
for (std::int32_t v_i_2998 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2998; auto cs_right = (v_items_2842).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2998; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2998 = cs_new; return cs_old; }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = v_items_2842; auto cs_index = v_i_2998; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
continue;
}
if ((!((pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(([&]() { auto cs_array = v_items_2842; auto cs_index = v_i_2998; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f10af6d4bfbcc001(cs_receiver); }()); auto cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_924ce9254cf3db30; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }());}); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }());}))))) {
continue;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(([&]() { auto cs_array = v_items_2842; auto cs_index = v_i_2998; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ea3e9ac545c4eeff(cs_receiver); }()); auto cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f369b68d3e3a2183; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }());}); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }());})) {
([&]() { auto cs_value = ([&]() { auto cs_array = v_items_2842; auto cs_index = v_i_2998; return cs_array.get_Item(cs_index); }()); v_billingItem_2888 = cs_value; return cs_value; }());
} else if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(([&]() { auto cs_array = v_items_2842; auto cs_index = v_i_2998; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1d621b133c4f5a78(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left > cs_right); }()) && ([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9fc1ef5d1c5e7bde; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left > cs_right); }()))) {
([&]() { auto cs_value = ([&]() { auto cs_array = v_items_2842; auto cs_index = v_i_2998; return cs_array.get_Item(cs_index); }()); v_billingItem2_2925 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = ([&]() { auto cs_array = v_items_2842; auto cs_index = v_i_2998; return cs_array.get_Item(cs_index); }()); v_billingItem3_2963 = cs_value; return cs_value; }());
}
}
if (([&]() { auto cs_left = pls::cs::box(v_billingItem_2888); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean):3561",([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(v_billingItem_2888); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d2976a74aad2ceb5(cs_receiver); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_ccc8fd33eda36b9e = cs_value; return cs_value; }());
} else if (([&]() { auto cs_left = pls::cs::box(v_billingItem2_2925); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean):3666",([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(v_billingItem2_2925); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d2976a74aad2ceb5(cs_receiver); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_ccc8fd33eda36b9e = cs_value; return cs_value; }());
} else if (([&]() { auto cs_left = pls::cs::box(v_billingItem3_2963); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/ApplyTask.cs:M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean):3772",([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(v_billingItem3_2963); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d2976a74aad2ceb5(cs_receiver); }()); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_ccc8fd33eda36b9e = cs_value; return cs_value; }());
}
}
}
}
}
}
}
}
}
}

// M:system.billing.ui.ApplyTask.IsGameApply
bool cs_d75c2e1895552ab6(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this) { cs_init_feb7ae74aa59a27c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.ApplyTask.IsGameApply",game);
{
return (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_bd823728f9e6fafc(cs_receiver); }()) || ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_feb7ae74aa59a27c>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d4b12a9d78baa416(cs_receiver); }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_526dc02241eb9cf2(cs_receiver,cs_arg0); }()))));
}
}
}
}

// M:system.billing.ui.ApplyTask.IsGift
bool cs_bd823728f9e6fafc(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this) { cs_init_feb7ae74aa59a27c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.ApplyTask.IsGift",game);
{
return (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b9659319b202661(cs_receiver); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()));
}
}
}
}

// M:system.billing.ui.ApplyTask.IsGiftScript
bool cs_bb022c37b48392ad(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this) { cs_init_feb7ae74aa59a27c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.ApplyTask.IsGiftScript",game);
{
return ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b9659319b202661(cs_receiver); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) && pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0040" u"",1);return cs_literal;}()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_eaf1659172f4a34c(cs_receiver,cs_arg0); }());}));
}
}
}
}

// M:system.billing.ui.ApplyTask.IsItem
bool cs_d4b12a9d78baa416(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this) { cs_init_feb7ae74aa59a27c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.ApplyTask.IsItem",game);
{
return ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }());
}
}
}
}

// M:system.billing.ui.ApplyTask.Serialize(java.io.OutputStream)
void cs_7248c0ef7932886f(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_feb7ae74aa59a27c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.ApplyTask.Serialize(java.io.OutputStream)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) ? (([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88b3d0bc7988e77a; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bbde759dc3b81081; }())) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::String cs_arg1 = ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) ? (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48404c380c305c6b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_6dd0b8d6220bd2b3(cs_receiver); }());})) : (pls::cs::String(u""))); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::uint8_t cs_arg1 = pls::cs::cast_integral<std::uint8_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9764b5b60381a8b6; }())); pls::generated::cs_c43b9bbf725f702e(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; bool cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1f1b271de448ce48; }()); pls::generated::cs_7c02733ae541274e(cs_arg0,cs_arg1); }());});
}
}
}
}
}
