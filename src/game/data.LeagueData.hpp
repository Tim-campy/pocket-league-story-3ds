// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "data.BaseData.hpp"
#include "game_generated_forward.hpp"
namespace pls::game {
namespace data {

struct LeagueData : BaseData {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("data.LeagueData", LeagueData, BaseData)
pls::cs::String name_{};
pls::cs::String name2_{};
pls::cs::Array<pls::cs::Int32> matchEnemy_{};
pls::cs::Array<pls::cs::Int32> matchEnemyNext_{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> execsScript_{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> execsScript2_{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> execsScript3_{};
pls::cs::Int32 victoryPrize_{};
pls::cs::Int32 matchPrize_{};
pls::cs::Int32 joinCost_{};
pls::cs::Int32 schedule_{};
pls::cs::Int32 rank_{};
pls::cs::String explain_{};
pls::cs::Int32 state_{};
pls::cs::Int32 trophy_{};
pls::cs::Int32 userPriOlder_{};
bool new_{};
static constexpr pls::cs::Int32 FLAG_INIT = 1;static constexpr pls::cs::Int32 STATE_NOT_FOUND = 0;static constexpr pls::cs::Int32 STATE_FOUND = 1;
static void ensure_initialized();

static pls::cs::Ref<main::AppData>& apdat_();

static pls::cs::Ref<game::UserData>& udat_();

static void create_init(pls::cs::Ref<LeagueData> self);

static void create_init(pls::cs::Ref<LeagueData> self,pls::cs::String src);

static pls::cs::Ref<LeagueData> create();

static pls::cs::Ref<LeagueData> create(pls::cs::String src);

void Init();

void Load(pls::cs::String src);

void NewGame();

void Serialize(pls::cs::Ref<generated::java::io::OutputStream> os);

void Deserialize(pls::cs::Ref<generated::java::io::InputStream> stream);

void ChangeState(pls::cs::Int32 state);

static void RegistLeague(pls::cs::Int32 leagueId);

void SetGetTrophy(pls::cs::Int32 trophy);

static bool IsLastMatch();

static bool IsVictoryLeague();

static bool IsVictoryMatch();

void SetLeagueInfoExplain(pls::cs::Ref<kairo::unity::ui::TextLayout> var_out);

static bool IsExistNew();

static void RemoveNew();

bool IsNew();
};
} // namespace data
}
