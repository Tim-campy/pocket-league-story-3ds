// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_43347b50b6a10e65 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_43347b50b6a10e65)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.ui.TextLayout+TextBlock";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<cs_87fb4d668ea5580b> cs_c4c04b027207a322{};
pls::cs::Ref<pls::kairo::Font> cs_5951a1be8973598c{};
std::int32_t cs_de8fb13c183fecc1{};
pls::cs::String cs_b17fa7396bdbcd90{};
float cs_54138a074e43426e{};
float cs_555538e920ee71b1{};
std::int32_t cs_192bcc8e433dae59{};
std::int32_t cs_7055da6e5ca7b4e7{};
float cs_213a47847f8db5d2{};
bool cs_76ef6fdfcd6628c6{};
pls::cs::Array<pls::cs::String> cs_55c8b74f6db29a7a{};
};

void cs_init_43347b50b6a10e65();

pls::cs::Ref<cs_43347b50b6a10e65> cs_105f56890100ea40(pls::cs::Ref<cs_87fb4d668ea5580b> v_parent,pls::cs::Ref<pls::kairo::Font> v_font,std::int32_t v_color,float v_x,float v_y,std::int32_t v_blink);

void cs_105f56890100ea40_init(pls::cs::Ref<cs_43347b50b6a10e65> cs_this,pls::cs::Ref<cs_87fb4d668ea5580b> v_parent,pls::cs::Ref<pls::kairo::Font> v_font,std::int32_t v_color,float v_x,float v_y,std::int32_t v_blink);

void cs_41714700f28172c8(pls::cs::Ref<cs_43347b50b6a10e65> cs_this);

std::int32_t cs_f5f0c633a6ccc4ff(pls::cs::Ref<cs_43347b50b6a10e65> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,float v_boxY,float v_boxH,std::int32_t v_len);
}
