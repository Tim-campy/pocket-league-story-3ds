// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
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

void TrackPageView(bool packageName,pls::cs::String id,pls::cs::Array<pls::cs::String> p);
} // namespace kairo::unity::analytics::AnalyticsTracker
}
