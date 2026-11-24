// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace java::util::JTool {

void ensure_initialized();

template<typename T_T> T_T MakeArray(pls::cs::Array<pls::cs::Int32> counts);

pls::cs::Ref<pls::cs::ArrayBase> MakeArrayRecursive(pls::cs::Ref<pls::cs::RuntimeType> type,
                                                    pls::cs::Array<pls::cs::Int32> counts,
                                                    pls::cs::Int32 index);
} // namespace java::util::JTool
}
