// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_9326c27a92cfea3a.hpp"
namespace pls::game {

struct cs_792a6372766eb19f : cs_9326c27a92cfea3a {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_792a6372766eb19f)||target==typeid(cs_9326c27a92cfea3a)||cs_9326c27a92cfea3a::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_9b7c686ee42b269b")return "M:surface.GamePad.IsGameSurface";if(slot=="cs_virtual_9f5fde625f99aa16")return "M:surface.GamePad.OnTouchEvent(kairo.unity.surface.TouchEvent)";if(slot=="cs_virtual_07a0bb2e4afc307c")return "M:surface.GamePad.Draw(kairo.unity.ui.Graphics)";if(slot=="cs_virtual_acea3de130dbb7cd")return "M:surface.GamePad.RotateClear";return cs_9326c27a92cfea3a::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "surface.GamePad";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<pls::kairo::IApplication> cs_19e78e808977cc4e{};
pls::cs::Ref<pls::kairo::Canvas> cs_5867a2554f93e1c1{};
pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_0d5c709c51fa921b{};
pls::cs::Ref<pls::kairo::Font> cs_3a868c09e05f0a18{};
bool cs_02d52a36c316037d{};
std::int64_t cs_c20c06b04454dc60{};
bool cs_43d209bc22b7ed54{};
std::int64_t cs_9e1c78dbcb955d0f{};
std::int32_t cs_e1df28e1da14e090{};
std::int32_t cs_ffeb6ba8f27f04da{};
std::int32_t cs_6c26da80c9b27bc8{};
bool cs_c9226a2495e37810{};
std::int32_t cs_30a4c2b81b0594b6{};
pls::cs::Array<float> cs_e9c361e061762844{};
virtual bool cs_virtual_9b7c686ee42b269b();
virtual void cs_virtual_9f5fde625f99aa16(pls::cs::Ref<cs_757516ce190cf813> v_evt);
virtual void cs_virtual_07a0bb2e4afc307c(pls::cs::Ref<pls::kairo::Graphics> v_g);
virtual void cs_virtual_acea3de130dbb7cd();
};

void cs_init_792a6372766eb19f();

pls::cs::Array<pls::cs::Array<std::int32_t>>& cs_85947546213f4402();

pls::cs::Ref<pls::generated::cs_a465028bea3432a3>& cs_52a3cfad721c8407();

std::int64_t& cs_022c3a0c1cdb7af0();

std::int64_t& cs_64e0a7e74b2c1cd4();

pls::cs::Array<pls::cs::String>& cs_b966f65b238fb3f0();

pls::cs::Array<std::int32_t>& cs_5859d912a9aed67d();

pls::cs::Array<pls::cs::Ref<pls::kairo::Image>>& cs_9149ef90399c862e();

pls::cs::Ref<cs_792a6372766eb19f>& cs_76f760b13fa7718b();

std::int32_t& cs_229c0490d0966c6b();

std::int32_t& cs_44512ae8be40448d();

std::int32_t& cs_32e9b6e50499ad72();

pls::cs::Array<pls::cs::Array<std::int32_t>>& cs_ef3be8cf38199e7e();

bool& cs_78989788b44cf161();

pls::cs::Array<pls::cs::String>& cs_320b7273eca92017();

pls::cs::Ref<cs_792a6372766eb19f> cs_cf8ab3fc66fb56cb();

void cs_cf8ab3fc66fb56cb_init(pls::cs::Ref<cs_792a6372766eb19f> cs_this);

void cs_7c7da0c4369e8446(pls::cs::Ref<cs_792a6372766eb19f> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,std::int32_t v_id,std::int32_t v_value,bool v_enable);

void cs_f1a80f024da2b6ee(pls::cs::Ref<cs_792a6372766eb19f> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,std::int32_t v_id,std::int32_t v_value);

void cs_fb0cff21536b034a(pls::cs::Ref<cs_792a6372766eb19f> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,std::int32_t v_id);

void cs_41ddda44b52789d1(pls::cs::Ref<cs_792a6372766eb19f> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

void cs_dd559390e255ede0(pls::cs::Ref<cs_792a6372766eb19f> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y);

void cs_9bfe00949a9c4d85(pls::cs::Ref<cs_792a6372766eb19f> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,std::int32_t v_imgId);

void cs_b55690f7a47a296c(pls::cs::Ref<cs_792a6372766eb19f> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,float v_w,float v_h,std::int32_t v_imgId);

bool cs_08147b57532d085e(pls::cs::Ref<cs_792a6372766eb19f> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,std::int32_t v_id,std::int32_t v_value,bool v_enable);

void cs_b5ef9d13e4a21bab(pls::cs::Ref<cs_792a6372766eb19f> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,std::int32_t v_imgId);

void cs_81b27bd67bb6cb56(pls::cs::Ref<cs_792a6372766eb19f> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

void cs_311049404bce850c(pls::cs::Ref<cs_792a6372766eb19f> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y);

pls::cs::Array<float> cs_da8b794ec31d3049(pls::cs::Ref<cs_792a6372766eb19f> cs_this,float v_left,float v_right,float v_padding,std::int32_t v_index,std::int32_t v_max);

pls::cs::Ref<cs_792a6372766eb19f> cs_a066f615d75279e2();

std::int32_t cs_db5f3811c0200bd7(pls::cs::Ref<cs_792a6372766eb19f> cs_this);

std::int32_t cs_0378d82734b4deab(pls::cs::Ref<cs_792a6372766eb19f> cs_this);

std::int32_t cs_905843a9806d4f67(pls::cs::Ref<cs_792a6372766eb19f> cs_this);

std::int32_t cs_5e393384aa7d2051(pls::cs::Ref<cs_792a6372766eb19f> cs_this);

float cs_78001fa70ce5cc94(pls::cs::Ref<cs_792a6372766eb19f> cs_this);

bool cs_d237d8c9ca71f7cc(pls::cs::Ref<cs_792a6372766eb19f> cs_this);

bool cs_f5a405716b67b4b7(pls::cs::Ref<cs_792a6372766eb19f> cs_this);

bool cs_ef3cddc2587c6e11(pls::cs::Ref<cs_792a6372766eb19f> cs_this,std::int32_t v_id);

void cs_2da0940ad60eef3f(pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jar);

void cs_df21b41e03f2f36f(pls::cs::Ref<cs_792a6372766eb19f> cs_this);

void cs_7d8c3a37df2c9c0b(pls::cs::Ref<cs_792a6372766eb19f> cs_this,std::int32_t v_mode);

void cs_f3c9caa17c71880a(pls::cs::Ref<cs_792a6372766eb19f> cs_this,std::int32_t v_page);
}
