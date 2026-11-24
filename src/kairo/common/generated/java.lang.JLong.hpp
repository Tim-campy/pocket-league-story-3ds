// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
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
