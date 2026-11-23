// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace PlsPortGeneratedBootstrap {

struct Source_ImageTaskState : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("PlsPortGeneratedBootstrap.Source+ImageTaskState", Source_ImageTaskState, pls::cs::Object)
pls::cs::List<kairo::unity::ui::Image_TextRenderTask> texts{};
pls::cs::List<kairo::unity::ui::Image_BalloonRenderTask> balloons{};
pls::cs::List<kairo::unity::ui::Image_TouchTask> touches{};

static void ensure_initialized();

static void create_init(pls::cs::Ref<Source_ImageTaskState> self);

static pls::cs::Ref<Source_ImageTaskState> create();
};
} // namespace PlsPortGeneratedBootstrap
}
