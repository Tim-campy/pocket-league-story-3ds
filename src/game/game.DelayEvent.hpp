// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace game {

struct DelayEvent : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("game.DelayEvent", DelayEvent, pls::cs::Object)
pls::cs::Int32 delayId_{};
pls::cs::Int32 line_{};
pls::cs::Int32 wait_{};
pls::cs::Int32 hour_{};
pls::cs::Int32 rideChara_{};
pls::cs::String args_{};
pls::cs::Array<pls::cs::Int32> argi_{};

static void ensure_initialized();

static void create_init(pls::cs::Ref<DelayEvent> self);

static void create_init(pls::cs::Ref<DelayEvent> self,pls::cs::Int32 delayId,pls::cs::Int32 line,pls::cs::Int32 wait,pls::cs::Int32 hour,pls::cs::Int32 rideChara,pls::cs::String args,pls::cs::Array<pls::cs::Int32> argi);

static pls::cs::Ref<DelayEvent> create();

static pls::cs::Ref<DelayEvent> create(pls::cs::Int32 delayId,pls::cs::Int32 line,pls::cs::Int32 wait,pls::cs::Int32 hour,pls::cs::Int32 rideChara,pls::cs::String args,pls::cs::Array<pls::cs::Int32> argi);

void Serialize(pls::cs::Ref<generated::java::io::OutputStream> os);

void Deserialize(pls::cs::Ref<generated::java::io::InputStream> stream);
};
} // namespace game
}
