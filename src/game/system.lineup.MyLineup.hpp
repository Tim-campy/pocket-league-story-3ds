// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
#include "kairo.unity.system.lineup.ui.LineupManager.hpp"
namespace pls::game {
namespace system::lineup {

struct MyLineup : kairo::unity::system::lineup::ui::LineupManager {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("system.lineup.MyLineup", MyLineup, LineupManager)

static void ensure_initialized();

static void create_init(pls::cs::Ref<MyLineup> self);

static pls::cs::Ref<MyLineup> create();

static pls::cs::Ref<MyLineup> GetInstance();

void Start();
};
} // namespace system::lineup
}
