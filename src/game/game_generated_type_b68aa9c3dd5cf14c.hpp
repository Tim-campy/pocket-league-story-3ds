// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_b08d770c239489bf.hpp"
namespace pls::game {

struct cs_b68aa9c3dd5cf14c : cs_b08d770c239489bf {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_b68aa9c3dd5cf14c)||target==typeid(cs_b08d770c239489bf)||cs_b08d770c239489bf::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return cs_b08d770c239489bf::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "data.LeagueData";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_8a2ad2dcf58e1c56{};
pls::cs::String cs_3ca58cba0998f5c4{};
pls::cs::Array<std::int32_t> cs_ec89f9453fa3b914{};
pls::cs::Array<std::int32_t> cs_d3536706834ee1d4{};
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_f0f1aa801a3544b1{};
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_ba17edb1588381e4{};
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_228c586c44f23e7b{};
std::int32_t cs_c7287f705b76c7e5{};
std::int32_t cs_05783202ead7db0f{};
std::int32_t cs_56029a8fed17f016{};
std::int32_t cs_ef2b531031dd971a{};
std::int32_t cs_d71255e00ceb695b{};
pls::cs::String cs_0dcb60ac6f795874{};
std::int32_t cs_4805c491302e7ff4{};
std::int32_t cs_7fe8a54364b3ed7a{};
std::int32_t cs_b70fc72b33e477f8{};
bool cs_98cc6378ce66e186{};
};

void cs_init_b68aa9c3dd5cf14c();

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_7144ce158e1834c7();

pls::cs::Ref<cs_75707aa3f1629c85>& cs_e478109e0b94893f();

pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_06d6211b1886aef7();

void cs_06d6211b1886aef7_init(pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_this);

pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_170a95790dba62b8(pls::cs::String v_src);

void cs_170a95790dba62b8_init(pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_this,pls::cs::String v_src);

void cs_daf67eb310d15fc9(pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_this,std::int32_t v_state);

void cs_e044e6df16b473c1(pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);

void cs_e90807f5be2f95e5(pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_this);

bool cs_46aab73583a20c93();

bool cs_3470e2c07bbb25d1();

bool cs_cd0bdffe5bb16ce5(pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_this);

bool cs_4e3088b29c46ff2a();

bool cs_0acf753c3bc58171();

void cs_5cec393ac7491d85(pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_this,pls::cs::String v_src);

void cs_ffbc52d462f16cae(pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_this);

void cs_a8fcac708407fd46(std::int32_t v_leagueId);

void cs_be783291f525eef3();

void cs_d5cc43a853b66354(pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);

void cs_75a6e6e4b15cc2cf(pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_this,std::int32_t v_trophy);

void cs_e6e36fb46a58d054(pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_this,pls::cs::Ref<cs_87fb4d668ea5580b> v_var_out);
}
