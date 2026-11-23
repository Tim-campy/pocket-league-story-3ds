// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {
namespace java::lang::JLong {
inline constexpr pls::cs::Int64 MAX_VALUE = 9223372036854775807ll;
inline constexpr pls::cs::Int64 MIN_VALUE = (-9223372036854775807ll - 1);

void ensure_initialized();

pls::cs::Int64 ParseLong(pls::cs::String s);
} // namespace java::lang::JLong
}
