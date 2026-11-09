// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_b08d770c239489bf.hpp"
namespace pls::game {

struct cs_69a97d2bf5ede86d : cs_b08d770c239489bf {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_69a97d2bf5ede86d)||target==typeid(cs_b08d770c239489bf)||cs_b08d770c239489bf::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return cs_b08d770c239489bf::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "data.FanBonusData";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_6d4af11b2f74aa6c{};
pls::cs::String cs_3808684c2960aed0{};
std::int32_t cs_79e566ac4387be10{};
std::int32_t cs_74cba5eaf353c2cf{};
std::int32_t cs_51bf95171e780bd8{};
std::int32_t cs_ad90242be15200e2{};
pls::cs::Array<std::int32_t> cs_4f22285edb5ebc22{};
std::int32_t cs_416d58028090eb8f{};
pls::cs::Array<std::int32_t> cs_c59de20765068aec{};
};

void cs_init_69a97d2bf5ede86d();

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_570673b908a93a55();

pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f>& cs_79b4fab3961bbf73();

std::int32_t& cs_c6d086597dc95f54();

std::int32_t& cs_8334425c84360fb5();

std::int32_t& cs_43d5f87799c2c1ec();

std::int32_t& cs_1ec674e56ad0f26c();

std::int32_t& cs_9dbd36c49f9f1813();

std::int32_t& cs_09387d9312f963ea();

std::int32_t& cs_159556b0dd59f750();

pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f>& cs_231a8198c70c1882();

pls::cs::Array<std::int32_t>& cs_b28be0815644f161();

pls::cs::Ref<cs_75707aa3f1629c85>& cs_0caf9bc6567e886c();

pls::cs::Ref<cs_69a97d2bf5ede86d> cs_139b84599510ac2f();

void cs_139b84599510ac2f_init(pls::cs::Ref<cs_69a97d2bf5ede86d> cs_this);

pls::cs::Ref<cs_69a97d2bf5ede86d> cs_1773357bc9f98196(pls::cs::String v_src);

void cs_1773357bc9f98196_init(pls::cs::Ref<cs_69a97d2bf5ede86d> cs_this,pls::cs::String v_src);

void cs_2929ebe6f6469c15(pls::cs::Ref<cs_69a97d2bf5ede86d> cs_this,std::int32_t v_state);

void cs_dac66bba76c6f366();

void cs_51cc9c24bc647fec(pls::cs::Ref<cs_69a97d2bf5ede86d> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);

pls::cs::Ref<cs_69a97d2bf5ede86d> cs_18239d10e6e993ca(std::int32_t v_term_mode,std::int32_t v_param);

pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_32660dc4bcffd955(std::int32_t v_term_mode);

void cs_b3a8afba5fec78a1(pls::cs::Ref<cs_69a97d2bf5ede86d> cs_this);

void cs_1f2ebf63c7862ae8(pls::cs::Ref<cs_69a97d2bf5ede86d> cs_this,pls::cs::String v_src);

void cs_cad7770806224169();

void cs_b0fc44e7d417b01c(pls::cs::Ref<cs_69a97d2bf5ede86d> cs_this);

void cs_c3c802ec2eaa524b(pls::cs::Ref<cs_69a97d2bf5ede86d> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);

void cs_ba2c3da1769b4fc0(pls::cs::Ref<cs_69a97d2bf5ede86d> v_fb_data,pls::cs::String v_topMessage,pls::cs::Array<std::int32_t> v_param,std::int32_t v_charaDataId);

void cs_e540426acd1ed2d3(pls::cs::Ref<cs_69a97d2bf5ede86d> v_fb_data,pls::cs::String v_topMessage,pls::cs::Array<std::int32_t> v_param);
}
