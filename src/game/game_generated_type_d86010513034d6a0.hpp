// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_d86010513034d6a0 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_d86010513034d6a0)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.util.Language+LanguagePackInfo";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_9cd046221a0a73b2{};
pls::cs::String cs_559ce244f31c7bdd{};
pls::cs::String cs_5a7be69e432288e7{};
pls::cs::String cs_9bdb4dbfef785f37{};
pls::cs::String cs_48810e5f53569359{};
pls::cs::String cs_ab5676da2e5daeda{};
};

void cs_init_d86010513034d6a0();

pls::cs::Ref<cs_d86010513034d6a0> cs_73cc6ce27c640033();

void cs_73cc6ce27c640033_init(pls::cs::Ref<cs_d86010513034d6a0> cs_this);
}
