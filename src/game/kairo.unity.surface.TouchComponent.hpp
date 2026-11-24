// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::surface {

struct TouchComponent : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("kairo.unity.surface.TouchComponent", TouchComponent, pls::cs::Object)
    pls::cs::Ref<SurfaceBase> surface_{};
    pls::cs::Int32 id{};
    pls::cs::Int32 x{};
    pls::cs::Int32 y{};
    pls::cs::Int32 width{};
    pls::cs::Int32 height{};
    pls::cs::Int32 value{};
    pls::cs::Ref<TouchOption> option{};
    pls::cs::Int32 paintX{};
    pls::cs::Int32 paintY{};
    pls::cs::Int32 paintFrame{};
    bool isLock{};
    pls::cs::Int32 hasCount{};

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<TouchComponent> self);

    static void create_init(pls::cs::Ref<TouchComponent> self, pls::cs::Ref<TouchComponent> copy);

    static pls::cs::Ref<TouchComponent> create();

    static pls::cs::Ref<TouchComponent> create(pls::cs::Ref<TouchComponent> copy);

    void Init();

    void SetPaint(pls::cs::Int32 x, pls::cs::Int32 y, pls::cs::Int32 frame);

    void SetPaint(pls::cs::Int32 x, pls::cs::Int32 y);

    pls::cs::Int64 GetKey();

    static pls::cs::Int64 GetKey(pls::cs::Int32 id, pls::cs::Int32 value);

    static pls::cs::Int32 GetId(pls::cs::Int64 key);

    bool Check(pls::cs::Int32 bit);

    pls::cs::Int32 GetPriority();
};
} // namespace kairo::unity::surface
}
