// GENERATED (readable mode) by translator/Translator.cs from the reconstructed C#. Do not edit.
#pragma once
#include "form.MyFormBase.hpp"
#include "game_generated_forward.hpp"

namespace pls::game {
namespace form {

struct TitleForm : MyFormBase {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(MyFormBase, {"ToString", "M:form.TitleForm.ToString"},
                       {"Init", "M:form.TitleForm.Init"}, {"Update", "M:form.TitleForm.Update"},
                       {"Draw", "M:form.TitleForm.Draw(kairo.unity.ui.Graphics)"},
                       {"Resume", "M:form.TitleForm.Resume"}, {"Finish", "M:form.TitleForm.Finish"},
                       {"SetTouchValue", "M:form.TitleForm.SetTouchValue(System.Int32,System.Int32)"},
                       {"M:form.MyFormBase.OnTouchEvent(kairo.unity.surface.TouchEvent)",
                        "M:form.TitleForm.OnTouchEvent(kairo.unity.surface.TouchEvent)"},
                       {"GetHashCode", "M:form.TitleForm.GetHashCode"});
    PLS_MANAGED_CLASS("form.TitleForm", TitleForm, MyFormBase, pls::kairo::TouchValueAccessor)
    pls::cs::Ref<game::UserData> udat_{};
    pls::cs::Ref<kairo::unity::ui::ResourceManager> resTitle_{};
    pls::cs::Int32 state_{};
    pls::cs::Int32 selMenu_{};
    pls::cs::Int32 titleY_{};
    pls::cs::Int32 titleFrame_{};
    pls::cs::Int32 POUND_PRESS_CNT{};
    bool STAR{};
    pls::cs::Int32 selectSaveType_{};
    pls::cs::Int32 selectSave_{};
    pls::cs::Int32 currentSave_{};
    pls::cs::String newGameName_{};
    pls::cs::Int32 newGameFrame1_{};
    pls::cs::Int32 newGameFrame2_{};
    pls::cs::Int32 frame_{};
    pls::cs::Int32 x_{};
    pls::cs::Int32 y_{};
    pls::cs::Array<pls::cs::Int64> time_{};
    pls::cs::Array<pls::cs::Array<pls::cs::Int32>> ta_data{};
    pls::cs::Int32 APPEAR_TIME{};
    pls::cs::Int32 apeear_cnt{};
    pls::cs::Array<pls::cs::Array<pls::cs::Int32>> zsort_mhobj{};
    pls::cs::Int32 kairoAdClickNum_{};
    pls::cs::String ToString() override;
    bool Init() override;
    bool Update() override;
    void Draw(pls::cs::Ref<pls::kairo::Graphics> g) override;
    bool Resume() override;
    bool Finish() override;
    void SetTouchValue(std::int32_t type, std::int32_t value) override;
    bool OnTouchEvent(pls::cs::Ref<kairo::unity::surface::TouchEvent> e) override;
    std::int32_t GetHashCode() override;
    static constexpr pls::cs::Int32 RESTITLE_IMG_TITLE00 = 0;
    static constexpr pls::cs::Int32 RESTITLE_IMG_WINDOW = 1;
    static constexpr pls::cs::Int32 RESTITLE_IMG_LOGO = 2;
    static constexpr pls::cs::Int32 RESTITLE_IMG_KAIROAD = 3;
    static constexpr pls::cs::Int32 RESTITLE_IMG_KAIROAD_CANCEL = 4;
    static constexpr pls::cs::Int32 STATE_MENU = 0;
    static constexpr pls::cs::Int32 STATE_SAVESLOT = 1;
    static constexpr pls::cs::Int32 MENU_START = 0;
    static constexpr pls::cs::Int32 MENU_RANKING = 1;
    static constexpr pls::cs::Int32 MENU_RELEASE = 1;
    static constexpr pls::cs::Int32 MENU_END = 2;
    static constexpr pls::cs::Int32 HOBJ_MAX = 20;
    static constexpr pls::cs::Int32 HOBJP_EXIST = 0;
    static constexpr pls::cs::Int32 HOBJP_PDATAID = 1;
    static constexpr pls::cs::Int32 HOBJP_PX = 2;
    static constexpr pls::cs::Int32 HOBJP_PY = 3;
    static constexpr pls::cs::Int32 HOBJP_DIRECT = 4;
    static constexpr pls::cs::Int32 HOBJP_FRAME = 5;
    static constexpr pls::cs::Int32 HOBJP_END = 6;
    static constexpr pls::cs::Int32 TITLE_INIT_PY_MIN = 228;
    static constexpr pls::cs::Int32 TITLE_INIT_PY_MAX = 238;
    static constexpr pls::cs::Int32 TITLE_MOVE_V = 1;
    static void ensure_initialized();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& IMG_SL();

    static pls::cs::String& kairoAdUrl_jp();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& softLabels_();

    static pls::cs::Array<pls::cs::Int32>& title_anime();

    static pls::cs::Array<pls::cs::Int32>& TITLE_GUEST();

    static void create_init(pls::cs::Ref<TitleForm> self);

    static pls::cs::Ref<TitleForm> create();

    void ContinueGame();

    void NewGame();

    void SmartBeginPaint(pls::cs::Ref<pls::kairo::Graphics> g);

    void _draw(pls::cs::Ref<pls::kairo::Graphics> g);

    void ChangeState(pls::cs::Int32 state);

    void Update_titleAnime();

    void SetAppearCnt();

    void ResetHobjExist(pls::cs::Int32 index);

    void Draw_titleAnime(pls::cs::Ref<pls::kairo::Graphics> g);

    void LoadKiaroAdClickNum();

    void UpdateKairoAdClickNum();

    void UpdateKairoAdClickNum(pls::cs::Int32 addClickNum);
};
} // namespace form
} // namespace pls::game
