// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace data {

struct BaseData : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("data.BaseData", BaseData, pls::cs::Object)
pls::cs::Int32 id_{};
pls::cs::Int32 flag_{};

static void ensure_initialized();

static void create_init(pls::cs::Ref<BaseData> self);

static pls::cs::Ref<BaseData> create();

bool Check(pls::cs::Int32 bit);
};
} // namespace data
}
