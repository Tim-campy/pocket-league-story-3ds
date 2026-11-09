// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_b08d770c239489bf.hpp"
namespace pls::game {

struct cs_3e5b0d35ae6be8e7 : cs_b08d770c239489bf {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_3e5b0d35ae6be8e7)||target==typeid(cs_b08d770c239489bf)||cs_b08d770c239489bf::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return cs_b08d770c239489bf::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "data.QuestMatchData";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_f1b327651f0899b5{};
std::int32_t cs_c8ca8dae848e69f6{};
pls::cs::Array<std::int32_t> cs_5e9de6f24f784276{};
std::int32_t cs_36cdf92c74be85ab{};
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_929b31914cc9d4d1{};
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_d2669b7382570bf6{};
std::int32_t cs_cff39f10c9c2eca7{};
std::int32_t cs_5dde9bb1cba675f5{};
std::int32_t cs_38f3ae5b9c217a11{};
std::int32_t cs_18b907f7fd77e179{};
std::int32_t cs_70bca42ebe755ebc{};
pls::cs::String cs_95066d7f3372b794{};
std::int32_t cs_e78d2b9cd5330285{};
std::int32_t cs_2521f4dfc072d880{};
bool cs_1aba20d7d9aaa7eb{};
};

void cs_init_3e5b0d35ae6be8e7();

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_aa7300d19ef69635();

pls::cs::Ref<cs_75707aa3f1629c85>& cs_d3587b5029c65d71();

pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_a056d04434609023();

void cs_a056d04434609023_init(pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_this);

pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_7b161ff63c119bd9(pls::cs::String v_src);

void cs_7b161ff63c119bd9_init(pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_this,pls::cs::String v_src);

void cs_5a4aaafd12bca5e1(pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_this,std::int32_t v_next_state);

void cs_20e7e655ba517213(pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);

void cs_de49accdb8a103a6(pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_this);

bool cs_c50d7ca1d87f3b65();

bool cs_154b83d04671fdc3(pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_this);

bool cs_fc3bd3f1d3984fff();

bool cs_1eef7ef9679480f1();

void cs_97235e10b5d74318(pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_this,pls::cs::String v_src);

void cs_3020aea10affd438(pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_this);

void cs_f2bced4a67604269(std::int32_t v_qmId);

void cs_4e1bd93141342ec7();

void cs_4503351df0f1771f(pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);

void cs_b1766168030788ef(pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_this);

void cs_16726aeca8c62ab0(pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_this,std::int32_t v_trophy);
}
