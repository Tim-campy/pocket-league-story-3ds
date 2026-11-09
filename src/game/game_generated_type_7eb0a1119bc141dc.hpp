// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_4c145fe8f008af05.hpp"
#include "game_generated_type_5451b2154f09f4c5.hpp"
namespace pls::game {

struct cs_7eb0a1119bc141dc : cs_5451b2154f09f4c5, cs_4c145fe8f008af05 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_7eb0a1119bc141dc)||target==typeid(cs_5451b2154f09f4c5)||cs_5451b2154f09f4c5::source_reference_assignable(target)||target==typeid(pls::kairo::TouchValueAccessor)||target==typeid(cs_4c145fe8f008af05);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="ToString")return "M:form.SpForm.ToString";if(slot=="Init")return "M:form.SpForm.Init";if(slot=="Update")return "M:form.SpForm.Update";if(slot=="Draw")return "M:form.SpForm.Draw(kairo.unity.ui.Graphics)";if(slot=="Resume")return "M:form.SpForm.Resume";if(slot=="Finish")return "M:form.SpForm.Finish";if(slot=="cs_virtual_6cb47d5f5df8e7cc")return "M:form.SpForm.Run";if(slot=="GetTouchValue")return "M:form.SpForm.GetTouchValue(System.Int32,System.Int32)";if(slot=="SetTouchValue")return "M:form.SpForm.SetTouchValue(System.Int32,System.Int32)";if(slot=="GetHashCode")return "M:form.SpForm.GetHashCode";return cs_5451b2154f09f4c5::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "form.SpForm";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_aef1881789f93c09{};
std::int32_t cs_23cd30767e2b76b6{};
pls::cs::String cs_d2d8d8f73b8b09c5{};
pls::cs::String cs_1ffddc0a14925741{};
bool cs_3f37ed781c8075a1{};
std::int32_t cs_19487b4929e548b7{};
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_406f4e1e932dcef3{};
std::int32_t cs_0f862ef8b98fb0a3{};
std::int32_t cs_ebd998ea9896d1ef{};
pls::cs::Ref<cs_89c0d586cfe20341> cs_6dd20b298b41459d{};
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_8e47982ff86c36e8{};
pls::cs::Array<std::uint8_t> cs_05c1dab716929040{};
std::int32_t cs_79f23615172b0aac{};
virtual pls::cs::String ToString();
virtual bool Init();
virtual bool Update();
virtual void Draw(pls::cs::Ref<pls::kairo::Graphics> v_g);
virtual bool Resume();
virtual bool Finish();
virtual void cs_virtual_6cb47d5f5df8e7cc();
virtual std::int32_t GetTouchValue(std::int32_t v_type,std::int32_t v_index);
virtual void SetTouchValue(std::int32_t v_type,std::int32_t v_value);
virtual std::int32_t GetHashCode();
};

void cs_init_7eb0a1119bc141dc();

pls::cs::Array<pls::cs::Array<std::int32_t>>& cs_ecdd12a7a529d33a();

void cs_3df63b5e0818c73d(pls::cs::Ref<cs_7eb0a1119bc141dc> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

pls::cs::Ref<cs_7eb0a1119bc141dc> cs_9b717c692f7d696e();

void cs_9b717c692f7d696e_init(pls::cs::Ref<cs_7eb0a1119bc141dc> cs_this);

pls::cs::Ref<cs_7eb0a1119bc141dc> cs_122d27bb8b75d40b(pls::cs::Ref<pls::cs::ExceptionObject> v_th);

void cs_122d27bb8b75d40b_init(pls::cs::Ref<cs_7eb0a1119bc141dc> cs_this,pls::cs::Ref<pls::cs::ExceptionObject> v_th);

void cs_6f27d428ebac1634(pls::cs::Ref<cs_7eb0a1119bc141dc> cs_this,std::int32_t v_id,pls::cs::String v_str);

void cs_37d7a155e6cebe13(pls::cs::Ref<cs_7eb0a1119bc141dc> cs_this,std::int32_t v_state);

void cs_c70c9dc115a7d15d(pls::cs::Ref<cs_7eb0a1119bc141dc> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

bool cs_087864ad04891f7d(pls::cs::Ref<cs_7eb0a1119bc141dc> cs_this);

std::int32_t cs_7890b8933e5494c6(pls::cs::Ref<cs_7eb0a1119bc141dc> cs_this);

std::int32_t cs_4f7f903e64b08713(pls::cs::Ref<cs_7eb0a1119bc141dc> cs_this,std::int32_t v_type,std::int32_t v_index);

bool cs_affa57deeadcf8fe(pls::cs::Ref<cs_7eb0a1119bc141dc> cs_this);

void cs_008d18ec9ef5cd90(pls::cs::Ref<cs_7eb0a1119bc141dc> cs_this);

bool cs_305dfcfb28ab9c87(pls::cs::Ref<cs_7eb0a1119bc141dc> cs_this);

void cs_b858b36069a76eb9(pls::cs::Ref<cs_7eb0a1119bc141dc> cs_this);

void cs_70a4bf233f4613fb(pls::cs::Ref<cs_7eb0a1119bc141dc> cs_this,std::int32_t v_type,std::int32_t v_value);

void cs_20e7594ab76bbe1b(pls::cs::Ref<cs_7eb0a1119bc141dc> cs_this,pls::cs::String v_text,pls::cs::String v_buttons);

pls::cs::String cs_7ecc9e73b43a1714(pls::cs::Ref<cs_7eb0a1119bc141dc> cs_this);

bool cs_479b0fad2741c8e1(pls::cs::Ref<cs_7eb0a1119bc141dc> cs_this);
}
