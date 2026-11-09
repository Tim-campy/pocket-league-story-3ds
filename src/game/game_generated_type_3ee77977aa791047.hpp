// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_4c145fe8f008af05.hpp"
#include "game_generated_type_5451b2154f09f4c5.hpp"
namespace pls::game {

struct cs_3ee77977aa791047 : cs_5451b2154f09f4c5, cs_4c145fe8f008af05 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_3ee77977aa791047)||target==typeid(cs_5451b2154f09f4c5)||cs_5451b2154f09f4c5::source_reference_assignable(target)||target==typeid(pls::kairo::TouchValueAccessor)||target==typeid(cs_4c145fe8f008af05);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="ToString")return "M:form.BootForm.ToString";if(slot=="Init")return "M:form.BootForm.Init";if(slot=="Update")return "M:form.BootForm.Update";if(slot=="Draw")return "M:form.BootForm.Draw(kairo.unity.ui.Graphics)";if(slot=="Resume")return "M:form.BootForm.Resume";if(slot=="Finish")return "M:form.BootForm.Finish";if(slot=="cs_virtual_6cb47d5f5df8e7cc")return "M:form.BootForm.Run";if(slot=="GetTouchValue")return "M:form.BootForm.GetTouchValue(System.Int32,System.Int32)";if(slot=="SetTouchValue")return "M:form.BootForm.SetTouchValue(System.Int32,System.Int32)";if(slot=="GetHashCode")return "M:form.BootForm.GetHashCode";return cs_5451b2154f09f4c5::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "form.BootForm";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_332c722114186192{};
std::int32_t cs_5a407fb922f37c37{};
pls::cs::SharedField<std::int32_t> cs_50967e326a7bbbbd{};
pls::cs::SharedField<std::int32_t> cs_ce3369fbd327b7a0{};
pls::cs::SharedField<std::int32_t> cs_44d5fb44b1f41bf5{};
pls::cs::SharedField<std::int32_t> cs_a10997b469475b56{};
std::int32_t cs_45ffafddf1be62e6{};
pls::cs::SharedField<pls::cs::Array<std::uint8_t>> cs_d4fdac27acfefcb2{};
pls::cs::Ref<cs_a2cea92715051fa5> cs_5a131165c96174ac{};
pls::cs::SharedField<pls::cs::String> cs_1febb41a157e3b5d{};
pls::cs::SharedField<pls::cs::Ref<cs_89c0d586cfe20341>> cs_af791439497eda14{};
pls::cs::SharedField<pls::cs::Ref<pls::cs::ExceptionObject>> cs_e9a3c0b0cc865ebd{};
pls::cs::Ref<cs_b728593e3dcffe31> cs_94b492b69e0b22d6{};
pls::cs::SharedField<std::int32_t> cs_987ad2754f9e0c7f{};
std::int32_t cs_4c334702040e1941{};
std::int32_t cs_f1f90f164c0f64c6{};
std::int32_t cs_746d02625e76402b{};
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

void cs_init_3ee77977aa791047();

pls::cs::Array<pls::cs::Array<std::int32_t>>& cs_4ec51a95e4fbbaef();

pls::cs::Ref<cs_3ee77977aa791047> cs_03172f7ba0b3ea2e();

void cs_03172f7ba0b3ea2e_init(pls::cs::Ref<cs_3ee77977aa791047> cs_this);

void cs_42bb8aebe071689d(pls::cs::Ref<cs_3ee77977aa791047> cs_this,std::int32_t v_state);

void cs_447101f05fb5af24(pls::cs::Ref<cs_3ee77977aa791047> cs_this);

pls::cs::Array<pls::cs::Array<std::uint8_t>> cs_e44afa197352af80(pls::cs::Ref<cs_3ee77977aa791047> cs_this,pls::cs::String v_url);

void cs_c6afef41251df5e5(pls::cs::Ref<cs_3ee77977aa791047> cs_this);

void cs_12eb36fc63ec269b(pls::cs::Ref<cs_3ee77977aa791047> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

bool cs_2f6ed49f4ea77db8(pls::cs::Ref<cs_3ee77977aa791047> cs_this);

std::int32_t cs_c332efb9d5fe5210(pls::cs::Ref<cs_3ee77977aa791047> cs_this);

std::int32_t cs_64179362a8f1bef2(pls::cs::Ref<cs_3ee77977aa791047> cs_this,std::int32_t v_type,std::int32_t v_index);

bool cs_7f13afd8dd5b1d78(pls::cs::Ref<cs_3ee77977aa791047> cs_this);

void cs_630f6e34926b8eba(pls::cs::Ref<cs_3ee77977aa791047> cs_this);

void cs_22b24afcd51ca8be(pls::cs::Ref<cs_3ee77977aa791047> cs_this);

void cs_fdd29ed3d94d1aea(pls::cs::Ref<cs_3ee77977aa791047> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_cnt,std::int32_t v_num);

bool cs_d5208a4d1b935383(pls::cs::Ref<cs_3ee77977aa791047> cs_this);

void cs_b0a9e2c65789b999(pls::cs::Ref<cs_3ee77977aa791047> cs_this);

void cs_de5bb8c9612fd43a(pls::cs::Ref<cs_3ee77977aa791047> cs_this,std::int32_t v_type,std::int32_t v_value);

void cs_a914afd569fe85bf(pls::cs::Ref<cs_3ee77977aa791047> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

pls::cs::String cs_ee9032c5644d1f00(pls::cs::Ref<cs_3ee77977aa791047> cs_this);

bool cs_b95026f36cfa9750(pls::cs::Ref<cs_3ee77977aa791047> cs_this);

void cs_29f7569ef5082bb8(pls::cs::Ref<cs_3ee77977aa791047> cs_this);
}
