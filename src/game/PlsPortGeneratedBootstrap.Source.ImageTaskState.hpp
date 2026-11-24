// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace PlsPortGeneratedBootstrap {

struct Source_ImageTaskState : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("PlsPortGeneratedBootstrap.Source+ImageTaskState", Source_ImageTaskState,
                      pls::cs::Object)
    pls::cs::List<kairo::unity::ui::Image_TextRenderTask> texts{};
    pls::cs::List<kairo::unity::ui::Image_BalloonRenderTask> balloons{};
    pls::cs::List<kairo::unity::ui::Image_TouchTask> touches{};

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<Source_ImageTaskState> self);

    static pls::cs::Ref<Source_ImageTaskState> create();
};
} // namespace PlsPortGeneratedBootstrap
}
