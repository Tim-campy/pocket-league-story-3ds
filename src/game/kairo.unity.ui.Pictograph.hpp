// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::ui {

struct Pictograph : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("kairo.unity.ui.Pictograph", Pictograph, pls::cs::Object)
pls::cs::String key_{};
pls::cs::Ref<Seb> m_Seb_k__BackingField{};
pls::cs::Int32 m_Frame_k__BackingField{};
pls::cs::Int32 m_Wait_k__BackingField{};
pls::cs::Int32 m_X_k__BackingField{};
pls::cs::Int32 m_Y_k__BackingField{};
pls::cs::Int32 m_Margin_k__BackingField{};
pls::cs::Ref<Matrix> m_Transform_k__BackingField{};

static void ensure_initialized();

static pls::cs::Ref<Seb> get_Seb(pls::cs::Ref<Pictograph> self);

static pls::cs::Int32 get_Frame(pls::cs::Ref<Pictograph> self);

static pls::cs::Int32 get_Wait(pls::cs::Ref<Pictograph> self);

static pls::cs::Int32 get_X(pls::cs::Ref<Pictograph> self);

static pls::cs::Int32 get_Y(pls::cs::Ref<Pictograph> self);

static pls::cs::Int32 get_Margin(pls::cs::Ref<Pictograph> self);

static pls::cs::Ref<Matrix> get_Transform(pls::cs::Ref<Pictograph> self);
};
} // namespace kairo::unity::ui
}
