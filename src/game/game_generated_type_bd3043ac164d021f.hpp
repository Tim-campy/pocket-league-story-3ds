// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_b08d770c239489bf.hpp"
namespace pls::game {

struct cs_bd3043ac164d021f : cs_b08d770c239489bf {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_bd3043ac164d021f)||target==typeid(cs_b08d770c239489bf)||cs_b08d770c239489bf::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return cs_b08d770c239489bf::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "data.SponsorData";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_a8dd07e21120b8fc{};
std::int32_t cs_8414d28f2c564b08{};
std::int32_t cs_fb9e2e54a4e5add8{};
std::int32_t cs_b3744c9c8902bc25{};
std::int32_t cs_46c8a058571eeafc{};
std::int32_t cs_a50b7cd5744c495b{};
pls::cs::Array<std::int32_t> cs_601e287145250385{};
std::int32_t cs_6eac5daaba2f3295{};
std::int32_t cs_8f541e0d2e31d7fe{};
std::int32_t cs_d08cdbaad6145b1d{};
pls::cs::String cs_076d7a8d9883fcfd{};
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_983002ff6e0f2ea0{};
std::int32_t cs_f0f476890aa67d1b{};
std::int32_t cs_fbb7dfc4736997fe{};
std::int32_t cs_51d53808250d860a{};
bool cs_792072ed01591cb4{};
};

void cs_init_bd3043ac164d021f();

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_7feb13590a54786c();

pls::cs::Array<pls::cs::String>& cs_e6ecf2ecb1664f3f();

pls::cs::Ref<cs_75707aa3f1629c85>& cs_d96057d2c61e3445();

pls::cs::Ref<cs_bd3043ac164d021f> cs_48c3032d5b5bf9c8();

void cs_48c3032d5b5bf9c8_init(pls::cs::Ref<cs_bd3043ac164d021f> cs_this);

pls::cs::Ref<cs_bd3043ac164d021f> cs_2699965129f6a232(pls::cs::String v_src);

void cs_2699965129f6a232_init(pls::cs::Ref<cs_bd3043ac164d021f> cs_this,pls::cs::String v_src);

void cs_2ebff4ed9484ea5e(pls::cs::Ref<cs_bd3043ac164d021f> cs_this,std::int32_t v_state);

void cs_5b72ece6ea740ac2(pls::cs::Ref<cs_bd3043ac164d021f> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);

void cs_96b71976a8afb2ff(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_charaId,std::int32_t v_dx,std::int32_t v_dy);

pls::cs::String cs_d48dfa4448b977ba(pls::cs::Ref<cs_bd3043ac164d021f> cs_this);

std::int32_t cs_133ab1ff637d568b(pls::cs::Ref<cs_bd3043ac164d021f> cs_this);

void cs_ee6741c0910b8b25(pls::cs::Ref<cs_bd3043ac164d021f> cs_this);

bool cs_049e0eb5a30e326f();

bool cs_f26c74a3f658b98b(pls::cs::Ref<cs_bd3043ac164d021f> cs_this);

void cs_8f0f37521764bf27(pls::cs::Ref<cs_bd3043ac164d021f> cs_this,pls::cs::String v_src);

void cs_0443c011bb471ba1(pls::cs::Ref<cs_bd3043ac164d021f> cs_this);

void cs_91e27b4f04f20882();

void cs_1613937bf1e1ad15(pls::cs::Ref<cs_bd3043ac164d021f> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);

void cs_783eeb903890d4d1();
}
