// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::surface {

struct SurfaceBase_TouchPoint : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("kairo.unity.surface.SurfaceBase+TouchPoint", SurfaceBase_TouchPoint, pls::cs::Object)
    pls::cs::Int64 key{};
    pls::cs::Int32 id{};
    pls::cs::Int32 value{};
    pls::cs::Single x{};
    pls::cs::Single y{};
    pls::cs::Single dragBaseX{};
    pls::cs::Single dragBaseY{};
    pls::cs::Ref<TouchComponent> component{};

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<SurfaceBase_TouchPoint> self);

    static pls::cs::Ref<SurfaceBase_TouchPoint> create();

    void Init(pls::cs::Int64 key, pls::cs::Single x, pls::cs::Single y,
              pls::cs::Ref<TouchComponent> component);
};
} // namespace kairo::unity::surface
}
