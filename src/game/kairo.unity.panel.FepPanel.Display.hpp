// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::panel::FepPanel_Display {

void ensure_initialized();

void SetCurrent(pls::cs::Ref<FepPanel> panel);

void SetCurrentCanvas(pls::cs::Ref<pls::kairo::Canvas> canvas);
} // namespace kairo::unity::panel::FepPanel_Display
}
