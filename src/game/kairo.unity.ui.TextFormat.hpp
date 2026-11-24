// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::ui {

struct TextFormat : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("kairo.unity.ui.TextFormat", TextFormat, pls::cs::Object)
    pls::cs::Int32 font_{};
    pls::cs::Array<pls::cs::Int32> x_{};
    pls::cs::Array<pls::cs::Int32> y_{};
    pls::cs::Int32 anchor_{};

    static void ensure_initialized();

    static pls::cs::Ref<TextFormat>& textFormat_();

    static void create_init(pls::cs::Ref<TextFormat> self);

    static pls::cs::Ref<TextFormat> create();

    static pls::cs::Ref<TextFormat> Create(pls::cs::String format);

    void Init(pls::cs::String format);

    pls::cs::Int32 GetFont();

    pls::cs::Single GetX(pls::cs::Single x);

    pls::cs::Single GetY(pls::cs::Single y);

    pls::cs::Single GetXY(pls::cs::Single basis, pls::cs::Array<pls::cs::Int32> elem);

    pls::cs::Int32 GetAnchor(pls::cs::Int32 anchor);
};
} // namespace kairo::unity::ui
}
