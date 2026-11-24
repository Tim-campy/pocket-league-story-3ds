// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::util::BitUtil {

pls::cs::Int64 Join(pls::cs::Int32 high, pls::cs::Int32 low);

pls::cs::Array<pls::cs::Int32> Split(pls::cs::Int64 value);
} // namespace kairo::unity::util::BitUtil
}
