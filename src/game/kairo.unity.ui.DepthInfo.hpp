// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::ui {

struct DepthInfo : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("kairo.unity.ui.DepthInfo", DepthInfo, pls::cs::Object)
pls::cs::Ref<Seb> seb_{};
pls::cs::Int32 depth{};
pls::cs::Int32 scale{};
pls::cs::Int32 start{};
pls::cs::Int32 length{};
pls::cs::Int64 bound{};
pls::cs::Array<pls::cs::Int32> depthLines{};
static constexpr pls::cs::Int32 DLINE_X1 = 0;static constexpr pls::cs::Int32 DLINE_Y1 = 1;static constexpr pls::cs::Int32 DLINE_X2 = 2;static constexpr pls::cs::Int32 DLINE_Y2 = 3;static constexpr pls::cs::Int32 DLINE_SIZE = 4;};
} // namespace kairo::unity::ui
}
