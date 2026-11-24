// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace kairo::unity::util::BitUtil {

void ensure_initialized();

pls::cs::Array<std::int8_t>& split_tmpB();

pls::cs::Array<pls::cs::Int32>& split_tmpI();

pls::cs::Array<std::int16_t>& split_tmpS();

bool Check(pls::cs::Int32 v, pls::cs::Int32 bit);

pls::cs::Int32 Join(std::int16_t high, std::int16_t low);

pls::cs::Int32 Off(pls::cs::Int32 v, pls::cs::Int32 bit);

pls::cs::Int32 On(pls::cs::Int32 v, pls::cs::Int32 bit);

pls::cs::Array<std::int16_t> Split(pls::cs::Int32 value);
} // namespace kairo::unity::util::BitUtil
}
