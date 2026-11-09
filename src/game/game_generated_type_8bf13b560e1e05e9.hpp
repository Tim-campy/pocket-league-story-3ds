// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_d37bccc1c3814fc6.hpp"
namespace pls::game {

struct cs_8bf13b560e1e05e9 : cs_d37bccc1c3814fc6 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_8bf13b560e1e05e9)||target==typeid(cs_d37bccc1c3814fc6)||cs_d37bccc1c3814fc6::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_75152158b8b3764c")return "M:kfw.panel.MainPanel.Show(kairo.unity.ui.Canvas)";if(slot=="cs_virtual_a3ffc1615f910b95")return "M:kfw.panel.MainPanel.Show(kairo.unity.ui.Canvas,kfw.panel.MainPanel.OnFinishMethod)";if(slot=="cs_virtual_24e6f1c38df06a63")return "M:kfw.panel.MainPanel.ComponentAction(kairo.unity.panel.Component,System.Int32,System.Int32)";return cs_d37bccc1c3814fc6::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kfw.panel.MainPanel";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<cs_4c00a0e0c6e6e2e5> cs_46fa0df374412b7f{};
pls::cs::Ref<cs_4ccab99c775ca4c5> cs_09f89a2340f25102{};
pls::cs::Ref<cs_17bc7a5b28fcdc2a> cs_39b4b25c748676d2{};
pls::cs::Ref<cs_17bc7a5b28fcdc2a> cs_0cf6503d4b8e4210{};
pls::cs::Ref<pls::kairo::Canvas> cs_5a49f60753ca2ee9{};
std::int32_t cs_4be24738d1d8ef7a{};
std::int32_t cs_dfad8621ad4f39fe{};
pls::cs::Array<char16_t> cs_ce90b55fbd071e4f{};
pls::cs::String cs_cbcfd5b19b2bb127{};
bool cs_210652685e2645f7{};
bool cs_d89e7d5965fa0e1a{};
std::int32_t cs_4c3b911964e18cd8{};
bool cs_e45ed7f15498e8a3{};
pls::cs::String cs_d8dd36c416f7b528{};
pls::cs::String cs_6a51aa58c7ee0c73{};
pls::cs::String cs_3ec5e2b430b94a5f{};
pls::cs::Array<pls::cs::String> cs_be69170f8edbb93d{};
pls::cs::Delegate<void(pls::cs::String)> cs_eeee6923a0bfab80{};
virtual pls::cs::String cs_virtual_75152158b8b3764c(pls::cs::Ref<pls::kairo::Canvas> v_canvas);
virtual void cs_virtual_a3ffc1615f910b95(pls::cs::Ref<pls::kairo::Canvas> v_canvas,pls::cs::Delegate<void(pls::cs::String)> v_onFinishMethod);
virtual void cs_virtual_24e6f1c38df06a63(pls::cs::Ref<cs_5ad2213598dfcd5d> v_c,std::int32_t v_type,std::int32_t v_param);
};

void cs_init_8bf13b560e1e05e9();

pls::cs::Ref<cs_8bf13b560e1e05e9> cs_3afc5298ce4a3e84();

void cs_3afc5298ce4a3e84_init(pls::cs::Ref<cs_8bf13b560e1e05e9> cs_this);

pls::cs::Ref<cs_8bf13b560e1e05e9> cs_6b53a5cdc402f43c(pls::cs::String v_label,pls::cs::String v_defaultText,std::int32_t v_maxLength,std::int32_t v_inputMode,pls::cs::String v_itemName);

void cs_6b53a5cdc402f43c_init(pls::cs::Ref<cs_8bf13b560e1e05e9> cs_this,pls::cs::String v_label,pls::cs::String v_defaultText,std::int32_t v_maxLength,std::int32_t v_inputMode,pls::cs::String v_itemName);

void cs_3e2739124195383e(pls::cs::Ref<cs_8bf13b560e1e05e9> cs_this,pls::cs::Ref<cs_5ad2213598dfcd5d> v_c,std::int32_t v_type,std::int32_t v_param);

std::int32_t cs_9dc7651e6c063ad0(pls::cs::Ref<cs_8bf13b560e1e05e9> cs_this,pls::cs::String v_str);

void cs_9ab4bec37ce639be(pls::cs::Ref<cs_8bf13b560e1e05e9> cs_this,pls::cs::String v_label,pls::cs::String v_defaultText,std::int32_t v_maxLength,std::int32_t v_inputMode,pls::cs::String v_itemName);

void cs_b312c8d19342903d(pls::cs::Ref<cs_8bf13b560e1e05e9> cs_this,pls::cs::String v_name);

void cs_a3ffc1615f910b95(pls::cs::Ref<cs_8bf13b560e1e05e9> cs_this,pls::cs::Ref<pls::kairo::Canvas> v_canvas,pls::cs::Delegate<void(pls::cs::String)> v_onFinishMethod);
}
