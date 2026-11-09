// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_96c54d9323f24f8e : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_96c54d9323f24f8e)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.ui.Balloon";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_46e267201e1c71a0{};
float cs_4b9a448ac07ffb59{};
pls::cs::Ref<cs_9cade6927d6e0bf3> cs_2f45ae0b0f0994b7{};
std::int32_t cs_62e2405d56cdd561{};
float cs_621b880d085468ff{};
pls::cs::String cs_1d5abc90d11ab0c5{};
bool cs_ac0b0615a8627df2{};
std::int32_t cs_cf6df194a94ad0ad{};
std::int32_t cs_33ee1b2838e45703{};
std::int32_t cs_123b4a97b07c8da1{};
std::int32_t cs_a3ad63599707ed3a{};
bool cs_2d58cac572c413df{};
std::int32_t cs_bc45c0331c449e67{};
bool cs_16eb79a87eea849e{};
pls::cs::Ref<cs_9cade6927d6e0bf3> cs_d28d1f2a5203923b{};
std::int32_t cs_91b205f618d8de2f{};
pls::cs::Ref<cs_9cade6927d6e0bf3> cs_01a33bedccf1ec34{};
std::int32_t cs_55c6179707feb486{};
pls::cs::Delegate<void(pls::cs::Ref<pls::kairo::Graphics>,float,pls::cs::Ref<cs_f1dd8f2aa583774c>,pls::cs::Ref<cs_f1dd8f2aa583774c>)> cs_c0e1478e6e65c04d{};
pls::cs::List<pls::cs::Ref<cs_9f5a071d05c1d020>> cs_26d7ee92947806bd{};
pls::cs::Ref<cs_f1dd8f2aa583774c> cs_34be2585a809d78b{};
pls::cs::Ref<cs_f1dd8f2aa583774c> cs_4b66e3dd8daf3086{};
pls::cs::Ref<cs_f1dd8f2aa583774c> cs_939495bac7ddc94f{};
};

void cs_init_96c54d9323f24f8e();

pls::cs::Ref<cs_f1dd8f2aa583774c>& cs_846238cb57fd2bbf();

pls::cs::Ref<cs_96c54d9323f24f8e> cs_188280dcda94b686(pls::cs::Ref<cs_96c54d9323f24f8e> v_balloon);

void cs_188280dcda94b686_init(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this,pls::cs::Ref<cs_96c54d9323f24f8e> v_balloon);

pls::cs::Ref<cs_96c54d9323f24f8e> cs_c46e5f8db55f0d51(pls::cs::String v_text,std::int32_t v_color);

void cs_c46e5f8db55f0d51_init(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this,pls::cs::String v_text,std::int32_t v_color);

void cs_97aa074fb6571df9(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,pls::kairo::Matrix4x4 v_matrix);

void cs_e354744ce57b0e78(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y);

void cs_12a182c05aa3d459(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,std::int32_t v_width,std::int32_t v_height,pls::cs::Ref<cs_9cade6927d6e0bf3> v_seb,std::int32_t v_frame);

std::int32_t cs_7c403f7ff4f54211(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this);

float cs_70679dacb700282a(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this);

pls::cs::Ref<cs_9cade6927d6e0bf3> cs_a81487bb34db407b(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this);

pls::cs::String cs_a3796b472b90bedf(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this);

std::int32_t cs_636f6fa36c75fe1d(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this);

void cs_4a16cab6837c29db(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this,pls::cs::Ref<cs_96c54d9323f24f8e> v_from);

void cs_4254bc66f1000052(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this,pls::cs::String v_text,std::int32_t v_color);

void cs_3587a8418a3a177d(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this,std::int32_t v_value);

void cs_081ca02a0c18a84a(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this,float v_value);

void cs_0ab9f071b4b5eb48(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this,pls::cs::Ref<cs_9cade6927d6e0bf3> v_value);

void cs_bc64dbfb155d02c7(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this,pls::cs::String v_value);

void cs_5c18cba22441d508(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this,std::int32_t v_value);

void cs_219b7941d805f42f(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height);

void cs_87abc8a059905f77(pls::cs::Ref<cs_96c54d9323f24f8e> cs_this,std::int32_t v_left,std::int32_t v_right,std::int32_t v_top,std::int32_t v_bottom,pls::cs::Delegate<void(pls::cs::Ref<pls::kairo::Graphics>,float,pls::cs::Ref<cs_f1dd8f2aa583774c>,pls::cs::Ref<cs_f1dd8f2aa583774c>)> v_render);
}
