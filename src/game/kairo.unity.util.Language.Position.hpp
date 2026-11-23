// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::util::Language_Position {

void ensure_initialized();

generated::kairo::unity::util::Language_Position create(pls::cs::Int32 line,pls::cs::Int32 segment);

void create_init(generated::kairo::unity::util::Language_Position* self,pls::cs::Int32 line,pls::cs::Int32 segment);
} // namespace kairo::unity::util::Language_Position
}
