// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_4c145fe8f008af05.hpp"
#include "game_generated_type_5451b2154f09f4c5.hpp"
namespace pls::game {

struct cs_c63e265fb6ff73e9 : cs_5451b2154f09f4c5, cs_4c145fe8f008af05 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_c63e265fb6ff73e9)||target==typeid(cs_5451b2154f09f4c5)||cs_5451b2154f09f4c5::source_reference_assignable(target)||target==typeid(pls::kairo::TouchValueAccessor)||target==typeid(cs_4c145fe8f008af05);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="ToString")return "M:system.form.MatchForm.ToString";if(slot=="Init")return "M:system.form.MatchForm.Init";if(slot=="Draw")return "M:system.form.MatchForm.Draw(kairo.unity.ui.Graphics)";if(slot=="Finish")return "M:system.form.MatchForm.Finish";if(slot=="Resume")return "M:system.form.MatchForm.Resume";if(slot=="Update")return "M:system.form.MatchForm.Update";if(slot=="GetTouchValue")return "M:system.form.MatchForm.GetTouchValue(System.Int32,System.Int32)";if(slot=="SetTouchValue")return "M:system.form.MatchForm.SetTouchValue(System.Int32,System.Int32)";if(slot=="CheckMainWindow")return "M:system.form.MatchForm.CheckMainWindow";if(slot=="cs_virtual_6cb47d5f5df8e7cc")return "M:system.form.MatchForm.Run";if(slot=="GetHashCode")return "M:system.form.MatchForm.GetHashCode";return cs_5451b2154f09f4c5::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.form.MatchForm";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_0c2d548f3728d740{};
bool cs_feba1717d60b5691{};
std::int32_t cs_8c63b4493a85935e{};
std::int32_t cs_734678a50ebceb4a{};
std::int32_t cs_4bb5c3a6226854eb{};
std::int32_t cs_86deab007f9c32fe{};
std::int32_t cs_17a1d296b3a77b16{};
bool cs_5aa48abd014a25b5{};
pls::cs::Array<pls::cs::Ref<cs_3855bfc5096e5e16>> cs_57680a4eea56750a{};
pls::cs::Ref<cs_3855bfc5096e5e16> cs_e8910c75cf233189{};
std::int32_t cs_fa595b12dea8b849{};
std::int32_t cs_d0ea6f6e5f435277{};
pls::cs::Array<pls::cs::Array<pls::cs::Ref<cs_3855bfc5096e5e16>>> cs_d153a1a8d9bea631{};
std::int32_t cs_e6f2afddc6ad124e{};
std::int32_t cs_d19c8207c5e86c5d{};
pls::cs::String cs_bdb10fbc9b318603{};
pls::cs::Ref<cs_89c0d586cfe20341> cs_9439af5fa0c1f93c{};
virtual pls::cs::String ToString();
virtual bool Init();
virtual void Draw(pls::cs::Ref<pls::kairo::Graphics> v_g);
virtual bool Finish();
virtual bool Resume();
virtual bool Update();
virtual std::int32_t GetTouchValue(std::int32_t v_type,std::int32_t v_index);
virtual void SetTouchValue(std::int32_t v_type,std::int32_t v_value);
virtual bool CheckMainWindow();
virtual void cs_virtual_6cb47d5f5df8e7cc();
virtual std::int32_t GetHashCode();
};

void cs_init_c63e265fb6ff73e9();

pls::cs::Array<pls::cs::Array<std::int32_t>>& cs_819bdeccec161577();

void cs_e3c23e4f2567a056(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

bool cs_2a5e55077613c702(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this);

pls::cs::Ref<cs_c63e265fb6ff73e9> cs_2c89c48d2af86765();

void cs_2c89c48d2af86765_init(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this);

pls::cs::Ref<cs_c63e265fb6ff73e9> cs_ea036ba10872a3b3(std::int32_t v_type);

void cs_ea036ba10872a3b3_init(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this,std::int32_t v_type);

bool cs_b3bffc2410b4d94b(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this);

void cs_ea7e56a5733aa227(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

pls::cs::Array<std::int32_t> cs_6eb22d59c1b6ff83(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,std::int32_t v_anchor,bool v_active,std::int32_t v_margin,bool v_cursor);

bool cs_28f69dfcc12f8ce5(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this);

std::int32_t cs_d2c3db6c33dce4e4(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this);

std::int32_t cs_67dd227a98626429(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this,std::int32_t v_type,std::int32_t v_index);

bool cs_57c70e6e7991c22c(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this);

bool cs_8ef5f4c367db33f4(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this);

void cs_e882a89810a20b62(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this);

void cs_138177c5ca8d7e75(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this,std::int32_t v_type,std::int32_t v_value);

void cs_fe024bdc277f72eb(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this,std::int32_t v_type);

pls::cs::String cs_90a97af61ea9a1ba(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this);

bool cs_7cbc9cffcf0b164e(pls::cs::Ref<cs_c63e265fb6ff73e9> cs_this);
}
