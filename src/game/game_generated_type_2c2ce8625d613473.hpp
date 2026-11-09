// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_77de402a688eeb9d.hpp"
namespace pls::game {

struct cs_2c2ce8625d613473 : cs_77de402a688eeb9d {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_2c2ce8625d613473)||target==typeid(cs_77de402a688eeb9d)||cs_77de402a688eeb9d::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return cs_77de402a688eeb9d::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.system.KairoBase+ConnectObject";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<cs_b489b0d33bb37bb8> cs_9fbc61c5b5f6475e{};
};
}
