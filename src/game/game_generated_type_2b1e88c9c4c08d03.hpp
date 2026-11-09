// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_b08d770c239489bf.hpp"
namespace pls::game {

struct cs_2b1e88c9c4c08d03 : cs_b08d770c239489bf {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_2b1e88c9c4c08d03)||target==typeid(cs_b08d770c239489bf)||cs_b08d770c239489bf::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return cs_b08d770c239489bf::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "data.MapchipMain";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_98106b6cb729b9c3{};
std::int32_t cs_ac9d285a64618158{};
std::int32_t cs_73e52a9b0a96618b{};
std::int32_t cs_b10911576ec578c8{};
};

void cs_init_2b1e88c9c4c08d03();

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_b8ecc14dac492cc0();

pls::cs::Ref<cs_75707aa3f1629c85>& cs_d0f79f4e077f54c8();

pls::cs::Ref<cs_2b1e88c9c4c08d03> cs_4f6ca96b9c507342();

void cs_4f6ca96b9c507342_init(pls::cs::Ref<cs_2b1e88c9c4c08d03> cs_this);

pls::cs::Ref<cs_2b1e88c9c4c08d03> cs_3a96fe880b0e2f44(pls::cs::String v_src);

void cs_3a96fe880b0e2f44_init(pls::cs::Ref<cs_2b1e88c9c4c08d03> cs_this,pls::cs::String v_src);

void cs_2a03f976d843a772(pls::cs::Ref<cs_2b1e88c9c4c08d03> cs_this,pls::cs::String v_src);
}
