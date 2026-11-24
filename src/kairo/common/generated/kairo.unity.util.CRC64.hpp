// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace kairo::unity::util::CRC64 {
inline constexpr pls::cs::Int32 SIZE = 8;

void ensure_initialized();

pls::cs::Array<pls::cs::Int64>& crcTable_();

pls::cs::Int64 GetValue(pls::cs::Array<std::uint8_t> buf);

void MakeCrcTable();

pls::cs::Int64 Update(pls::cs::Int64 crc, pls::cs::Array<std::uint8_t> buf, pls::cs::Int32 len);
} // namespace kairo::unity::util::CRC64
}
