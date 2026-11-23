// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::ui {

struct UIException : pls::cs::ExceptionObject {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("kairo.unity.ui.UIException", UIException, pls::cs::ExceptionObject)
static constexpr pls::cs::Int32 UNDEFINED = 0;static constexpr pls::cs::Int32 ILLEGAL_STATE = 1;static constexpr pls::cs::Int32 NO_RESOURCES = 2;static constexpr pls::cs::Int32 BUSY_RESOURCE = 3;static constexpr pls::cs::Int32 UNSUPPORTED_FORMAT = 4;
static void ensure_initialized();

pls::cs::Int32 GetStatus();
};
} // namespace kairo::unity::ui
}
