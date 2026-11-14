// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_757516ce190cf813 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_757516ce190cf813)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="ToString")return "M:kairo.unity.surface.TouchEvent.ToString";if(slot=="GetHashCode")return "M:kairo.unity.surface.TouchEvent.GetHashCode";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.surface.TouchEvent";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_4c4f6c2ffd41c9ca{};
std::int32_t cs_514f5ce520685c7d{};
std::int32_t cs_5d55f15261994422{};
std::int32_t cs_c6683c02c87c987a{};
std::int32_t cs_62b3f795cc04ca10{};
float cs_4760729595bf56db{};
float cs_34b944f664f45179{};
std::int32_t cs_c0fba19991e5dbf1{};
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_8d755a9f926cf434{};
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_1e8c6984f2271d7b{};
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_613db60c2c58fddc{};
virtual pls::cs::String ToString();
virtual std::int32_t GetHashCode();
};

void cs_init_757516ce190cf813();

pls::cs::Ref<cs_757516ce190cf813> cs_f7e61b586cae64ba();

void cs_f7e61b586cae64ba_init(pls::cs::Ref<cs_757516ce190cf813> cs_this);

std::int32_t cs_cffdde71a559d83c(pls::cs::Ref<cs_757516ce190cf813> cs_this);

void cs_76be1a4ec43b41ef(pls::cs::Ref<cs_757516ce190cf813> cs_this);

bool cs_b85e74354de5635b(pls::cs::Ref<cs_757516ce190cf813> cs_this);

bool cs_f8630b89ac30a6e6(std::int32_t v_type);

pls::cs::String cs_94ac3fd922c20ee0(pls::cs::Ref<cs_757516ce190cf813> cs_this);
}
