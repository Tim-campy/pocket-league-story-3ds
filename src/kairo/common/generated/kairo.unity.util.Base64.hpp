// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace kairo::unity::util::Base64 {

void ensure_initialized();

pls::cs::Array<std::uint8_t> Decode(pls::cs::String str);

pls::cs::String Encode(pls::cs::Array<std::uint8_t> bytes);
} // namespace kairo::unity::util::Base64
}
