// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "form.MyFormBase.hpp"
#include "game_generated_forward.hpp"

namespace pls::game {
namespace form {

struct GameForm : MyFormBase {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(MyFormBase, {"ToString", "M:form.GameForm.ToString"}, {"Init", "M:form.GameForm.Init"},
                       {"Resume", "M:form.GameForm.Resume"}, {"Finish", "M:form.GameForm.Finish"},
                       {"Update", "M:form.GameForm.Update"},
                       {"Draw", "M:form.GameForm.Draw(kairo.unity.ui.Graphics)"},
                       {"GetTouchValue", "M:form.GameForm.GetTouchValue(System.Int32,System.Int32)"},
                       {"SetTouchValue", "M:form.GameForm.SetTouchValue(System.Int32,System.Int32)"},
                       {"M:form.MyFormBase.OnTouchEvent(kairo.unity.surface.TouchEvent)",
                        "M:form.GameForm.OnTouchEvent(kairo.unity.surface.TouchEvent)"},
                       {"GetHashCode", "M:form.GameForm.GetHashCode"});
    PLS_MANAGED_CLASS("form.GameForm", GameForm, MyFormBase, pls::kairo::TouchValueAccessor)
    pls::cs::Int32 errFunc_{};
    pls::cs::Int32 errLine_{};
    pls::cs::Ref<game::UserData> udat_{};
    pls::cs::Int32 state_{};
    pls::cs::Int32 stateCnt_{};
    pls::cs::Int32 busgather_ph{};
    pls::cs::Ref<SubForm> dialog__GameForm{};
    pls::cs::Ref<SubForm> menu_{};
    pls::cs::Int32 frame_{};
    pls::cs::Ref<data::TenantData> selectTenantData_{};
    pls::cs::Int64 proc_time{};
    pls::cs::Int64 draw_time{};
    pls::cs::Int64 all_time{};
    pls::cs::Ref<generated::java::util::Vector> script_{};
    pls::cs::Int32 offYear_{};
    pls::cs::Int32 offMonth_{};
    pls::cs::Int32 offHour_{};
    pls::cs::Int64 offMoney_{};
    pls::cs::Int32 offSeason_{};
    pls::cs::Int32 scale_{};
    pls::cs::Int32 pinchScaleValue_{};
    bool buildTrackX_{};
    bool buildTrachY_{};
    bool isBuildTrack_{};
    pls::cs::Int32 buildDownX_{};
    pls::cs::Int32 buildDownY_{};
    bool buildLock_{};
    pls::cs::Int32 touchBuildDragFrame_{};
    bool touchSkip_{};
    pls::cs::Int32 cursorPressCnt_{};
    pls::cs::Int32 cursorHideWait_{};
    bool autoSave_{};
    pls::cs::Int32 LEAGUE_SCHEDULE_UPDATECNT{};
    bool debugProStop_{};
    pls::cs::Int32 offscreenDayTime_{};
    pls::cs::String offscreenDayTimeString_{};
    pls::cs::Int64 offscreenMoney_{};
    pls::cs::String offscreenMoneyString_{};
    pls::cs::Array<pls::cs::Int32> offUpdateSRect{};
    bool flg_allDraw{};
    pls::cs::String build_btmMessage{};
    pls::cs::Int32 build_btmCnt{};
    pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> touchCameraSpeed_{};
    pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> touchCameraDecimal_{};
    pls::cs::Ref<generated::kairo::unity::util::FastVector> touchCameraPoint_{};
    bool touchDragCamera_{};
    bool touchBuildDrag_{};
    bool touchPinching_{};
    pls::cs::Int32 touchCursorX_{};
    pls::cs::Int32 touchCursorY_{};
    pls::cs::Array<pls::cs::Int32> getScaleRange_tmp{};
    pls::cs::String ToString() override;
    bool Init() override;
    bool Resume() override;
    bool Finish() override;
    bool Update() override;
    void Draw(pls::cs::Ref<pls::kairo::Graphics> g) override;
    std::int32_t GetTouchValue(std::int32_t type, std::int32_t index) override;
    void SetTouchValue(std::int32_t type, std::int32_t value) override;
    bool OnTouchEvent(pls::cs::Ref<kairo::unity::surface::TouchEvent> e) override;
    std::int32_t GetHashCode() override;
    static constexpr pls::cs::Int32 STATE_MAIN = 0;
    static constexpr pls::cs::Int32 STATE_BUILD = 1;
    static constexpr pls::cs::Int32 STATE_TOMATCH = 2;
    static constexpr pls::cs::Int32 STATE_BACK = 3;
    static constexpr pls::cs::Int32 STATE_SP_BACK = 4;
    static constexpr pls::cs::Int32 BUSGATHER_PH_MOVEBUS = 0;
    static constexpr pls::cs::Int32 BUSGATHER_PH_MOVEBUS_WINDOW = 1;
    static constexpr pls::cs::Int32 BUSGATHER_PH_BATTLE_PIC = 2;
    static constexpr pls::cs::Int32 BUSGATHER_PH_TALK_PNUM = 3;
    static constexpr pls::cs::Int32 BUSGATHER_PH_EDIT = 4;
    static constexpr pls::cs::Int32 BUSGATHER_ANIME_S1 = 10;
    static constexpr pls::cs::Int32 BUSGATHER_ANIME_S2 = 20;
    static constexpr pls::cs::Int32 BUSGATHER_ANIME_S3 = 30;
    static constexpr pls::cs::Int32 BUSGATHER_ANIME_S4 = 40;
    static constexpr pls::cs::Int32 BUSGATHER_ANIME_S5 = 50;
    static constexpr pls::cs::Int32 BUSGATHER_ANIME_SADD = 8;
    static constexpr pls::cs::Int32 SCR_EVENT = 0;
    static constexpr pls::cs::Int32 SCR_WAIT = 1;
    static constexpr pls::cs::Int32 SCR_SCENE = 2;
    static constexpr pls::cs::Int32 SCR_SPECIAL = 3;
    static constexpr pls::cs::Int32 TRAINING_PARAMUP_DIV = 3;
    static constexpr pls::cs::Int32 PINCH_SACLE_PADDING = 40;
    static constexpr pls::cs::Int32 CURSOR_HIDE_WAIT = 40;
    static constexpr pls::cs::Int32 LEAGUE_SCHEDULE_UPDATETIME = 12;
    static constexpr pls::cs::Int32 DLGID_TESTLIMIT = 105;
    static constexpr pls::cs::Int32 TBARTYPE_START = 0;
    static constexpr pls::cs::Int32 TBARTYPE_ICON = 1;
    static constexpr pls::cs::Int32 TBARTYPE_TIME = 2;
    static constexpr pls::cs::Int32 TBARTYPE_METER = 3;
    static constexpr pls::cs::Int32 TBARTYPE_MONEY = 4;
    static constexpr pls::cs::Int32 TBARTYPE_END = 5;
    static void ensure_initialized();

    static pls::cs::Int32& BOTTOM_INFO_BAR();

    static pls::cs::Int32& busgather_ph_cnt();

    static pls::cs::Int32& DISP_COPAREA();

    static pls::cs::Int32& FLG_PROCESSTIME();

    static pls::cs::Array<pls::cs::Int32>& MENU_BACK();

    static pls::cs::Ref<pls::kairo::Offscreen>& offGameScreen_();

    static bool& resetOffscreen_();

    static pls::cs::Int32& SHOW_CHUUSER();

    static pls::cs::Int32& SHOW_DEBUGDRAW();

    static pls::cs::Int32& SHOW_DEBUGDRAW2();

    static pls::cs::Int32& SHOW_DRAWNUM();

    static pls::cs::Int32& SHOW_FPS();

    static pls::cs::Int32& SHOW_MEMORY();

    static pls::cs::Int32& SHOW_PDTIME();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& softLabels_();

    static pls::cs::Array<pls::cs::Int32>& TBAR_SX();

    static pls::cs::Array<pls::cs::Int32>& TBAR_W();

    static pls::cs::Array<pls::cs::Int32>& touch_cpos();

    static pls::cs::Array<pls::cs::Int32>& touch_startDragPos();

    static pls::cs::Array<pls::cs::Int32>& touch_startDragSPosCenter();

    static pls::cs::Int32& TRAINING_GETEXP_TIME();

    static pls::cs::Array<pls::cs::Int32>& TRAINING_PARAMUP_TIME();

    static pls::cs::Int32& VIEW_H();

    static pls::cs::Int32& VIEW_W();

    static pls::cs::Int32& VIEW_X();

    static pls::cs::Int32& VIEW_Y();

    static void create_init(pls::cs::Ref<GameForm> self);

    static pls::cs::Ref<GameForm> create();

    void GameScreenLayout(pls::cs::Int32& width, pls::cs::Int32& height, pls::kairo::Image::Format& format,
                          pls::kairo::Image::Filter& filterMode);

    bool StaticRender(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Ref<pls::kairo::Offscreen> offscreen);

    bool RenderGameScreen(pls::cs::Ref<pls::kairo::Graphics> g,
                          pls::cs::Ref<pls::kairo::Offscreen> offscreen);

    void ResetOffscreen();

    void InitOffscreen();

    void Draw_topBarParts(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 type, pls::cs::Int32 dx,
                          pls::cs::Int32 w);

    pls::cs::Int32 GetTopBarOffT();

    pls::cs::Int32 GetTopBarOffM();

    pls::cs::Int32 GetTopBarOffMBack();

    pls::cs::Array<pls::cs::Int32> GetFirstScript();

    void ClearScript();

    void AddCommandWait(pls::cs::Int32 wait);

    void AddCommandEvent(pls::cs::Int32 evtId);

    void AddCommandScene(pls::cs::Int32 on);

    void AddCommandSpecial(pls::cs::Array<pls::cs::Int32> arg);

    void Script();

    void ChangeState(pls::cs::Int32 state);

    bool _update(pls::cs::Int32 frameCount);

    void UpdateOffscreenTopBar(pls::cs::Ref<pls::kairo::Graphics> g, bool all_update);

    void Draw_watch(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 cx, pls::cs::Int32 cy,
                    pls::cs::Double len, pls::cs::Int32 angle);

    void UpdateOffscreen(pls::cs::Ref<pls::kairo::Graphics> g);

    void SetAllDraw();

    void _draw(pls::cs::Ref<pls::kairo::Graphics> g);

    void ProgressTime(pls::cs::Int32 add, pls::cs::Int32 frameCount);

    void SetBattleData();

    void SetBuildBtmMessage(pls::cs::String str, pls::cs::Int32 cnt);

    pls::cs::Int32 GetSeason(pls::cs::Int32 month);

    void Draw_stadiumName(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 dy, pls::cs::Int32 centerX);

    void OnTouchCamera(pls::cs::Int32 type, pls::cs::Int32 v,
                       pls::cs::Ref<kairo::unity::surface::TouchEvent> e);

    void SetCameraPosition(pls::cs::Int32 x, pls::cs::Int32 y);

    void SetCursorPosition(pls::cs::Int32 x, pls::cs::Int32 y);

    pls::cs::Array<pls::cs::Int32> GetScaleRange();

    pls::cs::Int32 GetScaleMin();

    pls::cs::Int32 GetScaleMax();

    void SetScale(pls::cs::Int32 scale);

    pls::cs::Int32 GetGameWidth();

    pls::cs::Int32 GetGameHeight();

    pls::cs::Ref<SubForm> OepnWindowFromMainDisp();

    void LogOut();
};
} // namespace form
}
