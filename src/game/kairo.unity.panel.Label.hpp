// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"
#include "kairo.unity.panel.Component.hpp"

namespace pls::game {
namespace kairo::unity::panel {

struct Label : Component {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("kairo.unity.panel.Label", Label, Component)
    pls::cs::String text_{};

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<Label> self, pls::cs::String text);

    static pls::cs::Ref<Label> create(pls::cs::String text);

    pls::cs::Int32 GetWidth();

    pls::cs::Int32 GetHeight();

    void SetLocation(pls::cs::Int32 x, pls::cs::Int32 y);
};
} // namespace kairo::unity::panel
}
