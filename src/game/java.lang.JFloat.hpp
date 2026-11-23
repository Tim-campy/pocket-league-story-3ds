// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace java::lang::JFloat {
inline constexpr pls::cs::Single MAX_VALUE = 3.4028235E+38f;
inline constexpr pls::cs::Single MIN_VALUE = -3.4028235E+38f;
inline constexpr pls::cs::Single NaN = -std::numeric_limits<float>::quiet_NaN();
inline constexpr pls::cs::Single NEGATIVE_INFINITY = -std::numeric_limits<float>::infinity();
inline constexpr pls::cs::Single POSITIVE_INFINITY = std::numeric_limits<float>::infinity();

void ensure_initialized();

pls::cs::Single ParseFloat(pls::cs::String s);
} // namespace java::lang::JFloat
}
