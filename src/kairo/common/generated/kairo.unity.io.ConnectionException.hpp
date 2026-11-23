// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {
namespace kairo::unity::io {

struct ConnectionException : pls::cs::ExceptionObject {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("kairo.unity.io.ConnectionException", ConnectionException, pls::cs::ExceptionObject)

static void ensure_initialized();

pls::cs::Int32 GetStatus();
};
} // namespace kairo::unity::io
}
