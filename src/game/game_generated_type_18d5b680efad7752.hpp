// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_18d5b680efad7752 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_18d5b680efad7752)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.io.Http+HttpThread";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<cs_89c0d586cfe20341> cs_437ffc21e8449636{};
pls::cs::Ref<cs_77de402a688eeb9d> cs_fda18c2ca470418e{};
bool cs_79a73cb588797b93{};
};

void cs_init_18d5b680efad7752();

pls::cs::Ref<cs_18d5b680efad7752> cs_b1fabebdabf8d17c();

void cs_b1fabebdabf8d17c_init(pls::cs::Ref<cs_18d5b680efad7752> cs_this);
}
