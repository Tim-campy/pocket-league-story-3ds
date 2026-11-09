// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_5ad2213598dfcd5d.hpp"
namespace pls::game {

struct cs_17bc7a5b28fcdc2a : cs_5ad2213598dfcd5d {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_17bc7a5b28fcdc2a)||target==typeid(cs_5ad2213598dfcd5d)||cs_5ad2213598dfcd5d::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return cs_5ad2213598dfcd5d::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.panel.Button";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_ba2d5e888232cb91{};
};

void cs_init_17bc7a5b28fcdc2a();

pls::cs::Ref<cs_17bc7a5b28fcdc2a> cs_9474c24dbd210b11(pls::cs::String v_text);

void cs_9474c24dbd210b11_init(pls::cs::Ref<cs_17bc7a5b28fcdc2a> cs_this,pls::cs::String v_text);

std::int32_t cs_0acae95f4bbbd7a0(pls::cs::Ref<cs_17bc7a5b28fcdc2a> cs_this);

void cs_f70438774efbbba8(pls::cs::Ref<cs_17bc7a5b28fcdc2a> cs_this,std::int32_t v_x,std::int32_t v_y);
}
