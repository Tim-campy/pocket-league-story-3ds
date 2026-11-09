// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_b169f360ee9f1108 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_b169f360ee9f1108)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="ToString")return "M:system.billing.util.SkuDetails.ToString";if(slot=="GetHashCode")return "M:system.billing.util.SkuDetails.GetHashCode";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.billing.util.SkuDetails";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_e0a5bfe7faf6c07e{};
pls::cs::String cs_47aad339f248ff81{};
pls::cs::String cs_6cbd485f86bf5859{};
pls::cs::String cs_33c621bd4fd10d07{};
pls::cs::String cs_5035eb310e4a8d61{};
pls::cs::String cs_c8cc33ddf6dcb591{};
pls::cs::String cs_43141e651b3c1995{};
virtual pls::cs::String ToString();
virtual std::int32_t GetHashCode();
};

void cs_init_b169f360ee9f1108();

pls::cs::Ref<cs_b169f360ee9f1108> cs_fdfacb67cda123d7();

void cs_fdfacb67cda123d7_init(pls::cs::Ref<cs_b169f360ee9f1108> cs_this);

pls::cs::Ref<cs_b169f360ee9f1108> cs_943696d8c8e0a6d0(pls::cs::String v_itemType,pls::cs::String v_jsonSkuDetails);

void cs_943696d8c8e0a6d0_init(pls::cs::Ref<cs_b169f360ee9f1108> cs_this,pls::cs::String v_itemType,pls::cs::String v_jsonSkuDetails);

pls::cs::Ref<cs_b169f360ee9f1108> cs_26ea8b67da16b42f(pls::cs::String v_jsonSkuDetails);

void cs_26ea8b67da16b42f_init(pls::cs::Ref<cs_b169f360ee9f1108> cs_this,pls::cs::String v_jsonSkuDetails);

pls::cs::String cs_007c055a377a3713(pls::cs::Ref<cs_b169f360ee9f1108> cs_this);

std::int32_t cs_bd48f39de19516d5(pls::cs::Ref<cs_b169f360ee9f1108> cs_this);

pls::cs::String cs_f2973c21b56d3d36(pls::cs::Ref<cs_b169f360ee9f1108> cs_this);

pls::cs::String cs_6f026fa24daeff2d(pls::cs::Ref<cs_b169f360ee9f1108> cs_this);

pls::cs::String cs_35247c009c4a912a(pls::cs::Ref<cs_b169f360ee9f1108> cs_this);

pls::cs::String cs_8859afa17c7cf09c(pls::cs::Ref<cs_b169f360ee9f1108> cs_this);

pls::cs::String cs_edc7a5099fbaba03(pls::cs::String v_json,pls::cs::String v_key);

pls::cs::String cs_3fc374a8a3e0f24e(pls::cs::Ref<cs_b169f360ee9f1108> cs_this);
}
