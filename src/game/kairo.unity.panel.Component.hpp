// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::panel {

struct Component : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("kairo.unity.panel.Component", Component, pls::cs::Object)

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<Component> self);

    static pls::cs::Ref<Component> create();
};
} // namespace kairo::unity::panel
}
