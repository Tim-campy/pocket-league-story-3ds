// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_0286a0dbe9da0b33 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_0286a0dbe9da0b33)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.ui.Dialog";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<pls::kairo::Font> cs_6e5c685dce0d605a{};
pls::cs::String cs_ef63d4d4b6ab550f{};
pls::cs::String cs_7f418c9c27e5c628{};
pls::cs::Array<pls::cs::String> cs_7c40c7d83d91cf74{};
std::int32_t cs_1931e59a708b44ff{};
std::int32_t cs_71eb51b3f792969a{};
pls::cs::String cs_49c162566c3d94ef{};
};

void cs_init_0286a0dbe9da0b33();

pls::cs::Ref<cs_0286a0dbe9da0b33> cs_63545d46c6887c12(std::int32_t v_type,pls::cs::String v_title);

void cs_63545d46c6887c12_init(pls::cs::Ref<cs_0286a0dbe9da0b33> cs_this,std::int32_t v_type,pls::cs::String v_title);

void cs_f93da55cc1dd9ec3(pls::cs::Ref<cs_0286a0dbe9da0b33> cs_this,pls::cs::Array<pls::cs::String> v_buttons);

void cs_d53653cbf2469429(pls::cs::Ref<cs_0286a0dbe9da0b33> cs_this,pls::cs::String v_msg);

std::int32_t cs_1727d3688d4d03e6(pls::cs::Ref<cs_0286a0dbe9da0b33> cs_this);
}
