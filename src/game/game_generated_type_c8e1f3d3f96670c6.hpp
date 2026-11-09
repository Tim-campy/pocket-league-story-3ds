// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_c8e1f3d3f96670c6 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_c8e1f3d3f96670c6)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="Equals")return "M:kairo.unity.ui.Matrix.Equals(System.Object)";if(slot=="GetHashCode")return "M:kairo.unity.ui.Matrix.GetHashCode";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.ui.Matrix";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Array<float> cs_d48b2c060366a193{};
pls::cs::Array<float> cs_00f172d916ac1eda{};
pls::cs::Array<float> cs_5911c1aef793c754{};
virtual bool Equals(pls::cs::Ref<pls::cs::Object> const& v_obj);
virtual std::int32_t GetHashCode();
};

void cs_init_c8e1f3d3f96670c6();

pls::cs::Array<float>& cs_973a19e093bc0fda();

pls::cs::Ref<cs_c8e1f3d3f96670c6>& cs_70333ca9b184d4ad();

pls::cs::Ref<cs_c8e1f3d3f96670c6>& cs_abf3d394789f023c();

pls::cs::Ref<cs_c8e1f3d3f96670c6>& cs_b377fd1b9ba4be2d();

pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_d1ef6eff6523bffb();

void cs_d1ef6eff6523bffb_init(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this);

bool cs_e4546eba7825f981(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,pls::cs::Ref<pls::cs::Object> v_obj);

std::int32_t cs_f80b20705650c56f(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this);

void cs_ca00577a54dd61a5(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,pls::cs::Array<float> v_matrix);

bool cs_46250df91aacb52a(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this);

void cs_76f083d6ddd878de(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,float& v_x,float& v_y);

pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_b0fd4c69e3e79001(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,pls::cs::Array<float> v_transform);

pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_dfcfe6d3804d0059(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,float v_angle,float v_px,float v_py);

pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_abaf734dcf45a64b(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,float v_x,float v_y,float v_px,float v_py);

pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_2b097c9e7de4a816(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,float v_x,float v_y);

pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_6d52e21bbbc1b83b(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this);

pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_54df3686b06bf8e3(float v_angle,float v_px,float v_py);

pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_e8ceb82625f5a10e(float v_x,float v_y,float v_px,float v_py);

pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_d59f8e10788ab6cd(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,float v_angle,float v_px,float v_py);

pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_097036b885de5d99(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,float v_x,float v_y,float v_px,float v_py);

pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_54ed94bf2309b437(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,float v_x,float v_y);

pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_ae09ad7913e5d182(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,pls::cs::Array<float> v_matrix);

pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_726b189f0fed2c17(float v_x,float v_y);
}
