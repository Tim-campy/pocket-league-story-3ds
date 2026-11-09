// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_5ad2213598dfcd5d : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_5ad2213598dfcd5d)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.panel.Component";}
std::string managed_type_name()const override{return source_managed_type_name();}
};

void cs_init_5ad2213598dfcd5d();

pls::cs::Ref<cs_5ad2213598dfcd5d> cs_123805c6bd81d455();

void cs_123805c6bd81d455_init(pls::cs::Ref<cs_5ad2213598dfcd5d> cs_this);
}
