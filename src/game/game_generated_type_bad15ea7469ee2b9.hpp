// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_bad15ea7469ee2b9 : pls::kairo::IApplication {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_bad15ea7469ee2b9)||target==typeid(pls::kairo::IApplication)||pls::kairo::IApplication::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="OnCreate")return "M:main.Main.OnCreate";if(slot=="OnUpdate")return "M:main.Main.OnUpdate";if(slot=="OnDraw")return "M:main.Main.OnDraw";if(slot=="OnResume")return "M:main.Main.OnResume";if(slot=="OnSuspend")return "M:main.Main.OnSuspend";if(slot=="OnDestroy")return "M:main.Main.OnDestroy";if(slot=="GetFormManager")return "M:main.Main.GetFormManager";return pls::kairo::IApplication::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "main.Main";}
std::string managed_type_name()const override{return source_managed_type_name();}
virtual void OnCreate();
virtual void OnUpdate();
virtual void OnDraw();
virtual void OnResume();
virtual void OnSuspend();
virtual void OnDestroy();
virtual pls::cs::Ref<pls::kairo::FormManagerBase> GetFormManager();
};

void cs_init_bad15ea7469ee2b9();

pls::cs::Ref<pls::kairo::SoundBase>& cs_18a692dfac4d8961();

std::int32_t& cs_18491103f721bd96();

pls::cs::Ref<cs_bad15ea7469ee2b9> cs_7703d612ae2455fc();

void cs_7703d612ae2455fc_init(pls::cs::Ref<cs_bad15ea7469ee2b9> cs_this);

pls::cs::Ref<pls::kairo::FormManagerBase> cs_a8d7ff329d533cce(pls::cs::Ref<cs_bad15ea7469ee2b9> cs_this);

pls::cs::Ref<cs_bad15ea7469ee2b9> cs_29da291d171721a6();

pls::cs::Ref<pls::kairo::SoundBase> cs_ab00e9e29753ed8a();

void cs_fe479bb5365005e6(pls::cs::Ref<cs_bad15ea7469ee2b9> cs_this);

void cs_436207ec3f57c2d7(pls::cs::Ref<cs_bad15ea7469ee2b9> cs_this);

void cs_ac69d759d513a4d5(pls::cs::Ref<cs_bad15ea7469ee2b9> cs_this);

void cs_fb26c3c912586adf(pls::cs::Ref<cs_bad15ea7469ee2b9> cs_this);

void cs_48b06d9d94c6401b(pls::cs::Ref<cs_bad15ea7469ee2b9> cs_this);

void cs_0b355334e1fce7ed(pls::cs::Ref<cs_bad15ea7469ee2b9> cs_this);

void cs_c664e46032693c99(pls::cs::Ref<pls::kairo::SoundBase> v_sound,std::int32_t v_wait);
}
