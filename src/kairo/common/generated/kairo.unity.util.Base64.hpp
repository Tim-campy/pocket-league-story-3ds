// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {
namespace kairo::unity::util::Base64 {

void ensure_initialized();

pls::cs::Array<std::uint8_t> Decode(pls::cs::String str);

pls::cs::String Encode(pls::cs::Array<std::uint8_t> bytes);
} // namespace kairo::unity::util::Base64
}
