// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_4368d694d01424b0.hpp"
namespace pls::game {

struct cs_23ed5cbd0e3922f3 : cs_4368d694d01424b0 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_23ed5cbd0e3922f3)||target==typeid(cs_4368d694d01424b0)||cs_4368d694d01424b0::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_9ed05c6b3a5346ec")return "M:system.notification.MyNotify.OnNotify";if(slot=="cs_virtual_2186b93ea03d07c2")return "M:system.notification.MyNotify.OnReceiveValue";return cs_4368d694d01424b0::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.notification.MyNotify";}
std::string managed_type_name()const override{return source_managed_type_name();}
virtual void cs_virtual_9ed05c6b3a5346ec();
virtual void cs_virtual_2186b93ea03d07c2();
};

void cs_init_23ed5cbd0e3922f3();

pls::cs::Ref<cs_23ed5cbd0e3922f3> cs_ad74a61a58fd6836();

void cs_ad74a61a58fd6836_init(pls::cs::Ref<cs_23ed5cbd0e3922f3> cs_this);

pls::cs::Ref<cs_23ed5cbd0e3922f3> cs_baa886ffdf138e8e();

void cs_a56b328f925cc5e4(pls::cs::Ref<cs_23ed5cbd0e3922f3> cs_this);

void cs_e17b9d62b02e038f(pls::cs::Ref<cs_23ed5cbd0e3922f3> cs_this);
}
