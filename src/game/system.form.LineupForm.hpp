// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "form.MyFormBase.hpp"
#include "game_generated_forward.hpp"

namespace pls::game {
namespace system::form {

struct LineupForm : pls::game::form::MyFormBase {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(MyFormBase, {"ToString", "M:system.form.LineupForm.ToString"},
                       {"Init", "M:system.form.LineupForm.Init"},
                       {"Draw", "M:system.form.LineupForm.Draw(kairo.unity.ui.Graphics)"},
                       {"Finish", "M:system.form.LineupForm.Finish"},
                       {"Resume", "M:system.form.LineupForm.Resume"},
                       {"Update", "M:system.form.LineupForm.Update"},
                       {"GetTouchValue", "M:system.form.LineupForm.GetTouchValue(System.Int32,System.Int32)"},
                       {"SetTouchValue", "M:system.form.LineupForm.SetTouchValue(System.Int32,System.Int32)"},
                       {"CheckMainWindow", "M:system.form.LineupForm.CheckMainWindow"},
                       {"GetHashCode", "M:system.form.LineupForm.GetHashCode"});
    PLS_MANAGED_CLASS("system.form.LineupForm", LineupForm, MyFormBase, pls::kairo::TouchValueAccessor)
    pls::cs::Int32 type_{};
    pls::cs::Int32 select_{};
    pls::cs::Int32 loopCounter_{};
    pls::cs::Int32 frame_{};
    pls::cs::Array<pls::cs::Ref<kairo::unity::system::lineup::ui::LineupData>> linups_{};
    pls::cs::Ref<kairo::unity::ui::TextLayout> lay_{};
    pls::cs::Array<pls::cs::Int32> clip_{};
    bool push_{};
    pls::cs::String ToString() override;
    bool Init() override;
    void Draw(pls::cs::Ref<pls::kairo::Graphics> g) override;
    bool Finish() override;
    bool Resume() override;
    bool Update() override;
    std::int32_t GetTouchValue(std::int32_t type, std::int32_t index) override;
    void SetTouchValue(std::int32_t type, std::int32_t value) override;
    bool CheckMainWindow() override;
    std::int32_t GetHashCode() override;
    static constexpr pls::cs::Int32 FORMID_LINEUP = 903;
    static constexpr pls::cs::Int32 TYPE_MAIN = 0;
    static constexpr pls::cs::Int32 RESLINEUPLAY_SEB_BG = 0;
    static void ensure_initialized();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& configData_();

    static pls::cs::Ref<kairo::unity::ui::ResourceManager>& resLineupLayout_();

    static void create_init(pls::cs::Ref<LineupForm> self);

    static void create_init(pls::cs::Ref<LineupForm> self, pls::cs::Int32 type);

    static pls::cs::Ref<LineupForm> create();

    static pls::cs::Ref<LineupForm> create(pls::cs::Int32 type);

    pls::cs::Array<pls::cs::Int32> DrawCommand(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String str,
                                               pls::cs::Int32 x, pls::cs::Int32 y, pls::cs::Int32 anchor,
                                               bool active, pls::cs::Int32 margin, bool cursor);

    void SetSoftlabel();
};
} // namespace system::form
}
