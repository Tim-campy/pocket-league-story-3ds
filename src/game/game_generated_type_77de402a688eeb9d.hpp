// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_77de402a688eeb9d : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_77de402a688eeb9d)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.io.HttpObject";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<pls::kairo::OfflineWebRequest> cs_d19c98fe2d601ad1{};
pls::cs::String cs_f78aa7a0d989fd7c{};
std::int32_t cs_32388247d17bb567{};
pls::cs::String cs_0810a6bbdad8f652{};
pls::cs::String cs_37f984d70850be71{};
pls::cs::Ref<pls::cs::ExceptionObject> cs_c3b53640b80e29dc{};
bool cs_fa8defba521b90ce{};
bool cs_7db6741aeec24156{};
};

void cs_init_77de402a688eeb9d();

pls::cs::Array<pls::cs::Array<std::uint8_t>> cs_d2a21b4a921597a9(pls::cs::Ref<cs_77de402a688eeb9d> cs_this,pls::cs::String v_url,pls::cs::Array<std::uint8_t> v_send,bool v_check,bool v_split);

pls::cs::Ref<cs_77de402a688eeb9d> cs_e751bd24448f57f3(bool v_retryEnable);

void cs_e751bd24448f57f3_init(pls::cs::Ref<cs_77de402a688eeb9d> cs_this,bool v_retryEnable);

pls::cs::Array<pls::cs::Array<std::uint8_t>> cs_996b0c2cdd719ab2(pls::cs::Ref<cs_77de402a688eeb9d> cs_this,pls::cs::String v_url,pls::cs::Array<std::uint8_t> v_send,bool v_check,bool v_split);

pls::cs::Array<std::uint8_t> cs_b9e6030919acf56d(pls::cs::Ref<cs_77de402a688eeb9d> cs_this,pls::cs::String v_url,pls::cs::Array<std::uint8_t> v_send,bool v_check);

bool cs_a14193378f92facc(pls::cs::Ref<cs_77de402a688eeb9d> cs_this);

std::int32_t cs_bc4c613a89384b31(pls::cs::Ref<cs_77de402a688eeb9d> cs_this);

pls::cs::String cs_a267b8503432886a(pls::cs::Ref<cs_77de402a688eeb9d> cs_this);

pls::cs::String cs_cab4479c3676c376(pls::cs::Ref<cs_77de402a688eeb9d> cs_this);

pls::cs::String cs_c4f4767aa3a57458(pls::cs::Ref<cs_77de402a688eeb9d> cs_this);

pls::cs::String cs_0c1c941d76211aca(pls::cs::Ref<cs_77de402a688eeb9d> cs_this);

void cs_2756d68ee4aaa074(pls::cs::Ref<cs_77de402a688eeb9d> cs_this,bool v_value);
}
