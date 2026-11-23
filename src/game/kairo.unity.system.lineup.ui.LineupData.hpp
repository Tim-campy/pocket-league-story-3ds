// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::system::lineup::ui {

struct LineupData : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("kairo.unity.system.lineup.ui.LineupData", LineupData, pls::cs::Object)
pls::cs::Int32 gameId_{};
pls::cs::String explain_{};
pls::cs::String url_{};
pls::cs::String file_{};
pls::cs::Int32 priority_{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> ratio_{};
pls::cs::Ref<pls::kairo::Image> image_{};

static void ensure_initialized();

static void create_init(pls::cs::Ref<LineupData> self);

static pls::cs::Ref<LineupData> create();

void Load(pls::cs::Int32 gameId,pls::cs::String src);

pls::cs::String GetExplain();

pls::cs::String GetURL();

pls::cs::Int32 GetPriority();

pls::cs::String GetFileName();

pls::cs::Ref<pls::kairo::Image> GetImage();

pls::cs::Int32 GetRatio();
};
} // namespace kairo::unity::system::lineup::ui
}
