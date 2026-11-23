// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace java::util::JRandom {

pls::cs::Int32 NextInt(pls::cs::Ref<generated::java::util::JRandom> self,pls::cs::Int32 n);

void SetSeed(pls::cs::Ref<generated::java::util::JRandom> self,pls::cs::Int64 seed);
} // namespace java::util::JRandom
}
