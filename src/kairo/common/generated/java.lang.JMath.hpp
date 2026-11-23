// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {
namespace java::lang::JMath {
inline constexpr pls::cs::Double E = 2.718281828459045;
inline constexpr pls::cs::Double PI = 3.141592653589793;

void ensure_initialized();

pls::cs::Int32 AbsInt(pls::cs::Int32 a);

pls::cs::Int64 AbsLong(pls::cs::Int64 a);

pls::cs::Single Abs(pls::cs::Single a);

pls::cs::Double Cos(pls::cs::Double a);

pls::cs::Double Sin(pls::cs::Double a);

pls::cs::Double Sqrt(pls::cs::Double a);

pls::cs::Double ToRadians(pls::cs::Double angdeg);
} // namespace java::lang::JMath
}
