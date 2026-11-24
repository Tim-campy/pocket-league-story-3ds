// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace kairo::unity::util {

struct Language_RecordPosition {
    void trace_edges(const pls::cs::EdgeVisitor&) const;
    pls::cs::Int32 Line{};
    pls::cs::Int32 Segment{};
    pls::cs::Ref<Language_LangPackRecord> Record{};
};
} // namespace kairo::unity::util
}
