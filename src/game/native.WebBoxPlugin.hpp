// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace native::WebBoxPlugin {

bool Create();

void Dispose();

void LoadUrl(pls::cs::String url);

void SetViewRect(pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 width,pls::cs::Int32 height);

void SetVisible(bool visible);

bool Visible();
} // namespace native::WebBoxPlugin
}
