// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::native::KairoPlugin {

void ensure_initialized();

pls::cs::Int32& appHeight_();

pls::cs::Int32& appWidth_();

pls::cs::Int32& isTablet_();

pls::cs::Int32& sdk_();

pls::cs::Int32& statusBarHeight_();

pls::cs::Int32& statusBarPosition_();

pls::cs::Int32& systemBarHeight_();

pls::cs::Int32& unityVarsion_();

void CancelNotifications(bool notify, bool ararm);

pls::cs::String GetGCMRegistrationId();

pls::cs::Int32 GetNotificationFilter();

pls::cs::String GetReleaseNumber();

bool IsWeakDrawDevice();

void SetClockTime(pls::cs::Int64 time, pls::cs::Int32 precision);

void SetNotificationBackground(bool enable);
} // namespace kairo::unity::native::KairoPlugin
}
