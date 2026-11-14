// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_f65ba01749ba9d34 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_f65ba01749ba9d34)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.system.GameDataRecord+Data";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_ac47dab08454a832{};
pls::cs::Ref<cs_91b71e223c6a5085> cs_e3cc350442bf2617{};
bool cs_b485e3aec4989e77{};
bool cs_abeb2739082898db{};
};

void cs_init_f65ba01749ba9d34();

pls::cs::Ref<cs_f65ba01749ba9d34> cs_e166ffa7af3293c0(pls::cs::String v_name,pls::cs::Array<std::uint8_t> v_value,bool v_toset);

void cs_e166ffa7af3293c0_init(pls::cs::Ref<cs_f65ba01749ba9d34> cs_this,pls::cs::String v_name,pls::cs::Array<std::uint8_t> v_value,bool v_toset);
}
