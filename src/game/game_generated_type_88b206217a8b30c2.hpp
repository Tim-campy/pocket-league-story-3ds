// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_88b206217a8b30c2 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_88b206217a8b30c2)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.system.KairoBase+ConnectTask";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_1d06f3dfd534c79e{};
pls::cs::Array<std::uint8_t> cs_2e53b2d037c0f0f1{};
std::int64_t cs_710aaad4a1f0ac5f{};
std::int32_t cs_1ca562f042f1542c{};
std::int32_t cs_2d7489c80764903f{};
std::int32_t cs_c665fb818f47218f{};
};

void cs_init_88b206217a8b30c2();

pls::cs::Ref<cs_88b206217a8b30c2> cs_780e36bec4975ef3();

void cs_780e36bec4975ef3_init(pls::cs::Ref<cs_88b206217a8b30c2> cs_this);
}
