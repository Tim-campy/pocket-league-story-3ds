// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_4a8bef2ab48b32d7 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_4a8bef2ab48b32d7)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_d58c9861d84c3c7d")return "M:kairo.unity.surface.SurfaceManagerBase.AdjustSurfaceLayout";if(slot=="cs_virtual_a4fa9c8087597dcf")return "M:kairo.unity.surface.SurfaceManagerBase.Draw(kairo.unity.ui.Graphics)";if(slot=="cs_virtual_fb350f55fa7620cd")return "M:kairo.unity.surface.SurfaceManagerBase.DrawComponents(kairo.unity.ui.Graphics)";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.surface.SurfaceManagerBase";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>> cs_6a384974a2464779{};
pls::cs::Array<pls::cs::Ref<cs_3a3d09f9e75a32d2>> cs_4a2bd2b1dc2b62f7{};
pls::cs::List<pls::cs::Array<pls::kairo::Vector2>> cs_60fc9d5519e72fab{};
std::int32_t cs_fa643bfe19a61f34{};
std::int32_t cs_1503ca63d74f3eef{};
pls::cs::Array<std::int32_t> cs_ae92969ac71a8af3{};
virtual void cs_virtual_d58c9861d84c3c7d()=0;
virtual void cs_virtual_a4fa9c8087597dcf(pls::cs::Ref<pls::kairo::Graphics> v_g);
virtual void cs_virtual_fb350f55fa7620cd(pls::cs::Ref<pls::kairo::Graphics> v_g);
};

void cs_init_4a8bef2ab48b32d7();

bool& cs_042e86d7c14d33a1();

bool& cs_c842d4269c1e5564();

pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_03e2f5f2e825917f();

void cs_03e2f5f2e825917f_init(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this);

void cs_919bc150e4142cc1(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

void cs_70b3e83e4dd8bf96(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this);

void cs_8964fe45c954e72d(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this,bool v_skip);

void cs_1e0863d8f2b7a360(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this);

void cs_c311823b6552fdf7(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this);

void cs_a4fa9c8087597dcf(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

void cs_fb350f55fa7620cd(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

void cs_cc1a1bf7edaee778(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

pls::cs::Array<pls::kairo::Vector2> cs_83e2b5e0ec4cdcad(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this,pls::cs::Array<pls::kairo::Vector2> v_points);

pls::cs::Array<std::int32_t> cs_ac30f7dfe797187c(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this,pls::cs::Array<pls::kairo::Vector2> v_points);

bool cs_221c91752345c75b(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this,float v_x,float v_y,std::int32_t& v_rectIndex,std::int32_t& v_handleIndex);

pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>> cs_60d968a93f42ac33(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this);

bool cs_ff50c908347e45e2();

void cs_b8386c421fdf23ad(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this,std::int32_t v_keyCode,pls::cs::Ref<pls::kairo::KeyEvent> v_evt);

void cs_9082ae6a6e574dce(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this,std::int32_t v_key);

void cs_a945708971ce72b3(pls::cs::Ref<cs_4a8bef2ab48b32d7> cs_this,std::int32_t v_key);
}
