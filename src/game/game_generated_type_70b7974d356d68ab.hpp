// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_70b7974d356d68ab : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_70b7974d356d68ab)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.surface.SurfaceBase+TouchPoint";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int64_t cs_69110646eac3c92f{};
std::int32_t cs_3b9b9f07493bab63{};
std::int32_t cs_0556df4715acbd82{};
float cs_c5b0b4bdfc0bc3e5{};
float cs_80159b241b8b0fb0{};
float cs_a14ff763839a39fc{};
float cs_cdbd50f771e65195{};
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_07a9daa229d89929{};
};

void cs_init_70b7974d356d68ab();

pls::cs::Ref<cs_70b7974d356d68ab> cs_939028c47866c657();

void cs_939028c47866c657_init(pls::cs::Ref<cs_70b7974d356d68ab> cs_this);

void cs_dbab81fd91425aae(pls::cs::Ref<cs_70b7974d356d68ab> cs_this,std::int64_t v_key,float v_x,float v_y,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component);
}
