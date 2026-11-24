// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::ui::IApplication {

pls::cs::Int32 GetBattery(pls::cs::Ref<pls::kairo::IApplication> self);

bool IsBatteryCharging(pls::cs::Ref<pls::kairo::IApplication> self);
} // namespace kairo::unity::ui::IApplication
}
