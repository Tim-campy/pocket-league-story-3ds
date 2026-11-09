// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {

struct cs_7254e4706a01e4e7 : pls::cs::ExceptionObject {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_7254e4706a01e4e7)||target==typeid(pls::cs::ExceptionObject)||pls::cs::ExceptionObject::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::ExceptionObject::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.io.ConnectionException";}
std::string managed_type_name()const override{return source_managed_type_name();}
};

void cs_init_7254e4706a01e4e7();

std::int32_t cs_bf1ddcf69d442d48(pls::cs::Ref<cs_7254e4706a01e4e7> cs_this);
}
