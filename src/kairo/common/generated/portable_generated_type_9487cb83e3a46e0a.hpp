// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {

struct cs_9487cb83e3a46e0a : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_9487cb83e3a46e0a)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.util.Language+LangPackRecord";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_c85df0bf60809784{};
pls::cs::String cs_05293b75838ad9b4{};
pls::cs::List<cs_ab1b1085a7ab32b9> cs_11bb01ff7e196717{};
pls::cs::List<pls::cs::String> cs_eacffaa0f8c3f949{};
pls::cs::List<pls::cs::String> cs_da40773ef2f3923c{};
};
}
