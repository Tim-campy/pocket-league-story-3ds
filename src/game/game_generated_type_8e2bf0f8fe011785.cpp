// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_8e2bf0f8fe011785.hpp"
#include "generated/portable_generated_type_5098bfda9cf65745.hpp"
#include "generated/portable_generated_type_c4521f4960c4f908.hpp"
#include "generated/portable_generated_type_e7a5499b363ef51b.hpp"
#include "generated/portable_generated_type_ea324a0bbfe717fe.hpp"
namespace pls::game {

void cs_8e2bf0f8fe011785::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_1a5ce6d62f4773c6,visitor);pls::cs::trace_value(cs_2b580027dd662ff5,visitor);pls::cs::trace_value(cs_f1c6c21012307803,visitor);pls::cs::trace_value(cs_004158f701fd286d,visitor);pls::cs::trace_value(cs_3b077329e09687d5,visitor);pls::cs::trace_value(cs_cf10600a0f2e10ac,visitor);pls::cs::trace_value(cs_b85e706eedf54802,visitor);}

void cs_8e2bf0f8fe011785::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_1a5ce6d62f4773c6);pls::cs::release_value(cs_2b580027dd662ff5);pls::cs::release_value(cs_f1c6c21012307803);pls::cs::release_value(cs_004158f701fd286d);pls::cs::release_value(cs_3b077329e09687d5);pls::cs::release_value(cs_cf10600a0f2e10ac);pls::cs::release_value(cs_b85e706eedf54802);}

pls::cs::String cs_8e2bf0f8fe011785::ToString() {return cs_1152b3bafa6371e3(std::static_pointer_cast<cs_8e2bf0f8fe011785>(shared_from_this()));}

void cs_8e2bf0f8fe011785::cs_virtual_8d925e3b30750eb6(pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_stream) {cs_5372ec5ae5ecedc0(std::static_pointer_cast<cs_8e2bf0f8fe011785>(shared_from_this()),v_stream);}

void cs_8e2bf0f8fe011785::cs_virtual_f2ab7f0a88763f04(pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) {cs_c147ab1af9f1939f(std::static_pointer_cast<cs_8e2bf0f8fe011785>(shared_from_this()),v_stream);}

void cs_init_8e2bf0f8fe011785(){static pls::cs::TypeInitState state;state.run("kairo.unity.system.payment.PaymentDataRecord",[](){

});}

// M:kairo.unity.system.payment.PaymentDataRecord.#ctor(System.String,System.String,System.Int32,System.Int32)
pls::cs::Ref<cs_8e2bf0f8fe011785> cs_2f2e7f50616852fe(pls::cs::String v_productId,pls::cs::String v_orderId,std::int32_t v_amount,std::int32_t v_actCode) { cs_init_8e2bf0f8fe011785();
{ auto cs_this = pls::cs::make_ref<cs_8e2bf0f8fe011785>(); cs_2f2e7f50616852fe_init(cs_this,v_productId,v_orderId,v_amount,v_actCode); return cs_this; }
}

void cs_2f2e7f50616852fe_init(pls::cs::Ref<cs_8e2bf0f8fe011785> cs_this,pls::cs::String v_productId,pls::cs::String v_orderId,std::int32_t v_amount,std::int32_t v_actCode) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.payment.PaymentDataRecord.#ctor(System.String,System.String,System.Int32,System.Int32)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_productId; pls::game::cs_require(cs_target)->cs_1a5ce6d62f4773c6 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_orderId; pls::game::cs_require(cs_target)->cs_2b580027dd662ff5 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_amount; pls::game::cs_require(cs_target)->cs_cf10600a0f2e10ac = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_actCode; pls::game::cs_require(cs_target)->cs_b85e706eedf54802 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_3b077329e09687d5 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::String(std::u16string(u"\x0020" u"",1)); pls::game::cs_require(cs_target)->cs_f1c6c21012307803 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_004158f701fd286d = cs_value; return cs_value; }());
}
}
}

// M:kairo.unity.system.payment.PaymentDataRecord.Deserialize(java.io.InputStream)
void cs_c147ab1af9f1939f(pls::cs::Ref<cs_8e2bf0f8fe011785> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_8e2bf0f8fe011785();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.payment.PaymentDataRecord.Deserialize(java.io.InputStream)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_1a5ce6d62f4773c6 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_2b580027dd662ff5 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_f1c6c21012307803 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_faab575a7db8f157(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_004158f701fd286d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_5cff189cd1a7d066(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_3b077329e09687d5 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_cf10600a0f2e10ac = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_b85e706eedf54802 = cs_value; return cs_value; }());
}
}
}
}

// M:kairo.unity.system.payment.PaymentDataRecord.GetOrderId
pls::cs::String cs_68d475335d41208d(pls::cs::Ref<cs_8e2bf0f8fe011785> cs_this) { cs_init_8e2bf0f8fe011785();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.payment.PaymentDataRecord.GetOrderId",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2b580027dd662ff5; }());
}
}
}
}

// M:kairo.unity.system.payment.PaymentDataRecord.GetProductId
pls::cs::String cs_1b2e094e56480170(pls::cs::Ref<cs_8e2bf0f8fe011785> cs_this) { cs_init_8e2bf0f8fe011785();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.payment.PaymentDataRecord.GetProductId",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1a5ce6d62f4773c6; }());
}
}
}
}

// M:kairo.unity.system.payment.PaymentDataRecord.Serialize(java.io.OutputStream)
void cs_5372ec5ae5ecedc0(pls::cs::Ref<cs_8e2bf0f8fe011785> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_stream) { cs_init_8e2bf0f8fe011785();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.payment.PaymentDataRecord.Serialize(java.io.OutputStream)",kairo);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; pls::cs::String cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1a5ce6d62f4773c6; }()); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; pls::cs::String cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2b580027dd662ff5; }()); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; pls::cs::String cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f1c6c21012307803; }()); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; std::int64_t cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_004158f701fd286d; }()); pls::generated::cs_6c6af002987d1423(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; bool cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3b077329e09687d5; }()); pls::generated::cs_7c02733ae541274e(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; std::int32_t cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf10600a0f2e10ac; }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_stream; std::int32_t cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b85e706eedf54802; }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
}
}
}
}

// M:kairo.unity.system.payment.PaymentDataRecord.SetTimeStamp(System.Int64)
void cs_a9f03e15b73f7505(pls::cs::Ref<cs_8e2bf0f8fe011785> cs_this,std::int64_t v_time) { cs_init_8e2bf0f8fe011785();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.payment.PaymentDataRecord.SetTimeStamp(System.Int64)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_time; pls::game::cs_require(cs_target)->cs_004158f701fd286d = cs_value; return cs_value; }());
}
}
}
}

// M:kairo.unity.system.payment.PaymentDataRecord.ToString
pls::cs::String cs_1152b3bafa6371e3(pls::cs::Ref<cs_8e2bf0f8fe011785> cs_this) { cs_init_8e2bf0f8fe011785();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.payment.PaymentDataRecord.ToString",kairo);
{
return ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_8e2bf0f8fe011785>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1b2e094e56480170(cs_receiver); }()); auto cs_right = pls::cs::String(std::u16string(u"\x005b" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_004158f701fd286d; }())); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x005d" u"\x000a" u"",2)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_8e2bf0f8fe011785>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_68d475335d41208d(cs_receiver); }()); return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
}
}
