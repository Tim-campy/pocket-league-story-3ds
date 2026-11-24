// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace surface {

struct TouchEffectManager : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("surface.TouchEffectManager", TouchEffectManager, pls::cs::Object)
    pls::cs::Ref<generated::kairo::unity::util::FastVector_2<pls::cs::Ref<TouchEffect>>> effects{};
    pls::cs::Ref<generated::kairo::unity::util::FastVector_2<pls::cs::Ref<TouchEffect>>> effectsBuffer_{};

    static void ensure_initialized();

    static pls::cs::Ref<TouchEffectManager>& instance_();

    static void create_init(pls::cs::Ref<TouchEffectManager> self);

    static pls::cs::Ref<TouchEffectManager> create();

    static pls::cs::Ref<TouchEffectManager> GetInstance();

    void Add(pls::cs::Ref<TouchEffect> effect);

    void Frame();

    void Draw(pls::cs::Ref<pls::kairo::Graphics> g);

    void Clear();

    void RemoveEffect(pls::cs::Ref<TouchEffect> effect);

    void RemoveEffectInt(pls::cs::Int32 index);

    void RemoveSurface(pls::cs::Ref<kairo::unity::surface::SurfaceBase> surface);

    void RemoveId(pls::cs::Int32 id);

    void RemoveComponentId(pls::cs::Ref<kairo::unity::surface::SurfaceBase> surface,
                           pls::cs::Int32 componentId);

    void RemoveComponentKey(pls::cs::Ref<kairo::unity::surface::SurfaceBase> surface,
                            pls::cs::Int64 componentKey);

    pls::cs::Ref<TouchEffect> AddEffect(pls::cs::Ref<kairo::unity::surface::SurfaceBase> surface,
                                        pls::cs::Int32 id, pls::cs::Single x, pls::cs::Single y,
                                        pls::cs::Ref<kairo::unity::surface::TouchComponent> component,
                                        pls::cs::Ref<pls::cs::Object> arg);

    pls::cs::Ref<TouchEffect> AddEffect(pls::cs::Ref<kairo::unity::surface::SurfaceBase> surface,
                                        pls::cs::Int32 id, pls::cs::Single x, pls::cs::Single y,
                                        pls::cs::Ref<kairo::unity::surface::TouchComponent> component);
};
} // namespace surface
}
