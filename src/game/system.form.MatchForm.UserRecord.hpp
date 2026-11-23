// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace system::form {

struct MatchForm_UserRecord : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("system.form.MatchForm+UserRecord", MatchForm_UserRecord, pls::cs::Object)
pls::cs::Int32 rank_{};
pls::cs::Int32 friendId_{};
pls::cs::Int32 number_{};
pls::cs::Int32 visitor_{};
pls::cs::String innName_{};
pls::cs::Int32 year_{};
pls::cs::Int32 month_{};
pls::cs::Int32 week_{};
pls::cs::Int64 money_{};
pls::cs::String country_{};
pls::cs::String name_{};
pls::cs::Ref<pls::kairo::Image> image_{};

static void ensure_initialized();

static void create_init(pls::cs::Ref<MatchForm_UserRecord> self);

static pls::cs::Ref<MatchForm_UserRecord> create();
};
} // namespace system::form
}
