// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_8a422f6f9c1bd55e : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_8a422f6f9c1bd55e)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "BuildInfos.BuildInfo";}
std::string managed_type_name()const override{return source_managed_type_name();}
};

void cs_init_8a422f6f9c1bd55e();

pls::cs::Ref<cs_8a422f6f9c1bd55e> cs_ddcc638d2dde3014();

void cs_ddcc638d2dde3014_init(pls::cs::Ref<cs_8a422f6f9c1bd55e> cs_this);
}
