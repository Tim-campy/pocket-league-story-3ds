// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {
namespace kairo::unity::util {

struct Language_LangPackRecord : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("kairo.unity.util.Language+LangPackRecord", Language_LangPackRecord, pls::cs::Object)
pls::cs::Int32 Id{};
pls::cs::String File{};
pls::cs::List<Language_Position> Positions{};
pls::cs::List<pls::cs::String> From{};
pls::cs::List<pls::cs::String> To{};
};
} // namespace kairo::unity::util
}
