// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "kairo.unity.ui.Image.TouchTask.hpp"

namespace pls::game {
namespace kairo::unity::ui {

void Image_TouchTask::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::trace_value(Surface, visitor);
    pls::cs::trace_value(Component, visitor);
}
} // namespace kairo::unity::ui
}
