// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace java::lang::JSystem {

void ensure_initialized();

void Arraycopy(pls::cs::Ref<pls::cs::Object> src, pls::cs::Int32 src_position,
               pls::cs::Ref<pls::cs::Object> dst, pls::cs::Int32 dst_position, pls::cs::Int32 length);

pls::cs::Int64 CurrentTimeMillis();

void Gc();
} // namespace java::lang::JSystem
}
