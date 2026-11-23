// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::util {

struct KairoException : pls::cs::ExceptionObject {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("kairo.unity.util.KairoException", KairoException, pls::cs::ExceptionObject)
pls::cs::String displayMessage_{};

static void ensure_initialized();

static pls::cs::String get_DisplayMessage(pls::cs::Ref<KairoException> self);
};
} // namespace kairo::unity::util
}
