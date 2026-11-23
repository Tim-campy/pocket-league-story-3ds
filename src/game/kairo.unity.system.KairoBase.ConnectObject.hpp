// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
#include "kairo.unity.io.HttpObject.hpp"
namespace pls::game {
namespace kairo::unity::system {

struct KairoBase_ConnectObject : io::HttpObject {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("kairo.unity.system.KairoBase+ConnectObject", KairoBase_ConnectObject, HttpObject)
pls::cs::Ref<KairoBase> base_{};
};
} // namespace kairo::unity::system
}
