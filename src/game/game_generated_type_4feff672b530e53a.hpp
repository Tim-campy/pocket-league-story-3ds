// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_4feff672b530e53a : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_4feff672b530e53a)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "game.TGroupArea";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<cs_2ffa6f51468590ea> cs_6039645d9a4b9109{};
pls::cs::Ref<cs_75707aa3f1629c85> cs_b4682d3145ceb91b{};
std::int32_t cs_d6f707801500967d{};
pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> cs_6e5fcf399ce4d56d{};
float cs_57466612ccd6ae4b{};
float cs_d1f2e375e85dfb9b{};
pls::cs::Ref<cs_70a14a9a721e329a> cs_1ba09d3f70f865df{};
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_b53ae6c344de9d42{};
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_924c15431964c246{};
std::int32_t cs_3ba5d9b69f5c16f0{};
std::int32_t cs_89db160ab6f5d7f6{};
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_22403c882959675b{};
pls::cs::Array<pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f>> cs_7ed07e1b32f36627{};
std::int32_t cs_cbf3d8f9a46d7380{};
std::int32_t cs_e91370008ff779cb{};
pls::cs::Array<pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f>> cs_715fd6f982e10ed8{};
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_d23b87f2e8aaf9ff{};
pls::cs::Array<std::int32_t> cs_6694a64c2504414a{};
pls::cs::Array<std::int32_t> cs_b27250c78ed7cc8e{};
pls::cs::Array<pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f>> cs_7a00c80ee0e06f75{};
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_653725c3964edda6{};
pls::cs::Array<std::int32_t> cs_ff1509c0c1a843c4{};
pls::cs::Array<std::int32_t> cs_bc0e086996f6e297{};
pls::cs::Array<std::int32_t> cs_b6cc7b4ac92a637d{};
};

void cs_init_4feff672b530e53a();

pls::cs::Array<std::int32_t>& cs_70976c35cb89b8f9();

pls::cs::Ref<cs_4feff672b530e53a> cs_b971b33d4c019b20(std::int32_t v_id,pls::cs::Ref<cs_70a14a9a721e329a> v_tArea);

void cs_b971b33d4c019b20_init(pls::cs::Ref<cs_4feff672b530e53a> cs_this,std::int32_t v_id,pls::cs::Ref<cs_70a14a9a721e329a> v_tArea);

void cs_86069acbdd7f758e(pls::cs::Ref<cs_4feff672b530e53a> cs_this,std::int32_t v_next_state);

void cs_4f536eaba4366799(pls::cs::Ref<cs_4feff672b530e53a> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream,pls::cs::Ref<cs_70a14a9a721e329a> v_tArea);

void cs_60e8b0223461c5a8(pls::cs::Ref<cs_4feff672b530e53a> cs_this);

void cs_15e3d7bd3851656c(pls::cs::Ref<cs_4feff672b530e53a> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

std::int32_t cs_a42d448b04d335ff(std::int32_t v_trainingMode);

pls::cs::Ref<cs_0f74b892eb1cdde4> cs_d2dfd2b8632aee33(pls::cs::Ref<cs_4feff672b530e53a> cs_this,pls::cs::Ref<cs_63cc285eb997c6a4> v_player,std::int32_t v_type);

void cs_aa755ec1c1592f73(pls::cs::Ref<cs_4feff672b530e53a> cs_this);

void cs_350f217a0b064ad1(pls::cs::Ref<cs_4feff672b530e53a> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);

void cs_c551aaa98807835d(pls::cs::Ref<cs_4feff672b530e53a> cs_this);

void cs_755147ab446e79e2(pls::cs::Ref<cs_4feff672b530e53a> cs_this);

void cs_e55294add8444088(pls::cs::Ref<cs_4feff672b530e53a> cs_this);

void cs_e88edf651add9e43(pls::cs::Ref<cs_4feff672b530e53a> cs_this);
}
