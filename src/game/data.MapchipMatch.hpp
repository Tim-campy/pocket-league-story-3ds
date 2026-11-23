// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "data.BaseData.hpp"
#include "game_generated_forward.hpp"
namespace pls::game {
namespace data {

struct MapchipMatch : BaseData {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("data.MapchipMatch", MapchipMatch, BaseData)
pls::cs::String name_{};
pls::cs::Int32 img_{};
pls::cs::Int32 seb_{};
static constexpr pls::cs::Int32 FLAG_GROUND = 1;static constexpr pls::cs::Int32 FLAG_GROUND_CHANGE = 2;static constexpr pls::cs::Int32 FLAG_GROUND_SNOW = 4;static constexpr pls::cs::Int32 FLAG_GROUND_DESERT = 8;static constexpr pls::cs::Int32 FLAG_GROUND_GRAVEL = 16;
static void ensure_initialized();

static pls::cs::Ref<main::AppData>& apdat_();

static pls::cs::Ref<game::UserData>& udat_();

static void create_init(pls::cs::Ref<MapchipMatch> self);

static void create_init(pls::cs::Ref<MapchipMatch> self,pls::cs::String src);

static pls::cs::Ref<MapchipMatch> create();

static pls::cs::Ref<MapchipMatch> create(pls::cs::String src);

void Load(pls::cs::String src);
};
} // namespace data
}
