// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
#include "kairo.unity.panel.Component.hpp"
namespace pls::game {
namespace kairo::unity::panel {

struct Button : Component {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("kairo.unity.panel.Button", Button, Component)
pls::cs::String label_{};

static void ensure_initialized();

static void create_init(pls::cs::Ref<Button> self,pls::cs::String text);

static pls::cs::Ref<Button> create(pls::cs::String text);

pls::cs::Int32 GetWidth();

void SetLocation(pls::cs::Int32 x,pls::cs::Int32 y);
};
} // namespace kairo::unity::panel
}
