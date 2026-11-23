// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::util::Language {
inline constexpr pls::cs::Int32 JAPANESE = 0;
inline constexpr pls::cs::Int32 ENGLISH = 1;
inline constexpr pls::cs::Int32 FORCERESET_OFF = 0;
inline constexpr pls::cs::Int32 FORCERESET_ON_JP_DEFAULT = 1;

pls::cs::String& langPackAuthor_();

pls::cs::String& langPackCode_();

pls::cs::String& langPackFile_();

pls::cs::Int32& langPackScale_();

pls::cs::String& langPackTitle_();

pls::cs::Array<pls::cs::Array<pls::cs::String>>& systemLangPackFiles_();

void ClearSoftLabelTable();

void ClearTextTable();

bool English();

pls::cs::String GetCustomLanguagePackLocation();

pls::cs::String GetLanguageCode();

pls::cs::String GetLanguagePackFile();

pls::cs::Ref<Language_LanguagePackInfo> GetLanguagePackInfo(pls::cs::Array<std::uint8_t> data);

pls::cs::Array<pls::cs::Array<pls::cs::String>> GetSystemLanguagePackFiles();

pls::cs::String GetTitle(pls::cs::String code);

void Init();

void LoadLanguagePack(pls::cs::Array<std::uint8_t> data);

pls::cs::String LT(pls::cs::String text,pls::cs::String arg);

void MakeLangPackTemplate(bool japanese,pls::cs::Int32 version,pls::cs::String& file,pls::cs::String& data);

bool SetLanguagePack(pls::cs::String file,pls::cs::Array<std::uint8_t> data,bool save);

void SetSoftLabelTable(pls::cs::Array<pls::cs::Array<pls::cs::String>> softlabelTable);

void SetTextTable(pls::cs::Array<pls::cs::Array<pls::cs::String>> textTable);
} // namespace kairo::unity::util::Language
}
