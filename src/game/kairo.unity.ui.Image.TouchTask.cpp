// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "kairo.unity.ui.Image.TouchTask.hpp"
namespace pls::game {
namespace kairo::unity::ui {

void Image_TouchTask::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::trace_value(Surface,visitor);pls::cs::trace_value(Component,visitor);}
} // namespace kairo::unity::ui
}
