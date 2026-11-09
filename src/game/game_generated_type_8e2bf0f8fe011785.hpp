// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "generated/portable_generated_type_c4521f4960c4f908.hpp"
namespace pls::game {

struct cs_8e2bf0f8fe011785 : pls::cs::Object, pls::generated::cs_c4521f4960c4f908 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_8e2bf0f8fe011785)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target)||target==typeid(pls::generated::cs_c4521f4960c4f908);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="ToString")return "M:kairo.unity.system.payment.PaymentDataRecord.ToString";if(slot=="cs_virtual_8d925e3b30750eb6")return "M:kairo.unity.system.payment.PaymentDataRecord.Serialize(java.io.OutputStream)";if(slot=="cs_virtual_f2ab7f0a88763f04")return "M:kairo.unity.system.payment.PaymentDataRecord.Deserialize(java.io.InputStream)";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.system.payment.PaymentDataRecord";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_1a5ce6d62f4773c6{};
pls::cs::String cs_2b580027dd662ff5{};
pls::cs::String cs_f1c6c21012307803{};
std::int64_t cs_004158f701fd286d{};
bool cs_3b077329e09687d5{};
std::int32_t cs_cf10600a0f2e10ac{};
std::int32_t cs_b85e706eedf54802{};
virtual pls::cs::String ToString();
virtual void cs_virtual_8d925e3b30750eb6(pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_stream);
virtual void cs_virtual_f2ab7f0a88763f04(pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);
};

void cs_init_8e2bf0f8fe011785();

pls::cs::Ref<cs_8e2bf0f8fe011785> cs_2f2e7f50616852fe(pls::cs::String v_productId,pls::cs::String v_orderId,std::int32_t v_amount,std::int32_t v_actCode);

void cs_2f2e7f50616852fe_init(pls::cs::Ref<cs_8e2bf0f8fe011785> cs_this,pls::cs::String v_productId,pls::cs::String v_orderId,std::int32_t v_amount,std::int32_t v_actCode);

void cs_c147ab1af9f1939f(pls::cs::Ref<cs_8e2bf0f8fe011785> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);

pls::cs::String cs_68d475335d41208d(pls::cs::Ref<cs_8e2bf0f8fe011785> cs_this);

pls::cs::String cs_1b2e094e56480170(pls::cs::Ref<cs_8e2bf0f8fe011785> cs_this);

void cs_5372ec5ae5ecedc0(pls::cs::Ref<cs_8e2bf0f8fe011785> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_stream);

void cs_a9f03e15b73f7505(pls::cs::Ref<cs_8e2bf0f8fe011785> cs_this,std::int64_t v_time);

pls::cs::String cs_1152b3bafa6371e3(pls::cs::Ref<cs_8e2bf0f8fe011785> cs_this);
}
