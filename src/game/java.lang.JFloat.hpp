// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
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
