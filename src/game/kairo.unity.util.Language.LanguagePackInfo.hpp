// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::util {

struct Language_LanguagePackInfo : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("kairo.unity.util.Language+LanguagePackInfo", Language_LanguagePackInfo, pls::cs::Object)
pls::cs::String Author{};
pls::cs::String Code{};
pls::cs::String Title{};
pls::cs::String Appli{};
pls::cs::String Version{};
pls::cs::String Scale{};

static void ensure_initialized();

static void create_init(pls::cs::Ref<Language_LanguagePackInfo> self);

static pls::cs::Ref<Language_LanguagePackInfo> create();
};
} // namespace kairo::unity::util
}
