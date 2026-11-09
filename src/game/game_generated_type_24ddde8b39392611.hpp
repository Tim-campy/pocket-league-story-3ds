// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_24ddde8b39392611 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_24ddde8b39392611)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.billing.ui.PurchaseLogView";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_86cc8a271e68cde9{};
std::int32_t cs_050458c631e7a9c0{};
pls::cs::String cs_e9473a0af87a54bc{};
bool cs_04a5436ce9dc3d38{};
};

void cs_init_24ddde8b39392611();

pls::cs::Ref<cs_24ddde8b39392611> cs_67a7684996012e79(pls::cs::String v_title);

void cs_67a7684996012e79_init(pls::cs::Ref<cs_24ddde8b39392611> cs_this,pls::cs::String v_title);

void cs_5ff6954fb3a61a02(pls::cs::Ref<cs_24ddde8b39392611> cs_this,std::int32_t v_num,pls::cs::String v_text,bool v_log);
}
