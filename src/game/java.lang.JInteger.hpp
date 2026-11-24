// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace java::lang::JInteger {
inline constexpr pls::cs::Int32 MAX_VALUE = 2147483647;
inline constexpr pls::cs::Int32 MIN_VALUE = (-2147483647 - 1);

pls::cs::Int32 ParseInt(pls::cs::String s, pls::cs::Int32 radix);

pls::cs::String ToHexString(pls::cs::Int32 i);
} // namespace java::lang::JInteger
}
