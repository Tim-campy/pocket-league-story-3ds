// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_29293d4d6e77d3bc : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_29293d4d6e77d3bc)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "game.MapObject";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_adc35de421fe3eef{};
pls::cs::Array<std::int32_t> cs_1f0b9be8292dcf69{};
};

void cs_init_29293d4d6e77d3bc();

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_d3541fa57bc06660();

pls::cs::Ref<cs_75707aa3f1629c85>& cs_7ddc12ff1c507889();

pls::cs::Ref<cs_29293d4d6e77d3bc> cs_cdf4fc1f77c254d3();

void cs_cdf4fc1f77c254d3_init(pls::cs::Ref<cs_29293d4d6e77d3bc> cs_this);

void cs_022bc790768beecd(pls::cs::Ref<cs_29293d4d6e77d3bc> cs_this);
}
