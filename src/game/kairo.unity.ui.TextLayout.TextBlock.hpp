// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::ui {

struct TextLayout_TextBlock : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("kairo.unity.ui.TextLayout+TextBlock", TextLayout_TextBlock, pls::cs::Object)
    pls::cs::Ref<TextLayout> parent_{};
    pls::cs::Ref<pls::kairo::Font> font_{};
    pls::cs::Int32 color_{};
    pls::cs::String text_{};
    pls::cs::Single x_{};
    pls::cs::Single y_{};
    pls::cs::Int32 blink_{};
    pls::cs::Int32 blinkCnt_{};
    pls::cs::Single width_{};
    bool isPictograph_{};
    pls::cs::Array<pls::cs::String> pictographParam_{};

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<TextLayout_TextBlock> self, pls::cs::Ref<TextLayout> parent,
                            pls::cs::Ref<pls::kairo::Font> font, pls::cs::Int32 color, pls::cs::Single x,
                            pls::cs::Single y, pls::cs::Int32 blink);

    static pls::cs::Ref<TextLayout_TextBlock> create(pls::cs::Ref<TextLayout> parent,
                                                     pls::cs::Ref<pls::kairo::Font> font,
                                                     pls::cs::Int32 color, pls::cs::Single x,
                                                     pls::cs::Single y, pls::cs::Int32 blink);

    pls::cs::Int32 Draw(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y,
                        pls::cs::Single boxY, pls::cs::Single boxH, pls::cs::Int32 len);

    void Dispose();
};
} // namespace kairo::unity::ui
}
