// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace java::util::JRandom {

pls::cs::Int32 NextInt(pls::cs::Ref<generated::java::util::JRandom> self, pls::cs::Int32 n);

void SetSeed(pls::cs::Ref<generated::java::util::JRandom> self, pls::cs::Int64 seed);
} // namespace java::util::JRandom
}
