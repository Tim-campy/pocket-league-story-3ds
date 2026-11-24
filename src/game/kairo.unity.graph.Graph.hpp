// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::graph::Graph {

void ensure_initialized();

pls::cs::Int32 Easing(pls::cs::Int32 v0, pls::cs::Int32 v1, pls::cs::Int32 length, pls::cs::Int32 frame,
                      pls::cs::Int32 edging);
} // namespace kairo::unity::graph::Graph
}
