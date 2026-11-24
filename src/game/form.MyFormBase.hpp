// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace form {

struct MyFormBase : pls::kairo::FormBase {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(pls::kairo::FormBase, {"Init", "M:form.MyFormBase.Init"},
                       {"Update", "M:form.MyFormBase.Update"},
                       {"Draw", "M:form.MyFormBase.Draw(kairo.unity.ui.Graphics)"},
                       {"Resume", "M:form.MyFormBase.Resume"}, {"Finish", "M:form.MyFormBase.Finish"},
                       {"GetTouchValue", "M:form.MyFormBase.GetTouchValue(System.Int32,System.Int32)"},
                       {"SetTouchValue", "M:form.MyFormBase.SetTouchValue(System.Int32,System.Int32)"},
                       {"M:form.MyFormBase.OnTouchEvent(kairo.unity.surface.TouchEvent)",
                        "M:form.MyFormBase.OnTouchEvent(kairo.unity.surface.TouchEvent)"});
    PLS_MANAGED_CLASS("form.MyFormBase", MyFormBase, pls::kairo::FormBase, pls::kairo::TouchValueAccessor)
    pls::cs::Ref<pls::kairo::IApplication> app_{};
    pls::cs::Ref<main::AppData> apdat_{};
    pls::cs::Ref<pls::kairo::Canvas> canvas_{};
    pls::cs::Ref<FormManager> formMan_{};
    pls::cs::Ref<surface::GameView> view_{};
    pls::cs::Ref<surface::GamePad> pad_{};
    pls::cs::Int32 update_{};
    pls::cs::Int32 draw_{};
    pls::cs::Ref<SubForm> dialog_{};
    pls::cs::Int32 result_{};
    pls::cs::Int32 arwFrame_{};
    pls::cs::Array<pls::cs::Int32> drawWindow_tmp{};
    bool Init() override;
    bool Update() override;
    void Draw(pls::cs::Ref<pls::kairo::Graphics> g) override;
    bool Resume() override;
    bool Finish() override;
    std::int32_t GetTouchValue(std::int32_t type, std::int32_t index) override;
    void SetTouchValue(std::int32_t type, std::int32_t value) override;
    virtual bool OnTouchEvent(pls::cs::Ref<kairo::unity::surface::TouchEvent> e);

    static void ensure_initialized();

    static pls::cs::Int32& fontSize_();

    static pls::cs::Int32& WNDFLAG_BOX();

    static pls::cs::Int32& WNDFLAG_LEFT_ARW();

    static pls::cs::Int32& WNDFLAG_RIGHT_ARW();

    static pls::cs::Int32& WNDRET_BOTTOM();

    static pls::cs::Int32& WNDRET_BOX_BOTTOM();

    static pls::cs::Int32& WNDRET_BOX_END();

    static pls::cs::Int32& WNDRET_BOX_LEFT();

    static pls::cs::Int32& WNDRET_BOX_RIGHT();

    static pls::cs::Int32& WNDRET_BOX_TOP();

    static pls::cs::Int32& WNDRET_LEFT();

    static pls::cs::Int32& WNDRET_RIGHT();

    static pls::cs::Int32& WNDRET_TOP();

    static void create_init(pls::cs::Ref<MyFormBase> self, pls::cs::Int32 id);

    static pls::cs::Ref<MyFormBase> create(pls::cs::Int32 id);

    static pls::cs::String Yen(pls::cs::Int64 value, bool cs);

    static pls::cs::String Yen(pls::cs::Int64 value);

    static pls::cs::String Manyen(pls::cs::Int64 value, bool omit, bool cs);

    static pls::cs::String Manyen(pls::cs::Int64 value, bool omit);

    static pls::cs::String Manyen(pls::cs::Int64 value);

    static pls::cs::String Unit(pls::cs::Int64 value, bool cs);

    static pls::cs::String Comma(pls::cs::Int64 value);

    pls::cs::String Format(pls::cs::String str, pls::cs::Int32 len, char16_t padding);

    pls::cs::String Format(pls::cs::String str, pls::cs::Int32 len);

    pls::cs::String FormatInt(pls::cs::Int32 v, pls::cs::Int32 len, char16_t padding);

    pls::cs::String FormatInt(pls::cs::Int32 v, pls::cs::Int32 len);

    pls::cs::String FormatLong(pls::cs::Int64 v, pls::cs::Int32 len, char16_t padding);

    pls::cs::String FormatLong(pls::cs::Int64 v, pls::cs::Int32 len);

    pls::cs::String Replace(pls::cs::String text, pls::cs::String oldStr, pls::cs::String newStr);

    static pls::cs::String Replace(pls::cs::String text, pls::cs::String arg);

    bool Active();

    bool Push(pls::cs::String text, pls::cs::String cmds, pls::cs::Int32 defaultSelect);

    bool Push(pls::cs::String text, pls::cs::String cmds);

    bool Push(pls::cs::String text);

    bool Pop(pls::cs::Int32 result);

    bool Check(pls::cs::Int32 flag, pls::cs::Int32 bit);

    static bool Jp();

    static bool En();

    pls::cs::Int32 Tv(pls::cs::Int32 type, pls::cs::Int32 value);

    pls::cs::Array<pls::cs::Int32> DrawWindow(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 width,
                                              pls::cs::Int32 height, pls::cs::String title,
                                              pls::cs::Int32 sideSpace, pls::cs::Int32 topSpace,
                                              pls::cs::Int32 bottomSpace, pls::cs::Int32 barArwSpace,
                                              pls::cs::Int32 flag);

    pls::cs::Array<pls::cs::Int32> DrawWindow2(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 width,
                                               pls::cs::Int32 height, pls::cs::String title,
                                               pls::cs::Int32 sideSpace, pls::cs::Int32 topSpace,
                                               pls::cs::Int32 bottomSpace, pls::cs::Int32 barArwSpace,
                                               pls::cs::Int32 flag, pls::cs::Int32 ay);

    static pls::cs::Int32 GetBoxHeaderY(pls::cs::Int32 boxTop);

    static pls::cs::Int32 GetBoxFooterY(pls::cs::Int32 boxBottom);

    static pls::cs::String LT(pls::cs::String text, pls::cs::String arg);

    static pls::cs::String LT(pls::cs::String text);

    static pls::cs::String LTLong(pls::cs::String text, pls::cs::Int64 arg);

    pls::cs::Ref<kairo::unity::ui::TextFormat> LF(pls::cs::String format);

    static pls::cs::String YEN(pls::cs::String text, pls::cs::Int64 value, bool comma);

    static pls::cs::String YEN(pls::cs::String text, pls::cs::Int64 value);

    static pls::cs::String UNI(pls::cs::String text, pls::cs::Int64 value, bool comma);

    static pls::cs::String UNI(pls::cs::String text, pls::cs::Int64 value);

    static void PushFontSize(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 size);

    static void BackFontSize(pls::cs::Ref<pls::kairo::Graphics> g);
};
} // namespace form
}
