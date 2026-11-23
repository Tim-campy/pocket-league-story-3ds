// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace game {

struct MapObject : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("game.MapObject", MapObject, pls::cs::Object)
pls::cs::Int32 img_{};
pls::cs::Array<pls::cs::Int32> spos_{};

static void ensure_initialized();

static pls::cs::Ref<main::AppData>& apdat_();

static pls::cs::Ref<UserData>& udat_();

static void create_init(pls::cs::Ref<MapObject> self);

static pls::cs::Ref<MapObject> create();

void Init();
};
} // namespace game
}
