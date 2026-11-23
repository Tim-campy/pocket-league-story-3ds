// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
#include "kairo.unity.panel.FepPanel.hpp"
namespace pls::game {
namespace kfw::panel {

struct MainPanel : kairo::unity::panel::FepPanel {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(FepPanel,
    {"M:kfw.panel.MainPanel.Show(kairo.unity.ui.Canvas)", "M:kfw.panel.MainPanel.Show(kairo.unity.ui.Canvas)"},
    {"M:kfw.panel.MainPanel.Show(kairo.unity.ui.Canvas,kfw.panel.MainPanel.OnFinishMethod)", "M:kfw.panel.MainPanel.Show(kairo.unity.ui.Canvas,kfw.panel.MainPanel.OnFinishMethod)"},
    {"M:kairo.unity.panel.FepPanel.ComponentAction(kairo.unity.panel.Component,System.Int32,System.Int32)", "M:kfw.panel.MainPanel.ComponentAction(kairo.unity.panel.Component,System.Int32,System.Int32)"});
PLS_MANAGED_CLASS("kfw.panel.MainPanel", MainPanel, FepPanel)
pls::cs::Ref<kairo::unity::panel::Label> lbl1{};
pls::cs::Ref<kairo::unity::panel::TextBox> txtBox{};
pls::cs::Ref<kairo::unity::panel::Button> btn{};
pls::cs::Ref<kairo::unity::panel::Button> btn2{};
pls::cs::Ref<pls::kairo::Canvas> bkCanvas_{};
pls::cs::Int32 maxLength_{};
pls::cs::Int32 maxWidth_{};
pls::cs::Array<char16_t> prohibition_{};
pls::cs::String itemName_{};
bool endMark_{};
bool trim_{};
pls::cs::Int32 inputMode_{};
bool end_{};
pls::cs::String result_{};
pls::cs::String defaultText_{};
pls::cs::String originalText_{};
pls::cs::Array<pls::cs::String> bkSoftLabels_{};
pls::cs::Delegate<void(pls::cs::String)> onFinishMethod_{};
virtual pls::cs::String Show(pls::cs::Ref<pls::kairo::Canvas> canvas);
virtual void Show(pls::cs::Ref<pls::kairo::Canvas> canvas,pls::cs::Delegate<void(pls::cs::String)> onFinishMethod);
void ComponentAction(pls::cs::Ref<kairo::unity::panel::Component> c,pls::cs::Int32 type,pls::cs::Int32 param) override;

static void ensure_initialized();

static void create_init(pls::cs::Ref<MainPanel> self);

static void create_init(pls::cs::Ref<MainPanel> self,pls::cs::String label,pls::cs::String defaultText,pls::cs::Int32 maxLength,pls::cs::Int32 inputMode,pls::cs::String itemName);

static pls::cs::Ref<MainPanel> create();

static pls::cs::Ref<MainPanel> create(pls::cs::String label,pls::cs::String defaultText,pls::cs::Int32 maxLength,pls::cs::Int32 inputMode,pls::cs::String itemName);

void Init(pls::cs::String label,pls::cs::String defaultText,pls::cs::Int32 maxLength,pls::cs::Int32 inputMode,pls::cs::String itemName);

void SetItemName(pls::cs::String name);

pls::cs::Int32 GetStringWidth(pls::cs::String str);
};
} // namespace kfw::panel
}
