// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_15f31d4f046b09a8.hpp"
#include "game_generated_type_89c0d586cfe20341.hpp"
#include "game_generated_type_925b3cf054e42b78.hpp"
#include "game_generated_type_a42daea58251b089.hpp"
#include "game_generated_type_b489b0d33bb37bb8.hpp"
#include "game_generated_type_e6ed65290db381ba.hpp"
#include "game_generated_type_efeeb7640894c95e.hpp"
#include "game_generated_type_fa01867c9c048464.hpp"
#include "generated/portable_generated_type_18054fa8aeee43c7.hpp"
#include "generated/portable_generated_type_3af9088680f95fb3.hpp"
#include "generated/portable_generated_type_4978cb69e37b8564.hpp"
#include "generated/portable_generated_type_5098bfda9cf65745.hpp"
#include "generated/portable_generated_type_582a926e9c7748a6.hpp"
#include "generated/portable_generated_type_7fd3b635ed6929d0.hpp"
#include "generated/portable_generated_type_8b851671e0d8b17f.hpp"
#include "generated/portable_generated_type_924db3d974bae2af.hpp"
#include "generated/portable_generated_type_bb652fbb61000386.hpp"
#include "generated/portable_generated_type_c783ca99640a5ce3.hpp"
#include "generated/portable_generated_type_d4a32b46456ca92c.hpp"
#include "generated/portable_generated_type_e7a5499b363ef51b.hpp"
#include "generated/portable_generated_type_e7d772862db62924.hpp"
#include "generated/portable_generated_type_ea324a0bbfe717fe.hpp"
namespace pls::game {

void cs_15f31d4f046b09a8::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_faf2053d989419ff,visitor);pls::cs::trace_value(cs_519713e3b629623c,visitor);pls::cs::trace_value(cs_b713199635bb1058,visitor);pls::cs::trace_value(cs_59d0e1ae203981e5,visitor);pls::cs::trace_value(cs_d6ae59bf543478aa,visitor);pls::cs::trace_value(cs_6541be3d4c391c46,visitor);pls::cs::trace_value(cs_10794726de973b56,visitor);}

void cs_15f31d4f046b09a8::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_faf2053d989419ff);pls::cs::release_value(cs_519713e3b629623c);pls::cs::release_value(cs_b713199635bb1058);pls::cs::release_value(cs_59d0e1ae203981e5);pls::cs::release_value(cs_d6ae59bf543478aa);pls::cs::release_value(cs_6541be3d4c391c46);pls::cs::release_value(cs_10794726de973b56);}

bool cs_15f31d4f046b09a8::Equals(pls::cs::Ref<pls::cs::Object> const& v_o) {return cs_f86548878598ca1e(pls::cs::static_pointer_cast<cs_15f31d4f046b09a8>(shared_from_this()),v_o);}

std::int32_t cs_15f31d4f046b09a8::GetHashCode() {return cs_d860de92f53afc6c(pls::cs::static_pointer_cast<cs_15f31d4f046b09a8>(shared_from_this()));}

static pls::cs::Array<std::uint8_t> cs_0ab9b09ba01c1501_value{};

void cs_init_15f31d4f046b09a8(){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(cs_0ab9b09ba01c1501_value,visitor);});static pls::cs::TypeInitState state;state.run("system.billing.ui.Receipt",[](){
cs_0ab9b09ba01c1501_value = pls::cs::evaluate_type_initializer_field("F:system.billing.ui.Receipt.PASSKEY",[&](){return pls::source_allocations::completed("new_array","src/Assembly-CSharp/system/billing/ui/Receipt.cs:M:system.billing.ui.Receipt.Load(java.io.InputStream):505",pls::assets::baked_array<std::uint8_t>("61736f320d2d2e922d39112d814fc89624178f8ca851f942effda611d7d9bb89"));});

});}

pls::cs::Array<std::uint8_t>& cs_0ab9b09ba01c1501(){cs_init_15f31d4f046b09a8();return cs_0ab9b09ba01c1501_value;}

// M:system.billing.ui.Receipt.#ctor
pls::cs::Ref<cs_15f31d4f046b09a8> cs_9c5286d2f0a31d6e() { cs_init_15f31d4f046b09a8();
{ auto cs_this = pls::cs::make_ref<cs_15f31d4f046b09a8>(); cs_9c5286d2f0a31d6e_init(cs_this); return cs_this; }
}

void cs_9c5286d2f0a31d6e_init(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this) {
cs_this->cs_10794726de973b56 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.Receipt.#ctor",game);
{

}
}
}

// M:system.billing.ui.Receipt.#ctor(UnityEngine.Purchasing.Product,System.String)
pls::cs::Ref<cs_15f31d4f046b09a8> cs_086496be2a9fbcc0(pls::cs::Ref<cs_efeeb7640894c95e> v_p,pls::cs::String v_receipt) { cs_init_15f31d4f046b09a8();
{ auto cs_this = pls::cs::make_ref<cs_15f31d4f046b09a8>(); cs_086496be2a9fbcc0_init(cs_this,v_p,v_receipt); return cs_this; }
}

void cs_086496be2a9fbcc0_init(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this,pls::cs::Ref<cs_efeeb7640894c95e> v_p,pls::cs::String v_receipt) {
cs_this->cs_10794726de973b56 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.Receipt.#ctor(UnityEngine.Purchasing.Product,System.String)",game);
{

}
}
}

// M:system.billing.ui.Receipt.Consume
void cs_dd397613cdc03211(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.Receipt.Consume",game);
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_59d0e1ae203981e5; }()); auto cs_right = static_cast<std::int32_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); return (cs_left != cs_right); }())) {
return;
}
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::generated::cs_9aee68341f2c87b1(cs_value); }()); pls::game::cs_require(cs_target)->cs_b713199635bb1058 = cs_value; return cs_value; }());
}
}
}
}
}

// M:system.billing.ui.Receipt.Copy(system.billing.ui.Receipt)
void cs_caaec83cd1923ea7(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this,pls::cs::Ref<cs_15f31d4f046b09a8> v_r) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.Receipt.Copy(system.billing.ui.Receipt)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = v_r; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_faf2053d989419ff; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_6dd0b8d6220bd2b3(cs_receiver); }());}); return pls::generated::cs_7047562b1e051211(cs_value); }()); pls::game::cs_require(cs_target)->cs_faf2053d989419ff = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = v_r; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_519713e3b629623c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_6dd0b8d6220bd2b3(cs_receiver); }());}); return pls::generated::cs_7047562b1e051211(cs_value); }()); pls::game::cs_require(cs_target)->cs_519713e3b629623c = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = v_r; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b713199635bb1058; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }());}); return pls::generated::cs_9aee68341f2c87b1(cs_value); }()); pls::game::cs_require(cs_target)->cs_b713199635bb1058 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_r; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_59d0e1ae203981e5; }()); pls::game::cs_require(cs_target)->cs_59d0e1ae203981e5 = cs_value; return cs_value; }());
}
}
}
}

// M:system.billing.ui.Receipt.DebugVerificationReceipt
void cs_82519cef4853816c(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.Receipt.DebugVerificationReceipt",game);
{
([&]() -> void { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_15f31d4f046b09a8>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f228db45ed90d23f(cs_receiver); }()); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0074" u"\x006f" u"\x006b" u"\x0065" u"\x006e" u"",5);return cs_literal;}()); return cs_14929f68cda1ed89(cs_arg0,cs_arg1); }()); cs_c3cd5afb73d8cc54(cs_arg0); }());
}
}
}
}

// M:system.billing.ui.Receipt.DebugVerificationReceipt(System.String)
void cs_c3cd5afb73d8cc54(pls::cs::String v_token) { cs_init_15f31d4f046b09a8();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.Receipt.DebugVerificationReceipt(System.String)",game);
{
if ((!((pls::generated::cs_b0827224162a4f93())))) {
return;
}
}
}
}

// M:system.billing.ui.Receipt.Equals(System.Object)
bool cs_f86548878598ca1e(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this,pls::cs::Ref<pls::cs::Object> v_o) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.Receipt.Equals(System.Object)",game);
{
if ((!((pls::game::cs_is<pls::cs::Ref<cs_15f31d4f046b09a8>>(pls::cs::box(v_o)))))) {
return false;
}
if (([&]() { auto cs_left = pls::cs::box(v_o); auto cs_right = pls::cs::box(cs_this); return cs_left == cs_right; }())) {
return true;
}
pls::cs::Ref<cs_15f31d4f046b09a8> v_receipt_826 = pls::cs::unbox<pls::cs::Ref<cs_15f31d4f046b09a8>>(v_o);
return (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_faf2053d989419ff; }())); auto cs_right = pls::cs::box(([&]() { auto cs_receiver = v_receipt_826; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_faf2053d989419ff; }())); return cs_left == cs_right; }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_519713e3b629623c; }())); auto cs_right = pls::cs::box(([&]() { auto cs_receiver = v_receipt_826; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_519713e3b629623c; }())); return cs_left == cs_right; }()));
}
}
}
}

// M:system.billing.ui.Receipt.GetHashCode
std::int32_t cs_d860de92f53afc6c(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.Receipt.GetHashCode",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(pls::cs::static_pointer_cast<pls::cs::Object>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}
}
}
}

// M:system.billing.ui.Receipt.GetItemType(UnityEngine.Purchasing.Product)
pls::cs::String cs_f1b1730a73f8deed(pls::cs::Ref<cs_efeeb7640894c95e> v_p) { cs_init_15f31d4f046b09a8();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.Receipt.GetItemType(UnityEngine.Purchasing.Product)",game);
{
return pls::cs::String{};
}
}
}

// M:system.billing.ui.Receipt.GetItemType(UnityEngine.Purchasing.ProductType)
pls::cs::String cs_9f1744905f403ec8(std::int32_t v_type) { cs_init_15f31d4f046b09a8();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.Receipt.GetItemType(UnityEngine.Purchasing.ProductType)",game);
{
return ((([&]() -> bool { auto cs_left = v_type; auto cs_right = static_cast<std::int32_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull))); return (cs_left == cs_right); }())) ? ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0073" u"\x0075" u"\x0062" u"\x0073" u"",4);return cs_literal;}()) : ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0069" u"\x006e" u"\x0061" u"\x0070" u"\x0070" u"",5);return cs_literal;}()));
}
}
}

// M:system.billing.ui.Receipt.GetJson
pls::cs::String cs_f228db45ed90d23f(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.Receipt.GetJson",game);
{
return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_15f31d4f046b09a8>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_76d45a6ec5e37940(cs_receiver); }()); pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_15f31d4f046b09a8>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_69ca60609ca07561(cs_receiver); }()); pls::cs::String cs_arg2 = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/system/billing/ui/Receipt.cs:M:system.billing.ui.Receipt.GetJson:1666",([&]() { auto cs_left = pls::cs::String(u""); auto cs_right = pls::game::cs_object_string(pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6541be3d4c391c46; }()))); return pls::cs::String::concat(cs_left,cs_right); }())); return cs_29cfbbc6ef724690(cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
}

// M:system.billing.ui.Receipt.GetJsonParam(System.String)
pls::cs::String cs_3401b30298b4eb96(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this,pls::cs::String v_tag) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.Receipt.GetJsonParam(System.String)",game);
{
return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_15f31d4f046b09a8>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f228db45ed90d23f(cs_receiver); }()); pls::cs::String cs_arg1 = v_tag; return cs_14929f68cda1ed89(cs_arg0,cs_arg1); }());
}
}
}
}

// M:system.billing.ui.Receipt.GetOrderId
pls::cs::String cs_e8fea88a1ccd74d6(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.Receipt.GetOrderId",game);
{
return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_15f31d4f046b09a8>>(cs_this); pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006f" u"\x0072" u"\x0064" u"\x0065" u"\x0072" u"\x0049" u"\x0064" u"",7);return cs_literal;}()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3401b30298b4eb96(cs_receiver,cs_arg0); }());
}
}
}
}

// M:system.billing.ui.Receipt.GetProductID
pls::cs::String cs_69ca60609ca07561(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.Receipt.GetProductID",game);
{
return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_faf2053d989419ff; }()); return pls::generated::cs_f1e3fe1dceee44d7(cs_value); }()); return cs_0e8660e32789ac5b(cs_arg0); }());
}
}
}
}

// M:system.billing.ui.Receipt.GetProductType
std::int32_t cs_b16954dcc18f83e4(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.Receipt.GetProductType",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_59d0e1ae203981e5; }());
}
}
}
}

// M:system.billing.ui.Receipt.GetPurchase
pls::cs::Ref<cs_a42daea58251b089> cs_9766d64ee1bba541(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.Receipt.GetPurchase",game);
{
pls::cs::String v_json_1219 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_15f31d4f046b09a8>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f228db45ed90d23f(cs_receiver); }());
return pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/Receipt.cs:M:system.billing.ui.Receipt.GetPurchase:1247",([&]() -> pls::cs::Ref<cs_a42daea58251b089> { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_59d0e1ae203981e5; }()); return cs_9f1744905f403ec8(cs_arg0); }()); pls::cs::String cs_arg1 = v_json_1219; pls::cs::String cs_arg2 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_json_1219; pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0073" u"\x0069" u"\x0067" u"\x006e" u"\x0061" u"\x0074" u"\x0075" u"\x0072" u"\x0065" u"",9);return cs_literal;}()); return cs_14929f68cda1ed89(cs_arg0,cs_arg1); }()); return cs_f7abaa335be13394(cs_arg0,cs_arg1,cs_arg2); }()));
}
}
}
}

// M:system.billing.ui.Receipt.GetReceipt
pls::cs::String cs_76d45a6ec5e37940(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.Receipt.GetReceipt",game);
{
return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_519713e3b629623c; }()); return pls::generated::cs_f1e3fe1dceee44d7(cs_value); }()); return cs_0e8660e32789ac5b(cs_arg0); }());
}
}
}
}

// M:system.billing.ui.Receipt.IsConsume
bool cs_f1c17b9cbfeb6ace(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.Receipt.IsConsume",game);
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_59d0e1ae203981e5; }()); auto cs_right = static_cast<std::int32_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); return (cs_left != cs_right); }())) {
return false;
}
return ([&]() -> bool { auto cs_left = ([&]() { auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b713199635bb1058; }()); return pls::generated::cs_d940a557e2a81257(cs_value); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }());
}
}
}
}

// M:system.billing.ui.Receipt.IsTicketProduct
bool cs_b38ac404eaec0f92(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.Receipt.IsTicketProduct",game);
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_10794726de973b56; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_10794726de973b56 = cs_value; return cs_value; }());
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_15f31d4f046b09a8>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_69ca60609ca07561(cs_receiver); }()); auto cs_arg1 = cs_e9c57a349e970656(); return pls::game::cs_contains_string(cs_arg0,cs_arg1); }());})) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::game::cs_require(cs_target)->cs_10794726de973b56 = cs_value; return cs_value; }());
}
}
return ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_10794726de973b56; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }());
}
}
}
}

// M:system.billing.ui.Receipt.Load(java.io.InputStream)
pls::cs::Ref<cs_15f31d4f046b09a8> cs_fb33e792a02d6245(pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_15f31d4f046b09a8();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.Receipt.Load(java.io.InputStream)",game);
{
pls::cs::Ref<cs_15f31d4f046b09a8> v_receipt_2975 = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/ui/Receipt.cs:M:system.billing.ui.Receipt.Load(java.io.InputStream):2985",([&]() -> pls::cs::Ref<cs_15f31d4f046b09a8> { return cs_9c5286d2f0a31d6e(); }()));
([&]() { auto cs_target = v_receipt_2975; auto cs_value = ([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }());}); return pls::generated::cs_7047562b1e051211(cs_value); }()); pls::game::cs_require(cs_target)->cs_faf2053d989419ff = cs_value; return cs_value; }());
([&]() { auto cs_target = v_receipt_2975; auto cs_value = ([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }());}); return pls::generated::cs_7047562b1e051211(cs_value); }()); pls::game::cs_require(cs_target)->cs_519713e3b629623c = cs_value; return cs_value; }());
([&]() { auto cs_target = v_receipt_2975; auto cs_value = ([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());}); return pls::generated::cs_9aee68341f2c87b1(cs_value); }()); pls::game::cs_require(cs_target)->cs_b713199635bb1058 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_receipt_2975; auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());})); pls::game::cs_require(cs_target)->cs_59d0e1ae203981e5 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_receipt_2975; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_5cff189cd1a7d066(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_d6ae59bf543478aa = cs_value; return cs_value; }());
([&]() { auto cs_target = v_receipt_2975; auto cs_value = ([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_faab575a7db8f157(cs_arg0); }());}); return pls::generated::cs_867c5dd84cdc90b1(cs_value); }()); pls::game::cs_require(cs_target)->cs_6541be3d4c391c46 = cs_value; return cs_value; }());
return v_receipt_2975;
}
}
}

// M:system.billing.ui.Receipt.PasswordDecodeToBytes(System.String)
pls::cs::Array<std::uint8_t> cs_942b8b55f6cc61e8(pls::cs::String v_src) { cs_init_15f31d4f046b09a8();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.Receipt.PasswordDecodeToBytes(System.String)",game);
{try{
bool v_pRINT_4232 = pls::generated::cs_4cc76a7a43706693();
pls::cs::run_finally([&]() {{
([&]() { auto cs_value = false; pls::generated::cs_4cc76a7a43706693() = cs_value; return cs_value; }());
pls::cs::Array<std::uint8_t> v_array_4303 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::String cs_arg0 = v_src; return pls::generated::cs_45659d3497c243a5(cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Array<std::uint8_t> cs_arg0 = v_array_4303; pls::cs::Array<std::uint8_t> cs_arg1 = cs_0ab9b09ba01c1501_value; pls::generated::cs_33fd658d45a27eb0(cs_arg0,cs_arg1); }());});
std::int64_t v_num_4378 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { pls::cs::Array<std::uint8_t> cs_arg0 = v_array_4303; auto cs_arg1 = false; return pls::generated::cs_a02a33f2a801ef0d(cs_arg0,cs_arg1); }());});
pls::cs::Array<std::uint8_t> v_array2_4428 = pls::source_allocations::completed("new_array","src/Assembly-CSharp/system/billing/ui/Receipt.cs:M:system.billing.ui.Receipt.PasswordDecodeToBytes(System.String):4437",pls::cs::Array<std::uint8_t>::make(([&]() -> std::int32_t { auto cs_left = (v_array_4303).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::sub_i32(cs_left,cs_right); }())));
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_array_4303); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(v_array2_4428); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (v_array2_4428).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());});
if (([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { pls::cs::Array<std::uint8_t> cs_arg0 = v_array2_4428; return pls::generated::cs_4d36dd315e2118af(cs_arg0); }());}); auto cs_right = v_num_4378; return (cs_left != cs_right); }())) {
throw pls::cs::ReturnFlow<pls::cs::Array<std::uint8_t>>{pls::cs::Array<std::uint8_t>{}};
}
throw pls::cs::ReturnFlow<pls::cs::Array<std::uint8_t>>{pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Array<std::uint8_t> cs_arg0 = v_array2_4428; return pls::generated::cs_76473a48703be5ba(cs_arg0); }());})};
}}, [&]() {
([&]() { auto cs_value = v_pRINT_4232; pls::generated::cs_4cc76a7a43706693() = cs_value; return cs_value; }());
});
}catch(const pls::cs::ReturnFlow<pls::cs::Array<std::uint8_t>>& cs_return){return cs_return.value;}return pls::cs::invalid_return_flow<pls::cs::Array<std::uint8_t>>();}
}
}

// M:system.billing.ui.Receipt.PasswordDecodeToString(System.String)
pls::cs::String cs_0e8660e32789ac5b(pls::cs::String v_src) { cs_init_15f31d4f046b09a8();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.Receipt.PasswordDecodeToString(System.String)",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = pls::cs::RuntimeEncoding::get_UTF8(); auto cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::String cs_arg0 = v_src; return cs_942b8b55f6cc61e8(cs_arg0); }()); return pls::game::cs_require(cs_receiver)->GetString(cs_arg0); }());});
}
}
}

// M:system.billing.ui.Receipt.PasswordEncode(System.Byte[])
pls::cs::String cs_74c5b1f087d67cd2(pls::cs::Array<std::uint8_t> v_src) { cs_init_15f31d4f046b09a8();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.Receipt.PasswordEncode(System.Byte[])",game);
{try{
bool v_pRINT_3629 = pls::generated::cs_4cc76a7a43706693();
std::int32_t v_num_3658 = (v_src).length();
pls::cs::run_finally([&]() {{
([&]() { auto cs_value = false; pls::generated::cs_4cc76a7a43706693() = cs_value; return cs_value; }());
pls::cs::Array<std::uint8_t> v_array_3725 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Array<std::uint8_t> cs_arg0 = v_src; return pls::generated::cs_e44260e02e247abd(cs_arg0); }());});
([&]() { auto cs_value = pls::source_allocations::completed("new_array","src/Assembly-CSharp/system/billing/ui/Receipt.cs:M:system.billing.ui.Receipt.PasswordEncode(System.Byte[]):3769",pls::cs::Array<std::uint8_t>::make(([&]() -> std::int32_t { auto cs_left = (v_array_3725).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::add_i32(cs_left,cs_right); }()))); v_src = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { std::int64_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { pls::cs::Array<std::uint8_t> cs_arg0 = v_array_3725; return pls::generated::cs_4d36dd315e2118af(cs_arg0); }());}); auto cs_arg1 = false; return pls::generated::cs_afc3ba06e9b75538(cs_arg0,cs_arg1); }());})); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(v_src); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_array_3725); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(v_src); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); std::int32_t cs_arg4 = (v_array_3725).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Array<std::uint8_t> cs_arg0 = v_src; pls::cs::Array<std::uint8_t> cs_arg1 = cs_0ab9b09ba01c1501_value; pls::generated::cs_17e1939c126befd5(cs_arg0,cs_arg1); }());});
throw pls::cs::ReturnFlow<pls::cs::String>{pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Array<std::uint8_t> cs_arg0 = v_src; return pls::generated::cs_7f8edd4d76f97c06(cs_arg0); }());})};
}}, [&]() {
([&]() { auto cs_value = v_pRINT_3629; pls::generated::cs_4cc76a7a43706693() = cs_value; return cs_value; }());
});
}catch(const pls::cs::ReturnFlow<pls::cs::String>& cs_return){return cs_return.value;}return pls::cs::invalid_return_flow<pls::cs::String>();}
}
}

// M:system.billing.ui.Receipt.PasswordEncode(System.String)
pls::cs::String cs_09009d99b892ed75(pls::cs::String v_src) { cs_init_15f31d4f046b09a8();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.Receipt.PasswordEncode(System.String)",game);
{
return ([&]() -> pls::cs::String { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::String cs_arg0 = v_src; return pls::generated::cs_a8e45b955b78e04d(cs_arg0); }()); return cs_74c5b1f087d67cd2(cs_arg0); }());
}
}
}

// M:system.billing.ui.Receipt.Save(java.io.OutputStream)
void cs_aafe7f3e366450c4(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_stream) { cs_init_15f31d4f046b09a8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.Receipt.Save(java.io.OutputStream)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_faf2053d989419ff; }()); pls::generated::cs_be114d9236ab5d44(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_519713e3b629623c; }()); pls::generated::cs_be114d9236ab5d44(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; std::int32_t cs_arg1 = ([&]() { auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b713199635bb1058; }()); return pls::generated::cs_d940a557e2a81257(cs_value); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_59d0e1ae203981e5; }())); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; bool cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d6ae59bf543478aa; }()); pls::generated::cs_7c02733ae541274e(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; std::int64_t cs_arg1 = ([&]() { auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6541be3d4c391c46; }()); return pls::generated::cs_b0c8f3d2fe942bf1(cs_value); }()); pls::generated::cs_6c6af002987d1423(cs_arg0,cs_arg1); }());});
}
}
}
}
}
