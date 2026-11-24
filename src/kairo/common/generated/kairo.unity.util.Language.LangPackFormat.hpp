// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace kairo::unity::util {

struct Language_LangPackFormat : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("kairo.unity.util.Language+LangPackFormat", Language_LangPackFormat, pls::cs::Object)
    pls::cs::String File{};
    char16_t LineCode{};
    char16_t SegCode{};
};
} // namespace kairo::unity::util
}
