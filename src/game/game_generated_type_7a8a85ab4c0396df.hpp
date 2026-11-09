// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_5451b2154f09f4c5.hpp"
namespace pls::game {

struct cs_7a8a85ab4c0396df : cs_5451b2154f09f4c5 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_7a8a85ab4c0396df)||target==typeid(cs_5451b2154f09f4c5)||cs_5451b2154f09f4c5::source_reference_assignable(target)||target==typeid(pls::kairo::TouchValueAccessor);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="ToString")return "M:system.form.RestoreForm.ToString";if(slot=="Init")return "M:system.form.RestoreForm.Init";if(slot=="Draw")return "M:system.form.RestoreForm.Draw(kairo.unity.ui.Graphics)";if(slot=="Update")return "M:system.form.RestoreForm.Update";if(slot=="CheckMainWindow")return "M:system.form.RestoreForm.CheckMainWindow";return cs_5451b2154f09f4c5::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.form.RestoreForm";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<pls::kairo::FormBase> cs_2ad2f01fccd9369f{};
pls::cs::String cs_3e466a3cb07b200e{};
virtual pls::cs::String ToString();
virtual bool Init();
virtual void Draw(pls::cs::Ref<pls::kairo::Graphics> v_g);
virtual bool Update();
virtual bool CheckMainWindow();
};

void cs_init_7a8a85ab4c0396df();

pls::cs::Ref<cs_7a8a85ab4c0396df> cs_972efb29b2f26070(pls::cs::Ref<pls::kairo::FormBase> v_next);

void cs_972efb29b2f26070_init(pls::cs::Ref<cs_7a8a85ab4c0396df> cs_this,pls::cs::Ref<pls::kairo::FormBase> v_next);

bool cs_62510745d5314f43(pls::cs::Ref<cs_7a8a85ab4c0396df> cs_this);

void cs_92c8ac080808b50a(pls::cs::Ref<cs_7a8a85ab4c0396df> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

bool cs_c2191f4ad81242f9(pls::cs::Ref<cs_7a8a85ab4c0396df> cs_this);

pls::cs::String cs_6d5017124c1ae7a5(pls::cs::Ref<cs_7a8a85ab4c0396df> cs_this);

bool cs_a5d5caa24a2ba6d6(pls::cs::Ref<cs_7a8a85ab4c0396df> cs_this);
}
