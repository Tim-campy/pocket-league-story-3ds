// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.ui.DepthInfo.hpp"
#include "kairo.unity.ui.Seb.hpp"

namespace pls::game {
namespace kairo::unity::ui {

void DepthInfo::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(seb_, visitor);
    pls::cs::trace_value(depthLines, visitor);
}
} // namespace kairo::unity::ui
}
