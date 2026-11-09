// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_b489b0d33bb37bb8.hpp"
namespace pls::game {

struct cs_50c5a567a6876ee3 : cs_b489b0d33bb37bb8 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_50c5a567a6876ee3)||target==typeid(cs_b489b0d33bb37bb8)||cs_b489b0d33bb37bb8::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_3481915358ac0fff")return "M:kairo.unity.system.KairoBase.KairoDummy.Save";if(slot=="cs_virtual_06f3c8d943914943")return "M:kairo.unity.system.KairoBase.KairoDummy.SaveAll";if(slot=="cs_virtual_7226942a83482c7a")return "M:kairo.unity.system.KairoBase.KairoDummy.OnSaveGameBegin";if(slot=="cs_virtual_486e7c39f05ac1d6")return "M:kairo.unity.system.KairoBase.KairoDummy.OnSaveGameEnd";return cs_b489b0d33bb37bb8::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.system.KairoBase+KairoDummy";}
std::string managed_type_name()const override{return source_managed_type_name();}
virtual void cs_virtual_3481915358ac0fff();
virtual void cs_virtual_06f3c8d943914943();
virtual void cs_virtual_7226942a83482c7a();
virtual void cs_virtual_486e7c39f05ac1d6();
};

void cs_init_50c5a567a6876ee3();

pls::cs::Ref<cs_50c5a567a6876ee3> cs_145bafe9acaf77f9();

void cs_145bafe9acaf77f9_init(pls::cs::Ref<cs_50c5a567a6876ee3> cs_this);

void cs_b4e47fce38dcaf3b(pls::cs::Ref<cs_50c5a567a6876ee3> cs_this);

void cs_dc354c17f44bb95c(pls::cs::Ref<cs_50c5a567a6876ee3> cs_this);

void cs_e4f93c2947373f31(pls::cs::Ref<cs_50c5a567a6876ee3> cs_this);

void cs_c8026282c0a24bbf(pls::cs::Ref<cs_50c5a567a6876ee3> cs_this);
}
