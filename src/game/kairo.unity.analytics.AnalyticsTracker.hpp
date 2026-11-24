// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::analytics::AnalyticsTracker {

void ensure_initialized();

pls::cs::List<pls::cs::Ref<AnalyticsTracker_AnalyticsData>>& analyticsBuffer_();

pls::cs::Array<pls::cs::String>& HIT_TYPES();

bool& isSetup_();

pls::cs::Ref<pls::cs::Object>& lock_();

pls::cs::Ref<java::lang::JThread>& thread_();

void DispatchPageView();

pls::cs::String Encode(pls::cs::String url);

pls::cs::String GetApplicationName();

pls::cs::String MakeClientId();

void Run();

void Save();

void Setup();

void TrackPageView(bool packageName, pls::cs::String id, pls::cs::Array<pls::cs::String> p);
} // namespace kairo::unity::analytics::AnalyticsTracker
}
