// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_cd97eee87b3216c4.hpp"
namespace pls::game {

struct cs_23a020152d468724 : cs_cd97eee87b3216c4 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_23a020152d468724)||target==typeid(cs_cd97eee87b3216c4)||cs_cd97eee87b3216c4::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="ToString")return "M:kairo.unity.util.NotPermitException.ToString";return cs_cd97eee87b3216c4::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.util.NotPermitException";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_0e62fcf0f027f737{};
virtual pls::cs::String ToString();
};

void cs_init_23a020152d468724();

pls::cs::String cs_959efe4557f9babf(pls::cs::Ref<cs_23a020152d468724> cs_this);
}
