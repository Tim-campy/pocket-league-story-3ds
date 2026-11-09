// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_70c4092da329e972 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_70c4092da329e972)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.analytics.AnalyticsTracker+AnalyticsData";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_dd489d151d299036{};
std::int32_t cs_d06132c0c6e80bc6{};
std::int64_t cs_aacdf84efc9d168d{};
};

void cs_init_70c4092da329e972();

pls::cs::Ref<cs_70c4092da329e972> cs_d18c126e68c3c396();

void cs_d18c126e68c3c396_init(pls::cs::Ref<cs_70c4092da329e972> cs_this);

pls::cs::Ref<cs_70c4092da329e972> cs_626981c8ca17bde5(pls::cs::String v_url);

void cs_626981c8ca17bde5_init(pls::cs::Ref<cs_70c4092da329e972> cs_this,pls::cs::String v_url);
}
