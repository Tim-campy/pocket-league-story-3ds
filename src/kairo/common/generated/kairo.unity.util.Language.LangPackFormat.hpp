// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {
namespace kairo::unity::util {

struct Language_LangPackFormat : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("kairo.unity.util.Language+LangPackFormat", Language_LangPackFormat, pls::cs::Object)
pls::cs::String File{};
char16_t LineCode{};
char16_t SegCode{};
};
} // namespace kairo::unity::util
}
