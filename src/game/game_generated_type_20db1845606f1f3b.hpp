// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_8bf13b560e1e05e9.hpp"
namespace pls::game {

struct cs_20db1845606f1f3b : cs_8bf13b560e1e05e9 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_20db1845606f1f3b)||target==typeid(cs_8bf13b560e1e05e9)||cs_8bf13b560e1e05e9::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_75152158b8b3764c")return "M:panel.MainPanel.Show(kairo.unity.ui.Canvas)";if(slot=="cs_virtual_a3ffc1615f910b95")return "M:panel.MainPanel.Show(kairo.unity.ui.Canvas,kfw.panel.MainPanel.OnFinishMethod)";return cs_8bf13b560e1e05e9::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "panel.MainPanel";}
std::string managed_type_name()const override{return source_managed_type_name();}
virtual pls::cs::String cs_virtual_75152158b8b3764c(pls::cs::Ref<pls::kairo::Canvas> v_canvas);
virtual void cs_virtual_a3ffc1615f910b95(pls::cs::Ref<pls::kairo::Canvas> v_canvas,pls::cs::Delegate<void(pls::cs::String)> v_onFinishMethod);
};

void cs_init_20db1845606f1f3b();

pls::cs::Ref<cs_20db1845606f1f3b> cs_edc2000ae353f18e();

void cs_edc2000ae353f18e_init(pls::cs::Ref<cs_20db1845606f1f3b> cs_this);

pls::cs::Ref<cs_20db1845606f1f3b> cs_8947b9476c4f17f7(pls::cs::String v_label,pls::cs::String v_defaultText,std::int32_t v_maxLength);

void cs_8947b9476c4f17f7_init(pls::cs::Ref<cs_20db1845606f1f3b> cs_this,pls::cs::String v_label,pls::cs::String v_defaultText,std::int32_t v_maxLength);

pls::cs::Ref<cs_20db1845606f1f3b> cs_a669d4cd9c91bbb0(pls::cs::String v_label,pls::cs::String v_defaultText);

void cs_a669d4cd9c91bbb0_init(pls::cs::Ref<cs_20db1845606f1f3b> cs_this,pls::cs::String v_label,pls::cs::String v_defaultText);

void cs_14c2613f2e6bc060(pls::cs::Ref<cs_20db1845606f1f3b> cs_this,pls::cs::Ref<pls::kairo::Canvas> v_canvas,pls::cs::Delegate<void(pls::cs::String)> v_onFinishMethod);
}
