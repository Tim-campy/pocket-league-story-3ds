// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::ui {

struct Image_TextRenderTask {
    void trace_edges(const pls::cs::EdgeVisitor&) const;
    pls::cs::String Text{};
    pls::cs::Single X{};
    pls::cs::Single Y{};
    pls::cs::Int32 Anchor{};
    pls::cs::Int32 Color{};
    pls::cs::Ref<pls::kairo::Font> Font{};

    static void ensure_initialized();

    static void create_init(Image_TextRenderTask* self, pls::cs::String text, pls::cs::Single x,
                            pls::cs::Single y, pls::cs::Int32 anchor, pls::cs::Int32 color,
                            pls::cs::Ref<pls::kairo::Font> font);

    static Image_TextRenderTask create(pls::cs::String text, pls::cs::Single x, pls::cs::Single y,
                                       pls::cs::Int32 anchor, pls::cs::Int32 color,
                                       pls::cs::Ref<pls::kairo::Font> font);
};
} // namespace kairo::unity::ui
}
