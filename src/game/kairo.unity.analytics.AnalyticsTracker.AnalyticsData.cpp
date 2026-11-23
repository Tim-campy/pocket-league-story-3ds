// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "kairo.unity.analytics.AnalyticsTracker.AnalyticsData.hpp"
#include "kairo.unity.util.ClockTime.hpp"
namespace pls::game {
namespace kairo::unity::analytics {

void AnalyticsTracker_AnalyticsData::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(Url,visitor);}

static PLS_NOINLINE void cs_init_70c4092da329e972_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("kairo.unity.analytics.AnalyticsTracker.AnalyticsData",flag,[](){

});}

void AnalyticsTracker_AnalyticsData::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_70c4092da329e972_slow(flag);}

void AnalyticsTracker_AnalyticsData::create_init(pls::cs::Ref<AnalyticsTracker_AnalyticsData> self) {
AnalyticsTracker_AnalyticsData::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.analytics.AnalyticsTracker.AnalyticsData.#ctor",kairo);
{

}

}

void AnalyticsTracker_AnalyticsData::create_init(pls::cs::Ref<AnalyticsTracker_AnalyticsData> self,pls::cs::String url) {
AnalyticsTracker_AnalyticsData::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.analytics.AnalyticsTracker.AnalyticsData.#ctor(System.String)",kairo);
{
self->Url = url;
self->Retry = 0;
self->Date = util::ClockTime::GetTime();
}

}

// M:kairo.unity.analytics.AnalyticsTracker.AnalyticsData.#ctor
pls::cs::Ref<AnalyticsTracker_AnalyticsData> AnalyticsTracker_AnalyticsData::create() {
AnalyticsTracker_AnalyticsData::ensure_initialized();
 auto self = pls::cs::make_ref<AnalyticsTracker_AnalyticsData>(); AnalyticsTracker_AnalyticsData::create_init(self); return self; 
}

// M:kairo.unity.analytics.AnalyticsTracker.AnalyticsData.#ctor(System.String)
pls::cs::Ref<AnalyticsTracker_AnalyticsData> AnalyticsTracker_AnalyticsData::create(pls::cs::String url) {
AnalyticsTracker_AnalyticsData::ensure_initialized();
 auto self = pls::cs::make_ref<AnalyticsTracker_AnalyticsData>(); AnalyticsTracker_AnalyticsData::create_init(self,url); return self; 
}
} // namespace kairo::unity::analytics
}
