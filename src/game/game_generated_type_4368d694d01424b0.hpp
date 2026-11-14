// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_4368d694d01424b0 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_4368d694d01424b0)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_9ed05c6b3a5346ec")return "M:kairo.unity.system.notification.ui.NotifyManager.OnNotify";if(slot=="cs_virtual_2186b93ea03d07c2")return "M:kairo.unity.system.notification.ui.NotifyManager.OnReceiveValue";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.system.notification.ui.NotifyManager";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::List<pls::cs::String> cs_e57500c12d1324ce{};
bool cs_c8c6e41546654cef{};
std::int32_t cs_5d5ca7bd52c7784a{};
virtual void cs_virtual_9ed05c6b3a5346ec();
virtual void cs_virtual_2186b93ea03d07c2();
};

void cs_init_4368d694d01424b0();

pls::cs::Ref<cs_4368d694d01424b0>& cs_af3cecaddfff33af();

pls::cs::Ref<cs_4368d694d01424b0> cs_f936e6cee1a07442();

void cs_f936e6cee1a07442_init(pls::cs::Ref<cs_4368d694d01424b0> cs_this);

void cs_fb49ecfe97c9cd02(pls::cs::Ref<cs_4368d694d01424b0> cs_this);

void cs_f30d255f82bcb932(pls::cs::Ref<cs_4368d694d01424b0> cs_this);

pls::cs::Ref<cs_4368d694d01424b0> cs_fc7db26d427c32ff();

bool cs_c4e7fa21030fbd91(pls::cs::Ref<cs_4368d694d01424b0> cs_this);

void cs_9ed05c6b3a5346ec(pls::cs::Ref<cs_4368d694d01424b0> cs_this);

void cs_2186b93ea03d07c2(pls::cs::Ref<cs_4368d694d01424b0> cs_this);
}
