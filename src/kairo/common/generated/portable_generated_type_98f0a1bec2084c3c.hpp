// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {

struct cs_98f0a1bec2084c3c : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_98f0a1bec2084c3c)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.util.Language+LangPackFormat";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_a0cee6b194388bb1{};
char16_t cs_96513160b9f9c6b8{};
char16_t cs_37e0eb7044938cba{};
};
}
