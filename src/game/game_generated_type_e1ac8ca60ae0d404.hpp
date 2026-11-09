// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_e1ac8ca60ae0d404 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_e1ac8ca60ae0d404)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.surface.SurfaceBase+MotionEventRecord";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_7e57fb8b2c00b332{};
float cs_a07960f3828b6654{};
float cs_0c2122c67a220ad5{};
float cs_d19197b1eca33954{};
float cs_03e6582cfb7c53c4{};
float cs_b2d35947212f5095{};
std::int32_t cs_767548071e1ac66d{};
pls::cs::Array<std::int32_t> cs_5e13f1b59d6187ce{};
pls::cs::Array<float> cs_68e37d2551fe1039{};
pls::cs::Array<float> cs_445810c66b37725f{};
bool cs_dca7b292fa5b4249{};
};

void cs_init_e1ac8ca60ae0d404();

pls::cs::Ref<cs_e373231f616cd1ed>& cs_994906ff6b942bc3();

pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_ef5589b812f9d157();

void cs_ef5589b812f9d157_init(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this);

void cs_7c055166f9b27c04(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this);

void cs_f1026731bc4fecf6(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,pls::cs::Ref<pls::kairo::MotionEvent> v_evt);

void cs_e879b926a94bdd5d(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,pls::cs::Ref<cs_e1ac8ca60ae0d404> v_evt);

std::int32_t cs_1fc22b186f83ddec(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this);

std::int32_t cs_40ac27079aeadda5(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this);

std::int32_t cs_4ccc696f76a5a02e(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this,std::int32_t v_pointerIndex);

float cs_7be670f4053bc836(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this,std::int32_t v_index);

float cs_f83f5dafe8eac875(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this,std::int32_t v_index);

bool cs_75dcbdf2f80cf9d3(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this);

bool cs_3f051d1070002654(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this);
}
