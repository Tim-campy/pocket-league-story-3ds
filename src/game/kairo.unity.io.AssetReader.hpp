// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::io::AssetReader {
inline constexpr pls::cs::Int32 DPI_LDPI = 0;
inline constexpr pls::cs::Int32 DPI_MDPI = 1;
inline constexpr pls::cs::Int32 DPI_HDPI = 2;
inline constexpr pls::cs::Int32 DPI_XHDPI = 3;

pls::cs::Array<pls::cs::Int64>& crcTable_();

void SetSecurity(pls::cs::Array<pls::cs::Int64> crcTable, bool encrypt);
} // namespace kairo::unity::io::AssetReader
}
