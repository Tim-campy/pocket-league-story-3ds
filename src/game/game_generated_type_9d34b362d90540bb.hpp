// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_9d34b362d90540bb : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_9d34b362d90540bb)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "main.AppData+stringErrorCode";}
std::string managed_type_name()const override{return source_managed_type_name();}
};

void cs_init_9d34b362d90540bb();

pls::cs::Ref<cs_9d34b362d90540bb> cs_d1b85d888761ab9c();

void cs_d1b85d888761ab9c_init(pls::cs::Ref<cs_9d34b362d90540bb> cs_this);
}
