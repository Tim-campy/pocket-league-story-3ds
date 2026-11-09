// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_27b8baf7307cff9f : pls::cs::ExceptionObject {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_27b8baf7307cff9f)||target==typeid(pls::cs::ExceptionObject)||pls::cs::ExceptionObject::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::ExceptionObject::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.ui.UIException";}
std::string managed_type_name()const override{return source_managed_type_name();}
};

void cs_init_27b8baf7307cff9f();

std::int32_t cs_31cf637794688433(pls::cs::Ref<cs_27b8baf7307cff9f> cs_this);
}
