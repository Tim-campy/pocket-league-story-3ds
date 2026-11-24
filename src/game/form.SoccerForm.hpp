// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "form.MyFormBase.hpp"
#include "game_generated_forward.hpp"

namespace pls::game {
namespace form {

struct SoccerForm : MyFormBase {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(MyFormBase, {"ToString", "M:form.SoccerForm.ToString"},
                       {"Init", "M:form.SoccerForm.Init"}, {"Resume", "M:form.SoccerForm.Resume"},
                       {"Finish", "M:form.SoccerForm.Finish"}, {"Update", "M:form.SoccerForm.Update"},
                       {"Draw", "M:form.SoccerForm.Draw(kairo.unity.ui.Graphics)"},
                       {"GetTouchValue", "M:form.SoccerForm.GetTouchValue(System.Int32,System.Int32)"},
                       {"SetTouchValue", "M:form.SoccerForm.SetTouchValue(System.Int32,System.Int32)"},
                       {"M:form.MyFormBase.OnTouchEvent(kairo.unity.surface.TouchEvent)",
                        "M:form.SoccerForm.OnTouchEvent(kairo.unity.surface.TouchEvent)"},
                       {"GetHashCode", "M:form.SoccerForm.GetHashCode"});
    PLS_MANAGED_CLASS("form.SoccerForm", SoccerForm, MyFormBase, pls::kairo::TouchValueAccessor)
    pls::cs::Ref<game::UserData> udat_{};
    pls::cs::Int32 game_sec{};
    pls::cs::Int32 game_sec_old{};
    bool flg_priCustomerInStore{};
    pls::cs::Int32 stadiumId_{};
    pls::cs::Ref<game::Player> statusPlayer_{};
    pls::cs::Int32 statusPlayerChangeWait_{};
    pls::cs::Int32 statusAmeftoMode_{};
    pls::cs::Int32 statusAmeftoCnt_{};
    pls::cs::Int32 state_{};
    pls::cs::Int32 stateCnt_{};
    pls::cs::Ref<SubForm> dialog__SoccerForm{};
    pls::cs::Ref<SubForm> menu_{};
    pls::cs::Int32 frame_{};
    pls::cs::Int64 proc_time{};
    pls::cs::Int64 draw_time{};
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
    bool autoSave_{};
    pls::cs::Array<pls::cs::Int32> editCursor{};
    pls::cs::Array<pls::cs::Int32> editStock{};
    pls::cs::Int32 editCursorMode{};
    pls::cs::Int32 editTeam{};
    pls::cs::Ref<generated::java::util::Vector> script_{};
    pls::cs::Ref<generated::java::util::Vector> bonus_p_list{};
    pls::cs::Int32 bonus_p_cnt{};
    pls::cs::Int32 bonus_p_index{};
    pls::cs::Int32 select_{};
    pls::cs::Int32 select2_{};
    pls::cs::Int32 scrollValue_{};
    pls::cs::Int32 bonus_f_cnt{};
    pls::cs::Int32 bonus_f_index{};
    pls::cs::Int32 temp_fan{};
    pls::cs::Int32 temp_assist{};
    pls::cs::Int32 temp_nameValue{};
    pls::cs::Int32 temp_addFan{};
    pls::cs::Int32 temp_addAssist{};
    pls::cs::Int32 temp_addNameValue{};
    pls::cs::Array<pls::cs::Array<pls::cs::Int32>> bonus_in_param{};
    pls::cs::Int32 bonus_in_cnt{};
    pls::cs::Int32 bonus_in_index{};
    pls::cs::Int32 bonus_softKey{};
    pls::cs::Int32 bonus_sponsorNum{};
    pls::cs::Int32 PBONUS_NP_LV_ADDEXP{};
    pls::cs::Int32 PBONUS_NP_LV_GETPOPULAR{};
    pls::cs::Int32 PBONUS_NP_LV_GETTRAINING{};
    pls::cs::Int32 stadiumMoveCnt_{};
    bool drawTopBar{};
    bool debugProStop_{};
    pls::cs::Int32 offscreenDayTime_{};
    pls::cs::String offscreenDayTimeString_{};
    pls::cs::Int64 offscreenMoney_{};
    pls::cs::String offscreenMoneyString_{};
    pls::cs::Array<pls::cs::Int32> offUpdateSRect{};
    bool flg_allDraw{};
    pls::cs::Int32 COAT_X{};
    pls::cs::Int32 COAT_Y{};
    pls::cs::Array<pls::cs::Int32> customerNum{};
    pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> touchCameraSpeed_{};
    pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> touchCameraDecimal_{};
    pls::cs::Ref<generated::kairo::unity::util::FastVector> touchCameraPoint_{};
    bool touchDragCamera_{};
    bool touchBuildDrag_{};
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
    static constexpr pls::cs::Int32 STATUS_AMEFTO_NORMAL = 0;
    static constexpr pls::cs::Int32 STATUS_AMEFTO_DRIBBLE = 1;
    static constexpr pls::cs::Int32 STATUS_AMEFTO_LONGPASS = 2;
    static constexpr pls::cs::Int32 STATE_MAIN = 0;
    static constexpr pls::cs::Int32 STATE_PRI_MAIN = 1;
    static constexpr pls::cs::Int32 STATE_MATCHEND = 2;
    static constexpr pls::cs::Int32 STATE_MATCHEND2 = 3;
    static constexpr pls::cs::Int32 STATE_MATCHFINISH = 4;
    static constexpr pls::cs::Int32 STATE_MATCHFINISH2 = 5;
    static constexpr pls::cs::Int32 STATE_EDIT = 6;
    static constexpr pls::cs::Int32 STATE_STADIUM = 7;
    static constexpr pls::cs::Int32 STATE_STADIUM_FADEOUT = 8;
    static constexpr pls::cs::Int32 STATE_BONUS_FAN = 9;
    static constexpr pls::cs::Int32 STATE_BONUS_INCOME = 10;
    static constexpr pls::cs::Int32 STATE_BONUS_INCOME2 = 11;
    static constexpr pls::cs::Int32 STATE_BONUS_MATCH_ELSE = 12;
    static constexpr pls::cs::Int32 STATE_BONUS_LEAGUE = 13;
    static constexpr pls::cs::Int32 STATE_BONUS_NP_LV = 14;
    static constexpr pls::cs::Int32 STATE_BONUS_NP_POPULAR = 15;
    static constexpr pls::cs::Int32 STATE_BONUS_NP_TRAINING = 16;
    static constexpr pls::cs::Int32 PINCH_SACLE_PADDING = 40;
    static constexpr pls::cs::Int32 ECM_MAINMENU = 0;
    static constexpr pls::cs::Int32 ECM_MEMBER = 1;
    static constexpr pls::cs::Int32 ECM_MEMBER2 = 2;
    static constexpr pls::cs::Int32 ECM_FORMATION_T1 = 3;
    static constexpr pls::cs::Int32 ECM_FORMATION_T2 = 4;
    static constexpr pls::cs::Int32 ECM_COAT = 5;
    static constexpr pls::cs::Int32 ECM_COAT2 = 6;
    static constexpr pls::cs::Int32 ECM_END = 7;
    static constexpr pls::cs::Int32 E_F_W = 9;
    static constexpr pls::cs::Int32 E_F_H = 9;
    static constexpr pls::cs::Int32 E_F_OFFY = 10;
    static constexpr pls::cs::Int32 E_GRASS_W = 10;
    static constexpr pls::cs::Int32 E_GRASS_H = 10;
    static constexpr pls::cs::Int32 SCR_EVENT = 0;
    static constexpr pls::cs::Int32 SCR_WAIT = 1;
    static constexpr pls::cs::Int32 SCR_SCENE = 2;
    static constexpr pls::cs::Int32 SCR_SPECIAL = 3;
    static constexpr pls::cs::Int32 SCR_CARD = 4;
    static constexpr pls::cs::Int32 SCR_GM_CHANGESTATE = 5;
    static constexpr pls::cs::Int32 STADIUM_CAMERA_FADETIME = 25;
    static constexpr pls::cs::Int32 PBONUS_NP_LV_SANIME = 12;
    static constexpr pls::cs::Int32 TBARTYPE_BLACK = 0;
    static constexpr pls::cs::Int32 TBARTYPE_T1 = 1;
    static constexpr pls::cs::Int32 TBARTYPE_T1_NAME = 2;
    static constexpr pls::cs::Int32 TBARTYPE_CENTER = 3;
    static constexpr pls::cs::Int32 TBARTYPE_T2_NAME = 4;
    static constexpr pls::cs::Int32 TBARTYPE_T2 = 5;
    static constexpr pls::cs::Int32 TBARTYPE_SIDE = 6;
    static constexpr pls::cs::Int32 CUSTOMER_MIN = 0;
    static constexpr pls::cs::Int32 CUSTOMER_MAX = 100000;
    static constexpr pls::cs::Single w_fan = 0.5f;
    static constexpr pls::cs::Single w_assist_home = 0.15f;
    static constexpr pls::cs::Single w_assist_away = 0.05f;
    static constexpr pls::cs::Single w_nameValue = 0.1f;
    static constexpr pls::cs::Single w_enemyWP = 0.05f;
    static constexpr pls::cs::Single w_sumPopular = 0.1f;
    static void ensure_initialized();

    static pls::cs::Array<pls::cs::Int32>& BONUS_F_CYCLE();

    static pls::cs::Array<pls::cs::Int32>& BONUS_F_CYCLE_MAIN();

    static pls::cs::Array<pls::cs::Int32>& BONUS_IN_CYCLE();

    static pls::cs::Array<pls::cs::Int32>& BONUS_P_CYCLE();

    static pls::cs::Int32& BOTTOM_INFO_BAR();

    static pls::cs::Int32& DEBUG_1KEYSTOP_MODE();

    static pls::cs::Int32& DEBUG_1KEYSTOP_MODE2();

    static pls::cs::Int32& DEBUG_3KEY_KICKTEST();

    static pls::cs::Int32& DEBUG_8KEY_FAST();

    static pls::cs::Int32& DEBUG_BALLPLAYER();

    static pls::cs::Int32& DEBUG_BALLTEST_MODE();

    static pls::cs::Int32& DEBUG_GAMEMODE_5KEY();

    static pls::cs::Int32& DEBUG_GAMETIMESTOP();

    static pls::cs::Int32& DEBUG_GK_MODE();

    static pls::cs::Int32& DEBUG_PASSSTOP_MODE();

    static pls::cs::Int32& DEBUG_PLAYER_NOTACT();

    static pls::cs::Int32& DEBUG_SCREENTRAVEL();

    static pls::cs::Int32& DEBUG_START_P1_TEAMID();

    static pls::cs::Int32& DEBUG_START_P2_TEAMID();

    static pls::cs::Int32& DEBUG_START_STATE();

    static pls::cs::Int32& DEBUG_WALLREFRECT();

    static pls::cs::Int32& DISP_COPAREA();

    static pls::cs::Int32& FLG_PROCESSTIME();

    static pls::cs::Ref<pls::kairo::Offscreen>& offGameScreen_();

    static pls::cs::Array<pls::cs::Int32>& PBONUS_NP_LV_POPULAR();

    static pls::cs::Array<pls::cs::Int32>& PBONUS_NP_LV_T_GET();

    static pls::cs::Array<pls::cs::Int32>& PBONUS_NP_LV_TIME();

    static pls::cs::Array<pls::cs::Int32>& PBONUS_NP_LV_TRAINING1();

    static bool& resetOffscreen_();

    static pls::cs::Int32& SHOW_DEBUGDRAW();

    static pls::cs::Int32& SHOW_DEBUGDRAW2();

    static pls::cs::Int32& SHOW_DRAWNUM();

    static pls::cs::Int32& SHOW_FPS();

    static pls::cs::Int32& SHOW_MEMORY();

    static pls::cs::Int32& SHOW_PDTIME();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& softLabels_();

    static pls::cs::Array<pls::cs::Int32>& STADIUM_BTMINFO_TIME();

    static pls::cs::Array<pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>>&
    STADIUM_CAERA_BASE_POS();

    static pls::cs::Array<pls::cs::Int32>& STADIUM_CAMERA_TIME();

    static pls::cs::Array<pls::cs::Int32>& STATUS_AMEFTO_ANIME();

    static pls::cs::Array<pls::cs::Int32>& STATUS_AMEFTO_COLOR();

    static pls::cs::Array<pls::cs::String>& STATUS_AMEFTO_NAME();

    static pls::cs::Array<pls::cs::Int32>& TBAR_SX();

    static pls::cs::Array<pls::cs::Int32>& TBAR_W();

    static pls::cs::Array<pls::cs::Int32>& TEST_STATE();

    static pls::cs::Int32& VIEW_H();

    static pls::cs::Int32& VIEW_W();

    static pls::cs::Int32& VIEW_X();

    static pls::cs::Int32& VIEW_Y();

    static void create_init(pls::cs::Ref<SoccerForm> self);

    static pls::cs::Ref<SoccerForm> create();

    void GameScreenLayout(pls::cs::Int32& width, pls::cs::Int32& height, pls::kairo::Image::Format& format,
                          pls::kairo::Image::Filter& filterMode);

    bool StaticRender(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Ref<pls::kairo::Offscreen> offscreen);

    bool RenderGameScreen(pls::cs::Ref<pls::kairo::Graphics> g,
                          pls::cs::Ref<pls::kairo::Offscreen> offscreen);

    void ResetOffscreen();

    void InitOffscreen();

    pls::cs::Int32 GetTopBarOffN();

    pls::cs::Int32 GetDrawTBAROff(pls::cs::Int32 type);

    void Draw_topBarParts(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 type, pls::cs::Int32 dx,
                          pls::cs::Int32 w);

    void Draw_topBarParts(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 type, pls::cs::Int32 dx);

    pls::cs::Array<pls::cs::Int32> GetFirstScript();

    void ClearScript();

    void AddCommandWait(pls::cs::Int32 wait);

    void AddCommandEvent(pls::cs::Int32 evtId);

    void AddCommandScene(pls::cs::Int32 on);

    void AddCommandSpecial(pls::cs::Array<pls::cs::Int32> arg);

    void AddCommandCard(pls::cs::Int32 card, pls::cs::Int32 team, pls::cs::Int32 p_id);

    void AddCommandGMChangeState(pls::cs::Int32 gm_state);

    void Script();

    void ChangeState(pls::cs::Int32 state);

    bool _update(pls::cs::Int32 frameCount);

    bool Update_main();

    void UpdateOffscreenTopBar(pls::cs::Ref<pls::kairo::Graphics> g, bool all_update);

    void Draw_watch(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 cx, pls::cs::Int32 cy,
                    pls::cs::Double len, pls::cs::Int32 angle);

    void UpdateOffscreen(pls::cs::Ref<pls::kairo::Graphics> g);

    void SetAllDraw();

    void _draw(pls::cs::Ref<pls::kairo::Graphics> g);

    void Draw_main(pls::cs::Ref<pls::kairo::Graphics> g);

    void SetStatusPlayer();

    void Draw_stadiumCamera(pls::cs::Ref<pls::kairo::Graphics> g);

    void Draw_bonusFan(pls::cs::Ref<pls::kairo::Graphics> g);

    void Draw_bonusIncome(pls::cs::Ref<pls::kairo::Graphics> g);

    void Draw_topBar(pls::cs::Ref<pls::kairo::Graphics> g);

    void Draw_matchElse(pls::cs::Ref<pls::kairo::Graphics> g);

    void Draw_newPlayerLv(pls::cs::Ref<pls::kairo::Graphics> g);

    void Draw_newPlayerPopular(pls::cs::Ref<pls::kairo::Graphics> g);

    void Draw_newPlayerReserach(pls::cs::Ref<pls::kairo::Graphics> g);

    void SetCustomerNum();

    pls::cs::Int32 GetEvaCumstomer(bool isMatch);

    pls::cs::Int32 GetMatchPrice();

    pls::cs::Int32 GetGoodsPrice();

    pls::cs::Int32 GetSponsorPrice();

    pls::cs::Int32 GetSponsorNum();

    pls::cs::Int32 GetPlayersSalary();

    pls::cs::Array<pls::cs::Int32> GetScaleRange();

    pls::cs::Int32 GetScaleMin();

    pls::cs::Int32 GetScaleMax();

    void SetScale(pls::cs::Int32 scale);

    pls::cs::Int32 GetGameWidth();

    pls::cs::Int32 GetGameHeight();

    void OnTouchCamera(pls::cs::Int32 type, pls::cs::Int32 v,
                       pls::cs::Ref<kairo::unity::surface::TouchEvent> e);
};
} // namespace form
}
