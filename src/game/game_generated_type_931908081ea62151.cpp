// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_6ee7d14059be1acf.hpp"
#include "game_generated_type_931908081ea62151.hpp"
#include "game_generated_type_a42daea58251b089.hpp"
#include "generated/portable_generated_type_1ff3292665c8e0c4.hpp"
#include "generated/portable_generated_type_5098bfda9cf65745.hpp"
#include "generated/portable_generated_type_7de6788b61a5af56.hpp"
#include "generated/portable_generated_type_7fd3b635ed6929d0.hpp"
#include "generated/portable_generated_type_bb652fbb61000386.hpp"
#include "generated/portable_generated_type_e7a5499b363ef51b.hpp"
#include "generated/portable_generated_type_ea324a0bbfe717fe.hpp"
#include "generated/portable_generated_type_f3ea616d36334b95.hpp"
namespace pls::game {

void cs_931908081ea62151::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_bbde759dc3b81081,visitor);pls::cs::trace_value(cs_1947569898ac6eaf,visitor);pls::cs::trace_value(cs_e8fb66fe9cd2c6fa,visitor);pls::cs::trace_value(cs_25ef515e28c2f1c3,visitor);pls::cs::trace_value(cs_18b42457ec8905ed,visitor);pls::cs::trace_value(cs_42e87afb27f20974,visitor);pls::cs::trace_value(cs_feae4d6092e68c7b,visitor);pls::cs::trace_value(cs_4ed7d84c1dce4799,visitor);pls::cs::trace_value(cs_fd8816021d9a3386,visitor);pls::cs::trace_value(cs_9e45a15cae334c64,visitor);pls::cs::trace_value(cs_c121762e04d9e472,visitor);pls::cs::trace_value(cs_1bc5442ab3af463e,visitor);pls::cs::trace_value(cs_15351a5f19e951e7,visitor);pls::cs::trace_value(cs_5994cfa5fd307cd3,visitor);pls::cs::trace_value(cs_ffd30ff59c7f2fa7,visitor);pls::cs::trace_value(cs_041f0f865fe45ade,visitor);pls::cs::trace_value(cs_cd268ae5907f6b9b,visitor);pls::cs::trace_value(cs_de33231c384fd439,visitor);pls::cs::trace_value(cs_689025ebd1ac5aa9,visitor);}

void cs_931908081ea62151::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_bbde759dc3b81081);pls::cs::release_value(cs_1947569898ac6eaf);pls::cs::release_value(cs_e8fb66fe9cd2c6fa);pls::cs::release_value(cs_25ef515e28c2f1c3);pls::cs::release_value(cs_18b42457ec8905ed);pls::cs::release_value(cs_42e87afb27f20974);pls::cs::release_value(cs_feae4d6092e68c7b);pls::cs::release_value(cs_4ed7d84c1dce4799);pls::cs::release_value(cs_fd8816021d9a3386);pls::cs::release_value(cs_9e45a15cae334c64);pls::cs::release_value(cs_c121762e04d9e472);pls::cs::release_value(cs_1bc5442ab3af463e);pls::cs::release_value(cs_15351a5f19e951e7);pls::cs::release_value(cs_5994cfa5fd307cd3);pls::cs::release_value(cs_ffd30ff59c7f2fa7);pls::cs::release_value(cs_041f0f865fe45ade);pls::cs::release_value(cs_cd268ae5907f6b9b);pls::cs::release_value(cs_de33231c384fd439);pls::cs::release_value(cs_689025ebd1ac5aa9);}

void cs_931908081ea62151::cs_virtual_d1e3bc579a0b32eb(pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) {cs_d1e3bc579a0b32eb(std::static_pointer_cast<cs_931908081ea62151>(shared_from_this()),v_stream);}

void cs_931908081ea62151::cs_virtual_d1922bb59f7ed3bf(std::int32_t v_id,std::int32_t v_flag,pls::cs::String v_productId,pls::cs::String v_name,pls::cs::String v_price,std::int32_t v_type,pls::cs::String v_explain) {cs_d1922bb59f7ed3bf(std::static_pointer_cast<cs_931908081ea62151>(shared_from_this()),v_id,v_flag,v_productId,v_name,v_price,v_type,v_explain);}

void cs_931908081ea62151::cs_virtual_eae24f37838268a3(pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) {cs_eae24f37838268a3(std::static_pointer_cast<cs_931908081ea62151>(shared_from_this()),v_os);}

void cs_init_931908081ea62151(){static pls::cs::TypeInitState state;state.run("system.billing.ui.BillingItem",[](){

});}

// M:system.billing.ui.BillingItem.ChangeState(System.Int32)
void cs_34602a275b94fc86(pls::cs::Ref<cs_931908081ea62151> cs_this,std::int32_t v_state) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingItem.ChangeState(System.Int32)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = v_state; return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_4ed7d84c1dce4799 = cs_value; return cs_value; }());
}
}
}
}

// M:system.billing.ui.BillingItem.Check(System.Int32)
bool cs_526dc02241eb9cf2(pls::cs::Ref<cs_931908081ea62151> cs_this,std::int32_t v_bit) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingItem.Check(System.Int32)",game);
{
return ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_feae4d6092e68c7b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }());}); auto cs_right = v_bit; return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }());
}
}
}
}

// M:system.billing.ui.BillingItem.CheckProvision
bool cs_fdc6ec3200ae7826(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingItem.CheckProvision",game);
{
pls::cs::Ref<cs_6ee7d14059be1acf> v_instance_3858 = ([&]() -> pls::cs::Ref<cs_6ee7d14059be1acf> { return cs_f8eb247e2413618b(); }());
if ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_931908081ea62151>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_526dc02241eb9cf2(cs_receiver,cs_arg0); }()) && (!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_6ee7d14059be1acf>>(v_instance_3858); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_6e47643190d08935(); }()))))) {
return false;
}
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fd8816021d9a3386; }());
}
}
}
}

// M:system.billing.ui.BillingItem.CheckTestProduct
bool cs_0becefd0b1d5e4cd(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingItem.CheckTestProduct",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ffd30ff59c7f2fa7; }());
}
}
}
}

// M:system.billing.ui.BillingItem.Deserialize(java.io.InputStream)
void cs_d1e3bc579a0b32eb(pls::cs::Ref<cs_931908081ea62151> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingItem.Deserialize(java.io.InputStream)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int8_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1207de83c3a46662(cs_arg0); }());})); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_4ed7d84c1dce4799 = cs_value; return cs_value; }());
std::int32_t v_num_4828 = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int8_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1207de83c3a46662(cs_arg0); }());}));
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_5cff189cd1a7d066(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_fd8816021d9a3386 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_5cff189cd1a7d066(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_041f0f865fe45ade = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_feae4d6092e68c7b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }());}); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::generated::cs_14daf94c5cc9a117(cs_arg0,cs_arg1); }());}); auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_num_4828; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return (cs_left & cs_right); }())); return (cs_left | cs_right); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_feae4d6092e68c7b = cs_value; return cs_value; }());
}
}
}
}

// M:system.billing.ui.BillingItem.GetExplain
pls::cs::String cs_ef16a71fcdfd9b71(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingItem.GetExplain",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_42e87afb27f20974; }());
}
}
}
}

// M:system.billing.ui.BillingItem.GetId
std::int32_t cs_859e2922776eae2b(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingItem.GetId",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bbde759dc3b81081; }());
}
}
}
}

// M:system.billing.ui.BillingItem.GetItemType
std::int32_t cs_e33af97c9acf69d0(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingItem.GetItemType",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_25ef515e28c2f1c3; }());
}
}
}
}

// M:system.billing.ui.BillingItem.GetName
pls::cs::String cs_d2976a74aad2ceb5(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingItem.GetName",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e8fb66fe9cd2c6fa; }());
}
}
}
}

// M:system.billing.ui.BillingItem.GetPlatformProductID(System.String)
pls::cs::String cs_61be1ca9ff48e486(pls::cs::String v_productID) { cs_init_931908081ea62151();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingItem.GetPlatformProductID(System.String)",game);
{
return v_productID;
}
}
}

// M:system.billing.ui.BillingItem.GetPrice
pls::cs::String cs_4c61a053b9c9bc8c(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingItem.GetPrice",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_18b42457ec8905ed; }());
}
}
}
}

// M:system.billing.ui.BillingItem.GetProductId
pls::cs::String cs_dd481314101ac6b7(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingItem.GetProductId",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1947569898ac6eaf; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }());});
}
}
}
}

// M:system.billing.ui.BillingItem.GetProvisionType
pls::cs::String cs_f10af6d4bfbcc001(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingItem.GetProvisionType",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1bc5442ab3af463e; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }());});
}
}
}
}

// M:system.billing.ui.BillingItem.GetProvisionValue
std::int32_t cs_1d621b133c4f5a78(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingItem.GetProvisionValue",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5994cfa5fd307cd3; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }());});
}
}
}
}

// M:system.billing.ui.BillingItem.GetProvisionValueText
pls::cs::String cs_ea3e9ac545c4eeff(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingItem.GetProvisionValueText",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_15351a5f19e951e7; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }());});
}
}
}
}

// M:system.billing.ui.BillingItem.GetPurchase
pls::cs::Ref<cs_a42daea58251b089> cs_02424c6036fcb3c9(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingItem.GetPurchase",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e45a15cae334c64; }());
}
}
}
}

// M:system.billing.ui.BillingItem.GetSeriesName
pls::cs::String cs_5455b0bdd2f57048(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingItem.GetSeriesName",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de33231c384fd439; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }());});
}
}
}
}

// M:system.billing.ui.BillingItem.GetSeriesNumber
std::int32_t cs_c94032c6dab33a1c(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingItem.GetSeriesNumber",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_689025ebd1ac5aa9; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }());});
}
}
}
}

// M:system.billing.ui.BillingItem.GetState
std::int32_t cs_2311693c37cf23d0(pls::cs::Ref<cs_931908081ea62151> cs_this) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingItem.GetState",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4ed7d84c1dce4799; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }());});
}
}
}
}

// M:system.billing.ui.BillingItem.Init(System.Int32,System.Int32,System.String,System.String,System.String,System.Int32,System.String)
void cs_d1922bb59f7ed3bf(pls::cs::Ref<cs_931908081ea62151> cs_this,std::int32_t v_id,std::int32_t v_flag,pls::cs::String v_productId,pls::cs::String v_name,pls::cs::String v_price,std::int32_t v_type,pls::cs::String v_explain) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingItem.Init(System.Int32,System.Int32,System.String,System.String,System.String,System.Int32,System.String)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_id; pls::game::cs_require(cs_target)->cs_bbde759dc3b81081 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = v_flag; return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_feae4d6092e68c7b = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = v_productId; return pls::generated::cs_376859ff51e2fc37(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_1947569898ac6eaf = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_name; pls::game::cs_require(cs_target)->cs_e8fb66fe9cd2c6fa = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_type; pls::game::cs_require(cs_target)->cs_25ef515e28c2f1c3 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = (((([&]() { auto cs_left = pls::cs::box(v_price); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) ? (pls::cs::String(u"")) : (v_price))); pls::game::cs_require(cs_target)->cs_18b42457ec8905ed = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = (((([&]() { auto cs_left = pls::cs::box(v_explain); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) ? (pls::cs::String(u"")) : (v_explain))); pls::game::cs_require(cs_target)->cs_42e87afb27f20974 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_4ed7d84c1dce4799 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_fd8816021d9a3386 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_041f0f865fe45ade = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<pls::generated::cs_bb652fbb61000386>{}; pls::game::cs_require(cs_target)->cs_de33231c384fd439 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_689025ebd1ac5aa9 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1947569898ac6eaf; }()); return pls::generated::cs_f1e3fe1dceee44d7(cs_value); }()); return cs_61be1ca9ff48e486(cs_arg0); }()); return pls::generated::cs_7047562b1e051211(cs_value); }()); pls::game::cs_require(cs_target)->cs_1947569898ac6eaf = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_productId); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::cs::Array<pls::cs::String> v_array_1733 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_productId; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x005f" u"",1)); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());});
std::int32_t v_num_1782 = (v_array_1733).length();
for (std::int32_t v_i_1814 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1814; auto cs_right = (v_array_1733).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1814; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1814 = cs_new; return cs_old; }())) {
if ((pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_array = v_array_1733; auto cs_index = v_i_1814; return cs_array.get_Item(cs_index); }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0062" u"\x0061" u"\x0073" u"\x0065" u"",4)); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }());}) || pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_array = v_array_1733; auto cs_index = v_i_1814; return cs_array.get_Item(cs_index); }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0063" u"\x0061" u"\x0073" u"\x0065" u"",4)); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }());}))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_array = v_array_1733; auto cs_index = v_i_1814; return cs_array.get_Item(cs_index); }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0062" u"\x0061" u"\x0073" u"\x0065" u"",4)); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }());}); pls::game::cs_require(cs_target)->cs_ffd30ff59c7f2fa7 = cs_value; return cs_value; }());
([&]() { auto cs_value = v_i_1814; v_num_1782 = cs_value; return cs_value; }());
break;
}
}
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_right = (v_array_1733).length(); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1733; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_376859ff51e2fc37(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_1bc5442ab3af463e = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num_1782; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left >= cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1733; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_376859ff51e2fc37(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_15351a5f19e951e7 = cs_value; return cs_value; }());
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_15351a5f19e951e7; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_5994cfa5fd307cd3 = cs_value; return cs_value; }());
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_15351a5f19e951e7; }())); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x006f" u"\x006e" u"",2)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_6dfda3f794a136b1(cs_receiver,cs_arg0); }());})) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_5994cfa5fd307cd3 = cs_value; return cs_value; }());
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_15351a5f19e951e7; }())); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x006f" u"\x0066" u"\x0066" u"",3)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_6dfda3f794a136b1(cs_receiver,cs_arg0); }());})) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_5994cfa5fd307cd3 = cs_value; return cs_value; }());
} else {
try {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_15351a5f19e951e7; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }());}); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_5994cfa5fd307cd3 = cs_value; return cs_value; }());
} catch(const pls::cs::Exception& cs_caught_816) {auto cs_exception_816=pls::cs::capture_exception(cs_caught_816);
if(pls::cs::exception_is(cs_exception_816,"System.Exception")) {{

}}
else {throw;} }
}
}
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_right = (v_array_1733).length(); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_array = v_array_1733; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::String(std::u16string(u"\x005f" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_array = v_array_1733; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x005f" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_array = v_array_1733; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::String::concat(cs_left,cs_right); }()); return pls::generated::cs_376859ff51e2fc37(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_de33231c384fd439 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1733; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_689025ebd1ac5aa9 = cs_value; return cs_value; }());
}
}
}
}
}
}

// M:system.billing.ui.BillingItem.Off(System.Int32)
void cs_b3c80163ab846bc1(pls::cs::Ref<cs_931908081ea62151> cs_this,std::int32_t v_bit) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingItem.Off(System.Int32)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_feae4d6092e68c7b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(~(v_bit)); return (cs_left & cs_right); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_feae4d6092e68c7b = cs_value; return cs_value; }());
}
}
}
}

// M:system.billing.ui.BillingItem.On(System.Int32)
void cs_cea422709c0e739c(pls::cs::Ref<cs_931908081ea62151> cs_this,std::int32_t v_bit) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingItem.On(System.Int32)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_feae4d6092e68c7b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }());}); auto cs_right = v_bit; return (cs_left | cs_right); }()); return pls::generated::cs_891849d99054b970(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_feae4d6092e68c7b = cs_value; return cs_value; }());
}
}
}
}

// M:system.billing.ui.BillingItem.Serialize(java.io.OutputStream)
void cs_eae24f37838268a3(pls::cs::Ref<cs_931908081ea62151> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingItem.Serialize(java.io.OutputStream)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::uint8_t cs_arg1 = pls::cs::cast_integral<std::uint8_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4ed7d84c1dce4799; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }());})); pls::generated::cs_c43b9bbf725f702e(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::uint8_t cs_arg1 = pls::cs::cast_integral<std::uint8_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_feae4d6092e68c7b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }());})); pls::generated::cs_c43b9bbf725f702e(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; bool cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fd8816021d9a3386; }()); pls::generated::cs_7c02733ae541274e(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; bool cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_041f0f865fe45ade; }()); pls::generated::cs_7c02733ae541274e(cs_arg0,cs_arg1); }());});
}
}
}
}

// M:system.billing.ui.BillingItem.SetProvision(System.Boolean)
void cs_86d43294891eab63(pls::cs::Ref<cs_931908081ea62151> cs_this,bool v_provision) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingItem.SetProvision(System.Boolean)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_provision; pls::game::cs_require(cs_target)->cs_fd8816021d9a3386 = cs_value; return cs_value; }());
}
}
}
}

// M:system.billing.ui.BillingItem.SetPurchase(system.billing.util.Purchase)
void cs_c1ebd2cf1827c239(pls::cs::Ref<cs_931908081ea62151> cs_this,pls::cs::Ref<cs_a42daea58251b089> v_purchase) { cs_init_931908081ea62151();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.BillingItem.SetPurchase(system.billing.util.Purchase)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_purchase; pls::game::cs_require(cs_target)->cs_9e45a15cae334c64 = cs_value; return cs_value; }());
}
}
}
}
}
