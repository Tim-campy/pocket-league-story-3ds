// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::ad {

struct AdMobView : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("kairo.unity.ad.AdMobView", AdMobView, pls::cs::Object)

    static void ensure_initialized();

    static pls::cs::Int32& adHeight_();

    bool IsLoad();

    static pls::cs::Int32 GetAdHeight();
};
} // namespace kairo::unity::ad
}
