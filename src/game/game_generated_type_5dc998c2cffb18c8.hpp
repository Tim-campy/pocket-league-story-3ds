// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_4c145fe8f008af05.hpp"
#include "game_generated_type_5451b2154f09f4c5.hpp"
namespace pls::game {

struct cs_5dc998c2cffb18c8 : cs_5451b2154f09f4c5, cs_4c145fe8f008af05 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_5dc998c2cffb18c8)||target==typeid(cs_5451b2154f09f4c5)||cs_5451b2154f09f4c5::source_reference_assignable(target)||target==typeid(pls::kairo::TouchValueAccessor)||target==typeid(cs_4c145fe8f008af05);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="ToString")return "M:system.form.HttpForm.ToString";if(slot=="Init")return "M:system.form.HttpForm.Init";if(slot=="Draw")return "M:system.form.HttpForm.Draw(kairo.unity.ui.Graphics)";if(slot=="Update")return "M:system.form.HttpForm.Update";if(slot=="Finish")return "M:system.form.HttpForm.Finish";if(slot=="CheckMainWindow")return "M:system.form.HttpForm.CheckMainWindow";if(slot=="cs_virtual_6cb47d5f5df8e7cc")return "M:system.form.HttpForm.Run";return cs_5451b2154f09f4c5::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.form.HttpForm";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)> cs_29c88f84473383fb{};
pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)> cs_10571fb04b30cc3f{};
std::int32_t cs_4ec59762286c4307{};
pls::cs::Ref<cs_89c0d586cfe20341> cs_88389be19ba33eb1{};
pls::cs::Ref<cs_408ac5c74e5f3515> cs_3ae23c92a69c00cc{};
pls::cs::Dictionary<pls::cs::String,pls::cs::Ref<pls::cs::Object>> cs_c1863875b9b75cb4{};
bool cs_bf94607445778940{};
bool cs_e855bbf60b28c0af{};
virtual pls::cs::String ToString();
virtual bool Init();
virtual void Draw(pls::cs::Ref<pls::kairo::Graphics> v_g);
virtual bool Update();
virtual bool Finish();
virtual bool CheckMainWindow();
virtual void cs_virtual_6cb47d5f5df8e7cc();
};

void cs_init_5dc998c2cffb18c8();

std::int32_t& cs_6165a1c4f7bf45ea();

std::int32_t& cs_4eda79c4b15c03ea();

std::int32_t& cs_21099aafdcadb3e3();

std::int32_t& cs_34052c1785c8754e();

pls::cs::Ref<cs_5dc998c2cffb18c8> cs_148ae4520ebf5819(pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)> v_connectMethod,pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)> v_resultMethod);

void cs_148ae4520ebf5819_init(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this,pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)> v_connectMethod,pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)> v_resultMethod);

bool cs_caae27da0b1b6167(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this);

void cs_cf0a08b4237473bc(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

void cs_611b444a90ba63e4(pls::cs::Ref<pls::kairo::Graphics> v_g);

bool cs_03296355172125d8(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this);

bool cs_c94b8415150fa1bf(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this);

bool cs_f102c933220ac9aa(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this);

bool cs_879e1552c1bc0b54(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this);

void cs_c5e84308fbc916b7(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this);

void cs_6454cbcccfc7db21(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this,bool v_value);

void cs_7f2977d6d7eff4a2(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this,bool v_value);

void cs_d35a505f9a32284f(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this,pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)> v_method);

void cs_eeccced648966040(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this,pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)> v_method);

pls::cs::String cs_9c863e1edb2b5045(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this);

bool cs_f76006a37a507361(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this);
}
