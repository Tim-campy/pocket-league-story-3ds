// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "kairo.unity.panel.FepPanel.Display.hpp"
#include "kairo.unity.panel.FepPanel.hpp"
namespace pls::game {
namespace kairo::unity::panel::FepPanel_Display {

static PLS_NOINLINE void cs_init_e57cdf426b59f0ee_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("kairo.unity.panel.FepPanel.Display",flag,[](){

});}

void ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_e57cdf426b59f0ee_slow(flag);}

// M:kairo.unity.panel.FepPanel.Display.SetCurrent(kairo.unity.panel.FepPanel)
void SetCurrent(pls::cs::Ref<FepPanel> panel) {
FepPanel_Display::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.FepPanel.Display.SetCurrent(kairo.unity.panel.FepPanel)",kairo);
{

}

}

// M:kairo.unity.panel.FepPanel.Display.SetCurrent(kairo.unity.ui.Canvas)
void SetCurrentCanvas(pls::cs::Ref<pls::kairo::Canvas> canvas) {
FepPanel_Display::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.FepPanel.Display.SetCurrent(kairo.unity.ui.Canvas)",kairo);
{

}

}
} // namespace kairo::unity::panel::FepPanel_Display
}
