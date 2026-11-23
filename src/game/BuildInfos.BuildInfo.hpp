// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace BuildInfos {

struct BuildInfo : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("BuildInfos.BuildInfo", BuildInfo, pls::cs::Object)

static void ensure_initialized();

static void create_init(pls::cs::Ref<BuildInfo> self);

static pls::cs::Ref<BuildInfo> create();
};
} // namespace BuildInfos
}
