// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::util::ClockTime {

void ensure_initialized();

bool& isSetTime_();

void Destroy();

pls::cs::Int64 GetTime();

void SetTime(pls::cs::Int64 time, pls::cs::Int32 precision);
} // namespace kairo::unity::util::ClockTime
}
