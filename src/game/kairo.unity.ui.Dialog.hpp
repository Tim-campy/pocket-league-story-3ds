// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::ui {

struct Dialog : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("kairo.unity.ui.Dialog", Dialog, pls::cs::Object)
    pls::cs::Ref<pls::kairo::Font> font_{};
    pls::cs::String title_{};
    pls::cs::String msg_{};
    pls::cs::Array<pls::cs::String> cmds_{};
    pls::cs::Int32 background_{};
    pls::cs::Int32 type_{};
    pls::cs::String url_{};
    static constexpr pls::cs::Int32 BUTTON_CANCEL = 2;
    static constexpr pls::cs::Int32 BUTTON_NO = 8;
    static constexpr pls::cs::Int32 BUTTON_OK = 1;
    static constexpr pls::cs::Int32 BUTTON_YES = 4;
    static constexpr pls::cs::Int32 DIALOG_ERROR = 2;
    static constexpr pls::cs::Int32 DIALOG_INFO = 0;
    static constexpr pls::cs::Int32 DIALOG_WARNING = 1;
    static constexpr pls::cs::Int32 DIALOG_YESNO = 3;
    static constexpr pls::cs::Int32 DIALOG_YESNOCANCEL = 4;
    static void ensure_initialized();

    static void create_init(pls::cs::Ref<Dialog> self, pls::cs::Int32 type, pls::cs::String title);

    static pls::cs::Ref<Dialog> create(pls::cs::Int32 type, pls::cs::String title);

    void SetText(pls::cs::String msg);

    void SetButtons(pls::cs::Array<pls::cs::String> buttons);

    pls::cs::Int32 Show();
};
} // namespace kairo::unity::ui
}
