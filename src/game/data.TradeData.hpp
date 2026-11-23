// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "data.BaseData.hpp"
#include "game_generated_forward.hpp"
namespace pls::game {
namespace data {

struct TradeData : BaseData {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("data.TradeData", TradeData, BaseData)
pls::cs::Int32 difficult_{};
pls::cs::Int32 feelPtInt_{};
pls::cs::Int32 getNameValue_{};
pls::cs::Int32 playerDataId_{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> execsScript_{};
pls::cs::Int32 cost_{};
pls::cs::Int32 tradeGroup_{};
pls::cs::Int32 state_{};
pls::cs::Int32 feelPt_{};
bool new_{};
static constexpr pls::cs::Int32 FLAG_INIT = 1;static constexpr pls::cs::Int32 STATE_NOT_FOUND = 0;static constexpr pls::cs::Int32 STATE_FOUND = 1;static constexpr pls::cs::Int32 STATE_MEMBER = 2;
static void ensure_initialized();

static pls::cs::Ref<main::AppData>& apdat_();

static pls::cs::Ref<game::UserData>& udat_();

static void create_init(pls::cs::Ref<TradeData> self);

static void create_init(pls::cs::Ref<TradeData> self,pls::cs::String src);

static pls::cs::Ref<TradeData> create();

static pls::cs::Ref<TradeData> create(pls::cs::String src);

void Init();

void Load(pls::cs::String src);

void NewGame();

void Serialize(pls::cs::Ref<generated::java::io::OutputStream> os);

void Deserialize(pls::cs::Ref<generated::java::io::InputStream> stream);

void ChangeState(pls::cs::Int32 state);

pls::cs::Int32 GetSuccessRate();

static bool IsExistNew();

static void RemoveNew();

bool IsNew();

bool IsPlayerInMember();
};
} // namespace data
}
