// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::util::MD5 {

void ensure_initialized();

pls::cs::String GetValue(pls::cs::Array<std::uint8_t> buf);
} // namespace kairo::unity::util::MD5
}
