// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_10edc785c24978fc.hpp"
#include "game_generated_type_6ee7d14059be1acf.hpp"
namespace pls::game {

struct cs_08829eb6a4df2a40 : cs_6ee7d14059be1acf {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_08829eb6a4df2a40)||target==typeid(cs_6ee7d14059be1acf)||cs_6ee7d14059be1acf::source_reference_assignable(target)||target==typeid(cs_10edc785c24978fc);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_39912b67b6e00cf6")return "M:system.billing.MyBilling.ExecuteApplyTask(system.billing.ui.ApplyTask)";if(slot=="cs_virtual_219ebd8a0b10d8e7")return "M:system.billing.MyBilling.Provisioning(system.billing.ui.ApplyTask)";if(slot=="cs_virtual_5255d4c2789eac48")return "M:system.billing.MyBilling.Cancel(system.billing.ui.ApplyTask)";if(slot=="cs_virtual_6e47643190d08935")return "M:system.billing.MyBilling.CheckPlayingGame";return cs_6ee7d14059be1acf::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.billing.MyBilling";}
std::string managed_type_name()const override{return source_managed_type_name();}
virtual bool cs_virtual_39912b67b6e00cf6(pls::cs::Ref<cs_feb7ae74aa59a27c> v_task);
virtual void cs_virtual_219ebd8a0b10d8e7(pls::cs::Ref<cs_feb7ae74aa59a27c> v_task);
virtual void cs_virtual_5255d4c2789eac48(pls::cs::Ref<cs_feb7ae74aa59a27c> v_task);
virtual bool cs_virtual_6e47643190d08935();
};

void cs_init_08829eb6a4df2a40();

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_435cb1470132c214();

pls::cs::Ref<pls::kairo::IApplication>& cs_2b99e3af7643ea42();

pls::cs::Ref<cs_6485f92c2f04639f>& cs_853c51ab649a13bb();

pls::cs::Ref<cs_08829eb6a4df2a40> cs_b6efdcfa6839537c();

void cs_b6efdcfa6839537c_init(pls::cs::Ref<cs_08829eb6a4df2a40> cs_this);

void cs_4b3a4c3c146ac496(pls::cs::Ref<cs_08829eb6a4df2a40> cs_this,pls::cs::Ref<cs_feb7ae74aa59a27c> v_task);

bool cs_ce7e41599b3302a7(pls::cs::Ref<cs_08829eb6a4df2a40> cs_this);

bool cs_988a3445769c5f7e(pls::cs::Ref<cs_08829eb6a4df2a40> cs_this,pls::cs::Ref<cs_feb7ae74aa59a27c> v_task);

pls::cs::Array<pls::cs::Array<pls::cs::String>> cs_bb154ea958b26a29(pls::cs::Ref<cs_08829eb6a4df2a40> cs_this);

pls::cs::Ref<cs_08829eb6a4df2a40> cs_aaf24b850afadd84();

void cs_f69ec435bbd73998(pls::cs::Ref<cs_08829eb6a4df2a40> cs_this);

void cs_9194ae34030bef1a(pls::cs::Ref<cs_08829eb6a4df2a40> cs_this,pls::cs::Ref<cs_feb7ae74aa59a27c> v_task);
}
