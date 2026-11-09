// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_20db1845606f1f3b.hpp"
#include "game_generated_type_8bf13b560e1e05e9.hpp"
namespace pls::game {

void cs_20db1845606f1f3b::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_8bf13b560e1e05e9::trace_edges(visitor);}

void cs_20db1845606f1f3b::release_edges(){cs_8bf13b560e1e05e9::release_edges();}

void cs_20db1845606f1f3b::cs_virtual_a3ffc1615f910b95(pls::cs::Ref<pls::kairo::Canvas> v_canvas,pls::cs::Delegate<void(pls::cs::String)> v_onFinishMethod) {cs_14c2613f2e6bc060(std::static_pointer_cast<cs_20db1845606f1f3b>(shared_from_this()),v_canvas,v_onFinishMethod);}

void cs_init_20db1845606f1f3b(){static pls::cs::TypeInitState state;state.run("panel.MainPanel",[](){

});}

// M:panel.MainPanel.#ctor
pls::cs::Ref<cs_20db1845606f1f3b> cs_edc2000ae353f18e() { cs_init_20db1845606f1f3b();
{ auto cs_this = pls::cs::make_ref<cs_20db1845606f1f3b>(); cs_edc2000ae353f18e_init(cs_this); return cs_this; }
}

void cs_edc2000ae353f18e_init(pls::cs::Ref<cs_20db1845606f1f3b> cs_this) {
([&]() { cs_3afc5298ce4a3e84_init(std::static_pointer_cast<cs_8bf13b560e1e05e9>(cs_this)); }());
{

}
}

// M:panel.MainPanel.#ctor(System.String,System.String,System.Int32)
pls::cs::Ref<cs_20db1845606f1f3b> cs_8947b9476c4f17f7(pls::cs::String v_label,pls::cs::String v_defaultText,std::int32_t v_maxLength) { cs_init_20db1845606f1f3b();
{ auto cs_this = pls::cs::make_ref<cs_20db1845606f1f3b>(); cs_8947b9476c4f17f7_init(cs_this,v_label,v_defaultText,v_maxLength); return cs_this; }
}

void cs_8947b9476c4f17f7_init(pls::cs::Ref<cs_20db1845606f1f3b> cs_this,pls::cs::String v_label,pls::cs::String v_defaultText,std::int32_t v_maxLength) {
([&]() { pls::cs::String cs_arg0 = v_label; pls::cs::String cs_arg1 = v_defaultText; std::int32_t cs_arg2 = v_maxLength; std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::cs::String cs_arg4 = pls::cs::String{}; cs_6b53a5cdc402f43c_init(std::static_pointer_cast<cs_8bf13b560e1e05e9>(cs_this),cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
{

}
}

// M:panel.MainPanel.#ctor(System.String,System.String)
pls::cs::Ref<cs_20db1845606f1f3b> cs_a669d4cd9c91bbb0(pls::cs::String v_label,pls::cs::String v_defaultText) { cs_init_20db1845606f1f3b();
{ auto cs_this = pls::cs::make_ref<cs_20db1845606f1f3b>(); cs_a669d4cd9c91bbb0_init(cs_this,v_label,v_defaultText); return cs_this; }
}

void cs_a669d4cd9c91bbb0_init(pls::cs::Ref<cs_20db1845606f1f3b> cs_this,pls::cs::String v_label,pls::cs::String v_defaultText) {
([&]() { pls::cs::String cs_arg0 = v_label; pls::cs::String cs_arg1 = v_defaultText; std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::cs::String cs_arg4 = pls::cs::String{}; cs_6b53a5cdc402f43c_init(std::static_pointer_cast<cs_8bf13b560e1e05e9>(cs_this),cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
{

}
}

// M:panel.MainPanel.Show(kairo.unity.ui.Canvas,kfw.panel.MainPanel.OnFinishMethod)
void cs_14c2613f2e6bc060(pls::cs::Ref<cs_20db1845606f1f3b> cs_this,pls::cs::Ref<pls::kairo::Canvas> v_canvas,pls::cs::Delegate<void(pls::cs::String)> v_onFinishMethod) { cs_init_20db1845606f1f3b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8bf13b560e1e05e9>>(std::static_pointer_cast<cs_8bf13b560e1e05e9>(cs_this)); pls::cs::Ref<pls::kairo::Canvas> cs_arg0 = v_canvas; pls::cs::Delegate<void(pls::cs::String)> cs_arg1 = v_onFinishMethod; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a3ffc1615f910b95(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
}
