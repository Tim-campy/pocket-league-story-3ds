// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::panel {

struct FepPanel : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(pls::cs::Object,
    {"M:kairo.unity.panel.FepPanel.ComponentAction(kairo.unity.panel.Component,System.Int32,System.Int32)", "M:kairo.unity.panel.FepPanel.ComponentAction(kairo.unity.panel.Component,System.Int32,System.Int32)"});
PLS_MANAGED_CLASS("kairo.unity.panel.FepPanel", FepPanel, pls::cs::Object)
pls::cs::Ref<Label> label_{};
pls::cs::Ref<TextBox> text_{};
pls::cs::Ref<Button> btn1_{};
pls::cs::Ref<Button> btn2_{};
pls::cs::Int32 delay_{};
virtual void ComponentAction(pls::cs::Ref<Component> c,pls::cs::Int32 type,pls::cs::Int32 param)=0;
static constexpr pls::cs::Int32 SOFT_KEY_1 = 0;static constexpr pls::cs::Int32 SOFT_KEY_2 = 1;static constexpr pls::cs::Int32 BUTTON_PRESSED = 1;static constexpr pls::cs::Int32 SELECTION_CHANGED = 2;static constexpr pls::cs::Int32 TEXT_CHANGED = 3;
static pls::cs::Ref<FepPanel> create();

static void ensure_initialized();

static pls::cs::Ref<FepPanel>& current_();

static pls::cs::Ref<FepPanel> get_Current();

static void create_init(pls::cs::Ref<FepPanel> self);

void SetLayoutManager(pls::cs::Ref<pls::cs::Object> obj);

void SetComponentListener(pls::cs::Ref<pls::cs::Object> obj);

void SetSoftLabel(pls::cs::Int32 key,pls::cs::String text);

pls::cs::Int32 GetWidth();

pls::cs::Int32 GetHeight();

void Add(pls::cs::Ref<Component> component);

void Show();

void Start();

bool Update();

pls::cs::Int32 GetStringLength(pls::cs::String s);

bool IsSimpleChara(char16_t c);
};
} // namespace kairo::unity::panel
}
