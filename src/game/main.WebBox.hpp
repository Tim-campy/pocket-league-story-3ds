// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace main {

struct WebBox : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("main.WebBox", WebBox, pls::cs::Object)

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<WebBox> self);

    static pls::cs::Ref<WebBox> create();

    static pls::cs::Ref<WebBox> Create();

    void SetViewRect(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                     pls::cs::Int32 width, pls::cs::Int32 height);

    void SetViewRect(pls::cs::Int32 x, pls::cs::Int32 y, pls::cs::Int32 width, pls::cs::Int32 height);

    void LoadUrl(pls::cs::String url);

    void Dispose();

    bool Visible();

    void SetVisible(bool visible);
};
} // namespace main
}
