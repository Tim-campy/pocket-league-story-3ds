// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::io::ScratchPad {

void ensure_initialized();

pls::cs::Int32 GetSPSize(pls::cs::Int32 spid);

pls::cs::Array<std::uint8_t> ReadByteArray(pls::cs::Int32 spid, pls::cs::Int32 pos, pls::cs::Int32 length);

void WriteByteArray(pls::cs::Int32 spid, pls::cs::Int32 pos, pls::cs::Array<std::uint8_t> data);
} // namespace kairo::unity::io::ScratchPad
}
