// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::ui::IApplication {

pls::cs::Int32 GetBattery(pls::cs::Ref<pls::kairo::IApplication> self);

bool IsBatteryCharging(pls::cs::Ref<pls::kairo::IApplication> self);
} // namespace kairo::unity::ui::IApplication
}
