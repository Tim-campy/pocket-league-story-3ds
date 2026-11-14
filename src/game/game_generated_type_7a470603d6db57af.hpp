// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_7a470603d6db57af : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_7a470603d6db57af)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.ad.AdMobView";}
std::string managed_type_name()const override{return source_managed_type_name();}
};

void cs_init_7a470603d6db57af();

std::int32_t& cs_d9c18e1b80629b14();

std::int32_t cs_8919cf419e6c7708();

bool cs_e3e9b6fd73c21e45(pls::cs::Ref<cs_7a470603d6db57af> cs_this);
}
