// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_b08d770c239489bf.hpp"
namespace pls::game {

struct cs_5beb6285da308d06 : cs_b08d770c239489bf {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_5beb6285da308d06)||target==typeid(cs_b08d770c239489bf)||cs_b08d770c239489bf::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return cs_b08d770c239489bf::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "data.FormationData";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_060be94b316ac997{};
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_e6d065255a19d5e1{};
pls::cs::String cs_848cb46183ffce74{};
std::int32_t cs_9e69bc1be9cd1463{};
bool cs_2c594ae1e1e62192{};
};

void cs_init_5beb6285da308d06();

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_babc5db4464a5cf1();

pls::cs::Ref<cs_75707aa3f1629c85>& cs_9b4ff795e198ba8c();

pls::cs::Ref<cs_5beb6285da308d06> cs_1dcab3be6c5f03f1();

void cs_1dcab3be6c5f03f1_init(pls::cs::Ref<cs_5beb6285da308d06> cs_this);

pls::cs::Ref<cs_5beb6285da308d06> cs_87d76be08d9385f5(pls::cs::String v_src);

void cs_87d76be08d9385f5_init(pls::cs::Ref<cs_5beb6285da308d06> cs_this,pls::cs::String v_src);

void cs_44b45d582a2cd832(pls::cs::Ref<cs_5beb6285da308d06> cs_this,std::int32_t v_state);

void cs_236fc3772d53f167(pls::cs::Ref<cs_5beb6285da308d06> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);

void cs_61dc1e692f8ba65d(pls::cs::Ref<cs_5beb6285da308d06> cs_this);

bool cs_24bb22626fd1951a();

bool cs_31c354b1fcecaeb2(pls::cs::Ref<cs_5beb6285da308d06> cs_this);

void cs_64435bca883a957d(pls::cs::Ref<cs_5beb6285da308d06> cs_this,pls::cs::String v_src);

void cs_2552b94c33660c3f(pls::cs::Ref<cs_5beb6285da308d06> cs_this);

void cs_dfb5cae2c5bb4409();

void cs_746513213ef872e5(pls::cs::Ref<cs_5beb6285da308d06> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);

void cs_c7fecae46912cbc4();
}
