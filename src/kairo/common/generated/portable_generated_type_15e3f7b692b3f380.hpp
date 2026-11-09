// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
#include "portable_generated_type_67cd241ab51652f1.hpp"
namespace pls::generated {

struct cs_15e3f7b692b3f380 : cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>> {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_15e3f7b692b3f380)||target==typeid(cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>)||cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.util.FastVector";}
std::string managed_type_name()const override{return source_managed_type_name();}
};

void cs_init_15e3f7b692b3f380();

pls::cs::Ref<cs_15e3f7b692b3f380> cs_617649d3cca73756();

void cs_617649d3cca73756_init(pls::cs::Ref<cs_15e3f7b692b3f380> cs_this);
}
