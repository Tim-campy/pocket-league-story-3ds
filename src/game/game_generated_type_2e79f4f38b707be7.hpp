// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_2e79f4f38b707be7 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_2e79f4f38b707be7)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "analytics.AnalyticsTracker";}
std::string managed_type_name()const override{return source_managed_type_name();}
};

void cs_init_2e79f4f38b707be7();

pls::cs::Ref<cs_2e79f4f38b707be7> cs_7b06faa19a93d0a8();

void cs_7b06faa19a93d0a8_init(pls::cs::Ref<cs_2e79f4f38b707be7> cs_this);

void cs_ff6aeae8eb9c621a();

void cs_9fc47ec3093254f0(bool v_packageName,pls::cs::Array<pls::cs::String> v_p);

void cs_2efe36383f878d36(bool v_packageName,pls::cs::String v_id,pls::cs::Array<pls::cs::String> v_p);
}
