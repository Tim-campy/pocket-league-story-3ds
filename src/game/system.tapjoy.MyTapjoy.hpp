// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
#include "kairo.unity.system.tapjoy.ui.ITapjoy.hpp"
#include "system.tapjoy.ui.Tapjoy.hpp"
namespace pls::game {
namespace system::tapjoy {

struct MyTapjoy : ui::Tapjoy {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("system.tapjoy.MyTapjoy", MyTapjoy, Tapjoy, ITapjoy)

static void ensure_initialized();

static void create_init(pls::cs::Ref<MyTapjoy> self);

static pls::cs::Ref<MyTapjoy> create();

static pls::cs::Ref<MyTapjoy> GetInstance();
};
} // namespace system::tapjoy
}
