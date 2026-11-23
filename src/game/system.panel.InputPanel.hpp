// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
#include "kfw.panel.MainPanel.hpp"
namespace pls::game {
namespace system::panel {

struct InputPanel : kfw::panel::MainPanel {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(MainPanel,
    {"M:kfw.panel.MainPanel.Show(kairo.unity.ui.Canvas)", "M:system.panel.InputPanel.Show(kairo.unity.ui.Canvas)"},
    {"M:kfw.panel.MainPanel.Show(kairo.unity.ui.Canvas,kfw.panel.MainPanel.OnFinishMethod)", "M:system.panel.InputPanel.Show(kairo.unity.ui.Canvas,kfw.panel.MainPanel.OnFinishMethod)"});
PLS_MANAGED_CLASS("system.panel.InputPanel", InputPanel, MainPanel)
pls::cs::String Show(pls::cs::Ref<pls::kairo::Canvas> canvas) override;
void Show(pls::cs::Ref<pls::kairo::Canvas> canvas,pls::cs::Delegate<void(pls::cs::String)> onFinishMethod) override;

static void ensure_initialized();

static void create_init(pls::cs::Ref<InputPanel> self);

static void create_init(pls::cs::Ref<InputPanel> self,pls::cs::String label,pls::cs::String defaultText,pls::cs::Int32 maxLength,pls::cs::Int32 inputMode,pls::cs::String itemName);

static pls::cs::Ref<InputPanel> create();

static pls::cs::Ref<InputPanel> create(pls::cs::String label,pls::cs::String defaultText,pls::cs::Int32 maxLength,pls::cs::Int32 inputMode,pls::cs::String itemName);
};
} // namespace system::panel
}
