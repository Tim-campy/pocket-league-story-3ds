// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_dc09c88a279424b5 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_dc09c88a279424b5)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.ui.TextFormat";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_5352e54601bec7cb{};
pls::cs::Array<std::int32_t> cs_110453e9e91b0c62{};
pls::cs::Array<std::int32_t> cs_ee2adc9e2cf23dac{};
std::int32_t cs_d7151221c9064cfc{};
};

void cs_init_dc09c88a279424b5();

pls::cs::Ref<cs_dc09c88a279424b5>& cs_a0e59a75dec69092();

pls::cs::Ref<cs_dc09c88a279424b5> cs_d337fafafa1bc98d();

void cs_d337fafafa1bc98d_init(pls::cs::Ref<cs_dc09c88a279424b5> cs_this);

pls::cs::Ref<cs_dc09c88a279424b5> cs_e5cc191a31275eff(pls::cs::String v_format);

std::int32_t cs_cb4539652f78b54c(pls::cs::Ref<cs_dc09c88a279424b5> cs_this,std::int32_t v_anchor);

std::int32_t cs_5222c35a27bca506(pls::cs::Ref<cs_dc09c88a279424b5> cs_this);

float cs_4a7882bb12bfce3f(pls::cs::Ref<cs_dc09c88a279424b5> cs_this,float v_x);

float cs_4217cc125b778a87(pls::cs::Ref<cs_dc09c88a279424b5> cs_this,float v_basis,pls::cs::Array<std::int32_t> v_elem);

float cs_a6f2c13fea15a192(pls::cs::Ref<cs_dc09c88a279424b5> cs_this,float v_y);

void cs_470e46d1c0096c27(pls::cs::Ref<cs_dc09c88a279424b5> cs_this,pls::cs::String v_format);
}
