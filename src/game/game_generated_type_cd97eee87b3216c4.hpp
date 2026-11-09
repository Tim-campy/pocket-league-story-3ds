// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_cd97eee87b3216c4 : pls::cs::ExceptionObject {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_cd97eee87b3216c4)||target==typeid(pls::cs::ExceptionObject)||pls::cs::ExceptionObject::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::ExceptionObject::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.util.KairoException";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_5e52c7bad466e5ea{};
};

void cs_init_cd97eee87b3216c4();

pls::cs::String cs_1b62bb3466e191a0(pls::cs::Ref<cs_cd97eee87b3216c4> cs_this);
}
