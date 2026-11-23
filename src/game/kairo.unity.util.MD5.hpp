// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::util::MD5 {

void ensure_initialized();

pls::cs::String GetValue(pls::cs::Array<std::uint8_t> buf);
} // namespace kairo::unity::util::MD5
}
