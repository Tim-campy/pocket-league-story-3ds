// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "analytics.AnalyticsTracker.hpp"
#include "kairo.unity.analytics.AnalyticsTracker.hpp"
using StringArray = pls::cs::Array<pls::cs::String>;

namespace pls::game {
namespace analytics {

void AnalyticsTracker::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
}

static PLS_NOINLINE void cs_init_2e79f4f38b707be7_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("analytics.AnalyticsTracker", flag, []() {

    });
}

void AnalyticsTracker::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_2e79f4f38b707be7_slow(flag);
}

void AnalyticsTracker::create_init(pls::cs::Ref<AnalyticsTracker> self) {
    AnalyticsTracker::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:analytics.AnalyticsTracker.#ctor", game);
    {
    }
}

// M:analytics.AnalyticsTracker.#ctor
pls::cs::Ref<AnalyticsTracker> AnalyticsTracker::create() {
    AnalyticsTracker::ensure_initialized();
    auto self = pls::cs::make_ref<AnalyticsTracker>();
    AnalyticsTracker::create_init(self);
    return self;
}

// M:analytics.AnalyticsTracker.TrackPageView(System.Boolean,System.String[])
void AnalyticsTracker::TrackPageView(bool packageName, StringArray p) {
    AnalyticsTracker::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:analytics.AnalyticsTracker.TrackPageView(System.Boolean,System.String[])", game);
    {
        AnalyticsTracker::TrackPageViewId(packageName, literal(u"UA-35228877-2"), p);
    }
}

// M:analytics.AnalyticsTracker.TrackPageViewId(System.Boolean,System.String,System.String[])
void AnalyticsTracker::TrackPageViewId(bool packageName, pls::cs::String id, StringArray p) {
    AnalyticsTracker::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:analytics.AnalyticsTracker.TrackPageViewId(System.Boolean,System.String,System.String[])", game);
    {
        pls::cs::String text = pls::cs::String(u"");
        for (pls::cs::Int32 i = 0; i < p.length(); ++i) {
            if (i != 0) {
                text = pls::cs::String::concat(text, literal(u"/"));
            }
            text = pls::cs::String::concat(text, p[i]);
        }
        {
            bool cs_arg0 = packageName;
            pls::cs::String cs_arg1 = id;
            auto cs_arg2 = StringArray::make(1);
            cs_arg2.at(0) = text;
            kairo::unity::analytics::AnalyticsTracker::TrackPageView(cs_arg0, cs_arg1, cs_arg2);
        }
    }
}

// M:analytics.AnalyticsTracker.DispatchPageView
void AnalyticsTracker::DispatchPageView() {
    AnalyticsTracker::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:analytics.AnalyticsTracker.DispatchPageView", game);
    {
    }
}
} // namespace analytics
}
