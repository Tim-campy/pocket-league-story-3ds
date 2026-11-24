// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace kairo::unity::util {

struct Language_Position {
    void trace_edges(const pls::cs::EdgeVisitor&) const;
    pls::cs::Int32 Line{};
    pls::cs::Int32 Segment{};
};
} // namespace kairo::unity::util
}
