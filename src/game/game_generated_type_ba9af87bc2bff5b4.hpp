// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_b08d770c239489bf.hpp"
namespace pls::game {

struct cs_ba9af87bc2bff5b4 : cs_b08d770c239489bf {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_ba9af87bc2bff5b4)||target==typeid(cs_b08d770c239489bf)||cs_b08d770c239489bf::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return cs_b08d770c239489bf::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "data.TradeData";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_e0082101d02f7a1e{};
std::int32_t cs_a1746db03a0761a5{};
std::int32_t cs_725b440d871f73d3{};
std::int32_t cs_c9b2c05b7631a756{};
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_da6b8bb24e47c737{};
std::int32_t cs_e4db1f2c4f3263ea{};
std::int32_t cs_746e84f8240a6c37{};
std::int32_t cs_0cec29b10881eeac{};
std::int32_t cs_c9595733f1699408{};
bool cs_3460609829d5d73e{};
};

void cs_init_ba9af87bc2bff5b4();

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_46408dee54eeea3b();

pls::cs::Ref<cs_75707aa3f1629c85>& cs_547c06a2de8b7b8f();

pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_a791cb158e08c2da();

void cs_a791cb158e08c2da_init(pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_this);

pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_37b0bebd00841d79(pls::cs::String v_src);

void cs_37b0bebd00841d79_init(pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_this,pls::cs::String v_src);

void cs_58bab8057b32b1a5(pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_this,std::int32_t v_state);

void cs_b3e612b2e80fb56f(pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);

std::int32_t cs_92aa0a93356acf13(pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_this);

void cs_7c1a910cb1366647(pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_this);

bool cs_b83cafd1cfaf1f72();

bool cs_2dbfddbab8163cdc(pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_this);

bool cs_032b60c299bc2f68(pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_this);

void cs_1fb9f609c8294637(pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_this,pls::cs::String v_src);

void cs_4b4f497baae8e8aa(pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_this);

void cs_902e7e64c237fe27();

void cs_feaa7acb9d6c4e25(pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);
}
