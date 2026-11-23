// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace java::net::URLDecoder {

void ensure_initialized();

pls::cs::String Decode(pls::cs::String s,pls::cs::String enc);

pls::cs::String Decode(pls::cs::String s);
} // namespace java::net::URLDecoder
}
