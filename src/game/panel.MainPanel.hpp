// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
#include "kfw.panel.MainPanel.hpp"
namespace pls::game {
namespace panel {

struct MainPanel : kfw::panel::MainPanel {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(kfw::panel::MainPanel,
    {"M:kfw.panel.MainPanel.Show(kairo.unity.ui.Canvas)", "M:panel.MainPanel.Show(kairo.unity.ui.Canvas)"},
    {"M:kfw.panel.MainPanel.Show(kairo.unity.ui.Canvas,kfw.panel.MainPanel.OnFinishMethod)", "M:panel.MainPanel.Show(kairo.unity.ui.Canvas,kfw.panel.MainPanel.OnFinishMethod)"});
PLS_MANAGED_CLASS("panel.MainPanel", MainPanel, kfw::panel::MainPanel)
pls::cs::String Show(pls::cs::Ref<pls::kairo::Canvas> canvas) override;
void Show(pls::cs::Ref<pls::kairo::Canvas> canvas,pls::cs::Delegate<void(pls::cs::String)> onFinishMethod) override;

static void ensure_initialized();

static void create_init(pls::cs::Ref<MainPanel> self);

static void create_init(pls::cs::Ref<MainPanel> self,pls::cs::String label,pls::cs::String defaultText,pls::cs::Int32 maxLength);

static void create_init(pls::cs::Ref<MainPanel> self,pls::cs::String label,pls::cs::String defaultText);

static pls::cs::Ref<MainPanel> create();

static pls::cs::Ref<MainPanel> create(pls::cs::String label,pls::cs::String defaultText,pls::cs::Int32 maxLength);

static pls::cs::Ref<MainPanel> create(pls::cs::String label,pls::cs::String defaultText);
};
} // namespace panel
}
