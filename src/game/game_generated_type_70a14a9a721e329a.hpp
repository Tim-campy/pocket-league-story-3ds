// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_70a14a9a721e329a : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_70a14a9a721e329a)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "game.TArea";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<cs_2ffa6f51468590ea> cs_ffdf9e524c6d33fb{};
pls::cs::Ref<cs_75707aa3f1629c85> cs_1b8f7a41fa7edc56{};
std::int32_t cs_86d5d3bcc0799404{};
std::int32_t cs_29b2aacd5fae61d1{};
std::int32_t cs_19069f1ff64b1613{};
pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> cs_e7912e879cc58c4c{};
float cs_0c5fe00a7079041e{};
float cs_275b6ec9f62df479{};
pls::cs::Array<pls::cs::Ref<cs_4feff672b530e53a>> cs_b42e59d77da5e022{};
std::int32_t cs_2a09121f03ba2c1f{};
std::int32_t cs_2087da0c686e772f{};
};

void cs_init_70a14a9a721e329a();

pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f>& cs_38b65a08b06f36b7();

pls::cs::Ref<cs_70a14a9a721e329a> cs_ab264fb7a8ead88e();

void cs_ab264fb7a8ead88e_init(pls::cs::Ref<cs_70a14a9a721e329a> cs_this);

void cs_7a3c8d6b2dff719e(pls::cs::Ref<cs_70a14a9a721e329a> cs_this,std::int32_t v_next_state);

void cs_2de6783835158de8(pls::cs::Ref<cs_70a14a9a721e329a> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);

void cs_6ee3db91d1008f12(pls::cs::Ref<cs_70a14a9a721e329a> cs_this);

void cs_88538932188d7bb8(pls::cs::Ref<cs_70a14a9a721e329a> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

std::int32_t cs_15ecc440a68e2664(pls::cs::Ref<cs_70a14a9a721e329a> cs_this,std::int32_t v_tMode);

std::int32_t cs_0ca87114b1f38660(pls::cs::Ref<cs_70a14a9a721e329a> cs_this,std::int32_t v_tMode);

pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> cs_97861ebb45d8357c(pls::cs::Ref<cs_70a14a9a721e329a> cs_this,pls::cs::Ref<cs_4feff672b530e53a> v_tGroupArea,pls::cs::Ref<cs_63cc285eb997c6a4> v_tPlayer);

void cs_be8b32cb26beac2d(pls::cs::Ref<cs_70a14a9a721e329a> cs_this,std::int32_t v_rootId,std::int32_t v_pId);

void cs_27f0128331258c12(pls::cs::Ref<cs_70a14a9a721e329a> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);

void cs_37eca943de406902(pls::cs::Ref<cs_70a14a9a721e329a> cs_this);

void cs_43892c6331385e19(pls::cs::Ref<cs_70a14a9a721e329a> cs_this,std::int32_t v_tMode);

void cs_29e321002eb54594(pls::cs::Ref<cs_70a14a9a721e329a> cs_this);
}
