// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::ui {

struct Image_TouchTask {void trace_edges(const pls::cs::EdgeVisitor&)const;
pls::cs::Ref<surface::SurfaceBase> Surface{};
pls::cs::Ref<surface::TouchComponent> Component{};
};
} // namespace kairo::unity::ui
}
