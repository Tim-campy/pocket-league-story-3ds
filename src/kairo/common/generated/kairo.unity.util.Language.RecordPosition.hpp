// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {
namespace kairo::unity::util {

struct Language_RecordPosition {void trace_edges(const pls::cs::EdgeVisitor&)const;
pls::cs::Int32 Line{};
pls::cs::Int32 Segment{};
pls::cs::Ref<Language_LangPackRecord> Record{};
};
} // namespace kairo::unity::util
}
