// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_a42daea58251b089 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_a42daea58251b089)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="ToString")return "M:system.billing.util.Purchase.ToString";if(slot=="GetHashCode")return "M:system.billing.util.Purchase.GetHashCode";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.billing.util.Purchase";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_d753206820f21a8d{};
pls::cs::String cs_a5fc6a5046dc6a62{};
pls::cs::String cs_85b5e0881697c2a4{};
pls::cs::String cs_4302441eac8005bc{};
std::int64_t cs_406b12762a239146{};
std::int32_t cs_6490fd19ca9cf865{};
pls::cs::String cs_6af4ef5d58ee8876{};
pls::cs::String cs_1293600bd46db9ba{};
pls::cs::String cs_2c5a071db61acb18{};
pls::cs::String cs_576f47efafc565de{};
virtual pls::cs::String ToString();
virtual std::int32_t GetHashCode();
};

void cs_init_a42daea58251b089();

pls::cs::Ref<cs_a42daea58251b089> cs_a9e6857e64b08e0d();

void cs_a9e6857e64b08e0d_init(pls::cs::Ref<cs_a42daea58251b089> cs_this);

pls::cs::Ref<cs_a42daea58251b089> cs_f7abaa335be13394(pls::cs::String v_itemType,pls::cs::String v_jsonPurchaseInfo,pls::cs::String v_signature);

void cs_f7abaa335be13394_init(pls::cs::Ref<cs_a42daea58251b089> cs_this,pls::cs::String v_itemType,pls::cs::String v_jsonPurchaseInfo,pls::cs::String v_signature);

pls::cs::String cs_e619522a0176fc33(pls::cs::Ref<cs_a42daea58251b089> cs_this);

std::int32_t cs_0d5fadde939d8f48(pls::cs::Ref<cs_a42daea58251b089> cs_this);

pls::cs::String cs_835e52407836b201(pls::cs::Ref<cs_a42daea58251b089> cs_this);

pls::cs::String cs_30a95d92bd1ce70c(pls::cs::Ref<cs_a42daea58251b089> cs_this);

pls::cs::String cs_d4114f5e7f34cc57(pls::cs::Ref<cs_a42daea58251b089> cs_this);

pls::cs::String cs_a07baeaaa234184e(pls::cs::Ref<cs_a42daea58251b089> cs_this);

std::int32_t cs_dd87274ce185a4e4(pls::cs::Ref<cs_a42daea58251b089> cs_this);

std::int64_t cs_ebb3a05c47178475(pls::cs::Ref<cs_a42daea58251b089> cs_this);

pls::cs::String cs_cedfa91be2f68a03(pls::cs::Ref<cs_a42daea58251b089> cs_this);

pls::cs::String cs_e57c9ca2bf077da0(pls::cs::Ref<cs_a42daea58251b089> cs_this);

pls::cs::String cs_f88753a6a366d95c(pls::cs::Ref<cs_a42daea58251b089> cs_this);

pls::cs::String cs_c5dc85edf0b8af25(pls::cs::String v_json,pls::cs::String v_key);

pls::cs::String cs_eb2c53bbee32fa6a(pls::cs::Ref<cs_a42daea58251b089> cs_this);
}
