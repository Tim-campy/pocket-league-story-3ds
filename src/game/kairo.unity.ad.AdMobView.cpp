// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/kairo.common.cfg.Config.hpp"
#include "kairo.unity.ad.AdMobView.hpp"

namespace pls::game {
namespace kairo::unity::ad {

void AdMobView::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
}

static pls::cs::Int32 AdMobView_adHeight__storage{};

static PLS_NOINLINE void cs_init_7a470603d6db57af_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(AdMobView_adHeight__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.ad.AdMobView", flag, []() {
        AdMobView_adHeight__storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.unity.ad.AdMobView.adHeight_", [&]() { return -1; });
    });
}

void AdMobView::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_7a470603d6db57af_slow(flag);
}

pls::cs::Int32& AdMobView::adHeight_() {
    AdMobView::ensure_initialized();
    return AdMobView_adHeight__storage;
}

// M:kairo.unity.ad.AdMobView.IsLoad
bool AdMobView::IsLoad() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ad.AdMobView.IsLoad", kairo);
    {
        return false;
    }
}

// M:kairo.unity.ad.AdMobView.GetAdHeight
pls::cs::Int32 AdMobView::GetAdHeight() {
    AdMobView::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ad.AdMobView.GetAdHeight", kairo);
    {
        return 0;
    }
}
} // namespace kairo::unity::ad
}
