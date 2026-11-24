// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace analytics {

struct AnalyticsTracker : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("analytics.AnalyticsTracker", AnalyticsTracker, pls::cs::Object)

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<AnalyticsTracker> self);

    static pls::cs::Ref<AnalyticsTracker> create();

    static void TrackPageView(bool packageName, pls::cs::Array<pls::cs::String> p);

    static void TrackPageViewId(bool packageName, pls::cs::String id, pls::cs::Array<pls::cs::String> p);

    static void DispatchPageView();
};
} // namespace analytics
}
