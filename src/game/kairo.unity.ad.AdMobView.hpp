// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::ad {

struct AdMobView : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("kairo.unity.ad.AdMobView", AdMobView, pls::cs::Object)

static void ensure_initialized();

static pls::cs::Int32& adHeight_();

bool IsLoad();

static pls::cs::Int32 GetAdHeight();
};
} // namespace kairo::unity::ad
}
