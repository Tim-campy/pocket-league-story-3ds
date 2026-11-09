// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_4c145fe8f008af05.hpp"
namespace pls::game {

struct cs_6485f92c2f04639f : pls::kairo::FormManagerBase {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_6485f92c2f04639f)||target==typeid(pls::kairo::FormManagerBase)||pls::kairo::FormManagerBase::source_reference_assignable(target)||target==typeid(cs_4c145fe8f008af05);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="Resume")return "M:form.FormManager.Resume";if(slot=="PreUpdate")return "M:form.FormManager.PreUpdate";if(slot=="Updated")return "M:form.FormManager.Updated";if(slot=="PreDraw")return "M:form.FormManager.PreDraw";if(slot=="Drawn")return "M:form.FormManager.Drawn";return pls::kairo::FormManagerBase::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "form.FormManager";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int64_t cs_f7c726d5f7453081{};
std::int64_t cs_213b43c6313167d5{};
bool cs_b1f64c12ee069ce4{};
std::int32_t cs_67befa25cd8b724d{};
std::int32_t cs_935c4effb0a9f4a2{};
std::int32_t cs_c66d2c7306a933ee{};
std::int32_t cs_54b129fa469a5123{};
std::int32_t cs_e59b36fb7c335c88{};
std::int32_t cs_b3ff53c3ce1a0ba1{};
std::int32_t cs_fc84ac8886107388{};
std::int32_t cs_b808145f1887387b{};
std::int32_t cs_878ddfd231392189{};
virtual void Resume();
virtual void PreUpdate();
virtual void Updated();
virtual void PreDraw();
virtual void Drawn();
};

void cs_init_6485f92c2f04639f();

pls::cs::Ref<cs_6485f92c2f04639f>& cs_84bcc52ce28bc88e();

pls::cs::Ref<cs_6485f92c2f04639f> cs_ec84f3d30b68a2f9();

void cs_ec84f3d30b68a2f9_init(pls::cs::Ref<cs_6485f92c2f04639f> cs_this);

void cs_aef35d29fb0c05ad(pls::cs::Ref<cs_6485f92c2f04639f> cs_this);

std::int32_t cs_3dd794f17d9de88a(pls::cs::Ref<cs_6485f92c2f04639f> cs_this);

pls::cs::Ref<cs_6485f92c2f04639f> cs_2daa26d559c2fca8();

std::int32_t cs_db89980015f74cec(pls::cs::Ref<cs_6485f92c2f04639f> cs_this);

void cs_9676c9e84aa6f245(pls::cs::Ref<cs_6485f92c2f04639f> cs_this);

void cs_b0991735904063ea(pls::cs::Ref<cs_6485f92c2f04639f> cs_this);

void cs_630e1ac8aa82b9e5(pls::cs::Ref<cs_6485f92c2f04639f> cs_this);

void cs_dc9257b0bbd34fc9(pls::cs::Ref<cs_6485f92c2f04639f> cs_this,std::int32_t v_fps);

void cs_c1e8dc738f793cd7(pls::cs::Ref<cs_6485f92c2f04639f> cs_this);

void cs_4defd304e2135f12(pls::cs::Ref<cs_6485f92c2f04639f> cs_this);
}
