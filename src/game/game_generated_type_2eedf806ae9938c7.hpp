// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_2eedf806ae9938c7 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_2eedf806ae9938c7)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.ui.DepthInfo";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<cs_9cade6927d6e0bf3> cs_5c26a6245102c9da{};
std::int32_t cs_bf63c0f364fb7899{};
std::int32_t cs_35b13ab65613f601{};
std::int32_t cs_a761c125310aa486{};
std::int32_t cs_634b21dce02e25f1{};
std::int64_t cs_2214583ad4513e43{};
pls::cs::Array<std::int32_t> cs_9af277b6dbe45809{};
};
}
