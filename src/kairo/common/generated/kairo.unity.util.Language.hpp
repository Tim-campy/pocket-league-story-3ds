// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {
namespace kairo::unity::util::Language {
inline constexpr pls::cs::Int32 JAPANESE = 0;
inline constexpr pls::cs::Int32 ENGLISH = 1;
inline constexpr pls::cs::Int32 FORCERESET_OFF = 0;
inline constexpr pls::cs::Int32 FORCERESET_ON_JP_DEFAULT = 1;

void ensure_initialized();

pls::cs::Array<pls::cs::Array<pls::cs::String>>& BUILTIN_SOFTLABEL_TABLE();

pls::cs::Array<pls::cs::Array<pls::cs::String>>& BUILTIN_TRANSLATE_TABLE();

pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::String>>>& builtInTextTable_();

pls::cs::Array<pls::cs::String>& FOLDERS();

pls::cs::Int32& forceResetType_();

pls::cs::String& KAIRO_ENGLISH();

pls::cs::String& KAIRO_JAPANESE();

pls::cs::Array<pls::cs::String>& langPackFolders_();

pls::cs::Dictionary<pls::cs::String,pls::cs::Ref<Language_LangPackFormat>>& langPackFormats_();

pls::cs::Dictionary<pls::cs::String,pls::cs::Array<pls::cs::List<Language_RecordPosition>>>& langPackLines_();

pls::cs::Array<pls::cs::Ref<Language_LangPackRecord>>& langPackRecords_();

pls::cs::Int32& language_();

pls::cs::Int32& priorityLanguage_();

pls::cs::Array<pls::cs::Array<pls::cs::String>>& softlabelTable_();

pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::String>>>& textTable_();

pls::cs::String _translateText(pls::cs::String text);

pls::cs::String AdjustMacroScope(pls::cs::String src);

pls::cs::Array<std::uint8_t> ConvertLanguagePack(pls::cs::String file,pls::cs::Array<std::uint8_t> data);

pls::cs::Int32 Get();

pls::cs::Int32 Get(pls::cs::Ref<java::util::JLocale> locale);

pls::cs::String GetFolder();

pls::cs::Array<pls::cs::String> GetLanguagePackFolders();

bool Japanese();

pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::String>>> MakeTextTable(pls::cs::Array<pls::cs::Array<pls::cs::String>> textTable);

pls::cs::String TranslateSoftLabel(pls::cs::String softlabel);

pls::cs::String TranslateText(pls::cs::String text,bool tabCheck);
} // namespace kairo::unity::util::Language
}
