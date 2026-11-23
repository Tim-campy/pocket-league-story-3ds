// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "kairo.unity.ui.DepthInfo.hpp"
#include "kairo.unity.ui.Seb.hpp"
namespace pls::game {
namespace kairo::unity::ui {

void DepthInfo::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(seb_,visitor);pls::cs::trace_value(depthLines,visitor);}
} // namespace kairo::unity::ui
}
