// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
#include "kairo.unity.util.KairoException.hpp"
namespace pls::game {
namespace kairo::unity::util {

struct NotPermitException : KairoException {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(KairoException,
    {"ToString", "M:kairo.unity.util.NotPermitException.ToString"});
PLS_MANAGED_CLASS("kairo.unity.util.NotPermitException", NotPermitException, KairoException)
pls::cs::Int32 type_{};
pls::cs::String ToString() override;

static void ensure_initialized();
};
} // namespace kairo::unity::util
}
