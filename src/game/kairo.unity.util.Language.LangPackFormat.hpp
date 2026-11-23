// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::util::Language_LangPackFormat {

void ensure_initialized();

pls::cs::Ref<generated::kairo::unity::util::Language_LangPackFormat> create(pls::cs::String file,char16_t lineCode,char16_t segCode);

void create_init(pls::cs::Ref<generated::kairo::unity::util::Language_LangPackFormat> self,pls::cs::String file,char16_t lineCode,char16_t segCode);
} // namespace kairo::unity::util::Language_LangPackFormat
}
