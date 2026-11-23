// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::util::ClockTime {

void ensure_initialized();

bool& isSetTime_();

void Destroy();

pls::cs::Int64 GetTime();

void SetTime(pls::cs::Int64 time,pls::cs::Int32 precision);
} // namespace kairo::unity::util::ClockTime
}
