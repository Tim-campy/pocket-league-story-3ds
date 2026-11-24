// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::panel::FepPanel_Display {

void ensure_initialized();

void SetCurrent(pls::cs::Ref<FepPanel> panel);

void SetCurrentCanvas(pls::cs::Ref<pls::kairo::Canvas> canvas);
} // namespace kairo::unity::panel::FepPanel_Display
}
