// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_8bf13b560e1e05e9.hpp"
#include "game_generated_type_90cdc908fbacdc4d.hpp"
namespace pls::game {

void cs_90cdc908fbacdc4d::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_8bf13b560e1e05e9::trace_edges(visitor);}

void cs_90cdc908fbacdc4d::release_edges(){cs_8bf13b560e1e05e9::release_edges();}

void cs_90cdc908fbacdc4d::cs_virtual_a3ffc1615f910b95(pls::cs::Ref<pls::kairo::Canvas> v_canvas,pls::cs::Delegate<void(pls::cs::String)> v_onFinishMethod) {cs_8bc9aa25aebc3796(pls::cs::static_pointer_cast<cs_90cdc908fbacdc4d>(shared_from_this()),v_canvas,v_onFinishMethod);}

void cs_init_90cdc908fbacdc4d(){static pls::cs::TypeInitState state;state.run("system.panel.InputPanel",[](){

});}

// M:system.panel.InputPanel.#ctor
pls::cs::Ref<cs_90cdc908fbacdc4d> cs_8a97d90a17275f58() { cs_init_90cdc908fbacdc4d();
{ auto cs_this = pls::cs::make_ref<cs_90cdc908fbacdc4d>(); cs_8a97d90a17275f58_init(cs_this); return cs_this; }
}

void cs_8a97d90a17275f58_init(pls::cs::Ref<cs_90cdc908fbacdc4d> cs_this) {
([&]() { cs_3afc5298ce4a3e84_init(pls::cs::static_pointer_cast<cs_8bf13b560e1e05e9>(cs_this)); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.panel.InputPanel.#ctor",game);
{

}
}
}

// M:system.panel.InputPanel.#ctor(System.String,System.String,System.Int32,System.Int32,System.String)
pls::cs::Ref<cs_90cdc908fbacdc4d> cs_7236fab2e58bd0b3(pls::cs::String v_label,pls::cs::String v_defaultText,std::int32_t v_maxLength,std::int32_t v_inputMode,pls::cs::String v_itemName) { cs_init_90cdc908fbacdc4d();
{ auto cs_this = pls::cs::make_ref<cs_90cdc908fbacdc4d>(); cs_7236fab2e58bd0b3_init(cs_this,v_label,v_defaultText,v_maxLength,v_inputMode,v_itemName); return cs_this; }
}

void cs_7236fab2e58bd0b3_init(pls::cs::Ref<cs_90cdc908fbacdc4d> cs_this,pls::cs::String v_label,pls::cs::String v_defaultText,std::int32_t v_maxLength,std::int32_t v_inputMode,pls::cs::String v_itemName) {
([&]() { pls::cs::String cs_arg0 = v_label; pls::cs::String cs_arg1 = v_defaultText; std::int32_t cs_arg2 = v_maxLength; std::int32_t cs_arg3 = v_inputMode; pls::cs::String cs_arg4 = v_itemName; cs_6b53a5cdc402f43c_init(pls::cs::static_pointer_cast<cs_8bf13b560e1e05e9>(cs_this),cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.panel.InputPanel.#ctor(System.String,System.String,System.Int32,System.Int32,System.String)",game);
{

}
}
}

// M:system.panel.InputPanel.Show(kairo.unity.ui.Canvas,kfw.panel.MainPanel.OnFinishMethod)
void cs_8bc9aa25aebc3796(pls::cs::Ref<cs_90cdc908fbacdc4d> cs_this,pls::cs::Ref<pls::kairo::Canvas> v_canvas,pls::cs::Delegate<void(pls::cs::String)> v_onFinishMethod) { cs_init_90cdc908fbacdc4d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.panel.InputPanel.Show(kairo.unity.ui.Canvas,kfw.panel.MainPanel.OnFinishMethod)",game);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8bf13b560e1e05e9>>(pls::cs::static_pointer_cast<cs_8bf13b560e1e05e9>(cs_this)); pls::cs::Ref<pls::kairo::Canvas> cs_arg0 = v_canvas; pls::cs::Delegate<void(pls::cs::String)> cs_arg1 = v_onFinishMethod; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a3ffc1615f910b95(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
}
}
