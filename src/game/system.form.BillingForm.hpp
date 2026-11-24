// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "form.MyFormBase.hpp"
#include "game_generated_forward.hpp"
#include "java.lang.JRunnable.hpp"

namespace pls::game {
namespace system::form {

struct BillingForm : pls::game::form::MyFormBase, java::lang::JRunnable {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(
        MyFormBase, {"ToString", "M:system.form.BillingForm.ToString"},
        {"Init", "M:system.form.BillingForm.Init"},
        {"Draw", "M:system.form.BillingForm.Draw(kairo.unity.ui.Graphics)"},
        {"Finish", "M:system.form.BillingForm.Finish"}, {"Resume", "M:system.form.BillingForm.Resume"},
        {"Update", "M:system.form.BillingForm.Update"},
        {"GetTouchValue", "M:system.form.BillingForm.GetTouchValue(System.Int32,System.Int32)"},
        {"SetTouchValue", "M:system.form.BillingForm.SetTouchValue(System.Int32,System.Int32)"},
        {"M:form.MyFormBase.OnTouchEvent(kairo.unity.surface.TouchEvent)",
         "M:system.form.BillingForm.OnTouchEvent(kairo.unity.surface.TouchEvent)"},
        {"CheckMainWindow", "M:system.form.BillingForm.CheckMainWindow"},
        {"M:java.lang.JRunnable.Run", "M:system.form.BillingForm.Run"},
        {"GetHashCode", "M:system.form.BillingForm.GetHashCode"});
    PLS_MANAGED_CLASS("system.form.BillingForm", BillingForm, MyFormBase, pls::kairo::TouchValueAccessor,
                      JRunnable)
    pls::cs::Int32 type_{};
    pls::cs::Int32 scrollValue_{};
    bool untilActiveHide_{};
    pls::cs::Int32 select_{};
    pls::cs::Int32 select2_{};
    pls::cs::Int32 x_{};
    pls::cs::Int32 y_{};
    pls::cs::Int32 loopCounter_{};
    pls::cs::Int32 frame_{};
    pls::cs::Int32 page_{};
    pls::cs::Int32 mode_{};
    pls::cs::Ref<kairo::unity::ui::TextLayout> textLay_{};
    pls::cs::Int32 value1_{};
    pls::cs::Int32 value2_{};
    pls::cs::Int32 value3_{};
    pls::cs::Ref<BillingForm> bform_{};
    pls::cs::Ref<billing::ui::ApplyTask> task_{};
    pls::cs::Ref<billing::ui::BillingItem> item_{};
    pls::cs::Array<pls::cs::Ref<billing::ui::BillingItem>> sales_{};
    pls::cs::Array<pls::cs::String> marketNotes_{};
    bool skipUpdateSales_{};
    pls::cs::String password_{};
    pls::cs::Int32 dialogId_{};
    pls::cs::Int32 threadType_{};
    pls::cs::Int32 threadState_{};
    pls::cs::Int64 threadBeginTime_{};
    pls::cs::Int32 threadFrame_{};
    pls::cs::String error_{};
    pls::cs::Ref<java::lang::JThread> th_{};
    pls::cs::Array<pls::cs::String> gift_{};
    pls::cs::String ToString() override;
    bool Init() override;
    void Draw(pls::cs::Ref<pls::kairo::Graphics> g) override;
    bool Finish() override;
    bool Resume() override;
    bool Update() override;
    std::int32_t GetTouchValue(std::int32_t type, std::int32_t index) override;
    void SetTouchValue(std::int32_t type, std::int32_t value) override;
    bool OnTouchEvent(pls::cs::Ref<kairo::unity::surface::TouchEvent> e) override;
    bool CheckMainWindow() override;
    void Run() override;
    std::int32_t GetHashCode() override;
    static constexpr pls::cs::Int32 FORMID_BILLING = 900;
    static constexpr pls::cs::Int32 TYPE_MARKET_NOTES = 0;
    static constexpr pls::cs::Int32 TYPE_HTTP_CONNECT_ERR = 1;
    static constexpr pls::cs::Int32 TYPE_SHOP = 2;
    static constexpr pls::cs::Int32 TYPE_BILLING_ITEM = 3;
    static constexpr pls::cs::Int32 TYPE_RECEIVED_MARKET = 4;
    static constexpr pls::cs::Int32 TYPE_SHOP_CHOICE = 5;
    static constexpr pls::cs::Int32 SHOW_SALE_H = 6;
    static constexpr pls::cs::Int32 THTYPE_GETLIST = 0;
    static constexpr pls::cs::Int32 THTYPE_PURCHASE = 1;
    static constexpr pls::cs::Int32 THTYPE_GIFT = 2;
    static constexpr pls::cs::Int32 THSTATE_NONE = 0;
    static constexpr pls::cs::Int32 THSTATE_RUN = 1;
    static constexpr pls::cs::Int32 THSTATE_SUCCESS = 2;
    static constexpr pls::cs::Int32 THSTATE_FAILURE = 3;
    static constexpr pls::cs::Int32 RESBILLING_SEB_OWNER_L = 0;
    static constexpr pls::cs::Int32 RESBILLING_SEB_OWNER_R = 1;
    static constexpr pls::cs::Int32 RESBILLING_SEB_TICKET = 2;
    static constexpr pls::cs::Int32 RESBILLING_SEB_TALK_ASSIST00R = 3;
    static constexpr pls::cs::Int32 RESBILLING_SEB_TALK_ASSIST01R = 4;
    static constexpr pls::cs::Int32 RESBILLING_SEB_FOUNDATION = 5;
    static constexpr pls::cs::Int32 RESBILLING_SEB_JUMP_ASSIST00 = 6;
    static constexpr pls::cs::Int32 RESBILLING_SEB_JUMP_ASSIST01 = 7;
    static constexpr pls::cs::Int32 RESBILLING_SEB_GET = 8;
    static constexpr pls::cs::Int32 RESBILLING_SEB_EFFECT00 = 9;
    static constexpr pls::cs::Int32 RESBILLING_SEB_AD_OFF = 10;
    static void ensure_initialized();

    static bool& admobSkipPurchase_();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& configData_();

    static pls::cs::Array<pls::cs::Int32>& drawAdOffButtoan_result();

    static pls::cs::Int32& MAKET_ITEM_GET_END_FRAME();

    static pls::cs::Int32& MAKET_ITEM_GET_END_FRAME2();

    static pls::cs::Ref<kairo::unity::ui::ResourceManager>& resBilling_();

    static void create_init(pls::cs::Ref<BillingForm> self);

    static void create_init(pls::cs::Ref<BillingForm> self, pls::cs::Int32 type,
                            pls::cs::Ref<billing::ui::ApplyTask> provide);

    static void create_init(pls::cs::Ref<BillingForm> self, pls::cs::Int32 type);

    static pls::cs::Ref<BillingForm> create();

    static pls::cs::Ref<BillingForm> create(pls::cs::Int32 type,
                                            pls::cs::Ref<billing::ui::ApplyTask> provide);

    static pls::cs::Ref<BillingForm> create(pls::cs::Int32 type);

    static void LoadResource();

    void _draw(pls::cs::Ref<pls::kairo::Graphics> g);

    bool _update();

    void ScrollControl(pls::cs::Int32 num, pls::cs::Int32 showMax);

    void ScrollUpdate(pls::cs::Int32 num, pls::cs::Int32 showMax, pls::cs::Int32 value);

    void ScrollUpdate(pls::cs::Int32 num, pls::cs::Int32 showMax);

    pls::cs::Array<pls::cs::Int32> DrawCommand(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String str,
                                               pls::cs::Int32 x, pls::cs::Int32 y, bool active, bool cursor);

    pls::cs::Array<pls::cs::Int32> DrawCommand(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String str,
                                               pls::cs::Int32 x, pls::cs::Int32 y, pls::cs::Int32 anchor,
                                               bool active, bool cursor);

    pls::cs::Array<pls::cs::Int32> DrawCommand(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String str,
                                               pls::cs::Int32 x, pls::cs::Int32 y, pls::cs::Int32 anchor,
                                               bool active, pls::cs::Int32 margin, bool cursor);

    void SetSoftlabel();

    void UpdateSaleList();

    void ThreadStart(pls::cs::Int32 type);

    static void DrawLine(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x1, pls::cs::Int32 y1,
                         pls::cs::Int32 x2, pls::cs::Int32 y2, pls::cs::Int32 color);

    static void DrawDotLine(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x1, pls::cs::Int32 y1,
                            pls::cs::Int32 x2, pls::cs::Int32 y2, pls::cs::Int32 color);

    static void DrawRect(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                         pls::cs::Int32 width, pls::cs::Int32 height, pls::cs::Int32 color);

    static void DrawRect2(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                          pls::cs::Int32 width, pls::cs::Int32 height, pls::cs::Int32 color1,
                          pls::cs::Int32 color2);

    static void DrawRect3(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                          pls::cs::Int32 width, pls::cs::Int32 height, pls::cs::Int32 color1,
                          pls::cs::Int32 color2, pls::cs::Int32 color3);

    static void FillRect(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                         pls::cs::Int32 width, pls::cs::Int32 height, pls::cs::Int32 color);

    static void FillRect2(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                          pls::cs::Int32 width, pls::cs::Int32 height, pls::cs::Int32 color1,
                          pls::cs::Int32 color2);

    static void FillRect3(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                          pls::cs::Int32 width, pls::cs::Int32 height, pls::cs::Int32 color1,
                          pls::cs::Int32 color2, pls::cs::Int32 color3);

    static void FillRect4(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                          pls::cs::Int32 width, pls::cs::Int32 height, pls::cs::Int32 color1,
                          pls::cs::Int32 color2, pls::cs::Int32 color3, pls::cs::Int32 color4);

    static void FillRectShadow(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                               pls::cs::Int32 width, pls::cs::Int32 height, pls::cs::Int32 color1,
                               pls::cs::Int32 color2, pls::cs::Int32 color3);

    static void DrawObi(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                        pls::cs::Int32 width, pls::cs::Int32 height, pls::cs::Int32 color1,
                        pls::cs::Int32 color2);

    static void DrawGradation(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 dx, pls::cs::Int32 dy,
                              pls::cs::Int32 sx, pls::cs::Int32 sy, pls::cs::Int32 w, pls::cs::Int32 h,
                              pls::cs::Int32 sr, pls::cs::Int32 sg, pls::cs::Int32 sb, pls::cs::Int32 dr,
                              pls::cs::Int32 dg, pls::cs::Int32 db);

    static pls::cs::String Comma(pls::cs::Int64 value);

    static pls::cs::Array<pls::cs::Int32> DrawAdOffButtoan(pls::cs::Ref<pls::kairo::Graphics> g,
                                                           pls::cs::Int32 dx, pls::cs::Int32 dy,
                                                           pls::cs::Int32 dw, pls::cs::Int32 dh,
                                                           pls::cs::Int32 frame);
};
} // namespace system::form
}
