// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace native::AppPlugin {

void Finish();

void Init(pls::cs::Int32 language,bool log,pls::cs::String licenseKey);

void LaunchMailer(pls::cs::String subject,pls::cs::String text);

pls::cs::Int32 ShowPurchaseLog(pls::cs::String title,pls::cs::Int32 num,pls::cs::String text,bool log);
} // namespace native::AppPlugin
}
