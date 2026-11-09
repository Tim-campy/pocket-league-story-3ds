// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_5451b2154f09f4c5.hpp"
namespace pls::game {

struct cs_c9cd56cdd30ecf7a : cs_5451b2154f09f4c5 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_c9cd56cdd30ecf7a)||target==typeid(cs_5451b2154f09f4c5)||cs_5451b2154f09f4c5::source_reference_assignable(target)||target==typeid(pls::kairo::TouchValueAccessor);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="ToString")return "M:system.form.LanguageForm.ToString";if(slot=="Init")return "M:system.form.LanguageForm.Init";if(slot=="Update")return "M:system.form.LanguageForm.Update";if(slot=="Finish")return "M:system.form.LanguageForm.Finish";if(slot=="CheckMainWindow")return "M:system.form.LanguageForm.CheckMainWindow";return cs_5451b2154f09f4c5::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.form.LanguageForm";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Array<pls::cs::Array<pls::cs::String>> cs_8b6d6645626719c8{};
pls::cs::String cs_63d0f76aa2b47e31{};
bool cs_ad5739001c0302dd{};
pls::cs::Array<std::uint8_t> cs_98dccec80c6f7e60{};
bool cs_ea3cf9e655c6c62a{};
std::int32_t cs_5622b54c56329dfa{};
virtual pls::cs::String ToString();
virtual bool Init();
virtual bool Update();
virtual bool Finish();
virtual bool CheckMainWindow();
};

void cs_init_c9cd56cdd30ecf7a();

pls::cs::Delegate<void()>& cs_169d42739a93e08e();

bool& cs_40a53d57b75c7593();

pls::cs::Ref<cs_c9cd56cdd30ecf7a> cs_b8786f8cf097476e();

void cs_b8786f8cf097476e_init(pls::cs::Ref<cs_c9cd56cdd30ecf7a> cs_this);

bool cs_27c2d458904084a3(pls::cs::Ref<cs_c9cd56cdd30ecf7a> cs_this);

void cs_da7545682de782c6(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,pls::cs::Delegate<void()> v_callback);

void cs_eee149edf159a78f(pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::Delegate<void()> v_callback,std::int32_t v_anchor);

bool cs_b220f0282476e9dd(pls::cs::Ref<cs_c9cd56cdd30ecf7a> cs_this);

bool cs_d89100ce3e5567b3(pls::cs::Ref<cs_c9cd56cdd30ecf7a> cs_this);

bool cs_233f6a98cc8c5aff(pls::cs::Ref<cs_757516ce190cf813> v_e);

pls::cs::String cs_e349d7428c1381fa(pls::cs::Ref<cs_c9cd56cdd30ecf7a> cs_this);
}
