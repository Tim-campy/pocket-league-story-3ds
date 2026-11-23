// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::system::lineup::ui {

struct LineupManager : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("kairo.unity.system.lineup.ui.LineupManager", LineupManager, pls::cs::Object)
pls::cs::String appliLinkUrl_{};
pls::cs::Array<pls::cs::Ref<LineupData>> lineupList_{};
pls::cs::Array<pls::cs::Int32> showCount_{};
pls::cs::Array<pls::cs::Ref<LineupData>> showLineups_{};

static void ensure_initialized();

static pls::cs::Ref<LineupManager>& instance_();

static void create_init(pls::cs::Ref<LineupManager> self);

static pls::cs::Ref<LineupManager> create();

void Init();

void Load(pls::cs::Array<std::uint8_t> data);

pls::cs::Array<std::uint8_t> Write();

void LoadLineupList(pls::cs::Array<std::uint8_t> data);

void Start(pls::cs::Int32 num);

void UnloadImage();

bool CheckShowableLineup();

pls::cs::Array<pls::cs::Ref<LineupData>> GetShowableLineups();

static void PutPreferences(pls::cs::String key,pls::cs::Array<std::uint8_t> data);

static pls::cs::Array<std::uint8_t> GetPreferences(pls::cs::String key);

static bool ExistPreferences(pls::cs::String key);
};
} // namespace kairo::unity::system::lineup::ui
}
