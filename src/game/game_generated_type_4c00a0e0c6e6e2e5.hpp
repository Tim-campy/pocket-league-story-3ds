// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_5ad2213598dfcd5d.hpp"
namespace pls::game {

struct cs_4c00a0e0c6e6e2e5 : cs_5ad2213598dfcd5d {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_4c00a0e0c6e6e2e5)||target==typeid(cs_5ad2213598dfcd5d)||cs_5ad2213598dfcd5d::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return cs_5ad2213598dfcd5d::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.panel.Label";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_c02206d24c9889b2{};
};

void cs_init_4c00a0e0c6e6e2e5();

pls::cs::Ref<cs_4c00a0e0c6e6e2e5> cs_80617835aa0d7a16(pls::cs::String v_text);

void cs_80617835aa0d7a16_init(pls::cs::Ref<cs_4c00a0e0c6e6e2e5> cs_this,pls::cs::String v_text);

std::int32_t cs_19774412e61c6647(pls::cs::Ref<cs_4c00a0e0c6e6e2e5> cs_this);

std::int32_t cs_12272e051762a684(pls::cs::Ref<cs_4c00a0e0c6e6e2e5> cs_this);

void cs_e4a038175824c8ee(pls::cs::Ref<cs_4c00a0e0c6e6e2e5> cs_this,std::int32_t v_x,std::int32_t v_y);
}
