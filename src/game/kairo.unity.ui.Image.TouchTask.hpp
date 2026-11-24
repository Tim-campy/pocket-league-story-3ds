// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::ui {

struct Image_TouchTask {
    void trace_edges(const pls::cs::EdgeVisitor&) const;
    pls::cs::Ref<surface::SurfaceBase> Surface{};
    pls::cs::Ref<surface::TouchComponent> Component{};
};
} // namespace kairo::unity::ui
}
