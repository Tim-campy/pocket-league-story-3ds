// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace java::net::URLDecoder {

void ensure_initialized();

pls::cs::String Decode(pls::cs::String s, pls::cs::String enc);

pls::cs::String Decode(pls::cs::String s);
} // namespace java::net::URLDecoder
}
