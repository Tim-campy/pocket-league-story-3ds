// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::ui {

struct Image_BalloonRenderTask {
    void trace_edges(const pls::cs::EdgeVisitor&) const;
    pls::cs::Ref<ui::Balloon> Balloon{};
    pls::cs::Single X{};
    pls::cs::Single Y{};
    pls::cs::Ref<pls::kairo::Offscreen> Offscreen{};

    static void ensure_initialized();

    static void create_init(Image_BalloonRenderTask* self, pls::cs::Ref<ui::Balloon> balloon,
                            pls::cs::Single x, pls::cs::Single y,
                            pls::cs::Ref<pls::kairo::Offscreen> offscreen);

    static Image_BalloonRenderTask create(pls::cs::Ref<ui::Balloon> balloon, pls::cs::Single x,
                                          pls::cs::Single y, pls::cs::Ref<pls::kairo::Offscreen> offscreen);
};
} // namespace kairo::unity::ui
}
