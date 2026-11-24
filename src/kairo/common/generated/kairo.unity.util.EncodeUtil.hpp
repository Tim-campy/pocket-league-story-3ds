// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace kairo::unity::util::EncodeUtil {

void ensure_initialized();

pls::cs::Single ByteAryToFloat(pls::cs::Array<std::uint8_t> data, bool endian);

pls::cs::Int32 ByteAryToInt(pls::cs::Array<std::uint8_t> data, bool endian);

pls::cs::Int64 ByteAryToLong(pls::cs::Array<std::uint8_t> data, bool endian);

std::int16_t ByteAryToShort(pls::cs::Array<std::uint8_t> data, bool endian);

pls::cs::Array<std::uint8_t> ConvertEndian(pls::cs::Array<std::uint8_t> data, pls::cs::Int32 length);

pls::cs::Array<std::uint8_t> FloatToByteAry(pls::cs::Single data, bool endian);

pls::cs::Array<std::uint8_t> IntToByteAry(pls::cs::Int32 data, bool endian);

pls::cs::Array<std::uint8_t> LongToByteAry(pls::cs::Int64 data, bool endian);

pls::cs::Array<std::uint8_t> ShortToByteAry(std::int16_t data, bool endian);
} // namespace kairo::unity::util::EncodeUtil
}
