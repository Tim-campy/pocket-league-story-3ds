// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::util::Language_LangPackRecord {

void ensure_initialized();

pls::cs::Ref<generated::kairo::unity::util::Language_LangPackRecord> create(pls::cs::Int32 id,pls::cs::String file,pls::cs::String text);

void create_init(pls::cs::Ref<generated::kairo::unity::util::Language_LangPackRecord> self,pls::cs::Int32 id,pls::cs::String file,pls::cs::String text);

void AddPosition(pls::cs::Ref<generated::kairo::unity::util::Language_LangPackRecord> self,pls::cs::Int32 line,pls::cs::Int32 segment);
} // namespace kairo::unity::util::Language_LangPackRecord
}
