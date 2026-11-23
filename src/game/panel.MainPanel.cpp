// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "kfw.panel.MainPanel.hpp"
#include "panel.MainPanel.hpp"
namespace pls::game {
namespace panel {

void MainPanel::trace_edges(const pls::cs::EdgeVisitor&visitor)const {kfw::panel::MainPanel::trace_edges(visitor);}

static PLS_NOINLINE void cs_init_20db1845606f1f3b_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("panel.MainPanel",flag,[](){

});}

void MainPanel::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_20db1845606f1f3b_slow(flag);}

void MainPanel::create_init(pls::cs::Ref<MainPanel> self) {
MainPanel::ensure_initialized();
kfw::panel::MainPanel::create_init(pls::cs::static_pointer_cast<kfw::panel::MainPanel>(self));
PLS_METHOD_SCOPE("Assembly-CSharp","M:panel.MainPanel.#ctor",game);
{

}

}

void MainPanel::create_init(pls::cs::Ref<MainPanel> self,pls::cs::String label,pls::cs::String defaultText,pls::cs::Int32 maxLength) {
MainPanel::ensure_initialized();
kfw::panel::MainPanel::create_init(pls::cs::static_pointer_cast<kfw::panel::MainPanel>(self), label, defaultText, maxLength, 2, pls::cs::String{});
PLS_METHOD_SCOPE("Assembly-CSharp","M:panel.MainPanel.#ctor(System.String,System.String,System.Int32)",game);
{

}

}

void MainPanel::create_init(pls::cs::Ref<MainPanel> self,pls::cs::String label,pls::cs::String defaultText) {
MainPanel::ensure_initialized();
kfw::panel::MainPanel::create_init(pls::cs::static_pointer_cast<kfw::panel::MainPanel>(self), label, defaultText, 14, 2, pls::cs::String{});
PLS_METHOD_SCOPE("Assembly-CSharp","M:panel.MainPanel.#ctor(System.String,System.String)",game);
{

}

}

// M:panel.MainPanel.#ctor
pls::cs::Ref<MainPanel> MainPanel::create() {
MainPanel::ensure_initialized();
 auto self = pls::cs::make_ref<MainPanel>(); MainPanel::create_init(self); return self; 
}

// M:panel.MainPanel.#ctor(System.String,System.String)
pls::cs::Ref<MainPanel> MainPanel::create(pls::cs::String label,pls::cs::String defaultText) {
MainPanel::ensure_initialized();
 auto self = pls::cs::make_ref<MainPanel>(); MainPanel::create_init(self,label,defaultText); return self; 
}

// M:panel.MainPanel.#ctor(System.String,System.String,System.Int32)
pls::cs::Ref<MainPanel> MainPanel::create(pls::cs::String label,pls::cs::String defaultText,pls::cs::Int32 maxLength) {
MainPanel::ensure_initialized();
 auto self = pls::cs::make_ref<MainPanel>(); MainPanel::create_init(self,label,defaultText,maxLength); return self; 
}

// M:panel.MainPanel.Show(kairo.unity.ui.Canvas)
pls::cs::String MainPanel::Show(pls::cs::Ref<pls::kairo::Canvas> canvas) {PLS_METHOD_SCOPE("Assembly-CSharp","M:panel.MainPanel.Show(kairo.unity.ui.Canvas)",game);
{
return kfw::panel::MainPanel::Show(canvas);
}
}

// M:panel.MainPanel.Show(kairo.unity.ui.Canvas,kfw.panel.MainPanel.OnFinishMethod)
void MainPanel::Show(pls::cs::Ref<pls::kairo::Canvas> canvas,pls::cs::Delegate<void(pls::cs::String)> onFinishMethod) {PLS_METHOD_SCOPE("Assembly-CSharp","M:panel.MainPanel.Show(kairo.unity.ui.Canvas,kfw.panel.MainPanel.OnFinishMethod)",game);
{
kfw::panel::MainPanel::Show(canvas, onFinishMethod);
}
}
} // namespace panel
}
