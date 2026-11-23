// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::io::ScratchPad {

void ensure_initialized();

pls::cs::Int32 GetSPSize(pls::cs::Int32 spid);

pls::cs::Array<std::uint8_t> ReadByteArray(pls::cs::Int32 spid,pls::cs::Int32 pos,pls::cs::Int32 length);

void WriteByteArray(pls::cs::Int32 spid,pls::cs::Int32 pos,pls::cs::Array<std::uint8_t> data);
} // namespace kairo::unity::io::ScratchPad
}
