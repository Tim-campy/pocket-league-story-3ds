// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {

struct cs_42d69496680e17fc : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_42d69496680e17fc)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "java.lang.JRuntime";}
std::string managed_type_name()const override{return source_managed_type_name();}
};

void cs_init_42d69496680e17fc();

pls::cs::Ref<cs_42d69496680e17fc>& cs_c1bf1420af51dac4();

pls::cs::Ref<cs_42d69496680e17fc> cs_8fb57d859eee275a();

void cs_8fb57d859eee275a_init(pls::cs::Ref<cs_42d69496680e17fc> cs_this);

void cs_b8f5dfbc2bf26f5f(pls::cs::Ref<cs_42d69496680e17fc> cs_this);

pls::cs::Ref<cs_42d69496680e17fc> cs_232fa563e68dcabb();
}
