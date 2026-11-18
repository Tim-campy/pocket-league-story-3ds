// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_f8053a3d49df91b7 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_f8053a3d49df91b7)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "<global namespace>.TJPlacement";}
std::string managed_type_name()const override{return source_managed_type_name();}
};

void cs_init_f8053a3d49df91b7();

pls::cs::Ref<cs_f8053a3d49df91b7> cs_ed3f157af0fe9b57();

void cs_ed3f157af0fe9b57_init(pls::cs::Ref<cs_f8053a3d49df91b7> cs_this);
}
