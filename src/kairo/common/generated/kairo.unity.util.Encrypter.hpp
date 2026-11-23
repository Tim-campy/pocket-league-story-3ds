// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {
namespace kairo::unity::util::Encrypter {

void ensure_initialized();

pls::cs::Array<std::uint8_t>& key_();

void Decode(pls::cs::Array<std::uint8_t> src,pls::cs::Array<std::uint8_t> key);

void Decode(pls::cs::Array<std::uint8_t> src);

void Encode(pls::cs::Array<std::uint8_t> src,pls::cs::Array<std::uint8_t> key);

void SetEncryptionKey(pls::cs::Array<std::uint8_t> key);
} // namespace kairo::unity::util::Encrypter
}
