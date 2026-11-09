// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_5451b2154f09f4c5.hpp"
namespace pls::game {

struct cs_f52c904bea265acc : cs_5451b2154f09f4c5 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_f52c904bea265acc)||target==typeid(cs_5451b2154f09f4c5)||cs_5451b2154f09f4c5::source_reference_assignable(target)||target==typeid(pls::kairo::TouchValueAccessor);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="ToString")return "M:system.form.ConnectForm.ToString";if(slot=="Init")return "M:system.form.ConnectForm.Init";if(slot=="Update")return "M:system.form.ConnectForm.Update";if(slot=="Draw")return "M:system.form.ConnectForm.Draw(kairo.unity.ui.Graphics)";if(slot=="Resume")return "M:system.form.ConnectForm.Resume";if(slot=="Finish")return "M:system.form.ConnectForm.Finish";if(slot=="GetHashCode")return "M:system.form.ConnectForm.GetHashCode";return cs_5451b2154f09f4c5::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.form.ConnectForm";}
std::string managed_type_name()const override{return source_managed_type_name();}
virtual pls::cs::String ToString();
virtual bool Init();
virtual bool Update();
virtual void Draw(pls::cs::Ref<pls::kairo::Graphics> v_g);
virtual bool Resume();
virtual bool Finish();
virtual std::int32_t GetHashCode();
};

void cs_init_f52c904bea265acc();

bool& cs_7a902abf262c4ddf();

pls::cs::Ref<cs_f52c904bea265acc>& cs_b120e26ea937bc88();

std::int32_t& cs_0539026e7603868c();

std::int32_t& cs_e6e37e272cace738();

pls::cs::Ref<cs_b728593e3dcffe31>& cs_467527abd3feb0a2();

void cs_b131397c890a25c9(pls::cs::Ref<cs_f52c904bea265acc> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

pls::cs::Ref<cs_f52c904bea265acc> cs_5fbebbed5279ae0b();

void cs_5fbebbed5279ae0b_init(pls::cs::Ref<cs_f52c904bea265acc> cs_this);

void cs_8f2e07e66a1a99d2(pls::cs::Ref<cs_f52c904bea265acc> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

void cs_0454fc66f95c3746(pls::cs::Ref<pls::kairo::Graphics> v_g);

bool cs_63e8f3ae67da7af4(pls::cs::Ref<cs_f52c904bea265acc> cs_this);

std::int32_t cs_69ffb55861de2893(pls::cs::Ref<cs_f52c904bea265acc> cs_this);

bool cs_45e17a9cd5a326a6(pls::cs::Ref<cs_f52c904bea265acc> cs_this);

bool cs_affd13cffeea0427(pls::cs::Ref<cs_f52c904bea265acc> cs_this);

pls::cs::String cs_7ed9b921ca878f0d(pls::cs::Ref<cs_f52c904bea265acc> cs_this);

bool cs_3b9c14c758ceb110(pls::cs::Ref<cs_f52c904bea265acc> cs_this);
}
