// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_e373231f616cd1ed : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_e373231f616cd1ed)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.surface.SurfaceBase+MotionEventRecord+MultiTouch";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<pls::kairo::MotionEvent> cs_6a3564cf80f64631{};
};

void cs_init_e373231f616cd1ed();

pls::cs::Ref<cs_e373231f616cd1ed> cs_2ec538e1b5422edb();

void cs_2ec538e1b5422edb_init(pls::cs::Ref<cs_e373231f616cd1ed> cs_this);

float cs_bb7739e815078f77(pls::cs::Ref<cs_e373231f616cd1ed> cs_this,std::int32_t v_index);

float cs_4bab6edd4be5b5fc(pls::cs::Ref<cs_e373231f616cd1ed> cs_this,std::int32_t v_index);

float cs_e15d44f506415222(pls::cs::Ref<cs_e373231f616cd1ed> cs_this,std::int32_t v_index);

std::int32_t cs_ee485ec02dea0628(pls::cs::Ref<cs_e373231f616cd1ed> cs_this);

std::int32_t cs_147cc5906608a16b(pls::cs::Ref<cs_e373231f616cd1ed> cs_this,std::int32_t v_index);

float cs_599cda2fd1d6b522(pls::cs::Ref<cs_e373231f616cd1ed> cs_this,std::int32_t v_index);

float cs_d831862e2b588867(pls::cs::Ref<cs_e373231f616cd1ed> cs_this,std::int32_t v_index);

void cs_f14fdc91c7a10673(pls::cs::Ref<cs_e373231f616cd1ed> cs_this,pls::cs::Ref<pls::kairo::MotionEvent> v_evt);
}
