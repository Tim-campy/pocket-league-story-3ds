// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_b08d770c239489bf.hpp"
namespace pls::game {

struct cs_f991feb74054b6df : cs_b08d770c239489bf {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_f991feb74054b6df)||target==typeid(cs_b08d770c239489bf)||cs_b08d770c239489bf::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return cs_b08d770c239489bf::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "data.MapchipMatch";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_5b8cd05d34b43957{};
std::int32_t cs_461cff8c28899923{};
std::int32_t cs_04af799ba0be8e26{};
};

void cs_init_f991feb74054b6df();

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_2f1cf2722aa1e793();

pls::cs::Ref<cs_75707aa3f1629c85>& cs_d4bb3617e4a9e852();

pls::cs::Ref<cs_f991feb74054b6df> cs_dfca31a9f728d5e0();

void cs_dfca31a9f728d5e0_init(pls::cs::Ref<cs_f991feb74054b6df> cs_this);

pls::cs::Ref<cs_f991feb74054b6df> cs_578ba3d559a84892(pls::cs::String v_src);

void cs_578ba3d559a84892_init(pls::cs::Ref<cs_f991feb74054b6df> cs_this,pls::cs::String v_src);

void cs_6f4cdae275402b8b(pls::cs::Ref<cs_f991feb74054b6df> cs_this,pls::cs::String v_src);
}
