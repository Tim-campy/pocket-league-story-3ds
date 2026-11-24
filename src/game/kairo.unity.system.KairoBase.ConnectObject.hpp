// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"
#include "kairo.unity.io.HttpObject.hpp"

namespace pls::game {
namespace kairo::unity::system {

struct KairoBase_ConnectObject : io::HttpObject {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("kairo.unity.system.KairoBase+ConnectObject", KairoBase_ConnectObject, HttpObject)
    pls::cs::Ref<KairoBase> base_{};
};
} // namespace kairo::unity::system
}
