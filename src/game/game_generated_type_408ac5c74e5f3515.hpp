// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_408ac5c74e5f3515 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_408ac5c74e5f3515)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.form.HttpForm+ResultData";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Dictionary<pls::cs::String,pls::cs::Ref<pls::cs::Object>> cs_71dbc351ecc57982{};
pls::cs::Ref<pls::cs::ExceptionObject> cs_fcff22ab2f484bde{};
pls::cs::String cs_7d56a65066430756{};
bool cs_4d9cb6241cd66304{};
};

void cs_init_408ac5c74e5f3515();

pls::cs::Ref<cs_408ac5c74e5f3515> cs_8aaa473de163f748();

void cs_8aaa473de163f748_init(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this);

void cs_c91786768676e5e6(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this,pls::cs::String v_key,pls::cs::Ref<pls::cs::Object> v_data);

pls::cs::String cs_afca4e9abd6175de(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this);

pls::cs::Ref<pls::cs::ExceptionObject> cs_6ed697c2d33e26f6(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this);

bool cs_07512424539c2fc2(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this);

pls::cs::Ref<pls::cs::Object> cs_1a4dc7b41c694d0c(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this,pls::cs::String v_key);

bool cs_4d31a276865668d1(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this,pls::cs::String v_key);

void cs_491eae3eae7d9573(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this,pls::cs::String v_value);

void cs_8d58629cef163b32(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this,pls::cs::Ref<pls::cs::ExceptionObject> v_value);

void cs_961e1edcb72ada4a(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this,bool v_value);
}
