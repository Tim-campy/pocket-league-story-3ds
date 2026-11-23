// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::ui {

struct Seb_WorkStaticValue : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("kairo.unity.ui.Seb+WorkStaticValue", Seb_WorkStaticValue, pls::cs::Object)
pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>> works_{};
pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>> result_{};
pls::cs::Array<pls::cs::Int32> getBoundingRectI_result{};
pls::cs::Array<std::int16_t> getBoundingRect_result{};
pls::cs::Array<pls::cs::Int32> getSprite_sp1{};
pls::cs::Array<pls::cs::Int32> getSprite_sp2{};

static void ensure_initialized();

static void create_init(pls::cs::Ref<Seb_WorkStaticValue> self);

static pls::cs::Ref<Seb_WorkStaticValue> create();
};
} // namespace kairo::unity::ui
}
