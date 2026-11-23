// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace java::lang::JInteger {
inline constexpr pls::cs::Int32 MAX_VALUE = 2147483647;
inline constexpr pls::cs::Int32 MIN_VALUE = (-2147483647 - 1);

pls::cs::Int32 ParseInt(pls::cs::String s,pls::cs::Int32 radix);

pls::cs::String ToHexString(pls::cs::Int32 i);
} // namespace java::lang::JInteger
}
