// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"
#include "kairo.unity.panel.Component.hpp"

namespace pls::game {
namespace kairo::unity::panel {

struct TextBox : Component {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("kairo.unity.panel.TextBox", TextBox, Component)
    pls::cs::String text_{};
    pls::cs::Int32 columns_{};
    pls::cs::Int32 mode_{};
    pls::cs::Int32 maxLength_{};
    static constexpr pls::cs::Int32 DISPLAY_ANY = 0;
    static constexpr pls::cs::Int32 DISPLAY_PASSWORD = 0;
    static constexpr pls::cs::Int32 NUMBER = 0;
    static constexpr pls::cs::Int32 ALPHA = 1;
    static constexpr pls::cs::Int32 KANA = 2;
    static void ensure_initialized();

    static void create_init(pls::cs::Ref<TextBox> self, pls::cs::String text, pls::cs::Int32 columns,
                            pls::cs::Int32 rows, pls::cs::Int32 mode);

    static pls::cs::Ref<TextBox> create(pls::cs::String text, pls::cs::Int32 columns, pls::cs::Int32 rows,
                                        pls::cs::Int32 mode);

    pls::cs::Int32 GetWidth();

    pls::cs::Int32 GetHeight();

    void SetLocation(pls::cs::Int32 x, pls::cs::Int32 y);

    void SetInputMode(pls::cs::Int32 mode);

    void SetMaxLength(pls::cs::Int32 length);

    pls::cs::String GetText();
};
} // namespace kairo::unity::panel
}
