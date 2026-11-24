// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::analytics {

struct AnalyticsTracker_AnalyticsData : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("kairo.unity.analytics.AnalyticsTracker+AnalyticsData", AnalyticsTracker_AnalyticsData,
                      pls::cs::Object)
    pls::cs::String Url{};
    pls::cs::Int32 Retry{};
    pls::cs::Int64 Date{};

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<AnalyticsTracker_AnalyticsData> self);

    static void create_init(pls::cs::Ref<AnalyticsTracker_AnalyticsData> self, pls::cs::String url);

    static pls::cs::Ref<AnalyticsTracker_AnalyticsData> create();

    static pls::cs::Ref<AnalyticsTracker_AnalyticsData> create(pls::cs::String url);
};
} // namespace kairo::unity::analytics
}
