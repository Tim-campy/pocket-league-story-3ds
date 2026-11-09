// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_8bf13b560e1e05e9.hpp"
namespace pls::game {

struct cs_90cdc908fbacdc4d : cs_8bf13b560e1e05e9 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_90cdc908fbacdc4d)||target==typeid(cs_8bf13b560e1e05e9)||cs_8bf13b560e1e05e9::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_75152158b8b3764c")return "M:system.panel.InputPanel.Show(kairo.unity.ui.Canvas)";if(slot=="cs_virtual_a3ffc1615f910b95")return "M:system.panel.InputPanel.Show(kairo.unity.ui.Canvas,kfw.panel.MainPanel.OnFinishMethod)";return cs_8bf13b560e1e05e9::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.panel.InputPanel";}
std::string managed_type_name()const override{return source_managed_type_name();}
virtual pls::cs::String cs_virtual_75152158b8b3764c(pls::cs::Ref<pls::kairo::Canvas> v_canvas);
virtual void cs_virtual_a3ffc1615f910b95(pls::cs::Ref<pls::kairo::Canvas> v_canvas,pls::cs::Delegate<void(pls::cs::String)> v_onFinishMethod);
};

void cs_init_90cdc908fbacdc4d();

pls::cs::Ref<cs_90cdc908fbacdc4d> cs_8a97d90a17275f58();

void cs_8a97d90a17275f58_init(pls::cs::Ref<cs_90cdc908fbacdc4d> cs_this);

pls::cs::Ref<cs_90cdc908fbacdc4d> cs_7236fab2e58bd0b3(pls::cs::String v_label,pls::cs::String v_defaultText,std::int32_t v_maxLength,std::int32_t v_inputMode,pls::cs::String v_itemName);

void cs_7236fab2e58bd0b3_init(pls::cs::Ref<cs_90cdc908fbacdc4d> cs_this,pls::cs::String v_label,pls::cs::String v_defaultText,std::int32_t v_maxLength,std::int32_t v_inputMode,pls::cs::String v_itemName);

void cs_8bc9aa25aebc3796(pls::cs::Ref<cs_90cdc908fbacdc4d> cs_this,pls::cs::Ref<pls::kairo::Canvas> v_canvas,pls::cs::Delegate<void(pls::cs::String)> v_onFinishMethod);
}
