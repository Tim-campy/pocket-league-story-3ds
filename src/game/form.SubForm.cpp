// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "data.BaseData.hpp"
#include "data.FanActData.hpp"
#include "data.FanBonusData.hpp"
#include "data.FormationData.hpp"
#include "data.LeagueData.hpp"
#include "data.MapchipMain.hpp"
#include "data.PlayerData.hpp"
#include "data.QuestMatchData.hpp"
#include "data.SponsorData.hpp"
#include "data.SupervisorData.hpp"
#include "data.TeamData.hpp"
#include "data.TenantData.hpp"
#include "data.TradeData.hpp"
#include "data.TrainingData.hpp"
#include "form.FormManager.hpp"
#include "form.GameForm.hpp"
#include "form.MyFormBase.hpp"
#include "form.RankForm.hpp"
#include "form.SoccerForm.hpp"
#include "form.SubForm.hpp"
#include "form.TitleForm.hpp"
#include "game.Camera.hpp"
#include "game.DelayEvent.hpp"
#include "game.GameManager.hpp"
#include "game.GameUtil.hpp"
#include "game.MapMain.hpp"
#include "game.Player.hpp"
#include "game.Tenant.hpp"
#include "game.UserData.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.lang.JMath.hpp"
#include "generated/java.lang.JString.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.m3d4.util3d.Vector3D.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "generated/kairo.unity.util.Property.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "kairo.unity.panel.Button.hpp"
#include "kairo.unity.panel.Component.hpp"
#include "kairo.unity.panel.FepPanel.hpp"
#include "kairo.unity.panel.Label.hpp"
#include "kairo.unity.panel.TextBox.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "kairo.unity.surface.TouchEvent.hpp"
#include "kairo.unity.surface.TouchOption.hpp"
#include "kairo.unity.ui.Canvas.hpp"
#include "kairo.unity.ui.Graphics.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "kairo.unity.ui.Seb.hpp"
#include "kairo.unity.ui.TextLayout.hpp"
#include "kairo.unity.util.Language.hpp"
#include "kfw.panel.MainPanel.hpp"
#include "main.AppData.hpp"
#include "panel.MainPanel.hpp"
#include "surface.GameView.hpp"
#include "generated/java.util.JTool_templates.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_util3d = pls::generated::kairo::unity::m3d4::util3d;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using BoolArray = pls::cs::Array<bool>;
using StringArray = pls::cs::Array<pls::cs::String>;
using StringArray2 = pls::cs::Array<pls::cs::Array<pls::cs::String>>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace form {

void SubForm::trace_edges(const pls::cs::EdgeVisitor&visitor)const {MyFormBase::trace_edges(visitor);pls::cs::trace_value(err_method,visitor);pls::cs::trace_value(udat_,visitor);pls::cs::trace_value(name_,visitor);pls::cs::trace_value(textLay_,visitor);pls::cs::trace_value(menus_,visitor);pls::cs::trace_value(selectButtons_,visitor);pls::cs::trace_value(text_,visitor);pls::cs::trace_value(textAry_,visitor);pls::cs::trace_value(dialog__SubForm,visitor);pls::cs::trace_value(subForm_,visitor);pls::cs::trace_value(delayEvent_,visitor);pls::cs::trace_value(talkArg_,visitor);pls::cs::trace_value(eventIds_,visitor);pls::cs::trace_value(eventTexts_,visitor);pls::cs::trace_value(EVENT_HAPPY_ANIME_OY,visitor);pls::cs::trace_value(EVENT_SAD_ANIME_OY,visitor);pls::cs::trace_value(ANIME_MATCH_RESULT,visitor);pls::cs::trace_value(temp_paramArray,visitor);pls::cs::trace_value(ary1,visitor);pls::cs::trace_value(ary2,visitor);pls::cs::trace_value(fanActData_,visitor);pls::cs::trace_value(sponsorData_,visitor);pls::cs::trace_value(playerData_,visitor);pls::cs::trace_value(tradeData_,visitor);pls::cs::trace_value(qmData_,visitor);pls::cs::trace_value(leagueData_,visitor);pls::cs::trace_value(MENUGRAPH_OFF,visitor);pls::cs::trace_value(zsort_mhobj,visitor);pls::cs::trace_value(w_vic_pos,visitor);pls::cs::trace_value(w_vic_data,visitor);pls::cs::trace_value(fw_goRate,visitor);pls::cs::trace_value(fw_cnt,visitor);pls::cs::trace_value(fw_pos,visitor);pls::cs::trace_value(fw_zsort,visitor);pls::cs::trace_value(update_tmp1,visitor);pls::cs::trace_value(drawWindow_tmp_SubForm,visitor);}

static pls::cs::Int32 SubForm_anime_ballY_storage{};

static pls::cs::Int32 SubForm_anime_cnt_storage{};

static pls::cs::Int32 SubForm_anime_mode_storage{};

static IntArray SubForm_CLEARPOINT_ANIMETIME_storage{};

static pls::cs::Int32 SubForm_CONFIG_BGM_storage{};

static pls::cs::Int32 SubForm_CONFIG_EN_BGM_storage{};

static pls::cs::Int32 SubForm_CONFIG_EN_CURRENCY_storage{};

static StringArray SubForm_CONFIG_EN_NAMES_storage{};

static pls::cs::Int32 SubForm_CONFIG_EN_ORIENTATION_storage{};

static pls::cs::Int32 SubForm_CONFIG_EN_QUALITY_storage{};

static pls::cs::Int32 SubForm_CONFIG_EN_SE_storage{};

static pls::cs::Int32 SubForm_CONFIG_EN_SPEED_storage{};

static IntArray SubForm_CONFIG_EN_VALUE_MAX_storage{};

static StringArray2 SubForm_CONFIG_EN_VALUE_NAMES_storage{};

static BoolArray SubForm_CONFIG_EN_VALUE_REVERSE_storage{};

static IntArray SubForm_CONFIG_EN_VALUES_storage{};

static StringArray SubForm_CONFIG_NAMES_storage{};

static pls::cs::Int32 SubForm_CONFIG_ORIENTATION_storage{};

static pls::cs::Int32 SubForm_CONFIG_QUALITY_storage{};

static pls::cs::Int32 SubForm_CONFIG_SE_storage{};

static pls::cs::Int32 SubForm_CONFIG_SPEED_storage{};

static IntArray SubForm_CONFIG_VALUE_MAX_storage{};

static StringArray2 SubForm_CONFIG_VALUE_NAMES_storage{};

static BoolArray SubForm_CONFIG_VALUE_REVERSE_storage{};

static IntArray SubForm_CONFIG_VALUES_storage{};

static IntArray2 SubForm_DLGSEL_TRECT_storage{};

static IntArray SubForm_FA_ANIME_TIME2_storage{};

static IntArray SubForm_FA_ANIME_TIME3_storage{};

static IntArray SubForm_FA2_ANIME_TIME_storage{};

static pls::cs::Int32 SubForm_FADE_TIME_V_storage{};

static pls::cs::Int32 SubForm_fontSize_storage{};

static IntArray SubForm_FW_ANIME_storage{};

static StringArray SubForm_MENU_STR_storage{};

static IntArray2 SubForm_meterParam_storage{};

static StringArray SubForm_PARAM_EXPLAIN1_storage{};

static StringArray SubForm_PARAM_EXPLAIN2_storage{};

static IntArray SubForm_S_ANIME_TIME_storage{};

static IntArray SubForm_S_ANIME_TIME2_storage{};

static IntArray SubForm_S_SNIME_ST_storage{};

static pls::cs::Int32 SubForm_SC_MAINMENU_NOTSELECT_storage{};

static pls::cs::Int32 SubForm_SC_MAINMENU_SELECT_storage{};

static pls::cs::Int32 SubForm_SC_WINDOW_BLACK_storage{};

static pls::cs::Int32 SubForm_SC_WINDOW_BLUE_storage{};

static pls::cs::Int32 SubForm_SC_WINDOW_GRAY_storage{};

static pls::cs::Int32 SubForm_SC_WINDOW_RED_storage{};

static pls::cs::Int32 SubForm_SC_WINDOW_SELECT_storage{};

static pls::cs::Int32 SubForm_SC_WINDOW_TITLE_storage{};

static pls::cs::Int32 SubForm_SC_WINDOW_TITLE2_storage{};

static pls::cs::Int32 SubForm_SC_WINDOW_WHITE_storage{};

static StringArray SubForm_SCENE_CHANGE_NAME_storage{};

static IntArray SubForm_SCENE_CHANGE_ONE_storage{};

static IntArray SubForm_SCENE_CHANGE_TIME_storage{};

static IntArray SubForm_SCENE_CHANGE_WAIT_storage{};

static IntArray SubForm_SCENE_IMG_DIV_X_storage{};

static IntArray SubForm_SCENE_IMG_DIV_Y_storage{};

static IntArray2 SubForm_softLabels__storage{};

static IntArray SubForm_SP_ANIME_TIME_storage{};

static IntArray SubForm_SP_MONEY_storage{};

static pls::cs::String SubForm_ticketPriceMessage_storage{};

static IntArray SubForm_TLUP_ANIME_TIME_storage{};

static IntArray SubForm_TLUP_ANIME_TIME2_storage{};

static IntArray SubForm_TRA_ANIME_TIME2_storage{};

static IntArray SubForm_TRA_AT_storage{};

static IntArray SubForm_TRA_AT2_storage{};

static StringArray SubForm_TROPHY_NAME_storage{};

static StringArray SubForm_UNIFORM_NAME_storage{};

static IntArray SubForm_VICTORY_ANIME_TIME_storage{};

static IntArray SubForm_WIDTH_storage{};

static IntArray2 SubForm_WIDTH_DATA_storage{};

static IntArray SubForm_WIN_CHA_storage{};

static PLS_NOINLINE void cs_init_a2cea92715051fa5_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(SubForm_anime_ballY_storage,visitor);pls::cs::trace_value(SubForm_anime_cnt_storage,visitor);pls::cs::trace_value(SubForm_anime_mode_storage,visitor);pls::cs::trace_value(SubForm_CLEARPOINT_ANIMETIME_storage,visitor);pls::cs::trace_value(SubForm_CONFIG_BGM_storage,visitor);pls::cs::trace_value(SubForm_CONFIG_EN_BGM_storage,visitor);pls::cs::trace_value(SubForm_CONFIG_EN_CURRENCY_storage,visitor);pls::cs::trace_value(SubForm_CONFIG_EN_NAMES_storage,visitor);pls::cs::trace_value(SubForm_CONFIG_EN_ORIENTATION_storage,visitor);pls::cs::trace_value(SubForm_CONFIG_EN_QUALITY_storage,visitor);pls::cs::trace_value(SubForm_CONFIG_EN_SE_storage,visitor);pls::cs::trace_value(SubForm_CONFIG_EN_SPEED_storage,visitor);pls::cs::trace_value(SubForm_CONFIG_EN_VALUE_MAX_storage,visitor);pls::cs::trace_value(SubForm_CONFIG_EN_VALUE_NAMES_storage,visitor);pls::cs::trace_value(SubForm_CONFIG_EN_VALUE_REVERSE_storage,visitor);pls::cs::trace_value(SubForm_CONFIG_EN_VALUES_storage,visitor);pls::cs::trace_value(SubForm_CONFIG_NAMES_storage,visitor);pls::cs::trace_value(SubForm_CONFIG_ORIENTATION_storage,visitor);pls::cs::trace_value(SubForm_CONFIG_QUALITY_storage,visitor);pls::cs::trace_value(SubForm_CONFIG_SE_storage,visitor);pls::cs::trace_value(SubForm_CONFIG_SPEED_storage,visitor);pls::cs::trace_value(SubForm_CONFIG_VALUE_MAX_storage,visitor);pls::cs::trace_value(SubForm_CONFIG_VALUE_NAMES_storage,visitor);pls::cs::trace_value(SubForm_CONFIG_VALUE_REVERSE_storage,visitor);pls::cs::trace_value(SubForm_CONFIG_VALUES_storage,visitor);pls::cs::trace_value(SubForm_DLGSEL_TRECT_storage,visitor);pls::cs::trace_value(SubForm_FA_ANIME_TIME2_storage,visitor);pls::cs::trace_value(SubForm_FA_ANIME_TIME3_storage,visitor);pls::cs::trace_value(SubForm_FA2_ANIME_TIME_storage,visitor);pls::cs::trace_value(SubForm_FADE_TIME_V_storage,visitor);pls::cs::trace_value(SubForm_fontSize_storage,visitor);pls::cs::trace_value(SubForm_FW_ANIME_storage,visitor);pls::cs::trace_value(SubForm_MENU_STR_storage,visitor);pls::cs::trace_value(SubForm_meterParam_storage,visitor);pls::cs::trace_value(SubForm_PARAM_EXPLAIN1_storage,visitor);pls::cs::trace_value(SubForm_PARAM_EXPLAIN2_storage,visitor);pls::cs::trace_value(SubForm_S_ANIME_TIME_storage,visitor);pls::cs::trace_value(SubForm_S_ANIME_TIME2_storage,visitor);pls::cs::trace_value(SubForm_S_SNIME_ST_storage,visitor);pls::cs::trace_value(SubForm_SC_MAINMENU_NOTSELECT_storage,visitor);pls::cs::trace_value(SubForm_SC_MAINMENU_SELECT_storage,visitor);pls::cs::trace_value(SubForm_SC_WINDOW_BLACK_storage,visitor);pls::cs::trace_value(SubForm_SC_WINDOW_BLUE_storage,visitor);pls::cs::trace_value(SubForm_SC_WINDOW_GRAY_storage,visitor);pls::cs::trace_value(SubForm_SC_WINDOW_RED_storage,visitor);pls::cs::trace_value(SubForm_SC_WINDOW_SELECT_storage,visitor);pls::cs::trace_value(SubForm_SC_WINDOW_TITLE_storage,visitor);pls::cs::trace_value(SubForm_SC_WINDOW_TITLE2_storage,visitor);pls::cs::trace_value(SubForm_SC_WINDOW_WHITE_storage,visitor);pls::cs::trace_value(SubForm_SCENE_CHANGE_NAME_storage,visitor);pls::cs::trace_value(SubForm_SCENE_CHANGE_ONE_storage,visitor);pls::cs::trace_value(SubForm_SCENE_CHANGE_TIME_storage,visitor);pls::cs::trace_value(SubForm_SCENE_CHANGE_WAIT_storage,visitor);pls::cs::trace_value(SubForm_SCENE_IMG_DIV_X_storage,visitor);pls::cs::trace_value(SubForm_SCENE_IMG_DIV_Y_storage,visitor);pls::cs::trace_value(SubForm_softLabels__storage,visitor);pls::cs::trace_value(SubForm_SP_ANIME_TIME_storage,visitor);pls::cs::trace_value(SubForm_SP_MONEY_storage,visitor);pls::cs::trace_value(SubForm_ticketPriceMessage_storage,visitor);pls::cs::trace_value(SubForm_TLUP_ANIME_TIME_storage,visitor);pls::cs::trace_value(SubForm_TLUP_ANIME_TIME2_storage,visitor);pls::cs::trace_value(SubForm_TRA_ANIME_TIME2_storage,visitor);pls::cs::trace_value(SubForm_TRA_AT_storage,visitor);pls::cs::trace_value(SubForm_TRA_AT2_storage,visitor);pls::cs::trace_value(SubForm_TROPHY_NAME_storage,visitor);pls::cs::trace_value(SubForm_UNIFORM_NAME_storage,visitor);pls::cs::trace_value(SubForm_VICTORY_ANIME_TIME_storage,visitor);pls::cs::trace_value(SubForm_WIDTH_storage,visitor);pls::cs::trace_value(SubForm_WIDTH_DATA_storage,visitor);pls::cs::trace_value(SubForm_WIN_CHA_storage,visitor);});static pls::cs::TypeInitState state;state.run("form.SubForm",flag,[](){
SubForm_softLabels__storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.softLabels_",[&](){return IntArray2::from({IntArray::make(2), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({3, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({5, 2}), IntArray::make(2), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::make(2), IntArray::make(2), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::make(2), IntArray::make(2), IntArray::from({0, 2}), IntArray::from({8, 2}), IntArray::from({8, 2}), IntArray::from({8, 2}), IntArray::from({8, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::make(2), IntArray::make(2), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::make(2), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::make(2), IntArray::from({7, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::make(2), IntArray::make(2), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::make(2), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::make(2), IntArray::make(2), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::make(2), IntArray::from({10, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::make(2), IntArray::make(2), IntArray::from({0, 2}), IntArray::make(2), IntArray::make(2), IntArray::from({0, 2}), IntArray::make(2), IntArray::make(2), IntArray::from({0, 2}), IntArray::make(2), IntArray::make(2), IntArray::make(2), IntArray::from({0, 2}), IntArray::from({6, 2})});});
SubForm_MENU_STR_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.MENU_STR",[&](){return StringArray::from({literal(u"試合"), literal(u"特別な練習"), literal(u"クラブ運営"), literal(u"チーム編成"), literal(u"情報を見る"), literal(u"ｼｽﾃﾑを設定"), literal(u"リーグ戦"), literal(u"ｴｷｼﾋﾞｼﾞｮﾝﾏｯﾁ"), literal(u"カップ戦"), literal(u"棄権する"), literal(u"(test)次の対戦"), literal(u"作戦を設定"), literal(u"選手の獲得"), literal(u"監督の情報"), literal(u"地域の活動"), literal(u"施設の強化"), literal(u"スポンサー"), literal(u"チーム情報"), literal(u"ｸﾗﾌﾞの歴史"), literal(u"収支情報"), literal(u"セーブ"), literal(u"設定変更"), literal(u"遊び方"), literal(u"ハイスコア"), literal(u"ｹﾞｰﾑ終了"), literal(u"ﾀｲﾑｱｯﾌﾟ"), literal(u"続きから"), literal(u"最初から"), literal(u"削除する"), literal(u"ﾀｲﾄﾙへ")});});
SubForm_SC_MAINMENU_SELECT_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.SC_MAINMENU_SELECT",[&](){return pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(30, 30, 30);});});
SubForm_SC_MAINMENU_NOTSELECT_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.SC_MAINMENU_NOTSELECT",[&](){return pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(204, 220, 228);});});
SubForm_SC_WINDOW_TITLE_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.SC_WINDOW_TITLE",[&](){return pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(247, 253, 247);});});
SubForm_SC_WINDOW_TITLE2_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.SC_WINDOW_TITLE2",[&](){return pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(44, 54, 105);});});
SubForm_SC_WINDOW_BLACK_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.SC_WINDOW_BLACK",[&](){return pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(92, 51, 31);});});
SubForm_SC_WINDOW_WHITE_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.SC_WINDOW_WHITE",[&](){return pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 227, 217);});});
SubForm_SC_WINDOW_RED_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.SC_WINDOW_RED",[&](){return pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 100, 25);});});
SubForm_SC_WINDOW_BLUE_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.SC_WINDOW_BLUE",[&](){return pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 100, 255);});});
SubForm_SC_WINDOW_SELECT_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.SC_WINDOW_SELECT",[&](){return pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 187, 76);});});
SubForm_SC_WINDOW_GRAY_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.SC_WINDOW_GRAY",[&](){return pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(156, 155, 155);});});
SubForm_TROPHY_NAME_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.TROPHY_NAME",[&](){return StringArray::from({pls::cs::String(u""), literal(u"銅の"), literal(u"銀の"), literal(u"金の"), literal(u"金のｶｲﾛ")});});
SubForm_FA_ANIME_TIME2_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.FA_ANIME_TIME2",[&](){return IntArray::from({12, 40, 66, 76});});
SubForm_FA_ANIME_TIME3_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.FA_ANIME_TIME3",[&](){return IntArray::from({12, 22, 48});});
SubForm_S_ANIME_TIME2_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.S_ANIME_TIME2",[&](){return IntArray::from({12, 16, 24, 40});});
SubForm_S_SNIME_ST_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.S_SNIME_ST",[&](){return IntArray::from({10, 10 + SubForm::S_ANIME_TIME2()[3], 10 + SubForm::S_ANIME_TIME2()[3] * 2, 10 + SubForm::S_ANIME_TIME2()[3] * 3, 20 + SubForm::S_ANIME_TIME2()[3] * 3});});
SubForm_S_ANIME_TIME_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.S_ANIME_TIME",[&](){return IntArray::from({10, 10 + SubForm::S_SNIME_ST()[4], 15 + SubForm::S_SNIME_ST()[4], 35 + SubForm::S_SNIME_ST()[4], 40 + SubForm::S_SNIME_ST()[4], ([&]() -> pls::cs::Int32 { auto cs_left = 40 + SubForm::S_SNIME_ST()[4]; auto cs_right = SubForm::FA_ANIME_TIME2()[3]; return cs_left + cs_right; }()), ([&]() -> pls::cs::Int32 { auto cs_left = ([&]() -> pls::cs::Int32 { auto cs_left = 40 + SubForm::S_SNIME_ST()[4]; auto cs_right = SubForm::FA_ANIME_TIME2()[3]; return cs_left + cs_right; }()); auto cs_right = SubForm::FA_ANIME_TIME3()[2]; return cs_left + cs_right; }())});});
SubForm_FA2_ANIME_TIME_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.FA2_ANIME_TIME",[&](){return IntArray::from({0, 0, 10, 60, 70, 130, 170});});
SubForm_TRA_AT_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.TRA_AT",[&](){return IntArray::from({7, 13, 25});});
SubForm_TRA_AT2_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.TRA_AT2",[&](){return IntArray::from({5, 25});});
SubForm_TRA_ANIME_TIME2_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.TRA_ANIME_TIME2",[&](){return IntArray::from({5, 130, 145, 150, 170, 175});});
SubForm_SP_ANIME_TIME_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.SP_ANIME_TIME",[&](){return IntArray::from({5, 109, 119, 131, 141});});
SubForm_TLUP_ANIME_TIME_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.TLUP_ANIME_TIME",[&](){return IntArray::from({5, 29, 44, 74, 84, 96});});
SubForm_TLUP_ANIME_TIME2_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.TLUP_ANIME_TIME2",[&](){return IntArray::from({5, 55, 60, 72});});
SubForm_VICTORY_ANIME_TIME_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.VICTORY_ANIME_TIME",[&](){return IntArray::from({60, 75, 95, 115});});
SubForm_CONFIG_QUALITY_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.CONFIG_QUALITY",[&](){return 0;});
SubForm_CONFIG_SPEED_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.CONFIG_SPEED",[&](){return 1;});
SubForm_CONFIG_BGM_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.CONFIG_BGM",[&](){return 2;});
SubForm_CONFIG_SE_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.CONFIG_SE",[&](){return 3;});
SubForm_CONFIG_ORIENTATION_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.CONFIG_ORIENTATION",[&](){return 4;});
SubForm_CONFIG_NAMES_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.CONFIG_NAMES",[&](){return StringArray::from({literal(u"画面"), literal(u"ｽﾋﾟｰﾄﾞ"), literal(u"BGM"), literal(u"効果音"), literal(u"画面回転")});});
SubForm_CONFIG_VALUE_NAMES_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.CONFIG_VALUE_NAMES",[&](){return StringArray2::from({StringArray::from({literal(u"描画優先"), literal(u"速度優先")}), StringArray::from({literal(u"高速"), literal(u"普通")}), StringArray::make(0), StringArray::make(0), StringArray::from({literal(u"自動"), literal(u"固定")})});});
SubForm_CONFIG_VALUES_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.CONFIG_VALUES",[&](){return IntArray::from({393216, 458752, 524288, 589824, 720896});});
SubForm_CONFIG_VALUE_REVERSE_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.CONFIG_VALUE_REVERSE",[&](){return BoolArray::from({true, true, false, false, false, false});});
SubForm_CONFIG_VALUE_MAX_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.CONFIG_VALUE_MAX",[&](){return IntArray::from({2, 2, 6, 6, 2});});
SubForm_CONFIG_EN_QUALITY_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.CONFIG_EN_QUALITY",[&](){return 0;});
SubForm_CONFIG_EN_SPEED_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.CONFIG_EN_SPEED",[&](){return 1;});
SubForm_CONFIG_EN_BGM_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.CONFIG_EN_BGM",[&](){return 2;});
SubForm_CONFIG_EN_SE_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.CONFIG_EN_SE",[&](){return 3;});
SubForm_CONFIG_EN_CURRENCY_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.CONFIG_EN_CURRENCY",[&](){return 4;});
SubForm_CONFIG_EN_ORIENTATION_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.CONFIG_EN_ORIENTATION",[&](){return 5;});
SubForm_CONFIG_EN_NAMES_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.CONFIG_EN_NAMES",[&](){return StringArray::from({literal(u"画面"), literal(u"ｽﾋﾟｰﾄﾞ"), literal(u"BGM"), literal(u"効果音"), literal(u"通貨単位"), literal(u"画面回転")});});
SubForm_CONFIG_EN_VALUE_NAMES_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.CONFIG_EN_VALUE_NAMES",[&](){return StringArray2::from({StringArray::from({literal(u"描画優先"), literal(u"速度優先")}), StringArray::from({literal(u"高速"), literal(u"普通")}), StringArray::make(0), StringArray::make(0), StringArray::from({literal(u"円"), literal(u"ドル")}), StringArray::from({literal(u"自動"), literal(u"固定")})});});
SubForm_CONFIG_EN_VALUES_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.CONFIG_EN_VALUES",[&](){return IntArray::from({393216, 458752, 524288, 589824, 655360, 720896});});
SubForm_CONFIG_EN_VALUE_REVERSE_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.CONFIG_EN_VALUE_REVERSE",[&](){return BoolArray::from({true, true, false, false, false, false});});
SubForm_CONFIG_EN_VALUE_MAX_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.CONFIG_EN_VALUE_MAX",[&](){return IntArray::from({2, 2, 6, 6, 2, 2});});
SubForm_FADE_TIME_V_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.FADE_TIME_V",[&](){return 12;});
SubForm_FW_ANIME_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.FW_ANIME",[&](){return IntArray::from({3, 6, 9, 12});});
SubForm_SCENE_CHANGE_TIME_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.SCENE_CHANGE_TIME",[&](){return IntArray::from({60, 60, 90});});
SubForm_SCENE_IMG_DIV_X_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.SCENE_IMG_DIV_X",[&](){return IntArray::from({8, 20, 8});});
SubForm_SCENE_IMG_DIV_Y_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.SCENE_IMG_DIV_Y",[&](){return IntArray::from({8, 6, 8});});
SubForm_SCENE_CHANGE_ONE_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.SCENE_CHANGE_ONE",[&](){return IntArray::from({12, 35, 8});});
SubForm_SCENE_CHANGE_WAIT_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.SCENE_CHANGE_WAIT",[&](){return IntArray::from({4, 1, 2});});
SubForm_SCENE_CHANGE_NAME_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.SCENE_CHANGE_NAME",[&](){return StringArray::from({literal(u"縦"), literal(u"横"), literal(u"斜め")});});
SubForm_UNIFORM_NAME_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.UNIFORM_NAME",[&](){return StringArray::from({literal(u"ｸﾞﾘｰﾝ"), literal(u"ﾚｯﾄﾞ"), literal(u"ﾋﾟﾝｸ"), literal(u"ｲｴﾛｰ"), literal(u"ﾊﾟｰﾌﾟﾙ"), literal(u"ﾗｲﾄﾌﾞﾙｰ"), literal(u"ﾌﾞﾙｰ"), literal(u"ﾌﾞﾗｯｸ"), literal(u"ﾎﾜｲﾄ")});});
SubForm_PARAM_EXPLAIN1_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.PARAM_EXPLAIN1",[&](){return StringArray::from({literal(u"…ｼｭｰﾄの成功率・パスの強さ"), literal(u"…走るときの早さ"), literal(u"…多くの場面でのﾌﾟﾚｰの精度"), literal(u"…転倒しにくさ"), literal(u"…ｺﾞｰﾙｷｰﾊﾟｰの能力")});});
SubForm_PARAM_EXPLAIN2_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.PARAM_EXPLAIN2",[&](){return StringArray::from({literal(u"選手の能力に応じてポジションの適正"), literal(u"が<co=FF1800>FEDCBAのランク</co>で評価されます。"), literal(u"<co=0A44FF>Aランク</co>に近いポジションほど実力が"), literal(u"発揮されやすいです。"), literal(u"<co=0FA5FB>ポジション配置の参考にしましょう。</co>")});});
SubForm_anime_mode_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.anime_mode",[&](){return 0;});
SubForm_anime_ballY_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.anime_ballY",[&](){return 0;});
SubForm_anime_cnt_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.anime_cnt",[&](){return 0;});
SubForm_DLGSEL_TRECT_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.DLGSEL_TRECT",[&](){return IntArray2::from({IntArray::from({-20, -20, 40, 40}), IntArray::from({-20, -20, 40, 40})});});
SubForm_SP_MONEY_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.SP_MONEY",[&](){return IntArray::from({1500, 1000, 1000, 1500});});
SubForm_WIDTH_DATA_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.WIDTH_DATA",[&](){return IntArray2::from({IntArray::from({105, 85, 42}), IntArray::from({125, 91, 42})});});
SubForm_WIDTH_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.WIDTH",[&](){return IntArray::make(3);});
SubForm_WIN_CHA_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.WIN_CHA",[&](){return IntArray::make(3);});
SubForm_meterParam_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.meterParam",[&](){return pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({10, 10}));});});
SubForm_CLEARPOINT_ANIMETIME_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.CLEARPOINT_ANIMETIME",[&](){return IntArray::from({75, 75, 45, 45, 65, 45, 65, 9999});});
SubForm_fontSize_storage = pls::cs::evaluate_type_initializer_field("F:form.SubForm.fontSize",[&](){return 12;});

});}

void SubForm::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_a2cea92715051fa5_slow(flag);}

pls::cs::Int32& SubForm::anime_ballY(){SubForm::ensure_initialized();return SubForm_anime_ballY_storage;}

pls::cs::Int32& SubForm::anime_cnt(){SubForm::ensure_initialized();return SubForm_anime_cnt_storage;}

pls::cs::Int32& SubForm::anime_mode(){SubForm::ensure_initialized();return SubForm_anime_mode_storage;}

IntArray& SubForm::CLEARPOINT_ANIMETIME(){SubForm::ensure_initialized();return SubForm_CLEARPOINT_ANIMETIME_storage;}

pls::cs::Int32& SubForm::CONFIG_BGM(){SubForm::ensure_initialized();return SubForm_CONFIG_BGM_storage;}

pls::cs::Int32& SubForm::CONFIG_EN_BGM(){SubForm::ensure_initialized();return SubForm_CONFIG_EN_BGM_storage;}

pls::cs::Int32& SubForm::CONFIG_EN_CURRENCY(){SubForm::ensure_initialized();return SubForm_CONFIG_EN_CURRENCY_storage;}

StringArray& SubForm::CONFIG_EN_NAMES(){SubForm::ensure_initialized();return SubForm_CONFIG_EN_NAMES_storage;}

pls::cs::Int32& SubForm::CONFIG_EN_ORIENTATION(){SubForm::ensure_initialized();return SubForm_CONFIG_EN_ORIENTATION_storage;}

pls::cs::Int32& SubForm::CONFIG_EN_QUALITY(){SubForm::ensure_initialized();return SubForm_CONFIG_EN_QUALITY_storage;}

pls::cs::Int32& SubForm::CONFIG_EN_SE(){SubForm::ensure_initialized();return SubForm_CONFIG_EN_SE_storage;}

pls::cs::Int32& SubForm::CONFIG_EN_SPEED(){SubForm::ensure_initialized();return SubForm_CONFIG_EN_SPEED_storage;}

IntArray& SubForm::CONFIG_EN_VALUE_MAX(){SubForm::ensure_initialized();return SubForm_CONFIG_EN_VALUE_MAX_storage;}

StringArray2& SubForm::CONFIG_EN_VALUE_NAMES(){SubForm::ensure_initialized();return SubForm_CONFIG_EN_VALUE_NAMES_storage;}

BoolArray& SubForm::CONFIG_EN_VALUE_REVERSE(){SubForm::ensure_initialized();return SubForm_CONFIG_EN_VALUE_REVERSE_storage;}

IntArray& SubForm::CONFIG_EN_VALUES(){SubForm::ensure_initialized();return SubForm_CONFIG_EN_VALUES_storage;}

StringArray& SubForm::CONFIG_NAMES(){SubForm::ensure_initialized();return SubForm_CONFIG_NAMES_storage;}

pls::cs::Int32& SubForm::CONFIG_ORIENTATION(){SubForm::ensure_initialized();return SubForm_CONFIG_ORIENTATION_storage;}

pls::cs::Int32& SubForm::CONFIG_QUALITY(){SubForm::ensure_initialized();return SubForm_CONFIG_QUALITY_storage;}

pls::cs::Int32& SubForm::CONFIG_SE(){SubForm::ensure_initialized();return SubForm_CONFIG_SE_storage;}

pls::cs::Int32& SubForm::CONFIG_SPEED(){SubForm::ensure_initialized();return SubForm_CONFIG_SPEED_storage;}

IntArray& SubForm::CONFIG_VALUE_MAX(){SubForm::ensure_initialized();return SubForm_CONFIG_VALUE_MAX_storage;}

StringArray2& SubForm::CONFIG_VALUE_NAMES(){SubForm::ensure_initialized();return SubForm_CONFIG_VALUE_NAMES_storage;}

BoolArray& SubForm::CONFIG_VALUE_REVERSE(){SubForm::ensure_initialized();return SubForm_CONFIG_VALUE_REVERSE_storage;}

IntArray& SubForm::CONFIG_VALUES(){SubForm::ensure_initialized();return SubForm_CONFIG_VALUES_storage;}

IntArray2& SubForm::DLGSEL_TRECT(){SubForm::ensure_initialized();return SubForm_DLGSEL_TRECT_storage;}

IntArray& SubForm::FA_ANIME_TIME2(){SubForm::ensure_initialized();return SubForm_FA_ANIME_TIME2_storage;}

IntArray& SubForm::FA_ANIME_TIME3(){SubForm::ensure_initialized();return SubForm_FA_ANIME_TIME3_storage;}

IntArray& SubForm::FA2_ANIME_TIME(){SubForm::ensure_initialized();return SubForm_FA2_ANIME_TIME_storage;}

pls::cs::Int32& SubForm::FADE_TIME_V(){SubForm::ensure_initialized();return SubForm_FADE_TIME_V_storage;}

pls::cs::Int32& SubForm::fontSize(){SubForm::ensure_initialized();return SubForm_fontSize_storage;}

IntArray& SubForm::FW_ANIME(){SubForm::ensure_initialized();return SubForm_FW_ANIME_storage;}

StringArray& SubForm::MENU_STR(){SubForm::ensure_initialized();return SubForm_MENU_STR_storage;}

IntArray2& SubForm::meterParam(){SubForm::ensure_initialized();return SubForm_meterParam_storage;}

StringArray& SubForm::PARAM_EXPLAIN1(){SubForm::ensure_initialized();return SubForm_PARAM_EXPLAIN1_storage;}

StringArray& SubForm::PARAM_EXPLAIN2(){SubForm::ensure_initialized();return SubForm_PARAM_EXPLAIN2_storage;}

IntArray& SubForm::S_ANIME_TIME(){SubForm::ensure_initialized();return SubForm_S_ANIME_TIME_storage;}

IntArray& SubForm::S_ANIME_TIME2(){SubForm::ensure_initialized();return SubForm_S_ANIME_TIME2_storage;}

IntArray& SubForm::S_SNIME_ST(){SubForm::ensure_initialized();return SubForm_S_SNIME_ST_storage;}

pls::cs::Int32& SubForm::SC_MAINMENU_NOTSELECT(){SubForm::ensure_initialized();return SubForm_SC_MAINMENU_NOTSELECT_storage;}

pls::cs::Int32& SubForm::SC_MAINMENU_SELECT(){SubForm::ensure_initialized();return SubForm_SC_MAINMENU_SELECT_storage;}

pls::cs::Int32& SubForm::SC_WINDOW_BLACK(){SubForm::ensure_initialized();return SubForm_SC_WINDOW_BLACK_storage;}

pls::cs::Int32& SubForm::SC_WINDOW_BLUE(){SubForm::ensure_initialized();return SubForm_SC_WINDOW_BLUE_storage;}

pls::cs::Int32& SubForm::SC_WINDOW_GRAY(){SubForm::ensure_initialized();return SubForm_SC_WINDOW_GRAY_storage;}

pls::cs::Int32& SubForm::SC_WINDOW_RED(){SubForm::ensure_initialized();return SubForm_SC_WINDOW_RED_storage;}

pls::cs::Int32& SubForm::SC_WINDOW_SELECT(){SubForm::ensure_initialized();return SubForm_SC_WINDOW_SELECT_storage;}

pls::cs::Int32& SubForm::SC_WINDOW_TITLE(){SubForm::ensure_initialized();return SubForm_SC_WINDOW_TITLE_storage;}

pls::cs::Int32& SubForm::SC_WINDOW_TITLE2(){SubForm::ensure_initialized();return SubForm_SC_WINDOW_TITLE2_storage;}

pls::cs::Int32& SubForm::SC_WINDOW_WHITE(){SubForm::ensure_initialized();return SubForm_SC_WINDOW_WHITE_storage;}

StringArray& SubForm::SCENE_CHANGE_NAME(){SubForm::ensure_initialized();return SubForm_SCENE_CHANGE_NAME_storage;}

IntArray& SubForm::SCENE_CHANGE_ONE(){SubForm::ensure_initialized();return SubForm_SCENE_CHANGE_ONE_storage;}

IntArray& SubForm::SCENE_CHANGE_TIME(){SubForm::ensure_initialized();return SubForm_SCENE_CHANGE_TIME_storage;}

IntArray& SubForm::SCENE_CHANGE_WAIT(){SubForm::ensure_initialized();return SubForm_SCENE_CHANGE_WAIT_storage;}

IntArray& SubForm::SCENE_IMG_DIV_X(){SubForm::ensure_initialized();return SubForm_SCENE_IMG_DIV_X_storage;}

IntArray& SubForm::SCENE_IMG_DIV_Y(){SubForm::ensure_initialized();return SubForm_SCENE_IMG_DIV_Y_storage;}

IntArray2& SubForm::softLabels_(){SubForm::ensure_initialized();return SubForm_softLabels__storage;}

IntArray& SubForm::SP_ANIME_TIME(){SubForm::ensure_initialized();return SubForm_SP_ANIME_TIME_storage;}

IntArray& SubForm::SP_MONEY(){SubForm::ensure_initialized();return SubForm_SP_MONEY_storage;}

pls::cs::String& SubForm::ticketPriceMessage(){SubForm::ensure_initialized();return SubForm_ticketPriceMessage_storage;}

IntArray& SubForm::TLUP_ANIME_TIME(){SubForm::ensure_initialized();return SubForm_TLUP_ANIME_TIME_storage;}

IntArray& SubForm::TLUP_ANIME_TIME2(){SubForm::ensure_initialized();return SubForm_TLUP_ANIME_TIME2_storage;}

IntArray& SubForm::TRA_ANIME_TIME2(){SubForm::ensure_initialized();return SubForm_TRA_ANIME_TIME2_storage;}

IntArray& SubForm::TRA_AT(){SubForm::ensure_initialized();return SubForm_TRA_AT_storage;}

IntArray& SubForm::TRA_AT2(){SubForm::ensure_initialized();return SubForm_TRA_AT2_storage;}

StringArray& SubForm::TROPHY_NAME(){SubForm::ensure_initialized();return SubForm_TROPHY_NAME_storage;}

StringArray& SubForm::UNIFORM_NAME(){SubForm::ensure_initialized();return SubForm_UNIFORM_NAME_storage;}

IntArray& SubForm::VICTORY_ANIME_TIME(){SubForm::ensure_initialized();return SubForm_VICTORY_ANIME_TIME_storage;}

IntArray& SubForm::WIDTH(){SubForm::ensure_initialized();return SubForm_WIDTH_storage;}

IntArray2& SubForm::WIDTH_DATA(){SubForm::ensure_initialized();return SubForm_WIDTH_DATA_storage;}

IntArray& SubForm::WIN_CHA(){SubForm::ensure_initialized();return SubForm_WIN_CHA_storage;}

void SubForm::create_init(pls::cs::Ref<SubForm> self) {
SubForm::ensure_initialized();
self->err_method = pls::cs::String(u"");
self->EVENT_HAPPY_ANIME_OY = IntArray::from({13, 11, 10, 9, 7, 6, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 1, 1, 2, 3, 3, 2, 2, 1, 1, 0, 0});
self->EVENT_SAD_ANIME_OY = IntArray::from({0, 0, 1, 1, 2, 2, 3, 4, 4, 5, 5, 6, 6, 7, 7, 6, 5, 4, 3, 2, 1, 1, 1, 2, 3});
self->dialogId_ = -1;
self->result__SubForm = -1;
self->ANIME_MATCH_RESULT = IntArray::from({5, 17});
self->MENUGRAPH_OFF = IntArray2::from({IntArray::from({0, -1}), IntArray::from({1, 0}), IntArray::from({0, 1}), IntArray::from({-1, 0})});
self->update_tmp1 = kl_util3d::Vector3D::create();
MyFormBase::create_init(pls::cs::static_pointer_cast<MyFormBase>(self), 4);
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.#ctor",game);
{
self->untilActiveHide_ = true;
}

}

void SubForm::create_init(pls::cs::Ref<SubForm> self,pls::cs::Int32 type,pls::cs::Int32 x,pls::cs::Int32 y) {
SubForm::ensure_initialized();
self->err_method = pls::cs::String(u"");
self->EVENT_HAPPY_ANIME_OY = IntArray::from({13, 11, 10, 9, 7, 6, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 1, 1, 2, 3, 3, 2, 2, 1, 1, 0, 0});
self->EVENT_SAD_ANIME_OY = IntArray::from({0, 0, 1, 1, 2, 2, 3, 4, 4, 5, 5, 6, 6, 7, 7, 6, 5, 4, 3, 2, 1, 1, 1, 2, 3});
self->dialogId_ = -1;
self->result__SubForm = -1;
self->ANIME_MATCH_RESULT = IntArray::from({5, 17});
self->MENUGRAPH_OFF = IntArray2::from({IntArray::from({0, -1}), IntArray::from({1, 0}), IntArray::from({0, 1}), IntArray::from({-1, 0})});
self->update_tmp1 = kl_util3d::Vector3D::create();
MyFormBase::create_init(pls::cs::static_pointer_cast<MyFormBase>(self), 4);
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.#ctor(System.Int32,System.Int32,System.Int32)",game);
{
self->type_ = type;
self->x_ = x;
self->y_ = y;
self->select_ = 0;
self->untilActiveHide_ = true;
}

}

void SubForm::create_init(pls::cs::Ref<SubForm> self,pls::cs::Int32 type,pls::cs::Int32 value1) {
SubForm::ensure_initialized();
self->err_method = pls::cs::String(u"");
self->EVENT_HAPPY_ANIME_OY = IntArray::from({13, 11, 10, 9, 7, 6, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 1, 1, 2, 3, 3, 2, 2, 1, 1, 0, 0});
self->EVENT_SAD_ANIME_OY = IntArray::from({0, 0, 1, 1, 2, 2, 3, 4, 4, 5, 5, 6, 6, 7, 7, 6, 5, 4, 3, 2, 1, 1, 1, 2, 3});
self->dialogId_ = -1;
self->result__SubForm = -1;
self->ANIME_MATCH_RESULT = IntArray::from({5, 17});
self->MENUGRAPH_OFF = IntArray2::from({IntArray::from({0, -1}), IntArray::from({1, 0}), IntArray::from({0, 1}), IntArray::from({-1, 0})});
self->update_tmp1 = kl_util3d::Vector3D::create();
MyFormBase::create_init(pls::cs::static_pointer_cast<MyFormBase>(self), 4);
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.#ctor(System.Int32,System.Int32)",game);
{
self->type_ = type;
self->select_ = 0;
self->untilActiveHide_ = true;
self->value1_ = value1;
}

}

void SubForm::create_init(pls::cs::Ref<SubForm> self,pls::cs::Int32 type) {
SubForm::ensure_initialized();
self->err_method = pls::cs::String(u"");
self->EVENT_HAPPY_ANIME_OY = IntArray::from({13, 11, 10, 9, 7, 6, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 1, 1, 2, 3, 3, 2, 2, 1, 1, 0, 0});
self->EVENT_SAD_ANIME_OY = IntArray::from({0, 0, 1, 1, 2, 2, 3, 4, 4, 5, 5, 6, 6, 7, 7, 6, 5, 4, 3, 2, 1, 1, 1, 2, 3});
self->dialogId_ = -1;
self->result__SubForm = -1;
self->ANIME_MATCH_RESULT = IntArray::from({5, 17});
self->MENUGRAPH_OFF = IntArray2::from({IntArray::from({0, -1}), IntArray::from({1, 0}), IntArray::from({0, 1}), IntArray::from({-1, 0})});
self->update_tmp1 = kl_util3d::Vector3D::create();
MyFormBase::create_init(pls::cs::static_pointer_cast<MyFormBase>(self), 4);
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.#ctor(System.Int32)",game);
{
self->type_ = type;
self->select_ = 0;
self->untilActiveHide_ = true;
self->udArrowCnt = 200;
}

}

// M:form.SubForm.#ctor
pls::cs::Ref<SubForm> SubForm::create() {
SubForm::ensure_initialized();
 auto self = pls::cs::make_ref<SubForm>(); SubForm::create_init(self); return self; 
}

// M:form.SubForm.#ctor(System.Int32)
pls::cs::Ref<SubForm> SubForm::create(pls::cs::Int32 type) {
SubForm::ensure_initialized();
 auto self = pls::cs::make_ref<SubForm>(); SubForm::create_init(self,type); return self; 
}

// M:form.SubForm.#ctor(System.Int32,System.Int32)
pls::cs::Ref<SubForm> SubForm::create(pls::cs::Int32 type,pls::cs::Int32 value1) {
SubForm::ensure_initialized();
 auto self = pls::cs::make_ref<SubForm>(); SubForm::create_init(self,type,value1); return self; 
}

// M:form.SubForm.#ctor(System.Int32,System.Int32,System.Int32)
pls::cs::Ref<SubForm> SubForm::create(pls::cs::Int32 type,pls::cs::Int32 x,pls::cs::Int32 y) {
SubForm::ensure_initialized();
 auto self = pls::cs::make_ref<SubForm>(); SubForm::create_init(self,type,x,y); return self; 
}

// M:form.SubForm.ToString
pls::cs::String SubForm::ToString() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.ToString",game);
{
return pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(literal(u"SubForm:"), integer_string(type_)), literal(u",")), err_method), literal(u",")), integer_string(err_line));
}
}

// M:form.SubForm.InitDialog(System.String,System.String)
void SubForm::InitDialog(pls::cs::String text,pls::cs::String buttons) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.InitDialog(System.String,System.String)",game);
{
x_ = 0;
y_ = 0;
select_ = 0;
text_ = text;
if (kl_lang::StringEx::Length(buttons) == 0) {
buttons = literal(u"了解");
}
selectButtons_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(buttons, literal(u"\t"));});
}
}

// M:form.SubForm.MakeDialog(System.String,System.String)
pls::cs::Ref<SubForm> SubForm::MakeDialog(pls::cs::String text,pls::cs::String buttons) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.MakeDialog(System.String,System.String)",game);
{
pls::cs::Ref<SubForm> subForm = SubForm::create();
require(subForm)->type_ = 1;
require(subForm)->InitDialog(text, buttons);
return subForm;
}

}

// M:form.SubForm.MakeDialog(System.String)
pls::cs::Ref<SubForm> SubForm::MakeDialog(pls::cs::String text) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.MakeDialog(System.String)",game);
{
{
pls::cs::Ref<SubForm> recoveredReturn = SubForm::MakeDialog(text, pls::cs::String(u""));
return recoveredReturn;
}
}

}

// M:form.SubForm.MakeDialog(System.String,System.String,System.Int32)
pls::cs::Ref<SubForm> SubForm::MakeDialog(pls::cs::String text,pls::cs::String buttons,pls::cs::Int32 defaultSelect) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.MakeDialog(System.String,System.String,System.Int32)",game);
{
pls::cs::Ref<SubForm> subForm = SubForm::MakeDialog(text, buttons);
require(subForm)->select_ = defaultSelect;
return subForm;
}

}

// M:form.SubForm.MakeNoMymenu(System.String)
pls::cs::Ref<SubForm> SubForm::MakeNoMymenu(pls::cs::String text) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.MakeNoMymenu(System.String)",game);
{
pls::cs::Ref<SubForm> subForm = SubForm::MakeDialog(text, literal(u"はい\tいいえ"));
require(subForm)->type_ = 21;
return subForm;
}

}

// M:form.SubForm.MakeWait(System.Int32)
pls::cs::Ref<SubForm> SubForm::MakeWait(pls::cs::Int32 wait) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.MakeWait(System.Int32)",game);
{
pls::cs::Ref<SubForm> subForm = SubForm::create(18);
require(subForm)->wait_ = wait;
return subForm;
}

}

// M:form.SubForm.MakeSystemDialog(System.String)
pls::cs::Ref<SubForm> SubForm::MakeSystemDialog(pls::cs::String text) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.MakeSystemDialog(System.String)",game);
{
pls::cs::Ref<SubForm> subForm = SubForm::create(23);
require(subForm)->type_ = 23;
require(subForm)->x_ = 0;
require(subForm)->y_ = 0;
require(subForm)->select_ = 0;
{ auto cs_target = subForm; auto cs_value = kairo::unity::ui::TextLayout::create(); require(cs_target)->textLay_ = cs_value; }
require(require(subForm)->textLay_)->SetAnchor(18);
require(require(subForm)->textLay_)->SetSpeed(3000);
require(require(subForm)->textLay_)->SetColor(SubForm::SC_WINDOW_WHITE());
require(require(subForm)->textLay_)->SetLineSpace(4);
require(require(subForm)->textLay_)->SetText(text);
require(require(subForm)->textLay_)->Flush();
return subForm;
}

}

// M:form.SubForm.MakeTalkForm(System.Int32,System.String)
pls::cs::Ref<SubForm> SubForm::MakeTalkForm(pls::cs::Int32 msgId,pls::cs::String arg) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.MakeTalkForm(System.Int32,System.String)",game);
{
main::AppData::ensure_initialized();

pls::cs::Ref<game::UserData> instance = game::UserData::GetInstance();
pls::cs::String value = main::AppData::talks_()[msgId];
if (!is_null(arg)) {
value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Replace(value, arg);});
}
StringArray array = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(value, literal(u"\t"));});
pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[0]);});
pls::cs::Int32 num2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[1]);});
if (num2 == -1 && num == 3) {
num2 = require(instance)->selectSupervisorId_;
}
pls::cs::Ref<SubForm> subForm = SubForm::create();
require(subForm)->talkArg_ = arg;
require(subForm)->type_ = 0;
require(subForm)->x_ = 0;
require(subForm)->y_ = 0;
require(subForm)->select_ = 0;
require(subForm)->humanCharaType_ = num;
require(subForm)->humanCharaIndex_ = num2;
{ auto cs_target = subForm; pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[2]);}); require(cs_target)->nextIndex_ = cs_value; }
{ auto cs_target = subForm; auto cs_value = StringArray::make(pls::cs::Int32(array.length()) - 3); require(cs_target)->textAry_ = cs_value; }
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::Arraycopy(pls::cs::box(array), 3, pls::cs::box(require(subForm)->textAry_), 0, pls::cs::Int32(array.length()) - 3);});
require(subForm)->textIdx_ = 0;
{ auto cs_target = subForm; auto cs_value = kairo::unity::ui::TextLayout::create(false, true); require(cs_target)->textLay_ = cs_value; }
require(require(subForm)->textLay_)->SetSize(172.0f, 60.0f);
require(require(subForm)->textLay_)->SetSpeed(3000);
require(require(subForm)->textLay_)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(37, 35, 54);}));
require(require(subForm)->textLay_)->SetLineSpace(4);
{ auto cs_receiver = require(subForm)->textLay_; pls::cs::String cs_arg0 = require(subForm)->textAry_[require(subForm)->textIdx_]; require(cs_receiver)->SetText(cs_arg0); }
return subForm;

}

}

// M:form.SubForm.MakeTalkForm(System.Int32,System.String,System.String)
pls::cs::Ref<SubForm> SubForm::MakeTalkForm(pls::cs::Int32 characterIndex,pls::cs::String text,pls::cs::String arg) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.MakeTalkForm(System.Int32,System.String,System.String)",game);
{
pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
pls::cs::Ref<SubForm> subForm = SubForm::create();
require(subForm)->talkArg_ = arg;
require(subForm)->type_ = 0;
require(subForm)->x_ = 0;
require(subForm)->y_ = 0;
require(subForm)->select_ = 0;
require(subForm)->humanCharaIndex_ = characterIndex;
require(subForm)->nextIndex_ = -1;
{ auto cs_target = subForm; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(text, literal(u"\t"));}); require(cs_target)->textAry_ = cs_value; }
require(subForm)->textIdx_ = 0;
{ auto cs_target = subForm; auto cs_value = kairo::unity::ui::TextLayout::create(); require(cs_target)->textLay_ = cs_value; }
require(require(subForm)->textLay_)->SetSize(172.0f, 60.0f);
require(require(subForm)->textLay_)->SetSpeed(3000);
require(require(subForm)->textLay_)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(7, 7, 7);}));
require(require(subForm)->textLay_)->SetLineSpace(4);
require(require(subForm)->textLay_)->SetText(text);
return subForm;
}

}

// M:form.SubForm.MakeEvent(System.String,System.String,System.Int32)
pls::cs::Ref<SubForm> SubForm::MakeEvent(pls::cs::String var_event,pls::cs::String arg,pls::cs::Int32 eventMsgId) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.MakeEvent(System.String,System.String,System.Int32)",game);
{
if ((((eventMsgId == 49) || (eventMsgId == 50)) || (eventMsgId == 51)) || (eventMsgId == 52)) {
var_event = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Replace(var_event, MyFormBase::YEN(literal(u"万円"), pls::cs::cast_integral<pls::cs::Int64>(SubForm::SP_MONEY()[eventMsgId - 49])));});
} else {
var_event = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Replace(var_event, arg);});
}
StringArray array = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(var_event, literal(u"\t"));});
pls::cs::Ref<SubForm> subForm = SubForm::create();
{ auto cs_target = subForm; auto cs_value = IntArray::make(array.length()); require(cs_target)->eventIds_ = cs_value; }
{ auto cs_target = subForm; auto cs_value = StringArray::make(array.length()); require(cs_target)->eventTexts_ = cs_value; }
for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
StringArray array2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(array[i], literal(u"&"), false, false, false);});
{ auto cs_target = require(subForm)->eventIds_; auto cs_index = i; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array2[0]);});cs_target.set_Item(cs_index,cs_value);}
require(subForm)->eventTexts_[i] = array2[1];
}
require(subForm)->type_ = 13;
require(subForm)->x_ = 0;
require(subForm)->y_ = 0;
require(subForm)->select_ = 0;
return subForm;
}

}

// M:form.SubForm.MakeNews(System.Int32,System.String)
pls::cs::Ref<SubForm> SubForm::MakeNews(pls::cs::Int32 id,pls::cs::String arg) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.MakeNews(System.Int32,System.String)",game);
{
pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
if (is_null(arg)) {
arg = require(require(instance)->save_)->strs[0];
}
pls::cs::String text = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Replace(require(instance)->newsTexts_[id], arg);});
pls::cs::Ref<SubForm> subForm = SubForm::create();
require(subForm)->type_ = 17;
require(subForm)->x_ = 0;
require(subForm)->y_ = 0;
require(subForm)->select_ = 0;
{ auto cs_target = subForm; auto cs_value = require(instance)->newsTitles_[id]; require(cs_target)->name_ = cs_value; }
require(subForm)->text_ = text;
{ auto cs_target = subForm; auto cs_value = kairo::unity::ui::TextLayout::create(false, true); require(cs_target)->textLay_ = cs_value; }
require(require(subForm)->textLay_)->SetSize(159.0f, 106.0f);
require(require(subForm)->textLay_)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(37, 35, 54);}));
require(require(subForm)->textLay_)->SetLineSpace(6);
require(require(subForm)->textLay_)->SetText(text);
require(require(subForm)->textLay_)->Flush();
require(subForm)->page_ = 0;
{ auto cs_target = subForm; pls::cs::Int32 cs_value = ((require(require(subForm)->textLay_)->GetHeight() + 6) / 18 + 5) / 6; require(cs_target)->pagesNum_ = cs_value; }
return subForm;
}

}

// M:form.SubForm.Init
bool SubForm::Init() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Init",game);
{
main::AppData::ensure_initialized();
kl_cfg::Config::ensure_initialized();
data::FanActData::ensure_initialized();
data::TenantData::ensure_initialized();

MyFormBase::Init();
err_method = literal(u"init()");
udat_ = game::UserData::GetInstance();
jingle_ = -1;
frame_ = 0;
pls::cs::Int32 num = SubForm::softLabels_()[type_][0];
pls::cs::Int32 num2 = SubForm::softLabels_()[type_][1];
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = main::AppData::softLabels_()[num]; pls::cs::String cs_arg1 = main::AppData::softLabels_()[num2]; this->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{}); }());});
if (type_ == 3) {
menus_ = IntArray2{};
AddMenu(0, 1);
AddMenu(1, 1);
AddMenu(2, 1);
AddMenu(3, 1);
AddMenu(4, 1);
AddMenu(5, 1);
} else if (type_ == 4) {
menus_ = IntArray2{};
AddMenu(21, 1);
AddMenu(22, 1);
if (kl_cfg::Config::DEBUG_CMD()) {
AddMenu(25, 1);
}
} else if (type_ == 5) {
pls::cs::Int32 matchInfoJoin = require(udat_)->GetMatchInfoJoin();
if (require(udat_)->ChEventFlg(1)) {
AddMenu(6, 1);
}
if (require(udat_)->ChEventFlg(8)) {
AddMenu(8, 1);
}
if (matchInfoJoin != 2) {
AddMenu(9, 1);
}
} else if (type_ == 6) {

} else {
if (type_ == 7) {
if (require(udat_)->ChEventFlg(16)) {
AddMenu(12, 1);
}
if (require(udat_)->ChEventFlg(2)) {
AddMenu(14, 1);
}
if (require(udat_)->ChEventFlg(4)) {
AddMenu(15, 1);
}
if (require(udat_)->ChEventFlg(32)) {
AddMenu(16, 1);
}
} else if (type_ == 11) {
AddMenu(17, 1);
AddMenu(13, 1);
AddMenu(18, 1);
AddMenu(19, 1);
} else if (type_ == 12) {
AddMenu(20, 1);
AddMenu(21, 1);
AddMenu(22, 1);
AddMenu(23, 1);
AddMenu(24, 1);
} else if (type_ == 15) {
textLay_ = kairo::unity::ui::TextLayout::create(false, true);
if (MyFormBase::Jp()) {
require(textLay_)->SetSize(146.0f, 124.0f);
require(textLay_)->SetLineSpace(6);
} else {
require(textLay_)->SetSize(186.0f, 124.0f);
require(textLay_)->SetLineSpace(8);
require(textLay_)->SetFontSize(10);
}
require(textLay_)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(30, 30, 30);}));
{ pls::cs::String cs_arg0 = require(apdat_)->manualTexts_[page_]; require(textLay_)->SetText(cs_arg0); }
require(textLay_)->Flush();
} else if (type_ == 16) {
InitDialog(literal(u"ゲームセーブ中"), pls::cs::String(u""));
} else if (type_ == 17) {

} else {
if (type_ == 19) {
require(apdat_)->PlayBgm(4);
clearPoint_highScore = require(apdat_)->GetHighScore();
require(udat_)->SetClearPoint();
} else if (type_ == 13) {

} else {
if (type_ == 14) {
value1_ = require(require(apdat_)->save_)->ints[12];
} else if (type_ == 22) {
AddMenu(26, 1);
AddMenu(27, 1);
AddMenu(28, 1);
} else if (type_ == 23) {

} else if ((type_ == 24) || (type_ == 25)) {

} else {
if (type_ == 26) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(udat_)->editTest_formation));}) > 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveAllElements(require(require(udat_)->editTest_formation));});
}
for (pls::cs::Int32 i = 0; i < require(apdat_)->formationData_.length(); ++i) {
pls::cs::Ref<data::FormationData> formationData = require(apdat_)->formationData_.get_Item(i);
if (require(formationData)->state_ == 1) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = require(udat_)->editTest_formation; pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(require(apdat_)->formationData_.get_Item(i)); kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0); }());});
}
}
pls::cs::Ref<data::FormationData> elem = require(apdat_)->formationData_.get_Item(require(udat_)->selectFormationId_);
pls::cs::Int32 num3 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_IndexOf(require(require(udat_)->editTest_formation), pls::cs::box(elem));});
if (num3 != -1) {
require(udat_)->et_cur[1] = num3;
}
require(udat_)->SetEditForPos(false);
} else if (type_ == 27 || type_ == 28 || type_ == 29 || type_ == 31) {
ary1 = kl_java_util::Vector::create();
for (pls::cs::Int32 j = 0; j < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(udat_)->memberPDataist_));}); ++j) {
pls::cs::Ref<data::PlayerData> obj = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(udat_)->memberPDataist_), j);}));
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_AddElement(require(ary1), pls::cs::box(obj));});
}
if (type_ == 28) {
if (is_null(playerData_)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
pls::cs::Int32 num4 = require(playerData_)->id_;
for (pls::cs::Int32 k = 0; k < 11; ++k) {
pls::cs::Ref<data::PlayerData> playerData = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(udat_)->memberPDataist_), k);}));
if (require(playerData)->id_ == num4) {
continue;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElement(require(ary1), pls::cs::box(playerData));});
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}) == 0) {
require(apdat_)->ExecEvent(11, pls::cs::String{}, IntArray{});
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
}
} else if (type_ == 30) {

} else if (type_ == 32) {

} else {
if (type_ == 33) {
pls::cs::Int32 testedMatchInfoJoin1 = require(udat_)->GetMatchInfoJoin();
if (testedMatchInfoJoin1 == 1) {
{
pls::cs::Ref<data::QuestMatchData> questMatchData = require(apdat_)->qmData_.get_Item(require(udat_)->selectQmId_);
require(apdat_)->ExecEvent(19, require(questMatchData)->name_, IntArray{});
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (testedMatchInfoJoin1 == 2) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = formMan_; pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = SubForm::create(34); return require(cs_receiver)->Push(cs_arg0); }());});
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
pls::cs::Ref<data::LeagueData> leagueData = require(apdat_)->leagueData_.get_Item(require(udat_)->selectLeagueId_);
if (require(udat_)->league_setu_ == pls::cs::Int32(require(leagueData)->matchEnemy_.length()) - 1) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = formMan_; pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = SubForm::create(34); return require(cs_receiver)->Push(cs_arg0); }());});
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
ary1 = kl_java_util::Vector::create();
ary2 = kl_java_util::Vector::create();
data::TeamData::SetScoreRanking(leagueData, ary1, ary2);
} else if (type_ == 34) {
ary1 = kl_java_util::Vector::create();
for (pls::cs::Int32 num5 = pls::cs::Int32(require(apdat_)->leagueData_.length()) - 1; num5 >= 0; --num5) {
pls::cs::Ref<data::LeagueData> leagueData2 = require(apdat_)->leagueData_.get_Item(num5);
if (require(leagueData2)->state_ == 1) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_AddElement(require(ary1), pls::cs::box(leagueData2));});
}
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}) == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::MakeDialog(literal(u"リーグが存在しません")));});
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
for (pls::cs::Int32 l = 0; l < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}); ++l) {
pls::cs::Ref<data::LeagueData> leagueData3 = pls::cs::unbox<pls::cs::Ref<data::LeagueData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), l);}));
if (require(leagueData3)->id_ == 1) {
if (!require(apdat_)->CheckAlreadyEvent(167)) {
require(apdat_)->ExecEvent(167, pls::cs::String{}, IntArray{});
}
} else if (require(leagueData3)->id_ == 2) {
if (!require(apdat_)->CheckAlreadyEvent(168)) {
require(apdat_)->ExecEvent(168, pls::cs::String{}, IntArray{});
}
} else if (require(leagueData3)->id_ == 3) {
if (!require(apdat_)->CheckAlreadyEvent(169)) {
require(apdat_)->ExecEvent(169, pls::cs::String{}, IntArray{});
}
} else if (require(leagueData3)->id_ == 4 && !require(apdat_)->CheckAlreadyEvent(170)) {
require(apdat_)->ExecEvent(170, pls::cs::String{}, IntArray{});
}
}
pls::cs::Ref<data::LeagueData> leagueData4 = pls::cs::unbox<pls::cs::Ref<data::LeagueData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), 0);}));
textLay_ = kairo::unity::ui::TextLayout::create(false, true);
require(leagueData4)->SetLeagueInfoExplain(textLay_);
} else if (type_ == 35) {

} else {
if (type_ == 36) {
pls::cs::Int32 testedMatchInfoJoin2 = require(udat_)->GetMatchInfoJoin();
if (testedMatchInfoJoin2 == 0) {
{
pls::cs::Ref<data::LeagueData> leagueData5 = require(apdat_)->leagueData_.get_Item(require(udat_)->selectLeagueId_);
if (require(udat_)->league_setu_ == pls::cs::Int32(require(leagueData5)->matchEnemy_.length()) - 1) {

} else {
require(require(apdat_)->frmGame_)->state_ = 2;
require(require(apdat_)->frmGame_)->SetBattleData();
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (testedMatchInfoJoin2 == 1) {
require(require(apdat_)->frmGame_)->state_ = 2;
require(require(apdat_)->frmGame_)->SetBattleData();
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = formMan_; pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = SubForm::MakeDialog(literal(u"種目を決定してください")); return require(cs_receiver)->Push(cs_arg0); }());});
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
}
if (type_ == 37) {

} else {
if (type_ == 38) {
pls::cs::Int32 num6 = 40;
pls::cs::Int32 num7 = 200;
pls::cs::Int32 num8 = 170;
pls::cs::Int32 num9 = 210;
pls::cs::Int32 num10 = (num7 - num6) / 3;
pls::cs::Int32 num11 = (num9 - num8) / 3;
pls::cs::Int32 num12 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(udat_)->memberPDataist_));});
zsort_mhobj = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({num12, 2}));});
w_vic_pos = pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::make(num12);
w_vic_data = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({num12, 2}));});
for (pls::cs::Int32 m = 0; m < w_vic_pos.length(); ++m) {
pls::cs::Int32 num13 = m % 9 % 3 * num10 + num6;
pls::cs::Int32 num14 = num9 - m % 9 / 3 * num11;
{ auto cs_target = w_vic_pos; auto cs_index = m; auto cs_value = kl_util3d::Vector3D::create();cs_target.set_Item(cs_index,cs_value);}
{ auto cs_target = w_vic_pos.get_Item(m); pls::cs::Single cs_value = game::GameUtil::RateConvert(game::GameUtil::Random(100), 0, 99, num13, num13 + num10, true); require(cs_target)->x_ = cs_value; }
{ auto cs_target = w_vic_pos.get_Item(m); pls::cs::Single cs_value = game::GameUtil::RateConvert(game::GameUtil::Random(100), 0, 99, num14, num14 - num11, true); require(cs_target)->z_ = cs_value; }
pls::cs::Ref<data::PlayerData> playerData2 = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(udat_)->memberPDataist_), m);}));
w_vic_data[m][0] = require(playerData2)->id_;
{ auto cs_target = w_vic_data[m]; auto cs_index = 1; auto cs_value = game::GameUtil::Random(20) + 5;cs_target.set_Item(cs_index,cs_value);}
}
for (pls::cs::Int32 n = 0; n < w_vic_pos.length(); ++n) {
zsort_mhobj[n][0] = n;
zsort_mhobj[n][1] = pls::cs::to_int32(require(w_vic_pos.get_Item(n))->z_);
}
for (pls::cs::Int32 num15 = 0; num15 < pls::cs::Int32(zsort_mhobj.length()) - 1; ++num15) {
for (pls::cs::Int32 num16 = pls::cs::Int32(zsort_mhobj.length()) - 1; num16 > num15; --num16) {
if ([&]() -> bool { auto cs_left = zsort_mhobj[num15][1]; auto cs_right = zsort_mhobj[num16][1]; return cs_left > cs_right; }()) {
pls::cs::Int32 num17 = zsort_mhobj[num16][1];
zsort_mhobj[num16][1] = zsort_mhobj[num15][1];
zsort_mhobj[num15][1] = num17;
num17 = zsort_mhobj[num16][0];
zsort_mhobj[num16][0] = zsort_mhobj[num15][0];
zsort_mhobj[num15][0] = num17;
}
}
}
fw_goRate = IntArray::from({0, 200, 200, 200, 0});
fw_cnt = IntArray::make(5);
fw_pos = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({5, 2}));});
fw_zsort = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({5, 2}));});
fw_commonWait = 5;
} else if (type_ == 39) {
ary1 = kl_java_util::Vector::create();
for (pls::cs::Int32 num18 = 0; num18 < require(apdat_)->fanActData_.length(); ++num18) {
pls::cs::Ref<data::FanActData> fanActData = require(apdat_)->fanActData_.get_Item(num18);
if (require(fanActData)->state_ != 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_AddElement(require(ary1), pls::cs::box(fanActData));});
}
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}) == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::MakeDialog(literal(u"項目がありません。")));});
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 40) {
pls::cs::Ref<data::FanActData> fanActData2 = fanActData_;
textLay_ = kairo::unity::ui::TextLayout::create(false, true);
require(textLay_)->SetSize(124.0f, 47.0f);
require(textLay_)->SetColor(SubForm::SC_WINDOW_BLACK());
require(textLay_)->SetLineSpace(5);
require(textLay_)->SetText(require(fanActData2)->explain_);
require(textLay_)->Flush();
} else if (type_ == 41) {
pls::cs::Ref<data::FanActData> fanActData3 = fanActData_;
pls::cs::Int32 num19 = game::GameUtil::Random(data::FanActData::FARESULT_RATE()[pls::cs::Int32(data::FanActData::FARESULT_RATE().length()) - 1]);
for (pls::cs::Int32 num20 = 0; num20 < data::FanActData::FARESULT_RATE().length(); ++num20) {
if (num19 < data::FanActData::FARESULT_RATE()[num20]) {
data::FanActData::fa_result() = num20;
break;
}
}
data::FanActData::fa_id()[0] = 3;
data::FanActData::fa_id()[1] = 0;
data::FanActData::fa_id()[2] = 1;
data::FanActData::fa_id()[3] = 2;
pls::cs::Int32 cs_arg0_226 = require(fanActData3)->rank_; pls::cs::Int32 cs_arg3_226 = require(fanActData3)->effLimit_[0]; pls::cs::Int32 cs_arg4_226 = require(fanActData3)->effLimit_[1];
pls::cs::Int32 limit = game::GameUtil::RateConvert(cs_arg0_226, 0, 6, cs_arg3_226, cs_arg4_226, true);
for (pls::cs::Int32 num21 = 0; num21 < data::FanActData::fa_id().length(); ++num21) {
pls::cs::Int32 num22 = data::FanActData::fa_id()[num21];
if (num22 == 3) {
pls::cs::Int32 add = require(fanActData3)->difficult_;
if (require(fanActData3)->rank_ == 6) {
add = 0;
}
{ auto cs_left_227 = SubForm::FA2_ANIME_TIME()[6]; auto cs_right_227 = SubForm::FA2_ANIME_TIME()[5];
pls::cs::Int32 cs_arg1 = cs_left_227 - cs_right_227; pls::cs::Int32 cs_arg2 = require(fanActData3)->rankPoint_; pls::cs::Int32 cs_arg4 = require(fanActData3)->rank_; SetMeterParamRank(num21, cs_arg1, cs_arg2, 100, cs_arg4, 6, add); }
SetMeterParamDispAdd(num21, num22, require(fanActData3)->rankPoint_);
continue;
}
pls::cs::Int32 fanEva = data::FanActData::GetFanEva(data::FanActData::fa_id()[num21]);
pls::cs::Int32 cs_arg0_228 = require(fanActData3)->rank_; pls::cs::Int32 cs_arg3_228 = require(fanActData3)->eff_[num22][0]; pls::cs::Int32 cs_arg4_228 = require(fanActData3)->eff_[num22][1];
pls::cs::Int32 num23 = game::GameUtil::RateConvert(cs_arg0_228, 0, 6, cs_arg3_228, cs_arg4_228, true);
if (data::FanActData::fa_id()[num21] != 1) {
num23 = data::FanActData::GetAddEvaLimitOver(data::FanActData::fa_id()[num21], fanEva, num23, limit);
}
SetMeterParam(num21, ([&]() -> pls::cs::Int32 { auto cs_left = SubForm::FA2_ANIME_TIME()[6]; auto cs_right = SubForm::FA2_ANIME_TIME()[5]; return cs_left - cs_right; }()), fanEva, 10000, num23);
SetMeterParamDispAdd(num21, num22, data::FanActData::GetFanDispParam(fanEva, num22));
}
ary1 = kl_java_util::Vector::create();
for (pls::cs::Int32 num24 = 0; num24 < 11; ++num24) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ary1; pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(udat_)->memberPDataist_), num24);}); kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0); }());});
}
for (pls::cs::Int32 num25 = 0; num25 < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}); ++num25) {
pls::cs::Ref<data::PlayerData> obj2 = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), num25);}));
pls::cs::Int32 num26 = game::GameUtil::Random(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}));
if (num26 == num25) {

} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ary1; pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), num26);}); kl_java_util::Vector_2_SetElementAt(require(cs_receiver), cs_arg0, num25); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_SetElementAt(require(ary1), pls::cs::box(obj2), num26);});
}
}
} else if (type_ == 42) {
ary1 = kl_java_util::Vector::create();
for (pls::cs::Int32 num27 = 0; num27 < require(apdat_)->sponsorData_.length(); ++num27) {
pls::cs::Ref<data::SponsorData> sponsorData = require(apdat_)->sponsorData_.get_Item(num27);
if (require(sponsorData)->state_ == 0) {

} else if ((require(sponsorData)->state_ == 1)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(require(apdat_)->sponsorData_.get_Item(num27)); kl_java_util::Vector_2_AddElement(require(ary1), cs_arg0); }());});
}
}
for (pls::cs::Int32 num28 = 0; num28 < require(apdat_)->sponsorData_.length(); ++num28) {
pls::cs::Ref<data::SponsorData> sponsorData2 = require(apdat_)->sponsorData_.get_Item(num28);
if (require(sponsorData2)->state_ == 0) {

} else if ((require(sponsorData2)->state_ == 2)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(require(apdat_)->sponsorData_.get_Item(num28)); kl_java_util::Vector_2_AddElement(require(ary1), cs_arg0); }());});
}
}
} else if (type_ == 43) {
pls::cs::Ref<data::SponsorData> sponsorData3 = sponsorData_;
textLay_ = kairo::unity::ui::TextLayout::create(false, true);
require(textLay_)->SetSize(124.0f, 47.0f);
require(textLay_)->SetColor(SubForm::SC_WINDOW_BLACK());
require(textLay_)->SetLineSpace(5);
require(textLay_)->SetText(require(sponsorData3)->explain_);
require(textLay_)->Flush();
} else if (type_ == 44) {
pls::cs::Ref<data::SponsorData> sponsorData4 = sponsorData_;
require(udat_)->SetNegotiateResult(require(sponsorData4)->feelPt_, require(sponsorData4)->difficult_);
require(apdat_)->PlayBgm(4);
} else if (type_ == 60 || type_ == 61) {
ary1 = kl_java_util::Vector::create();
for (pls::cs::Int32 num29 = 0; num29 < require(apdat_)->tenantData_.length(); ++num29) {
pls::cs::Ref<data::TenantData> tenantData = require(apdat_)->tenantData_.get_Item(num29);
if (type_ == 61) {
if (require(tenantData)->id_ == data::TenantData::TENANT_ID_STADIUM()) {
continue;
}
if (require(tenantData)->id_ == data::TenantData::TENANT_ID_TRAININGAREA()) {
continue;
}
if (require(tenantData)->id_ == data::TenantData::TENANT_ID_TRAININGAREA_SPRED()) {
continue;
}
}
if (require(tenantData)->state_ != 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_AddElement(require(ary1), pls::cs::box(tenantData));});
}
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}) == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::MakeDialog(literal(u"施設がありません。")));});
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
pls::cs::Ref<data::TenantData> tenantData2 = pls::cs::unbox<pls::cs::Ref<data::TenantData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), 0);}));
if (require(tenantData2)->IsTAreaOrStadiumTenant()) {
textLay_ = kairo::unity::ui::TextLayout::create(false, true);
require(textLay_)->SetSize(192.0f, 33.0f);
require(textLay_)->SetColor(SubForm::SC_WINDOW_BLACK());
require(textLay_)->SetLineSpace(5);
require(textLay_)->SetText(require(tenantData2)->explain_);
require(textLay_)->Flush();
}
} else if (type_ == 62) {

} else if (type_ == 63) {

} else if (type_ == 64) {
pls::cs::Ref<data::TenantData> tenantData3 = require(apdat_)->tenantData_.get_Item(tenantDataId_);
IntArray lvUpAddParam = require(tenantData3)->GetLvUpAddParam();
{ auto cs_left_229 = SubForm::TLUP_ANIME_TIME()[5]; auto cs_right_229 = SubForm::TLUP_ANIME_TIME()[4];
pls::cs::Int32 cs_arg1 = cs_left_229 - cs_right_229; pls::cs::Int32 cs_arg2 = require(tenantData3)->paramUsePrice_; pls::cs::Int32 cs_arg4 = lvUpAddParam[0]; SetMeterParam(0, cs_arg1, cs_arg2, 2147483647 /* Int32.MaxValue */, cs_arg4); }
{ auto cs_left_230 = SubForm::TLUP_ANIME_TIME()[5]; auto cs_right_230 = SubForm::TLUP_ANIME_TIME()[4];
pls::cs::Int32 cs_arg1 = cs_left_230 - cs_right_230; pls::cs::Int32 cs_arg2 = require(tenantData3)->paramKeepCost_; pls::cs::Int32 cs_arg4 = lvUpAddParam[1]; SetMeterParam(1, cs_arg1, cs_arg2, 2147483647 /* Int32.MaxValue */, cs_arg4); }
for (pls::cs::Int32 num30 = 0; num30 < require(tenantData3)->paramResearch_.length(); ++num30) {
{ auto cs_left_231 = SubForm::TLUP_ANIME_TIME2()[3]; auto cs_right_231 = SubForm::TLUP_ANIME_TIME2()[2];
pls::cs::Int32 cs_arg1 = cs_left_231 - cs_right_231; pls::cs::Int32 cs_arg2 = require(tenantData3)->paramResearch_[num30]; pls::cs::Int32 cs_arg4 = lvUpAddParam[2 + num30]; SetMeterParam(2 + num30, cs_arg1, cs_arg2, 2147483647 /* Int32.MaxValue */, cs_arg4); }
}
} else {
return Init2();
}
}
}
}
}
}
}
}
return true;

}
}

// M:form.SubForm.Init2
bool SubForm::Init2() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Init2",game);
{
data::TrainingData::ensure_initialized();
main::AppData::ensure_initialized();

if (type_ == 45) {
for (pls::cs::Int32 i = 0; i < data::TrainingData::TRA_PLAYER().length(); ++i) {
if (data::TrainingData::TRA_PLAYER()[i] != -1) {
continue;
}
bool flag = false;
for (pls::cs::Int32 j = 0; j < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(udat_)->memberPDataist_));}); ++j) {
pls::cs::Ref<data::PlayerData> playerData = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(udat_)->memberPDataist_), j);}));
if ([&]() -> bool { auto cs_left = data::TrainingData::TRA_PLAYER()[i]; auto cs_right = require(playerData)->id_; return cs_left == cs_right; }()) {
flag = true;
break;
}
}
if (!flag) {
data::TrainingData::TRA_PLAYER()[i] = -1;
} else {

}
}
bool flag2 = false;
for (pls::cs::Int32 k = 0; k < data::TrainingData::TRA_PLAYER().length(); ++k) {
if (data::TrainingData::TRA_PLAYER()[k] != -1) {
continue;
}
for (pls::cs::Int32 l = 0; l < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(udat_)->memberPDataist_));}); ++l) {
pls::cs::Ref<data::PlayerData> playerData2 = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(udat_)->memberPDataist_), l);}));
flag2 = false;
for (pls::cs::Int32 m = 0; m < data::TrainingData::TRA_PLAYER().length(); ++m) {
if ([&]() -> bool { auto cs_left = require(playerData2)->id_; auto cs_right = data::TrainingData::TRA_PLAYER()[m]; return cs_left == cs_right; }()) {
flag2 = true;
break;
}
}
if (!flag2) {
data::TrainingData::TRA_PLAYER()[k] = require(playerData2)->id_;
break;
}
}
}
} else if (type_ == 46) {
ary1 = kl_java_util::Vector::create();
for (pls::cs::Int32 n = 0; n < require(apdat_)->trainingData_.length(); ++n) {
pls::cs::Ref<data::TrainingData> trainingData = require(apdat_)->trainingData_.get_Item(n);
if (require(trainingData)->state_ == 1) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_AddElement(require(ary1), pls::cs::box(trainingData));});
}
}
if (data::TrainingData::TRA_SELECT_TRA() != -1) {
pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Int32 { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(require(apdat_)->trainingData_.get_Item(data::TrainingData::TRA_SELECT_TRA())); return kl_java_util::Vector_2_IndexOf(require(ary1), cs_arg0); }());});
select_ = num % 5;
page_ = num / 5;
}
} else if (type_ == 47) {
ary1 = kl_java_util::Vector::create();
for (pls::cs::Int32 num2 = 0; num2 < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(udat_)->memberPDataist_));}); ++num2) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ary1; pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(udat_)->memberPDataist_), num2);}); kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0); }());});
}
for (pls::cs::Int32 num3 = 0; num3 < data::TrainingData::TRA_PLAYER().length(); ++num3) {
if (data::TrainingData::TRA_PLAYER()[num3] == -1) {

} else if (value1_ == num3) {

} else {
pls::cs::Ref<data::PlayerData> obj = require(apdat_)->pData_.get_Item(data::TrainingData::TRA_PLAYER()[num3]);
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElement(require(ary1), pls::cs::box(obj));});
}
}
if (data::TrainingData::TRA_PLAYER()[value1_] != -1) {
pls::cs::Ref<data::PlayerData> elem = require(apdat_)->pData_.get_Item(data::TrainingData::TRA_PLAYER()[value1_]);
select_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_IndexOf(require(ary1), pls::cs::box(elem));});
if (select_ == -1) {
select_ = 0;
}
pls::cs::Int32 num4 = 8;
if (scrollValue_ > select_) {
scrollValue_ = select_;
}
if (scrollValue_ + num4 <= select_) {
scrollValue_ = select_ - num4 + 1;
}
}
} else if (type_ == 48 || type_ == 49) {
pls::cs::Int32 num5 = game::GameUtil::Random(data::TrainingData::FARESULT_RATE()[pls::cs::Int32(data::TrainingData::FARESULT_RATE().length()) - 1]);
for (pls::cs::Int32 num6 = 0; num6 < data::TrainingData::FARESULT_RATE().length(); ++num6) {
if (num5 < data::TrainingData::FARESULT_RATE()[num6]) {
data::TrainingData::fa_result() = num6;
break;
}
}
pls::cs::Ref<data::TrainingData> trainingData2 = require(apdat_)->trainingData_.get_Item(data::TrainingData::TRA_SELECT_TRA());
for (pls::cs::Int32 num7 = 0; num7 < data::TrainingData::TRA_PLAYER().length(); ++num7) {
if (data::TrainingData::TRA_PLAYER()[num7] == -1) {

} else {
pls::cs::Ref<data::PlayerData> playerData3 = require(apdat_)->pData_.get_Item(data::TrainingData::TRA_PLAYER()[num7]);
for (pls::cs::Int32 num8 = 0; num8 < require(trainingData2)->eff_.length(); ++num8) {
{ auto cs_target = data::TrainingData::TRA_ADD()[num7]; auto cs_index = num8; auto cs_value = ([&]() -> pls::cs::Int32 { pls::cs::Int32 cs_arg0 = require(playerData3)->paramPhysicalMax_[1]; pls::cs::Int32 cs_arg3 = require(trainingData2)->eff_[num8][0]; pls::cs::Int32 cs_arg4 = require(trainingData2)->eff_[num8][1]; return game::GameUtil::RateConvert(cs_arg0, 200, 700, cs_arg3, cs_arg4, true); }());cs_target.set_Item(cs_index,cs_value);}
}
require(playerData3)->UpdatePhysicalParam();
{ IntArray cs_arg0 = data::TrainingData::TRA_ADD()[num7]; IntArray cs_arg1 = data::TrainingData::TRA_UPPARAM()[num7]; require(playerData3)->SetTrainingAddParam(cs_arg0, cs_arg1); }
for (pls::cs::Int32 num9 = 0; num9 < require(playerData3)->paramPhysical_.length(); ++num9) {
data::TrainingData::TRA_UPPARAM_DISP()[num7][num9] = ([&]() -> pls::cs::Int32 { auto cs_left = data::TrainingData::TRA_UPPARAM()[num7][num9]; auto cs_right = require(playerData3)->paramPhysical_[num9]; return cs_left - cs_right; }());
}
}
}
} else if (type_ == 50) {
pls::cs::Ref<data::SupervisorData> supervisorData = require(apdat_)->svisorData_.get_Item(require(udat_)->selectSupervisorId_);
require(udat_)->SetPlayerParam(require(supervisorData)->paramPhysical_, require(supervisorData)->paramPhysical_);
select_ = require(udat_)->selectTrainingPolicy_;
} else if (type_ == 51) {
ary1 = kl_java_util::Vector::create();
for (pls::cs::Int32 num10 = 0; num10 < require(apdat_)->svisorData_.length(); ++num10) {
if (require(require(apdat_)->svisorData_.get_Item(num10))->state_ == 1) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(require(apdat_)->svisorData_.get_Item(num10)); kl_java_util::Vector_2_AddElement(require(ary1), cs_arg0); }());});
}
}
pls::cs::Ref<data::SupervisorData> supervisorData2 = pls::cs::unbox<pls::cs::Ref<data::SupervisorData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_FirstElement(require(ary1));}));
require(udat_)->SetPlayerParam(require(supervisorData2)->paramPhysical_, require(supervisorData2)->paramPhysical_);
} else if (type_ == 52) {

} else {
if (type_ == 53) {
ary1 = kl_java_util::Vector::create();
for (pls::cs::Int32 num11 = 0; num11 < require(apdat_)->tradeData_.length(); ++num11) {
pls::cs::Ref<data::TradeData> tradeData = require(apdat_)->tradeData_.get_Item(num11);
if (require(tradeData)->state_ == 1) {
pls::cs::Ref<data::PlayerData> elem2 = require(apdat_)->pData_.get_Item(require(tradeData)->playerDataId_);
pls::cs::Int32 num12 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_IndexOf(require(require(udat_)->memberPDataist_), pls::cs::box(elem2));});
if (num12 != -1) {
require(tradeData)->ChangeState(2);
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_AddElement(require(ary1), pls::cs::box(tradeData));});
}
}
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}) == 0) {
require(apdat_)->ExecEvent(124, pls::cs::String{}, IntArray{});
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 54) {

} else {
if (type_ == 55) {
pls::cs::Ref<data::TradeData> tradeData2 = tradeData_;
require(udat_)->SetNegotiateResult(require(tradeData2)->feelPt_, require(tradeData2)->difficult_);
require(apdat_)->PlayBgm(4);
} else if (type_ == 56) {

} else if (type_ == 57) {

} else {
if (type_ == 58) {
pls::cs::Int32 init2MatchJoin = require(udat_)->GetMatchInfoJoin();
if (init2MatchJoin == 0) {
pls::cs::Ref<data::LeagueData> leagueData = require(apdat_)->leagueData_.get_Item(require(udat_)->selectLeagueId_);
require(apdat_)->ExecEvent(18, require(leagueData)->name_, IntArray{});
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
} else if (init2MatchJoin == 1) {
pls::cs::Ref<data::QuestMatchData> questMatchData = require(apdat_)->qmData_.get_Item(require(udat_)->selectQmId_);
require(apdat_)->ExecEvent(19, require(questMatchData)->name_, IntArray{});
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
pls::cs::Ref<kl_java_util::Vector> vector = kl_java_util::Vector::create();
pls::cs::Ref<kl_java_util::Vector> vector2 = kl_java_util::Vector::create();
for (pls::cs::Int32 num13 = 0; num13 < require(apdat_)->tData_.length(); ++num13) {
if (num13 == 0) {

} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(require(apdat_)->tData_.get_Item(num13)); kl_java_util::Vector_2_AddElement(require(vector), cs_arg0); }());});
}
}
for (pls::cs::Int32 num14 = 0; num14 < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(vector));}) - 1; ++num14) {
for (pls::cs::Int32 num15 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(vector));}) - 1; num15 > num14; --num15) {
pls::cs::Ref<data::TeamData> teamData = pls::cs::unbox<pls::cs::Ref<data::TeamData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(vector), num14);}));
pls::cs::Ref<data::TeamData> teamData2 = pls::cs::unbox<pls::cs::Ref<data::TeamData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(vector), num15);}));
if (require(teamData2)->warPotential_ > require(teamData)->warPotential_) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_SetElementAt(require(vector), pls::cs::box(teamData2), num14);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_SetElementAt(require(vector), pls::cs::box(teamData), num15);});
}
}
}
IntArray2 array = IntArray2::from({IntArray::from({-20, 5}), IntArray::from({-120, 20}), IntArray::from({0, 200})});
pls::cs::Int32 warPotential_ = require(require(apdat_)->tData_.get_Item(0))->warPotential_;
for (pls::cs::Int32 num16 = 0; num16 < array.length(); ++num16) {
for (pls::cs::Int32 num17 = 0; num17 < require(apdat_)->qmData_.length(); ++num17) {
pls::cs::Ref<data::QuestMatchData> questMatchData2 = require(apdat_)->qmData_.get_Item(num17);
if (require(questMatchData2)->matchLeague_ != num16) {
continue;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(vector2));}) > 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveAllElements(require(vector2));});
}
for (pls::cs::Int32 num18 = 0; num18 < require(apdat_)->tData_.length(); ++num18) {
if (num18 == 0) {

} else {
pls::cs::Ref<data::TeamData> teamData3 = require(apdat_)->tData_.get_Item(num18);
if (([&]() -> bool { auto cs_left = require(teamData3)->warPotential_; auto cs_right = warPotential_ + array[num16][0]; return cs_left >= cs_right; }()) && ([&]() -> bool { auto cs_left = require(teamData3)->warPotential_; auto cs_right = warPotential_ + array[num16][1]; return cs_left <= cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_AddElement(require(vector2), pls::cs::box(teamData3));});
}
}
}
for (pls::cs::Int32 num19 = 0; num19 < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(vector2));}) - 1; ++num19) {
for (pls::cs::Int32 num20 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(vector2));}) - 1; num20 > num16; --num20) {
pls::cs::Ref<data::TeamData> teamData4 = pls::cs::unbox<pls::cs::Ref<data::TeamData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(vector2), num19);}));
pls::cs::Ref<data::TeamData> teamData5 = pls::cs::unbox<pls::cs::Ref<data::TeamData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(vector2), num20);}));
if (require(teamData5)->warPotential_ > require(teamData4)->warPotential_) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_SetElementAt(require(vector2), pls::cs::box(teamData5), num19);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_SetElementAt(require(vector2), pls::cs::box(teamData4), num20);});
}
}
}
if (num16 == 0 && require(questMatchData2)->trophy_ == 0) {
{ auto cs_target = questMatchData2; auto cs_value = IntArray::make(1); require(cs_target)->matchEnemy_ = cs_value; }
require(questMatchData2)->matchEnemy_[0] = 1;
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(vector2));}) == 0) {
{ auto cs_target = questMatchData2; auto cs_value = IntArray::make(1); require(cs_target)->matchEnemy_ = cs_value; }
pls::cs::Int32 num21 = -1;
for (pls::cs::Int32 num22 = 0; num22 < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(vector));}); ++num22) {
pls::cs::Ref<data::TeamData> teamData6 = pls::cs::unbox<pls::cs::Ref<data::TeamData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(vector), num22);}));
if (require(teamData6)->warPotential_ < warPotential_) {
num21 = require(teamData6)->id_;
break;
}
}
if (num21 != -1) {
require(questMatchData2)->matchEnemy_[0] = num21;
} else {
require(questMatchData2)->matchEnemy_[0] = 1;
}
} else {
{ auto cs_target = questMatchData2; auto cs_value = IntArray::make(1); require(cs_target)->matchEnemy_ = cs_value; }
{ auto cs_target = require(questMatchData2)->matchEnemy_; auto cs_index = 0; auto cs_value = require((pls::cs::unbox<pls::cs::Ref<data::TeamData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { pls::cs::Int32 cs_arg0 = game::GameUtil::Random(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(vector2));})); return kl_java_util::Vector_2_ElementAt(require(vector2), cs_arg0); }());}))))->id_;cs_target.set_Item(cs_index,cs_value);}
}
}
}
ary1 = kl_java_util::Vector::create();
for (pls::cs::Int32 num23 = 0; num23 < require(apdat_)->qmData_.length(); ++num23) {
pls::cs::Ref<data::QuestMatchData> questMatchData3 = require(apdat_)->qmData_.get_Item(num23);
if (require(questMatchData3)->state_ == 0) {

} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_AddElement(require(ary1), pls::cs::box(questMatchData3));});
}
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}) == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::MakeDialog(literal(u"カップ戦が存在しません")));});
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 59) {
ary1 = kl_java_util::Vector::create();
for (pls::cs::Int32 num24 = 0; num24 < require(qmData_)->matchEnemy_.length(); ++num24) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(require(apdat_)->tData_.get_Item(require(qmData_)->matchEnemy_[num24])); kl_java_util::Vector_2_AddElement(require(ary1), cs_arg0); }());});
}
pls::cs::Ref<data::QuestMatchData> questMatchData4 = qmData_;
textLay_ = kairo::unity::ui::TextLayout::create(false, true);
if (SubForm::En()) {
require(textLay_)->SetAnchor(2);
}
require(textLay_)->SetSize(194.0f, 32.0f);
require(textLay_)->SetColor(SubForm::SC_WINDOW_BLACK());
require(textLay_)->SetLineSpace(5);
require(textLay_)->SetText(require(questMatchData4)->explain_);
require(textLay_)->Flush();
} else if (type_ == 65) {
pls::cs::Ref<data::TenantData> tenantData = require(apdat_)->tenantData_.get_Item(tenantDataId_);
if (!pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(tenantData)->flag_, 2);})) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = main::AppData::softLabels_()[0]; pls::cs::String cs_arg1 = main::AppData::softLabels_()[2]; this->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{}); }());});
}
} else if (type_ == 66) {

} else {
if (type_ == 67) {
pls::cs::Ref<data::TeamData> teamData7 = require(apdat_)->tData_.get_Item(0);
pls::cs::Int32 num25 = 0;
for (pls::cs::Int32 num26 = 0; num26 < require(teamData7)->warP_paramPhysical_.length(); ++num26) {
num25 = 0;
if (num26 == 4) {
pls::cs::Ref<data::PlayerData> playerData4 = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(udat_)->memberPDataist_), 0);}));
require(teamData7)->warP_paramPhysical_[num26] = require(playerData4)->paramPhysical_[num26];
continue;
}
for (pls::cs::Int32 num27 = 1; num27 < 11; ++num27) {
pls::cs::Ref<data::PlayerData> playerData5 = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(udat_)->memberPDataist_), num27);}));
num25 += require(playerData5)->paramPhysical_[num26];
}
require(teamData7)->warP_paramPhysical_[num26] = num25 / 10;
}
require(udat_)->SetPlayerParam(require(teamData7)->warP_paramPhysical_, require(teamData7)->warP_paramPhysical_);
sponsor_income_ = require(require(apdat_)->frmSoccer_)->GetSponsorPrice();
sponsor_num_ = require(require(apdat_)->frmSoccer_)->GetSponsorNum();
} else if (type_ == 68) {
SetTicketWindowBtmMsg(literal(u"左右ｷｰで設定します。"));
value1_ = require(udat_)->ticketPrice_;
} else if (type_ == 69) {

} else if (type_ == 71) {

} else if (type_ == 72) {

} else if (type_ == 74) {

} else if (type_ == 77) {
ary1 = kl_java_util::Vector::create();
for (pls::cs::Int32 num28 = 0; num28 < require(apdat_)->fanBonus_.length(); ++num28) {
if (!pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(require(apdat_)->fanBonus_.get_Item(num28))->flag_, 4);})) {

} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(require(apdat_)->fanBonus_.get_Item(num28)); kl_java_util::Vector_2_AddElement(require(ary1), cs_arg0); }());});
}
}
}
}
}
}
}
return true;

}
}

// M:form.SubForm.Draw(kairo.unity.ui.Graphics)
void SubForm::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Draw(kairo.unity.ui.Graphics)",game);
{
kl_cfg::Config::ensure_initialized();

pls::cs::Int32 num = x_;
pls::cs::Int32 num2 = y_;
if (require(view_)->GetGameWidth() > 240 || require(view_)->GetGameHeight() > 240) {
pls::cs::Ref<pls::kairo::FormBase> form = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->GetForm(0);});
pls::cs::Int32 id = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(form)->GetId();});
if ((id == 9) && (IsMenu())) {

} else if ((id == 2) && (IsMenu())) {

} else {
num += (require(view_)->GetGameWidth() - 240) / 2;
num2 += (require(view_)->GetGameHeight() - 240) / 2;
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetOrigin(num, num2);});
pls::cs::run_finally([&]() {try {
_draw(g);
} catch(const pls::cs::Exception& cs_caught_122) {auto ex=pls::cs::capture_exception(cs_caught_122);
{
if (kl_cfg::Config::DEBUG_CMD()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Log::Info(([&]() { auto cs_left = pls::cs::String::concat(pls::cs::String::concat(literal(u"■SubForm.java draw()でエラー発生 type_ = "), integer_string(type_)), literal(u", toString() = ")); auto cs_right = this->ToString(); return pls::cs::String::concat(cs_left,cs_right); }()), pls::cs::Ref<pls::cs::ExceptionObject>{});});
}
pls::cs::throw_exception(ex);
}}}, [&]() {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetOrigin(0, 0);});
});

}
}

// M:form.SubForm._draw(kairo.unity.ui.Graphics)
void SubForm::_draw(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm._draw(kairo.unity.ui.Graphics)",game);
{
kl_cfg::Config::ensure_initialized();
SoccerForm::ensure_initialized();
data::PlayerData::ensure_initialized();
game::UserData::ensure_initialized();

err_method = literal(u"_draw()");
if (untilActiveHide_ || wait_ > 0) {
return;
}
pls::cs::Int32 num24;
pls::cs::Int32 num;
pls::cs::Int32 num2;
pls::cs::Int32 num3;
num3 = 0;
num2 = num3;
num = num2;
num24 = num;
pls::cs::Ref<pls::kairo::Font> font = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{});});
bool flag = false;
pls::cs::Ref<pls::kairo::FormBase> topForm = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->GetTopForm();});
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(topForm)->GetId();}) == 4) {

}
if (IsDrawWindow()) {

} else {
if (!IsMenu() && !flag && !require(apdat_)->IsTopForm(this)) {
return;
}
if (IsMenu() && !require(apdat_)->IsTopForm(this)) {
pls::cs::Ref<pls::kairo::FormBase> topForm2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->GetTopForm();});
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(topForm2)->GetId();}) == 4 && !require((pls::cs::unbox<pls::cs::Ref<SubForm>>(pls::cs::box(topForm2))))->IsMenu()) {
return;
}
}
}
if (type_ == 1 || type_ == 16 || type_ == 21) {
err_line = 205;
require(apdat_)->DrawWindow(g, 210, 110, 0, literal(u"メッセージ"));
require(apdat_)->DrawBox(g, 26, 90, 213, 148);
if (!is_null(text_)) {
kairo::unity::ui::TextLayout::Draw(g, text_, 26.0f, 115.0f, 187.0f, 32.0f, SubForm::SC_WINDOW_BLACK(), 6, 34);
}
err_line = 206;
if (type_ != 16 || (saveState_ == 2 && ([&]() { auto cs_left = pls::cs::box(selectButtons_); auto cs_right = pls::cs::box(StringArray{}); return cs_left != cs_right; }()) && !is_null(font))) {
pls::cs::Single num4 = 0.0f;
err_line = 2061;
for (pls::cs::Int32 i = 0; i < selectButtons_.length(); ++i) {
if (is_null(selectButtons_[i])) {
continue;
}
pls::cs::Single num5 = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::Single(([&]() -> pls::cs::Single { pls::cs::String cs_arg0 = selectButtons_[i]; return require(font)->StringWidthF(cs_arg0); }()));});
if (num4 < num5) {
num4 = num5;
}
}
num4 += 2.0f;
err_line = 2062;
pls::cs::Int32 num6 = 72;
pls::cs::Int32 num7 = 200;
pls::cs::Int32 num8 = 200;
for (pls::cs::Int32 j = 0; j < selectButtons_.length(); ++j) {
if (is_null(selectButtons_[j])) {
continue;
}
pls::cs::Int32 num9 = 120 - (pls::cs::Int32(selectButtons_.length()) - 1) * num6 / 2 + j * num6;
if (j == select_) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_SELECT());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(pls::cs::Single(num9) - num4 / 2.0f - 5.0f, 164.0f, num4 + 10.0f, 17.0f);});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = selectButtons_[j]; require(g)->DrawString(cs_arg0, num9, 167.0f, 2); }());});
surface::GameView::AddTouch(g, 3, pls::cs::to_int32((pls::cs::Single(num9) - num4 / 2.0f - 5.0f - pls::cs::Single((num7 / 2)))), 164 - num8 / 2, pls::cs::to_int32((num4 + 10.0f + pls::cs::Single(num7))), 17 + num8, 0x20000 | j);
}
}
err_line = 207;
} else {
if (type_ == 2) {

} else if (type_ == 3) {
DrawMenu_btmInfo(g);
DrawMenu(g, 0);
surface::GameView::AddTouch(4, 22, kairo::unity::surface::TouchOption::CreateInt(2));
} else if (type_ == 4) {
DrawMenu(g, 0);
surface::GameView::AddTouch(4, 22, kairo::unity::surface::TouchOption::CreateInt(2));
} else if (type_ == 8) {
DrawMenu(g, 1);
surface::GameView::AddTouch(4, 22, kairo::unity::surface::TouchOption::CreateInt(2));
} else if (type_ == 5) {
DrawMenu(g, 1);
surface::GameView::AddTouch(4, 22, kairo::unity::surface::TouchOption::CreateInt(2));
} else if (type_ == 7) {
DrawMenu(g, 1);
surface::GameView::AddTouch(4, 22, kairo::unity::surface::TouchOption::CreateInt(2));
} else if (type_ == 6) {
DrawMenu(g, 1);
surface::GameView::AddTouch(4, 22, kairo::unity::surface::TouchOption::CreateInt(2));
} else if (type_ == 9) {
DrawMenu(g, 1);
surface::GameView::AddTouch(4, 22, kairo::unity::surface::TouchOption::CreateInt(2));
} else if (type_ == 10) {
DrawMenu(g, 1);
surface::GameView::AddTouch(4, 22, kairo::unity::surface::TouchOption::CreateInt(2));
} else if (type_ == 11) {
DrawMenu(g, 1);
surface::GameView::AddTouch(4, 22, kairo::unity::surface::TouchOption::CreateInt(2));
} else if (type_ == 12) {
DrawMenu(g, 1);
surface::GameView::AddTouch(4, 22, kairo::unity::surface::TouchOption::CreateInt(2));
} else if (type_ == 22) {
DrawMenu(g, 1);
surface::GameView::AddTouch(4, 22, kairo::unity::surface::TouchOption::CreateInt(2));
} else if (type_ == 0) {
require(apdat_)->DrawWindow(g, 202, 122, 0, literal(u"会話ウィンドウ"));
require(apdat_)->DrawBox(g, 27, 82, 214, 159);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
require(textLay_)->Draw(g, 37.0f, 100.0f);
if (humanCharaType_ == 0) {
SubForm::Draw_chara(g, 172, 0, 1, frame_, 193, 189);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"姫川チア子"), 84.0f, 174.0f);});
} else if (humanCharaType_ == 1) {
if (humanCharaIndex_ != -1) {
pls::cs::Ref<data::PlayerData> playerData = require(apdat_)->pData_.get_Item(humanCharaIndex_);
require(udat_)->SetDispPlayerData(0, require(udat_)->selectUniform_, require(playerData)->faceImg_, 0, 2);
require(udat_)->DrawDispPlayer(g, 193, 189);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(pls::cs::String::concat(require(playerData)->name_, require(playerData)->name2_), 84.0f, 174.0f);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(pls::cs::String::concat(pls::cs::String::concat(require(playerData)->name_, literal(u" ")), require(playerData)->name2_), 84.0f, 174.0f);});
}
}
} else if (humanCharaType_ == 2) {
if (humanCharaIndex_ != -1) {
pls::cs::Ref<data::SponsorData> sponsorData = require(apdat_)->sponsorData_.get_Item(humanCharaIndex_);
data::SponsorData::Draw_sponsorChara(g, require(sponsorData)->charaIndex_, 193, 189);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = ([&]() { auto cs_left = require(sponsorData)->name_; auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }()); require(g)->DrawString(cs_arg0, 84.0f, 174.0f); }());});
}
} else if (humanCharaType_ == 3) {
if (humanCharaIndex_ != -1) {
pls::cs::Ref<data::SupervisorData> supervisorData = require(apdat_)->svisorData_.get_Item(humanCharaIndex_);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::cs::String text = MyFormBase::LT(require(supervisorData)->name_);
pls::cs::String text2 = MyFormBase::LT(require(supervisorData)->name2_);
pls::cs::String text3 = MyFormBase::LT(literal(u"監督"));
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(pls::cs::String::concat(pls::cs::String::concat(text, text2), text3), 60.0f, 174.0f);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(text, literal(u" ")), text2), text3), 60.0f, 174.0f);});
}
require(udat_)->SetDispPlayerData(0, require(supervisorData)->bodyImg_, require(supervisorData)->headImg_, 0, 2);
require(udat_)->DrawDispPlayer(g, 193, 189);
}
} else if (humanCharaType_ == 4 && humanCharaIndex_ != -1) {
data::SponsorData::Draw_sponsorChara(g, require(udat_)->TALK_SCHARA_IMGINDEX[humanCharaIndex_], 193, 189);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = ([&]() { auto cs_left = require(udat_)->TALK_SCHARA_NAME[humanCharaIndex_]; auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }()); require(g)->DrawString(cs_arg0, 84.0f, 174.0f); }());});
}
surface::GameView::AddTouch(2);
} else if (type_ == 13) {
pls::cs::Int32 num10 = eventIds_[page_];
require(apdat_)->DrawWindow(g, 222, 170, 0, literal(u"イベント"));
require(apdat_)->DrawBox(g, 15, 139, 224, 202);
num = 67;
if (num10 == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resEvent_)->img.get_Item(0); require(g)->DrawImage(cs_arg0, 30.0f, num); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resEvent_)->img.get_Item(1); require(g)->DrawImage(cs_arg0, 30.0f, num); }());});
}
num = 93;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resEvent_)->img.get_Item(2); require(g)->DrawImage(cs_arg0, 30.0f, num); }());});
num = 159;
pls::cs::Int32 num11 = game::GameUtil::RateConvert(frame_, 5, 60, 0, 48, true);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(0.0f, num, 240.0f, num11, true);});
if (MyFormBase::Jp()) {
kairo::unity::ui::TextLayout::Draw(g, eventTexts_[page_], 28.0f, num, 182.0f, 49.0f, SubForm::SC_WINDOW_BLACK(), 6, 2);
} else {
kairo::unity::ui::TextLayout::Draw(g, eventTexts_[page_], 28.0f, num, 182.0f, 46.0f, SubForm::SC_WINDOW_BLACK(), 6, 34);
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
pls::cs::Int32 num12 = 30;
pls::cs::Int32 num13 = 16;
pls::cs::Int32 num14 = 6;
pls::cs::Int32 num15 = num13 + num14 * 3 + num12 + num13;
pls::cs::Int32 num16 = 0;
pls::cs::Int32 num17 = 0;
pls::cs::Single num18 = game::GameUtil::SetVStop(-6.0f, num12 / 2);
pls::cs::Single num19 = game::GameUtil::SetAStop(-6.0f, num12 / 2);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(30.0f, 67.0f, 180.0f, 58.0f, true);});
pls::cs::Int32 num20 = frame_ % num15;
for (pls::cs::Int32 k = 0; k < 4; ++k) {
num2 = 56 + 42 * k;
num16 = 129;
if (num10 == 0) {
pls::cs::Int32 num21 = num20 - (num13 + num14 * k);
if (num21 >= 0 && num21 < num12) {
num17 = 1;
num16 += pls::cs::to_int32((num18 * pls::cs::Single(num21) + num19 * pls::cs::Single(num21) * pls::cs::Single((num21 + 1)) / 2.0f));
num16 = main::AppData::ClampMax(num16, 129);
} else {
num17 = 0;
}
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resEvent_)->seb.get_Item(2); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resEvent_)->img.get_Item(5); require(apdat_)->DrawSeb(g, num2, num16, cs_arg3, cs_arg4, num17); }
} else {
num16 = 125;
num17 = frame_ % 44 / 22;
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resEvent_)->seb.get_Item(3); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resEvent_)->img.get_Item(6); require(apdat_)->DrawSeb(g, num2 + num17, num16, cs_arg3, cs_arg4, num17); }
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
num = 67;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(0.0f, num, 240.0f, 79.0f, true);});
pls::cs::Int32 num22 = frame_ / 2;
if (num10 == 0) {
if (num22 > pls::cs::Int32(EVENT_HAPPY_ANIME_OY.length()) - 1) {
num22 = pls::cs::Int32(EVENT_HAPPY_ANIME_OY.length()) - 1;
}
num3 = EVENT_HAPPY_ANIME_OY[num22] + 148;
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resEvent_)->seb.get_Item(0); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resEvent_)->img.get_Item(3); require(apdat_)->DrawSeb(g, 95, num3, cs_arg3, cs_arg4, 0); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resEvent_)->seb.get_Item(0); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resEvent_)->img.get_Item(3); require(apdat_)->DrawSeb(g, 143, num3, cs_arg3, cs_arg4, 1); }
} else if (num10 == 1) {
if (num22 > pls::cs::Int32(EVENT_SAD_ANIME_OY.length()) - 1) {
num22 = pls::cs::Int32(EVENT_SAD_ANIME_OY.length()) - 1;
}
num3 = EVENT_SAD_ANIME_OY[num22] + 148 - 3;
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resEvent_)->seb.get_Item(1); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resEvent_)->img.get_Item(4); require(apdat_)->DrawSeb(g, 95, num3, cs_arg3, cs_arg4, 0); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resEvent_)->seb.get_Item(1); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resEvent_)->img.get_Item(4); require(apdat_)->DrawSeb(g, 142, num3, cs_arg3, cs_arg4, 1); }
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
surface::GameView::AddTouch(2);
} else if (type_ == 14) {
bool flag2 = MyFormBase::Jp();
if (kairo::unity::util::Language::GetLanguageCode() != literal(u"ja-JP") && kairo::unity::util::Language::GetLanguageCode() != literal(u"en-US") && !pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_starts_with(kairo::unity::util::Language::GetLanguageCode(), literal(u"*"));})) {
flag2 = true;
}
if (flag2) {
DrawConfig_jp(g);
} else if (SubForm::En()) {
DrawConfig_en(g);
}
} else if (type_ == 15) {
pls::cs::Int32 num23 = 0;
if (!MyFormBase::Jp()) {
num23 = 40;
}
if (MyFormBase::Jp()) {
require(apdat_)->DrawWindow(g, 180 + num23, 166, 0, pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(literal(u"遊び方 "), integer_string((page_ + 1))), literal(u"/")), integer_string(require(apdat_)->manualTexts_.length())));
} else if (SubForm::En()) {
{ auto cs_receiver = apdat_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg1 = 180 + num23; auto cs_left_193 = pls::cs::String::concat(([&]() { auto cs_left_193 = pls::cs::String::concat(MyFormBase::LT(literal(u"遊び方")), literal(u" ")); auto cs_right_193 = integer_string((page_ + 1)); return pls::cs::String::concat(cs_left_193,cs_right_193); }()), literal(u"/")); auto cs_right_193 = integer_string(require(apdat_)->manualTexts_.length());
pls::cs::String cs_arg4 = pls::cs::String::concat(cs_left_193,cs_right_193); require(cs_receiver)->DrawWindow(cs_arg0, cs_arg1, 166, 0, cs_arg4); }
}
{ pls::cs::Int32 cs_arg2 = 44 - frame_ % 20 / 5 - num23 / 2; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); surface::GameView::AddTouchSeb(g, 1, cs_arg2, 56, cs_arg4, 0, 16);}
{ pls::cs::Int32 cs_arg2 = 193 + frame_ % 20 / 5 + num23 / 2; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); surface::GameView::AddTouchSeb(g, 1, cs_arg2, 56, cs_arg4, 1, 18);}
require(apdat_)->DrawBox(g, 37 - num23 / 2, 60, 203 + num23 / 2, 197);
if (page_ == pls::cs::Int32(require(apdat_)->manualTexts_.length()) - 1) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(30, 30, 30);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"このゲームについて"), 120.0f, 80.0f, 2);});
if (!kl_cfg::Config::TRIAL_VERSION()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"サッカークラブ物語"), 120.0f, 166.0f, 2);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = pls::cs::String::concat(MyFormBase::LT(literal(u"サッカークラブ物語")), literal(u"Lite")); require(g)->DrawString(cs_arg0, 120.0f, 166.0f, 2); }());});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"for カイロパーク"), 120.0f, 182.0f, 2);});
num24 = 43;
num = 101;
pls::cs::Int32 num25 = 154;
pls::cs::Int32 num26 = 56;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(162); require(g)->DrawImage(cs_arg0, num24, num, 13, 18, num25, num26); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(43, 116, 190);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num24, num, num25 - 1, num26 - 1);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(num24, num, num25, num26, true);});
pls::cs::Int32 num27 = SubForm::anime_cnt() % 56;
pls::cs::Ref<data::PlayerData> playerData2 = require(apdat_)->pData_.get_Item(111);
pls::cs::Ref<data::PlayerData> playerData3 = require(apdat_)->pData_.get_Item(112);
pls::cs::Int32 num28 = 0;
pls::cs::Int32 num29 = 0;
if (num27 < 6) {
num28 = 1;
num29 = 1;
} else {
num28 = 0;
num29 = 0;
}
require(udat_)->SetDispPlayerData(num28, 2, require(playerData3)->faceImg_, num29, 1);
require(udat_)->DrawDispPlayer(g, 73, 146);
if (num27 >= 28 && num27 < 34) {
num28 = 1;
num29 = 1;
} else {
num28 = 0;
num29 = 0;
}
require(udat_)->SetDispPlayerData(num28, 1, require(playerData2)->faceImg_, num29, 2);
require(udat_)->DrawDispPlayer(g, 168, 146);
pls::cs::Int32 x = game::GameUtil::RateConvert(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JMath::AbsInt(num27 - 28);}), 28, 0, 80, 161, true);
num = 146;
pls::cs::Int32 num30 = num;
if (SubForm::anime_mode() == 1) {
pls::cs::Single num31 = game::GameUtil::SetVStop(SubForm::anime_ballY(), 14);
pls::cs::Single num32 = game::GameUtil::SetAStop(SubForm::anime_ballY(), 14);
pls::cs::Int32 num33 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JMath::AbsInt(num27 - 28);});
num30 = pls::cs::to_int32((num31 * pls::cs::Single(num33) + num32 * pls::cs::Single(num33) * pls::cs::Single((num33 + 1)) / 2.0f)) + num;
if (num30 > num) {
num30 = num;
}
}
pls::cs::Int32 num34 = num27 % 28;
num29 = num34 % 12 / 3;
if (num27 < 28) {
num29 = 3 - num29;
}
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(0); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(2); require(apdat_)->DrawSeb(g, x, num30, cs_arg3, cs_arg4, num29); }
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
} else {
require(textLay_)->Draw(g, 48 - num23 / 2, 80.0f);
}
surface::GameView::AddTouchTouchOption(2, kairo::unity::surface::TouchOption::CreateInt(2));
} else if (type_ == 17) {
if (MyFormBase::Jp()) {
{ auto cs_receiver = apdat_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; auto cs_left_194 = pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(literal(u"開幕ｷｯｸｵﾌ通信 "), integer_string((page_ + 1))), literal(u"/")), integer_string(pagesNum_)); auto cs_right_194 = pls::cs::String(u"");
pls::cs::String cs_arg4 = pls::cs::String::concat(cs_left_194,cs_right_194); require(cs_receiver)->DrawWindow(cs_arg0, 194, 186, 0, cs_arg4); }
} else if (SubForm::En()) {
{ auto cs_receiver = apdat_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; auto cs_left_195 = ([&]() { auto cs_left_195 = pls::cs::String::concat(([&]() { auto cs_left_195 = pls::cs::String::concat(MyFormBase::LT(literal(u"開幕ｷｯｸｵﾌ通信 ")), literal(u" ")); auto cs_right_195 = integer_string((page_ + 1)); return pls::cs::String::concat(cs_left_195,cs_right_195); }()), literal(u"/")); auto cs_right_195 = integer_string(pagesNum_); return pls::cs::String::concat(cs_left_195,cs_right_195); }()); auto cs_right_195 = pls::cs::String(u"");
pls::cs::String cs_arg4 = pls::cs::String::concat(cs_left_195,cs_right_195); require(cs_receiver)->DrawWindow(cs_arg0, 194, 186, 0, cs_arg4); }
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(133); require(g)->DrawImage(cs_arg0, 29.0f, 62.0f); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(name_, 120.0f, 69.0f, 2);});
if (pagesNum_ > 1) {
{ pls::cs::Int32 cs_arg2 = 44 - frame_ % 20 / 5; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); surface::GameView::AddTouchSeb(g, 1, cs_arg2, 46, cs_arg4, 0, 16);}
{ pls::cs::Int32 cs_arg2 = 193 + frame_ % 20 / 5; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); surface::GameView::AddTouchSeb(g, 1, cs_arg2, 46, cs_arg4, 1, 18);}
}
require(apdat_)->DrawBox(g, 31, 82, 210, 209);
require(textLay_)->Draw(g, 41.0f, 106.0f, page_ * 18 * 6);
surface::GameView::AddTouchTouchOption(2, kairo::unity::surface::TouchOption::CreateInt(2));
} else {
if (type_ == 18) {

} else if (type_ == 19) {
Draw_clearPoint(g);
surface::GameView::AddTouchTouchOption(2, kairo::unity::surface::TouchOption::CreateInt(2));
} else {
if (type_ == 20) {

} else if (type_ == 23) {
pls::cs::Int32 num35 = game::GameUtil::RateConvert(frame_, 1, 3, 6, 232, true);
pls::cs::Int32 num36 = require(textLay_)->GetHeight() + 7 + 8;
if (num36 < 59) {
num36 = 59;
}
num24 = 4;
num = 120 - num36 / 2;
num24 = 120 - num35 / 2;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(43, 37, 32);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num24, num, num35 - 1, num36 - 1);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(num24, num + num36 - 2, num24 + num35 - 1, num + num36 - 2, 1.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(199, 184, 175);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num24 + 1, num + 1, num35 - 3, num36 - 4);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(163, 150, 141);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num24 + 2, num + 2, num35 - 5, num36 - 6);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(72, 61, 55);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num24 + 3, num + 3, num35 - 6, num36 - 7);});
if (frame_ >= 3) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(241, 241, 241);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_WHITE());});
{ auto cs_receiver = textLay_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Single cs_arg2 = 120 - require(textLay_)->GetHeight() / 2; require(cs_receiver)->Draw(cs_arg0, 120.0f, cs_arg2); }
if (frame_ % 50 < 30) {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(63); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(72); require(apdat_)->DrawSeb(g, 223, 120 + num36 / 2 - 8, cs_arg3, cs_arg4, 0); }
}
}
} else if (type_ == 24 || type_ == 25) {
if (type_ == 24) {
pls::cs::Int32 num37 = game::GameUtil::RateConvert(frame_, 0, SubForm::FADE_TIME_V(), 0, 255, true);
if (num37 > 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetRenderMode(2, num37, 255);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(0.0f, SoccerForm::VIEW_Y(), 240.0f, SoccerForm::VIEW_H());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetRenderMode(0, 255, 0);});
}
} else if (type_ == 25) {
pls::cs::Int32 num38 = game::GameUtil::RateConvert(frame_, 0, SubForm::FADE_TIME_V(), 255, 0, true);
if (num38 > 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetRenderMode(2, num38, 255);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(0.0f, SoccerForm::VIEW_Y(), 240.0f, SoccerForm::VIEW_H());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetRenderMode(0, 255, 0);});
}
}
} else if (type_ == 26) {
if (require(apdat_)->IsTopForm(this)) {
require(udat_)->Draw_edit(g, false);
require(udat_)->Draw_edit2(g, false);
}
} else if (type_ == 27 || type_ == 28 || type_ == 47 || type_ == 31) {
if (type_ == 47) {
require(apdat_)->DrawWindow(g, 230, 200, 0, literal(u"選手選択"));
} else if (type_ == 31) {
require(apdat_)->DrawWindow(g, 230, 200, 0, literal(u"選手解雇"));
} else {
require(apdat_)->DrawWindow(g, 230, 200, 0, literal(u"選手情報"));
}
bool flag3 = false;
num24 = 11;
num = 67;
pls::cs::Int32 num39 = 63;
pls::cs::Int32 num40 = 18;
pls::cs::Int32 num41 = 0;
for (pls::cs::Int32 l = scrollValue_; l < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}); ++l) {
pls::cs::Int32 num42 = l - scrollValue_;
if (num42 >= 8) {
break;
}
flag3 = false;
pls::cs::Ref<data::PlayerData> playerData4 = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), l);}));
pls::cs::Int32 num43 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_IndexOf(require(require(udat_)->memberPDataist_), pls::cs::box(playerData4));});
if (num43 < 11) {
flag3 = true;
}
num2 = num24;
num3 = num + (num40 + num41) * num42;
if (flag3) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 230, 81);}));});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(197, 197, 197);}));});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2, num3, num39, num40);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(180, 221, 210);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num2, num3, num39 - 1, num40 - 1);});
surface::GameView::AddTouch(g, 11, num2, num3, num39, num40, 0x20000 | l, require(kairo::unity::surface::TouchOption::CreateInt(16))->Margin(30, 0, 0, 0));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(212, 255, 243);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2 + 1, num3 + 1, 20.0f, num40 - 2);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(180, 221, 210);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(num2 + 14 + 7, num3, num2 + 14 + 7, num3 + num40 - 1, 1.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (flag3) {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(47); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(51); pls::cs::Int32 cs_arg5 = require(playerData4)->role_; require(apdat_)->DrawSeb(g, num2 + 1, num3 + 3, cs_arg3, cs_arg4, cs_arg5); }
} else {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(47); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(51); require(apdat_)->DrawSeb(g, num2 + 1, num3 + 3, cs_arg3, cs_arg4, 4); }
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
SubForm::SetFontSize(g, 9);
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(playerData4)->name_, num2 + num39 / 2 + 10, num3 + 4, 2);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(playerData4)->name_, num2 + num39 / 2 + 11, num3 + 4, 2);});
}
SubForm::ResetFontSize(g);
if (require(playerData4)->IsNew()) {
SubForm::Draw_newMark(g, num2, num3 + 3, frame_);
}
if (l == select_) {
{ auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(apdat_)->resCom2_)->img; require(cs_receiver)->Draw(g, num2 - 4 + 5, num3 + 9, cs_arg3, -1); }
}
}
pls::cs::Ref<kairo::unity::surface::TouchOption> touchOption = kairo::unity::surface::TouchOption::CreateInt(2);
pls::cs::Ref<kairo::unity::surface::TouchOption> touchOption2 = kairo::unity::surface::TouchOption::CreateInt(2);
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = num24 + num39 / 2; pls::cs::Int32 cs_arg3 = num - 13; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(touchOption)->Margin(30, 30, 60, 5); surface::GameView::AddTouchSeb(cs_arg0, 24, cs_arg2, cs_arg3, cs_arg4, 0, 17, cs_arg7);}
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = num24 + num39 / 2; pls::cs::Int32 cs_arg3 = num + num40 * 7 + 13; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(touchOption2)->Margin(30, 30, 5, 60); surface::GameView::AddTouchSeb(cs_arg0, 24, cs_arg2, cs_arg3, cs_arg4, 1, 19, cs_arg7);}
{ auto cs_receiver = apdat_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg1 = num24 + 56 + 7 + 1 + 2; pls::cs::Int32 cs_arg2 = num; pls::cs::Int32 cs_arg5 = scrollValue_; pls::cs::Int32 cs_arg6 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}) - 1; require(cs_receiver)->DrawVerticalScroll2(cs_arg0, cs_arg1, cs_arg2, 3, 145, cs_arg5, cs_arg6, 8); }
pls::cs::Ref<data::PlayerData> playerData5 = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), select_);}));
flag3 = false;
pls::cs::Int32 num44 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_IndexOf(require(require(udat_)->memberPDataist_), pls::cs::box(playerData5));});
if (num44 < 11) {
flag3 = true;
}
num24 = 81;
num = 47;
require(apdat_)->DrawBox(g, num24, num, num24 + 148, num + 61);
num24 = 89;
num = 44;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(125); require(g)->DrawImage(cs_arg0, num24 + 5, num + 17); }());});
if (require(playerData5)->IsNew()) {
SubForm::Draw_newMark(g, num24 + 6 + 3, num + 8, frame_);
} else if (flag3) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(124); require(g)->DrawImage(cs_arg0, num24 + 6, num + 8); }());});
}
pls::cs::Int32 frame = frame_ % 16 / 4;
require(udat_)->SetDispPlayerData(0, require(udat_)->selectUniform_, require(playerData5)->faceImg_, frame, 1);
require(udat_)->DrawDispPlayer(g, num24 + 22, num + 44);
num2 = num24 + 31;
num3 = num + 46;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(29, 108, 1);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(num2, num3, num2, num3 - 16, 1.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(num2 + 3, num3, num2 + 3, num3 - 16, 1.0f);});
pls::cs::Int32 num45 = game::GameUtil::RateConvert(require(playerData5)->auraPoint_, 0, 10000, 0, 17, true);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(244, 216, 93);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2 + 1, num3 - (num45 - 1), 2.0f, num45);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(60, 42, 16);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2 + 1, num3 - 16, 2.0f, 17 - num45);});
num24 = 138;
num = 65;
pls::cs::String text4 = pls::cs::String::concat(pls::cs::String::concat(require(playerData5)->name_, literal(u" ")), require(playerData5)->name2_);
pls::cs::Int32 num46 = pls::cs::Int32(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(font)->StringWidth(text4);})) + 6;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_SELECT());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num24 - 3, num - 1, num46, 14.0f);});
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = require(view_)->GetGameWidth() / 2 + 18 - 20; pls::cs::Int32 cs_arg3 = require(view_)->GetGameHeight() / 2 - 55 - 10; pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = kairo::unity::surface::TouchOption::CreateInt(2); surface::GameView::AddTouch(cs_arg0, 4, cs_arg2, cs_arg3, 110, 70, 20, cs_arg7);}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(pls::cs::String::concat(pls::cs::String::concat(require(playerData5)->name_, literal(u" ")), require(playerData5)->name2_), num24, num);});
num24 = 142;
num = 79;
if (MyFormBase::Jp()) {
Draw_categoryIcon(g, require(playerData5)->category_, num24, num);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = data::PlayerData::CATEGORY_STR()[require(playerData5)->category_]; require(g)->DrawString(cs_arg0, num24 + 20, num + 2); }());});
} else {
Draw_categoryIcon(g, require(playerData5)->category_, num24 - 4, num);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
SubForm::SetFontSize(g, 10);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = data::PlayerData::CATEGORY_STR()[require(playerData5)->category_]; require(g)->DrawString(cs_arg0, num24 - 4 + 20 - 2, num + 2 + 1); }());});
SubForm::ResetFontSize(g);
}
num2 = 85;
num3 = 96;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(221, 251, 219);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2, num3, 54.0f, 21.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(126); require(g)->DrawImage(cs_arg0, num2 + 10, num3 + 3); }());});
require(apdat_)->DrawNumImageLongIntInt(g, 79, pls::cs::cast_integral<pls::cs::Int64>(require(playerData5)->lv_), num2 + 38, num3 + 1, 0, 2);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(118); require(g)->DrawImage(cs_arg0, num2 + 1, num3 + 14, 1, 0, 52, 5); }());});
pls::cs::Int32 c1min = 0;
pls::cs::Int32 nextLvUpExp = data::PlayerData::GetNextLvUpExp(require(playerData5)->lv_);
pls::cs::Int32 width = game::GameUtil::RateConvert(require(playerData5)->exp_, c1min, nextLvUpExp, 0, 50, true);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(118); require(g)->DrawImage(cs_arg0, num2 + 1 + 1, num3 + 14 + 1, 2, 5, width, 3); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
SubForm::SetFontSize(g, 8);
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"給料"), 146.0f, 101.0f);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"給料"), 141.0f, 104.0f);});
}
SubForm::ResetFontSize(g);
if (MyFormBase::Jp()) {
{ auto cs_receiver = apdat_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(require(playerData5)->GetSallay()); require(cs_receiver)->DrawNumImageComma(cs_arg0, 35, cs_arg2, 212, 102, 0, 0, 4); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(35); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(103); require(apdat_)->DrawSeb(g, 213, 102, cs_arg3, cs_arg4, 17); }
} else {
{ auto cs_receiver = apdat_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(require(playerData5)->GetSallay()); require(cs_receiver)->DrawMoney(cs_arg0, 35, cs_arg2, 223, 102, 0, 0, 4); }
}
num24 = 81;
num = 110;
require(apdat_)->DrawBox(g, num24, num, num24 + 148, num + 104);
num2 = num24 + 11;
num3 = num + 15;
for (pls::cs::Int32 m = 0; m < 4; ++m) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(123); require(g)->DrawImage(cs_arg0, num2 + 31 * m, num3); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::cs::Int32 positionRank = data::PlayerData::GetPositionRank(m, playerData5);
require(apdat_)->DrawPositionStatus(g, m, positionRank, num2 + 31 * m + 4, num3 + 4);
}
num += 36;
num2 = num24 + 11;
for (pls::cs::Int32 n = 0; n < data::PlayerData::PARAM_NAME().length(); ++n) {
num3 = num + 15 * n;
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(74); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(121); require(apdat_)->DrawSeb(g, num2, num3, cs_arg3, cs_arg4, n); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(75); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(122); require(apdat_)->DrawSeb(g, num2 + 16, num3, cs_arg3, cs_arg4, n); }
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(120); require(g)->DrawImage(cs_arg0, num2 + 43, num3, 0, 0, 82, 15); }());});
pls::cs::Int32 phyParamBarW = data::PlayerData::GetPhyParamBarW(require(playerData5)->paramPhysical_[n], 80);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(120); require(g)->DrawImage(cs_arg0, num2 + 43 + 1, num3 + 3, 1, 16 + 10 * n, phyParamBarW, 9); }());});
if (game::UserData::DEBUG_MEMBERPARAM_DISP() == 1) {
{ pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(require(playerData5)->paramPhysical_[n]); require(apdat_)->DrawNumImageLongIntInt(g, 89, cs_arg2, num2 + 125 + 5, num3 + 5, 0, 4); }
}
}
} else if (type_ == 29) {

} else {
_draw2(g);
}
}
}
}

}
}

// M:form.SubForm._draw2(kairo.unity.ui.Graphics)
void SubForm::_draw2(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm._draw2(kairo.unity.ui.Graphics)",game);
{
data::PlayerData::ensure_initialized();

pls::cs::Int32 num4, num, num2, num3;
num3 = 0;
num2 = num3;
num = num2;
num4 = num;
pls::cs::Ref<pls::kairo::Font> font = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{});});
if (type_ == 30) {
require(apdat_)->DrawWindow(g, 228, 176, 0, literal(u"選手情報"));
require(apdat_)->DrawBox(g, 12, 69, 227, 190);
num4 = 20;
num = 63;
pls::cs::Ref<data::PlayerData> playerData = playerData_;
num3 = num + 2;
pls::cs::String text = pls::cs::String::concat(pls::cs::String::concat(require(playerData)->name_, literal(u" ")), require(playerData)->name2_);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(text, 120.0f, num3, 2);});
pls::cs::Int32 num5 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{});}))->StringWidth(text);});
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(47); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(51); pls::cs::Int32 cs_arg5 = require(playerData)->role_; require(apdat_)->DrawSeb(g, 120 - num5 / 2 - 27, num3, cs_arg3, cs_arg4, cs_arg5); }
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(162); require(g)->DrawImage(cs_arg0, 16.0f, 85.0f, 0, 16, 122, 64); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(144, 165, 163);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(16.0f, 85.0f, 121.0f, 63.0f);});
num4 = 16;
num = 83;
pls::cs::Int32 num6 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_IndexOf(require(require(udat_)->memberPDataist_), pls::cs::box(playerData));});
if (num6 < 11) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(124); require(g)->DrawImage(cs_arg0, num4, num); }());});
}
num4 = 77;
num = 125;
pls::cs::Int32 frame = frame_ % 16 / 4;
require(udat_)->SetDispPlayerData(0, require(udat_)->selectUniform_, require(playerData)->faceImg_, frame, 1);
require(udat_)->DrawDispPlayer(g, num4, num);
num2 = 86;
num3 = 124;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(29, 108, 1);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(num2, num3, num2, num3 - 16, 1.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(num2 + 3, num3, num2 + 3, num3 - 16, 1.0f);});
pls::cs::Int32 num7 = game::GameUtil::RateConvert(require(playerData)->auraPoint_, 0, 10000, 0, 17, true);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(244, 216, 93);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2 + 1, num3 - (num7 - 1), 2.0f, num7);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(60, 42, 16);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2 + 1, num3 - 16, 2.0f, 17 - num7);});
num2 = 149;
num3 = 85;
if (MyFormBase::Jp()) {
Draw_categoryIcon(g, require(playerData)->category_, num2, num3);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = data::PlayerData::CATEGORY_STR()[require(playerData)->category_]; require(g)->DrawString(cs_arg0, num2 + 72, num3 + 2, 4); }());});
} else {
Draw_categoryIcon(g, require(playerData)->category_, num2 - 3, num3);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
SubForm::SetFontSize(g, 10);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = data::PlayerData::CATEGORY_STR()[require(playerData)->category_]; require(g)->DrawString(cs_arg0, num2 - 3 + 16, num3 + 2 + 1, 1); }());});
SubForm::ResetFontSize(g);
}
num2 = 143;
num3 = 105;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
SubForm::SetFontSize(g, 10);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"給料"), num2, num3);});
SubForm::ResetFontSize(g);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(require(playerData)->GetSallay())); require(g)->DrawString(cs_arg0, num2 + 78, num3, 4); }());});
num2 = 143;
num3 = 123;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
SubForm::SetFontSize(g, 10);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"人気"), num2, num3);});
SubForm::ResetFontSize(g);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = ([&]() { auto cs_left = integer_string(require(playerData)->popularP_); auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }()); require(g)->DrawString(cs_arg0, num2 + 78, num3, 4); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = ([&]() { auto cs_left = integer_string(require(playerData)->popularP_); auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }()); require(g)->DrawString(cs_arg0, num2 + 78 - 12, num3, 4); }());});
}
num2 = 16;
num3 = 155;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(221, 251, 219);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2, num3, 124.0f, 23.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(126); require(g)->DrawImage(cs_arg0, num2 + 15, num3 + 5); }());});
require(apdat_)->DrawNumImageLongIntInt(g, 79, pls::cs::cast_integral<pls::cs::Int64>(require(playerData)->lv_), num2 + 43, num3 + 2, 0, 2);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(118); require(g)->DrawImage(cs_arg0, num2 + 6, num3 + 17, 1, 0, 52, 5); }());});
pls::cs::Int32 c1min = 0;
pls::cs::Int32 nextLvUpExp = data::PlayerData::GetNextLvUpExp(require(playerData)->lv_);
pls::cs::Int32 width = game::GameUtil::RateConvert(require(playerData)->exp_, c1min, nextLvUpExp, 0, 50, true);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(118); require(g)->DrawImage(cs_arg0, num2 + 6 + 1, num3 + 17 + 1, 2, 5, width, 3); }());});
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(115); require(g)->DrawImage(cs_arg0, num2 + 87 + 4, num3 + 2); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(115); require(g)->DrawImage(cs_arg0, num2 + 87, num3 + 2); }());});
}
require(apdat_)->DrawExp(g, num2 + 69, num3 + 2);
require(apdat_)->DrawNumImageLongIntInt(g, 78, pls::cs::cast_integral<pls::cs::Int64>(nextLvUpExp - require(playerData)->exp_), num2 + 110, num3 + 11, 0, 4);
num2 = 15;
num3 = 180;
for (pls::cs::Int32 i = 0; i < 4; ++i) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(123); require(g)->DrawImage(cs_arg0, num2 + 31 * i, num3); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::cs::Int32 positionRank = data::PlayerData::GetPositionRank(i, playerData);
require(apdat_)->DrawPositionStatus(g, i, positionRank, num2 + 31 * i + 4, num3 + 4);
}
num4 = 141;
num = 140;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(214, 236, 244);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num4, num, 83.0f, 56.0f);});
IntArray array = IntArray::from({8, 11, 13, 9, 11});
for (pls::cs::Int32 j = 0; j < data::PlayerData::PARAM_NAME().length(); ++j) {
num3 = num + 11 * j;
pls::cs::Int32 num8 = 12;
if (j == pls::cs::Int32(data::PlayerData::PARAM_NAME().length()) - 1) {
num8 = 13;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(214, 236, 244);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num4, num3, 30.0f, num8 - 1);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 223);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num4 + 1, num3 + 1, 29.0f, num8 - 2);});
pls::cs::Int32 num9 = array[j];
if (main::AppData::IsLanguageJpBase(false)) {
num9 = 12;
}
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(75); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(122); require(apdat_)->DrawSeb(g, num4 + 15 - num9, num3 - 1, cs_arg3, cs_arg4, j); }
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(108, 94, 86);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num4 + 31, num3 + 1, 51.0f, 10.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(57, 57, 70);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num4 + 31 + 1, num3 + 1 + 1, 50.0f, 9.0f);});
pls::cs::Int32 phyParamBarW = data::PlayerData::GetPhyParamBarW(require(playerData)->paramPhysical_[j], 50);
if ((j == 0)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(252, 54, 0);}));});
} else if ((j == 1)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(84, 188, 255);}));});
} else if ((j == 2)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(103, 255, 121);}));});
} else if ((j == 3)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(248, 248, 248);}));});
} else if ((j == 4)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 251, 0);}));});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num4 + 32, num3 + 2, phyParamBarW, 9.0f);});
}
num = 204;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LTLong(literal(u"出場\u3000<0>試合"), pls::cs::cast_integral<pls::cs::Int64>(require(playerData)->matchNum_)); require(g)->DrawString(cs_arg0, 120.0f, num, 2); }());});
surface::GameView::AddTouch(2);
} else if (type_ == 32) {
{ auto cs_receiver = apdat_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::String cs_arg4 = MyFormBase::LTLong(literal(u"説明 <0>/2"), pls::cs::cast_integral<pls::cs::Int64>(select_ + 1)); require(cs_receiver)->DrawWindow(cs_arg0, 228, 176, 0, cs_arg4); }
require(apdat_)->DrawBox(g, 12, 69, 227, 190);
{ pls::cs::Int32 cs_arg2 = 44 - frame_ % 20 / 5; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); surface::GameView::AddTouchSeb(g, 1, cs_arg2, 51, cs_arg4, 0, 16);}
{ pls::cs::Int32 cs_arg2 = 193 + frame_ % 20 / 5; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); surface::GameView::AddTouchSeb(g, 1, cs_arg2, 51, cs_arg4, 1, 18);}
num4 = 20;
num = 63;
num = 64;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (select_ == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"選手のパラメータについて"), 120.0f, num, 2);});
} else if (select_ == 1) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ポジション評価について"), 120.0f, num, 2);});
}
if (select_ == 0) {
num2 = 16;
num = 84;
for (pls::cs::Int32 k = 0; k < SubForm::PARAM_EXPLAIN1().length(); ++k) {
num3 = num + 24 * k;
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(74); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(121); require(apdat_)->DrawSeb(g, num2, num3, cs_arg3, cs_arg4, k); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(75); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(122); require(apdat_)->DrawSeb(g, num2 + 16, num3, cs_arg3, cs_arg4, k); }
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
SubForm::SetFontSize(g, 10);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = SubForm::PARAM_EXPLAIN1()[k]; require(g)->DrawString(cs_arg0, 66.0f, num3 + 2 + 1); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = SubForm::PARAM_EXPLAIN1()[k]; require(g)->DrawString(cs_arg0, 66.0f, num3 + 2); }());});
}
SubForm::ResetFontSize(g);
if (k != pls::cs::Int32(SubForm::PARAM_EXPLAIN1().length()) - 1) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(222, 234, 225);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(num2 - 3, num3 + 20, 213.0f, num3 + 20, 1.0f);});
}
}
} else {
num2 = 57;
num3 = 88;
IntArray array2 = IntArray::from({9, 4, 1, 0});
for (pls::cs::Int32 l = 0; l < 4; ++l) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(123); require(g)->DrawImage(cs_arg0, num2 + 31 * l, num3); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::cs::Int32 rank = array2[l];
require(apdat_)->DrawPositionStatus(g, l, rank, num2 + 31 * l + 4, num3 + 4);
}
num2 = 19;
num = 114;
for (pls::cs::Int32 m = 0; m < 5; ++m) {
num3 = num + 16 * m;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (MyFormBase::Jp()) {
{ pls::cs::String cs_arg0 = SubForm::PARAM_EXPLAIN2()[m]; kairo::unity::ui::Graphics::DrawString2(require(g), cs_arg0, num2, num3); }
} else if (SubForm::En()) {
{ pls::cs::String cs_arg0 = SubForm::PARAM_EXPLAIN2()[m]; kairo::unity::ui::Graphics::DrawString2(require(g), cs_arg0, 120.0f, num3, 18); }
}
}
}
num = 202;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_SELECT());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(96.0f, num, 48.0f, 16.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"閉じる"), 120.0f, num + 2, 2);});
{ auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(apdat_)->resCom2_)->img; require(cs_receiver)->Draw(g, 92.0f, num + 9, cs_arg3, -1); }
pls::cs::Int32 num10 = 68;
surface::GameView::AddTouch(g, 2, 120 - num10 / 2, num + 2 - 10, num10, 36, 131072);
} else if (type_ == 33) {
pls::cs::Ref<data::LeagueData> leagueData = require(apdat_)->leagueData_.get_Item(require(udat_)->selectLeagueId_);
pls::cs::Int32 num11 = require(udat_)->league_setu_ + value1_;
if (page_ == 0 || page_ == 1) {
{ auto cs_receiver = apdat_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::String cs_arg4 = MyFormBase::LT(literal(u"<0> <1>/3"), ([&]() { auto cs_left = pls::cs::String::concat(MyFormBase::LT(require(leagueData)->name2_), literal(u"\t")); auto cs_right = integer_string((page_ + 1)); return pls::cs::String::concat(cs_left,cs_right); }())); require(cs_receiver)->DrawWindow(cs_arg0, 228, 204, 0, cs_arg4); }
} else {
{ auto cs_receiver = apdat_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::String cs_arg4 = MyFormBase::LTLong(literal(u"得点ﾗﾝｷﾝｸﾞ <0>/3"), pls::cs::cast_integral<pls::cs::Int64>(page_ + 1)); require(cs_receiver)->DrawWindow(cs_arg0, 228, 204, 0, cs_arg4); }
}
require(apdat_)->DrawBox(g, 15, 55, 225, 201);
{ pls::cs::Int32 cs_arg2 = 44 - frame_ % 20 / 5; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); surface::GameView::AddTouchSeb(g, 1, cs_arg2, 37, cs_arg4, 0, 16);}
{ pls::cs::Int32 cs_arg2 = 193 + frame_ % 20 / 5; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); surface::GameView::AddTouchSeb(g, 1, cs_arg2, 37, cs_arg4, 1, 18);}
num4 = 20;
num = 63;
num3 = num - 12;
if (page_ == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(152, 152, 152);}));});
if (num11 + 1 == require(leagueData)->matchEnemy_.length()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"終節"), 29.0f, 52.0f);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LTLong(literal(u"<0>試合目"), pls::cs::cast_integral<pls::cs::Int64>(num11 + 1)); require(g)->DrawString(cs_arg0, 29.0f, 52.0f); }());});
}
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(36); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(38); require(apdat_)->DrawSeb(g, 142, num3, cs_arg3, cs_arg4, 6); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(36); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(38); require(apdat_)->DrawSeb(g, 182, num3, cs_arg3, cs_arg4, 0); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(36); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(38); require(apdat_)->DrawSeb(g, 194, num3, cs_arg3, cs_arg4, 2); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(36); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(38); require(apdat_)->DrawSeb(g, 206, num3, cs_arg3, cs_arg4, 1); }
} else if (page_ == 1) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(152, 152, 152);}));});
if (num11 + 1 == require(leagueData)->matchEnemy_.length()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"終節"), 29.0f, 52.0f);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LTLong(literal(u"<0>試合目"), pls::cs::cast_integral<pls::cs::Int64>(num11 + 1)); require(g)->DrawString(cs_arg0, 29.0f, 52.0f); }());});
}
SubForm::SetFontSize(g, 6);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"得点"), 137.0f, num3 + 5, 1);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"失点"), 172.0f, num3 + 5, 1);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"差"), 205.0f, num3 + 5, 1);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"得点"), 139.0f, num3, 1);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"失点"), 170.0f, num3, 1);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"差"), 205.0f, num3, 1);});
}
SubForm::ResetFontSize(g);
} else if (page_ == 2) {
SubForm::SetFontSize(g, 8);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"得点者"), 68.0f, num3 + 2);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾁｰﾑ名"), 127.0f, num3 + 2);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"得点"), 181.0f, num3 + 2);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"得点者"), 68.0f, num3);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾁｰﾑ名"), 127.0f, num3);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"得点"), 190.0f, num3);});
}
SubForm::ResetFontSize(g);
}
pls::cs::Int32 num12 = 0;
pls::cs::Int32 num13 = 23;
pls::cs::Int32 num14 = 200;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(20.0f, 68.0f, 201.0f, 141.0f, true);});
if (page_ == 0 || page_ == 1) {
for (pls::cs::Int32 n = scrollValue_; n < require(udat_)->league_dispOlder_.length(); ++n) {
pls::cs::Int32 num15 = n - scrollValue_;
if (num15 > 6) {
break;
}
pls::cs::Int32 cs_arg0_196 = require(udat_)->league_dispOlder_[n][0];
IntArray leagueData2 = require(udat_)->GetLeagueData(cs_arg0_196);
pls::cs::Ref<data::TeamData> teamData = require(apdat_)->tData_.get_Item(leagueData2[8]);
num2 = num4;
num3 = 69 + num15 * num13;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(199, 223, 148);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num2, num3, num14, num13);});
if (require(teamData)->id_ == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(210, 255, 158);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2 + 2, num3 + 3, 197.0f, 18.0f);});
}
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(139, 139, 139);}));});
num12 = 19;
if (num11 == 0) {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(78); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(105); require(apdat_)->DrawSeb(g, num2 + num12 - 8, num3 + 7, cs_arg3, cs_arg4, 15); }
} else if (n == 0) {
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(n + 1), num2 + num12, num3 + 7, 0, 4);
} else {
require(apdat_)->DrawNumImageLongIntInt(g, 78, pls::cs::cast_integral<pls::cs::Int64>(n + 1), num2 + num12, num3 + 7, 0, 4);
}
SubForm::SetFontSize(g, 8);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"位"), num2 + num12 + 2, num3 + 6 + 2);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"位"), num2 + num12 + 2, num3 + 6);});
}
SubForm::ResetFontSize(g);
num12 += 20;
if (require(teamData)->id_ == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(67, 72, 255);}));});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
}
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(require(teamData)->name2_); require(g)->DrawString(cs_arg0, num2 + num12 + 3, num3 + 6); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(require(teamData)->name2_); require(g)->DrawString(cs_arg0, num2 + num12, num3 + 6); }());});
}
num12 += 80;
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(139, 139, 139);}));});
num12 = 19;
SubForm::SetFontSize(g, 8);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"位"), num2 + 21 - 16, num3 + 6 + 2);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"位"), num2 + 21 - 16, num3 + 6);});
}
SubForm::ResetFontSize(g);
if (num11 == 0) {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(78); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(105); require(apdat_)->DrawSeb(g, num2 + 11 + 21, num3 + 7, cs_arg3, cs_arg4, 15); }
} else if (n == 0) {
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(n + 1), num2 + 19 + 21, num3 + 7, 0, 4);
} else {
require(apdat_)->DrawNumImageLongIntInt(g, 78, pls::cs::cast_integral<pls::cs::Int64>(n + 1), num2 + 19 + 21, num3 + 7, 0, 4);
}
num12 += 20;
if (require(teamData)->id_ == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(67, 72, 255);}));});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
}
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(require(teamData)->name2_); require(g)->DrawString(cs_arg0, num2 + 39 + 8, num3 + 6); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(require(teamData)->name2_); require(g)->DrawString(cs_arg0, num2 + 39, num3 + 6); }());});
}
num12 += 80;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (page_ == 0) {
{ pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(leagueData2[0]); require(apdat_)->DrawNumImageLongIntInt(g, 35, cs_arg2, num2 + 133, num3 + 7, 0, 2); }
if (require(teamData)->id_ == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(67, 72, 255);}));});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = ([&]() { auto cs_left = pls::cs::String::concat(([&]() { auto cs_left = pls::cs::String::concat(integer_string(leagueData2[1]), literal(u"-")); auto cs_right = integer_string(leagueData2[2]); return pls::cs::String::concat(cs_left,cs_right); }()), literal(u"-")); auto cs_right = integer_string(leagueData2[3]); return pls::cs::String::concat(cs_left,cs_right); }()); require(g)->DrawString(cs_arg0, num2 + 196, num3 + 6, 4); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = ([&]() { auto cs_left = pls::cs::String(u""); auto cs_right = integer_string(leagueData2[4]); return pls::cs::String::concat(cs_left,cs_right); }()); require(g)->DrawString(cs_arg0, num2 + 135, num3 + 6, 4); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = ([&]() { auto cs_left = pls::cs::String(u""); auto cs_right = integer_string(leagueData2[5]); return pls::cs::String::concat(cs_left,cs_right); }()); require(g)->DrawString(cs_arg0, num2 + 165, num3 + 6, 4); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = ([&]() { auto cs_left = pls::cs::String(u""); auto cs_right = integer_string(leagueData2[6]); return pls::cs::String::concat(cs_left,cs_right); }()); require(g)->DrawString(cs_arg0, num2 + 195, num3 + 6, 4); }());});
}
}
} else if (page_ == 2) {
for (pls::cs::Int32 num16 = scrollValue_; num16 < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}); ++num16) {
pls::cs::Int32 num17 = num16 - scrollValue_;
if (num17 > 6) {
break;
}
pls::cs::String str = pls::cs::unbox<pls::cs::String>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), num16);}));
IntArray array3 = pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary2), num16);}));
pls::cs::Ref<data::TeamData> teamData2 = require(apdat_)->tData_.get_Item(array3[1]);
num2 = num4;
num3 = 69 + num17 * num13;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(199, 223, 148);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num2, num3, num14, num13);});
if (require(teamData2)->id_ == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(210, 255, 158);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2 + 2, num3 + 3, 197.0f, 18.0f);});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
num12 = 24;
if (MyFormBase::Jp()) {
if (num16 == 0) {
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(num16 + 1), 39, num3 + 7, 0, 4);
} else {
require(apdat_)->DrawNumImageLongIntInt(g, 78, pls::cs::cast_integral<pls::cs::Int64>(num16 + 1), 39, num3 + 7, 0, 4);
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(139, 139, 139);}));});
SubForm::SetFontSize(g, 8);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"位"), num2 + 21, num3 + 6 + 2);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"位"), num2 + 21, num3 + 6);});
}
SubForm::ResetFontSize(g);
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(139, 139, 139);}));});
SubForm::SetFontSize(g, 8);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"位"), num2 + 21 - 16, num3 + 6 + 2);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"位"), num2 + 21 - 16, num3 + 6);});
}
SubForm::ResetFontSize(g);
if (num16 == 0) {
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(num16 + 1), 63, num3 + 7, 0, 4);
} else {
require(apdat_)->DrawNumImageLongIntInt(g, 78, pls::cs::cast_integral<pls::cs::Int64>(num16 + 1), 63, num3 + 7, 0, 4);
}
}
if (require(teamData2)->id_ == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(92, 51, 31);}));});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(146, 146, 146);}));});
}
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(str, num2 + 51 - 3, num3 + 6);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(str, num2 + 51, num3 + 6);});
}
num12 += 80;
if (require(teamData2)->id_ == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(92, 51, 31);}));});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(146, 146, 146);}));});
}
SubForm::SetFontSize(g, 10);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(teamData2)->name2_, num2 + 108, num3 + 6 + 1);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(teamData2)->name2_, num2 + 108, num3 + 6);});
}
SubForm::ResetFontSize(g);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LTLong(literal(u"<0>点"), pls::cs::cast_integral<pls::cs::Int64>(array3[0])); require(g)->DrawString(cs_arg0, num2 + 195, num3 + 6, 4); }());});
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
num3 = 215;
if (value1_ == 0) {
IntArray nextBattleLeagueIndex = require(udat_)->GetNextBattleLeagueIndex(require(udat_)->league_setu_);
if ([&]() { auto cs_left = pls::cs::box(nextBattleLeagueIndex); auto cs_right = pls::cs::box(IntArray{}); return cs_left != cs_right; }()) {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(0); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(2); require(apdat_)->DrawSeb(g, 24, 226, cs_arg3, cs_arg4, 0); }
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(68, 58, 234);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"次の対戦チーム"), 34.0f, num3);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::cs::Ref<data::TeamData> teamData3 = require(apdat_)->tData_.get_Item(require(leagueData)->matchEnemy_[nextBattleLeagueIndex[0]]);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(teamData3)->name2_, 176.0f, num3, 2);});
} else {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(0); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(2); require(apdat_)->DrawSeb(g, 93, 226, cs_arg3, cs_arg4, 0); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(0); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(2); require(apdat_)->DrawSeb(g, 147, 226, cs_arg3, cs_arg4, 0); }
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"終節"), 120.0f, num3, 2);});
}
} else {
if (select_ == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_SELECT());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(100.0f, num3 - 2, 40.0f, 16.0f);});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"次へ"), 120.0f, num3, 2);});
{ auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(apdat_)->resCom2_)->img; require(cs_receiver)->Draw(g, 96.0f, num3 + 7, cs_arg3, -1); }
}
if (page_ == 0 || page_ == 1) {
require(apdat_)->DrawVerticalScroll2(g, num4 + 207, num + 3, 3, 146, scrollValue_, pls::cs::Int32(require(udat_)->league_dispOlder_.length()) - 1, 6);
} else {
{ auto cs_receiver = apdat_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg1 = num4 + 207; pls::cs::Int32 cs_arg2 = num + 3; pls::cs::Int32 cs_arg5 = scrollValue_; pls::cs::Int32 cs_arg6 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}) - 1; require(cs_receiver)->DrawVerticalScroll2(cs_arg0, cs_arg1, cs_arg2, 3, 146, cs_arg5, cs_arg6, 6); }
}
surface::GameView::AddTouchTouchOption(2, kairo::unity::surface::TouchOption::CreateInt(2));
} else if (type_ == 34) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}) > 1) {
{ auto cs_receiver = apdat_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::String cs_arg4 = MyFormBase::LT(literal(u"リーグ戦 <0>/<1>"), ([&]() { auto cs_left = pls::cs::String::concat(integer_string(page_ + 1), literal(u"\t")); auto cs_right = integer_string(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));})); return pls::cs::String::concat(cs_left,cs_right); }())); require(cs_receiver)->DrawWindow(cs_arg0, 228, 204, 0, cs_arg4); }
} else {
require(apdat_)->DrawWindow(g, 228, 204, 0, literal(u"リーグ戦"));
}
require(apdat_)->DrawBox(g, 15, 55, 225, 201);
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}) > 1) {
{ pls::cs::Int32 cs_arg2 = 44 - frame_ % 20 / 5; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); surface::GameView::AddTouchSeb(g, 1, cs_arg2, 37, cs_arg4, 0, 16);}
{ pls::cs::Int32 cs_arg2 = 193 + frame_ % 20 / 5; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); surface::GameView::AddTouchSeb(g, 1, cs_arg2, 37, cs_arg4, 1, 18);}
}
num4 = 20;
num = 63;
pls::cs::Ref<data::LeagueData> leagueData3 = pls::cs::unbox<pls::cs::Ref<data::LeagueData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), page_);}));
if (scrollValue_ == 0) {
num2 = 20;
num3 = 47;
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(95); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(97); pls::cs::Int32 cs_arg5 = require(leagueData3)->trophy_; require(apdat_)->DrawSeb(g, num2, num3, cs_arg3, cs_arg4, cs_arg5); }
num2 = 40;
num3 = 51;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(leagueData3)->name2_, num2, num3);});
num2 = 164;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"前回"), num2, num3);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (require(leagueData3)->userPriOlder_ == -1) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"--位"), 222.0f, num3, 4);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LTLong(literal(u"<0>位"), pls::cs::cast_integral<pls::cs::Int64>(require(leagueData3)->userPriOlder_)); require(g)->DrawString(cs_arg0, 222.0f, num3, 4); }());});
}
} else {
num3 = 51;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"参戦チーム一覧"), 120.0f, num3, 2);});
}
if (scrollValue_ == 0) {
require(apdat_)->DrawBox(g, 20, 138, 221, 180);
num2 = 57;
if (SubForm::En()) {
num2 += -10;
}
num3 = 82;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"優勝賞金"), num2, num3);});
if (MyFormBase::Jp()) {
require(apdat_)->DrawNumImageComma_en(g, 35, pls::cs::cast_integral<pls::cs::Int64>(require(leagueData3)->victoryPrize_), 180, num3 + 1, 0, 0, 4);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(35); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(103); require(apdat_)->DrawSeb(g, 181, num3 + 1, cs_arg3, cs_arg4, 13); }
} else if (SubForm::En()) {
require(apdat_)->DrawMoney(g, 35, pls::cs::cast_integral<pls::cs::Int64>(require(leagueData3)->victoryPrize_), 194, num3 + 1, 0, 0, 4);
}
num4 = 24;
num = 108;
StringArray array4 = StringArray::from({literal(u"難度"), literal(u"費用"), literal(u"対戦"), literal(u"日程")});
for (pls::cs::Int32 num18 = 0; num18 < 4; ++num18) {
num2 = num4 + num18 / 2 * 97;
num3 = num + num18 % 2 * 19;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(222, 234, 225);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num2, num3, 96.0f, 19.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(151, 151, 151);}));});
SubForm::SetFontSize(g, 10);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = array4[num18]; require(g)->DrawString(cs_arg0, num2 + 8 - 4, num3 + 5 + 1); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = array4[num18]; require(g)->DrawString(cs_arg0, num2 + 8, num3 + 5); }());});
}
SubForm::ResetFontSize(g);
if ((num18 == 0)) {
if (SubForm::En()) {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(65); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(75); pls::cs::Int32 cs_arg5 = require(leagueData3)->rank_; require(apdat_)->DrawSeb(g, num2 + 72 + 3, num3 + 17, cs_arg3, cs_arg4, cs_arg5); }
} else {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(65); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(75); pls::cs::Int32 cs_arg5 = require(leagueData3)->rank_; require(apdat_)->DrawSeb(g, num2 + 62, num3 + 17, cs_arg3, cs_arg4, cs_arg5); }
}
} else if ((num18 == 1)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(require(leagueData3)->joinCost_)); require(g)->DrawString(cs_arg0, num2 + 93, num3 + 5, 4); }());});
} else if ((num18 == 2)) {
SubForm::SetFontSize(g, 6);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"全"), num2 + 38 - 5, num3 + 4 + 6);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"全"), num2 + 38, num3 + 4);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"試合"), num2 + 66, num3 + 4);});
}
SubForm::ResetFontSize(g);
if (SubForm::En()) {
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(pls::cs::Int32(require(leagueData3)->matchEnemy_.length()) - 1), num2 + 64 - 5 + 28, num3 + 5, 0, 4);
} else {
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(pls::cs::Int32(require(leagueData3)->matchEnemy_.length()) - 1), num2 + 64, num3 + 5, 0, 4);
}
} else if ((num18 == 3)) {
SubForm::SetFontSize(g, 10);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"週後"), num2 + 68 - 12 - 6, num3 + 5 + 6 - 4);});
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(require(leagueData3)->schedule_), num2 + 66 + 6, num3 + 6, 0, 4);
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"週後"), num2 + 68, num3 + 5);});
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(require(leagueData3)->schedule_), num2 + 66, num3 + 6, 0, 4);
}
SubForm::ResetFontSize(g);
}
}
if (SubForm::En()) {
require(textLay_)->SetAnchor(2);
}
require(textLay_)->Draw(g, 24.0f, 155.0f, 0);
SubForm::Draw_chara(g, 172, 0, 0, frame_, 32, 209);
SubForm::Draw_chara(g, 171, 0, 1, frame_, 209, 209);
num3 = 195;
if (require(leagueData3)->trophy_ == 4) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"リーグ制覇済み"), 120.0f, num3, 2);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_GRAY());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"リーグ未制覇"), 120.0f, num3, 2);});
}
} else {
num4 = 19;
num = 74;
pls::cs::Int32 num19 = 0;
for (pls::cs::Int32 num20 = 0; num20 < 16; ++num20) {
num2 = num4 + num20 % 2 * 101;
num3 = num + num20 / 2 * 16;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(199, 223, 148);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num2, num3, 74.0f, 16.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num2 + 75, num3, 26.0f, 16.0f);});
if (num20 >= require(leagueData3)->matchEnemy_.length()) {
continue;
}
pls::cs::Ref<data::TeamData> teamData4 = pls::cs::Ref<data::TeamData>{};
if (num19 < require(leagueData3)->matchEnemy_.length()) {
if (require(leagueData3)->matchEnemy_[num19] == 0) {
++num19;
}
if (num19 < require(leagueData3)->matchEnemy_.length()) {
teamData4 = require(apdat_)->tData_.get_Item(require(leagueData3)->matchEnemy_[num19]);
}
++num19;
}
if (is_null(teamData4)) {
continue;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::cs::String str2 = MyFormBase::LT(require(teamData4)->name2_);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(str2, num2 + 8, num3 + 3);});
{ auto cs_receiver = apdat_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(require(udat_)->GetRankIndex(require(teamData4)->warPotential_) + 1); require(cs_receiver)->DrawNumImageLongIntInt(cs_arg0, 35, cs_arg2, num2 + 89, num3 + 4, 0, 2); }
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(57); require(g)->DrawImage(cs_arg0, 100.0f, 65.0f); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(57); require(g)->DrawImage(cs_arg0, 201.0f, 65.0f); }());});
}
num = 214;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_SELECT());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(90.0f, num, 60.0f, 16.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"参加する"), 120.0f, num + 2, 2);});
{ auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(apdat_)->resCom2_)->img; require(cs_receiver)->Draw(g, 86.0f, num + 9, cs_arg3, -1); }
require(apdat_)->DrawVerticalScroll2(g, 228, 66, 3, 147, select_, 1, 1);
surface::GameView::AddTouchTouchOption(2, kairo::unity::surface::TouchOption::CreateInt(2));
} else if (type_ == 35) {
require(apdat_)->DrawWindow(g, 228, 176, 0, literal(u"リーグ戦"));
require(apdat_)->DrawBox(g, 12, 136, 227, 205);
pls::cs::Ref<data::LeagueData> leagueData4 = leagueData_;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(162); require(g)->DrawImage(cs_arg0, 30.0f, 64.0f); }());});
num = 129;
for (pls::cs::Int32 num21 = 0; num21 < 3; ++num21) {
pls::cs::Ref<data::PlayerData> playerData2 = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(udat_)->memberPDataist_), num21);}));
require(udat_)->SetDispPlayerData(0, require(udat_)->selectUniform_, require(playerData2)->faceImg_, frame_ % 20 / 5, 1);
require(udat_)->DrawDispPlayer(g, 100 + num21 * 20, num);
}
SubForm::Draw_chara(g, 172, 0, 0, frame_, 44, 140);
SubForm::Draw_chara(g, 171, 0, 1, frame_, 196, 140);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<0>に参戦しますか"), require(leagueData4)->name2_); require(g)->DrawString(cs_arg0, 120.0f, 164.0f, 2); }());});
num3 = 195;
num = 195;
pls::cs::Int32 num22 = 40;
if (select_ == 0) {
SubForm::Draw_btmMsg(g, literal(u"参戦する"), 120 - num22, num, true, true);
SubForm::Draw_btmMsg(g, literal(u"考え直す"), 120 + num22, num, false, false);
} else if (select_ == 1) {
SubForm::Draw_btmMsg(g, literal(u"参戦する"), 120 - num22, num, false, false);
SubForm::Draw_btmMsg(g, literal(u"考え直す"), 120 + num22, num, true, true);
}
num22 = 58;
for (pls::cs::Int32 num23 = 0; num23 < 2; ++num23) {
num2 = 75 - num22 / 2 + 90 * num23;
{ pls::cs::Int32 cs_arg2 = num2 + SubForm::DLGSEL_TRECT()[num23][0]; pls::cs::Int32 cs_arg3 = num3 - 2 + SubForm::DLGSEL_TRECT()[num23][1]; pls::cs::Int32 cs_arg4 = num22 + SubForm::DLGSEL_TRECT()[num23][2]; pls::cs::Int32 cs_arg5 = 16 + SubForm::DLGSEL_TRECT()[num23][3]; surface::GameView::AddTouch(g, 3, cs_arg2, cs_arg3, cs_arg4, cs_arg5, 0x20000 | num23);}
}
} else if (type_ == 36) {

} else {
_draw3(g);
}

}
}

// M:form.SubForm._draw3(kairo.unity.ui.Graphics)
void SubForm::_draw3(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm._draw3(kairo.unity.ui.Graphics)",game);
{
data::FanActData::ensure_initialized();

pls::cs::Int32 coalescedValue, num, num2, num3;
num3 = 0;
num2 = num3;
num = num2;
coalescedValue = num;
pls::cs::Ref<pls::kairo::Font> font = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{});});
if (type_ == 37) {
SubForm::Draw_backBlackAlpha(g);
pls::cs::Ref<data::LeagueData> leagueData = require(apdat_)->leagueData_.get_Item(require(udat_)->selectLeagueId_);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(162, 204, 153, 128);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(5.0f, 34.0f, 231.0f, 199.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(106, 129, 78, 128);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(7.0f, 36.0f, 226.0f, 194.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(108, 158, 107, 128);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(8.0f, 37.0f, 225.0f, 193.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(178, 236, 179, 128);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(10.0f, 94.0f, 220.0f, 80.0f);});
for (pls::cs::Int32 i = 0; i < 3; ++i) {
require(require(udat_)->gm_)->Draw_timeMessageWindow(g, 40 + 17 * i, 222, i % 2, 120);
}
for (pls::cs::Int32 j = 0; j < 3; ++j) {
require(require(udat_)->gm_)->Draw_timeMessageWindow(g, 176 + 17 * j, 222, 1 - j % 2, 120);
}
pls::cs::Ref<data::TeamData> teamData = require(apdat_)->tData_.get_Item(require(require(udat_)->gm_)->teamId_[0]);
pls::cs::Ref<data::TeamData> teamData2 = require(apdat_)->tData_.get_Item(require(require(udat_)->gm_)->teamId_[1]);
pls::cs::Int32 num4 = 0;
if ((([&]() -> bool { auto cs_left = require(require(udat_)->gm_)->score_[0]; auto cs_right = require(require(udat_)->gm_)->score_[1]; return cs_left > cs_right; }()))) {
num4 = 0;
} else {
if ((([&]() -> bool { auto cs_left = require(require(udat_)->gm_)->score_[0]; auto cs_right = require(require(udat_)->gm_)->score_[1]; return cs_left < cs_right; }()))) {
num4 = 1;
} else {
num4 = 2;
}
}
num3 = 43;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"結果"), 120.0f, num3, 2);});
num3 += 17;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(teamData)->name_, 60.0f, num3, 2);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(teamData2)->name_, 180.0f, num3, 2);});
num3 += 17;
{ pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(require(require(udat_)->gm_)->score_[0]); require(apdat_)->DrawNumImageLongIntInt(g, 30, cs_arg2, 60, num3, 0, 2); }
{ pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(require(require(udat_)->gm_)->score_[1]); require(apdat_)->DrawNumImageLongIntInt(g, 30, cs_arg2, 180, num3, 0, 2); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(35); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(103); require(apdat_)->DrawSeb(g, 116, num3, cs_arg3, cs_arg4, 15); }
num = 98;
pls::cs::Int32 matchPrice = require(require(apdat_)->frmSoccer_)->GetMatchPrice();
if (num4 == 0) {
SetWinCharaJamp(([&]() -> pls::cs::Int32 { auto cs_left = frame_; auto cs_right = ANIME_MATCH_RESULT[0]; return cs_left - cs_right; }()));
}
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(36); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(38); require(apdat_)->DrawSeb(g, 68, num - 1, cs_arg3, cs_arg4, 7); }
if (MyFormBase::Jp()) {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(36); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(38); require(apdat_)->DrawSeb(g, 144, num - 1, cs_arg3, cs_arg4, 8); }
}
if (num4 == 0) {
if ([&]() -> bool { auto cs_left = frame_; auto cs_right = ANIME_MATCH_RESULT[0]; return cs_left >= cs_right; }()) {
pls::cs::Int32 winCharaJamp = main::AppData::ClampMax(([&]() -> pls::cs::Int32 { auto cs_left = frame_; auto cs_right = ANIME_MATCH_RESULT[0]; return cs_left - cs_right; }()), 17);
SetWinCharaJamp(winCharaJamp);
if (!SubForm::En()) {
{ pls::cs::Int32 cs_arg4 = num + SubForm::WIN_CHA()[1]; require(apdat_)->DrawNumImageComma(g, 35, pls::cs::cast_integral<pls::cs::Int64>(matchPrice), 142, cs_arg4, 0, 0, 4); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(36); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(38); require(apdat_)->DrawSeb(g, 144, num - 1, cs_arg3, cs_arg4, 8); }
} else {
{ pls::cs::Int32 cs_arg4 = num + SubForm::WIN_CHA()[1]; require(apdat_)->DrawMoney(g, 35, pls::cs::cast_integral<pls::cs::Int64>(matchPrice), 168, cs_arg4, 0, 0, 4); }
}
}
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(0.0f, 98.0f, 240.0f, 12.0f, true);});
pls::cs::Int32 cs_arg0_197 = frame_; pls::cs::Int32 cs_arg1_197 = ANIME_MATCH_RESULT[0]; pls::cs::Int32 cs_arg2_197 = ANIME_MATCH_RESULT[1];
pls::cs::Int32 num5 = game::GameUtil::RateConvert(cs_arg0_197, cs_arg1_197, cs_arg2_197, -12, 0, true);
if (!SubForm::En()) {
require(apdat_)->DrawNumImageComma(g, 35, pls::cs::cast_integral<pls::cs::Int64>(matchPrice), 142, num + num5, 0, 0, 4);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(36); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(38); require(apdat_)->DrawSeb(g, 144, num - 1, cs_arg3, cs_arg4, 8); }
} else {
require(apdat_)->DrawMoney(g, 35, pls::cs::cast_integral<pls::cs::Int64>(matchPrice), 168, num + num5, 0, 0, 4);
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
}
pls::cs::Int32 num6 = frame_ % 10 / 5;
pls::cs::Int32 num7 = 0;
pls::cs::Int32 num8 = 0;
pls::cs::Int32 num9 = 0;
for (pls::cs::Int32 k = 0; k < 6; ++k) {
pls::cs::Int32 num10 = k / 3;
num8 = 0;
num9 = 0;
if ([&]() -> bool { auto cs_left = frame_; auto cs_right = ANIME_MATCH_RESULT[1]; return cs_left < cs_right; }()) {
num6 = 0;
num7 = 0;
} else if (num4 == num10) {
SetWinCharaJamp(([&]() -> pls::cs::Int32 { auto cs_left = frame_; auto cs_right = ANIME_MATCH_RESULT[1]; return cs_left - cs_right; }()));
num7 = SubForm::WIN_CHA()[0];
num8 = SubForm::WIN_CHA()[1];
num6 = 0;
} else if (num4 == 1 - num10) {
num6 = 0;
num7 = 11;
num9 = -1;
} else {
num6 = 0;
num7 = 0;
}
if (num10 == 0) {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(0); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(2); require(apdat_)->DrawSeb(g, 44 + k * 18 - 1, 163 + num9, cs_arg3, cs_arg4, 4); }
{ pls::cs::Int32 cs_arg1 = require(teamData)->bodyImg_; pls::cs::Int32 cs_arg2 = require(teamData)->memberFaceId_[k]; require(udat_)->SetDispPlayerData(num7, cs_arg1, cs_arg2, num6, 1); }
require(udat_)->DrawDispPlayer(g, 44 + k * 18, 162 + num8);
} else {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(0); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(2); require(apdat_)->DrawSeb(g, 162 + (k - 3) * 18, 163 + num9, cs_arg3, cs_arg4, 4); }
{ pls::cs::Int32 cs_arg1 = require(teamData2)->bodyImg_; pls::cs::Int32 cs_arg2 = require(teamData2)->memberFaceId_[k]; require(udat_)->SetDispPlayerData(num7, cs_arg1, cs_arg2, num6, 2); }
require(udat_)->DrawDispPlayer(g, 162 + (k - 3) * 18, 162 + num8);
}
}
num3 = 179;
SubForm::SetFontSize(g, 10);
pls::cs::Int32 testedValue = require(udat_)->GetMatchInfoJoin();
if (testedValue == 0) {
IntArray nextBattleLeagueIndex = require(udat_)->GetNextBattleLeagueIndex(require(udat_)->league_setu_);
IntArray leagueData2 = require(udat_)->GetLeagueData(0);
pls::cs::Int32 cs_arg0_198 = require(leagueData)->matchEnemy_[nextBattleLeagueIndex[0]];
IntArray leagueData3 = require(udat_)->GetLeagueData(cs_arg0_198);
if (([&]() { auto cs_left = pls::cs::box(leagueData2); auto cs_right = pls::cs::box(IntArray{}); return cs_left == cs_right; }()) || ([&]() { auto cs_left = pls::cs::box(leagueData3); auto cs_right = pls::cs::box(IntArray{}); return cs_left == cs_right; }())) {
return;
}
num = 174;
coalescedValue = 4;
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾘｰｸﾞ"), coalescedValue + 14, num + 5);});
{ pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(leagueData2[7]); require(apdat_)->DrawNumImageLongIntInt(g, 30, cs_arg2, coalescedValue + 85, num + 5, 0, 4); }
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 0);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"位"), coalescedValue + 90, num + 5);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾘｰｸﾞ"), coalescedValue + 14 + 3, num + 5 + 1);});
pls::cs::Int32 num12 = 85;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 0);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"位"), coalescedValue + num12 - 30 + 3, num + 5 + 1);});
{ pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(leagueData2[7]); require(apdat_)->DrawNumImageLongIntInt(g, 30, cs_arg2, coalescedValue + num12 + 9 + 1, num + 5, 0, 2); }
}
coalescedValue = 129;
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾘｰｸﾞ"), coalescedValue + 7, num + 5);});
{ pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(leagueData3[7]); require(apdat_)->DrawNumImageLongIntInt(g, 30, cs_arg2, coalescedValue + 78, num + 5, 0, 4); }
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 0);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"位"), coalescedValue + 83, num + 5);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾘｰｸﾞ"), coalescedValue + 7 + 3, num + 5 + 1);});
pls::cs::Int32 num13 = 78;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 0);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"位"), coalescedValue + num13 - 30 + 3, num + 5 + 1);});
{ pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(leagueData3[7]); require(apdat_)->DrawNumImageLongIntInt(g, 30, cs_arg2, coalescedValue + num13 + 9 + 1, num + 5, 0, 2); }
}
} else {
num = 174;
coalescedValue = 4;
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾁｰﾑ評価"), coalescedValue + 14, num + 5);});
require(apdat_)->DrawNumImageLongIntInt(g, 30, pls::cs::cast_integral<pls::cs::Int64>(require(teamData)->warPotential_), coalescedValue + 93, num + 5, 0, 4);
coalescedValue = 129;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾁｰﾑ評価"), coalescedValue + 7, num + 5);});
require(apdat_)->DrawNumImageLongIntInt(g, 30, pls::cs::cast_integral<pls::cs::Int64>(require(teamData2)->warPotential_), coalescedValue + 78, num + 5, 0, 4);
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾁｰﾑ評価"), coalescedValue + 14, num + 5 + 2);});
require(apdat_)->DrawNumImageLongIntInt(g, 30, pls::cs::cast_integral<pls::cs::Int64>(require(teamData)->warPotential_), coalescedValue + 93 + 6, num + 5, 0, 4);
coalescedValue = 129;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾁｰﾑ評価"), coalescedValue + 7, num + 5 + 2);});
require(apdat_)->DrawNumImageLongIntInt(g, 30, pls::cs::cast_integral<pls::cs::Int64>(require(teamData2)->warPotential_), coalescedValue + 78 + 12, num + 5, 0, 4);
}
}
num3 = 196;
num2 = 106;
if (SubForm::En()) {
num2 = 110;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"観客"), num2 - 90, num3);});
{ pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(require(require(apdat_)->frmSoccer_)->customerNum[0]); require(apdat_)->DrawNumImageComma(g, 35, cs_arg2, num2 - 12 - 2, num3 + 1, 0, 0, 4); }
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 0);}));});
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"人"), num2 - 12, num3);});
}
num2 = 224;
if (SubForm::En()) {
num2 = 228;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"観客"), num2 - 90, num3);});
{ pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(require(require(apdat_)->frmSoccer_)->customerNum[1]); require(apdat_)->DrawNumImageComma(g, 35, cs_arg2, num2 - 12 - 2, num3 + 1, 0, 0, 4); }
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 0);}));});
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"人"), num2 - 12, num3);});
}
SubForm::ResetFontSize(g);
num = 206;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(172); require(g)->DrawImage(cs_arg0, 21.0f, num, 0, 0, 16, 21); }());});
if ([&]() -> bool { auto cs_left = frame_; auto cs_right = ANIME_MATCH_RESULT[1]; return cs_left >= cs_right; }()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));});
if (num4 == 0) {
kairo::unity::ui::Graphics::DrawString2(require(g), literal(u"我々の勝利です!!"), 120.0f, num + 7, 2);
} else if (num4 == 1) {
kairo::unity::ui::Graphics::DrawString2(require(g), literal(u"惜しくも負けてしまいました"), 120.0f, num + 7, 2);
} else {
kairo::unity::ui::Graphics::DrawString2(require(g), literal(u"引き分けでした"), 120.0f, num + 7, 2);
}
cs_label_coalescedSwitchExit114919: ;
;
}
surface::GameView::AddTouch(2);
} else if (type_ == 38) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetOrigin(0, 0);});
pls::cs::Ref<surface::GameView> instance = surface::GameView::GetInstance();
pls::cs::Int32 gameWidth = require(instance)->GetGameWidth();
pls::cs::Int32 gameHeight = require(instance)->GetGameHeight();
pls::cs::Int32 cs_arg0_199 = frame_; pls::cs::Int32 cs_arg2_199 = SubForm::VICTORY_ANIME_TIME()[0]; pls::cs::Int32 cs_arg3_199 = SubForm::VICTORY_ANIME_TIME()[0] * 3;
pls::cs::Int32 num14 = game::GameUtil::RateConvert(cs_arg0_199, 0, cs_arg2_199, cs_arg3_199, 0, true);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(23, 32, 58);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(0.0f, 0.0f, gameWidth, gameHeight);});
pls::cs::Int32 num15 = 2;
pls::cs::Int32 num16 = 0;
pls::cs::Int32 r;
pls::cs::Int32 num17;
pls::cs::Int32 num18;
num18 = 0;
num17 = num18;
r = num17;
pls::cs::Int32 num19 = 0;
while (num16 < gameHeight - 100) {
r = game::GameUtil::RateConvert(num16, 0, 140, 23, 75, true);
num17 = game::GameUtil::RateConvert(num16, 0, 140, 32, 123, true);
num18 = game::GameUtil::RateConvert(num16, 0, 140, 58, 168, true);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(r, num17, num18);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(0.0f, num16 + num14, gameWidth, num15);});
num16 += num15;
if (num19 >= 300) {
break;
}
}
if (gameWidth > 240) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(84); require(g)->DrawImage(cs_arg0, 0.0f, gameHeight - 130 + num14); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(84); require(g)->DrawImage(cs_arg0, gameWidth - 240, gameHeight - 130 + num14); }());});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(84); require(g)->DrawImage(cs_arg0, gameWidth / 2 - 120, gameHeight - 130 + num14); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(192); require(g)->DrawImage(cs_arg0, gameWidth / 2 - 120 - 40, gameHeight - 44 + num14); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(192); require(g)->DrawImage(cs_arg0, gameWidth / 2 + 120 - 40, gameHeight - 44 + num14); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(191); require(g)->DrawImage(cs_arg0, gameWidth / 2 - 96, gameHeight - 31 + num14); }());});
pls::cs::Int32 num20 = gameWidth / 2 - 120;
pls::cs::Int32 num21 = gameHeight - 240;
pls::cs::Int32 num22 = 14;
pls::cs::Int32 num23 = 10;
pls::cs::Int32 num24 = 0;
pls::cs::Int32 num25 = 0;
pls::cs::Int32 num26 = 0;
for (pls::cs::Int32 l = 0; l < zsort_mhobj.length(); ++l) {
pls::cs::Int32 num27 = zsort_mhobj[l][0];
coalescedValue = pls::cs::to_int32(require(w_vic_pos.get_Item(num27))->x_) + num20;
num = pls::cs::to_int32(require(w_vic_pos.get_Item(num27))->z_) + num14 + num21;
num24 = num;
num25 = 0;
num26 = 15;
if ([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::VICTORY_ANIME_TIME()[2]; return cs_left >= cs_right; }()) {
auto cs_left_200 = frame_; auto cs_right_200 = SubForm::VICTORY_ANIME_TIME()[2];
pls::cs::Int32 num28 = cs_left_200 - cs_right_200;
pls::cs::Int32 num29 = (num28 - w_vic_data[num27][1]) % (num22 + num23);
num29 -= num23 / 2;
if (num29 >= 0) {
pls::cs::Single num30 = game::GameUtil::SetVStop(-6.0f, num22 / 2);
pls::cs::Single num31 = game::GameUtil::SetAStop(-6.0f, num22 / 2);
num24 = pls::cs::to_int32((pls::cs::Single(num) + num30 * pls::cs::Single(num29) + num31 * pls::cs::Single(num29) * pls::cs::Single((num29 + 1)) / 2.0f));
if (num24 > num) {
num24 = num;
}
if ((num24 < num)) {
num25 = 1;
} else {
num25 = 0;
}
}
}
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(0); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(2); require(apdat_)->DrawSeb(g, coalescedValue, num, cs_arg3, cs_arg4, 4); }
pls::cs::Ref<data::PlayerData> playerData = require(apdat_)->pData_.get_Item(w_vic_data[num27][0]);
require(udat_)->SetDispPlayerData(num26, require(udat_)->selectUniform_, require(playerData)->faceImg_, num25, 1);
require(udat_)->DrawDispPlayer(g, coalescedValue, num24);
}
if ([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::VICTORY_ANIME_TIME()[2]; return cs_left >= cs_right; }()) {
coalescedValue = main::AppData::ClampMin((gameWidth - 360) / 2, 0);
num = 0;
pls::cs::Int32 frame = frame_ % 20 / 10;
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(72); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(88); require(apdat_)->DrawSeb(g, coalescedValue, num + num14, cs_arg3, cs_arg4, frame); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(72); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(88); require(apdat_)->DrawSeb(g, coalescedValue + 180, num + num14, cs_arg3, cs_arg4, frame); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(72); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(88); require(apdat_)->DrawSeb(g, coalescedValue, num + num14 + 40, cs_arg3, cs_arg4, frame); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(72); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(88); require(apdat_)->DrawSeb(g, coalescedValue + 180, num + num14 + 40, cs_arg3, cs_arg4, frame); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(72); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(88); require(apdat_)->DrawSeb(g, coalescedValue, num + num14 + 80, cs_arg3, cs_arg4, frame); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(72); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(88); require(apdat_)->DrawSeb(g, coalescedValue + 180, num + num14 + 80, cs_arg3, cs_arg4, frame); }
}
if ([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::VICTORY_ANIME_TIME()[2]; return cs_left >= cs_right; }()) {
for (pls::cs::Int32 m = 0; m < fw_zsort.length(); ++m) {
fw_zsort[m][0] = m;
fw_zsort[m][1] = fw_cnt[m];
}
for (pls::cs::Int32 n = 0; n < pls::cs::Int32(fw_zsort.length()) - 1; ++n) {
for (pls::cs::Int32 num32 = pls::cs::Int32(fw_zsort.length()) - 1; num32 > n; --num32) {
if ([&]() -> bool { auto cs_left = fw_zsort[n][1]; auto cs_right = fw_zsort[num32][1]; return cs_left < cs_right; }()) {
pls::cs::Int32 num33 = fw_zsort[num32][1];
fw_zsort[num32][1] = fw_zsort[n][1];
fw_zsort[n][1] = num33;
num33 = fw_zsort[num32][0];
fw_zsort[num32][0] = fw_zsort[n][0];
fw_zsort[n][0] = num33;
}
}
}
pls::cs::Int32 num34 = gameWidth / 2 - 120;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetRenderMode(1, 255, 255);});
for (pls::cs::Int32 num35 = 0; num35 < fw_zsort.length(); ++num35) {
if (fw_zsort[num35][1] == 0) {
continue;
}
pls::cs::Int32 num36 = fw_zsort[num35][0];
auto cs_left_201 = SubForm::FW_ANIME()[3]; auto cs_right_201 = fw_cnt[num36];
pls::cs::Int32 num37 = cs_left_201 - cs_right_201;
pls::cs::Int32 num38 = 0;
if ((num37 < SubForm::FW_ANIME()[0])) {
num38 = 0;
} else {
if ((num37 < SubForm::FW_ANIME()[1])) {
num38 = 1;
} else {
if ((num37 < SubForm::FW_ANIME()[2])) {
num38 = 2;
} else {
num38 = 3;
}
}
}
{ pls::cs::Int32 cs_arg1 = fw_pos[num36][0] + num34; pls::cs::Int32 cs_arg2 = fw_pos[num36][1] + num14; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(69); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(82); require(apdat_)->DrawSeb(g, cs_arg1, cs_arg2, cs_arg3, cs_arg4, num38); }
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetRenderMode(0, 255, 0);});
}
if ([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::VICTORY_ANIME_TIME()[1]; return cs_left >= cs_right; }()) {
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(85); require(g)->DrawImage(cs_arg0, gameWidth / 2 - 109, gameHeight - 169 + 10 + num14); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(85); require(g)->DrawImage(cs_arg0, gameWidth / 2 - 109, gameHeight - 169 + num14); }());});
}
pls::cs::Ref<data::TeamData> teamData3 = require(apdat_)->tData_.get_Item(0);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_WHITE());});
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(teamData3)->name_, gameWidth / 2, gameHeight - 169 + 10 + 7 + num14, 2);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(teamData3)->name_, gameWidth / 2, gameHeight - 169 + 7 + num14, 2);});
}
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(87); require(g)->DrawImage(cs_arg0, gameWidth / 2 - 48, gameHeight - 223 + num14); }());});
} else if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(87); require(g)->DrawImage(cs_arg0, gameWidth / 2 - 94, gameHeight - 223 - 7 + num14); }());});
}
num = gameHeight - 25;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::cs::Int32 switchValue = require(udat_)->GetMatchInfoJoin();
if (switchValue == 0) {
pls::cs::Ref<data::LeagueData> leagueData4 = require(apdat_)->leagueData_.get_Item(require(udat_)->selectLeagueId_);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(leagueData4)->name_, gameWidth / 2, num, 2);});
} else if (switchValue == 1) {
pls::cs::Ref<data::QuestMatchData> questMatchData = require(apdat_)->qmData_.get_Item(require(udat_)->selectQmId_);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(questMatchData)->name_, gameWidth / 2, num, 2);});
}
cs_label_coalescedSwitchExit121148: ;
;
}
surface::GameView::AddTouch(2);
} else if (type_ == 39) {
require(apdat_)->DrawWindow(g, 228, 204, 0, literal(u"地域の活動"));
num = 49;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"活動の内容"), 25.0f, num);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾗﾝｸ"), 131.0f, num);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"費用"), 187.0f, num);});
num = 53;
require(apdat_)->DrawBox(g, 15, num, 224, num + 92);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
num2 = 24;
for (pls::cs::Int32 num39 = scrollValue_; num39 < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}); ++num39) {
pls::cs::Int32 num40 = num39 - scrollValue_;
if (num40 >= 5) {
break;
}
pls::cs::Ref<data::FanActData> fanActData = pls::cs::unbox<pls::cs::Ref<data::FanActData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), num39);}));
num3 = num + 15 + num40 * 17;
if (num39 == select_) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_SELECT());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2 + 1, num3, 194.0f, 16.0f);});
}
surface::GameView::AddTouch(g, 11, num2 + 1, num3, 194, 16, 0x20000 | num39, require(kairo::unity::surface::TouchOption::CreateInt(16))->Margin(30, 0, 0, 0));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(fanActData)->name_, num2 + 3, num3 + 2);});
if (require(fanActData)->state_ == 2) {
pls::cs::Int32 num41 = 0;
if (SubForm::En()) {
num41 = 3;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
SubForm::SetFontSize(g, 8);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"活動中"), 139 - num41, num3 + 2 + 2);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"活動中"), 139 - num41, num3 + 2);});
}
SubForm::ResetFontSize(g);
pls::cs::Int32 num42 = game::GameUtil::RateConvert(require(fanActData)->stateCnt_, 0, 200, 0, 100, true);
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(num42), num2 + 175 + num41, num3 + 3, 0, 4);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(90); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(131); require(apdat_)->DrawSeb(g, num2 + 175 + 1 + num41, num3 + 3, cs_arg3, cs_arg4, 1); }
} else if (require(fanActData)->type_ == 0) {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(65); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(75); require(apdat_)->DrawSeb(g, num2 + 114 + 2, num3 + 14, cs_arg3, cs_arg4, 9); }
} else {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(65); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(75); pls::cs::Int32 cs_arg5 = require(fanActData)->rank_; require(apdat_)->DrawSeb(g, num2 + 114 + 2, num3 + 14, cs_arg3, cs_arg4, cs_arg5); }
}
if (require(fanActData)->state_ == 2) {

} else {
pls::cs::Int32 cs_arg0_202 = require(fanActData)->rank_; pls::cs::Int32 cs_arg3_202 = require(fanActData)->cost_[0]; pls::cs::Int32 cs_arg4_202 = require(fanActData)->cost_[1];
pls::cs::Int32 num43 = game::GameUtil::RateConvert(cs_arg0_202, 0, 6, cs_arg3_202, cs_arg4_202, true);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(83); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(94); pls::cs::Int32 cs_arg5 = require(fanActData)->costType_; require(apdat_)->DrawSeb(g, num2 + 150, num3 + 1, cs_arg3, cs_arg4, cs_arg5); }
if (require(udat_)->ChResearchPoin(require(fanActData)->costType_, num43)) {
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(num43), num2 + 192, num3 + 3, 0, 4);
} else {
require(apdat_)->DrawNumImageLongIntInt(g, 91, pls::cs::cast_integral<pls::cs::Int64>(num43), num2 + 192, num3 + 3, 0, 4);
}
}
if (require(fanActData)->IsNew()) {
SubForm::Draw_newMark(g, num2 + 79, num3 + 2, frame_);
}
if (num39 == select_) {
{ auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(apdat_)->resCom2_)->img; require(cs_receiver)->Draw(g, num2 - 6, num3 + 9, cs_arg3, -1); }
}
}
{ auto cs_receiver = apdat_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg5 = scrollValue_; pls::cs::Int32 cs_arg6 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}) - 1; require(cs_receiver)->DrawVerticalScroll2(cs_arg0, 226, 64, 3, 93, cs_arg5, cs_arg6, 5); }
pls::cs::Ref<data::FanActData> fanActData2 = pls::cs::unbox<pls::cs::Ref<data::FanActData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), select_);}));
num = 151;
require(apdat_)->DrawBox(g, 15, num, 224, num + 63);
Draw_fanActBack(g, require(fanActData2)->icon_, 18, 166);
coalescedValue = 59;
num = 165;
pls::cs::Int32 num44 = 0;
for (pls::cs::Int32 num45 = 0; num45 < 3; ++num45) {
num2 = coalescedValue;
num3 = num + 20 * num45;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(207, 245, 229);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2, num3, 106.0f, 18.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(232, 249, 227);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2 + 107, num3, 54.0f, 18.0f);});
num2 = coalescedValue;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
SubForm::SetFontSize(g, 10);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = data::FanActData::element_name()[num45]; require(g)->DrawString(cs_arg0, num2 + 6, num3 + 4 + 1); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = data::FanActData::element_name()[num45]; require(g)->DrawString(cs_arg0, num2 + 6, num3 + 4); }());});
}
SubForm::ResetFontSize(g);
pls::cs::Int32 fanEva = data::FanActData::GetFanEva(num45);
pls::cs::Int32 fanDispParam = data::FanActData::GetFanDispParam(fanEva, num45);
if (num45 == 0) {
require(apdat_)->DrawNumImageComma(g, 78, pls::cs::cast_integral<pls::cs::Int64>(fanDispParam), num2 + 88, num3 + 5, 0, 0, 4);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(78); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(105); require(apdat_)->DrawSeb(g, num2 + 90, num3 + 6, cs_arg3, cs_arg4, 18); }
} else if (num45 == 1) {
pls::cs::Int32 num46 = 52;
pls::cs::Int32 num47 = 0;
num47 = game::GameUtil::RateConvert(fanDispParam, 0, 100, 0, num46 - 2, true);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(129); require(g)->DrawImage(cs_arg0, num2 + 48, num3 + 4, 0, 0, 52, 10); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(129); require(g)->DrawImage(cs_arg0, num2 + 48 + 1, num3 + 5, 1, 10, num47, 8); }());});
} else if (num45 == 2) {
require(apdat_)->DrawNumImageLongIntInt(g, 78, pls::cs::cast_integral<pls::cs::Int64>(fanDispParam), num2 + 88, num3 + 5, 0, 4);
}
cs_label_coalescedSwitchExit125387: ;
;
pls::cs::Int32 cs_arg0_203 = require(fanActData2)->rank_; pls::cs::Int32 cs_arg3_203 = require(fanActData2)->eff_[num45][0]; pls::cs::Int32 cs_arg4_203 = require(fanActData2)->eff_[num45][1];
pls::cs::Int32 eva = game::GameUtil::RateConvert(cs_arg0_203, 0, 6, cs_arg3_203, cs_arg4_203, true);
pls::cs::Int32 fanAddParamNum = data::FanActData::GetFanAddParamNum(eva, num45);
SubForm::Draw_up(g, num2 + 122, num3 + 4, fanAddParamNum, 1);
}
if (udArrowCnt > 0) {
--udArrowCnt;
}
coalescedValue = 120;
num = 70;
if (udArrowCnt == 0) {
surface::GameView::AddTouch(g, 2, coalescedValue - 25 - 5, num - 50, 70, 30, 1376456, kairo::unity::surface::TouchOption::CreateInt(2));
surface::GameView::AddTouch(g, 2, coalescedValue - 25 - 5, num + 97, 70, 30, 1376456, kairo::unity::surface::TouchOption::CreateInt(2));
} else {
pls::cs::Ref<kairo::unity::surface::TouchOption> touchOption = kairo::unity::surface::TouchOption::CreateInt(2);
pls::cs::Ref<kairo::unity::surface::TouchOption> touchOption2 = kairo::unity::surface::TouchOption::CreateInt(2);
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = coalescedValue; pls::cs::Int32 cs_arg3 = num - 13; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(touchOption)->Margin(40, 40, 45, 0); surface::GameView::AddTouchSeb(cs_arg0, 24, cs_arg2, cs_arg3, cs_arg4, 0, 17, cs_arg7);}
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = coalescedValue; pls::cs::Int32 cs_arg3 = num + 61 + 13; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(touchOption2)->Margin(40, 40, -15, 60); surface::GameView::AddTouchSeb(cs_arg0, 24, cs_arg2, cs_arg3, cs_arg4, 1, 19, cs_arg7);}
}
} else if (type_ == 40) {
require(apdat_)->DrawWindow(g, 228, 176, 0, literal(u"地域の活動"));
require(apdat_)->DrawBox(g, 83, 52, 227, 134);
require(apdat_)->DrawBox(g, 12, 136, 227, 205);
pls::cs::Ref<data::FanActData> fanActData3 = fanActData_;
coalescedValue = 30;
num = 74;
Draw_fanActBack(g, require(fanActData3)->icon_, coalescedValue, num);
if (require(fanActData3)->type_ == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(fanActData3)->name_, 155.0f, 71.0f, 2);});
} else {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(65); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(75); pls::cs::Int32 cs_arg5 = require(fanActData3)->rank_; require(apdat_)->DrawSeb(g, 116, 83, cs_arg3, cs_arg4, cs_arg5); }
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(fanActData3)->name_, 132.0f, 71.0f);});
}
require(textLay_)->Draw(g, 95.0f, 88.0f, 0);
coalescedValue = 15;
num = 150;
for (pls::cs::Int32 num48 = 0; num48 < 3; ++num48) {
num2 = coalescedValue + 70 * num48;
num3 = num;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(207, 245, 229);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2, num3, 42.0f, 17.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(232, 249, 227);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2 + 42, num3, 28.0f, 17.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
SubForm::SetFontSize(g, 10);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = data::FanActData::element_name()[num48]; require(g)->DrawString(cs_arg0, num2 + 3, num3 + 2 + 1); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = data::FanActData::element_name()[num48]; require(g)->DrawString(cs_arg0, num2 + 3, num3 + 2); }());});
}
SubForm::ResetFontSize(g);
pls::cs::Int32 cs_arg0_204 = require(fanActData3)->rank_; pls::cs::Int32 cs_arg3_204 = require(fanActData3)->eff_[num48][0]; pls::cs::Int32 cs_arg4_204 = require(fanActData3)->eff_[num48][1];
pls::cs::Int32 eva2 = game::GameUtil::RateConvert(cs_arg0_204, 0, 6, cs_arg3_204, cs_arg4_204, true);
pls::cs::Int32 fanAddParamNum2 = data::FanActData::GetFanAddParamNum(eva2, num48);
SubForm::Draw_up(g, num2 + 43, num3 + 3, fanAddParamNum2, 1);
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
kairo::unity::ui::Graphics::DrawString2(require(g), literal(u"<co=4B8FFF>費用</co>"), 80.0f, 175.0f, 1);
num2 = -25;
num3 = 173;
pls::cs::Int32 cs_arg0_205 = require(fanActData3)->rank_; pls::cs::Int32 cs_arg3_205 = require(fanActData3)->cost_[0]; pls::cs::Int32 cs_arg4_205 = require(fanActData3)->cost_[1];
pls::cs::Int32 num49 = game::GameUtil::RateConvert(cs_arg0_205, 0, 6, cs_arg3_205, cs_arg4_205, true);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(83); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(94); pls::cs::Int32 cs_arg5 = require(fanActData3)->costType_; require(apdat_)->DrawSeb(g, num2 + 150, num3, cs_arg3, cs_arg4, cs_arg5); }
if (require(udat_)->ChResearchPoin(require(fanActData3)->costType_, num49)) {
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(num49), num2 + 169, num3 + 3, 0, 1);
} else {
require(apdat_)->DrawNumImageLongIntInt(g, 91, pls::cs::cast_integral<pls::cs::Int64>(num49), num2 + 169, num3 + 3, 0, 1);
}
num = 192;
pls::cs::Int32 num50 = 40;
if (select_ == 0) {
SubForm::Draw_btmMsg(g, literal(u"いざ実行"), 120 - num50, num, true, true);
SubForm::Draw_btmMsg(g, literal(u"考え直す"), 120 + num50, num, false, false);
} else if (select_ == 1) {
SubForm::Draw_btmMsg(g, literal(u"いざ実行"), 120 - num50, num, false, false);
SubForm::Draw_btmMsg(g, literal(u"考え直す"), 120 + num50, num, true, true);
}
num50 = 58;
for (pls::cs::Int32 num51 = 0; num51 < 2; ++num51) {
num2 = 75 - num50 / 2 + 90 * num51;
{ pls::cs::Int32 cs_arg2 = num2 + SubForm::DLGSEL_TRECT()[num51][0]; pls::cs::Int32 cs_arg3 = num3 - 2 + SubForm::DLGSEL_TRECT()[num51][1]; pls::cs::Int32 cs_arg4 = num50 + SubForm::DLGSEL_TRECT()[num51][2]; pls::cs::Int32 cs_arg5 = 16 + SubForm::DLGSEL_TRECT()[num51][3]; surface::GameView::AddTouch(g, 3, cs_arg2, cs_arg3, cs_arg4, cs_arg5, 0x20000 | num51);}
}
} else if (type_ == 41) {
require(apdat_)->DrawWindow(g, 228, 176, 0, literal(u"地域の活動"));
require(apdat_)->DrawBox(g, 12, 136, 227, 205);
pls::cs::Ref<data::FanActData> fanActData4 = fanActData_;
coalescedValue = 30;
num = 64;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resEvent_)->img.get_Item(10); require(g)->DrawImage(cs_arg0, coalescedValue, num); }());});
coalescedValue = 85;
num = 70;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resEvent_)->img.get_Item(8); require(g)->DrawImage(cs_arg0, coalescedValue, num); }());});
coalescedValue = 100;
num = 78;
Draw_fanActBack(g, require(fanActData4)->icon_, coalescedValue, num);
for (pls::cs::Int32 num52 = 0; num52 < 6; ++num52) {
pls::cs::Ref<data::PlayerData> playerData2 = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), num52);}));
num2 = 41 + 17 * num52;
if (num52 / 3 == 1) {
num2 = 165 + 17 * (num52 - 3);
}
num3 = 142;
require(udat_)->SetDispPlayerData(0, require(udat_)->selectUniform_, require(playerData2)->faceImg_, 0, 1 + num52 / 3);
require(udat_)->DrawDispPlayer(g, num2, num3);
}
if ([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::FA2_ANIME_TIME()[3]; return cs_left < cs_right; }()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<0> の"), require(fanActData4)->name_); require(g)->DrawString(cs_arg0, 120.0f, 163.0f, 2); }());});
num = 186;
pls::cs::Int32 cs_arg0_206 = frame_; pls::cs::Int32 cs_arg1_206 = SubForm::FA2_ANIME_TIME()[2]; pls::cs::Int32 cs_arg2_206 = SubForm::FA2_ANIME_TIME()[3] - 30;
pls::cs::Int32 num53 = game::GameUtil::RateConvert(cs_arg0_206, cs_arg1_206, cs_arg2_206, 0, 12, true);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(0.0f, num, 240.0f, num53, true);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 84, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"活動完了！"), 120.0f, num, 2);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
} else {
coalescedValue = 35;
num = 148;
for (pls::cs::Int32 num54 = 0; num54 < data::FanActData::fa_id().length(); ++num54) {
num2 = coalescedValue + 7;
num3 = num + 16 * num54;
pls::cs::Int32 num55 = data::FanActData::fa_id()[num54];
IntArray array = GetMeterParam(num54);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
SubForm::SetFontSize(g, 10);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = data::FanActData::element_name()[num55]; require(g)->DrawString(cs_arg0, num2 + 6 - 21 - 3, num3 + 4 + 1); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = data::FanActData::element_name()[num55]; require(g)->DrawString(cs_arg0, num2 + 6 - 21, num3 + 4); }());});
}
SubForm::ResetFontSize(g);
pls::cs::Int32 fanEva2 = data::FanActData::GetFanEva(num55);
pls::cs::Int32 fanDispParam2 = data::FanActData::GetFanDispParam(array[1], num55);
if (num55 == 3) {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(65); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(75); pls::cs::Int32 cs_arg5 = array[3]; require(apdat_)->DrawSeb(g, num2 + 37 + 93, num3 + 16, cs_arg3, cs_arg4, cs_arg5); }
pls::cs::Int32 num57 = 0;
num57 = game::GameUtil::RateConvert(array[1], 0, 100, 0, 64, true);
if (array[3] == 6) {
num57 = 0;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(160, 160, 160);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num2 + 56, num3 + 5, 65.0f, 9.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 254, 0);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2 + 56 + 1, num3 + 5 + 1, num57, 8.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2 + 56 + 1 + num57, num3 + 5 + 1, 64 - num57, 8.0f);});
} else if (num55 == 0) {
require(apdat_)->DrawNumImageComma(g, 78, pls::cs::cast_integral<pls::cs::Int64>(fanDispParam2), num2 + 100 + 10, num3 + 5, 0, 0, 4);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(78); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(105); require(apdat_)->DrawSeb(g, num2 + 102 + 10, num3 + 6, cs_arg3, cs_arg4, 18); }
} else if (num55 == 1) {
pls::cs::Int32 num56 = 0;
num56 = game::GameUtil::RateConvert(fanDispParam2, 0, 100, 0, 50, true);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(129); require(g)->DrawImage(cs_arg0, num2 + 49 + 10, num3 + 4, 0, 0, 52, 10); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(129); require(g)->DrawImage(cs_arg0, num2 + 49 + 1 + 10, num3 + 5, 1, 10, num56, 8); }());});
require(apdat_)->DrawNumImageComma(g, 78, pls::cs::cast_integral<pls::cs::Int64>(fanDispParam2), num2 + 102 + 10, num3 + 4, 0, 0, 1);
} else if (num55 == 2) {
require(apdat_)->DrawNumImageLongIntInt(g, 78, pls::cs::cast_integral<pls::cs::Int64>(fanDispParam2), num2 + 100 + 10, num3 + 5, 0, 4);
}
cs_label_coalescedSwitchExit131982: ;
;
}
num = 153;
pls::cs::Int32 num58 = 0;
pls::cs::Int32 num59 = 0;
for (pls::cs::Int32 num60 = 0; num60 < data::FanActData::fa_id().length(); ++num60) {
num2 = 214;
num3 = num + 16 * num60;
IntArray array2 = GetMeterParam(num60);
num58 = num60 * 6;
num59 = ([&]() -> pls::cs::Int32 { auto cs_left = frame_; auto cs_right = SubForm::FA2_ANIME_TIME()[4]; return cs_left - cs_right; }()) - num58;
if (num59 < 0) {

} else {
num59 = main::AppData::ClampMax(num59, 12);
SetWinCharaJamp(num59, 0, -6, 12);
pls::cs::Int32 cnt = array2[9];
SubForm::Draw_upParam(g, 35, num2, num3 + SubForm::WIN_CHA()[1], cnt);
}
}
}
surface::GameView::AddTouch(2);
} else if (type_ == 42) {
require(apdat_)->DrawWindow(g, 228, 185, 0, literal(u"スポンサー"));
num = 59;
SubForm::SetFontSize(g, 10);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"契約できる会社"), 25.0f, num);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"満足"), 134.0f, num);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"費用"), 197.0f, num);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"契約できる会社"), 25.0f, num);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"満足"), 141.0f, num);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"費用"), 187.0f, num);});
}
SubForm::ResetFontSize(g);
num = 62;
require(apdat_)->DrawBox(g, 15, num, 224, num + 109);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
num2 = 24;
for (pls::cs::Int32 num61 = scrollValue_; num61 < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}); ++num61) {
pls::cs::Int32 num62 = num61 - scrollValue_;
if (num62 >= 6) {
break;
}
pls::cs::Ref<data::SponsorData> sponsorData = pls::cs::unbox<pls::cs::Ref<data::SponsorData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), num61);}));
num3 = num + 15 + num62 * 17;
if (num61 == select_) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_SELECT());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(24.0f, num3, 195.0f, 16.0f);});
}
surface::GameView::AddTouch(g, 11, 24, num3, 195, 16, 0x20000 | num61, require(kairo::unity::surface::TouchOption::CreateInt(16))->Margin(30, 0, 0, 0));
if (require(sponsorData)->state_ == 2) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(178); require(g)->DrawImage(cs_arg0, num2 - 3, num3); }());});
}
if (require(sponsorData)->IsNew()) {
SubForm::Draw_newMark(g, num2 - 8, num3 + 2, frame_);
}
if (require(sponsorData)->state_ == 2) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(183, 165, 156);}));});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
}
SubForm::SetFontSize(g, 10);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(sponsorData)->name_, num2 + 15, num3 + 2 + 1);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(sponsorData)->name_, num2 + 15, num3 + 2);});
}
SubForm::ResetFontSize(g);
if (require(sponsorData)->state_ == 2) {
require(apdat_)->DrawNumImageLongIntInt(g, 78, pls::cs::cast_integral<pls::cs::Int64>(require(sponsorData)->satisfactPoint_), num2 + 132, num3 + 3, 0, 4);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(90); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(131); require(apdat_)->DrawSeb(g, num2 + 132 + 1, num3 + 3, cs_arg3, cs_arg4, 1); }
}
if (require(sponsorData)->state_ == 2) {
SubForm::SetFontSize(g, 8);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(183, 165, 156);}));});
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"契約中"), 173.0f, num3 + 2 + 2 + 1);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"契約中"), 177.0f, num3 + 2);});
}
SubForm::ResetFontSize(g);
} else {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(83); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(94); pls::cs::Int32 cs_arg5 = require(sponsorData)->costType_; require(apdat_)->DrawSeb(g, num2 + 150, num3 + 1, cs_arg3, cs_arg4, cs_arg5); }
if (require(udat_)->ChResearchPoin(require(sponsorData)->costType_, require(sponsorData)->cost_)) {
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(require(sponsorData)->cost_), num2 + 192, num3 + 3, 0, 4);
} else {
require(apdat_)->DrawNumImageLongIntInt(g, 91, pls::cs::cast_integral<pls::cs::Int64>(require(sponsorData)->cost_), num2 + 192, num3 + 3, 0, 4);
}
}
if (num61 == select_) {
{ auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(apdat_)->resCom2_)->img; require(cs_receiver)->Draw(g, num2 - 6, num3 + 9, cs_arg3, -1); }
}
}
{ auto cs_receiver = apdat_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg5 = scrollValue_; pls::cs::Int32 cs_arg6 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}) - 1; require(cs_receiver)->DrawVerticalScroll2(cs_arg0, 226, 70, 3, 109, cs_arg5, cs_arg6, 6); }
coalescedValue = 33;
if (SubForm::En()) {
coalescedValue += -4;
}
num = 171;
require(apdat_)->DrawBox(g, 15, num + 3, 224, num + 3 + 40 - 3);
pls::cs::Ref<data::SponsorData> sponsorData2 = pls::cs::unbox<pls::cs::Ref<data::SponsorData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), select_);}));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"特典"), coalescedValue + 15 - 5, num + 18);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"特典"), coalescedValue + 15, num + 18);});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"毎試合"), coalescedValue + 38 + 20, num + 18, 1);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = data::FanActData::element_name()[require(sponsorData2)->privilegeType_]; require(g)->DrawString(cs_arg0, coalescedValue + 38 + 20, num + 18 + 16, 1); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"毎試合"), 111.0f, num + 18, 2);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = data::FanActData::element_name()[require(sponsorData2)->privilegeType_]; require(g)->DrawString(cs_arg0, 111.0f, num + 18 + 16, 2); }());});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::cs::Int32 income = require(sponsorData2)->GetIncome();
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = pls::cs::String::concat(literal(u"+"), MyFormBase::YEN(literal(u"万円"), pls::cs::cast_integral<pls::cs::Int64>(income))); require(g)->DrawString(cs_arg0, coalescedValue + 151 + 20, num + 18, 4); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = pls::cs::String::concat(literal(u"+"), MyFormBase::YEN(literal(u"万円"), pls::cs::cast_integral<pls::cs::Int64>(income))); require(g)->DrawString(cs_arg0, coalescedValue + 184, num + 18, 4); }());});
}
pls::cs::Int32 fanAddParamNum3 = data::FanActData::GetFanAddParamNum(require(sponsorData2)->privilegeValue_, require(sponsorData2)->privilegeType_);
if (SubForm::En()) {
SubForm::Draw_up(g, coalescedValue + 115 + 20, num + 18 + 16, fanAddParamNum3, 1);
} else {
SubForm::Draw_up(g, coalescedValue + 148, num + 18 + 16, fanAddParamNum3, 1);
}
if (udArrowCnt > 0) {
--udArrowCnt;
}
coalescedValue = 120;
num = 80;
if (udArrowCnt == 0) {
surface::GameView::AddTouch(g, 2, coalescedValue - 25 - 5, num - 51, 70, 30, 1376456, kairo::unity::surface::TouchOption::CreateInt(2));
surface::GameView::AddTouch(g, 2, coalescedValue - 25 - 5, num + 113, 70, 30, 1376456, kairo::unity::surface::TouchOption::CreateInt(2));
} else {
pls::cs::Ref<kairo::unity::surface::TouchOption> touchOption3 = kairo::unity::surface::TouchOption::CreateInt(2);
pls::cs::Ref<kairo::unity::surface::TouchOption> touchOption4 = kairo::unity::surface::TouchOption::CreateInt(2);
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = coalescedValue; pls::cs::Int32 cs_arg3 = num - 13 - 1; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(touchOption3)->Margin(40, 40, 45, 0); surface::GameView::AddTouchSeb(cs_arg0, 24, cs_arg2, cs_arg3, cs_arg4, 0, 17, cs_arg7);}
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = coalescedValue; pls::cs::Int32 cs_arg3 = num + 77 + 13; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(touchOption4)->Margin(40, 40, -15, 60); surface::GameView::AddTouchSeb(cs_arg0, 24, cs_arg2, cs_arg3, cs_arg4, 1, 19, cs_arg7);}
}
} else if (type_ == 43) {
require(apdat_)->DrawWindow(g, 228, 176, 0, literal(u"スポンサー"));
require(apdat_)->DrawBox(g, 83, 52, 227, 134);
require(apdat_)->DrawBox(g, 12, 136, 227, 205);
pls::cs::Ref<data::SponsorData> sponsorData3 = sponsorData_;
coalescedValue = 11;
num = 73;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resEvent_)->img.get_Item(8); require(g)->DrawImage(cs_arg0, coalescedValue, num); }());});
data::SponsorData::Draw_sponsorChara(g, require(sponsorData3)->charaIndex_, coalescedValue + 36, num + 63);
require(apdat_)->DrawFukidashiKimochi(g, 45, 95, require(sponsorData3)->feelPt_, 78);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(sponsorData3)->name_, 155.0f, 71.0f, 2);});
require(textLay_)->Draw(g, 95.0f, 88.0f, 0);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
SubForm::SetFontSize(g, 10);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<0>と交渉に向かいます"), require(sponsorData3)->name_); require(g)->DrawString(cs_arg0, 120.0f, 158.0f, 2); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<0>と交渉に向かいます"), require(sponsorData3)->name_); require(g)->DrawString(cs_arg0, 120.0f, 157.0f, 2); }());});
}
SubForm::ResetFontSize(g);
num2 = 37;
num3 = 177;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"費用"), num2, num3);});
num2 = 69;
num3 = 175;
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(83); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(94); pls::cs::Int32 cs_arg5 = require(sponsorData3)->costType_; require(apdat_)->DrawSeb(g, num2, num3, cs_arg3, cs_arg4, cs_arg5); }
if (require(udat_)->ChResearchPoin(require(sponsorData3)->costType_, require(sponsorData3)->cost_)) {
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(require(sponsorData3)->cost_), num2 + 30, num3 + 3, 0, 2);
} else {
require(apdat_)->DrawNumImageLongIntInt(g, 91, pls::cs::cast_integral<pls::cs::Int64>(require(sponsorData3)->cost_), num2 + 30, num3 + 3, 0, 2);
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
StringArray array3 = StringArray::from({literal(u"簡単"), literal(u"普通"), literal(u"難しい")});
pls::cs::String empty = pls::cs::String(u"");
if ((require(sponsorData3)->difficult_ < 50)) {
empty = array3[0];
} else {
if ((require(sponsorData3)->difficult_ < 100)) {
empty = (array3[1]);
} else {
empty = (array3[2]);
}
}
pls::cs::String arg = MyFormBase::LT(empty);
{ pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<co=4B8FFF>難度</co>  <0>"), arg); kairo::unity::ui::Graphics::DrawString2(require(g), cs_arg0, 170.0f, 177.0f, 2); }
pls::cs::Int32 num63 = 3;
num3 = 195;
num = 193;
pls::cs::Int32 num64 = 40;
if (select_ == 0) {
SubForm::Draw_btmMsg(g, literal(u"いざ出陣"), 120 - num64, num, true, true);
SubForm::Draw_btmMsg(g, literal(u"考え直す"), 120 + num64, num, false, false);
} else if (select_ == 1) {
SubForm::Draw_btmMsg(g, literal(u"いざ出陣"), 120 - num64, num, false, false);
SubForm::Draw_btmMsg(g, literal(u"考え直す"), 120 + num64, num, true, true);
}
num64 = 58;
for (pls::cs::Int32 num65 = 0; num65 < 2; ++num65) {
num2 = 75 - num64 / 2 + 90 * num65;
{ pls::cs::Int32 cs_arg2 = num2 + SubForm::DLGSEL_TRECT()[num65][0]; pls::cs::Int32 cs_arg3 = num3 - 2 + SubForm::DLGSEL_TRECT()[num65][1]; pls::cs::Int32 cs_arg4 = num64 + SubForm::DLGSEL_TRECT()[num65][2]; pls::cs::Int32 cs_arg5 = 16 + SubForm::DLGSEL_TRECT()[num65][3]; surface::GameView::AddTouch(g, 3, cs_arg2, cs_arg3, cs_arg4, cs_arg5, 0x20000 | num65);}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(0.0f, 194.0f, 240.0f, 20.0f, true);});
SubForm::Draw_chara(g, 172, 0, 0, frame_, 26, 222);
SubForm::Draw_chara(g, 171, 0, 1, frame_, 212, 222);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
} else {
_draw4(g);
}

}
}

// M:form.SubForm._draw4(kairo.unity.ui.Graphics)
void SubForm::_draw4(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm._draw4(kairo.unity.ui.Graphics)",game);
{
game::UserData::ensure_initialized();
data::TrainingData::ensure_initialized();
data::PlayerData::ensure_initialized();
data::SupervisorData::ensure_initialized();

pls::cs::Int32 num4;
pls::cs::Int32 num;
pls::cs::Int32 num2;
pls::cs::Int32 num3;
num3 = 0;
num2 = num3;
num = num2;
num4 = num;
pls::cs::Ref<pls::kairo::Font> font = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{});});
if (type_ == 44) {
require(apdat_)->DrawWindow(g, 228, 176, 0, literal(u"スポンサー交渉"));
require(apdat_)->DrawBox(g, 12, 136, 227, 205);
pls::cs::Ref<data::SponsorData> sponsorData = sponsorData_;
num4 = 30;
num = 64;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resEvent_)->img.get_Item(7); require(g)->DrawImage(cs_arg0, num4, num); }());});
num4 = 16;
num = 70;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resEvent_)->img.get_Item(8); require(g)->DrawImage(cs_arg0, num4, num); }());});
SubForm::Draw_chara(g, 172, 0, 0, frame_, num4 + 26, num + 63);
SubForm::Draw_chara(g, 171, 0, 0, frame_, num4 + 44, num + 63);
pls::cs::Int32 cs_arg0_207 = ([&]() -> pls::cs::Int32 { auto cs_left_207 = frame_; auto cs_right_207 = SubForm::SP_ANIME_TIME()[0]; return cs_left_207 - cs_right_207; }()); pls::cs::Int32 cs_arg1_207 = ([&]() -> pls::cs::Int32 { auto cs_left_207 = SubForm::SP_ANIME_TIME()[1]; auto cs_right_207 = SubForm::SP_ANIME_TIME()[0]; return cs_left_207 - cs_right_207; }());
IntArray feelPtEfCommentParam = game::UserData::GetFeelPtEfCommentParam(cs_arg0_207, cs_arg1_207);
if (feelPtEfCommentParam[0] == 1) {
pls::cs::String text = game::UserData::EF_FEELPT_COMMENT_()[feelPtEfCommentParam[1]][feelPtEfCommentParam[2]];
require(apdat_)->DrawFukidashiBalloon(g, text, num4 + 33, num + 24, SubForm::SC_WINDOW_BLUE());
}
num4 = 155;
num = 70;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resEvent_)->img.get_Item(8); require(g)->DrawImage(cs_arg0, num4, num); }());});
data::SponsorData::Draw_sponsorChara(g, require(sponsorData)->charaIndex_, num4 + 35, num + 63);
pls::cs::Int32 cs_arg0_208 = ([&]() -> pls::cs::Int32 { auto cs_left_208 = frame_; auto cs_right_208 = SubForm::SP_ANIME_TIME()[0]; return cs_left_208 - cs_right_208; }()); pls::cs::Int32 cs_arg1_208 = ([&]() -> pls::cs::Int32 { auto cs_left_208 = SubForm::SP_ANIME_TIME()[1]; auto cs_right_208 = SubForm::SP_ANIME_TIME()[0]; return cs_left_208 - cs_right_208; }());
pls::cs::Int32 feelPtEf = game::UserData::GetFeelPtEf(cs_arg0_208, cs_arg1_208);
require(apdat_)->DrawFukidashiKimochi(g, 189, 94, feelPtEf, 78);
pls::cs::Int32 cs_arg0_209 = ([&]() -> pls::cs::Int32 { auto cs_left_209 = frame_; auto cs_right_209 = SubForm::SP_ANIME_TIME()[0]; return cs_left_209 - cs_right_209; }()); pls::cs::Int32 cs_arg1_209 = ([&]() -> pls::cs::Int32 { auto cs_left_209 = SubForm::SP_ANIME_TIME()[1]; auto cs_right_209 = SubForm::SP_ANIME_TIME()[0]; return cs_left_209 - cs_right_209; }());
IntArray addFeelPtEf = game::UserData::GetAddFeelPtEf(cs_arg0_209, cs_arg1_209);
if (addFeelPtEf[0] >= 1) {
pls::cs::Int32 num5 = 0;
pls::cs::Int32 num6 = 78;
pls::cs::Int32 num7 = 105;
if (addFeelPtEf[0] == 2) {
num5 = frame_ % 8 / 4 * -2;
num6 = 35;
num7 = 103;
}
pls::cs::Int32 num8 = main::AppData::GetFig(pls::cs::cast_integral<pls::cs::Int64>(addFeelPtEf[1])) * 8 + 8 + 2;
num3 = 76;
num2 = 208;
{ pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(addFeelPtEf[1]); require(apdat_)->DrawNumImageLongIntInt(g, num6, cs_arg2, num2, num3 + num5, 0, 4); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(num6); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(num7); require(apdat_)->DrawSeb(g, num2 - num8, num3 + num5, cs_arg3, cs_arg4, 14); }
}
num = 153;
if ([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::SP_ANIME_TIME()[1]; return cs_left < cs_right; }()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<0>と交渉中"), require(sponsorData)->name_); require(g)->DrawString(cs_arg0, 120.0f, num, 2); }());});
} else {
pls::cs::Int32 cs_arg0_210 = frame_; pls::cs::Int32 cs_arg1_210 = SubForm::SP_ANIME_TIME()[2]; pls::cs::Int32 cs_arg2_210 = SubForm::SP_ANIME_TIME()[3];
pls::cs::Int32 num9 = game::GameUtil::RateConvert(cs_arg0_210, cs_arg1_210, cs_arg2_210, 0, 14, true);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(0.0f, num, 240.0f, num9, true);});
pls::cs::String feelPtEfRetStr = game::UserData::GetFeelPtEfRetStr(game::UserData::NEGOTIATE_RESULT_DISPVALUE()[3]);
if (game::UserData::NEGOTIATE_RESULT_DISPVALUE()[3] < 100) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(feelPtEfRetStr, 120.0f, num, 2);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
}
num2 = 41;
num3 = 169;
pls::cs::Int32 cs_arg0_211 = frame_; pls::cs::Int32 cs_arg1_211 = SubForm::SP_ANIME_TIME()[0]; pls::cs::Int32 cs_arg2_211 = SubForm::SP_ANIME_TIME()[1];
pls::cs::Int32 num10 = game::GameUtil::RateConvert(cs_arg0_211, cs_arg1_211, cs_arg2_211, 0, 156, true);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2, num3 + 1, 158.0f, 10.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(115, 175, 188);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num2, num3 + 1, 157.0f, 9.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 254, 0);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2 + 1, num3 + 2, num10, 8.0f);});
num3 = 206;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(0.0f, num3 - 20, 240.0f, 20.0f, true);});
for (pls::cs::Int32 i = 0; i < game::UserData::NEGOTIATE_RESULT_TH().length(); ++i) {
num2 = 70 + 50 * i;
pls::cs::Int32 num11 = 0;
pls::cs::Int32 frame = game::UserData::NEGOTIATE_RESULT_TH()[i];
pls::cs::Int32 num12 = ([&]() -> pls::cs::Int32 { auto cs_left = ([&]() -> pls::cs::Int32 { auto cs_left = (([&]() -> pls::cs::Int32 { auto cs_left = SubForm::SP_ANIME_TIME()[1]; auto cs_right = SubForm::SP_ANIME_TIME()[0]; return cs_left - cs_right; }())); auto cs_right = game::UserData::WAIT_TIME()[i]; return cs_left * cs_right; }()) / 100; auto cs_right = SubForm::SP_ANIME_TIME()[0]; return cs_left + cs_right; }()) - 5;
num11 = game::GameUtil::RateConvert(frame_ - num12, 0, 10, -20, 0, true);
if (num11 <= -20) {
continue;
}
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(97); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(175); require(apdat_)->DrawSeb(g, num2, num3 + num11, cs_arg3, cs_arg4, frame); }
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
surface::GameView::AddTouch(2);
} else if (type_ == 45) {
require(apdat_)->DrawWindow(g, 228, 191, 0, literal(u"特別な練習"));
require(apdat_)->DrawBox(g, 12, 129, 227, 213);
num4 = 30;
num = 57;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resEvent_)->img.get_Item(11); require(g)->DrawImage(cs_arg0, num4, num); }());});
num3 = 126;
bool flag = false;
for (pls::cs::Int32 j = 0; j < data::TrainingData::TRA_PLAYER().length(); ++j) {
num2 = 66 + 54 * j;
if (data::TrainingData::TRA_PLAYER()[j] == -1) {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(92); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(167); require(apdat_)->DrawSeb(g, num2, num3, cs_arg3, cs_arg4, 1); }
} else {
pls::cs::Ref<data::PlayerData> playerData = require(apdat_)->pData_.get_Item(data::TrainingData::TRA_PLAYER()[j]);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(92); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(167); require(apdat_)->DrawSeb(g, num2, num3, cs_arg3, cs_arg4, 0); }
pls::cs::Int32 frame2 = frame_ % 20 / 5;
require(udat_)->SetDispPlayerData(0, require(udat_)->selectUniform_, require(playerData)->faceImg_, frame2, 1);
require(udat_)->DrawDispPlayer(g, num2, num3 - 4);
flag = false;
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_IndexOf(require(require(udat_)->memberPDataist_), pls::cs::box(playerData));}) < 11) {
flag = true;
}
if (flag) {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(47); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(51); pls::cs::Int32 cs_arg5 = require(playerData)->role_; require(apdat_)->DrawSeb(g, num2 - 10, num3 - 1, cs_arg3, cs_arg4, cs_arg5); }
} else {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(47); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(51); require(apdat_)->DrawSeb(g, num2 - 10, num3 - 1, cs_arg3, cs_arg4, 4); }
}
}
if (select_ == j) {
require(udat_)->Draw_colorRect(g, num2 - 16, num3 - 32, frame_, 31, 31);
}
surface::GameView::AddTouch(g, 3, num2 - 16 - 30, num3 - 32 - 15, 92, 62, 0x20000 | j);
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(222, 234, 225);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(14.0f, 170.0f, 224.0f, 170.0f, 1.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(14.0f, 195.0f, 224.0f, 195.0f, 1.0f);});
num3 = 148;
for (pls::cs::Int32 k = 0; k < data::TrainingData::TRA_PLAYER().length(); ++k) {
num2 = 66 + 54 * k;
if (select_ == k) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_SELECT());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2 - 20, num3, 40.0f, 17.0f);});
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(24); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(27); require(apdat_)->DrawSeb(g, num2 - 20 - 5, num3 + 8, cs_arg3, cs_arg4, 0); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(24); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(27); require(apdat_)->DrawSeb(g, num2 + 20 + 5, num3 + 8, cs_arg3, cs_arg4, 1); }
}
surface::GameView::AddTouch(g, 3, num2 - 20, num3 - 3, 40, 23, 0x20000 | k);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (data::TrainingData::TRA_PLAYER()[k] == -1) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"---"), num2, num3 + 2, 2);});
continue;
}
pls::cs::Ref<data::PlayerData> playerData2 = require(apdat_)->pData_.get_Item(data::TrainingData::TRA_PLAYER()[k]);
SubForm::SetFontSize(g, 10);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(playerData2)->name_, num2, num3 + 2 + 1, 2);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(playerData2)->name_, num2, num3 + 2, 2);});
}
SubForm::ResetFontSize(g);
}
num = 175;
if (select_ == 3) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_SELECT());});
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(63.0f, num, 93.0f, 16.0f);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(63.0f, num, 85.0f, 16.0f);});
}
}
surface::GameView::AddTouch(g, 2, 40, num, 160, 16, 131075, require(kairo::unity::surface::TouchOption::Create())->Margin(32, 32, 0, 8));
pls::cs::Ref<data::TrainingData> trainingData = require(apdat_)->trainingData_.get_Item(data::TrainingData::TRA_SELECT_TRA());
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
SubForm::SetFontSize(g, 10);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾄﾚｰﾆﾝｸﾞ"), 20.0f, 177.0f);});
SubForm::ResetFontSize(g);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(trainingData)->name_, 110.0f, 177.0f, 2);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(trainingData)->name_, 106.0f, 177.0f, 2);});
}
num2 = 152;
if (SubForm::En()) {
num2 += 7;
}
num3 = 175;
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(83); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(94); pls::cs::Int32 cs_arg5 = require(trainingData)->costType_; require(apdat_)->DrawSeb(g, num2, num3, cs_arg3, cs_arg4, cs_arg5); }
if (require(udat_)->ChResearchPoin(require(trainingData)->costType_, require(trainingData)->cost_)) {
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(require(trainingData)->cost_), num2 + 41, num3 + 3, 0, 4);
} else {
require(apdat_)->DrawNumImageLongIntInt(g, 91, pls::cs::cast_integral<pls::cs::Int64>(require(trainingData)->cost_), num2 + 41, num3 + 3, 0, 4);
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(151, 151, 152);}));});
SubForm::SetFontSize(g, 10);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"消費"), num2 + 43, 179.0f);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"消費"), num2 + 43, 177.0f);});
}
SubForm::ResetFontSize(g);
num = 200;
if (select_ == 4) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_SELECT());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(90.0f, num, 60.0f, 16.0f);});
}
surface::GameView::AddTouch(g, 2, 40, num, 160, 16, 131076, require(kairo::unity::surface::TouchOption::Create())->Margin(32, 32, 0, 12));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"実行する"), 120.0f, num + 2, 2);});
if (select_ == 4) {
{ auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(apdat_)->resCom2_)->img; require(cs_receiver)->Draw(g, 86.0f, num + 9, cs_arg3, -1); }
}
} else if (type_ == 46) {
{ auto cs_receiver = apdat_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; auto cs_left_212 = pls::cs::String::concat(([&]() { auto cs_left_212 = pls::cs::String::concat(MyFormBase::LT(literal(u"練習リスト")), literal(u" ")); auto cs_right_212 = integer_string((page_ + 1)); return pls::cs::String::concat(cs_left_212,cs_right_212); }()), literal(u"/")); auto cs_right_212 = integer_string(((pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}) - 1) / 5 + 1));
pls::cs::String cs_arg4 = pls::cs::String::concat(cs_left_212,cs_right_212); require(cs_receiver)->DrawWindow(cs_arg0, 223, 182, 0, cs_arg4); }
if (page_ > 0) {
{ pls::cs::Int32 cs_arg2 = 44 - frame_ % 20 / 5; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); surface::GameView::AddTouchSeb(g, 1, cs_arg2, 47, cs_arg4, 0, 16);}
}
if ([&]() -> bool { auto cs_left = page_; auto cs_right = (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}) - 1) / 5; return cs_left < cs_right; }()) {
{ pls::cs::Int32 cs_arg2 = 193 + frame_ % 20 / 5; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); surface::GameView::AddTouchSeb(g, 1, cs_arg2, 47, cs_arg4, 1, 18);}
}
num = 60;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"名前"), 52.0f, num);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"消費ﾎﾟｲﾝﾄ"), 208.0f, num, 4);});
num = 63;
require(apdat_)->DrawBox(g, 14, num, 222, num + 92);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
num2 = 23;
for (pls::cs::Int32 l = 5 * page_; l < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}); ++l) {
pls::cs::Int32 num13 = l - 5 * page_;
if (num13 >= 5) {
break;
}
pls::cs::Ref<data::TrainingData> trainingData2 = pls::cs::unbox<pls::cs::Ref<data::TrainingData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), l);}));
num3 = num + 15 + num13 * 17;
Draw_trainingIcon(g, require(trainingData2)->icon_, num2, num3);
if (l == select_ + page_ * 5) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(247, 203, 125);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2 + 16 + 2, num3, 176.0f, 16.0f);});
}
surface::GameView::AddTouch(g, 11, num2 + 16 - 16, num3, 192, 16, 0x20000 | num13, require(kairo::unity::surface::TouchOption::CreateInt(16))->Margin(30, 0, 0, 0));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(trainingData2)->name_, num2 + 18, num3 + 2);});
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(83); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(94); pls::cs::Int32 cs_arg5 = require(trainingData2)->costType_; require(apdat_)->DrawSeb(g, num2 + 138, num3 + 1, cs_arg3, cs_arg4, cs_arg5); }
if (require(udat_)->ChResearchPoin(require(trainingData2)->costType_, require(trainingData2)->cost_)) {
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(require(trainingData2)->cost_), num2 + 184, num3 + 4, 0, 4);
} else {
require(apdat_)->DrawNumImageLongIntInt(g, 91, pls::cs::cast_integral<pls::cs::Int64>(require(trainingData2)->cost_), num2 + 184, num3 + 4, 0, 4);
}
if (require(trainingData2)->IsNew()) {
SubForm::Draw_newMark(g, num2 - 5, num3 + 2, frame_);
}
if (l == select_ + page_ * 5) {
{ auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(apdat_)->resCom2_)->img; require(cs_receiver)->Draw(g, num2 - 6, num3 + 9, cs_arg3, -1); }
}
}
num4 = 33;
num = 159;
require(apdat_)->DrawBox(g, 14, num, 222, num + 45);
pls::cs::Ref<data::TrainingData> trainingData3 = pls::cs::unbox<pls::cs::Ref<data::TrainingData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), select_ + page_ * 5);}));
for (pls::cs::Int32 m = 0; m < 5; ++m) {
num2 = 49 + 67 * (m / 2);
num3 = num + 14 + 21 * (m % 2);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(197, 255, 183);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2, num3, 34.0f, 18.0f);});
pls::cs::Int32 num14 = (([&]() -> pls::cs::Int32 { auto cs_left = require(trainingData3)->eff_[m][0]; auto cs_right = require(trainingData3)->eff_[m][1]; return cs_left + cs_right; }())) / 2;
if (num14 > 0) {
pls::cs::Int32 trainingAddParamNum = data::TrainingData::GetTrainingAddParamNum(num14);
SubForm::Draw_up(g, num2 + 4, num3 + 5, trainingAddParamNum, 1);
}
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(75); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(122); require(apdat_)->DrawSeb(g, num2 - 28, num3 + 3, cs_arg3, cs_arg4, m); }
}
} else {
if (type_ == 48) {

} else if (type_ == 49) {
require(apdat_)->DrawWindow(g, 228, 176, 0, literal(u"特別な練習"));
require(apdat_)->DrawBox(g, 12, 136, 227, 205);
pls::cs::Ref<data::TrainingData> trainingData4 = require(apdat_)->trainingData_.get_Item(data::TrainingData::TRA_SELECT_TRA());
IntArray array = IntArray::from({8, 11, 13, 9, 11});
num4 = 30;
num = 64;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resEvent_)->img.get_Item(11); require(g)->DrawImage(cs_arg0, num4, num); }());});
pls::cs::Int32 num15 = 0;
for (pls::cs::Int32 n = 0; n < data::TrainingData::TRA_PLAYER().length(); ++n) {
num2 = 66 + 54 * n;
num3 = 133;
if (data::TrainingData::TRA_PLAYER()[n] == -1) {
continue;
}
pls::cs::Ref<data::PlayerData> playerData3 = require(apdat_)->pData_.get_Item(data::TrainingData::TRA_PLAYER()[n]);
pls::cs::Int32 num16 = 0;
pls::cs::Int32 num17 = 0;
pls::cs::Int32 num18 = 0;
if ([&]() -> bool { auto cs_left = training_cnt; auto cs_right = SubForm::TRA_ANIME_TIME2()[2]; return cs_left < cs_right; }()) {
SetWinCharaTraining(training_cnt, require(trainingData4)->tMode_);
num17 = SubForm::WIN_CHA()[0];
num16 = SubForm::WIN_CHA()[2];
num18 = SubForm::WIN_CHA()[1];
} else {
num17 = 0;
num16 = 0;
}
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(0); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(2); require(apdat_)->DrawSeb(g, num2, num3 - 4 + 1, cs_arg3, cs_arg4, 4); }
require(udat_)->SetDispPlayerData(num17, require(udat_)->selectUniform_, require(playerData3)->faceImg_, num16, 1);
require(udat_)->DrawDispPlayer(g, num2, num3 - 4 + num18);
if (([&]() -> bool { auto cs_left = training_cnt; auto cs_right = SubForm::TRA_ANIME_TIME2()[0]; return cs_left >= cs_right; }()) && ([&]() -> bool { auto cs_left = training_cnt; auto cs_right = SubForm::TRA_ANIME_TIME2()[1]; return cs_left < cs_right; }())) {
auto cs_left_213 = training_cnt; auto cs_right_213 = SubForm::TRA_ANIME_TIME2()[0];
pls::cs::Int32 num19 = cs_left_213 - cs_right_213;
pls::cs::Int32 num20 = num19 / 25;
pls::cs::Int32 num21 = num19 % 25;
pls::cs::Int32 num22 = num2 - 13;
pls::cs::Int32 num23 = 87;
if (num21 >= SubForm::TRA_AT2()[0]) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(214, 236, 244);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num22, num23, 30.0f, 12.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 223);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num22 + 1, num23 + 1, 29.0f, 11.0f);});
pls::cs::Int32 num24 = array[num20];
if (main::AppData::IsLanguageJpBase(false)) {
num24 = 12;
}
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(75); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(122); require(apdat_)->DrawSeb(g, num22 + 15 - num24, num23 - 1, cs_arg3, cs_arg4, num20); }
}
num15 = data::TrainingData::TRA_UPPARAM_DISP()[n][num20];
pls::cs::Int32 cs_arg1_214 = SubForm::TRA_AT()[0]; pls::cs::Int32 cs_arg2_214 = SubForm::TRA_AT()[1];
pls::cs::Int32 num25 = game::GameUtil::RateConvert(num21, cs_arg1_214, cs_arg2_214, 12, 0, true);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(num22, num23 + 15, 51.0f, 12.0f, true);});
if (num15 < 10) {
SubForm::Draw_upParam(g, 78, num22 + 6, num23 + 15 + num25, num15, 1);
} else {
SubForm::Draw_upParam(g, 35, num22 + 6, num23 + 15 + num25, num15, 1);
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
}
}
num2 = 94;
num3 = 132;
pls::cs::Int32 cs_arg0_215 = training_cnt; pls::cs::Int32 cs_arg1_215 = SubForm::TRA_ANIME_TIME2()[0]; pls::cs::Int32 cs_arg2_215 = SubForm::TRA_ANIME_TIME2()[1];
pls::cs::Int32 num26 = game::GameUtil::RateConvert(cs_arg0_215, cs_arg1_215, cs_arg2_215, 0, 50, true);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2, num3 + 1, 52.0f, 10.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(115, 175, 188);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num2, num3 + 1, 51.0f, 9.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 254, 0);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2 + 1, num3 + 2, num26, 8.0f);});
if ([&]() -> bool { auto cs_left = training_cnt; auto cs_right = SubForm::TRA_ANIME_TIME2()[1]; return cs_left >= cs_right; }()) {
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(188); require(g)->DrawImage(cs_arg0, 101.0f, 131.0f); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(188); require(g)->DrawImage(cs_arg0, 107.0f, 131.0f); }());});
}
}
num4 = 20;
num = 149;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(214, 236, 244);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num4, num, 30.0f, 56.0f);});
pls::cs::Int32 num27 = 0;
for (pls::cs::Int32 num28 = 0; num28 < data::PlayerData::PARAM_NAME().length(); ++num28) {
num3 = num + 13 * num28;
pls::cs::Int32 num29 = 12;
if (num28 == pls::cs::Int32(data::PlayerData::PARAM_NAME().length()) - 1) {
num29 = 13;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(214, 236, 244);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num4, num3, 30.0f, num29 - 1);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(num4, num3 + num29, num4 + 186 - 1, num3 + num29, 1.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 223);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num4 + 1, num3 + 1, 29.0f, num29 - 2);});
pls::cs::Int32 num30 = array[num28];
if (main::AppData::IsLanguageJpBase(false)) {
num30 = 12;
}
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(75); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(122); require(apdat_)->DrawSeb(g, num4 + 15 - num30, num3 - 1, cs_arg3, cs_arg4, num28); }
for (pls::cs::Int32 num31 = 0; num31 < data::TrainingData::TRA_PLAYER().length(); ++num31) {
num2 = num4 + 30 + 52 * num31;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(214, 236, 244);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num2, num3, 51.0f, num29 - 1);});
if (data::TrainingData::TRA_PLAYER()[num31] == -1) {
continue;
}
{
pls::cs::Ref<data::PlayerData> playerData4 = require(apdat_)->pData_.get_Item(data::TrainingData::TRA_PLAYER()[num31]);
num27 = data::TrainingData::TRA_UPPARAM_DISP()[num31][num28];
pls::cs::Int32 num32 = 0;
num32 = ([&]() -> pls::cs::Int32 { pls::cs::Int32 cs_arg0 = training_cnt; pls::cs::Int32 cs_arg1 = SubForm::TRA_ANIME_TIME2()[3]; pls::cs::Int32 cs_arg2 = SubForm::TRA_ANIME_TIME2()[4]; pls::cs::Int32 cs_arg3 = require(playerData4)->paramPhysical_[num28]; pls::cs::Int32 cs_arg4 = data::TrainingData::TRA_UPPARAM()[num31][num28]; return game::GameUtil::RateConvert(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, true); }());
pls::cs::Int32 seb = 89;
if (require(playerData4)->paramPhysical_[num28] != num32) {
seb = 104;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(57, 57, 70);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2 + 1, num3 + 1, 50.0f, num29 - 2);});
pls::cs::Int32 phyParamBarW = data::PlayerData::GetPhyParamBarW(num32, 50);
if (num28 == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(252, 54, 0);}));});
} else if (num28 == 1) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(84, 188, 255);}));});
} else if (num28 == 2) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(103, 255, 121);}));});
} else if (num28 == 3) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(248, 248, 248);}));});
} else if (num28 == 4) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 251, 0);}));});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2 + 1, num3 + 1, phyParamBarW, num29 - 2);});
require(apdat_)->DrawNumImageLongIntInt(g, seb, pls::cs::cast_integral<pls::cs::Int64>(num32), num2 + 26, num3 + 2, 0, 2);
}
}
}
surface::GameView::AddTouchTouchOption(2, kairo::unity::surface::TouchOption::CreateInt(2));
} else if (type_ == 50 || type_ == 51) {
if (type_ == 50) {
require(apdat_)->DrawWindow(g, 228, 204, 0, literal(u"監督"));
} else if (type_ == 51) {
{ auto cs_receiver = apdat_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::String cs_arg4 = MyFormBase::LT(literal(u"監督 <0>/<1>"), ([&]() { auto cs_left = pls::cs::String::concat(integer_string(select_ + 1), literal(u"\t")); auto cs_right = integer_string(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));})); return pls::cs::String::concat(cs_left,cs_right); }())); require(cs_receiver)->DrawWindow(cs_arg0, 228, 204, 0, cs_arg4); }
{ pls::cs::Int32 cs_arg2 = 44 - frame_ % 20 / 5; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); surface::GameView::AddTouchSeb(g, 1, cs_arg2, 37, cs_arg4, 0, 16);}
{ pls::cs::Int32 cs_arg2 = 193 + frame_ % 20 / 5; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); surface::GameView::AddTouchSeb(g, 1, cs_arg2, 37, cs_arg4, 1, 18);}
}
require(apdat_)->DrawBox(g, 18, 44, 223, 203);
pls::cs::Ref<data::SupervisorData> supervisorData = pls::cs::Ref<data::SupervisorData>{};
if (type_ == 50) {
supervisorData = require(apdat_)->svisorData_.get_Item(require(udat_)->selectSupervisorId_);
} else if (type_ == 51) {
supervisorData = pls::cs::unbox<pls::cs::Ref<data::SupervisorData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), select_);}));
}
num4 = 23;
num = 62;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(125); require(g)->DrawImage(cs_arg0, num4, num); }());});
pls::cs::Int32 frame3 = frame_ % 16 / 4;
require(udat_)->SetDispPlayerData(0, require(supervisorData)->bodyImg_, require(supervisorData)->headImg_, frame3, 1);
require(udat_)->DrawDispPlayer(g, num4 + 17, num + 27);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<0> <1>"), pls::cs::String::concat(pls::cs::String::concat(require(supervisorData)->name_, literal(u"\t")), require(supervisorData)->name2_)); require(g)->DrawString(cs_arg0, num4 + 38 - 2, num + 3); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(126); require(g)->DrawImage(cs_arg0, num4 + 10 + 38, num + 3 + 18); }());});
require(apdat_)->DrawNumImageLongIntInt(g, 79, pls::cs::cast_integral<pls::cs::Int64>(require(supervisorData)->lv_), num4 + 40 + 38, num + 18, 0, 2);
num4 = 138;
num = 63;
for (pls::cs::Int32 num33 = 0; num33 < 4; ++num33) {
num2 = num4 + 38 * (num33 % 2);
num3 = num + 18 * (num33 / 2);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(83); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(94); require(apdat_)->DrawSeb(g, num2, num3, cs_arg3, cs_arg4, num33); }
{ pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(require(supervisorData)->paramResearch_[num33]); require(apdat_)->DrawNumImageLongIntInt(g, 35, cs_arg2, num2 + 32, num3 + 3, 0, 4); }
}
num4 = 70;
num = 151;
require(apdat_)->DrawBox(g, num4 - 45, num - 63, num4 - 45 + 94, num - 63 + 84);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"指導"), num4 - 29, num - 46);});
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(65); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(75); pls::cs::Int32 cs_arg5 = require(supervisorData)->rankPhysical_; require(apdat_)->DrawSeb(g, num4 + 24, num - 35, cs_arg3, cs_arg4, cs_arg5); }
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(204, 224, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(num4 - 41, num - 33, num4 + 46, num - 33, 1.0f);});
num2 = 71;
num3 = 151;
require(udat_)->DrawGraph_menuElement(g, num2, num3, require(udat_)->playerParam1, require(udat_)->playerParam2, 100);
for (pls::cs::Int32 num34 = 0; num34 < game::UserData::GRAPH_POS().length(); ++num34) {
{ pls::cs::Int32 cs_arg1 = num2 + game::UserData::GRAPH_POS()[num34][0]; pls::cs::Int32 cs_arg2 = num3 + game::UserData::GRAPH_POS()[num34][1]; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(75); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(122); require(apdat_)->DrawSeb(g, cs_arg1, cs_arg2, cs_arg3, cs_arg4, num34); }
}
num4 = 141;
num = 122;
require(apdat_)->DrawBox(g, num4 - 18, num - 34, num4 - 18 + 94, num - 34 + 84);
pls::cs::Ref<data::FormationData> formationData = require(apdat_)->formationData_.get_Item(require(supervisorData)->formation_);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾌｫｰﾒｰｼｮﾝ"), num4 + 2, num - 18);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(formationData)->name_, num4 + 29, num + 4, 2);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(204, 224, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(num4 - 16, num - 4, num4 + 73, num - 4, 1.0f);});
pls::cs::Int32 num35 = 75;
pls::cs::Int32 num36 = 34;
num2 = num4 - 8;
num3 = num + 20;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(179, 255, 77);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2, num3, num35, num36);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(142, 215, 45);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num2, num3, num35 - 1, num36 - 1);});
pls::cs::Int32 num39, num37;
num37 = 0;
num39 = num37;
for (pls::cs::Int32 num38 = 0; num38 < require(formationData)->formation_.length(); ++num38) {
num39 = game::GameUtil::RateConvert(require(formationData)->formation_[num38][1], 0, 8, num2 + num35 - 10, num2 + 10, true);
num37 = game::GameUtil::RateConvert(require(formationData)->formation_[num38][0], 0, 8, num3 + 1 + 1, num3 + num36 - 1 - 2, true);
if (num38 == 0) {
num39 = num2 + 3;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(18, 211, 86);}));});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(6, 166, 254);}));});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num39 - 1, num37 - 1, 3.0f, 3.0f);});
}
if (require(formationData)->state_ == 1) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(179); require(g)->DrawImage(cs_arg0, 150.0f, 171.0f); }());});
}
num4 = 24;
num = 187;
require(apdat_)->DrawBox(g, num4, num - 11, num4 + 193, num - 11 + 22);
if (type_ == 50) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
SubForm::SetFontSize(g, 10);
if (!SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"方針"), 36.0f, 193.0f);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"方針"), 36.0f, 192.0f);});
}
SubForm::ResetFontSize(g);
num2 = 140;
if (SubForm::En()) {
num2 += 6;
}
num3 = 190;
pls::cs::Int32 num40 = 124;
if (SubForm::En()) {
num40 += -16;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_SELECT());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2 - num40 / 2 + 3, num3, num40 - 2, 16.0f);});
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = num2 - num40 / 2 - 5; pls::cs::Int32 cs_arg3 = num3 + 8; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(kairo::unity::surface::TouchOption::Create())->Margin(60, 5, 20, 20); surface::GameView::AddTouchSeb(cs_arg0, 18, cs_arg2, cs_arg3, cs_arg4, 0, 16, cs_arg7);}
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = num2 + num40 / 2 + 5; pls::cs::Int32 cs_arg3 = num3 + 8; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(kairo::unity::surface::TouchOption::Create())->Margin(5, 50, 20, 20); surface::GameView::AddTouchSeb(cs_arg0, 18, cs_arg2, cs_arg3, cs_arg4, 1, 18, cs_arg7);}
surface::GameView::AddTouch(g, 2, num2 - num40 / 2 + 20, num3 - 10, num40 - 40, 36, 0x20000 | select_);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = data::SupervisorData::TRAINING_POLICY_STR()[select_]; require(g)->DrawString(cs_arg0, num2, num3 + 2, 2); }());});
} else if (type_ == 51) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(25.0f, 188.0f, 20.0f, 19.0f, true);});
require(udat_)->SetDispPlayerData(0, require(supervisorData)->bodyImg_, require(supervisorData)->headImg_, 0, 1);
require(udat_)->DrawDispPlayer(g, 36, 211);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
kairo::unity::ui::Graphics::DrawString2(require(g), require(supervisorData)->explain_, num4 + 25, num + 6);
}
num = 215;
if (type_ == 50) {
SubForm::SetFontSize(g, 10);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"月給"), 28.0f, 218.0f);});
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"就任"), 116.0f, 218.0f);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"就任"), 133.0f, 218.0f);});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(require(supervisorData)->GetSallay())); require(g)->DrawString(cs_arg0, 105.0f, 218.0f, 4); }());});
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<0>ヵ月"), main::AppData::CommaSeparate(pls::cs::cast_integral<pls::cs::Int64>(require(supervisorData)->workMonth_))); require(g)->DrawString(cs_arg0, 214.0f, 218.0f, 4); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<0>ヵ月"), main::AppData::CommaSeparate(pls::cs::cast_integral<pls::cs::Int64>(require(supervisorData)->workMonth_))); require(g)->DrawString(cs_arg0, 212.0f, 218.0f, 4); }());});
}
SubForm::ResetFontSize(g);
} else if (type_ == 51) {
SubForm::SetFontSize(g, 10);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"月給"), 28.0f, 218.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(require(supervisorData)->GetSallay())); require(g)->DrawString(cs_arg0, 105.0f, 218.0f, 4); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"タッチで決定"), 139.0f, 218.0f);});
SubForm::ResetFontSize(g);
}
if (type_ == 51) {
surface::GameView::AddTouchTouchOption(2, kairo::unity::surface::TouchOption::CreateInt(2));
}
} else if (type_ == 52) {
require(apdat_)->DrawWindow(g, 228, 176, 0, literal(u"監督"));
require(apdat_)->DrawBox(g, 12, 53, 227, 134);
require(apdat_)->DrawBox(g, 12, 136, 227, 205);
pls::cs::Ref<data::SupervisorData> supervisorData2 = require(apdat_)->svisorData_.get_Item(require(udat_)->selectSupervisorId_);
num4 = 25;
num = 77;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(125); require(g)->DrawImage(cs_arg0, num4, num); }());});
pls::cs::Int32 frame4 = frame_ % 16 / 4;
require(udat_)->SetDispPlayerData(0, require(supervisorData2)->bodyImg_, require(supervisorData2)->headImg_, frame4, 1);
require(udat_)->DrawDispPlayer(g, num4 + 17, num + 27);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<0> <1>"), pls::cs::String::concat(pls::cs::String::concat(require(supervisorData2)->name_, literal(u"\t")), require(supervisorData2)->name2_)); require(g)->DrawString(cs_arg0, num4 + 38 - 2, num + 3); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(126); require(g)->DrawImage(cs_arg0, num4 + 10 + 38, num + 3 + 18); }());});
require(apdat_)->DrawNumImageLongIntInt(g, 79, pls::cs::cast_integral<pls::cs::Int64>(require(supervisorData2)->lv_), num4 + 40 + 38, num + 18, 0, 2);
num4 = 140;
num = 68;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(221, 251, 219);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num4, num, 80.0f, 52.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(176); require(g)->DrawImage(cs_arg0, num4 + 12, num + 3); }());});
num4 = 143;
num = 83;
for (pls::cs::Int32 num41 = 0; num41 < 4; ++num41) {
num2 = num4 + 38 * (num41 % 2);
num3 = num + 18 * (num41 / 2);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(83); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(94); require(apdat_)->DrawSeb(g, num2, num3, cs_arg3, cs_arg4, num41); }
{ pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(require(supervisorData2)->paramResearch_[num41]); require(apdat_)->DrawNumImageLongIntInt(g, 35, cs_arg2, num2 + 32, num3 + 3, 0, 4); }
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(199, 223, 148);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(14.0f, 123.0f, 224.0f, 123.0f, 1.0f);});
num4 = 28;
num = 128;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"指導"), num4, num);});
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(65); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(75); pls::cs::Int32 cs_arg5 = require(supervisorData2)->rankPhysical_; require(apdat_)->DrawSeb(g, num4 + 53, num + 12, cs_arg3, cs_arg4, cs_arg5); }
num4 = 115;
num = 127;
pls::cs::Ref<data::FormationData> formationData2 = require(apdat_)->formationData_.get_Item(require(supervisorData2)->formation_);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
SubForm::SetFontSize(g, 10);
if (!SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾌｫｰﾒｰｼｮﾝ"), num4, num);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾌｫｰﾒｰｼｮﾝ"), num4, num + 1);});
}
SubForm::ResetFontSize(g);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(formationData2)->name_, num4 + 80, num, 2);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<0>さんと契約延長しますか"), require(supervisorData2)->name_); require(g)->DrawString(cs_arg0, 120.0f, 157.0f, 2); }());});
{ pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<co=4B8FFF>月給</co> <0>"), MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(require(supervisorData2)->GetSallay()))); kairo::unity::ui::Graphics::DrawString2(require(g), cs_arg0, 120.0f, 177.0f, 2); }
num3 = 195;
num = 193;
pls::cs::Int32 num42 = 40;
if (select_ == 0) {
SubForm::Draw_btmMsg(g, literal(u"入替え"), 120 - num42, num, true, true);
SubForm::Draw_btmMsg(g, literal(u"延長する"), 120 + num42, num, false, false);
} else if (select_ == 1) {
SubForm::Draw_btmMsg(g, literal(u"入替え"), 120 - num42, num, false, false);
SubForm::Draw_btmMsg(g, literal(u"延長する"), 120 + num42, num, true, true);
}
num42 = 58;
pls::cs::Int32 num43 = 100;
pls::cs::Int32 num44 = 160;
surface::GameView::AddTouch(g, 3, 75 - num42 / 2 - num43 / 2, num3 - 2 - num44 / 2, 68 + num43, 16 + num44, 131072);
surface::GameView::AddTouch(g, 3, 75 - num42 / 2 + 90 - num43 / 2, num3 - 2 - num44 / 2, 68 + num43, 16 + num44, 131073);
} else if (type_ == 53) {
require(apdat_)->DrawWindow(g, 228, 204, 0, literal(u"選手の獲得"));
if (MyFormBase::Jp()) {
num = 50;
} else {
num = 51;
}
SubForm::SetFontSize(g, 10);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"名前"), 44.0f, num);});
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"交渉費用"), 142.0f, num);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"交渉費用"), 162.0f, num);});
}
SubForm::ResetFontSize(g);
num = 69;
require(apdat_)->DrawBox(g, 16, num - 16, 223, num - 16 + 95);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
for (pls::cs::Int32 num45 = scrollValue_; num45 < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}); ++num45) {
pls::cs::Int32 num46 = num45 - scrollValue_;
if (num46 >= 5) {
break;
}
pls::cs::Ref<data::TradeData> tradeData = pls::cs::unbox<pls::cs::Ref<data::TradeData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), num45);}));
pls::cs::Ref<data::PlayerData> playerData5 = require(apdat_)->pData_.get_Item(require(tradeData)->playerDataId_);
num2 = 26;
num3 = num + num46 * 17;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(196, 236, 169);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2, num3, 16.0f, 16.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(204, 204, 204);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num2, num3, 15.0f, 15.0f);});
if (num45 == select_) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_SELECT());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2 + 16, num3, 175.0f, 16.0f);});
}
surface::GameView::AddTouch(g, 11, num2 + 16 - 16, num3, 191, 16, 0x20000 | num45, require(kairo::unity::surface::TouchOption::CreateInt(16))->Margin(30, 0, 0, 0));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(num2, num3, 13.0f, 16.0f, true);});
require(udat_)->SetDispPlayerData(0, require(udat_)->selectUniform_, require(playerData5)->faceImg_, 0, 1);
require(udat_)->DrawDispPlayer(g, num2 + 8, num3 + 16 + 5);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<0> <1>"), pls::cs::String::concat(pls::cs::String::concat(require(playerData5)->name_, literal(u"\t")), require(playerData5)->name2_)); require(g)->DrawString(cs_arg0, num2 + 18, num3 + 2); }());});
if (require(apdat_)->ChPayMoney(require(tradeData)->cost_)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_RED());});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(require(tradeData)->cost_)); require(g)->DrawString(cs_arg0, 214.0f, num3 + 2, 4); }());});
num2 = 142;
if (SubForm::En()) {
num2 += -10;
}
++num3;
pls::cs::Int32 mostEvaPosition = data::PlayerData::GetMostEvaPosition(require(playerData5)->paramPhysical_);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(47); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(51); require(apdat_)->DrawSeb(g, num2, num3 + 1, cs_arg3, cs_arg4, mostEvaPosition); }
num2 = 26;
num3 = num + num46 * 17;
if (require(tradeData)->IsNew()) {
SubForm::Draw_newMark(g, num2 - 20, num3 + 2, frame_);
}
if (num45 == select_) {
{ auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(apdat_)->resCom2_)->img; require(cs_receiver)->Draw(g, num2 - 8, num3 + 9, cs_arg3, -1); }
}
}
{ auto cs_receiver = apdat_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg5 = scrollValue_; pls::cs::Int32 cs_arg6 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}) - 1; require(cs_receiver)->DrawVerticalScroll2(cs_arg0, 225, 64, 3, 96, cs_arg5, cs_arg6, 5); }
num4 = 29;
num = 168;
require(apdat_)->DrawBox(g, 16, num - 16, 223, num - 16 + 66);
pls::cs::Ref<data::TradeData> tradeData2 = pls::cs::unbox<pls::cs::Ref<data::TradeData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), select_);}));
pls::cs::Ref<data::PlayerData> playerData6 = require(apdat_)->pData_.get_Item(require(tradeData2)->playerDataId_);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(223, 248, 200);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(20.0f, 170.0f, 111.0f, 16.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(126); require(g)->DrawImage(cs_arg0, num4 - 2, num + 6); }());});
require(apdat_)->DrawNumImageLongIntInt(g, 79, pls::cs::cast_integral<pls::cs::Int64>(require(playerData6)->lv_), num4 + 25, num + 4, 0, 2);
num2 = 80;
if (SubForm::En()) {
num2 = 72;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
SubForm::SetFontSize(g, 10);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"人気"), num2, num + 5 + 1);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"人気"), num2, num + 5);});
}
SubForm::ResetFontSize(g);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = ([&]() { auto cs_left = integer_string(require(playerData6)->popularP_); auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }()); require(g)->DrawString(cs_arg0, num2 + 57, num + 5, 4); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = ([&]() { auto cs_left = integer_string(require(playerData6)->popularP_); auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }()); require(g)->DrawString(cs_arg0, num2 + 45, num + 5, 4); }());});
}
num2 = 39;
if (SubForm::En()) {
num2 = 33;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"気持"), num2, num + 22);});
num2 = 89;
if (SubForm::En()) {
num2 = 106;
}
pls::cs::Int32 feelPt_ = require(tradeData2)->feelPt_;
if (feelPt_ == 100) {
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(feelPt_), num2, num + 23, 0, 4);
} else {
require(apdat_)->DrawNumImageLongIntInt(g, 78, pls::cs::cast_integral<pls::cs::Int64>(feelPt_), num2, num + 23, 0, 4);
}
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(90); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(131); require(apdat_)->DrawSeb(g, num2 + 2, num + 23, cs_arg3, cs_arg4, 1); }
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(223, 248, 200);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(20.0f, 206.0f, 111.0f, 16.0f);});
num2 = num4 + 9;
if (SubForm::En()) {
num2 += -6;
}
Draw_categoryIcon(g, require(playerData6)->category_, num2, num + 39);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = data::PlayerData::CATEGORY_STR()[require(playerData6)->category_]; require(g)->DrawString(cs_arg0, num2 + 20, num + 39 + 2); }());});
num4 = 134;
num = 168;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(214, 236, 244);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num4, num, 83.0f, 56.0f);});
IntArray array2 = IntArray::from({8, 11, 13, 9, 11});
for (pls::cs::Int32 num47 = 0; num47 < data::PlayerData::PARAM_NAME().length(); ++num47) {
num3 = num + 11 * num47;
pls::cs::Int32 num48 = 12;
if (num47 == pls::cs::Int32(data::PlayerData::PARAM_NAME().length()) - 1) {
num48 = 13;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(214, 236, 244);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num4, num3, 30.0f, num48 - 1);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 223);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num4 + 1, num3 + 1, 29.0f, num48 - 2);});
pls::cs::Int32 num49 = array2[num47];
if (main::AppData::IsLanguageJpBase(false)) {
num49 = 12;
}
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(75); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(122); require(apdat_)->DrawSeb(g, num4 + 15 - num49, num3 - 1, cs_arg3, cs_arg4, num47); }
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(108, 94, 86);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num4 + 31, num3 + 1, 51.0f, 10.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(57, 57, 70);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num4 + 31 + 1, num3 + 1 + 1, 50.0f, 9.0f);});
pls::cs::Int32 phyParamBarW2 = data::PlayerData::GetPhyParamBarW(require(playerData6)->paramPhysical_[num47], 50);
if (num47 == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(252, 54, 0);}));});
} else if (num47 == 1) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(84, 188, 255);}));});
} else if (num47 == 2) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(103, 255, 121);}));});
} else if (num47 == 3) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(248, 248, 248);}));});
} else if (num47 == 4) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 251, 0);}));});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num4 + 32, num3 + 2, phyParamBarW2, 9.0f);});
}
if (udArrowCnt > 0) {
--udArrowCnt;
}
num4 = 120;
num = 70;
if (udArrowCnt == 0) {
surface::GameView::AddTouch(g, 2, num4 - 25 - 5, num - 50, 70, 30, 1376456, kairo::unity::surface::TouchOption::CreateInt(2));
surface::GameView::AddTouch(g, 2, num4 - 25 - 5, num + 100, 70, 30, 1376456, kairo::unity::surface::TouchOption::CreateInt(2));
} else {
pls::cs::Ref<kairo::unity::surface::TouchOption> touchOption = kairo::unity::surface::TouchOption::CreateInt(2);
pls::cs::Ref<kairo::unity::surface::TouchOption> touchOption2 = kairo::unity::surface::TouchOption::CreateInt(2);
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = num4; pls::cs::Int32 cs_arg3 = num - 13; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(touchOption)->Margin(40, 40, 45, 0); surface::GameView::AddTouchSeb(cs_arg0, 24, cs_arg2, cs_arg3, cs_arg4, 0, 17, cs_arg7);}
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = num4; pls::cs::Int32 cs_arg3 = num + 64 + 13; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(touchOption2)->Margin(40, 40, -15, 60); surface::GameView::AddTouchSeb(cs_arg0, 24, cs_arg2, cs_arg3, cs_arg4, 1, 19, cs_arg7);}
}
} else {
_draw5(g);
}
}

}
}

// M:form.SubForm._draw5(kairo.unity.ui.Graphics)
void SubForm::_draw5(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm._draw5(kairo.unity.ui.Graphics)",game);
{
pls::cs::Int32 coalescedValue{};
pls::cs::Int32 num{};
pls::cs::Int32 num2{};
pls::cs::Int32 num3{};
pls::cs::Ref<pls::kairo::Font> font{};
pls::cs::Ref<data::TradeData> tradeData{};
pls::cs::Ref<data::PlayerData> playerData{};
pls::cs::Int32 num4{};
pls::cs::Int32 feelPt_{};
pls::cs::Int32 i{};
pls::cs::Int32 positionRank{};
IntArray array{};
pls::cs::Int32 j{};
pls::cs::Int32 num5{};
pls::cs::Int32 num6{};
pls::cs::Int32 phyParamBarW{};
pls::cs::String text{};
pls::cs::Int32 num7{};
pls::cs::Int32 k{};
pls::cs::Ref<data::TradeData> tradeData2{};
pls::cs::Ref<data::PlayerData> playerData2{};
IntArray feelPtEfCommentParam{};
pls::cs::String text2{};
pls::cs::Int32 feelPtEf{};
IntArray addFeelPtEf{};
pls::cs::Int32 num8{};
pls::cs::Int32 num9{};
pls::cs::Int32 num10{};
pls::cs::Int32 num11{};
pls::cs::Int32 num12{};
pls::cs::String feelPtEfRetStr{};
pls::cs::Int32 num13{};
pls::cs::Int32 l{};
pls::cs::Int32 num14{};
pls::cs::Int32 frame{};
pls::cs::Int32 num15{};
pls::cs::Ref<data::TradeData> tradeData3{};
pls::cs::Ref<data::PlayerData> playerData3{};
pls::cs::Int32 num16{};
pls::cs::Int32 num17{};
pls::cs::Int32 num18{};
IntArray2 array2{};
pls::cs::Int32 m{};
pls::cs::Int32 num19{};
pls::cs::Int32 n{};
pls::cs::Int32 num20{};
pls::cs::Ref<data::QuestMatchData> questMatchData{};
pls::cs::Int32 trophy_{};
pls::cs::Int32 num21{};
pls::cs::Ref<data::QuestMatchData> questMatchData2{};
pls::cs::Int32 num22{};
StringArray array3{};
pls::cs::Int32 num23{};
pls::cs::Int32 num24{};
pls::cs::Ref<data::TeamData> teamData{};
pls::cs::Int32 num25{};
pls::cs::Int32 num26{};
pls::cs::Int32 num27{};
pls::cs::Int32 num28{};
pls::cs::Ref<data::TenantData> tenantData{};
pls::cs::Int32 num29{};
pls::cs::Ref<data::TenantData> tenantData2{};
pls::cs::Int32 fanToEf{};
pls::cs::Int32 num30{};
pls::cs::Ref<kairo::unity::surface::TouchOption> touchOption{};
pls::cs::Ref<kairo::unity::surface::TouchOption> touchOption2{};
pls::cs::Ref<data::TenantData> tenantData3{};
pls::cs::Int32 num31{};
pls::cs::Ref<data::MapchipMain> mapchipMain{};
pls::cs::Int32 num32{};
pls::cs::Ref<data::TeamData> teamData2{};
pls::cs::Int32 num33{};
pls::cs::Int32 num34{};
pls::cs::Ref<game::Tenant> tenant{};
pls::cs::String text3{};
pls::cs::String text4{};
pls::cs::String empty{};
pls::cs::Int32 num35{};
pls::cs::Int32 num36{};
{
data::PlayerData::ensure_initialized();
game::UserData::ensure_initialized();
data::TenantData::ensure_initialized();
game::MapMain::ensure_initialized();

coalescedValue = pls::cs::Int32{}, num = pls::cs::Int32{}, num2 = pls::cs::Int32{}, num3 = pls::cs::Int32{};
num3 = 0;
num2 = num3;
num = num2;
coalescedValue = num;
font = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{});});
if (type_ == 54) {
require(apdat_)->DrawWindow(g, 228, 176, 0, literal(u"選手の獲得"));
require(apdat_)->DrawBox(g, 12, 136, 227, 205);
require(apdat_)->DrawBox(g, 97, 53, 227, 134);
tradeData = tradeData_;
playerData = require(apdat_)->pData_.get_Item(require(tradeData)->playerDataId_);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resEvent_)->img.get_Item(8); require(g)->DrawImage(cs_arg0, 19.0f, 73.0f); }());});
require(udat_)->SetDispPlayerData(0, 0, require(playerData)->faceImg_, 0, 1);
require(udat_)->DrawDispPlayer(g, 55, 128);
coalescedValue = 53;
num = 95;
num4 = 0;
if (SubForm::En()) {
num4 = 6;
}
feelPt_ = require(tradeData)->feelPt_;
require(apdat_)->DrawFukidashiKimochi(g, coalescedValue, num, feelPt_, (feelPt_ == 100) ? 35 : 78);
coalescedValue = 31;
num = 133;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(126); require(g)->DrawImage(cs_arg0, coalescedValue, num); }());});
require(apdat_)->DrawNumImageLongIntInt(g, 79, pls::cs::cast_integral<pls::cs::Int64>(require(playerData)->lv_), coalescedValue + 28, num - 2, 0, 2);
coalescedValue = 11;
num = 66;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(197, 220, 224);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(coalescedValue, num, 83.0f, 16.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(253, 255, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(coalescedValue + 1, num + 1, 82.0f, 15.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
SubForm::SetFontSize(g, 10);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"給料"), coalescedValue + 4, num + 3 + 1);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"給料"), coalescedValue + 4, num + 3);});
}
SubForm::ResetFontSize(g);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(require(playerData)->GetSallay())); require(g)->DrawString(cs_arg0, coalescedValue + 80, num + 3, 4); }());});
num2 = 100;
num3 = 66;
for (i = 0; i < 4; ++i) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(123); require(g)->DrawImage(cs_arg0, num2 + 31 * i, num3); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
positionRank = data::PlayerData::GetPositionRank(i, playerData);
require(apdat_)->DrawPositionStatus(g, i, positionRank, num2 + 31 * i + 4, num3 + 4);
}
coalescedValue = 120;
num = 85;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(214, 236, 244);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(coalescedValue, num, 83.0f, 56.0f);});
array = IntArray::from({8, 11, 13, 9, 11});
for (j = 0; j < data::PlayerData::PARAM_NAME().length(); ++j) {
num3 = num + 11 * j;
num5 = 12;
if (j == pls::cs::Int32(data::PlayerData::PARAM_NAME().length()) - 1) {
num5 = 13;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(214, 236, 244);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(coalescedValue, num3, 30.0f, num5 - 1);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 223);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(coalescedValue + 1, num3 + 1, 29.0f, num5 - 2);});
num6 = array[j];
if (main::AppData::IsLanguageJpBase(false)) {
num6 = 12;
}
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(75); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(122); require(apdat_)->DrawSeb(g, coalescedValue + 15 - num6, num3 - 1, cs_arg3, cs_arg4, j); }
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(108, 94, 86);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(coalescedValue + 31, num3 + 1, 51.0f, 10.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(57, 57, 70);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(coalescedValue + 31 + 1, num3 + 1 + 1, 50.0f, 9.0f);});
phyParamBarW = data::PlayerData::GetPhyParamBarW(require(playerData)->paramPhysical_[j], 50);
if (j == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(252, 54, 0);}));});
} else if (j == 1) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(84, 188, 255);}));});
} else if (j == 2) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(103, 255, 121);}));});
} else if (j == 3) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(248, 248, 248);}));});
} else if (j == 4) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 251, 0);}));});
}
cs_label_coalescedSwitchExit177847: ;
;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(coalescedValue + 32, num3 + 2, phyParamBarW, 9.0f);});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<0><1>さんの交渉に向かいます"), pls::cs::String::concat(pls::cs::String::concat(require(playerData)->name_, literal(u"\t")), require(playerData)->name2_)); require(g)->DrawString(cs_arg0, 120.0f, 157.0f, 2); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<0><1>さんの交渉に向かいます"), pls::diagnostic::api_call([&]() -> decltype(auto) {return concat_strings4(require(playerData)->name_, literal(u"\t"), literal(u" "), require(playerData)->name2_);})); require(g)->DrawString(cs_arg0, 120.0f, 157.0f, 2); }());});
}
text = MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(require(tradeData)->cost_));
if (!require(apdat_)->ChPayMoney(require(tradeData)->cost_)) {
text = pls::cs::String::concat(pls::cs::String::concat(literal(u"<co=FF6419>"), text), literal(u"</co>"));
}
{ pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<co=4B8FFF>費用</co> <0>"), text); kairo::unity::ui::Graphics::DrawString2(require(g), cs_arg0, 120.0f, 177.0f, 2); }
num3 = 195;
num = 193;
num7 = 40;
if (select_ == 0) {
SubForm::Draw_btmMsg(g, literal(u"いざ出陣"), 120 - num7, num, true, true);
SubForm::Draw_btmMsg(g, literal(u"考え直す"), 120 + num7, num, false, false);
} else if (select_ == 1) {
SubForm::Draw_btmMsg(g, literal(u"いざ出陣"), 120 - num7, num, false, false);
SubForm::Draw_btmMsg(g, literal(u"考え直す"), 120 + num7, num, true, true);
}
num7 = 58;
for (k = 0; k < 2; ++k) {
num2 = 75 - num7 / 2 + 90 * k;
{ pls::cs::Int32 cs_arg2 = num2 + SubForm::DLGSEL_TRECT()[k][0]; pls::cs::Int32 cs_arg3 = num3 - 2 + SubForm::DLGSEL_TRECT()[k][1]; pls::cs::Int32 cs_arg4 = num7 + SubForm::DLGSEL_TRECT()[k][2]; pls::cs::Int32 cs_arg5 = 16 + SubForm::DLGSEL_TRECT()[k][3]; surface::GameView::AddTouch(g, 3, cs_arg2, cs_arg3, cs_arg4, cs_arg5, 0x20000 | k);}
}
} else if (type_ == 55) {
require(apdat_)->DrawWindow(g, 228, 176, 0, literal(u"選手獲得交渉"));
require(apdat_)->DrawBox(g, 12, 136, 227, 205);
tradeData2 = tradeData_;
playerData2 = require(apdat_)->pData_.get_Item(require(tradeData2)->playerDataId_);
coalescedValue = 30;
num = 64;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resEvent_)->img.get_Item(7); require(g)->DrawImage(cs_arg0, coalescedValue, num); }());});
coalescedValue = 16;
num = 70;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resEvent_)->img.get_Item(8); require(g)->DrawImage(cs_arg0, coalescedValue, num); }());});
SubForm::Draw_chara(g, 172, 0, 0, frame_, coalescedValue + 26, num + 63);
SubForm::Draw_chara(g, 171, 0, 0, frame_, coalescedValue + 44, num + 63);
pls::cs::Int32 cs_arg0_216 = ([&]() -> pls::cs::Int32 { auto cs_left_216 = frame_; auto cs_right_216 = SubForm::SP_ANIME_TIME()[0]; return cs_left_216 - cs_right_216; }()); pls::cs::Int32 cs_arg1_216 = ([&]() -> pls::cs::Int32 { auto cs_left_216 = SubForm::SP_ANIME_TIME()[1]; auto cs_right_216 = SubForm::SP_ANIME_TIME()[0]; return cs_left_216 - cs_right_216; }());
feelPtEfCommentParam = game::UserData::GetFeelPtEfCommentParam(cs_arg0_216, cs_arg1_216);
if (feelPtEfCommentParam[0] == 1) {
text2 = game::UserData::EF_FEELPT_COMMENT_()[feelPtEfCommentParam[1]][feelPtEfCommentParam[2]];
require(apdat_)->DrawFukidashiBalloon(g, text2, coalescedValue + 33, num + 24, SubForm::SC_WINDOW_BLUE());
}
coalescedValue = 155;
num = 70;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resEvent_)->img.get_Item(8); require(g)->DrawImage(cs_arg0, coalescedValue, num); }());});
require(udat_)->SetDispPlayerData(0, 0, require(playerData2)->faceImg_, 0, 2);
require(udat_)->DrawDispPlayer(g, coalescedValue + 35, num + 63);
pls::cs::Int32 cs_arg0_217 = ([&]() -> pls::cs::Int32 { auto cs_left_217 = frame_; auto cs_right_217 = SubForm::SP_ANIME_TIME()[0]; return cs_left_217 - cs_right_217; }()); pls::cs::Int32 cs_arg1_217 = ([&]() -> pls::cs::Int32 { auto cs_left_217 = SubForm::SP_ANIME_TIME()[1]; auto cs_right_217 = SubForm::SP_ANIME_TIME()[0]; return cs_left_217 - cs_right_217; }());
feelPtEf = game::UserData::GetFeelPtEf(cs_arg0_217, cs_arg1_217);
require(apdat_)->DrawFukidashiKimochi(g, 189, 94, feelPtEf, 78);
pls::cs::Int32 cs_arg0_218 = ([&]() -> pls::cs::Int32 { auto cs_left_218 = frame_; auto cs_right_218 = SubForm::SP_ANIME_TIME()[0]; return cs_left_218 - cs_right_218; }()); pls::cs::Int32 cs_arg1_218 = ([&]() -> pls::cs::Int32 { auto cs_left_218 = SubForm::SP_ANIME_TIME()[1]; auto cs_right_218 = SubForm::SP_ANIME_TIME()[0]; return cs_left_218 - cs_right_218; }());
addFeelPtEf = game::UserData::GetAddFeelPtEf(cs_arg0_218, cs_arg1_218);
if (addFeelPtEf[0] >= 1) {
num8 = 0;
num9 = 78;
num10 = 105;
if (addFeelPtEf[0] == 2) {
num8 = frame_ % 8 / 4 * -2;
num9 = 35;
num10 = 103;
}
num11 = main::AppData::GetFig(pls::cs::cast_integral<pls::cs::Int64>(addFeelPtEf[1])) * 8 + 8 + 2;
num3 = 76;
num2 = 208;
{ pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(addFeelPtEf[1]); require(apdat_)->DrawNumImageLongIntInt(g, num9, cs_arg2, num2, num3 + num8, 0, 4); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(num9); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(num10); require(apdat_)->DrawSeb(g, num2 - num11, num3 + num8, cs_arg3, cs_arg4, 14); }
}
num = 153;
if ([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::SP_ANIME_TIME()[1]; return cs_left < cs_right; }()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<0>と交渉中"), require(playerData2)->name_); require(g)->DrawString(cs_arg0, 120.0f, num, 2); }());});
} else {
pls::cs::Int32 cs_arg0_219 = frame_; pls::cs::Int32 cs_arg1_219 = SubForm::SP_ANIME_TIME()[2]; pls::cs::Int32 cs_arg2_219 = SubForm::SP_ANIME_TIME()[3];
num12 = game::GameUtil::RateConvert(cs_arg0_219, cs_arg1_219, cs_arg2_219, 0, 14, true);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(0.0f, num, 240.0f, num12, true);});
feelPtEfRetStr = game::UserData::GetFeelPtEfRetStr(game::UserData::NEGOTIATE_RESULT_DISPVALUE()[3]);
if (game::UserData::NEGOTIATE_RESULT_DISPVALUE()[3] < 100) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(feelPtEfRetStr, 120.0f, num, 2);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
}
num2 = 41;
num3 = 169;
pls::cs::Int32 cs_arg0_220 = frame_; pls::cs::Int32 cs_arg1_220 = SubForm::SP_ANIME_TIME()[0]; pls::cs::Int32 cs_arg2_220 = SubForm::SP_ANIME_TIME()[1];
num13 = game::GameUtil::RateConvert(cs_arg0_220, cs_arg1_220, cs_arg2_220, 0, 156, true);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2, num3 + 1, 158.0f, 10.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(115, 175, 188);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num2, num3 + 1, 157.0f, 9.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 254, 0);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2 + 1, num3 + 2, num13, 8.0f);});
num3 = 206;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(0.0f, num3 - 20, 240.0f, 20.0f, true);});
for (l = 0; l < game::UserData::NEGOTIATE_RESULT_TH().length(); ++l) {
num2 = 70 + 50 * l;
num14 = 0;
frame = game::UserData::NEGOTIATE_RESULT_TH()[l];
num15 = ([&]() -> pls::cs::Int32 { auto cs_left = ([&]() -> pls::cs::Int32 { auto cs_left = (([&]() -> pls::cs::Int32 { auto cs_left = SubForm::SP_ANIME_TIME()[1]; auto cs_right = SubForm::SP_ANIME_TIME()[0]; return cs_left - cs_right; }())); auto cs_right = game::UserData::WAIT_TIME()[l]; return cs_left * cs_right; }()) / 100; auto cs_right = SubForm::SP_ANIME_TIME()[0]; return cs_left + cs_right; }()) - 5;
num14 = game::GameUtil::RateConvert(frame_ - num15, 0, 10, -20, 0, true);
if (num14 <= -20) {

} else {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(97); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(175); require(apdat_)->DrawSeb(g, num2, num3 + num14, cs_arg3, cs_arg4, frame); }
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
surface::GameView::AddTouch(2);
} else if (type_ == 56) {
require(apdat_)->DrawWindow(g, 228, 176, 0, literal(u"イベント"));
require(apdat_)->DrawBox(g, 12, 136, 227, 205);
tradeData3 = tradeData_;
playerData3 = require(apdat_)->pData_.get_Item(require(tradeData3)->playerDataId_);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resEvent_)->img.get_Item(9); require(g)->DrawImage(cs_arg0, 30.0f, 64.0f); }());});
require(udat_)->SetDispPlayerData(15, require(udat_)->selectUniform_, require(playerData3)->faceImg_, 0, 1);
require(udat_)->DrawDispPlayer(g, 120, 123);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resEvent_)->img.get_Item(9); require(g)->DrawImage(cs_arg0, 111.0f, 120.0f, 81, 56, 20, 7); }());});
num16 = game::GameUtil::RateConvert(frame_, 0, 50, 0, 50, true);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(0.0f, 157.0f, 240.0f, num16, true);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 114, 255);}));});
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<0><1>さんの獲得を発表!!"), pls::cs::String::concat(pls::cs::String::concat(require(playerData3)->name_, literal(u"\t")), require(playerData3)->name2_)); require(g)->DrawString(cs_arg0, 120.0f, 166.0f, 2); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<0><1>さんの獲得を発表!!"), pls::diagnostic::api_call([&]() -> decltype(auto) {return concat_strings4(require(playerData3)->name_, literal(u"\t"), literal(u" "), require(playerData3)->name2_);})); require(g)->DrawString(cs_arg0, 120.0f, 166.0f, 2); }());});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LTLong(literal(u"知名度が<0>ｱｯﾌﾟしました!"), pls::cs::cast_integral<pls::cs::Int64>(require(tradeData3)->getNameValue_)); require(g)->DrawString(cs_arg0, 120.0f, 187.0f, 2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
surface::GameView::AddTouch(2);
} else if (type_ == 57) {
num17 = 192;
num = 120 - num17 / 2;
num18 = 60;
coalescedValue = 120 - num18 / 2;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(coalescedValue, num, num18, num17);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));});
array2 = IntArray2{};
array2 = require(require(apdat_)->formationData_.get_Item(require(udat_)->et_cur[1]))->formation_;
for (m = 0; m < array2.length(); ++m) {
num3 = num + 5 + 17 * m;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = ([&]() { auto cs_left = pls::cs::String::concat(integer_string(array2[m][0]), literal(u", ")); auto cs_right = integer_string(array2[m][1]); return pls::cs::String::concat(cs_left,cs_right); }()); require(g)->DrawString(cs_arg0, 120.0f, num3, 2); }());});
}
} else if (type_ == 58) {
require(apdat_)->DrawWindow(g, 228, 204, 0, literal(u"カップ戦"));
require(apdat_)->DrawBox(g, 15, 55, 225, 201);
coalescedValue = 20;
num = 63;
num3 = num - 12;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"大会の名前"), 36.0f, num3);});
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾗﾝｸ"), 135.0f, num3);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"費用"), 187.0f, num3);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾗﾝｸ"), 133.0f, num3);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"費用"), 183.0f, num3);});
}
num19 = 23;
for (n = scrollValue_; n < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}); ++n) {
num20 = n - scrollValue_;
if (num20 >= 6) {
break;
}
questMatchData = pls::cs::unbox<pls::cs::Ref<data::QuestMatchData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), n);}));
num2 = coalescedValue;
num3 = 69 + num20 * num19;
trophy_ = require(questMatchData)->trophy_;
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(95); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(97); require(apdat_)->DrawSeb(g, num2 - 3, num3 + 3, cs_arg3, cs_arg4, trophy_); }
if (n == select_) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_SELECT());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2 + 14, num3 + 4, 188.0f, 16.0f);});
{ auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(apdat_)->resCom2_)->img; require(cs_receiver)->Draw(g, num2 - 7, num3 + 13, cs_arg3, -1); }
}
surface::GameView::AddTouch(g, 11, num2 + 14 - 24, num3 + 4, 236, 16, 0x20000 | n);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
SubForm::SetFontSize(g, 10);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(questMatchData)->name_, num2 + 16, num3 + 6);});
SubForm::ResetFontSize(g);
if (SubForm::En()) {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(65); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(75); pls::cs::Int32 cs_arg5 = require(questMatchData)->rank_; require(apdat_)->DrawSeb(g, num2 + 122 + 5 - 1, num3 + 18, cs_arg3, cs_arg4, cs_arg5); }
} else {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(65); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(75); pls::cs::Int32 cs_arg5 = require(questMatchData)->rank_; require(apdat_)->DrawSeb(g, num2 + 122, num3 + 18, cs_arg3, cs_arg4, cs_arg5); }
}
num21 = 198;
if (require(apdat_)->ChPayMoney(require(questMatchData)->joinCost_) || require(questMatchData)->joinCost_ == 0) {
if (MyFormBase::Jp()) {
require(apdat_)->DrawNumImageComma(g, 78, pls::cs::cast_integral<pls::cs::Int64>(require(questMatchData)->joinCost_), num2 + 195 - 16 - 1, num3 + 7, 0, 0, 4);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(78); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(105); require(apdat_)->DrawSeb(g, num2 + 195 - 16, num3 + 7, cs_arg3, cs_arg4, 13); }
} else {
require(apdat_)->DrawMoney(g, 78, pls::cs::cast_integral<pls::cs::Int64>(require(questMatchData)->joinCost_), num2 + num21, num3 + 7, 0, 0, 4);
}
} else if (MyFormBase::Jp()) {
require(apdat_)->DrawNumImageComma(g, 91, pls::cs::cast_integral<pls::cs::Int64>(require(questMatchData)->joinCost_), num2 + 195 - 16 - 1, num3 + 7, 0, 0, 4);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(91); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(109); require(apdat_)->DrawSeb(g, num2 + 195 - 16, num3 + 7, cs_arg3, cs_arg4, 13); }
} else {
require(apdat_)->DrawMoney(g, 91, pls::cs::cast_integral<pls::cs::Int64>(require(questMatchData)->joinCost_), num2 + num21, num3 + 7, 0, 0, 4);
}
}
num3 = 216;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"参加する大会を選んでください"), 120.0f, num3, 2);});
{ auto cs_receiver = apdat_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg1 = coalescedValue + 207; pls::cs::Int32 cs_arg2 = num + 3; pls::cs::Int32 cs_arg5 = scrollValue_; pls::cs::Int32 cs_arg6 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}) - 1; require(cs_receiver)->DrawVerticalScroll2(cs_arg0, cs_arg1, cs_arg2, 3, 146, cs_arg5, cs_arg6, 6); }
} else if (type_ == 59) {
require(apdat_)->DrawWindow(g, 228, 204, 0, literal(u"カップ戦"));
require(apdat_)->DrawBox(g, 15, 55, 225, 201);
coalescedValue = 20;
num = 63;
questMatchData2 = qmData_;
if (scrollValue_ == 0) {
if (MyFormBase::Jp()) {
num2 = 60;
num3 = 47;
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(95); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(97); pls::cs::Int32 cs_arg5 = require(questMatchData2)->trophy_; require(apdat_)->DrawSeb(g, num2, num3, cs_arg3, cs_arg4, cs_arg5); }
num2 = 120;
num3 = 51;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(questMatchData2)->name_, num2, num3, 2);});
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(65); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(75); pls::cs::Int32 cs_arg5 = require(questMatchData2)->rank_; require(apdat_)->DrawSeb(g, 172, 63, cs_arg3, cs_arg4, cs_arg5); }
} else {
num22 = pls::cs::Int32(26) + pls::diagnostic::api_call([&]() -> decltype(auto) {return require(font)->StringWidth(require(questMatchData2)->name_);}) + 5 + 10;
num2 = 120 - num22 / 2;
num3 = 47;
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(95); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(97); pls::cs::Int32 cs_arg5 = require(questMatchData2)->trophy_; require(apdat_)->DrawSeb(g, num2, num3, cs_arg3, cs_arg4, cs_arg5); }
num2 = 120;
num3 = 51;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(questMatchData2)->name_, num2, num3, 2);});
num2 = 120 + num22 / 2 - 10;
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(65); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(75); pls::cs::Int32 cs_arg5 = require(questMatchData2)->rank_; require(apdat_)->DrawSeb(g, num2, 63, cs_arg3, cs_arg4, cs_arg5); }
}
} else {
num3 = 51;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"参戦チーム一覧"), 120.0f, num3, 2);});
}
if (scrollValue_ == 0) {
require(apdat_)->DrawBox(g, 20, 138, 221, 180);
num2 = 57;
if (SubForm::En()) {
num2 = num2 + -10;
}
num3 = 82;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"優勝賞金"), num2, num3);});
if (MyFormBase::Jp()) {
require(apdat_)->DrawNumImageComma(g, 35, pls::cs::cast_integral<pls::cs::Int64>(require(questMatchData2)->victoryPrize_), 172, num3 + 1, 0, 0, 4);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(35); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(103); require(apdat_)->DrawSeb(g, 173, num3 + 1, cs_arg3, cs_arg4, 13); }
} else {
require(apdat_)->DrawMoney(g, 35, pls::cs::cast_integral<pls::cs::Int64>(require(questMatchData2)->victoryPrize_), 194, num3 + 1, 0, 0, 4);
}
coalescedValue = 24;
num = 108;
array3 = StringArray::from({literal(u"難度"), literal(u"費用"), literal(u"対戦"), literal(u"日程")});
for (num23 = 0; num23 < 4; ++num23) {
num2 = coalescedValue + num23 / 2 * 97;
num3 = num + num23 % 2 * 19;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(222, 234, 225);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num2, num3, 96.0f, 19.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(151, 151, 151);}));});
SubForm::SetFontSize(g, 10);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = array3[num23]; require(g)->DrawString(cs_arg0, num2 + 8 - 4, num3 + 5 + 1); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = array3[num23]; require(g)->DrawString(cs_arg0, num2 + 8, num3 + 5); }());});
}
SubForm::ResetFontSize(g);
if (num23 == 0) {
if (SubForm::En()) {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(65); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(75); pls::cs::Int32 cs_arg5 = require(questMatchData2)->rank_; require(apdat_)->DrawSeb(g, num2 + 75, num3 + 17, cs_arg3, cs_arg4, cs_arg5); }
} else {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(65); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(75); pls::cs::Int32 cs_arg5 = require(questMatchData2)->rank_; require(apdat_)->DrawSeb(g, num2 + 62, num3 + 17, cs_arg3, cs_arg4, cs_arg5); }
}
} else if (num23 == 1) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(require(questMatchData2)->joinCost_)); require(g)->DrawString(cs_arg0, num2 + 93, num3 + 5, 4); }());});
} else if (num23 == 2) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (main::AppData::IsLanguageJpBase(true)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"全"), num2 + 38 + 10, num3 + 4, 4);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"試合"), num2 + 68, num3 + 4);});
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(require(questMatchData2)->matchEnemy_.length()), num2 + 66, num3 + 5, 0, 4);
} else {
SubForm::SetFontSize(g, 6);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"全"), num2 + 38 - 5, num3 + 4 + 6);});
SubForm::ResetFontSize(g);
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(require(questMatchData2)->matchEnemy_.length()), num2 + 64 - 5 + 28, num3 + 5, 0, 4);
}
} else if (num23 == 3) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (main::AppData::IsLanguageJpBase(true)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"週後"), num2 + 68, num3 + 5);});
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(require(questMatchData2)->schedule_), num2 + 66, num3 + 6, 0, 4);
goto cs_label_coalescedSwitchExit190333;
}
SubForm::SetFontSize(g, 10);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"週後"), num2 + 68 - 12 - 6, num3 + 5 + 6 - 4);});
SubForm::ResetFontSize(g);
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(require(questMatchData2)->schedule_), num2 + 66 + 6, num3 + 6, 0, 4);
}
cs_label_coalescedSwitchExit190333: ;
;
}
require(textLay_)->Draw(g, 24.0f, 155.0f, 0);
SubForm::Draw_chara(g, 172, 0, 0, frame_, 32, 209);
SubForm::Draw_chara(g, 171, 0, 1, frame_, 209, 209);
num3 = 195;
if (require(questMatchData2)->trophy_ == 4) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"制覇済み"), 120.0f, num3, 2);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_GRAY());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"未制覇"), 120.0f, num3, 2);});
}
} else {
coalescedValue = 19;
num = 74;
for (num24 = 0; num24 < 16; ++num24) {
num2 = coalescedValue + num24 % 2 * 101;
num3 = num + num24 / 2 * 16;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(199, 223, 148);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num2, num3, 74.0f, 16.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num2 + 75, num3, 26.0f, 16.0f);});
if (num24 >= require(questMatchData2)->matchEnemy_.length()) {

} else {
teamData = require(apdat_)->tData_.get_Item(require(questMatchData2)->matchEnemy_[num24]);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
SubForm::SetFontSize(g, 11);
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(require(teamData)->name2_); require(g)->DrawString(cs_arg0, num2 + 8, num3 + 3); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(require(teamData)->name2_); require(g)->DrawString(cs_arg0, num2 + 8 - 1, num3 + 3); }());});
}
SubForm::ResetFontSize(g);
{ auto cs_receiver = apdat_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(require(udat_)->GetRankIndex(require(teamData)->warPotential_) + 1); require(cs_receiver)->DrawNumImageLongIntInt(cs_arg0, 35, cs_arg2, num2 + 89, num3 + 4, 0, 2); }
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(57); require(g)->DrawImage(cs_arg0, 100.0f, 65.0f); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(57); require(g)->DrawImage(cs_arg0, 201.0f, 65.0f); }());});
}
num3 = 216;
num = 214;
num25 = 40;
if (page_ == 0) {
SubForm::Draw_btmMsg(g, literal(u"参戦する"), 120 - num25, num, true, true);
SubForm::Draw_btmMsg(g, literal(u"考え直す"), 120 + num25, num, false, false);
} else if (page_ == 1) {
SubForm::Draw_btmMsg(g, literal(u"参戦する"), 120 - num25, num, false, false);
SubForm::Draw_btmMsg(g, literal(u"考え直す"), 120 + num25, num, true, true);
}
num25 = 58;
for (num26 = 0; num26 < 2; ++num26) {
num2 = 75 - num25 / 2 + 90 * num26;
{ pls::cs::Int32 cs_arg2 = num2 + SubForm::DLGSEL_TRECT()[num26][0]; pls::cs::Int32 cs_arg3 = num3 - 2 + SubForm::DLGSEL_TRECT()[num26][1]; pls::cs::Int32 cs_arg4 = num25 + SubForm::DLGSEL_TRECT()[num26][2]; pls::cs::Int32 cs_arg5 = 16 + SubForm::DLGSEL_TRECT()[num26][3]; surface::GameView::AddTouch(g, 3, cs_arg2, cs_arg3, cs_arg4, cs_arg5, 0x140000 | num26);}
}
require(apdat_)->DrawVerticalScroll2(g, 228, 66, 3, 147, scrollValue_, 1, 1);
} else if (type_ == 60 || type_ == 61) {
if (type_ == 60) {
require(apdat_)->DrawWindow(g, 228, 204, 0, literal(u"施設の強化"));
} else {
require(apdat_)->DrawWindow(g, 228, 204, 0, literal(u"施設の建設"));
}
num = 50;
if (SubForm::En()) {
++num;
}
SubForm::SetFontSize(g, 10);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"建設できる建物"), 21.0f, num);});
if (type_ == 60) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"強化費用"), 220.0f, num, 4);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"建設費用"), 220.0f, num, 4);});
}
SubForm::ResetFontSize(g);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(126); require(g)->DrawImage(cs_arg0, 131.0f, num + 1); }());});
num = 53;
require(apdat_)->DrawBox(g, 15, num, 224, num + 109);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
num2 = 24;
for (num27 = scrollValue_; num27 < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}); ++num27) {
num28 = num27 - scrollValue_;
if (num28 >= 6) {
break;
}
num3 = num + 15 + num28 * 17;
tenantData = pls::cs::unbox<pls::cs::Ref<data::TenantData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), num27);}));
Draw_tenantBuildIcon(g, require(tenantData)->icon_, num2, num3);
if (num27 == select_) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_SELECT());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2 + 16 + 1, num3, 179.0f, 16.0f);});
}
surface::GameView::AddTouch(g, 11, num2 + 16 + 1 - 16, num3, 196, 16, 0x20000 | num27, require(kairo::unity::surface::TouchOption::CreateInt(16))->Margin(30, 0, 0, 0));
if (require(tenantData)->IsNew()) {
SubForm::Draw_newMark(g, num2 - 7, num3 + 2, frame_);
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(tenantData)->name_, num2 + 18, num3 + 2);});
if (type_ == 60) {
if (require(tenantData)->state_ == 2) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
SubForm::SetFontSize(g, 10);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"強化中"), 139.0f, num3 + 2 + 1);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"強化中"), 139.0f, num3 + 2);});
}
SubForm::ResetFontSize(g);
num29 = game::GameUtil::RateConvert(require(tenantData)->stateCnt_, 0, 200, 0, 100, true);
if (SubForm::En()) {
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(num29), num2 + 175 + 8, num3 + 3, 0, 4);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(90); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(131); require(apdat_)->DrawSeb(g, num2 + 175 + 1 + 8, num3 + 3, cs_arg3, cs_arg4, 1); }
} else {
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(num29), num2 + 175, num3 + 3, 0, 4);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(90); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(131); require(apdat_)->DrawSeb(g, num2 + 175 + 1, num3 + 3, cs_arg3, cs_arg4, 1); }
}
} else {
require(apdat_)->DrawNumImageLongIntInt(g, 79, pls::cs::cast_integral<pls::cs::Int64>(require(tenantData)->lv_), num2 + 93 + 22, num3 + 4 - 2, 0, 2);
if (require(tenantData)->IsMaxLv()) {

} else {
if (require(apdat_)->ChPayMoney(require(tenantData)->paramStrengthCost_)) {
if (MyFormBase::Jp()) {
require(apdat_)->DrawNumImageComma(g, 78, pls::cs::cast_integral<pls::cs::Int64>(require(tenantData)->paramStrengthCost_), num2 + 195 - 12 - 1, num3 + 3, 0, 0, 4);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(78); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(105); require(apdat_)->DrawSeb(g, num2 + 195 - 12, num3 + 3, cs_arg3, cs_arg4, 17); }
} else {
require(apdat_)->DrawMoney(g, 78, pls::cs::cast_integral<pls::cs::Int64>(require(tenantData)->paramStrengthCost_), num2 + 192, num3 + 3, 0, 0, 4);
}
} else if (MyFormBase::Jp()) {
require(apdat_)->DrawNumImageComma(g, 91, pls::cs::cast_integral<pls::cs::Int64>(require(tenantData)->paramStrengthCost_), num2 + 195 - 12 - 1, num3 + 3, 0, 0, 4);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(91); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(109); require(apdat_)->DrawSeb(g, num2 + 195 - 12, num3 + 3, cs_arg3, cs_arg4, 17); }
} else {
require(apdat_)->DrawMoney(g, 91, pls::cs::cast_integral<pls::cs::Int64>(require(tenantData)->paramStrengthCost_), num2 + 192, num3 + 3, 0, 0, 4);
}
}
}
} else {
require(apdat_)->DrawNumImageLongIntInt(g, 79, pls::cs::cast_integral<pls::cs::Int64>(require(tenantData)->lv_), num2 + 93 + 22, num3 + 4 - 2, 0, 2);
if (require(apdat_)->ChPayMoney(require(tenantData)->buildCost_)) {
if (MyFormBase::Jp()) {
require(apdat_)->DrawNumImageComma(g, 78, pls::cs::cast_integral<pls::cs::Int64>(require(tenantData)->buildCost_), num2 + 195 - 12 - 1, num3 + 3, 0, 0, 4);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(78); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(105); require(apdat_)->DrawSeb(g, num2 + 195 - 12, num3 + 3, cs_arg3, cs_arg4, 17); }
} else {
require(apdat_)->DrawMoney(g, 78, pls::cs::cast_integral<pls::cs::Int64>(require(tenantData)->buildCost_), num2 + 192, num3 + 3, 0, 0, 4);
}
} else if (MyFormBase::Jp()) {
require(apdat_)->DrawNumImageComma(g, 91, pls::cs::cast_integral<pls::cs::Int64>(require(tenantData)->buildCost_), num2 + 195 - 12 - 1, num3 + 3, 0, 0, 4);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(91); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(109); require(apdat_)->DrawSeb(g, num2 + 195 - 12, num3 + 3, cs_arg3, cs_arg4, 17); }
} else {
require(apdat_)->DrawMoney(g, 91, pls::cs::cast_integral<pls::cs::Int64>(require(tenantData)->buildCost_), num2 + 192, num3 + 3, 0, 0, 4);
}
}
if (num27 == select_) {
{ auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(apdat_)->resCom2_)->img; require(cs_receiver)->Draw(g, num2 - 6, num3 + 9, cs_arg3, -1); }
}
}
{ auto cs_receiver = apdat_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg5 = scrollValue_; pls::cs::Int32 cs_arg6 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}) - 1; require(cs_receiver)->DrawVerticalScroll2(cs_arg0, 226, 64, 3, 110, cs_arg5, cs_arg6, 6); }
coalescedValue = 33;
num = 168;
require(apdat_)->DrawBox(g, 15, num, 224, num + 46);
tenantData2 = pls::cs::unbox<pls::cs::Ref<data::TenantData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), select_);}));
if (!require(tenantData2)->IsTAreaOrStadiumTenant()) {
num2 = 24;
num3 = 190;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
SubForm::SetFontSize(g, 10);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"選手への影響"), num2, num3 + 1);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"一回の使用料"), num2, num3 + 16 + 1);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"選手への影響"), num2, num3);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"一回の使用料"), num2, num3 + 16);});
}
SubForm::ResetFontSize(g);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
fanToEf = data::TenantData::GetFanToEf(require(tenantData2)->efToFan_[1]);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = data::TenantData::EFTOFAN_STR()[fanToEf]; require(g)->DrawString(cs_arg0, num2 + 112, num3, 4); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(require(tenantData2)->paramUsePrice_)); require(g)->DrawString(cs_arg0, num2 + 112, num3 + 16, 4); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = data::TenantData::EFTOFAN_STR()[fanToEf]; require(g)->DrawString(cs_arg0, num2 + 96, num3, 2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(require(tenantData2)->paramUsePrice_)); require(g)->DrawString(cs_arg0, num2 + 108, num3 + 16, 4); }());});
}
coalescedValue = 141;
num = 182;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 229, 149);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(coalescedValue, num, 79.0f, 39.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(253, 252, 202);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(coalescedValue + 1, num + 1, 78.0f, 38.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(170); require(g)->DrawImage(cs_arg0, 153.0f, 174.0f); }());});
coalescedValue = coalescedValue + 5;
num = num + 4;
for (num30 = 0; num30 < 4; ++num30) {
num2 = coalescedValue + 37 * (num30 / 2);
num3 = num + 18 * (num30 % 2);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(83); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(94); require(apdat_)->DrawSeb(g, num2, num3, cs_arg3, cs_arg4, num30); }
{ pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(require(tenantData2)->paramResearch_[num30]); require(apdat_)->DrawNumImageLongIntInt(g, 78, cs_arg2, num2 + 26, num3 + 3, 0, 2); }
}
} else {
require(textLay_)->Draw(g, 25.0f, 185.0f, 0);
}
if (udArrowCnt > 0) {
--udArrowCnt;
}
coalescedValue = 120;
num = 70;
if (udArrowCnt == 0) {
surface::GameView::AddTouch(g, 2, coalescedValue - 25 - 5, num - 50, 70, 30, 1376456, kairo::unity::surface::TouchOption::CreateInt(2));
surface::GameView::AddTouch(g, 2, coalescedValue - 25 - 5, num + 114, 70, 30, 1376456, kairo::unity::surface::TouchOption::CreateInt(2));
} else {
touchOption = kairo::unity::surface::TouchOption::CreateInt(2);
touchOption2 = kairo::unity::surface::TouchOption::CreateInt(2);
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = coalescedValue; pls::cs::Int32 cs_arg3 = num - 13; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(touchOption)->Margin(40, 40, 45, 0); surface::GameView::AddTouchSeb(cs_arg0, 24, cs_arg2, cs_arg3, cs_arg4, 0, 17, cs_arg7);}
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = coalescedValue; pls::cs::Int32 cs_arg3 = num + 78 + 13; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(touchOption2)->Margin(40, 40, -15, 60); surface::GameView::AddTouchSeb(cs_arg0, 24, cs_arg2, cs_arg3, cs_arg4, 1, 19, cs_arg7);}
}
} else if (type_ == 62 || type_ == 63) {
require(apdat_)->DrawWindow(g, 228, 176, 0, literal(u"確認"));
require(apdat_)->DrawBox(g, 12, 69, 230, 188);
tenantData3 = require(apdat_)->tenantData_.get_Item(tenantDataId_);
coalescedValue = 17;
num = 66;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(126); require(g)->DrawImage(cs_arg0, coalescedValue, num); }());});
require(apdat_)->DrawNumImageLongIntInt(g, 79, pls::cs::cast_integral<pls::cs::Int64>(require(tenantData3)->lv_), coalescedValue + 24, num - 2, 0, 2);
coalescedValue = 52;
num = 65;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(tenantData3)->name_, coalescedValue, num);});
if (!require(tenantData3)->IsTAreaOrStadiumTenant()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
SubForm::SetFontSize(g, 10);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"維持費"), 149.0f, num + 1);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"維持費"), 149.0f, num);});
}
SubForm::ResetFontSize(g);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(require(tenantData3)->paramKeepCost_)); require(g)->DrawString(cs_arg0, 225.0f, num, 4); }());});
}
coalescedValue = 59;
num = 83;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(181, 219, 166);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(coalescedValue, num, 121.0f, 75.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(219, 249, 207);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(coalescedValue + 1, num + 1, 120.0f, 74.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(coalescedValue, num, 122.0f, 76.0f, true);});
coalescedValue = coalescedValue + 31;
num = num + 16;
if (!require(tenantData3)->IsTAreaOrStadiumTenant()) {
for (num31 = 0; num31 < 4; ++num31) {
num2 = coalescedValue + num31 / 2 * 30 - num31 % 2 * 30;
num3 = num + num31 / 2 * 15 + num31 % 2 * 15;
mapchipMain = pls::cs::Ref<data::MapchipMain>{};
if (!is_null(tenantData3)) {
mapchipMain = require(apdat_)->mapchipMain_.get_Item(require(tenantData3)->img_[num31]);
} else {
mapchipMain = require(apdat_)->mapchipMain_.get_Item(require(game::MapMain::mapchip_vacant())->id_ + num31);
}
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resMapChipMain_)->seb.get_Item(require(mapchipMain)->seb_); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resMapChipMain_)->img.get_Item(require(mapchipMain)->img_); require(apdat_)->DrawSeb(g, num2, num3, cs_arg3, cs_arg4, 0); }
}
} else if (require(tenantData3)->id_ == data::TenantData::TENANT_ID_STADIUM()) {
num2 = 120;
num3 = 140;
num32 = 0;
teamData2 = require(apdat_)->tData_.get_Item(0);
if ((require(teamData2)->stadium_ == 1)) {
num32 = 0;
} else {
if (require(teamData2)->stadium_ == 0) {
num32 = 2;
} else {
num32 = 2;
}
}
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(101 + num32); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(185 + num32); require(apdat_)->DrawSeb(g, num2, num3, cs_arg3, cs_arg4, 0); }
} else if (require(tenantData3)->id_ == data::TenantData::TENANT_ID_TRAININGAREA() || require(tenantData3)->id_ == data::TenantData::TENANT_ID_TRAININGAREA_SPRED()) {
num2 = 59;
num3 = 89;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(162); require(g)->DrawImage(cs_arg0, num2, num3, 0, 16, 122, 64); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(144, 165, 163);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num2, num3, 121.0f, 63.0f);});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
if (type_ == 62) {
num33 = 0;
for (num34 = 0; num34 < require(udat_)->tenants_.length(); ++num34) {
tenant = require(udat_)->tenants_.get_Item(num34);
if (require(tenant)->tenantDataId_ == require(tenantData3)->id_) {
++num33;
}
}
if (num33 == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"敷地内にまだありません"), 120.0f, 164.0f, 2);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_GRAY());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LTLong(literal(u"敷地内に<0>軒建設済み"), pls::cs::cast_integral<pls::cs::Int64>(num33)); require(g)->DrawString(cs_arg0, 120.0f, 164.0f, 2); }());});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
text3 = MyFormBase::YEN(literal(u"万円"), pls::cs::cast_integral<pls::cs::Int64>(require(tenantData3)->buildCost_));
if (!require(apdat_)->ChPayMoney(require(tenantData3)->buildCost_)) {
text3 = pls::cs::String::concat(pls::cs::String::concat(literal(u"<co=FF6419>"), text3), literal(u"</co>"));
}
{ pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<co=4B8FFF>費用</co>  <0>"), text3); kairo::unity::ui::Graphics::DrawString2(require(g), cs_arg0, 120.0f, 182.0f, 2); }
} else if (!require(tenantData3)->IsMaxLv()) {
coalescedValue = 71;
num = 165;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(126); require(g)->DrawImage(cs_arg0, coalescedValue, num); }());});
require(apdat_)->DrawNumImageLongIntInt(g, 79, pls::cs::cast_integral<pls::cs::Int64>(require(tenantData3)->lv_), coalescedValue + 24, num - 2, 0, 2);
coalescedValue = 110;
num = 169;
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(24); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(27); require(apdat_)->DrawSeb(g, coalescedValue, num, cs_arg3, cs_arg4, 1); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(24); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(27); require(apdat_)->DrawSeb(g, coalescedValue + 9, num, cs_arg3, cs_arg4, 1); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(24); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(27); require(apdat_)->DrawSeb(g, coalescedValue + 18, num, cs_arg3, cs_arg4, 1); }
coalescedValue = 138;
num = 165;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(126); require(g)->DrawImage(cs_arg0, coalescedValue, num); }());});
require(apdat_)->DrawNumImageLongIntInt(g, 79, pls::cs::cast_integral<pls::cs::Int64>(require(tenantData3)->lv_ + 1), coalescedValue + 24, num - 2, 0, 2);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
text4 = MyFormBase::YEN(literal(u"万円"), pls::cs::cast_integral<pls::cs::Int64>(require(tenantData3)->paramStrengthCost_));
if (!require(apdat_)->ChPayMoney(require(tenantData3)->paramStrengthCost_)) {
text4 = pls::cs::String::concat(pls::cs::String::concat(literal(u"<co=FF6419>"), text4), literal(u"</co>"));
}
{ pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<co=4B8FFF>費用</co>  <0>"), text4); kairo::unity::ui::Graphics::DrawString2(require(g), cs_arg0, 120.0f, 182.0f, 2); }
} else {
coalescedValue = 105;
num = 165;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(126); require(g)->DrawImage(cs_arg0, coalescedValue, num); }());});
require(apdat_)->DrawNumImageLongIntInt(g, 79, pls::cs::cast_integral<pls::cs::Int64>(require(tenantData3)->lv_), coalescedValue + 24, num - 2, 0, 2);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"最大LVです"), 120.0f, 182.0f, 2);});
}
num3 = 203;
if (!require(tenantData3)->IsMaxLv()) {
empty = pls::cs::String(u"");
if ((type_ == 62)) {
empty = literal(u"建設する");
} else {
empty = literal(u"投資する");
}
num = 201;
num35 = 40;
if (select_ == 0) {
SubForm::Draw_btmMsg(g, empty, 120 - num35, num, true, true);
SubForm::Draw_btmMsg(g, literal(u"やめておく"), 120 + num35, num, false, false);
} else if (select_ == 1) {
SubForm::Draw_btmMsg(g, empty, 120 - num35, num, false, false);
SubForm::Draw_btmMsg(g, literal(u"やめておく"), 120 + num35, num, true, true);
}
num35 = 58;
for (num36 = 0; num36 < 2; ++num36) {
num2 = 75 - num35 / 2 + 90 * num36;
{ pls::cs::Int32 cs_arg2 = num2 + SubForm::DLGSEL_TRECT()[num36][0]; pls::cs::Int32 cs_arg3 = num3 - 2 + SubForm::DLGSEL_TRECT()[num36][1]; pls::cs::Int32 cs_arg4 = num35 + SubForm::DLGSEL_TRECT()[num36][2]; pls::cs::Int32 cs_arg5 = 16 + SubForm::DLGSEL_TRECT()[num36][3]; surface::GameView::AddTouch(g, 3, cs_arg2, cs_arg3, cs_arg4, cs_arg5, 0x20000 | num36);}
}
} else {
num = num3 - 2;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_SELECT());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(100.0f, num, 40.0f, 16.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"了解"), 120.0f, num + 2, 2);});
{ auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(apdat_)->resCom2_)->img; require(cs_receiver)->Draw(g, 96.0f, num + 9, cs_arg3, -1); }
surface::GameView::AddTouch(2);
}
} else {
_draw6(g);
}

}
}
}

// M:form.SubForm._draw6(kairo.unity.ui.Graphics)
void SubForm::_draw6(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm._draw6(kairo.unity.ui.Graphics)",game);
{
game::MapMain::ensure_initialized();
data::TenantData::ensure_initialized();
game::UserData::ensure_initialized();
data::FanActData::ensure_initialized();

pls::cs::Int32 num4;
pls::cs::Int32 num;
pls::cs::Int32 num2;
pls::cs::Int32 num3;
num3 = 0;
num2 = num3;
num = num2;
num4 = num;
pls::cs::Ref<pls::kairo::Font> font = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{});});
if (type_ == 64) {
require(apdat_)->DrawWindow(g, 228, 176, 0, literal(u"施設のLVUP"));
require(apdat_)->DrawBox(g, 12, 136, 227, 205);
pls::cs::Ref<data::TenantData> tenantData = require(apdat_)->tenantData_.get_Item(tenantDataId_);
num4 = 60;
num = 66;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(181, 219, 166);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num4, num, 121.0f, 75.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(219, 249, 207);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num4 + 1, num + 1, 120.0f, 74.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(num4, num, 122.0f, 76.0f, true);});
num4 += 31;
num += 16;
for (pls::cs::Int32 i = 0; i < 4; ++i) {
num2 = num4 + i / 2 * 30 - i % 2 * 30;
num3 = num + i / 2 * 15 + i % 2 * 15;
pls::cs::Ref<data::MapchipMain> mapchipMain = pls::cs::Ref<data::MapchipMain>{};
if (!is_null(tenantData)) {
mapchipMain = require(apdat_)->mapchipMain_.get_Item(require(tenantData)->img_[i]);
} else {
mapchipMain = require(apdat_)->mapchipMain_.get_Item(require(game::MapMain::mapchip_vacant())->id_ + i);
}
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resMapChipMain_)->seb.get_Item(require(mapchipMain)->seb_); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resMapChipMain_)->img.get_Item(require(mapchipMain)->img_); require(apdat_)->DrawSeb(g, num2, num3, cs_arg3, cs_arg4, 0); }
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
if (page_ == 0) {
num = 156;
pls::cs::Int32 cs_arg0_221 = frame_; pls::cs::Int32 cs_arg1_221 = SubForm::TLUP_ANIME_TIME()[0]; pls::cs::Int32 cs_arg2_221 = SubForm::TLUP_ANIME_TIME()[1];
pls::cs::Int32 num5 = game::GameUtil::RateConvert(cs_arg0_221, cs_arg1_221, cs_arg2_221, 0, 12, true);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(0.0f, num, 240.0f, num5, true);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<0>のレベルが<1>になった!"), pls::cs::String::concat(pls::cs::String::concat(require(tenantData)->name_, literal(u"\t")), integer_string((require(tenantData)->lv_ + 1)))); require(g)->DrawString(cs_arg0, 120.0f, num, 2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
pls::cs::Int32 num6 = 0;
pls::cs::Int32 num7 = 0;
if (SubForm::En()) {
num6 = -10;
num7 = 10;
}
num4 = 53;
num = 178;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"商品価格"), num4 + num6, num);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"維持費/月"), num4 + num6, num + 16);});
IntArray array = GetMeterParam(0);
IntArray array2 = GetMeterParam(1);
pls::cs::Int32 num8 = array[1];
pls::cs::Int32 num9 = array2[1];
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(num8)); require(g)->DrawString(cs_arg0, num4 + 105, num, 4); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(num9)); require(g)->DrawString(cs_arg0, num4 + 105, num + 16, 4); }());});
num = 178;
pls::cs::Int32 num10 = 0;
pls::cs::Int32 num11 = 0;
for (pls::cs::Int32 j = 0; j < 2; ++j) {
num2 = 188;
num3 = num + 16 * j;
num10 = j * 6;
num11 = ([&]() -> pls::cs::Int32 { auto cs_left = frame_; auto cs_right = SubForm::TLUP_ANIME_TIME()[2]; return cs_left - cs_right; }()) - num10;
if (num11 < 0) {

} else {
num11 = main::AppData::ClampMax(num11, 12);
SetWinCharaJamp(num11, 0, -6, 12);
pls::cs::Int32 num12 = 0;
if (j == 0) {
num12 = array[6];
} else {
num12 = array2[6];
}
SubForm::Draw_upParam(g, 35, num2 + num7, num3 + SubForm::WIN_CHA()[1], num12);
}
}
if (([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::TLUP_ANIME_TIME()[5]; return cs_left >= cs_right; }()) && frame_ % 40 > 20) {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(63); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(72); require(apdat_)->DrawSeb(g, 215, 207, cs_arg3, cs_arg4, 0); }
}
} else {
num = 156;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"入手可能ﾎﾟｲﾝﾄ"), 120.0f, num, 2);});
num4 = 45;
num = 175;
pls::cs::Int32 num13 = 0;
pls::cs::Int32 num14 = 0;
for (pls::cs::Int32 k = 0; k < 4; ++k) {
num2 = num4 + 91 * (k / 2);
num3 = num + 18 * (k % 2);
IntArray array3 = GetMeterParam(k + 2);
pls::cs::Int32 num15 = array3[1];
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(83); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(94); require(apdat_)->DrawSeb(g, num2, num3, cs_arg3, cs_arg4, k); }
require(apdat_)->DrawNumImageLongIntInt(g, 78, pls::cs::cast_integral<pls::cs::Int64>(num15), num2 + 26, num3 + 3, 0, 2);
num2 += 58;
num3 += 3;
num13 = k * 6;
num14 = ([&]() -> pls::cs::Int32 { auto cs_left = frame_; auto cs_right = SubForm::TLUP_ANIME_TIME2()[0]; return cs_left - cs_right; }()) - num13;
if (num14 < 0) {

} else {
num14 = main::AppData::ClampMax(num14, 12);
SetWinCharaJamp(num14, 0, -6, 12);
pls::cs::Int32 cnt = array3[6];
SubForm::Draw_upParam(g, 35, num2, num3 + SubForm::WIN_CHA()[1], cnt);
}
}
if (([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::TLUP_ANIME_TIME2()[3]; return cs_left >= cs_right; }()) && frame_ % 40 > 20) {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(63); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(72); require(apdat_)->DrawSeb(g, 215, 207, cs_arg3, cs_arg4, 0); }
}
}
surface::GameView::AddTouch(2);
} else if (type_ == 65) {
IntArray array4 = MyFormBase::DrawWindow2(g, 228, 176, literal(u"施設情報"), 5, 20, 20, 0, 4, 12);
pls::cs::Ref<data::TenantData> tenantData2 = pls::cs::Ref<data::TenantData>{};
if (tenantDataId_ != -1) {
tenantData2 = require(apdat_)->tenantData_.get_Item(tenantDataId_);
}
num2 = 66;
num3 = 64;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(126); require(g)->DrawImage(cs_arg0, num2, num3 + 2); }());});
require(apdat_)->DrawNumImageLongIntInt(g, 79, pls::cs::cast_integral<pls::cs::Int64>(require(tenantData2)->lv_), num2 + 20, num3, 0, 1);
num2 = 121;
num3 = 64;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (!is_null(tenantData2)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(tenantData2)->name_, num2, num3);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"空き地"), num2, num3);});
}
num2 = 21;
num3 = 164;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
SubForm::SetFontSize(g, 10);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"商品価格"), num2, num3 + 1);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"商品価格"), num2, num3);});
}
SubForm::ResetFontSize(g);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(require(tenantData2)->paramUsePrice_)); require(g)->DrawString(cs_arg0, num2 + 106 + 3, num3, 4); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(require(tenantData2)->paramUsePrice_)); require(g)->DrawString(cs_arg0, num2 + 106, num3, 4); }());});
}
num2 = 21;
num3 = 180;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
SubForm::SetFontSize(g, 10);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"維持費/月"), num2, num3 + 1);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"維持費/月"), num2, num3);});
}
SubForm::ResetFontSize(g);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(require(tenantData2)->paramKeepCost_)); require(g)->DrawString(cs_arg0, num2 + 106 + 3, num3, 4); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(require(tenantData2)->paramKeepCost_)); require(g)->DrawString(cs_arg0, num2 + 106, num3, 4); }());});
}
num4 = 14;
num = 83;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(181, 219, 166);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num4, num, 121.0f, 75.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(219, 249, 207);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num4 + 1, num + 1, 120.0f, 74.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(num4, num, 122.0f, 76.0f, true);});
num4 = 45;
num = 99;
for (pls::cs::Int32 l = 0; l < 4; ++l) {
num2 = num4 + l / 2 * 30 - l % 2 * 30;
num3 = num + l / 2 * 15 + l % 2 * 15;
pls::cs::Ref<data::MapchipMain> mapchipMain2 = pls::cs::Ref<data::MapchipMain>{};
if (!is_null(tenantData2)) {
mapchipMain2 = require(apdat_)->mapchipMain_.get_Item(require(tenantData2)->img_[l]);
} else {
mapchipMain2 = require(apdat_)->mapchipMain_.get_Item(require(game::MapMain::mapchip_vacant())->id_ + l);
}
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resMapChipMain_)->seb.get_Item(require(mapchipMain2)->seb_); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resMapChipMain_)->img.get_Item(require(mapchipMain2)->img_); require(apdat_)->DrawSeb(g, num2, num3, cs_arg3, cs_arg4, 0); }
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
num4 = 138;
num = 83;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 229, 149);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num4, num, 86.0f, 47.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(253, 252, 202);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num4 + 1, num + 1, 85.0f, 46.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
SubForm::SetFontSize(g, 10);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"選手への影響"), num4 + 2 + 42, num + 5 + 1, 2);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"選手への影響"), num4 + 2 + 42, num + 5, 2);});
}
SubForm::ResetFontSize(g);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::cs::Int32 fanToEf = data::TenantData::GetFanToEf(require(tenantData2)->paramEfToFan_);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = data::TenantData::EFTOFAN_STR()[fanToEf]; require(g)->DrawString(cs_arg0, num4 + 45, num + 20, 2); }());});
pls::cs::Int32 width = game::GameUtil::RateConvert(require(tenantData2)->paramEfToFan_, 0, 10, 0, 80, true);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(132); require(g)->DrawImage(cs_arg0, num4 + 3, num + 35, 0, 0, 82, 10); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(132); require(g)->DrawImage(cs_arg0, num4 + 3 + 1, num + 35 + 1, 1, 10, width, 8); }());});
num4 = 138;
num = 132;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 229, 149);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num4, num, 86.0f, 61.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(253, 252, 202);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num4 + 1, num + 1, 85.0f, 60.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"入手可能ﾎﾟｲﾝﾄ"), num4 + 4, num + 6);});
num4 = 145;
num = 156;
for (pls::cs::Int32 m = 0; m < 4; ++m) {
num2 = num4 + 37 * (m / 2);
num3 = num + 18 * (m % 2);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(83); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(94); require(apdat_)->DrawSeb(g, num2, num3, cs_arg3, cs_arg4, m); }
{ pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(require(tenantData2)->paramResearch_[m]); require(apdat_)->DrawNumImageLongIntInt(g, 78, cs_arg2, num2 + 26, num3 + 3, 0, 2); }
}
num4 = array4[7] + 5;
if (SubForm::En()) {
num = 203;
} else {
num = 208;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (!is_null(tenantData2)) {
kairo::unity::ui::Graphics::DrawString2(require(g), require(tenantData2)->explain_, 120.0f, num, 2);
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"空き地です"), 120.0f, num, 2);});
}
} else if (type_ == 66) {
IntArray array5 = MyFormBase::DrawWindow2(g, 228, 176, literal(u"施設情報"), 5, 20, 20, 0, 4, 12);
pls::cs::Ref<data::TenantData> tenantData3 = pls::cs::Ref<data::TenantData>{};
if (tenantDataId_ != -1) {
tenantData3 = require(apdat_)->tenantData_.get_Item(tenantDataId_);
}
num2 = 17;
num3 = 64;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(126); require(g)->DrawImage(cs_arg0, num2, num3 + 2); }());});
require(apdat_)->DrawNumImageLongIntInt(g, 79, pls::cs::cast_integral<pls::cs::Int64>(require(tenantData3)->lv_), num2 + 19, num3, 0, 1);
num2 = 52;
num3 = 65;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (!is_null(tenantData3)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(tenantData3)->name_, num2, num3);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"空き地"), num2, num3);});
}
num2 = 149;
num3 = 65;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
SubForm::SetFontSize(g, 10);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"維持費"), num2, num3 + 1);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(require(tenantData3)->paramKeepCost_)); require(g)->DrawString(cs_arg0, num2 + 76, num3 + 1, 4); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"維持費"), num2, num3);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(require(tenantData3)->paramKeepCost_)); require(g)->DrawString(cs_arg0, num2 + 76, num3, 4); }());});
}
SubForm::ResetFontSize(g);
num4 = 59;
num = 83;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(181, 219, 166);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num4, num, 121.0f, 75.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(219, 249, 207);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num4 + 1, num + 1, 120.0f, 74.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(num4, num, 122.0f, 76.0f, true);});
num4 = 90;
num = 99;
for (pls::cs::Int32 n = 0; n < 4; ++n) {
num2 = num4 + n / 2 * 30 - n % 2 * 30;
num3 = num + n / 2 * 15 + n % 2 * 15;
pls::cs::Ref<data::MapchipMain> mapchipMain3 = pls::cs::Ref<data::MapchipMain>{};
if (!is_null(tenantData3)) {
mapchipMain3 = require(apdat_)->mapchipMain_.get_Item(require(tenantData3)->img_[n]);
} else {
mapchipMain3 = require(apdat_)->mapchipMain_.get_Item(require(game::MapMain::mapchip_vacant())->id_ + n);
}
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resMapChipMain_)->seb.get_Item(require(mapchipMain3)->seb_); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resMapChipMain_)->img.get_Item(require(mapchipMain3)->img_); require(apdat_)->DrawSeb(g, num2, num3, cs_arg3, cs_arg4, 0); }
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<0>を撤去しますか"), require(tenantData3)->name_); require(g)->DrawString(cs_arg0, 120.0f, 172.0f, 2); }());});
num3 = 202;
num = 200;
pls::cs::Int32 num16 = 40;
if (select_ == 0) {
SubForm::Draw_btmMsg(g, literal(u"撤去する"), 120 - num16, num, true, true);
SubForm::Draw_btmMsg(g, literal(u"やめておく"), 120 + num16, num, false, false);
} else if (select_ == 1) {
SubForm::Draw_btmMsg(g, literal(u"撤去する"), 120 - num16, num, false, false);
SubForm::Draw_btmMsg(g, literal(u"やめておく"), 120 + num16, num, true, true);
}
num16 = 58;
surface::GameView::AddTouch(g, 2, 75 - num16 / 2, num3 - 2, 68, 16, 131072);
surface::GameView::AddTouch(g, 2, 75 - num16 / 2 + 90, num3 - 2, 68, 16, 131073);
} else if (type_ == 67) {
pls::cs::Ref<data::TeamData> teamData = require(apdat_)->tData_.get_Item(0);
require(apdat_)->DrawWindow(g, 231, 185, 0, require(teamData)->name_);
require(apdat_)->DrawBox(g, 12, 64, 230, 192);
IntArray leagueData = require(udat_)->GetLeagueData(0);
num2 = 31;
num3 = 60;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(57); require(g)->DrawImage(cs_arg0, num2, num3); }());});
pls::cs::Int32 rankIndex = require(udat_)->GetRankIndex();
if (MyFormBase::Jp()) {
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(rankIndex + 1), num2 + 16, num3, 0, 1);
} else {
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(rankIndex + 1), num2 + 16 + 3, num3, 0, 1);
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = game::UserData::RANK_NAME()[rankIndex]; require(g)->DrawString(cs_arg0, 120.0f, num3, 2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LTLong(literal(u"<0>年目"), pls::cs::cast_integral<pls::cs::Int64>(require(require(apdat_)->save_)->ints[1] + 1)); require(g)->DrawString(cs_arg0, 210.0f, num3, 4); }());});
pls::cs::Ref<data::SupervisorData> supervisorData = require(apdat_)->svisorData_.get_Item(require(udat_)->selectSupervisorId_);
num2 = 12;
num3 = 79;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 251, 207);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(16.0f, 79.0f, 99.0f, 42.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(228, 255, 207);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(16.0f, 151.0f, 99.0f, 47.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
SubForm::SetFontSize(g, 10);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"監督"), num2 + 7, num3 + 5);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"選手数"), num2 + 7, num3 + 5 + 19);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<0><1>"), pls::cs::String::concat(pls::cs::String::concat(require(supervisorData)->name_, literal(u"\t")), require(supervisorData)->name2_)); require(g)->DrawString(cs_arg0, num2 + 100 + 3, num3 + 5, 4); }());});
} else {
pls::cs::String empty = pls::cs::String(u"");
empty = pls::cs::String::concat(empty,MyFormBase::LT(require(supervisorData)->name_));
empty = pls::cs::String::concat(empty,literal(u" "));
empty = pls::cs::String::concat(empty,MyFormBase::LT(require(supervisorData)->name2_));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(empty, num2 + 100 + 3 - 7, num3 + 5, 4);});
}
{ auto cs_receiver = apdat_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(udat_)->memberPDataist_));})); require(cs_receiver)->DrawNumImageLongIntInt(cs_arg0, 35, cs_arg2, num2 + 100 - 12 - 2, num3 + 5 + 21, 0, 4); }
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"人"), num2 + 100, num3 + 5 + 21, 4);});
}
SubForm::ResetFontSize(g);
SubForm::SetFontSize(g, 10);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ｽﾎﾟﾝｻｰ"), num2 + 8, num3 + 44);});
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LTLong(literal(u"<0>社"), pls::cs::cast_integral<pls::cs::Int64>(sponsor_num_)); require(g)->DrawString(cs_arg0, num2 + 53, num3 + 44); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LTLong(literal(u"<0>社"), pls::cs::cast_integral<pls::cs::Int64>(sponsor_num_)); require(g)->DrawString(cs_arg0, num2 + 53 + 46, num3 + 44, 4); }());});
}
if (MyFormBase::Jp()) {
require(apdat_)->DrawNumImageComma(g, 35, pls::cs::cast_integral<pls::cs::Int64>(sponsor_income_), num2 + 59, num3 + 59, 0, 0, 4);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(35); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(103); require(apdat_)->DrawSeb(g, num2 + 60, num3 + 59, cs_arg3, cs_arg4, 17); }
} else {
require(apdat_)->DrawMoney(g, 35, pls::cs::cast_integral<pls::cs::Int64>(sponsor_income_), num2 + 59, num3 + 59, 0, 0, 4);
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"/試合"), num2 + 70, num3 + 58);});
SubForm::ResetFontSize(g);
num4 = 17;
num = 153;
IntArray array6 = IntArray::from({2, 0, 1});
for (pls::cs::Int32 num17 = 0; num17 < 3; ++num17) {
pls::cs::Int32 num18 = array6[num17];
num3 = num + 16 * num17;
num2 = num4;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
SubForm::SetFontSize(g, 10);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = data::FanActData::element_name()[num18]; require(g)->DrawString(cs_arg0, num2 - 2 + 4, num3); }());});
SubForm::ResetFontSize(g);
pls::cs::Int32 fanEva = data::FanActData::GetFanEva(num18);
pls::cs::Int32 fanDispParam = data::FanActData::GetFanDispParam(fanEva, num18);
num2 = 112;
if (num18 == 0) {
require(apdat_)->DrawNumImageComma(g, 35, pls::cs::cast_integral<pls::cs::Int64>(fanDispParam), num2 - 14, num3 + 2, 0, 0, 4);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"人"), num2, num3 - 2 + 4, 4);});
}
} else if (num18 == 1) {
pls::cs::Int32 num19 = 46;
pls::cs::Int32 num20 = 0;
num20 = game::GameUtil::RateConvert(fanDispParam, 0, 100, 0, num19 - 2, true);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(129); require(g)->DrawImage(cs_arg0, num2 - 52, num3 + 1, 0, 0, 52, 10); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(129); require(g)->DrawImage(cs_arg0, num2 - 52 + 1, num3 + 2, 1, 10, num20, 8); }());});
} else if (num18 == 2) {
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(fanDispParam), num2 - 14, num3 + 1, 0, 4);
}
cs_label_coalescedSwitchExit221580: ;
;
}
pls::cs::Int32 switchValue = require(udat_)->GetMatchInfoJoin();
if (switchValue == 0) {
pls::cs::Ref<data::LeagueData> leagueData2 = require(apdat_)->leagueData_.get_Item(require(udat_)->selectLeagueId_);
num2 = 120;
num3 = 79;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"所属"), num2 + 3, num3 + 5);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"リーグ"), num2 + 3, num3 + 5 + 19);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"所属"), num2 + 3 - 3, num3 + 5);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"リーグ"), num2 + 3 - 3, num3 + 5 + 19);});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
SubForm::SetFontSize(g, 10);
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(leagueData2)->name_, num2 + 73, num3 + 5, 2);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(leagueData2)->name_, num2 + 73 - 6, num3 + 5 + 1, 2);});
}
SubForm::ResetFontSize(g);
if (MyFormBase::Jp()) {
pls::cs::Int32 num21 = 14 + main::AppData::GetFig(pls::cs::cast_integral<pls::cs::Int64>(leagueData[7])) * 8;
{ pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(leagueData[7]); require(apdat_)->DrawNumImageComma(g, 35, cs_arg2, num2 + 73 + num21 / 2 - 14, num3 + 1 + 5 + 19, 0, 0, 4); }
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"位"), num2 + 73 + num21 / 2 - 12, num3 + 5 + 19);});
} else {
pls::cs::Int32 num22 = 52;
auto cs_left_222 = main::AppData::GetFig(pls::cs::cast_integral<pls::cs::Int64>(leagueData[7])) * 8 + 4; auto cs_right_222 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(font)->StringWidth(literal(u"位"));});
pls::cs::Int32 num23 = cs_left_222 + cs_right_222;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"位"), num2 + num22, num3 + 5 + 19);});
{ pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(leagueData[7]); require(apdat_)->DrawNumImageComma(g, 35, cs_arg2, num2 + num22 + num23, num3 + 1 + 5 + 19, 0, 0, 4); }
}
} else if (switchValue == 1) {
pls::cs::Ref<data::QuestMatchData> questMatchData = require(apdat_)->qmData_.get_Item(require(udat_)->selectQmId_);
num2 = 171;
num3 = 79;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"回戦"), num2 - 7, num3 + 5 + 19);});
require(apdat_)->DrawNumImageComma(g, 35, pls::cs::cast_integral<pls::cs::Int64>(require(udat_)->battleQmIndex_ + 1), num2 - 9, num3 + 1 + 5 + 19, 0, 0, 4);
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"回戦"), num2 - 7 - 23, num3 + 5 + 19);});
require(apdat_)->DrawNumImageComma(g, 35, pls::cs::cast_integral<pls::cs::Int64>(require(udat_)->battleQmIndex_ + 1), num2 - 9 + 41, num3 + 1 + 5 + 19, 0, 0, 4);
}
SubForm::SetFontSize(g, 10);
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(questMatchData)->name_, num2, num3 + 5, 2);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(questMatchData)->name_, num2, num3 + 5 + 1, 2);});
}
SubForm::ResetFontSize(g);
}
cs_label_coalescedSwitchExit222308: ;
;
num2 = 119;
num3 = 125;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 251, 207);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2, num3, 107.0f, 54.0f);});
num2 = 174;
num3 = 154;
require(udat_)->DrawGraph_menuElement(g, num2, num3, require(udat_)->playerParam1, require(udat_)->playerParam2, 100);
for (pls::cs::Int32 num24 = 0; num24 < game::UserData::GRAPH_POS().length(); ++num24) {
{ pls::cs::Int32 cs_arg1 = num2 + game::UserData::GRAPH_POS()[num24][0]; pls::cs::Int32 cs_arg2 = num3 + game::UserData::GRAPH_POS()[num24][1]; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(75); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(122); require(apdat_)->DrawSeb(g, cs_arg1, cs_arg2, cs_arg3, cs_arg4, num24); }
}
num2 = 119;
num3 = 181;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 251, 207);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2, num3, 107.0f, 20.0f);});
num2 = 133;
num3 = 185;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
SubForm::SetFontSize(g, 10);
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾁｰﾑ評価"), num2, num3);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾁｰﾑ評価"), num2 - 4, num3 + 1);});
}
SubForm::ResetFontSize(g);
if (MyFormBase::Jp()) {
require(apdat_)->DrawNumImageLongIntInt(g, 30, pls::cs::cast_integral<pls::cs::Int64>(require(teamData)->warPotential_), num2 + 79, num3, 0, 4);
} else {
require(apdat_)->DrawNumImageLongIntInt(g, 30, pls::cs::cast_integral<pls::cs::Int64>(require(teamData)->warPotential_), num2 + 79 + 2, num3, 0, 4);
}
num = 208;
auto cs_left_223 = ([&]() -> pls::cs::Int32 { auto cs_left_223 = require(udat_)->matchResult_[0]; auto cs_right_223 = require(udat_)->matchResult_[1]; return cs_left_223 + cs_right_223; }()); auto cs_right_223 = require(udat_)->matchResult_[2];
pls::cs::Int32 num25 = cs_left_223 + cs_right_223;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
SubForm::SetFontSize(g, 10);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LTLong(literal(u"<0>戦"), pls::cs::cast_integral<pls::cs::Int64>(num25)); require(g)->DrawString(cs_arg0, 76.0f, num, 4); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LTLong(literal(u"<0>勝"), pls::cs::cast_integral<pls::cs::Int64>(require(udat_)->matchResult_[0])); require(g)->DrawString(cs_arg0, 123.0f, num, 4); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LTLong(literal(u"<0>敗"), pls::cs::cast_integral<pls::cs::Int64>(require(udat_)->matchResult_[2])); require(g)->DrawString(cs_arg0, 174.0f, num, 4); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LTLong(literal(u"<0>分"), pls::cs::cast_integral<pls::cs::Int64>(require(udat_)->matchResult_[1])); require(g)->DrawString(cs_arg0, 217.0f, num, 4); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LTLong(literal(u"<0>戦"), pls::cs::cast_integral<pls::cs::Int64>(num25)); require(g)->DrawString(cs_arg0, 91.0f, num, 4); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LTLong(literal(u"<0>勝"), pls::cs::cast_integral<pls::cs::Int64>(require(udat_)->matchResult_[0])); require(g)->DrawString(cs_arg0, 123.0f, num, 4); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LTLong(literal(u"<0>敗"), pls::cs::cast_integral<pls::cs::Int64>(require(udat_)->matchResult_[2])); require(g)->DrawString(cs_arg0, 155.0f, num, 4); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LTLong(literal(u"<0>分"), pls::cs::cast_integral<pls::cs::Int64>(require(udat_)->matchResult_[1])); require(g)->DrawString(cs_arg0, 187.0f, num, 4); }());});
}
SubForm::ResetFontSize(g);
surface::GameView::AddTouch(2);
} else if (type_ == 68) {
IntArray array7 = MyFormBase::DrawWindow(g, 188, 110, literal(u"ﾁｹｯﾄ代の変更"), 5, 5, 20, 0, 4);
if (SubForm::En()) {
num4 = 123;
num = 103;
require(apdat_)->DrawMoney(g, 35, pls::cs::cast_integral<pls::cs::Int64>(require(udat_)->ticketPrice_ / 100), 120, num, 0, 0, 2, false);
} else {
num4 = 145;
num = 101;
require(apdat_)->DrawNumImageComma(g, 31, pls::cs::cast_integral<pls::cs::Int64>(require(udat_)->ticketPrice_), num4, num, 4, 0, 4);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(35); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(103); require(apdat_)->DrawSeb(g, num4 + 2, num + 2, cs_arg3, cs_arg4, 12); }
}
num4 = 120;
num = 101;
pls::cs::Int32 num26 = 1000;
pls::cs::Int32 val = require(udat_)->teamEvaRank_ * 2000 + 3000;
val = main::AppData::ClampMax(val, 20000);
val -= val % 1000;
if (require(udat_)->ticketPrice_ < val) {
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = num4 - 40 - 5; pls::cs::Int32 cs_arg3 = num + 6; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(kairo::unity::surface::TouchOption::Create())->Margin(60, 5, 30, 30); surface::GameView::AddTouchSeb(cs_arg0, 18, cs_arg2, cs_arg3, cs_arg4, 0, 16, cs_arg7);}
}
if (require(udat_)->ticketPrice_ > num26) {
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = num4 + 40 + 7; pls::cs::Int32 cs_arg3 = num + 6; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(kairo::unity::surface::TouchOption::Create())->Margin(5, 60, 30, 30); surface::GameView::AddTouchSeb(cs_arg0, 18, cs_arg2, cs_arg3, cs_arg4, 1, 18, cs_arg7);}
}
num4 = 37;
num = 128;
require(apdat_)->DrawBox(g, num4, num - 11, num4 + 167, num - 11 + 22);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(172); require(g)->DrawImage(cs_arg0, num4, num, 0, 0, 16, 21); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
SubForm::SetFontSize(g, 10);
if (SubForm::En()) {
kairo::unity::ui::Graphics::DrawString2(require(g), SubForm::ticketPriceMessage(), num4 + 23, num + 6 + 1);
} else {
kairo::unity::ui::Graphics::DrawString2(require(g), SubForm::ticketPriceMessage(), num4 + 23, num + 6);
}
SubForm::ResetFontSize(g);
num = 157;
SubForm::Draw_btmMsg(g, literal(u"決定"), num);
pls::cs::Int32 num27 = 50;
surface::GameView::AddTouch(g, 2, 120 - num27 / 2, num - 2, num27, 16, 131072);
} else if (type_ == 69) {
pls::cs::Int32 coalescedWidth, num28;
num28 = 0;
coalescedWidth = num28;
pls::cs::Ref<surface::GameView> instance = surface::GameView::GetInstance();
pls::cs::Int32 gameWidth = require(instance)->GetGameWidth();
pls::cs::Int32 gameHeight = require(instance)->GetGameHeight();
pls::cs::Int32 originX = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginX();});
pls::cs::Int32 originY = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginY();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetOrigin(0, 0);});
if (value1_ == 0) {
coalescedWidth = gameWidth / SubForm::SCENE_IMG_DIV_X()[0];
for (pls::cs::Int32 num29 = 0; num29 < SubForm::SCENE_IMG_DIV_Y()[0]; ++num29) {
num = 0 + gameHeight * num29 / SubForm::SCENE_IMG_DIV_Y()[0];
num28 = ([&]() -> pls::cs::Int32 { pls::cs::Int32 cs_arg0 = ([&]() -> pls::cs::Int32 { auto cs_left = frame_; auto cs_right = num29 * SubForm::SCENE_CHANGE_WAIT()[0]; return cs_left - cs_right; }()); pls::cs::Int32 cs_arg2 = SubForm::SCENE_CHANGE_ONE()[0]; pls::cs::Int32 cs_arg4 = gameHeight / SubForm::SCENE_IMG_DIV_Y()[0]; return game::GameUtil::RateConvert(cs_arg0, 0, cs_arg2, 0, cs_arg4, true); }());
for (pls::cs::Int32 num30 = 0; num30 < SubForm::SCENE_IMG_DIV_X()[0]; ++num30) {
num4 = 0 + gameWidth * num30 / SubForm::SCENE_IMG_DIV_X()[0];
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(89); require(g)->DrawImage(cs_arg0, num4, num, num4 % 120, 0, coalescedWidth, num28); }());});
}
}
}
if (value1_ == 1) {
num28 = 40;
pls::cs::Int32 num31 = gameHeight / num28 + 1;
for (pls::cs::Int32 num32 = 0; num32 < num31; ++num32) {
num = num28 * num32;
pls::cs::Int32 height = main::AppData::ClampMax(num28, gameHeight - num);
for (pls::cs::Int32 num33 = 0; num33 < SubForm::SCENE_IMG_DIV_X()[1]; ++num33) {
num4 = 0 + gameWidth * num33 / SubForm::SCENE_IMG_DIV_X()[1];
coalescedWidth = ([&]() -> pls::cs::Int32 { pls::cs::Int32 cs_arg0 = ([&]() -> pls::cs::Int32 { auto cs_left = frame_; auto cs_right = num33 * SubForm::SCENE_CHANGE_WAIT()[1]; return cs_left - cs_right; }()); pls::cs::Int32 cs_arg2 = SubForm::SCENE_CHANGE_ONE()[1]; pls::cs::Int32 cs_arg4 = gameWidth / SubForm::SCENE_IMG_DIV_X()[1]; return game::GameUtil::RateConvert(cs_arg0, 0, cs_arg2, 0, cs_arg4, true); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(89); require(g)->DrawImage(cs_arg0, num4, num, num4 % 120, 0, coalescedWidth, height); }());});
}
}
}
if (value1_ == 2) {
coalescedWidth = 20;
num28 = 20;
pls::cs::Int32 num34 = require(instance)->GetGameWidth() / coalescedWidth + 1;
pls::cs::Int32 num35 = require(instance)->GetGameHeight() / num28 + 1;
for (pls::cs::Int32 num36 = 0; num36 < num35; ++num36) {
num = num28 * num36;
for (pls::cs::Int32 num37 = 0; num37 < num34; ++num37) {
num4 = coalescedWidth * num37;
pls::cs::Int32 cs_arg0_224 = ([&]() -> pls::cs::Int32 { auto cs_left_224 = frame_; auto cs_right_224 = (([&]() -> pls::cs::Int32 { auto cs_left_224 = num36 * SubForm::SCENE_CHANGE_WAIT()[2]; auto cs_right_224 = num37 * SubForm::SCENE_CHANGE_WAIT()[2]; return cs_left_224 + cs_right_224; }())); return cs_left_224 - cs_right_224; }()); pls::cs::Int32 cs_arg2_224 = SubForm::SCENE_CHANGE_ONE()[2];
pls::cs::Int32 width3 = game::GameUtil::RateConvert(cs_arg0_224, 0, cs_arg2_224, 0, coalescedWidth, true);
pls::cs::Int32 cs_arg0_225 = ([&]() -> pls::cs::Int32 { auto cs_left_225 = frame_; auto cs_right_225 = (([&]() -> pls::cs::Int32 { auto cs_left_225 = num36 * SubForm::SCENE_CHANGE_WAIT()[2]; auto cs_right_225 = num37 * SubForm::SCENE_CHANGE_WAIT()[2]; return cs_left_225 + cs_right_225; }())); return cs_left_225 - cs_right_225; }()); pls::cs::Int32 cs_arg2_225 = SubForm::SCENE_CHANGE_ONE()[2];
pls::cs::Int32 height2 = game::GameUtil::RateConvert(cs_arg0_225, 0, cs_arg2_225, 0, num28, true);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(89); require(g)->DrawImage(cs_arg0, num4, num, num4 % 120, num % 40, width3, height2); }());});
}
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetOrigin(originX, originY);});
} else if (type_ == 71) {
require(apdat_)->DrawWindow(g, 228, 176, 0, literal(u"新チーム情報登録"));
require(apdat_)->DrawBox(g, 12, 52, 227, 185);
pls::cs::Ref<data::TeamData> teamData2 = require(apdat_)->tData_.get_Item(0);
pls::cs::Int32 num38 = 76;
pls::cs::Int32 num39 = 16;
num4 = 22;
num = 73;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"チームの名前"), num4, num);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"短縮名(4文字)"), num4, num + 20);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾕﾆﾌｫｰﾑｶﾗｰ"), num4, num + 40);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_SELECT());});
pls::cs::Int32 num40 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Int32 { auto cs_receiver = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{});}); pls::cs::String cs_arg0 = require(teamData2)->name_; return require(cs_receiver)->StringWidth(cs_arg0); }());});
pls::cs::Int32 num41 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Int32 { auto cs_receiver = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{});}); pls::cs::String cs_arg0 = require(teamData2)->name2_; return require(cs_receiver)->StringWidth(cs_arg0); }());});
if (select_ == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(169 - num40 / 2 - 1, 72 + 20 * select_, num40 + 1, num39);});
} else if (select_ == 1) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(169 - num41 / 2 - 1, 72 + 20 * select_, num41 + 1, num39);});
} else if (select_ == 2) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(135.0f, 72 + 20 * select_, num38, num39);});
}
surface::GameView::AddTouch(g, 11, 125, 72, num38 + 20, num39, 131072);
surface::GameView::AddTouch(g, 11, 125, 92, num38 + 20, num39, 131073);
surface::GameView::AddTouch(g, 11, 125, 112, num38 + 20, num39, 131074);
num4 = 169;
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = num4 - 40 - 5; pls::cs::Int32 cs_arg3 = num + 46; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(kairo::unity::surface::TouchOption::Create())->Margin(30, 5, 20, 20); surface::GameView::AddTouchSeb(cs_arg0, 18, cs_arg2, cs_arg3, cs_arg4, 0, 16, cs_arg7);}
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = num4 + 40 + 7; pls::cs::Int32 cs_arg3 = num + 46; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(kairo::unity::surface::TouchOption::Create())->Margin(5, 20, 20, 20); surface::GameView::AddTouchSeb(cs_arg0, 18, cs_arg2, cs_arg3, cs_arg4, 1, 18, cs_arg7);}
if (select_ == 0) {
{ auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60); pls::cs::Single cs_arg2 = num + 9 + 20 * select_; pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(apdat_)->resCom2_)->img; require(cs_receiver)->Draw(g, 169 - num40 / 2 - 1 - 8, cs_arg2, cs_arg3, -1); }
} else if (select_ == 1) {
{ auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60); pls::cs::Single cs_arg2 = num + 9 + 20 * select_; pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(apdat_)->resCom2_)->img; require(cs_receiver)->Draw(g, 169 - num41 / 2 - 1 - 8, cs_arg2, cs_arg3, -1); }
} else if (select_ == 2) {
{ auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60); pls::cs::Single cs_arg2 = num + 9 + 20 * select_; pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(apdat_)->resCom2_)->img; require(cs_receiver)->Draw(g, 131.0f, cs_arg2, cs_arg3, -1); }
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
num4 = 169;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(teamData2)->name_, num4, num, 2);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(teamData2)->name2_, num4, num + 20, 2);});
pls::cs::Int32 num42 = pls::cs::Int32(15) + pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Int32 { auto cs_receiver = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{});}); pls::cs::String cs_arg0 = SubForm::UNIFORM_NAME()[require(udat_)->selectUniform_]; return require(cs_receiver)->StringWidth(cs_arg0); }());});
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(28); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(33); pls::cs::Int32 cs_arg5 = require(udat_)->selectUniform_; require(apdat_)->DrawSeb(g, num4 - num42 / 2, num + 40 + 1, cs_arg3, cs_arg4, cs_arg5); }
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = SubForm::UNIFORM_NAME()[require(udat_)->selectUniform_]; require(g)->DrawString(cs_arg0, num4 - num42 / 2 + 15, num + 40); }());});
num = 134;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(14.0f, num, 211.0f, 60.0f, true);});
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(32); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(34); require(apdat_)->DrawSeb(g, 0, num, cs_arg3, cs_arg4, 0); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(32); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(34); require(apdat_)->DrawSeb(g, 120, num, cs_arg3, cs_arg4, 0); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(33); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(35); require(apdat_)->DrawSeb(g, 0, num + 27, cs_arg3, cs_arg4, 0); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(33); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(35); require(apdat_)->DrawSeb(g, 120, num + 27, cs_arg3, cs_arg4, 0); }
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
num2 = 14;
num3 = 134;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(213, 232, 220);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num2, num3, 210.0f, 59.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num2 + 1, num3 + 1, 208.0f, 57.0f);});
num3 = 184;
for (pls::cs::Int32 num43 = 0; num43 < 5; ++num43) {
num2 = 82 + 19 * num43;
pls::cs::Ref<data::PlayerData> playerData = require(apdat_)->pData_.get_Item(num43 + 22);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(0); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(2); require(apdat_)->DrawSeb(g, num2 - 1, num3 + 1, cs_arg3, cs_arg4, 4); }
if (num43 == 0) {
require(udat_)->SetDispPlayerData(0, require(udat_)->selectUniform_, require(playerData)->faceImg_, frame_ % 20 / 5, 1, 0, -1);
} else {
require(udat_)->SetDispPlayerData(0, require(udat_)->selectUniform_, require(playerData)->faceImg_, frame_ % 20 / 5, 1);
}
require(udat_)->DrawDispPlayer(g, num2, num3);
}
num = 200;
if (select_ == 3) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_SELECT());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(78.0f, num, 84.0f, 16.0f);});
}
surface::GameView::AddTouch(g, 11, 68, num, 104, 16, 131075);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"加盟申請する"), 120.0f, num + 2, 2);});
if (select_ == 3) {
{ auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(apdat_)->resCom2_)->img; require(cs_receiver)->Draw(g, 74.0f, num + 9, cs_arg3, -1); }
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(0.0f, 198.0f, 240.0f, 20.0f, true);});
SubForm::Draw_chara(g, 172, 0, 0, frame_, 26, 226);
SubForm::Draw_chara(g, 171, 0, 1, frame_, 212, 226);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
} else if (type_ == 72) {
require(apdat_)->DrawWindow(g, 210, 110, 0, literal(u"選手の解雇"));
require(apdat_)->DrawBox(g, 26, 90, 213, 148);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
num = 116;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"選手を解雇しますか"), 120.0f, num, 2);});
num = 132;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LTLong(literal(u"現在  <0> /30名"), pls::cs::cast_integral<pls::cs::Int64>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(udat_)->memberPDataist_));}))); require(g)->DrawString(cs_arg0, 120.0f, num, 2); }());});
num3 = 164;
if (select_ == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_SELECT());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(54.0f, num3 - 2, 58.0f, 16.0f);});
{ auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(apdat_)->resCom2_)->img; require(cs_receiver)->Draw(g, 50.0f, num3 + 7, cs_arg3, -1); }
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_SELECT());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(127.0f, num3 - 2, 58.0f, 16.0f);});
{ auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(apdat_)->resCom2_)->img; require(cs_receiver)->Draw(g, 123.0f, num3 + 7, cs_arg3, -1); }
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"はい"), 71.0f, num3);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"いいえ"), 138.0f, num3);});
pls::cs::Int32 num44 = 58;
pls::cs::Int32 num45 = 100;
pls::cs::Int32 num46 = 160;
surface::GameView::AddTouch(g, 3, 75 - num44 / 2 - num45 / 2, num3 - 2 - num46 / 2, 68 + num45, 16 + num46, 131072);
surface::GameView::AddTouch(g, 3, 75 - num44 / 2 + 90 - num45 / 2, num3 - 2 - num46 / 2, 68 + num45, 16 + num46, 131073);
} else if (type_ == 74) {
{ auto cs_receiver = apdat_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::String cs_arg4 = MyFormBase::LTLong(literal(u"収支情報 <0>/2"), pls::cs::cast_integral<pls::cs::Int64>(page_ + 1)); require(cs_receiver)->DrawWindow(cs_arg0, 228, 176, 0, cs_arg4); }
require(apdat_)->DrawBox(g, 12, 69, 227, 190);
{ pls::cs::Int32 cs_arg2 = 44 - frame_ % 20 / 5; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); surface::GameView::AddTouchSeb(g, 1, cs_arg2, 51, cs_arg4, 0, 16);}
{ pls::cs::Int32 cs_arg2 = 193 + frame_ % 20 / 5; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); surface::GameView::AddTouchSeb(g, 1, cs_arg2, 51, cs_arg4, 1, 18);}
num = 65;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (page_ == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"月間"), 28.0f, num);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"年間"), 28.0f, num);});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_GRAY());});
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"収入"), 102.0f, num);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"支出"), 168.0f, num);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"収入"), 121.0f, num);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"支出"), 194.0f, num);});
}
num4 = 22;
num = 90;
pls::cs::Int32 num47 = 0;
pls::cs::Int32 num48 = 0;
pls::cs::Int32 num49 = 0;
for (pls::cs::Int32 num50 = 0; num50 < game::UserData::RECORD_NAME().length(); ++num50) {
num3 = num + 18 * num50;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = game::UserData::RECORD_NAME()[num50]; require(g)->DrawString(cs_arg0, num4, num3); }());});
if (num50 != 4) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(199, 223, 148);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(num4, num3 + 12 + 2, num4 + 210 - 12, num3 + 12 + 2, 1.0f);});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
if (page_ == 0) {
num48 = require(udat_)->records_[require(require(apdat_)->save_)->ints[2]][num50][0];
} else {
num48 = 0;
for (pls::cs::Int32 num51 = 0; num51 < 12; ++num51) {
num48 += require(udat_)->records_[num51][num50][0];
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(num48)); require(g)->DrawString(cs_arg0, num4 + 121, num3, 4); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_RED());});
if (page_ == 0) {
num49 = require(udat_)->records_[require(require(apdat_)->save_)->ints[2]][num50][1];
} else {
num49 = 0;
for (pls::cs::Int32 num52 = 0; num52 < 12; ++num52) {
num49 += require(udat_)->records_[num52][num50][1];
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(num49)); require(g)->DrawString(cs_arg0, num4 + 194, num3, 4); }());});
num47 += num48 - num49;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(146, 184, 247);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(22.0f, 180.0f, 220.0f, 180.0f, 1.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"利益"), num4, 184.0f);});
if (num47 >= 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_RED());});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(num47)); require(g)->DrawString(cs_arg0, num4 + 194, 184.0f, 4); }());});
num = 201;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(0.0f, num, 240.0f, 17.0f, true);});
SubForm::Draw_chara(g, 172, 0, 0, frame_, 30, num + 28);
SubForm::Draw_chara(g, 171, 0, 1, frame_, 209, num + 28);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
num = 204;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"観客数"), 55.0f, 204.0f);});
pls::cs::Int32 num53 = 0;
if (page_ == 0) {
num53 = require(udat_)->customer_month_[require(require(apdat_)->save_)->ints[2]];
} else {
num53 = 0;
for (pls::cs::Int32 num54 = 0; num54 < require(udat_)->customer_month_.length(); ++num54) {
num53 += require(udat_)->customer_month_[num54];
}
}
require(apdat_)->DrawNumImageComma(g, 78, pls::cs::cast_integral<pls::cs::Int64>(num53), 179, num + 1, 0, 0, 4);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(78); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(105); require(apdat_)->DrawSeb(g, 181, num + 2, cs_arg3, cs_arg4, 18); }
surface::GameView::AddTouchTouchOption(2, kairo::unity::surface::TouchOption::CreateInt(2));
} else if (type_ == 75 || type_ == 76) {
pls::cs::Int32 num55 = 0;
if (type_ == 75) {
num55 = game::GameUtil::RateConvert(frame_, 0, SubForm::FADE_TIME_V(), 0, 255, true);
} else if (type_ == 76) {
num55 = game::GameUtil::RateConvert(frame_, 0, SubForm::FADE_TIME_V(), 255, 0, true);
}
if (num55 > 0) {
pls::cs::Ref<surface::GameView> instance2 = surface::GameView::GetInstance();
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0, num55);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg2 = require(instance2)->GetGameWidth(); pls::cs::Single cs_arg3 = require(instance2)->GetGameHeight(); require(g)->FillRect(0.0f, 0.0f, cs_arg2, cs_arg3); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0);}));});
}
} else if (type_ == 77) {
require(apdat_)->DrawWindow(g, 228, 176, 0, literal(u"クラブの歴史"));
require(apdat_)->DrawBox(g, 12, 51, 227, 205);
num4 = 14;
num = 67;
for (pls::cs::Int32 num56 = scrollValue_; num56 < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}); ++num56) {
pls::cs::Int32 num57 = num56 - scrollValue_;
if (num57 >= 9) {
break;
}
num2 = num4;
num3 = num + 16 * num57;
pls::cs::Ref<data::FanBonusData> fanBonusData = pls::cs::unbox<pls::cs::Ref<data::FanBonusData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), num56);}));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(222, 234, 225);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(num2, num3, num2 + 211 - 1, num3, 1.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(num2, num3 + 16, num2 + 211 - 1, num3 + 16, 1.0f);});
if (num56 == select_) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_SELECT());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num2 + 1, num3 + 1, 209.0f, 15.0f);});
}
surface::GameView::AddTouch(g, 11, num2, num3, 209, 15, 0x20000 | num56, require(kairo::unity::surface::TouchOption::CreateInt(16))->Margin(30, 0, 0, 0));
if (require(fanBonusData)->state_ == 1) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(178); require(g)->DrawImage(cs_arg0, num2 + 2, num3 + 1); }());});
pls::cs::String empty2 = pls::cs::String(u"");
if (MyFormBase::Jp()) {
empty2 = (([&]() { auto cs_left = pls::cs::String::concat(([&]() { auto cs_left = ([&]() { auto cs_left = integer_string(require(fanBonusData)->achiveDay_[0] + 1); auto cs_right = MyFormBase::LT(literal(u"年")); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = integer_string((require(fanBonusData)->achiveDay_[1] + 1)); return pls::cs::String::concat(cs_left,cs_right); }()), literal(u"/")); auto cs_right = integer_string((require(fanBonusData)->achiveDay_[2] + 1)); return pls::cs::String::concat(cs_left,cs_right); }()));
} else {
empty2 = (([&]() { auto cs_left = pls::cs::String::concat(([&]() { auto cs_left = pls::cs::String::concat(([&]() { auto cs_left = MyFormBase::LT(literal(u"年")); auto cs_right = integer_string((require(fanBonusData)->achiveDay_[0] + 1)); return pls::cs::String::concat(cs_left,cs_right); }()), literal(u"/")); auto cs_right = integer_string((require(fanBonusData)->achiveDay_[1] + 1)); return pls::cs::String::concat(cs_left,cs_right); }()), literal(u"/")); auto cs_right = integer_string((require(fanBonusData)->achiveDay_[2] + 1)); return pls::cs::String::concat(cs_left,cs_right); }()));
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(empty2, num2 + 71, num3 + 3, 4);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
SubForm::SetFontSize(g, 10);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(fanBonusData)->info_name_, num2 + 84 - 4, num3 + 3 + 1);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(fanBonusData)->info_name_, num2 + 84 - 4, num3 + 3);});
}
SubForm::ResetFontSize(g);
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"達成"), num2 + 190, num3 + 3, 2);});
}
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_GRAY());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"--年--/-"), num2 + 71, num3 + 3, 4);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"？？？？"), num2 + 84, num3 + 3);});
SubForm::SetFontSize(g, 10);
if (SubForm::En()) {

} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"未達成"), num2 + 190 - 2, num3 + 3, 2);});
}
SubForm::ResetFontSize(g);
}
if (num56 == select_) {
{ auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(apdat_)->resCom2_)->img; require(cs_receiver)->Draw(g, num2 - 4 + 5, num3 + 9, cs_arg3, -1); }
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(222, 234, 225);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(90.0f, 68.0f, 90.0f, 210.0f, 1.0f);});
{ auto cs_receiver = apdat_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg1 = num4 + 214; pls::cs::Int32 cs_arg2 = num - 5; pls::cs::Int32 cs_arg5 = scrollValue_; pls::cs::Int32 cs_arg6 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}) - 1; require(cs_receiver)->DrawVerticalScroll2(cs_arg0, cs_arg1, cs_arg2, 3, 154, cs_arg5, cs_arg6, 9); }
} else if (type_ == 78) {
SubForm::Draw_moveToBus(g, frame_);
surface::GameView::AddTouch(2);
} else if (type_ == 79) {
SubForm::Draw_battlePic(g, frame_);
surface::GameView::AddTouch(2);
}

}
}

// M:form.SubForm.Finish
bool SubForm::Finish() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Finish",game);
{
{
pls::cs::GcCallSite gc_site("M:form.SubForm.Finish");
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::Gc();});
}
return true;
}
}

// M:form.SubForm.Resume
bool SubForm::Resume() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Resume",game);
{
return true;
}
}

// M:form.SubForm.Update
bool SubForm::Update() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Update",game);
{
kl_cfg::Config::ensure_initialized();
main::AppData::ensure_initialized();
game::GameManager::ensure_initialized();
data::FanActData::ensure_initialized();

err_method = literal(u"update()");
frame_ = ((frame_ + 1) % 2147483647 /* Int32.MaxValue */);
frame2_ = ((frame2_ + 1) % 2147483647 /* Int32.MaxValue */);
pls::cs::Ref<FormManager> instance = FormManager::GetInstance();
untilActiveHide_ = false;
if (wait_ > 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->DrawAllForms();});
--wait_;
if (wait_ > 0) {
return true;
}
}
pls::cs::Int32 num = 0;
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyState(131072);})) {
++num;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyState(524288);})) {
++num;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyState(65536);})) {
++num;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyState(262144);})) {
++num;
}
if (num > 1) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->ClearKeyBuffer();});
}
loopCounter_ = ((loopCounter_ + 1) % 2147483647 /* Int32.MaxValue */);
if (jingle_ != -1) {
require(apdat_)->PlayJingle(jingle_);
}
jingle_ = -1;
require(require(require(apdat_)->resCom2_)->seb.get_Item(61))->Frame();
require(require(require(apdat_)->resCom2_)->seb.get_Item(60))->Frame();
require(require(require(apdat_)->resCom2_)->seb.get_Item(62))->Frame();
if (type_ == 1 || type_ == 21 || type_ == 2) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
select_ = (select_ + 1) % selectButtons_.length();
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
select_ = (select_ - 1 + selectButtons_.length()) % selectButtons_.length();
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);}) || (kl_cfg::Config::DEBUG_CMD() && pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyState(64);}))) {
result__SubForm = select_;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Pop();});
if (type_ == 21 && result__SubForm == 0) {
kairo::unity::ui::Canvas::OpenBrowser(main::AppData::SITE_URL());
}
} else if (require(apdat_)->IsPushSoftLabel(2)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Pop();});
}
} else if (type_ == 3) {
if (kl_cfg::Config::TRIAL_VERSION() && ([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return this->GetLeftSoftLabel();}); auto cs_right = main::AppData::softLabels_()[3]; return cs_left == cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = main::AppData::softLabels_()[5]; pls::cs::String cs_arg1 = main::AppData::softLabels_()[2]; this->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{}); }());});
}
if (!is_null(dialog__SubForm)) {
pls::cs::Int32 num2 = require(dialog__SubForm)->result__SubForm;
dialog__SubForm = pls::cs::Ref<SubForm>{};
if (num2 == -1) {
return require(apdat_)->RemoveAllMenuForms();
}
}
pls::cs::Int32 num3 = 0;
if (MyFormBase::Jp()) {
num3 = 104;
} else {
num3 = 124;
}
IntArray array = FrameMenu();
if ([&]() { auto cs_left = pls::cs::box(array); auto cs_right = pls::cs::box(IntArray{}); return cs_left != cs_right; }()) {
pls::cs::Int32 num4 = array[0];
pls::cs::Int32 num5 = array[1];
pls::cs::Int32 num6 = 29;
if (num4 == 0) {
if (!require(udat_)->ChEventFlg(8) && !require(udat_)->ChEventFlg(8)) {
require(apdat_)->ExecEvent(152, pls::cs::String{}, IntArray{});
} else {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(5, x_ + num3, y_ + num6 * select_));});
}
} else if (num4 == 1) {
if (!require(apdat_)->CheckAlreadyEvent(158)) {
require(apdat_)->ExecEvent(158, pls::cs::String{}, IntArray{});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(45));});
} else if (num4 == 2) {
if (!require(udat_)->ChEventFlg(2) && !require(udat_)->ChEventFlg(16) && !require(udat_)->ChEventFlg(4) && !require(udat_)->ChEventFlg(32)) {
require(apdat_)->ExecEvent(175, pls::cs::String{}, IntArray{});
} else {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(7, x_ + num3, y_ + num6 * select_));});
}
} else if (num4 == 3) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(26));});
} else if (num4 == 4) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(11, x_ + num3, y_ + num6 * select_));});
} else if (num4 == 5) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(12, x_ + num3, y_ + num6 * select_));});
}
return require(apdat_)->RemoveAllMenuForms();
}
if (require(apdat_)->IsPushSoftLabel(3)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Pop();});
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(16));});
}
if (require(apdat_)->IsPushSoftLabel(5)) {
kairo::unity::ui::Canvas::OpenBrowser(kl_cfg::Config::URL_SITE());
}
} else if (type_ == 4) {
frame2_ = ((frame2_ + 1) % 2147483647 /* Int32.MaxValue */);
if (!is_null(dialog__SubForm)) {
pls::cs::Int32 num7 = require(dialog__SubForm)->result__SubForm;
dialog__SubForm = pls::cs::Ref<SubForm>{};
if (num7 == -1) {
return require(apdat_)->RemoveAllMenuForms();
}
}
pls::cs::Int32 num8 = 104;
IntArray array2 = FrameMenu();
if ([&]() { auto cs_left = pls::cs::box(array2); auto cs_right = pls::cs::box(IntArray{}); return cs_left != cs_right; }()) {
pls::cs::Int32 num9 = array2[0];
pls::cs::Int32 num10 = array2[1];
pls::cs::Int32 num11 = 24;
if (num9 == 21) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(14));});
} else if (num9 == 22) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(15));});
} else if (num9 == 25) {
require(require(udat_)->gm_)->gameTime_ = game::GameManager::HALFTIME();
require(require(udat_)->gm_)->halfTime = true;
}
return require(apdat_)->RemoveAllMenuForms();
}
} else if (type_ == 8) {
if (!is_null(dialog__SubForm)) {
if (require(dialog__SubForm)->result__SubForm == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Pop();});
}
dialog__SubForm = pls::cs::Ref<SubForm>{};
return false;
}
IntArray array3 = FrameMenu();
if ([&]() { auto cs_left = pls::cs::box(array3); auto cs_right = pls::cs::box(IntArray{}); return cs_left != cs_right; }()) {
pls::cs::Int32 num12 = array3[0];
pls::cs::Int32 num13 = array3[1];
return require(apdat_)->RemoveAllMenuForms();
}
} else if (type_ == 5) {
if (!is_null(dialog__SubForm)) {
if (require(dialog__SubForm)->result__SubForm == 0) {
dialog__SubForm = pls::cs::Ref<SubForm>{};
pls::cs::Int32 recoveredMatchInfoJoin = require(udat_)->GetMatchInfoJoin();
if (recoveredMatchInfoJoin == 0) {
require(udat_)->League_resetScore();
pls::cs::Ref<data::LeagueData> leagueData = require(apdat_)->leagueData_.get_Item(require(udat_)->selectLeagueId_);
require(leagueData)->SetGetTrophy(1);
}
require(udat_)->SetMatchInfoJoin(2);
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
dialog__SubForm = pls::cs::Ref<SubForm>{};
}
IntArray array4 = FrameMenu();
if ([&]() { auto cs_left = pls::cs::box(array4); auto cs_right = pls::cs::box(IntArray{}); return cs_left != cs_right; }()) {
pls::cs::Int32 num14 = array4[0];
pls::cs::Int32 num15 = array4[1];
if (num14 == 6) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(33, 0));});
} else if (num14 == 7) {

} else if (num14 == 8) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(58));});
} else if (num14 == 9) {
dialog__SubForm = SubForm::MakeDialog(literal(u"参加中の大会を棄権します"), literal(u"はい\tいいえ"), 1);
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(dialog__SubForm);});
} else if (num14 == 10) {

}
return require(apdat_)->RemoveAllMenuForms();
}
} else if (type_ == 6) {
IntArray array5 = FrameMenu();
if ([&]() { auto cs_left = pls::cs::box(array5); auto cs_right = pls::cs::box(IntArray{}); return cs_left != cs_right; }()) {
pls::cs::Int32 num16 = array5[0];
pls::cs::Int32 num17 = array5[1];
if (num16 == 11) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(26));});
}
return require(apdat_)->RemoveAllMenuForms();
}
} else if (type_ == 7) {
IntArray array6 = FrameMenu();
if ([&]() { auto cs_left = pls::cs::box(array6); auto cs_right = pls::cs::box(IntArray{}); return cs_left != cs_right; }()) {
pls::cs::Int32 num18 = array6[0];
pls::cs::Int32 num19 = array6[1];
if (num18 == 14) {
if (!require(apdat_)->CheckAlreadyEvent(165)) {
require(apdat_)->ExecEvent(165, pls::cs::String{}, IntArray{});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(39));});
} else if (num18 == 12) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(udat_)->memberPDataist_));}) >= 30) {
require(apdat_)->ExecEvent(143, pls::cs::String{}, IntArray{});
return true;
}
if (!require(apdat_)->CheckAlreadyEvent(154)) {
require(apdat_)->ExecEvent(154, pls::cs::String{}, IntArray{});
}
pls::cs::Int32 num20 = 0;
for (pls::cs::Int32 i = 0; i < require(apdat_)->tradeData_.length(); ++i) {
pls::cs::Ref<data::TradeData> tradeData = require(apdat_)->tradeData_.get_Item(i);
if (require(tradeData)->state_ == 1) {
++num20;
}
}
if (num20 == 0) {
require(apdat_)->ExecEvent(124, pls::cs::String{}, IntArray{});
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
([&]() -> pls::cs::Ref<SubForm> { auto cs_receiver = apdat_; pls::cs::String cs_arg1 = pls::cs::String::concat(integer_string(num20), pls::cs::String(u"")); return require(cs_receiver)->ExecEvent(123, cs_arg1, IntArray{}); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(53));});
} else if (num18 == 15) {
if (!require(apdat_)->CheckAlreadyEvent(164)) {
require(apdat_)->ExecEvent(164, pls::cs::String{}, IntArray{});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(60));});
} else if (num18 == 16) {
if (!require(apdat_)->CheckAlreadyEvent(155)) {
require(apdat_)->ExecEvent(155, pls::cs::String{}, IntArray{});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(42));});
}
return require(apdat_)->RemoveAllMenuForms();
}
} else if (type_ == 11) {
IntArray array7 = FrameMenu();
if ([&]() { auto cs_left = pls::cs::box(array7); auto cs_right = pls::cs::box(IntArray{}); return cs_left != cs_right; }()) {
pls::cs::Int32 num21 = array7[0];
pls::cs::Int32 num22 = array7[1];
if (num21 == 17) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(67));});
} else if (num21 == 13) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(50));});
} else if (num21 == 18) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(77));});
} else if (num21 == 19) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(74));});
}
return require(apdat_)->RemoveAllMenuForms();
}
} else if (type_ == 12) {
if (!is_null(dialog__SubForm)) {
if (require(dialog__SubForm)->result__SubForm == 0) {
if (require(dialog__SubForm)->dialogId_ == 99) {
dialog__SubForm = pls::cs::Ref<SubForm>{};
kairo::unity::ui::Canvas::OpenBrowser(main::AppData::SITE_URL());
} else {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->RemoveAllForms();});
}
}
dialog__SubForm = pls::cs::Ref<SubForm>{};
}
IntArray array8 = FrameMenu();
if ([&]() { auto cs_left = pls::cs::box(array8); auto cs_right = pls::cs::box(IntArray{}); return cs_left != cs_right; }()) {
pls::cs::Int32 num23 = array8[0];
pls::cs::Int32 num24 = array8[1];
if (num23 == 20) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(16));});
} else if (num23 == 21) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(14));});
} else if (num23 == 22) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(15));});
} else if (num23 == 23) {
if (!kl_cfg::Config::TRIAL_VERSION()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(RankForm::create());});
} else {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::MakeTalkForm(0, MyFormBase::LT(literal(u"ハイスコアは<br>正式版でご利用頂けます!!")), pls::cs::String{}));});
}
} else if (num23 == 24) {
dialog__SubForm = SubForm::MakeDialog(literal(u"ゲームを終了します"), literal(u"はい\tいいえ"), 1);
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(dialog__SubForm);});
} else if (num23 == 29) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->ChangeCurrentForm(require(apdat_)->frmTitle_);});
}
return require(apdat_)->RemoveAllMenuForms();
}
if (require(apdat_)->IsPushSoftLabel(5)) {
kairo::unity::ui::Canvas::OpenBrowser(kl_cfg::Config::URL_SITE());
}
} else if (type_ == 22) {
if (!is_null(dialog__SubForm)) {
if (require(dialog__SubForm)->result__SubForm == 0) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
dialog__SubForm = pls::cs::Ref<SubForm>{};
}
IntArray array9 = FrameMenu();
if ([&]() { auto cs_left = pls::cs::box(array9); auto cs_right = pls::cs::box(IntArray{}); return cs_left != cs_right; }()) {
pls::cs::Int32 num25 = array9[0];
pls::cs::Int32 num26 = array9[1];
if (num25 == 26) {
result__SubForm = 0;
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
} else if (num25 == 27) {
result__SubForm = 1;
dialog__SubForm = SubForm::MakeDialog(literal(u"今のセーブデータに\n上書きされます"), literal(u"はい\tいいえ"), 1);
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(dialog__SubForm);});
} else if (num25 == 28) {
result__SubForm = 2;
dialog__SubForm = SubForm::MakeDialog(literal(u"今のセーブデータは\n消えてしまいます"), literal(u"はい\tいいえ"), 1);
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(dialog__SubForm);});
}
}
} else if (type_ == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->DrawAllForms();});
require(textLay_)->Frame();
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);}) || (kl_cfg::Config::DEBUG_CMD() && pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyState(64);}))) {
if (require(textLay_)->IsEnd()) {
++textIdx_;
if (textIdx_ < textAry_.length()) {
{ pls::cs::String cs_arg0 = textAry_[textIdx_]; require(textLay_)->SetText(cs_arg0); }
} else {
if (nextIndex_ == -1) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Pop();});
}
pls::cs::String value = main::AppData::talks_()[nextIndex_];
if (!is_null(talkArg_)) {
value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Replace(value, talkArg_);});
}
StringArray array10 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(value, literal(u"\t"));});
nextIndex_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array10[1]);});
textAry_ = StringArray::make(pls::cs::Int32(array10.length()) - 2);
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::Arraycopy(pls::cs::box(array10), 2, pls::cs::box(textAry_), 0, pls::cs::Int32(array10.length()) - 2);});
textIdx_ = 0;
{ pls::cs::String cs_arg0 = textAry_[textIdx_]; require(textLay_)->SetText(cs_arg0); }
}
} else {
require(textLay_)->Flush();
}
}
} else if (type_ == 13) {
pls::cs::Int32 num27 = eventIds_[page_];
if (frame_ == 1) {
if (num27 == 0) {
require(apdat_)->PlayJingle(17);
} else if (num27 == 1) {
require(apdat_)->PlayJingle(21);
}
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);}) || (kl_cfg::Config::DEBUG_CMD() && pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyState(64);}))) {
if (frame_ < 60) {
frame_ = 60;
} else if (frame_ >= 60) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Pop();});
}
} else if (require(apdat_)->IsPushSoftLabel(2)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Pop();});
}
} else if (type_ == 14) {
frame_ = (frame_ + 1) % 20;
bool flag = MyFormBase::Jp();
if (kairo::unity::util::Language::GetLanguageCode() != literal(u"ja-JP") && kairo::unity::util::Language::GetLanguageCode() != literal(u"en-US") && !pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_starts_with(kairo::unity::util::Language::GetLanguageCode(), literal(u"*"));})) {
flag = true;
}
if (flag) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(131072);})) {
select_ = (select_ - 1 + SubForm::CONFIG_NAMES().length()) % SubForm::CONFIG_NAMES().length();
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(524288);})) {
select_ = (select_ + 1) % SubForm::CONFIG_NAMES().length();
}
pls::cs::Int32 num28 = this->GetTouchValue(SubForm::CONFIG_VALUES()[select_], 0);
if (SubForm::CONFIG_VALUE_REVERSE()[select_]) {
num28 = (num28 + 1) % 2;
}
if (select_ == SubForm::CONFIG_ORIENTATION()) {
if (num28 == -1) {
num28 = 0;
} else {
num28 = 1;
}
}
pls::cs::Int32 num29 = num28;
if (select_ != SubForm::CONFIG_SPEED() || require(require(apdat_)->sysSave_)->ints[9] != 0) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
num28 = ([&]() -> pls::cs::Int32 { auto cs_left = (num28 - 1 + SubForm::CONFIG_VALUE_MAX()[select_]); auto cs_right = SubForm::CONFIG_VALUE_MAX()[select_]; return cs_left % cs_right; }());
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
num28 = (num28 + 1) % SubForm::CONFIG_VALUE_MAX()[select_];
}
}
if (num29 != num28) {
if (SubForm::CONFIG_VALUE_REVERSE()[select_]) {
num28 = (num28 + 1) % 2;
}
if (select_ == SubForm::CONFIG_ORIENTATION()) {
if (num28 == 0) {
num28 = -1;
} else {
num28 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(app_)->GetOrientation();});
}
}
this->SetTouchValue(SubForm::CONFIG_VALUES()[select_], num28);
}
if (require(apdat_)->IsPushSoftLabel(2)) {
try {
require(apdat_)->SaveSystem();
} catch(const pls::cs::Exception& cs_caught_123) {auto t=pls::cs::capture_exception(cs_caught_123);
{
if (kl_cfg::Config::PRINT()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Log::Info(t);});
}
}}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(131072);})) {
select_ = (select_ - 1 + SubForm::CONFIG_EN_NAMES().length()) % SubForm::CONFIG_EN_NAMES().length();
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(524288);})) {
select_ = (select_ + 1) % SubForm::CONFIG_EN_NAMES().length();
}
pls::cs::Int32 num30 = this->GetTouchValue(SubForm::CONFIG_EN_VALUES()[select_], 0);
if (SubForm::CONFIG_EN_VALUE_REVERSE()[select_]) {
num30 = (num30 + 1) % 2;
}
if (select_ == SubForm::CONFIG_EN_ORIENTATION()) {
if (num30 == -1) {
num30 = 0;
} else {
num30 = 1;
}
}
pls::cs::Int32 num31 = num30;
if (select_ != SubForm::CONFIG_EN_SPEED() || require(require(apdat_)->sysSave_)->ints[9] != 0) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
num30 = ([&]() -> pls::cs::Int32 { auto cs_left = (num30 - 1 + SubForm::CONFIG_EN_VALUE_MAX()[select_]); auto cs_right = SubForm::CONFIG_EN_VALUE_MAX()[select_]; return cs_left % cs_right; }());
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
num30 = (num30 + 1) % SubForm::CONFIG_EN_VALUE_MAX()[select_];
}
}
if (num31 != num30) {
if (SubForm::CONFIG_EN_VALUE_REVERSE()[select_]) {
num30 = (num30 + 1) % 2;
}
if (select_ == SubForm::CONFIG_EN_ORIENTATION()) {
if (num30 == 0) {
num30 = -1;
} else {
num30 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(app_)->GetOrientation();});
}
}
this->SetTouchValue(SubForm::CONFIG_EN_VALUES()[select_], num30);
if (select_ == SubForm::CONFIG_EN_CURRENCY()) {
require(require(apdat_)->frmGame_)->SetAllDraw();
}
}
if (require(apdat_)->IsPushSoftLabel(2)) {
try {
require(apdat_)->SaveSystem();
require(require(apdat_)->frmGame_)->SetAllDraw();
} catch(const pls::cs::Exception& cs_caught_124) {auto t2=pls::cs::capture_exception(cs_caught_124);
{
if (kl_cfg::Config::PRINT()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Log::Info(t2);});
}
}}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
}
} else if (type_ == 15) {
frame_ = ((frame_ + 1) % 2147483647 /* Int32.MaxValue */);
pls::cs::Int32 num32 = page_;
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);}) || pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
page_ = (page_ + 1) % require(apdat_)->manualTexts_.length();
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
page_ = (page_ - 1 + require(apdat_)->manualTexts_.length()) % require(apdat_)->manualTexts_.length();
}
if (num32 != page_) {
{ pls::cs::String cs_arg0 = require(apdat_)->manualTexts_[page_]; require(textLay_)->SetText(cs_arg0); }
require(textLay_)->Flush();
}
if (page_ == pls::cs::Int32(require(apdat_)->manualTexts_.length()) - 1) {
SubForm::anime_cnt() = ((SubForm::anime_cnt() + 1) % 2147483647 /* Int32.MaxValue */);
pls::cs::Int32 num33 = SubForm::anime_cnt() % 56;
if (num33 % 28 == 0 && SubForm::anime_cnt() != 0) {
SubForm::anime_mode() = game::GameUtil::Random(2);
SubForm::anime_ballY() = -(game::GameUtil::Random(25) + 5);
}
}
if (require(apdat_)->IsPushSoftLabel(2, 1048576)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Pop();});
}
} else if (type_ == 16) {
if (saveState_ == 0) {
saveState_ = 1;
} else if (saveState_ == 1) {
try {
require(apdat_)->SaveGame();
text_ = literal(u"ゲームセーブ完了");
} catch(const pls::cs::Exception& cs_caught_125) {auto ex=pls::cs::capture_exception(cs_caught_125);
{
if (kl_cfg::Config::PRINT()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Log::Info(ex);});
}
text_ = pls::cs::String::concat(MyFormBase::LTLong(literal(u"セーブに失敗しました【<0>】"), pls::cs::cast_integral<pls::cs::Int64>(require(apdat_)->saveLine_)), object_string(pls::cs::box(ex)));
{ auto cs_target = require(require(apdat_)->sysSave_)->strs; auto cs_index = 10; auto cs_old = cs_target.at(cs_index); auto cs_rhs = ([&]() { auto cs_left = pls::cs::String::concat(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(ex)->ToString();}), literal(u":")); auto cs_right = text_; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); cs_target.at(cs_index) = cs_value; }
if (kl_lang::StringEx::Length(require(require(apdat_)->sysSave_)->strs[10]) > 1024) {
{ auto cs_target = require(require(apdat_)->sysSave_)->strs; auto cs_index = 10; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = require(require(apdat_)->sysSave_)->strs[10]; pls::cs::Int32 cs_arg1 = kl_lang::StringEx::Length(require(require(apdat_)->sysSave_)->strs[10]) - 1024; return kl_lang::StringEx::SubstringJ(cs_arg0, cs_arg1); }());cs_target.set_Item(cs_index,cs_value);}
}
try {
require(apdat_)->SaveSystem();
} catch(const pls::cs::Exception& cs_caught_126) {pls::cs::capture_exception(cs_caught_126);
{

}}
}}
saveState_ = 2;
} else if (saveState_ == 2 && require(apdat_)->IsPushSoftLabel(2, 1048576)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Pop();});
}
} else if (type_ == 17) {
frame_ = (frame_ + 1) % 20;
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
page_ = (page_ - 1 + pagesNum_) % pagesNum_;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
page_ = (page_ + 1 + pagesNum_) % pagesNum_;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);}) || (kl_cfg::Config::DEBUG_CMD() && pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyState(64);}))) {
++page_;
if (page_ >= pagesNum_) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Pop();});
}
}
if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Pop();});
}
} else if (type_ == 18) {
--value1_;
if (value1_ <= 0) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Pop();});
}
} else if (type_ == 19) {
Update_clearPoint();
} else if (type_ == 23) {
++frame_;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->DrawAllForms();});
if (frame_ > 3) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);}) || (kl_cfg::Config::DEBUG_CMD() && pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyState(64);}))) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Pop();});
} else if (require(apdat_)->IsPushSoftLabel(2)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Pop();});
}
}
} else if (type_ == 24 || type_ == 25) {
++frame_;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->DrawAllForms();});
if (frame_ >= SubForm::FADE_TIME_V()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 26) {
if (frame_ == 1 && !require(apdat_)->CheckAlreadyEvent(160)) {
require(apdat_)->ExecEvent(160, pls::cs::String{}, IntArray{});
}
if (require(udat_)->Update_edit(false)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 27 || type_ == 28 || type_ == 31) {
if (!is_null(dialog__SubForm)) {
if (require(dialog__SubForm)->result__SubForm == 0) {
pls::cs::Ref<data::PlayerData> playerData = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), select_);}));
data::PlayerData::Dismissal(require(playerData)->id_);
dialog__SubForm = pls::cs::Ref<SubForm>{};
pls::cs::Ref<SubForm> subForm = ([&]() -> pls::cs::Ref<SubForm> { auto cs_receiver = apdat_; pls::cs::Int32 cs_arg0 = 118 + game::GameUtil::Random(3); return require(cs_receiver)->ExecEvent(cs_arg0, pls::cs::String{}, IntArray{}); }());
require(subForm)->humanCharaType_ = 1;
require(subForm)->humanCharaIndex_ = require(playerData)->id_;
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
dialog__SubForm = pls::cs::Ref<SubForm>{};
return true;
}
pls::cs::Int32 num34 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));});
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(131072);})) {
select_ = (select_ - 1 + num34) % num34;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(524288);})) {
select_ = (select_ + 1) % num34;
}
pls::cs::Int32 num35 = 8;
if (scrollValue_ > select_) {
scrollValue_ = select_;
}
if (scrollValue_ + num35 <= select_) {
scrollValue_ = select_ - num35 + 1;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
pls::cs::Ref<data::PlayerData> playerData2 = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), select_);}));
data::PlayerData::RemoveNew();
if (type_ == 27) {
pls::cs::Ref<SubForm> subForm2 = SubForm::create(30);
require(subForm2)->playerData_ = playerData2;
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(subForm2);});
}
if (type_ == 31) {
if (MyFormBase::Jp()) {
dialog__SubForm = SubForm::MakeDialog(([&]() { auto cs_left = MyFormBase::LT(require(playerData2)->name_); auto cs_right = MyFormBase::LT(literal(u"選手を解雇しますか")); return pls::cs::String::concat(cs_left,cs_right); }()), literal(u"はい\tいいえ"), 1);
} else {
dialog__SubForm = SubForm::MakeDialog(MyFormBase::LT(literal(u"選手を解雇しますか")), literal(u"はい\tいいえ"), 1);
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(dialog__SubForm);});
}
if (type_ == 28) {
pls::cs::Int32 num36 = require(playerData2)->id_;
IntArray array11 = pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = require(udat_)->editTest_team.get_Item(require(udat_)->et_cur[5] / 10); pls::cs::Int32 cs_arg0 = require(udat_)->et_cur[5] % 10; return kl_java_util::Vector_2_ElementAt(require(cs_receiver), cs_arg0); }());}));
pls::cs::Int32 index = array11[2];
pls::cs::Ref<data::PlayerData> obj = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(udat_)->memberPDataist_), index);}));
pls::cs::Int32 index2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_IndexOf(require(require(udat_)->memberPDataist_), pls::cs::box(playerData2));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_SetElementAt(require(require(udat_)->memberPDataist_), pls::cs::box(playerData2), index);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_SetElementAt(require(require(udat_)->memberPDataist_), pls::cs::box(obj), index2);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
require(udat_)->ChangeEditPhase(6, false);
return true;
}
} else {
if (require(apdat_)->IsPushSoftLabel(2)) {
data::PlayerData::RemoveNew();
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
if (require(apdat_)->IsPushSoftLabel(8)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(32));});
}
}
} else if (type_ == 29) {
pls::cs::Int32 num37 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));});
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(131072);})) {
select_ = (select_ - 1 + num37) % num37;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(524288);})) {
select_ = (select_ + 1) % num37;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
page_ = (page_ - 1 + 3) % 3;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
page_ = (page_ + 1) % 3;
}
pls::cs::Int32 recoveredUnusedLocal65;
pls::cs::Int32 num38 = 9;
if (scrollValue_ > select_) {
scrollValue_ = select_;
}
if (scrollValue_ + num38 <= select_) {
scrollValue_ = select_ - num38 + 1;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
if (type_ == 29) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 30) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(32));});
}
if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
if (require(apdat_)->IsPushSoftLabel(8)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(32));});
}
} else if (type_ == 32) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
select_ = (select_ - 1 + 2) % 2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
select_ = (select_ + 1) % 2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 33) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->DrawAllForms();});
pls::cs::Int32 num39 = page_;
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
page_ = (page_ - 1 + 3) % 3;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
page_ = (page_ + 1 + 3) % 3;
}
if (num39 != page_) {
if ((num39 == 0 || num39 == 1) && page_ == 2) {
scrollValue_ = 0;
}
if ((page_ == 0 || page_ == 1) && num39 == 2) {
scrollValue_ = 0;
}
}
if (page_ == 0 || page_ == 1) {
pls::cs::Int32 num40 = require(udat_)->league_dispOlder_.length();
pls::cs::Int32 num41 = 6;
pls::cs::Int32 num42 = num40 - num41 + 1;
if (num42 > 0) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(131072);})) {
scrollValue_ = (scrollValue_ - 1 + num42) % num42;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(524288);})) {
scrollValue_ = (scrollValue_ + 1) % num42;
}
}
} else if (page_ == 2) {
pls::cs::Int32 num43 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));});
pls::cs::Int32 num44 = 6;
pls::cs::Int32 num45 = num43 - num44 + 1;
if (num45 > 0) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(131072);})) {
scrollValue_ = (scrollValue_ - 1 + num45) % num45;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(524288);})) {
scrollValue_ = (scrollValue_ + 1) % num45;
}
}
}
if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
if (kl_cfg::Config::DEBUG_CMD()) {
bool flag2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(2);});
bool flag3 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(4);});
bool flag4 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(8);});
if (flag2 || flag3 || flag4) {
require(require(udat_)->gm_)->score_[0] = 0;
require(require(udat_)->gm_)->score_[1] = 0;
if (flag2) {
require(require(udat_)->gm_)->score_[0] = 1;
} else if (flag3) {

} else {
require(require(udat_)->gm_)->score_[1] = 1;
}
if (require(udat_)->League_update()) {

}
}
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 34) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(131072);})) {
scrollValue_ = main::AppData::ClampMin(scrollValue_ - 1, 0);
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(524288);})) {
scrollValue_ = main::AppData::ClampMax(scrollValue_ + 1, 1);
}
pls::cs::Int32 num46 = page_;
pls::cs::Int32 num47 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));});
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
page_ = (page_ - 1 + num47) % num47;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
page_ = (page_ + 1) % num47;
}
if (num46 != page_) {
pls::cs::Ref<data::LeagueData> leagueData2 = pls::cs::unbox<pls::cs::Ref<data::LeagueData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), page_);}));
require(leagueData2)->SetLeagueInfoExplain(textLay_);
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
pls::cs::Ref<SubForm> subForm3 = SubForm::create(35);
pls::cs::Ref<data::LeagueData> leagueData3 = pls::cs::unbox<pls::cs::Ref<data::LeagueData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), page_);}));
require(subForm3)->leagueData_ = leagueData3;
data::LeagueData::RemoveNew();
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(subForm3);});
}
if (require(apdat_)->IsPushSoftLabel(2)) {
data::LeagueData::RemoveNew();
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 35) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
select_ = (select_ - 1 + 2) % 2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
select_ = (select_ + 1) % 2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
if (select_ == 0) {
pls::cs::Ref<data::LeagueData> leagueData4 = leagueData_;
if (require(apdat_)->ChPayMoney(require(leagueData4)->joinCost_)) {
require(apdat_)->SubMoney(require(leagueData4)->joinCost_, 4);
data::LeagueData::RegistLeague(require(leagueData_)->id_);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->ChangeCurrentForm(require(apdat_)->frmGame_);});
require(apdat_)->ExecEvent(128, pls::cs::String::concat(pls::cs::String::concat(require(leagueData4)->name_, literal(u"\t")), integer_string(require(leagueData4)->schedule_)), IntArray{});
if (require(leagueData4)->id_ == 0 && !require(apdat_)->CheckAlreadyEvent(174)) {
require(apdat_)->ExecEvent(174, pls::cs::String{}, IntArray{});
}
} else {
require(apdat_)->ExecEvent(14, pls::cs::String{}, IntArray{});
}
} else {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 36) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
require(require(apdat_)->frmGame_)->SetBattleData();
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 37) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->DrawAllForms();});
if (([&]() -> bool { auto cs_left = frame_; auto cs_right = ANIME_MATCH_RESULT[1]; return cs_left >= cs_right; }()) && pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 38) {
if (frame_ == 1) {
require(apdat_)->PlayJingle(20);
}
if ([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::VICTORY_ANIME_TIME()[2]; return cs_left >= cs_right; }()) {
for (pls::cs::Int32 j = 0; j < fw_cnt.length(); ++j) {
if (fw_cnt[j] > 0) {
fw_cnt[j]--;
}
}
if (fw_commonWait > 0) {
--fw_commonWait;
}
if (fw_commonWait <= 0) {
pls::cs::Int32 num48 = 0;
for (pls::cs::Int32 k = 0; k < fw_goRate.length(); ++k) {
num48 += fw_goRate[k];
}
pls::cs::Int32 num49 = game::GameUtil::Random(num48);
for (pls::cs::Int32 l = 0; l < fw_goRate.length(); ++l) {
if (num49 < fw_goRate[l]) {
num49 = l;
break;
}
num49 -= fw_goRate[l];
}
pls::cs::Int32 num50 = 0;
for (pls::cs::Int32 m = 0; m < pls::cs::Int32(fw_cnt.length()) * 2; ++m) {
if (fw_cnt[m % fw_cnt.length()] > 0) {
continue;
}
if (num50 == num49) {
fw_cnt[num50] = SubForm::FW_ANIME()[3];
pls::cs::Int32 cs_arg0_232 = m % fw_cnt.length(); pls::cs::Int32 cs_arg2_232 = pls::cs::Int32(fw_cnt.length()) - 1; pls::cs::Int32 cs_arg4_232 = 216 - pls::cs::Int32(192) / fw_cnt.length();
pls::cs::Int32 c2min = game::GameUtil::RateConvert(cs_arg0_232, 0, cs_arg2_232, 24, cs_arg4_232, true);
pls::cs::Int32 cs_arg0_233 = m % fw_cnt.length(); pls::cs::Int32 cs_arg2_233 = pls::cs::Int32(fw_cnt.length()) - 1; pls::cs::Int32 cs_arg3_233 = 24 + pls::cs::Int32(192) / fw_cnt.length();
pls::cs::Int32 c2max = game::GameUtil::RateConvert(cs_arg0_233, 0, cs_arg2_233, cs_arg3_233, 216, true);
{ auto cs_target = fw_pos[num50]; auto cs_index = 0; auto cs_value = game::GameUtil::RateConvert(game::GameUtil::Random(100), 0, 99, c2min, c2max, true);cs_target.set_Item(cs_index,cs_value);}
{ auto cs_target = fw_pos[num50]; auto cs_index = 1; auto cs_value = game::GameUtil::RateConvert(game::GameUtil::Random(100), 0, 99, 28, 91, true);cs_target.set_Item(cs_index,cs_value);}
break;
}
++num50;
}
fw_commonWait = game::GameUtil::Random(30) + 5;
for (pls::cs::Int32 n = 0; n < fw_goRate.length(); ++n) {
if (n == num50) {
fw_goRate[n] = 0;
} else {
{ auto cs_target = fw_goRate; auto cs_index = n; auto cs_old = cs_target.at(cs_index); auto cs_rhs = 100; pls::cs::Int32 cs_value = cs_old + cs_rhs; cs_target.at(cs_index) = cs_value; }
}
}
}
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);}) && ([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::VICTORY_ANIME_TIME()[3]; return cs_left >= cs_right; }())) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 39) {
pls::cs::Int32 num51 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));});
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(131072);})) {
select_ = (select_ - 1 + num51) % num51;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(524288);})) {
select_ = (select_ + 1) % num51;
}
pls::cs::Int32 num52 = 5;
if (scrollValue_ > select_) {
scrollValue_ = select_;
}
if (scrollValue_ + num52 <= select_) {
scrollValue_ = select_ - num52 + 1;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
data::FanActData::RemoveNew();
pls::cs::Ref<data::FanActData> fanActData = pls::cs::unbox<pls::cs::Ref<data::FanActData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), select_);}));
if (require(fanActData)->state_ == 2) {
require(apdat_)->ExecEvent(127, require(fanActData)->name_, IntArray{});
return true;
}
pls::cs::Ref<SubForm> subForm4 = SubForm::create(40);
require(subForm4)->fanActData_ = fanActData;
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(subForm4);});
}
if (require(apdat_)->IsPushSoftLabel(2)) {
data::FanActData::RemoveNew();
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 40) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
select_ = (select_ - 1 + 2) % 2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
select_ = (select_ + 1) % 2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
pls::cs::Ref<data::FanActData> fanActData2 = fanActData_;
if (select_ == 0) {
pls::cs::Int32 cs_arg0_234 = require(fanActData2)->rank_; pls::cs::Int32 cs_arg3_234 = require(fanActData2)->cost_[0]; pls::cs::Int32 cs_arg4_234 = require(fanActData2)->cost_[1];
pls::cs::Int32 num53 = game::GameUtil::RateConvert(cs_arg0_234, 0, 6, cs_arg3_234, cs_arg4_234, true);
if (require(udat_)->ChResearchPoin(require(fanActData2)->costType_, num53)) {
if (require(fanActData2)->type_ == 0) {
pls::cs::Ref<SubForm> subForm5 = SubForm::create(68);
require(subForm5)->fanActData_ = fanActData2;
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(subForm5);});
} else {
require(udat_)->SubResearchPoint(require(fanActData2)->costType_, num53);
require(fanActData2)->ChangeState(2);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->ChangeCurrentForm(require(apdat_)->frmGame_);});
require(apdat_)->AddPopupMessage(35, require(fanActData2)->name_);
if (require(fanActData2)->type_ == 1) {
require(apdat_)->ExecEvent(178, pls::cs::String{}, IntArray{});
} else if (require(fanActData2)->type_ == 2) {
require(apdat_)->ExecEvent(179, pls::cs::String{}, IntArray{});
} else if (require(fanActData2)->type_ == 3) {
require(apdat_)->ExecEvent(180, pls::cs::String{}, IntArray{});
} else if (require(fanActData2)->type_ == 4) {
require(apdat_)->ExecEvent(181, pls::cs::String{}, IntArray{});
} else if (require(fanActData2)->type_ == 5) {
require(apdat_)->ExecEvent(182, pls::cs::String{}, IntArray{});
} else if (require(fanActData2)->type_ == 6) {
require(apdat_)->ExecEvent(183, pls::cs::String{}, IntArray{});
}
}
} else {
require(apdat_)->ExecEvent(13, pls::cs::String{}, IntArray{});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
} else {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else {
if (type_ == 41) {
if ([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::FA2_ANIME_TIME()[2] + 1; return cs_left == cs_right; }()) {
require(apdat_)->PlaySe(25);
}
if (([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::FA2_ANIME_TIME()[5]; return cs_left >= cs_right; }()) && ([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::FA2_ANIME_TIME()[6]; return cs_left <= cs_right; }())) {
for (pls::cs::Int32 num54 = 0; num54 < 4; ++num54) {
UpdateMeterParam(([&]() -> pls::cs::Int32 { auto cs_left = frame_; auto cs_right = SubForm::FA2_ANIME_TIME()[5]; return cs_left - cs_right; }()), num54);
}
}
if ([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::FA2_ANIME_TIME()[6]; return cs_left == cs_right; }()) {
for (pls::cs::Int32 num55 = 0; num55 < 4; ++num55) {
FinishMeterParam(num55);
}
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
pls::cs::Ref<data::FanActData> fanActData3 = fanActData_;
if ([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::FA2_ANIME_TIME()[4]; return cs_left < cs_right; }()) {
frame_ = SubForm::FA2_ANIME_TIME()[4];
} else {
if ([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::FA2_ANIME_TIME()[6]; return cs_left < cs_right; }()) {
frame_ = SubForm::FA2_ANIME_TIME()[6] - 1;
} else {
pls::cs::Int32 rank_ = require(fanActData3)->rank_;
for (pls::cs::Int32 num56 = 0; num56 < 4; ++num56) {
IntArray array12 = GetMeterParam(num56);
pls::cs::Int32 num57 = data::FanActData::fa_id()[num56];
if (num57 == 3) {
data::FanActData::AddRankUpParam(array12[6], fanActData3);
} else {
data::FanActData::AddFanParam(array12[6], num57);
}
}
if (require(fanActData3)->rank_ != rank_) {
([&]() -> pls::cs::Ref<SubForm> { IntArray2 cs_arg0 = require(fanActData3)->execsScript_[require(fanActData3)->rank_ - 1]; return require(apdat_)->ExecuteScript(cs_arg0, true, pls::cs::String{}, IntArray{}, 0, 0, -1); }());
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
}
}
} else {
return Update2();
}
}
return true;

}
}

// M:form.SubForm.Update2
bool SubForm::Update2() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Update2",game);
{
game::UserData::ensure_initialized();
kl_cfg::Config::ensure_initialized();
data::TrainingData::ensure_initialized();
data::PlayerData::ensure_initialized();
data::SupervisorData::ensure_initialized();
main::AppData::ensure_initialized();
data::TenantData::ensure_initialized();

if (type_ == 42) {
pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));});
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(131072);})) {
select_ = (select_ - 1 + num) % num;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(524288);})) {
select_ = (select_ + 1) % num;
}
pls::cs::Int32 num2 = 6;
if (scrollValue_ > select_) {
scrollValue_ = select_;
}
if (scrollValue_ + num2 <= select_) {
scrollValue_ = select_ - num2 + 1;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
data::SponsorData::RemoveNew();
pls::cs::Ref<data::SponsorData> sponsorData = pls::cs::unbox<pls::cs::Ref<data::SponsorData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), select_);}));
if (require(sponsorData)->state_ == 2) {
([&]() -> pls::cs::Ref<SubForm> { auto cs_receiver = apdat_; pls::cs::String cs_arg1 = ([&]() { auto cs_left = pls::cs::String::concat(([&]() { auto cs_left = pls::cs::String::concat(require(sponsorData)->name_, literal(u"\t")); auto cs_right = MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(require(sponsorData)->GetIncome())); return pls::cs::String::concat(cs_left,cs_right); }()), literal(u"\t")); auto cs_right = integer_string(require(sponsorData)->satisfactPoint_); return pls::cs::String::concat(cs_left,cs_right); }()); return require(cs_receiver)->ExecEvent(144, cs_arg1, IntArray{}); }());
} else {
pls::cs::Ref<SubForm> subForm = SubForm::create(43);
require(subForm)->sponsorData_ = sponsorData;
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(subForm);});
}
} else if (require(apdat_)->IsPushSoftLabel(2)) {
data::SponsorData::RemoveNew();
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 43) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
select_ = (select_ - 1 + 2) % 2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
select_ = (select_ + 1) % 2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
pls::cs::Ref<data::SponsorData> sponsorData2 = sponsorData_;
if (select_ == 0) {
if (require(udat_)->ChResearchPoin(require(sponsorData2)->costType_, require(sponsorData2)->cost_)) {
require(udat_)->SubResearchPoint(require(sponsorData2)->costType_, require(sponsorData2)->cost_);
pls::cs::Ref<SubForm> subForm2 = SubForm::create(44);
require(subForm2)->sponsorData_ = sponsorData_;
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(subForm2);});
} else {
require(apdat_)->ExecEvent(13, pls::cs::String{}, IntArray{});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
} else {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 44) {
for (pls::cs::Int32 i = 0; i < game::UserData::NEGOTIATE_RESULT_TH().length(); ++i) {
pls::cs::Int32 num3 = game::UserData::NEGOTIATE_RESULT_TH()[i];
pls::cs::Int32 num4 = ([&]() -> pls::cs::Int32 { auto cs_left = ([&]() -> pls::cs::Int32 { auto cs_left = (([&]() -> pls::cs::Int32 { auto cs_left = SubForm::SP_ANIME_TIME()[1]; auto cs_right = SubForm::SP_ANIME_TIME()[0]; return cs_left - cs_right; }())); auto cs_right = game::UserData::WAIT_TIME()[i]; return cs_left * cs_right; }()) / 100; auto cs_right = SubForm::SP_ANIME_TIME()[0]; return cs_left + cs_right; }()) - 5;
if (num3 == 1 && frame_ - num4 == 1) {
require(apdat_)->PlaySe(26);
}
}
if ((kl_cfg::Config::DEBUG_CMD() || kl_cfg::Config::PTW()) && (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyState(16);}) || pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyState(32);}))) {
++frame_;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);}) || (kl_cfg::Config::DEBUG_CMD() && pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyState(64);}))) {
pls::cs::Int32 cs_arg0_237 = ([&]() -> pls::cs::Int32 { auto cs_left_237 = frame_; auto cs_right_237 = SubForm::SP_ANIME_TIME()[0]; return cs_left_237 - cs_right_237; }()); pls::cs::Int32 cs_arg1_237 = ([&]() -> pls::cs::Int32 { auto cs_left_237 = SubForm::SP_ANIME_TIME()[1]; auto cs_right_237 = SubForm::SP_ANIME_TIME()[0]; return cs_left_237 - cs_right_237; }());
pls::cs::Int32 feelPtEf = game::UserData::GetFeelPtEf(cs_arg0_237, cs_arg1_237);
if (feelPtEf >= 100) {
for (pls::cs::Int32 j = 0; j < game::UserData::NEGOTIATE_RESULT_TH().length(); ++j) {
pls::cs::Int32 num5 = game::UserData::NEGOTIATE_RESULT_TH()[j];
pls::cs::Int32 num6 = ([&]() -> pls::cs::Int32 { auto cs_left = ([&]() -> pls::cs::Int32 { auto cs_left = (([&]() -> pls::cs::Int32 { auto cs_left = SubForm::SP_ANIME_TIME()[1]; auto cs_right = SubForm::SP_ANIME_TIME()[0]; return cs_left - cs_right; }())); auto cs_right = game::UserData::WAIT_TIME()[j]; return cs_left * cs_right; }()) / 100; auto cs_right = SubForm::SP_ANIME_TIME()[0]; return cs_left + cs_right; }()) - 5;
if (frame_ < num6) {
frame_ = num6;
break;
}
if (j == pls::cs::Int32(game::UserData::NEGOTIATE_RESULT_TH().length()) - 1 && ([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::SP_ANIME_TIME()[3]; return cs_left < cs_right; }())) {
frame_ = SubForm::SP_ANIME_TIME()[3];
}
}
}
if ([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::SP_ANIME_TIME()[4]; return cs_left >= cs_right; }()) {
pls::cs::Ref<data::SponsorData> sponsorData3 = sponsorData_;
{ auto cs_target = sponsorData3; pls::cs::Int32 cs_value = game::UserData::NEGOTIATE_RESULT_DISPVALUE()[3]; require(cs_target)->feelPt_ = cs_value; }
if (require(sponsorData3)->feelPt_ >= 100) {
pls::cs::Ref<data::TeamData> teamData = require(apdat_)->tData_.get_Item(0);
if (MyFormBase::Jp()) {
([&]() -> pls::cs::Ref<SubForm> { auto cs_receiver = apdat_; IntArray2 cs_arg0 = require(sponsorData3)->execsScript_; pls::cs::String cs_arg2 = pls::cs::String::concat(([&]() { auto cs_left = pls::cs::String::concat(MyFormBase::LT(require(teamData)->name_), literal(u"\t")); auto cs_right = integer_string(require(sponsorData3)->income_[0]); return pls::cs::String::concat(cs_left,cs_right); }()), literal(u"万円")); return require(cs_receiver)->ExecuteScript(cs_arg0, true, cs_arg2, IntArray{}, 0, 0, -1); }());
} else {
([&]() -> pls::cs::Ref<SubForm> { auto cs_receiver = apdat_; IntArray2 cs_arg0 = require(sponsorData3)->execsScript_; pls::cs::String cs_arg2 = ([&]() { auto cs_left = pls::cs::String::concat(MyFormBase::LT(require(teamData)->name_), literal(u"\t")); auto cs_right = MyFormBase::YEN(literal(u"万円"), pls::cs::cast_integral<pls::cs::Int64>(require(sponsorData3)->income_[0])); return pls::cs::String::concat(cs_left,cs_right); }()); return require(cs_receiver)->ExecuteScript(cs_arg0, true, cs_arg2, IntArray{}, 0, 0, -1); }());
}
require(sponsorData3)->ChangeState(2);
require(apdat_)->AddPopupMessage(27, require(sponsorData3)->name_);
} else {
pls::cs::Ref<SubForm> subForm3 = require(apdat_)->ExecEvent(92, pls::cs::String{}, IntArray{});
require(subForm3)->humanCharaIndex_ = require(sponsorData3)->id_;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
require(apdat_)->PlayBgm(0);
}
}
} else if (type_ == 45) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(131072);})) {
if (select_ <= 2) {
select_ = 4;
} else if (select_ == 3) {
select_ = page_;
} else if (select_ == 4) {
select_ = 3;
}
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(524288);})) {
if (select_ <= 2) {
select_ = 3;
} else if (select_ == 3) {
select_ = 4;
} else if (select_ == 4) {
select_ = page_;
}
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
if (select_ == 0) {
select_ = 2;
} else if (select_ == 1 || select_ == 2) {
--select_;
}
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
if (select_ == 2) {
select_ = 0;
} else if (select_ == 0 || select_ == 1) {
++select_;
}
}
if (select_ < 3) {
page_ = select_;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
if (select_ <= 2) {
pls::cs::Ref<SubForm> subForm4 = SubForm::create(47);
require(subForm4)->value1_ = select_;
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(subForm4);});
}
if (select_ == 3) {
select_ = 4;
if (!require(apdat_)->CheckAlreadyEvent(159)) {
require(apdat_)->ExecEvent(159, pls::cs::String{}, IntArray{});
}
pls::cs::Ref<SubForm> form = SubForm::create(46);
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(form);});
}
bool flag = false;
for (pls::cs::Int32 k = 0; k < data::TrainingData::TRA_PLAYER().length(); ++k) {
if (data::TrainingData::TRA_PLAYER()[k] != -1) {
flag = true;
break;
}
}
if (flag) {
pls::cs::Ref<data::TrainingData> trainingData = require(apdat_)->trainingData_.get_Item(data::TrainingData::TRA_SELECT_TRA());
if (require(udat_)->ChResearchPoin(require(trainingData)->costType_, require(trainingData)->cost_)) {
require(udat_)->SubResearchPoint(require(trainingData)->costType_, require(trainingData)->cost_);
pls::cs::Ref<SubForm> form2 = SubForm::create(49);
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(form2);});
}
require(apdat_)->ExecEvent(12, pls::cs::String{}, IntArray{});
} else {
require(apdat_)->ExecEvent(10, pls::cs::String{}, IntArray{});
}
} else {
if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
if (require(apdat_)->IsPushSoftLabel(7) && select_ <= 2) {
data::TrainingData::TRA_PLAYER()[select_] = -1;
}
}
} else if (type_ == 46) {
pls::cs::Int32 num7 = (([&]() -> pls::cs::Int32 { pls::cs::Int32 cs_arg0 = (page_ + 1) * 5; pls::cs::Int32 cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}); return main::AppData::ClampMax(cs_arg0, cs_arg1); }()) - 1) % 5 + 1;
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(131072);})) {
select_ = (select_ - 1 + num7) % num7;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(524288);})) {
select_ = (select_ + 1) % num7;
}
pls::cs::Int32 max_ = (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}) - 1) / 5;
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
page_ = main::AppData::ClampMin(page_ - 1, 0);
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
page_ = main::AppData::ClampMax(page_ + 1, max_);
}
if ([&]() -> bool { auto cs_left = select_ + page_ * num7; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}); return cs_left >= cs_right; }()) {
select_ = (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));}) - 1) % num7;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
data::TrainingData::RemoveNew();
pls::cs::Ref<data::TrainingData> trainingData2 = pls::cs::unbox<pls::cs::Ref<data::TrainingData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), select_ + page_ * 5);}));
if (require(udat_)->ChResearchPoin(require(trainingData2)->costType_, require(trainingData2)->cost_)) {
data::TrainingData::TRA_SELECT_TRA() = require(trainingData2)->id_;
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
require(apdat_)->ExecEvent(12, pls::cs::String{}, IntArray{});
} else if (require(apdat_)->IsPushSoftLabel(2)) {
data::TrainingData::RemoveNew();
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 47) {
pls::cs::Int32 num8 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));});
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(131072);})) {
select_ = (select_ - 1 + num8) % num8;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(524288);})) {
select_ = (select_ + 1) % num8;
}
pls::cs::Int32 num9 = 8;
if (scrollValue_ > select_) {
scrollValue_ = select_;
}
if (scrollValue_ + num9 <= select_) {
scrollValue_ = select_ - num9 + 1;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
pls::cs::Ref<data::PlayerData> playerData = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), select_);}));
data::TrainingData::TRA_PLAYER()[value1_] = require(playerData)->id_;
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 48) {

} else {
if (type_ == 49) {
++training_cnt;
if (([&]() -> bool { auto cs_left = training_cnt; auto cs_right = SubForm::TRA_ANIME_TIME2()[0]; return cs_left >= cs_right; }()) && ([&]() -> bool { auto cs_left = training_cnt; auto cs_right = SubForm::TRA_ANIME_TIME2()[1]; return cs_left < cs_right; }())) {
auto cs_left_238 = training_cnt; auto cs_right_238 = SubForm::TRA_ANIME_TIME2()[0];
pls::cs::Int32 num10 = cs_left_238 - cs_right_238;
pls::cs::Int32 num11 = num10 / 25;
pls::cs::Int32 num12 = num10 % 25;
if (num12 == SubForm::TRA_AT()[0]) {
require(apdat_)->PlaySe(26);
}
}
if ([&]() -> bool { auto cs_left = training_cnt; auto cs_right = SubForm::TRA_ANIME_TIME2()[3] + 1; return cs_left == cs_right; }()) {
require(apdat_)->PlaySe(22);
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
if (([&]() -> bool { auto cs_left = training_cnt; auto cs_right = SubForm::TRA_ANIME_TIME2()[0]; return cs_left >= cs_right; }()) && ([&]() -> bool { auto cs_left = training_cnt; auto cs_right = SubForm::TRA_ANIME_TIME2()[1]; return cs_left < cs_right; }())) {
auto cs_left_239 = training_cnt; auto cs_right_239 = SubForm::TRA_ANIME_TIME2()[0];
pls::cs::Int32 num13 = cs_left_239 - cs_right_239;
pls::cs::Int32 num14 = num13 / 25;
pls::cs::Int32 num15 = num13 % 25;
if (num15 < SubForm::TRA_AT()[1]) {
training_cnt = ([&]() -> pls::cs::Int32 { auto cs_left = num14 * 25 + SubForm::TRA_AT()[1]; auto cs_right = SubForm::TRA_ANIME_TIME2()[0]; return cs_left + cs_right; }());
} else {
training_cnt = ([&]() -> pls::cs::Int32 { auto cs_left = (num14 + 1) * 25 + SubForm::TRA_AT()[1]; auto cs_right = SubForm::TRA_ANIME_TIME2()[0]; return cs_left + cs_right; }());
}
if ([&]() -> bool { auto cs_left = training_cnt; auto cs_right = SubForm::TRA_ANIME_TIME2()[1]; return cs_left >= cs_right; }()) {
training_cnt = SubForm::TRA_ANIME_TIME2()[1];
}
}
if ([&]() -> bool { auto cs_left = training_cnt; auto cs_right = SubForm::TRA_ANIME_TIME2()[pls::cs::Int32(SubForm::TRA_ANIME_TIME2().length()) - 1]; return cs_left >= cs_right; }()) {
for (pls::cs::Int32 l = 0; l < data::TrainingData::TRA_PLAYER().length(); ++l) {
if (data::TrainingData::TRA_PLAYER()[l] == -1) {
continue;
}
pls::cs::Ref<data::PlayerData> playerData2 = require(apdat_)->pData_.get_Item(data::TrainingData::TRA_PLAYER()[l]);
{ IntArray cs_arg0 = data::TrainingData::TRA_ADD()[l]; require(playerData2)->AddPhysicalParam(cs_arg0); }
if (!require(apdat_)->CheckAlreadyEvent(189)) {
for (pls::cs::Int32 m = 0; m < require(playerData2)->paramPhysical_.length(); ++m) {
if (require(playerData2)->paramPhysical_[m] >= 1000) {
([&]() -> pls::cs::Ref<SubForm> { auto cs_receiver = apdat_; pls::cs::String cs_arg1 = ([&]() { auto cs_left = pls::cs::String::concat(require(playerData2)->name_, literal(u"\t")); auto cs_right = MyFormBase::LT(data::PlayerData::PARAM_NAME()[m]); return pls::cs::String::concat(cs_left,cs_right); }()); return require(cs_receiver)->ExecEvent(189, cs_arg1, IntArray{}); }());
break;
}
}
}
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
}
} else if (type_ == 50) {
pls::cs::Int32 num16 = data::SupervisorData::TRAINING_POLICY_STR().length();
pls::cs::Int32 num17 = select_;
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
select_ = (select_ - 1 + num16) % num16;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
select_ = (select_ + 1) % num16;
}
if (num17 != select_) {
if (select_ != require(udat_)->selectTrainingPolicy_) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = main::AppData::softLabels_()[0]; pls::cs::String cs_arg1 = main::AppData::softLabels_()[13]; this->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{}); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = main::AppData::softLabels_()[0]; pls::cs::String cs_arg1 = main::AppData::softLabels_()[2]; this->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{}); }());});
}
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);}) || require(apdat_)->IsPushSoftLabel(13)) {
if (select_ != require(udat_)->selectTrainingPolicy_) {
require(udat_)->selectTrainingPolicy_ = select_;
pls::cs::Ref<SubForm> subForm5 = pls::cs::Ref<SubForm>{};
if (require(udat_)->selectTrainingPolicy_ == 0) {
subForm5 = require(apdat_)->ExecEvent(149, pls::cs::String{}, IntArray{});
} else if (require(udat_)->selectTrainingPolicy_ == 1) {
subForm5 = require(apdat_)->ExecEvent(150, pls::cs::String{}, IntArray{});
} else if (require(udat_)->selectTrainingPolicy_ == 2) {
subForm5 = require(apdat_)->ExecEvent(151, pls::cs::String{}, IntArray{});
}
if (!is_null(subForm5)) {
require(subForm5)->humanCharaIndex_ = require(udat_)->selectSupervisorId_;
}
require(udat_)->ChangeTraining();
require(apdat_)->AddPopupMessage(37, pls::cs::String{});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Log::Info(pls::cs::String::concat(literal(u"■SubForm.java update2() UserData.POPUPMEM_ID_CHANGE_POLICY = "), integer_string(37)), pls::cs::Ref<pls::cs::ExceptionObject>{});});
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 51) {
pls::cs::Int32 num18 = select_;
pls::cs::Int32 num19 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));});
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
select_ = (select_ - 1 + num19) % num19;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
select_ = (select_ + 1) % num19;
}
if (num18 != select_) {
pls::cs::Ref<data::SupervisorData> supervisorData = pls::cs::unbox<pls::cs::Ref<data::SupervisorData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), select_);}));
require(udat_)->SetPlayerParam(require(supervisorData)->paramPhysical_, require(supervisorData)->paramPhysical_);
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
pls::cs::Int32 selectSupervisorId_ = require(udat_)->selectSupervisorId_;
pls::cs::Ref<data::SupervisorData> supervisorData2 = pls::cs::unbox<pls::cs::Ref<data::SupervisorData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), select_);}));
if (selectSupervisorId_ != require(supervisorData2)->id_) {
data::SupervisorData::ContractSupervisor(require(supervisorData2)->id_, false, true);
pls::cs::Ref<SubForm> subForm6 = require(apdat_)->ExecEvent(113, pls::cs::String{}, IntArray{});
require(subForm6)->humanCharaType_ = 3;
require(subForm6)->humanCharaIndex_ = require(supervisorData2)->id_;
} else {
data::SupervisorData::ContractSupervisor(require(supervisorData2)->id_, true, true);
pls::cs::Ref<SubForm> subForm7 = require(apdat_)->ExecEvent(114, pls::cs::String{}, IntArray{});
require(subForm7)->humanCharaType_ = 3;
require(subForm7)->humanCharaIndex_ = require(supervisorData2)->id_;
}
result__SubForm = 1;
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
if (require(apdat_)->IsPushSoftLabel(2)) {
result__SubForm = 0;
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 52) {
if (!is_null(subForm_)) {
if (require(subForm_)->result__SubForm == 1) {
subForm_ = pls::cs::Ref<SubForm>{};
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
subForm_ = pls::cs::Ref<SubForm>{};
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
select_ = (select_ - 1 + 2) % 2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
select_ = (select_ + 1) % 2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
pls::cs::Ref<data::SupervisorData> supervisorData3 = require(apdat_)->svisorData_.get_Item(require(udat_)->selectSupervisorId_);
if (select_ == 0) {
require(apdat_)->ExecEvent(112, pls::cs::String{}, IntArray{});
subForm_ = SubForm::create(51);
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(subForm_);});
}
data::SupervisorData::ContractSupervisor(require(supervisorData3)->id_, true, true);
pls::cs::Ref<SubForm> subForm8 = require(apdat_)->ExecEvent(114, pls::cs::String{}, IntArray{});
require(subForm8)->humanCharaType_ = 3;
require(subForm8)->humanCharaIndex_ = require(supervisorData3)->id_;
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 53) {
if (!is_null(subForm_)) {
if (require(subForm_)->result__SubForm == 0) {
subForm_ = pls::cs::Ref<SubForm>{};
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
subForm_ = pls::cs::Ref<SubForm>{};
}
pls::cs::Int32 num20 = select_;
pls::cs::Int32 num21 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));});
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(131072);})) {
select_ = (select_ - 1 + num21) % num21;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(524288);})) {
select_ = (select_ + 1) % num21;
}
pls::cs::Int32 num22 = 5;
if (scrollValue_ > select_) {
scrollValue_ = select_;
}
if (scrollValue_ + num22 <= select_) {
scrollValue_ = select_ - num22 + 1;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
data::TradeData::RemoveNew();
pls::cs::Ref<data::TradeData> tradeData = pls::cs::unbox<pls::cs::Ref<data::TradeData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), select_);}));
pls::cs::Ref<data::PlayerData> playerData3 = require(apdat_)->pData_.get_Item(require(tradeData)->playerDataId_);
require(apdat_)->ExecEvent(73 + require(playerData3)->category_, pls::cs::String{}, IntArray{});
subForm_ = SubForm::create(54);
require(subForm_)->tradeData_ = tradeData;
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(subForm_);});
}
if (require(apdat_)->IsPushSoftLabel(2)) {
data::TradeData::RemoveNew();
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
if (require(apdat_)->IsPushSoftLabel(8)) {
data::TradeData::RemoveNew();
pls::cs::Ref<data::TradeData> tradeData2 = pls::cs::unbox<pls::cs::Ref<data::TradeData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), select_);}));
pls::cs::Ref<data::PlayerData> playerData4 = require(apdat_)->pData_.get_Item(require(tradeData2)->playerDataId_);
require(apdat_)->ExecEvent(73 + require(playerData4)->category_, pls::cs::String{}, IntArray{});
}
} else if (type_ == 54) {
if (!is_null(subForm_)) {
result__SubForm = require(subForm_)->result__SubForm;
subForm_ = pls::cs::Ref<SubForm>{};
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
select_ = (select_ - 1 + 2) % 2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
select_ = (select_ + 1) % 2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
if (select_ == 0) {
pls::cs::Ref<data::TradeData> tradeData3 = tradeData_;
if (require(apdat_)->ChPayMoney(require(tradeData3)->cost_)) {
require(apdat_)->SubMoney(require(tradeData3)->cost_, 4);
subForm_ = SubForm::create(55);
require(subForm_)->tradeData_ = tradeData_;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->Push(subForm_);});
} else {
require(apdat_)->ExecEvent(14, pls::cs::String{}, IntArray{});
result__SubForm = 1;
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 55) {
for (pls::cs::Int32 n = 0; n < game::UserData::NEGOTIATE_RESULT_TH().length(); ++n) {
pls::cs::Int32 num23 = game::UserData::NEGOTIATE_RESULT_TH()[n];
pls::cs::Int32 num24 = ([&]() -> pls::cs::Int32 { auto cs_left = ([&]() -> pls::cs::Int32 { auto cs_left = (([&]() -> pls::cs::Int32 { auto cs_left = SubForm::SP_ANIME_TIME()[1]; auto cs_right = SubForm::SP_ANIME_TIME()[0]; return cs_left - cs_right; }())); auto cs_right = game::UserData::WAIT_TIME()[n]; return cs_left * cs_right; }()) / 100; auto cs_right = SubForm::SP_ANIME_TIME()[0]; return cs_left + cs_right; }()) - 5;
if (num23 == 1 && frame_ - num24 == 1) {
require(apdat_)->PlaySe(26);
}
}
if ((kl_cfg::Config::DEBUG_CMD() || kl_cfg::Config::PTW()) && (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyState(16);}) || pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyState(32);}))) {
++frame_;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);}) || (kl_cfg::Config::DEBUG_CMD() && pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyState(64);}))) {
pls::cs::Int32 cs_arg0_240 = ([&]() -> pls::cs::Int32 { auto cs_left_240 = frame_; auto cs_right_240 = SubForm::SP_ANIME_TIME()[0]; return cs_left_240 - cs_right_240; }()); pls::cs::Int32 cs_arg1_240 = ([&]() -> pls::cs::Int32 { auto cs_left_240 = SubForm::SP_ANIME_TIME()[1]; auto cs_right_240 = SubForm::SP_ANIME_TIME()[0]; return cs_left_240 - cs_right_240; }());
pls::cs::Int32 feelPtEf2 = game::UserData::GetFeelPtEf(cs_arg0_240, cs_arg1_240);
if (feelPtEf2 >= 100) {
for (pls::cs::Int32 num25 = 0; num25 < game::UserData::NEGOTIATE_RESULT_TH().length(); ++num25) {
pls::cs::Int32 num26 = game::UserData::NEGOTIATE_RESULT_TH()[num25];
pls::cs::Int32 num27 = ([&]() -> pls::cs::Int32 { auto cs_left = ([&]() -> pls::cs::Int32 { auto cs_left = (([&]() -> pls::cs::Int32 { auto cs_left = SubForm::SP_ANIME_TIME()[1]; auto cs_right = SubForm::SP_ANIME_TIME()[0]; return cs_left - cs_right; }())); auto cs_right = game::UserData::WAIT_TIME()[num25]; return cs_left * cs_right; }()) / 100; auto cs_right = SubForm::SP_ANIME_TIME()[0]; return cs_left + cs_right; }()) - 5;
if (frame_ < num27) {
frame_ = num27;
break;
}
if (num25 == pls::cs::Int32(game::UserData::NEGOTIATE_RESULT_TH().length()) - 1 && ([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::SP_ANIME_TIME()[3]; return cs_left < cs_right; }())) {
frame_ = SubForm::SP_ANIME_TIME()[3];
}
}
}
if ([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::SP_ANIME_TIME()[4]; return cs_left >= cs_right; }()) {
pls::cs::Ref<data::TradeData> tradeData4 = tradeData_;
pls::cs::Ref<data::PlayerData> playerData5 = require(apdat_)->pData_.get_Item(require(tradeData4)->playerDataId_);
{ auto cs_target = tradeData4; pls::cs::Int32 cs_value = game::UserData::NEGOTIATE_RESULT_DISPVALUE()[3]; require(cs_target)->feelPt_ = cs_value; }
if (require(tradeData4)->feelPt_ >= 100) {
require(apdat_)->ExecEvent(145, pls::cs::String{}, IntArray{});
pls::cs::Ref<SubForm> subForm9 = SubForm::create(56);
require(subForm9)->tradeData_ = tradeData_;
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(subForm9);});
result__SubForm = 0;
} else {
require(apdat_)->ExecEvent(122, pls::cs::String{}, IntArray{});
result__SubForm = 1;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
require(apdat_)->PlayBgm(0);
}
}
} else if (type_ == 56) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->DrawAllForms();});
if (frame_ == 1) {
require(apdat_)->PlayJingle(17);
}
if (frame_ >= 50 && pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
pls::cs::Ref<data::TradeData> tradeData5 = tradeData_;
pls::cs::Ref<data::PlayerData> playerData6 = require(apdat_)->pData_.get_Item(require(tradeData5)->playerDataId_);
pls::cs::Int32 dispParamToEva = data::FanActData::GetDispParamToEva(require(tradeData5)->getNameValue_, 2);
data::FanActData::AddFanParam(dispParamToEva, 2);
data::PlayerData::Employ(require(playerData6)->id_);
require(apdat_)->ExecuteScript(require(tradeData5)->execsScript_, true, pls::cs::String{}, IntArray{}, 0, 1, require(playerData6)->id_);
require(apdat_)->ExecEvent(146, pls::cs::String{}, IntArray{});
require(apdat_)->ExecEvent(147, pls::cs::String{}, IntArray{});
if (!require(apdat_)->CheckAlreadyEvent(173)) {
require(apdat_)->ExecEvent(173, pls::cs::String{}, IntArray{});
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 57) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 58) {
pls::cs::Int32 num28 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));});
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(131072);})) {
select_ = (select_ - 1 + num28) % num28;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(524288);})) {
select_ = (select_ + 1) % num28;
}
pls::cs::Int32 num29 = 6;
if (scrollValue_ > select_) {
scrollValue_ = select_;
}
if (scrollValue_ + num29 <= select_) {
scrollValue_ = select_ - num29 + 1;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
pls::cs::Ref<SubForm> subForm10 = SubForm::create(59);
{ auto cs_target = subForm10; auto cs_value = pls::cs::unbox<pls::cs::Ref<data::QuestMatchData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), select_);})); require(cs_target)->qmData_ = cs_value; }
data::QuestMatchData::RemoveNew();
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(subForm10);});
}
if (require(apdat_)->IsPushSoftLabel(2)) {
data::QuestMatchData::RemoveNew();
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 59) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(131072);})) {
scrollValue_ = main::AppData::ClampMin(scrollValue_ - 1, 0);
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(524288);})) {
scrollValue_ = main::AppData::ClampMax(scrollValue_ + 1, 1);
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
page_ = (page_ - 1 + 2) % 2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
page_ = (page_ + 1) % 2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
if (page_ == 0) {
pls::cs::Ref<data::QuestMatchData> questMatchData = qmData_;
if (require(apdat_)->ChPayMoney(require(questMatchData)->joinCost_) || require(questMatchData)->joinCost_ == 0) {
require(apdat_)->SubMoney(require(questMatchData)->joinCost_, 4);
data::QuestMatchData::RegistQuestMatch(require(qmData_)->id_);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->ChangeCurrentForm(require(apdat_)->frmGame_);});
require(apdat_)->ExecEvent(132, pls::cs::String::concat(pls::cs::String::concat(require(questMatchData)->name_, literal(u"\t")), integer_string(require(questMatchData)->schedule_)), IntArray{});
} else {
require(apdat_)->ExecEvent(14, pls::cs::String{}, IntArray{});
}
} else {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 60 || type_ == 61) {
pls::cs::Int32 num30 = select_;
pls::cs::Int32 num31 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));});
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(131072);})) {
select_ = (select_ - 1 + num31) % num31;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(524288);})) {
select_ = (select_ + 1) % num31;
}
pls::cs::Int32 num32 = 6;
if (scrollValue_ > select_) {
scrollValue_ = select_;
}
if (scrollValue_ + num32 <= select_) {
scrollValue_ = select_ - num32 + 1;
}
if (num30 != select_) {
pls::cs::Ref<data::TenantData> tenantData = pls::cs::unbox<pls::cs::Ref<data::TenantData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), select_);}));
if (require(tenantData)->IsTAreaOrStadiumTenant()) {
textLay_ = kairo::unity::ui::TextLayout::create(false, true);
require(textLay_)->SetSize(192.0f, 33.0f);
require(textLay_)->SetColor(SubForm::SC_WINDOW_BLACK());
require(textLay_)->SetLineSpace(5);
require(textLay_)->SetText(require(tenantData)->explain_);
require(textLay_)->Flush();
}
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
data::TenantData::RemoveNew();
pls::cs::Ref<data::TenantData> tenantData2 = pls::cs::unbox<pls::cs::Ref<data::TenantData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), select_);}));
if (type_ == 60) {
if (require(tenantData2)->state_ == 2) {
require(apdat_)->ExecEvent(126, require(tenantData2)->name_, IntArray{});
return true;
}
pls::cs::Ref<SubForm> subForm11 = SubForm::create(63);
require(subForm11)->tenantId_ = tenantId_;
require(subForm11)->tenantDataId_ = require(tenantData2)->id_;
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(subForm11);});
}
if (type_ == 61) {
if (require(apdat_)->ChPayMoney(require(tenantData2)->buildCost_)) {
pls::cs::Ref<SubForm> subForm12 = SubForm::create(62);
require(subForm12)->tenantId_ = tenantId_;
require(subForm12)->tenantDataId_ = require(tenantData2)->id_;
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(subForm12);});
}
require(apdat_)->ExecEvent(14, pls::cs::String{}, IntArray{});
}
} else if (require(apdat_)->IsPushSoftLabel(2)) {
data::TenantData::RemoveNew();
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 62) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
select_ = (select_ - 1 + 2) % 2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
select_ = (select_ + 1) % 2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
if (select_ == 0) {
pls::cs::Ref<game::Tenant> tenant = require(udat_)->tenants_.get_Item(tenantId_);
pls::cs::Ref<data::TenantData> tenantData3 = require(apdat_)->tenantData_.get_Item(tenantDataId_);
if (require(apdat_)->ChPayMoney(require(tenantData3)->buildCost_)) {
require(apdat_)->SubMoney(require(tenantData3)->buildCost_, 1);
require(tenant)->BuildTenant(require(tenantData3)->id_);
require(require(apdat_)->mapMain_)->UpdateTenantMapcip();
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->ChangeCurrentForm(require(apdat_)->frmGame_);});
require(apdat_)->AddPopupMessage(31, require(tenantData3)->name_);
} else {
require(apdat_)->ExecEvent(14, pls::cs::String{}, IntArray{});
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 63) {
pls::cs::Ref<data::TenantData> tenantData4 = require(apdat_)->tenantData_.get_Item(tenantDataId_);
if (require(tenantData4)->lv_ < 5) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
select_ = (select_ - 1 + 2) % 2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
select_ = (select_ + 1) % 2;
}
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
if (select_ == 0) {
if (!require(tenantData4)->IsStreangth()) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
if (require(apdat_)->ChPayMoney(require(tenantData4)->paramStrengthCost_)) {
require(apdat_)->SubMoney(require(tenantData4)->paramStrengthCost_, 1);
if (!require(tenantData4)->IsTAreaOrStadiumTenant()) {
require(tenantData4)->StrengthTenant();
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->ChangeCurrentForm(require(apdat_)->frmGame_);});
require(apdat_)->AddPopupMessage(32, require(tenantData4)->name_);
} else {
if (require(tenantData4)->IsStreangth()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->ChangeCurrentForm(require(apdat_)->frmGame_);});
data::TenantData::ProcStrenSpecialTenant(tenantData4);
if (require(tenantData4)->id_ == data::TenantData::TENANT_ID_STADIUM()) {
require(apdat_)->AddPopupMessage(34, require(tenantData4)->name_);
} else {
require(apdat_)->AddPopupMessage(33, require(tenantData4)->name_);
}
} else {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
}
} else {
require(apdat_)->ExecEvent(14, pls::cs::String{}, IntArray{});
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 64) {
if (frame_ == 3 && page_ == 0) {
require(apdat_)->PlaySe(25);
}
if (page_ == 0) {
if (([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::TLUP_ANIME_TIME()[4]; return cs_left >= cs_right; }()) && ([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::TLUP_ANIME_TIME()[5]; return cs_left <= cs_right; }())) {
for (pls::cs::Int32 num33 = 0; num33 < 2; ++num33) {
UpdateMeterParam(([&]() -> pls::cs::Int32 { auto cs_left = frame_; auto cs_right = SubForm::TLUP_ANIME_TIME()[4]; return cs_left - cs_right; }()), num33);
}
}
} else if (([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::TLUP_ANIME_TIME2()[2]; return cs_left >= cs_right; }()) && ([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::TLUP_ANIME_TIME2()[3]; return cs_left <= cs_right; }())) {
for (pls::cs::Int32 num34 = 0; num34 < 4; ++num34) {
UpdateMeterParam(([&]() -> pls::cs::Int32 { auto cs_left = frame_; auto cs_right = SubForm::TLUP_ANIME_TIME2()[2]; return cs_left - cs_right; }()), num34 + 2);
}
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
if (page_ == 0) {
if ([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::TLUP_ANIME_TIME()[5]; return cs_left >= cs_right; }()) {
page_ = 1;
frame_ = 0;
}
} else if ([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::TLUP_ANIME_TIME2()[3]; return cs_left >= cs_right; }()) {
pls::cs::Ref<data::TenantData> tenantData5 = require(apdat_)->tenantData_.get_Item(tenantDataId_);
require(tenantData5)->LvUp();
require(apdat_)->AddPopupMessage(30, pls::cs::String::concat(pls::cs::String::concat(require(tenantData5)->name_, literal(u"\t")), integer_string(require(tenantData5)->lv_)));
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
}
} else if (type_ == 65) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
if (require(apdat_)->IsPushSoftLabel(10)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
pls::cs::Ref<SubForm> subForm13 = SubForm::create(66);
require(subForm13)->tenantId_ = tenantId_;
require(subForm13)->tenantDataId_ = tenantDataId_;
return pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->Push(subForm13);});
}
} else if (type_ == 66) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
select_ = (select_ - 1 + 2) % 2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
select_ = (select_ + 1) % 2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
if (select_ == 0 && tenantId_ != -1) {
pls::cs::Ref<game::Tenant> tenant2 = require(udat_)->tenants_.get_Item(tenantId_);
require(tenant2)->DestructTenant();
}
} else if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 67) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 68) {
if (!is_null(dialog__SubForm)) {
if (require(dialog__SubForm)->result__SubForm == 0) {
dialog__SubForm = pls::cs::Ref<SubForm>{};
pls::cs::Int32 cs_arg0_241 = require(fanActData_)->rank_; pls::cs::Int32 cs_arg3_241 = require(fanActData_)->cost_[0]; pls::cs::Int32 cs_arg4_241 = require(fanActData_)->cost_[1];
pls::cs::Int32 sub = game::GameUtil::RateConvert(cs_arg0_241, 0, 6, cs_arg3_241, cs_arg4_241, true);
require(udat_)->SubResearchPoint(require(fanActData_)->costType_, sub);
require(apdat_)->ExecEvent(141, pls::cs::String{}, IntArray{});
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
dialog__SubForm = pls::cs::Ref<SubForm>{};
}
auto cs_receiver_242 = udat_; pls::cs::Int32 cs_arg0_242 = require(require(apdat_)->frmSoccer_)->GetEvaCumstomer(false);
pls::cs::Int32 standartTicketPrice = require(cs_receiver_242)->GetStandartTicketPrice(cs_arg0_242);
pls::cs::Int32 min_ = 1000;
pls::cs::Int32 val = require(udat_)->teamEvaRank_ * 2000 + 3000;
val = main::AppData::ClampMax(val, 20000);
val -= val % 1000;
pls::cs::Int32 ticketPrice_ = require(udat_)->ticketPrice_;
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
{ auto cs_target = udat_; pls::cs::Int32 cs_value = main::AppData::ClampMax(require(udat_)->ticketPrice_ + 1000, val); require(cs_target)->ticketPrice_ = cs_value; }
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
{ auto cs_target = udat_; pls::cs::Int32 cs_value = main::AppData::ClampMin(require(udat_)->ticketPrice_ - 1000, min_); require(cs_target)->ticketPrice_ = cs_value; }
}
if (ticketPrice_ != require(udat_)->ticketPrice_) {
pls::cs::Int32 num35 = standartTicketPrice - require(udat_)->ticketPrice_;
if (num35 >= 2400) {
SetTicketWindowBtmMsg(literal(u"安すぎでないでしょうか。"));
} else if (num35 >= 800) {
SetTicketWindowBtmMsg(literal(u"お買い得な値段ですね。"));
} else if (num35 >= -800) {
SetTicketWindowBtmMsg(literal(u"適正価格だと思います。"));
} else if (num35 >= -2400) {
SetTicketWindowBtmMsg(literal(u"少し高い気がします…。"));
} else {
SetTicketWindowBtmMsg(literal(u"高すぎです！"));
}
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
dialog__SubForm = SubForm::MakeDialog(MyFormBase::LT(literal(u"チケットの価格は\n<0>でよろしいですか"), MyFormBase::YEN(literal(u"円"), pls::cs::cast_integral<pls::cs::Int64>(require(udat_)->ticketPrice_))), literal(u"はい\tいいえ"));
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(dialog__SubForm);});
}
if (require(apdat_)->IsPushSoftLabel(2)) {
require(udat_)->ticketPrice_ = value1_;
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 69) {
if ([&]() -> bool { auto cs_left = frame_; auto cs_right = SubForm::SCENE_CHANGE_TIME()[value1_]; return cs_left >= cs_right; }()) {
require(require(apdat_)->frmGame_)->ChangeState(3);
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else {
if (type_ == 70) {
require(require(apdat_)->frmGame_)->ChangeState(0);
require(require(apdat_)->frmGame_)->SetAllDraw();
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
if (type_ == 71) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(131072);})) {
select_ = (select_ - 1 + 4) % 4;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(524288);})) {
select_ = (select_ + 1) % 4;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
require(udat_)->selectUniform_ = (require(udat_)->selectUniform_ - 1 + 8) % 8;
select_ = 2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
require(udat_)->selectUniform_ = (require(udat_)->selectUniform_ + 1) % 8;
select_ = 2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
pls::cs::Ref<pls::cs::Cell<pls::cs::Ref<data::TeamData>>> t_data_cell = pls::cs::make_ref<pls::cs::Cell<pls::cs::Ref<data::TeamData>>>(require(apdat_)->tData_.get_Item(0));
if (select_ == 0) {
pls::cs::run_finally([&]() {{
pls::cs::Ref<panel::MainPanel> mainPanel = panel::MainPanel::create(literal(u"チーム名(全角７文字)"), require(t_data_cell->value)->name_, 14);
{ pls::cs::Ref<pls::kairo::Canvas> cs_arg0 = canvas_; pls::cs::Delegate<void(pls::cs::String)> cs_arg1 = pls::cs::Delegate<void(pls::cs::String)>::from_closure(pls::cs::raw(t_data_cell),std::string("M:form.SubForm.Update2:295125"),[t_data_cell,self=this](pls::cs::String temp_name) -> void {{
if (!is_null(temp_name)) {
{ auto cs_target = t_data_cell->value; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::NewString(temp_name);}); require(cs_target)->name_ = cs_value; }
{ auto cs_target = require(self->apdat_)->frmTitle_; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::NewString(temp_name);}); require(cs_target)->newGameName_ = cs_value; }
pls::cs::Int32 recoveredUnusedNameWidth;
pls::cs::String text = pls::cs::String(u"");
pls::cs::Int32 num38 = 0;
pls::cs::Int32 num39 = 0;
for (pls::cs::Int32 num40 = 0; num40 < kl_lang::StringEx::Length(temp_name); ++num40) {
char16_t c = kl_lang::StringEx::CharAt(temp_name, num40);
pls::cs::Int32 stringLength = SubForm::GetStringLength(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOf(c);}));
if (num40 == 0) {
if (MyFormBase::Jp()) {
if (stringLength == 1) {
num39 = 5;
} else {
num39 = 4;
}
} else {
num39 = 8;
}
}
num38 += stringLength;
if (num38 > num39) {
break;
}
text = pls::cs::String::concat(text,pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOf(c);}));
}
require(t_data_cell->value)->name2_ = text;
}
}},t_data_cell,this); require(mainPanel)->Show(cs_arg0, cs_arg1); }
}}, [&]() {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->DrawAllForms();});
});
} else if (select_ == 1) {
pls::cs::run_finally([&]() {{
pls::cs::Ref<panel::MainPanel> mainPanel2 = panel::MainPanel::create(literal(u"短縮名(全角４文字)"), require(t_data_cell->value)->name2_, 8);
{ pls::cs::Ref<pls::kairo::Canvas> cs_arg0 = canvas_; pls::cs::Delegate<void(pls::cs::String)> cs_arg1 = pls::cs::Delegate<void(pls::cs::String)>::from_closure(pls::cs::raw(t_data_cell),std::string("M:form.SubForm.Update2:296302"),[t_data_cell](pls::cs::String temp_name_2) -> void {{
if (!is_null(temp_name_2)) {
{ auto cs_target = t_data_cell->value; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::NewString(temp_name_2);}); require(cs_target)->name2_ = cs_value; }
}
}},t_data_cell); require(mainPanel2)->Show(cs_arg0, cs_arg1); }
}}, [&]() {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->DrawAllForms();});
});
} else if (select_ == 2) {

} else if (select_ == 3) {
try {
require(apdat_)->NewGame(require(require(apdat_)->frmTitle_)->selectSave_, require(require(apdat_)->frmTitle_)->newGameName_);
require(udat_)->NewGame();
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->ChangeCurrentForm(require(apdat_)->frmGame_);});
} catch(const pls::cs::Exception& cs_caught_128) {auto t=pls::cs::capture_exception(cs_caught_128);
{
require(apdat_)->save_ = pls::cs::Ref<kl_unity_util::Property>{};
if (kl_cfg::Config::PRINT()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Log::Info(t);});
}
require(apdat_)->save_ = pls::cs::Ref<kl_unity_util::Property>{};
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::MakeDialog(literal(u"ゲーム開始に失敗しました")));});
}}
}
} else if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 72) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->DrawAllForms();});
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
select_ = (select_ - 1 + 2) % 2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
select_ = (select_ + 1) % 2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
if (select_ == 0) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(udat_)->memberPDataist_));}) > 11) {
require(apdat_)->ExecEvent(117, pls::cs::String{}, IntArray{});
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(31));});
}
require(apdat_)->ExecEvent(121, pls::cs::String{}, IntArray{});
} else {
require(apdat_)->ExecEvent(116, pls::cs::String{}, IntArray{});
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else {
if (type_ == 73) {
require(udat_)->Training_init();
require(udat_)->Init_bus();
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
if (type_ == 74) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
page_ = (page_ - 1 + 2) % 2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
page_ = (page_ + 1) % 2;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 75 || type_ == 76) {
if (frame_ >= SubForm::FADE_TIME_V()) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 77) {
pls::cs::Int32 num36 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(ary1));});
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(131072);})) {
select_ = (select_ - 1 + num36) % num36;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(524288);})) {
select_ = (select_ + 1) % num36;
}
pls::cs::Int32 num37 = 9;
if (scrollValue_ > select_) {
scrollValue_ = select_;
}
if (scrollValue_ + num37 <= select_) {
scrollValue_ = select_ - num37 + 1;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
pls::cs::Ref<data::FanBonusData> fanBonusData = pls::cs::unbox<pls::cs::Ref<data::FanBonusData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(ary1), select_);}));
if (require(fanBonusData)->state_ == 0) {
require(apdat_)->ExecEvent(190, pls::cs::String{}, IntArray{});
} else {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 78) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->DrawAllForms();});
require(require(require(apdat_)->resCom2_)->seb.get_Item(60))->Frame();
if (([&]() -> bool { auto cs_left = frame_; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(udat_)->memberPDataist_));}) * 12 + 20; return cs_left >= cs_right; }()) || pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
require(require(apdat_)->frmGame_)->SetBattleData();
pls::cs::Int32 recoveredMatchInfoJoin = require(udat_)->GetMatchInfoJoin();
if (recoveredMatchInfoJoin == 0 && !require(apdat_)->CheckAlreadyEvent(176)) {
require(apdat_)->ExecEvent(176, pls::cs::String{}, IntArray{});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(79));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else if (type_ == 79) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->DrawAllForms();});
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);}) && frame_ >= 5) {
require(require(apdat_)->camera)->SaveMapMainBasePos();
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->ChangeCurrentForm(require(apdat_)->frmSoccer_);});
}
} else if (type_ == 80) {
require(require(apdat_)->frmGame_)->ChangeState(value1_);
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
}
}
}
return true;

}
}

// M:form.SubForm.ScrollControl(System.Int32,System.Int32)
void SubForm::ScrollControl(pls::cs::Int32 num,pls::cs::Int32 showMax) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.ScrollControl(System.Int32,System.Int32)",game);
{
if (num <= 0) {
return;
}
{
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(131072);})) {
select_ = (select_ - 1 + num) % num;
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(524288);})) {
select_ = (select_ + 1) % num;
}
ScrollUpdate(num, showMax);
}
}
}

// M:form.SubForm.ScrollUpdate(System.Int32,System.Int32)
void SubForm::ScrollUpdate(pls::cs::Int32 num,pls::cs::Int32 showMax) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.ScrollUpdate(System.Int32,System.Int32)",game);
{
ScrollUpdate(num, showMax, select_);
}
}

// M:form.SubForm.ScrollUpdate(System.Int32,System.Int32,System.Int32)
void SubForm::ScrollUpdate(pls::cs::Int32 num,pls::cs::Int32 showMax,pls::cs::Int32 value) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.ScrollUpdate(System.Int32,System.Int32,System.Int32)",game);
{
if (num <= 0) {
return;
}
if (value >= scrollValue_ + showMax) {
scrollValue_ = value - (showMax - 1);
}
if (value < scrollValue_) {
scrollValue_ = value;
}
}
}

// M:form.SubForm.AddMenu(System.Int32,System.Int32)
void SubForm::AddMenu(pls::cs::Int32 menuId,pls::cs::Int32 state) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.AddMenu(System.Int32,System.Int32)",game);
{
if ([&]() { auto cs_left = pls::cs::box(menus_); auto cs_right = pls::cs::box(IntArray2{}); return cs_left == cs_right; }()) {
menus_ = IntArray2::make(0);
}
IntArray2 array = IntArray2::make(pls::cs::Int32(menus_.length()) + 1);
if (menus_.length() > 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::Arraycopy(pls::cs::box(menus_), 0, pls::cs::box(array), 0, menus_.length());});
}
{ auto cs_target = array; auto cs_index = pls::cs::Int32(array.length()) - 1; auto cs_value = IntArray::from({menuId, state});cs_target.set_Item(cs_index,cs_value);}
menus_ = array;
}
}

// M:form.SubForm.DrawMenu(kairo.unity.ui.Graphics,System.Int32)
void SubForm::DrawMenu(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 type) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.DrawMenu(kairo.unity.ui.Graphics,System.Int32)",game);
{
pls::cs::Int32 num = 3;
pls::cs::Int32 num2 = 29;
pls::cs::Int32 num3 = num2 * menus_.length() + 5;
if (MyFormBase::Jp()) {
for (pls::cs::Int32 i = 0; i < SubForm::WIDTH().length(); ++i) {
SubForm::WIDTH()[i] = SubForm::WIDTH_DATA()[0][i];
}
} else {
for (pls::cs::Int32 j = 0; j < SubForm::WIDTH().length(); ++j) {
SubForm::WIDTH()[j] = SubForm::WIDTH_DATA()[1][j];
}
}
IntArray array = IntArray::from({20, 6, 0});
pls::cs::Int32 num4 = SubForm::WIDTH()[type];
pls::cs::Int32 num5 = array[type];
if (MyFormBase::Jp()) {
num5 = 0;
}
pls::cs::Ref<surface::GameView> instance = surface::GameView::GetInstance();
pls::cs::Int32 num6 = 0;
pls::cs::Int32 num7 = 0;
if ([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginX();}) + num4; auto cs_right = require(instance)->GetGameWidth(); return cs_left > cs_right; }()) {
num6 = ([&]() -> pls::cs::Int32 { auto cs_left = require(instance)->GetGameWidth() - num4; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginX();}); return cs_left - cs_right; }());
}
if ([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginY();}) + num3; auto cs_right = require(instance)->GetGameHeight(); return cs_left > cs_right; }()) {
num7 = ([&]() -> pls::cs::Int32 { auto cs_left = require(instance)->GetGameHeight() - num3; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginY();}); return cs_left - cs_right; }());
}
for (pls::cs::Int32 k = 0; k < menus_.length(); ++k) {
IntArray array2 = menus_[k];
pls::cs::Int32 num8 = 1000 * frame_ / num;
pls::cs::Int32 num9 = type * 2 + 1;
if (k == select_) {
--num9;
}
if (MyFormBase::Jp()) {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(22); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg4 = require(require(apdat_)->resCom2_)->img; require(apdat_)->DrawSeb(g, num6 + 1, num7 + 1 + num2 * k, cs_arg3, cs_arg4, num9, num8, num8);}
} else {
pls::cs::Int32 num10 = num6 + 1;
pls::cs::Int32 num11 = num7 + 1 + num2 * k;
pls::cs::Int32 num12 = 0;
if (type == 0) {
if (k != select_) {
num12 += 30;
}
pls::cs::Int32 num13 = num4 - 34 - 72;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(25); require(g)->DrawImage(cs_arg0, num10, num11, 0, num12, 24, 30); }());});
num10 += 24;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(25); require(g)->DrawImage(cs_arg0, num10, num11, 24, num12, 72, 30); }());});
num10 += 72;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(25); require(g)->DrawImage(cs_arg0, num10, num11, 24, num12, num13, 30); }());});
num10 += num13;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(25); require(g)->DrawImage(cs_arg0, num10, num11, 96, num12, 10, 30); }());});
} else {
if (k != select_) {
num12 += 30;
}
pls::cs::Int32 num14 = num4 - 15 - 70;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(25); require(g)->DrawImage(cs_arg0, num10, num11, 106, num12, 4, 30); }());});
num10 += 4;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(25); require(g)->DrawImage(cs_arg0, num10, num11, 110, num12, 70, 30); }());});
num10 += 70;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(25); require(g)->DrawImage(cs_arg0, num10, num11, 110, num12, num14, 30); }());});
num10 += num14;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(25); require(g)->DrawImage(cs_arg0, num10, num11, 180, num12, 11, 30); }());});
}
}
pls::cs::Int32 num15 = num6 + 10;
if (type == 0) {
num15 += 10;
}
pls::cs::Int32 num16 = num7 + 7 + num2 * k;
pls::cs::Int32 num17 = num15;
pls::cs::Int32 num18 = num16;
if (type_ == 3) {
pls::cs::Int32 frame = 0;
pls::cs::Int32 num19 = array2[0];
if (num19 == 0) {
frame = 0;
}
if (num19 == 1) {
frame = 1;
}
if (num19 == 3) {
frame = 2;
}
if (num19 == 2) {
frame = 3;
}
if (num19 == 4) {
frame = 4;
}
if (num19 == 5) {
frame = 5;
}
require(require(apdat_)->resCom2_)->DrawSeb(g, num15 - 17, num16 - 2, 93, frame);
num17 += 42 + num5 / 2;
surface::GameView::AddTouch(g, 8, num6, num7 + num2 * k, num4, num2, 0x20000 | k);
} else if (type_ == 4) {
pls::cs::Int32 frame2 = 0;
pls::cs::Int32 num20 = array2[0];
if (num20 == 21) {
frame2 = 4;
}
if (num20 == 22) {
frame2 = 5;
}
require(require(apdat_)->resCom2_)->DrawSeb(g, num15 - 17, num16 - 2, 93, frame2);
num17 += 42 + num5 / 2;
surface::GameView::AddTouch(g, 8, num6, num7 + num2 * k, num4, num2, 0x20000 | k);
} else {
num17 += 34 + num5 / 2;
surface::GameView::AddTouch(g, 9, num6, num7 + num2 * k, num4, num2, 0x20000 | k);
}
if (k == select_) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_MAINMENU_SELECT());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_MAINMENU_NOTSELECT());});
}
if (frame_ >= num) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = SubForm::MENU_STR()[array2[0]]; require(g)->DrawString(cs_arg0, num17, num18 + 2, 2); }());});
}
if (frame_ < num) {
continue;
}
if (type_ == 3) {
pls::cs::Int32 recoveredSelector1 = array2[0];
if (recoveredSelector1 == 0) {
if (data::LeagueData::IsExistNew() || data::QuestMatchData::IsExistNew()) {
SubForm::Draw_newMark(g, num15 - 18, num16 - 5, frame2_);
}
} else if (recoveredSelector1 == 1) {
if (data::TrainingData::IsExistNew()) {
SubForm::Draw_newMark(g, num15 - 18, num16 - 5, frame2_);
}
} else if (recoveredSelector1 == 2) {
if (data::TradeData::IsExistNew() || data::FanActData::IsExistNew() || data::TenantData::IsExistNew() || data::SponsorData::IsExistNew()) {
SubForm::Draw_newMark(g, num15 - 18, num16 - 5, frame2_);
}
} else if (recoveredSelector1 == 3) {
if (data::FormationData::IsExistNew() || data::PlayerData::IsExistNew()) {
SubForm::Draw_newMark(g, num15 - 18, num16 - 5, frame2_);
}
}
} else if (type_ == 5) {
pls::cs::Int32 num21 = -12;
pls::cs::Int32 recoveredSelector2 = array2[0];
if (recoveredSelector2 == 6) {
if (data::LeagueData::IsExistNew()) {
SubForm::Draw_newMark(g, num15 - 7 + num21, num16 - 5, frame2_);
}
} else if (recoveredSelector2 == 8) {
if (data::QuestMatchData::IsExistNew()) {
SubForm::Draw_newMark(g, num15 - 7 + num21, num16 - 5, frame2_);
}
}
} else if (type_ == 7) {
pls::cs::Int32 num22 = -12;
pls::cs::Int32 recoveredSelector3 = array2[0];
if (recoveredSelector3 == 12) {
if (data::TradeData::IsExistNew()) {
SubForm::Draw_newMark(g, num15 - 7 + num22, num16 - 5, frame2_);
}
} else if (recoveredSelector3 == 14) {
if (data::FanActData::IsExistNew()) {
SubForm::Draw_newMark(g, num15 - 7 + num22, num16 - 5, frame2_);
}
} else if (recoveredSelector3 == 15) {
if (data::TenantData::IsExistNew()) {
SubForm::Draw_newMark(g, num15 - 7 + num22, num16 - 5, frame2_);
}
} else if (recoveredSelector3 == 16) {
if (data::SponsorData::IsExistNew()) {
SubForm::Draw_newMark(g, num15 - 7 + num22, num16 - 5, frame2_);
}
}
}
if (k == select_ && require(apdat_)->IsTopForm(this)) {
pls::cs::Int32 num23 = 0;
if (type == 2) {
num23 = 3;
}
if (num6 < 120) {
{ auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(61); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(apdat_)->resCom2_)->img; require(cs_receiver)->Draw(g, num6 + num4 + num23 + 2, num7 + 5 + num2 * k + 8, cs_arg3, -1); }
} else {
{ auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(apdat_)->resCom2_)->img; require(cs_receiver)->Draw(g, num6 - 2, num7 + 5 + num2 * k + 8, cs_arg3, -1); }
}
}
}
}
}

// M:form.SubForm.DrawMenu_btmInfo(kairo.unity.ui.Graphics)
void SubForm::DrawMenu_btmInfo(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.DrawMenu_btmInfo(kairo.unity.ui.Graphics)",game);
{
game::UserData::ensure_initialized();

pls::cs::Int32 num3, num;
num = 0;
num3 = num;
pls::cs::Int32 num7, num2;
num2 = 0;
num7 = num2;
pls::cs::Ref<data::TeamData> teamData = require(apdat_)->tData_.get_Item(0);
pls::cs::Ref<surface::GameView> instance = surface::GameView::GetInstance();
pls::cs::Int32 matchInfoJoin = require(udat_)->GetMatchInfoJoin();
if (matchInfoJoin != 2) {
num3 = require(instance)->GetSideSoftWidth() + 1;
num = require(instance)->GetGameHeight() - 43 - 25;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(46, 209, 80);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num3, num, 111.0f, 41.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(34, 154, 59);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num3 + 1, num + 1, 109.0f, 19.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num3 + 1, num + 1 + 20, 109.0f, 19.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(22, 96, 37);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num3 + 2, num + 2, 108.0f, 18.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num3 + 2, num + 2 + 20, 108.0f, 18.0f);});
SubForm::SetFontSize(g, 10);
pls::cs::Int32 num4 = 0;
if (matchInfoJoin == 0) {
{
pls::cs::Ref<data::LeagueData> leagueData = require(apdat_)->leagueData_.get_Item(require(udat_)->selectLeagueId_);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 236, 238);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(leagueData)->name_, num3 + 5, num + 5);});
IntArray leagueData2 = require(udat_)->GetLeagueData(0);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LTLong(literal(u"<0>位"), pls::cs::cast_integral<pls::cs::Int64>(leagueData2[7])); require(g)->DrawString(cs_arg0, num3 + 105, num + 5, 4); }());});
num4 = require(leagueData)->schedule_ - require(udat_)->matchInfoWeek_;
}
} else if (matchInfoJoin == 1) {
{
pls::cs::Ref<data::QuestMatchData> questMatchData = require(apdat_)->qmData_.get_Item(require(udat_)->selectQmId_);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 236, 238);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(questMatchData)->name_, num3 + 5, num + 5);});
num4 = require(questMatchData)->schedule_ - require(udat_)->matchInfoWeek_;
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"次の試合"), num3 + 5, num + 5 + 20);});
pls::cs::Int32 num5 = (([&]() -> pls::cs::Int32 { auto cs_left = require(require(apdat_)->save_)->ints[2]; auto cs_right = (require(require(apdat_)->save_)->ints[3] + num4) / 4; return cs_left + cs_right; }())) % 12 + 1;
pls::cs::Int32 num6 = (require(require(apdat_)->save_)->ints[3] + num4) % 4 + 1;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<0>月<1>週"), pls::cs::String::concat(pls::cs::String::concat(integer_string(num5), literal(u"\t")), integer_string(num6))); require(g)->DrawString(cs_arg0, num3 + 105, num + 5 + 20, 4); }());});
SubForm::ResetFontSize(g);
}
num7 = ([&]() -> pls::cs::Int32 { auto cs_left = require(instance)->GetGameWidth() - 123; auto cs_right = require(instance)->GetSideSoftWidth(); return cs_left - cs_right; }());
num2 = require(instance)->GetGameHeight() - 106;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(134); require(g)->DrawImage(cs_arg0, num7, num2); }());});
num7 = ([&]() -> pls::cs::Int32 { auto cs_left = require(instance)->GetGameWidth() - 91; auto cs_right = require(instance)->GetSideSoftWidth(); return cs_left - cs_right; }());
num2 = require(instance)->GetGameHeight() - 99;
pls::cs::Int32 rankIndex = require(udat_)->GetRankIndex();
if (SubForm::En()) {
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(rankIndex + 1), num7 + 6, num2, 0, 2);
} else {
require(apdat_)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(rankIndex + 1), num7, num2, 0, 2);
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
SubForm::SetFontSize(g, 10);
if (SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = game::UserData::RANK_NAME()[rankIndex]; require(g)->DrawString(cs_arg0, num7 + 51, num2, 2); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = game::UserData::RANK_NAME()[rankIndex]; require(g)->DrawString(cs_arg0, num7 + 51, num2 - 2, 2); }());});
}
SubForm::ResetFontSize(g);
num7 = ([&]() -> pls::cs::Int32 { auto cs_left = require(instance)->GetGameWidth() - 2; auto cs_right = require(instance)->GetSideSoftWidth(); return cs_left - cs_right; }());
num2 = require(instance)->GetGameHeight() - 84;
require(apdat_)->DrawNumImageComma(g, 78, pls::cs::cast_integral<pls::cs::Int64>(require(teamData)->warPotential_), num7 - 14, num2, 0, 0, 4);
num = require(instance)->GetGameHeight() - 70;
for (pls::cs::Int32 i = 0; i < 3; ++i) {
num7 = ([&]() -> pls::cs::Int32 { auto cs_left = require(instance)->GetGameWidth() - 2; auto cs_right = require(instance)->GetSideSoftWidth(); return cs_left - cs_right; }());
num2 = num + 14 * i;
pls::cs::Int32 fanEva = data::FanActData::GetFanEva(i);
pls::cs::Int32 fanDispParam = data::FanActData::GetFanDispParam(fanEva, i);
if (i == 0) {
require(apdat_)->DrawNumImageComma(g, 78, pls::cs::cast_integral<pls::cs::Int64>(fanDispParam), num7 - 14, num2, 0, 0, 4);
} else if (i == 1) {
{
pls::cs::Int32 num8 = 52;
pls::cs::Int32 num9 = 0;
num9 = game::GameUtil::RateConvert(fanDispParam, 0, 100, 0, num8 - 2, true);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(129); require(g)->DrawImage(cs_arg0, num7 - 52 + 1 - 13, num2 + 2, 1, 10, num9, 8); }());});
}
} else if (i == 2) {
require(apdat_)->DrawNumImageLongIntInt(g, 78, pls::cs::cast_integral<pls::cs::Int64>(fanDispParam), num7 - 14, num2 + 1, 0, 4);
}
}

}
}

// M:form.SubForm.FrameMenu
IntArray SubForm::FrameMenu() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.FrameMenu",game);
{
return FrameMenu(-1);
}
}

// M:form.SubForm.FrameMenu(System.Int32)
IntArray SubForm::FrameMenu(pls::cs::Int32 backResult) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.FrameMenu(System.Int32)",game);
{
pls::cs::Int32 num = 3;
++frame_;
if (frame_ > num) {
frame_ = num;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->DrawAllForms();});
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(131072);})) {
select_ = (select_ + menus_.length() - 1) % menus_.length();
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(524288);})) {
select_ = (select_ + 1) % menus_.length();
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);}) || ((type_ == 3 || type_ == 4 || type_ == 5 || type_ == 6 || type_ == 7 || type_ == 12 || type_ == 11 || type_ == 9 || type_ == 10 || type_ == 8) && pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(262144);}))) {
frame_ = num;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->DrawAllForms();});
return menus_[select_];
}
if (require(apdat_)->IsPushSoftLabel(2) || ((type_ == 3 || type_ == 4 || type_ == 5 || type_ == 6 || type_ == 7 || type_ == 12 || type_ == 11 || type_ == 9 || type_ == 10 || type_ == 8) && pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(65536);}))) {
result__SubForm = backResult;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->Pop();});
}
return IntArray{};
}
}

// M:form.SubForm.SetEvent(System.Int32)
void SubForm::SetEvent(pls::cs::Int32 index) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.SetEvent(System.Int32)",game);
{
pls::cs::Int32 num = eventIds_[index];
}
}

// M:form.SubForm.DrawInputValue(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean,System.Int32,System.Int32)
void SubForm::DrawInputValue(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 right,pls::cs::Int32 top,pls::cs::Int32 value,bool inputMode,bool active,pls::cs::Int32 color,pls::cs::Int32 fig) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.DrawInputValue(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean,System.Int32,System.Int32)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(200, 200, 255);}));});
pls::cs::Int32 num = 6 * fig + 2;
if (active) {
if (!inputMode) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(right - num - 1, top - 1, num + 2, 14.0f);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(205, 235, 111);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(right - 6 - inputFig_ * 6 - 1, top, 6.0f, 12.0f);});
if (require(apdat_)->IsTopForm(this)) {

}
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(color);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(value);}); require(g)->DrawString(cs_arg0, right, top, 4); }());});
}
}

// M:form.SubForm.IsMenu
bool SubForm::IsMenu() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.IsMenu",game);
{
return type_ == 3 || type_ == 4 || type_ == 5 || type_ == 6 || type_ == 7 || type_ == 12 || type_ == 22 || type_ == 11 || type_ == 8 || type_ == 9 || type_ == 10;
}
}

// M:form.SubForm.IsDrawWindow
bool SubForm::IsDrawWindow() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.IsDrawWindow",game);
{
return type_ == 26 || type_ == 69;
}
}

// M:form.SubForm.GetBoxHeaderY(System.Int32)
pls::cs::Int32 SubForm::GetBoxHeaderY(pls::cs::Int32 boxTop) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.GetBoxHeaderY(System.Int32)",game);
{
return boxTop - 16;
}

}

// M:form.SubForm.GetBoxFooterY(System.Int32)
pls::cs::Int32 SubForm::GetBoxFooterY(pls::cs::Int32 boxBottom) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.GetBoxFooterY(System.Int32)",game);
{
return boxBottom + 4;
}

}

// M:form.SubForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Boolean,System.Boolean)
void SubForm::DrawCommand(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 x,pls::cs::Int32 y,bool active,bool cursor) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Boolean,System.Boolean)",game);
{
DrawCommand(g, str, x, y, 0, active, 1, cursor);
}
}

// M:form.SubForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
void SubForm::DrawCommand(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 anchor,bool active,bool cursor) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)",game);
{
DrawCommand(g, str, x, y, anchor, active, 1, cursor);
}
}

// M:form.SubForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean)
void SubForm::DrawCommand(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 anchor,bool active,pls::cs::Int32 margin,bool cursor) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean)",game);
{
require(apdat_)->DrawCommand(g, str, x, y, anchor, active, margin, cursor, this, loopCounter_);
}
}

// M:form.SubForm.DrawMeter(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)
void SubForm::DrawMeter(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 value,pls::cs::Int32 max_) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.DrawMeter(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
DrawMeter(g, x, y, value, max_, 40, false);
}
}

// M:form.SubForm.DrawMeter(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void SubForm::DrawMeter(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 value,pls::cs::Int32 max_,pls::cs::Int32 scaleNum) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.DrawMeter(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
DrawMeter(g, x, y, value, max_, scaleNum, false);
}
}

// M:form.SubForm.DrawMeter(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
void SubForm::DrawMeter(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 value,pls::cs::Int32 max_,pls::cs::Int32 scaleNum,bool rev) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.DrawMeter(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)",game);
{
value = main::AppData::Clamp(value, 0, max_);
x -= 28;
y -= 2;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(x + 28, y + 2, scaleNum * 2 + 3, 8.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(64, 64, 64);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(x + 29, y + 3, scaleNum * 2 + 1, 6.0f);});
pls::cs::Int32 num = max_ / scaleNum;
pls::cs::Int32 num2 = value;
pls::cs::Int32 num3 = x + 30;
if (rev) {
num3 += (scaleNum - 1) * 2;
}
for (pls::cs::Int32 i = 0; i < scaleNum; ++i) {
pls::cs::Int32 num4 = 4;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(32, 32, 32);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num3, y + 4, 1.0f, num4);});
pls::cs::Int32 num5 = main::AppData::ClampMax(num2 * num4 / num, num4);
if (num5 > 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(64, 255, 128);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num3, y + 4 + num4 - num5, 1.0f, num5);});
}
num2 -= num;
if (rev) {
num3 = (num3 - 2);
} else {
num3 = (num3 + 2);
}
}
}
}

// M:form.SubForm.Draw_moveToBus(kairo.unity.ui.Graphics,System.Int32)
void SubForm::Draw_moveToBus(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 frame) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Draw_moveToBus(kairo.unity.ui.Graphics,System.Int32)",game);
{
pls::cs::Int32 gWidth = 190;
pls::cs::Int32 gHeight = 106;
pls::cs::Ref<surface::GameView> instance = surface::GameView::GetInstance();
pls::cs::Int32 a = game::GameUtil::RateConvert(frame, 0, 100, 0, 180, true);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0, a);}));});
pls::cs::Int32 originX = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginX();});
pls::cs::Int32 originY = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginY();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetOrigin(0, 0);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg2 = require(instance)->GetGameWidth(); pls::cs::Single cs_arg3 = require(instance)->GetGameHeight(); require(g)->FillRect(0.0f, 0.0f, cs_arg2, cs_arg3); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetOrigin(originX, originY);});
pls::cs::Ref<main::AppData> instance2 = main::AppData::GetInstance();
pls::cs::Ref<game::UserData> instance3 = game::UserData::GetInstance();
pls::cs::Int32 num = 4;
require(instance2)->DrawWindow(g, gWidth, gHeight, -15, literal(u"バスに乗り込み中"), 3 + num);
require(instance2)->DrawBox(g, 30, 80 + num, 209, 80 + num + 71);
pls::cs::Int32 num2 = 32;
pls::cs::Int32 num3 = 91;
pls::cs::Int32 num4 = 176;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(32.0f, 91.0f, 175.0f, 72.0f, true);});
num3 = 93 + num;
for (pls::cs::Int32 i = 0; i < 3; ++i) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(instance2)->resCom2_)->img.get_Item(184); require(g)->DrawImage(cs_arg0, 0 + 80 * i, num3); }());});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
pls::cs::Int32 num5 = 0;
pls::cs::Int32 num6 = 158 + num;
pls::cs::Int32 frame2 = frame % 16 / 4;
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(instance2)->resCom2_)->seb.get_Item(46); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(instance2)->resCom2_)->img.get_Item(50); require(instance2)->DrawSeb(g, 165, num6 - 4, cs_arg3, cs_arg4, 1); }
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(32.0f, 70 + num, 179.0f, 126.0f, true);});
for (pls::cs::Int32 j = 0; j < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(instance3)->memberPDataist_));}); ++j) {
pls::cs::Ref<data::PlayerData> playerData = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(instance3)->memberPDataist_), j);}));
num5 = 25 - j * 15 + 2 * frame;
if (num5 >= 25 && num5 <= 165) {
require(instance3)->SetDispPlayerData(0, require(instance3)->selectUniform_, require(playerData)->faceImg_, frame2, 1);
require(instance3)->DrawDispPlayer(g, num5, num6);
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
}

}

// M:form.SubForm.Draw_battlePic(kairo.unity.ui.Graphics,System.Int32)
void SubForm::Draw_battlePic(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 frame) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Draw_battlePic(kairo.unity.ui.Graphics,System.Int32)",game);
{
GameForm::ensure_initialized();
game::UserData::ensure_initialized();

pls::cs::Ref<surface::GameView> instance = surface::GameView::GetInstance();
pls::cs::Int32 originX = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginX();});
pls::cs::Int32 originY = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginY();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetOrigin(0, 0);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0, 180);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg0 = GameForm::VIEW_X(); pls::cs::Single cs_arg2 = GameForm::VIEW_W(); pls::cs::Single cs_arg3 = require(instance)->GetGameHeight(); require(g)->FillRect(cs_arg0, 0.0f, cs_arg2, cs_arg3); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetOrigin(originX, originY);});
pls::cs::Ref<main::AppData> instance2 = main::AppData::GetInstance();
pls::cs::Ref<game::UserData> instance3 = game::UserData::GetInstance();
pls::cs::Int32 num4, num5, num, num2, num3;
num4 = 0;
num3 = num4;
num2 = num3;
num = num2;
num5 = num;
pls::cs::Ref<data::TeamData> teamData = require(instance2)->tData_.get_Item(require(require(instance3)->gm_)->teamId_[0]);
pls::cs::Ref<data::TeamData> teamData2 = require(instance2)->tData_.get_Item(require(require(instance3)->gm_)->teamId_[1]);
pls::cs::Int32 matchInfoJoin = require(instance3)->GetMatchInfoJoin();
if (matchInfoJoin == 0) {
num = 25;
require(require(instance2)->frmGame_)->Draw_stadiumName(g, num, 120);
} else if (matchInfoJoin == 1) {
{
pls::cs::Ref<data::QuestMatchData> questMatchData = require(instance2)->qmData_.get_Item(require(instance3)->selectQmId_);
num = 9;
require(require(instance3)->gm_)->Draw_timeMessageWindow(g, num, 222, 1, 120);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<0>  <1>回戦"), pls::cs::String::concat(pls::cs::String::concat(require(questMatchData)->name_, literal(u"\t")), integer_string((require(instance3)->battleQmIndex_ + 1)))); require(g)->DrawString(cs_arg0, 120.0f, num + 3, 2); }());});
num = 32;
require(require(instance2)->frmGame_)->Draw_stadiumName(g, num, 120);
}
}
num4 = game::GameUtil::RateConvert(frame, 10, 18, 120, 0, true);
num4 = 0;
num5 = 4;
num = 61;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 162, 35);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num5, num, 232.0f, 17.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(3, 59, 63);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(num5 - 1, num, num5 - 1, num + 16, 1.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(num5 + 232, num, num5 + 232, num + 16, 1.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(num5 - 1, num - 1, num5 + 232, num - 1, 1.0f);});
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(instance2)->resCom2_)->seb.get_Item(28); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(instance2)->resCom2_)->img.get_Item(33); pls::cs::Int32 cs_arg5 = require(teamData)->uniform_; require(instance2)->DrawSeb(g, 7, num + 4, cs_arg3, cs_arg4, cs_arg5); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(instance2)->resCom2_)->seb.get_Item(28); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(instance2)->resCom2_)->img.get_Item(33); pls::cs::Int32 cs_arg5 = require(teamData2)->uniform_; require(instance2)->DrawSeb(g, 221 + num4, num + 4, cs_arg3, cs_arg4, cs_arg5); }
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(teamData)->name_, 65.0f, num + 3, 2);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(require(teamData2)->name_, 177 + num4, num + 3, 2);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(instance2)->resCom2_)->img.get_Item(58); require(g)->DrawImage(cs_arg0, 112.0f, 65.0f); }());});
pls::cs::Int32 num6 = 0;
if (require(require(instance3)->gm_)->homeAway_ == 1) {
num6 = 1;
}
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(instance2)->resCom2_)->seb.get_Item(51); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(instance2)->resCom2_)->img.get_Item(60); require(instance2)->DrawSeb(g, 2, num - 10, cs_arg3, cs_arg4, num6); }
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(instance2)->resCom2_)->seb.get_Item(51); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(instance2)->resCom2_)->img.get_Item(60); require(instance2)->DrawSeb(g, 215, num - 10, cs_arg3, cs_arg4, 1 - num6); }
num = 93;
for (pls::cs::Int32 i = 0; i < 3; ++i) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(instance2)->resCom2_)->img.get_Item(184); require(g)->DrawImage(cs_arg0, 0 + 80 * i, num); }());});
}
pls::cs::Int32 num7 = 0;
num2 = 0;
if (require(require(instance3)->gm_)->homeAway_ == 0) {
num2 = 57;
num7 = require(teamData)->stadium_;
} else {
num2 = 183;
num7 = require(teamData2)->stadium_;
}
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(instance2)->resCom2_)->seb.get_Item(101 + num7); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(instance2)->resCom2_)->img.get_Item(185 + num7); require(instance2)->DrawSeb(g, num2, 147, cs_arg3, cs_arg4, 0); }
pls::cs::Int32 num8 = frame % 10 / 5;
for (pls::cs::Int32 j = 0; j < 3; ++j) {
if (num8 == 0) {
{ pls::cs::Int32 cs_arg1 = require(teamData)->bodyImg_; pls::cs::Int32 cs_arg2 = require(teamData)->memberFaceId_[j]; require(instance3)->SetDispPlayerData(0, cs_arg1, cs_arg2, num8, 1); }
} else {
{ pls::cs::Int32 cs_arg1 = require(teamData)->bodyImg_; pls::cs::Int32 cs_arg2 = require(teamData)->memberFaceId_[j]; require(instance3)->SetDispPlayerData(4, cs_arg1, cs_arg2, 0, 1); }
}
require(instance3)->DrawDispPlayer(g, 37 + j * 20, num + 63);
}
for (pls::cs::Int32 k = 0; k < 3; ++k) {
if (num8 == 0) {
{ pls::cs::Int32 cs_arg1 = require(teamData2)->bodyImg_; pls::cs::Int32 cs_arg2 = require(teamData2)->memberFaceId_[k]; require(instance3)->SetDispPlayerData(0, cs_arg1, cs_arg2, num8, 2); }
} else {
{ pls::cs::Int32 cs_arg1 = require(teamData2)->bodyImg_; pls::cs::Int32 cs_arg2 = require(teamData2)->memberFaceId_[k]; require(instance3)->SetDispPlayerData(4, cs_arg1, cs_arg2, 0, 2); }
}
require(instance3)->DrawDispPlayer(g, 163 + k * 20, num + 63);
}
num5 = 4;
num = 174;
for (pls::cs::Int32 l = 0; l < 2; ++l) {
num5 = 4;
num = 174;
if (l == 1) {
num5 = 129;
}
pls::cs::Ref<data::TeamData> teamData3 = pls::cs::Ref<data::TeamData>{};
if (l == 0) {
teamData3 = teamData;
} else if (l == 1) {
teamData3 = teamData2;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 124, 27);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num5, num, 107.0f, 17.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 162, 35);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num5, num + 17, 107.0f, 17.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 124, 27);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num5, num + 34, 107.0f, 17.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(3, 59, 63);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(num5 - 1, num, num5 - 1, num + 51, 1.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(num5 + 107, num, num5 + 107, num + 51, 1.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(num5 - 1, num + 51, num5 + 107, num + 51, 1.0f);});
if (matchInfoJoin == 0) {
IntArray leagueData = require(instance3)->GetLeagueData(require(teamData3)->id_);
if (MyFormBase::Jp()) {
num4 = 0;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾘｰｸﾞ"), num5 + 19 + num4, num + 3);});
{ pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(leagueData[7]); require(instance2)->DrawNumImageLongIntInt(g, 30, cs_arg2, num5 + 77 + num4, num + 3, 0, 4); }
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 0);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"位"), num5 + 79 + num4, num + 3);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾘｰｸﾞ"), num5 + 9, num + 3);});
pls::cs::Int32 num9 = 77;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 0);}));});
SubForm::SetFontSize(g, 10);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"位"), num5 + num9 - 30 + 6, num + 3 + 2);});
SubForm::ResetFontSize(g);
{ pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(leagueData[7]); require(instance2)->DrawNumImageLongIntInt(g, 30, cs_arg2, num5 + num9 + 9 + 3, num + 3, 0, 2); }
}
} else {
pls::cs::Int32 warPotential_ = require(teamData3)->warPotential_;
num4 = 0;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));});
SubForm::SetFontSize(g, 10);
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾁｰﾑ評価"), num5 + 19 + num4, num + 3);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾁｰﾑ評価"), num5 + 19 + num4 - 6, num + 3 + 1);});
}
SubForm::ResetFontSize(g);
if (MyFormBase::Jp()) {
require(instance2)->DrawNumImageLongIntInt(g, 30, pls::cs::cast_integral<pls::cs::Int64>(warPotential_), num5 + 77 + num4 + 8 - 8 + 2, num + 3, 0, 2);
} else {
require(instance2)->DrawNumImageLongIntInt(g, 30, pls::cs::cast_integral<pls::cs::Int64>(warPotential_), num5 + 77 + num4 + 8 - 8 + 2 + 1, num + 3, 0, 2);
}
}
num4 = 0;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(instance2)->resCom2_)->img.get_Item(57); require(g)->DrawImage(cs_arg0, num5 + 37 + num4, num + 17 + 4); }());});
pls::cs::Int32 rankIndex = require(instance3)->GetRankIndex(require(teamData3)->warPotential_);
require(instance2)->DrawNumImageLongIntInt(g, 35, pls::cs::cast_integral<pls::cs::Int64>(rankIndex + 1), num5 + 53 + num4 + 2, num + 17 + 4 + 1, 0, 1);
num4 = 0;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = game::UserData::RANK_NAME()[rankIndex]; require(g)->DrawString(cs_arg0, num5 + 53 + num4, num + 34 + 3, 2); }());});
}

}

}

// M:form.SubForm.Draw_upParam(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)
void SubForm::Draw_upParam(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::Int32 dx,pls::cs::Int32 dy,pls::cs::Int32 cnt) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Draw_upParam(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
SubForm::Draw_upParam(g, seb, dx, dy, cnt, 4);
}

}

// M:form.SubForm.Draw_upParam(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void SubForm::Draw_upParam(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::Int32 dx,pls::cs::Int32 dy,pls::cs::Int32 cnt,pls::cs::Int32 anchor) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Draw_upParam(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
pls::cs::Int32 num = main::AppData::GetFig(pls::cs::cast_integral<pls::cs::Int64>(cnt)) * 8 + 8 + 2;
if ((anchor == 1)) {
if (cnt >= 0) {
require(instance)->DrawNumImageLongIntInt(g, seb, pls::cs::cast_integral<pls::cs::Int64>(cnt), dx + 10, dy, 0, 1);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(instance)->resCom2_)->seb.get_Item(35); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(instance)->resCom2_)->img.get_Item(103); require(instance)->DrawSeb(g, dx, dy, cs_arg3, cs_arg4, 14); }
} else {
require(instance)->DrawNumImageLongIntInt(g, 91, pls::cs::cast_integral<pls::cs::Int64>(-cnt), dx + 10, dy, 0, 1);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(instance)->resCom2_)->seb.get_Item(91); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(instance)->resCom2_)->img.get_Item(109); require(instance)->DrawSeb(g, dx, dy, cs_arg3, cs_arg4, 15); }
}
} else if ((anchor == 2)) {
if (cnt >= 0) {
require(instance)->DrawNumImageLongIntInt(g, seb, pls::cs::cast_integral<pls::cs::Int64>(cnt), dx - num / 2 + 10, dy, 0, 1);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(instance)->resCom2_)->seb.get_Item(35); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(instance)->resCom2_)->img.get_Item(103); require(instance)->DrawSeb(g, dx - num / 2, dy, cs_arg3, cs_arg4, 14); }
} else {
require(instance)->DrawNumImageLongIntInt(g, 91, pls::cs::cast_integral<pls::cs::Int64>(-cnt), dx - num / 2 + 10, dy, 0, 1);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(instance)->resCom2_)->seb.get_Item(91); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(instance)->resCom2_)->img.get_Item(109); require(instance)->DrawSeb(g, dx - num / 2, dy, cs_arg3, cs_arg4, 15); }
}
} else if ((anchor == 4)) {
if (cnt >= 0) {
require(instance)->DrawNumImageLongIntInt(g, seb, pls::cs::cast_integral<pls::cs::Int64>(cnt), dx, dy, 0, 4);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(instance)->resCom2_)->seb.get_Item(35); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(instance)->resCom2_)->img.get_Item(103); require(instance)->DrawSeb(g, dx - num, dy, cs_arg3, cs_arg4, 14); }
} else {
require(instance)->DrawNumImageLongIntInt(g, 91, pls::cs::cast_integral<pls::cs::Int64>(-cnt), dx, dy, 0, 4);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(instance)->resCom2_)->seb.get_Item(91); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(instance)->resCom2_)->img.get_Item(109); require(instance)->DrawSeb(g, dx - num, dy, cs_arg3, cs_arg4, 15); }
}
}
}

}

// M:form.SubForm.Draw_multiParam(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)
void SubForm::Draw_multiParam(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::Int32 dx,pls::cs::Int32 dy,pls::cs::Int32 cnt) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Draw_multiParam(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
SubForm::Draw_multiParam(g, seb, dx, dy, cnt, 4);
}

}

// M:form.SubForm.Draw_multiParam(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void SubForm::Draw_multiParam(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::Int32 dx,pls::cs::Int32 dy,pls::cs::Int32 cnt,pls::cs::Int32 anchor) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Draw_multiParam(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
pls::cs::Int32 num = main::AppData::GetFig(pls::cs::cast_integral<pls::cs::Int64>(cnt)) * 8 + 8 + 5;
if ((anchor == 1)) {
require(instance)->DrawNumImageComma(g, seb, pls::cs::cast_integral<pls::cs::Int64>(cnt), dx + 8 + 5, dy, 0, 0, 1);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(instance)->resCom2_)->seb.get_Item(35); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(instance)->resCom2_)->img.get_Item(103); require(instance)->DrawSeb(g, dx, dy, cs_arg3, cs_arg4, 16); }
} else if ((anchor == 2)) {
require(instance)->DrawNumImageComma(g, seb, pls::cs::cast_integral<pls::cs::Int64>(cnt), dx - num / 2 + 8 + 5, dy, 0, 0, 1);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(instance)->resCom2_)->seb.get_Item(35); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(instance)->resCom2_)->img.get_Item(103); require(instance)->DrawSeb(g, dx - num / 2, dy, cs_arg3, cs_arg4, 16); }
} else if ((anchor == 4)) {
require(instance)->DrawNumImageComma(g, seb, pls::cs::cast_integral<pls::cs::Int64>(cnt), dx - num + 8 + 5, dy, 0, 0, 1);
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(instance)->resCom2_)->seb.get_Item(35); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(instance)->resCom2_)->img.get_Item(103); require(instance)->DrawSeb(g, dx - num, dy, cs_arg3, cs_arg4, 16); }
}
}

}

// M:form.SubForm.Draw_up(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)
void SubForm::Draw_up(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 dx,pls::cs::Int32 dy,pls::cs::Int32 cnt,pls::cs::Int32 padding) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Draw_up(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
if (cnt == 0) {
return;
}
pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
if (cnt >= 0) {
pls::cs::Int32 i = 0;
while (i < cnt) {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(instance)->resCom2_)->seb.get_Item(35); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(instance)->resCom2_)->img.get_Item(103); require(instance)->DrawSeb(g, dx + i * (8 + padding), dy, cs_arg3, cs_arg4, 14); }
++i;
}
} else {
cnt = -cnt;
pls::cs::Int32 j = 0;
while (j < cnt) {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(instance)->resCom2_)->seb.get_Item(35); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(instance)->resCom2_)->img.get_Item(103); require(instance)->DrawSeb(g, dx + j * (8 + padding), dy, cs_arg3, cs_arg4, 15); }
++j;
}
}
return;
}

}

// M:form.SubForm.DrawWindow2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IntArray SubForm::DrawWindow2(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::String title,pls::cs::Int32 sideSpace,pls::cs::Int32 topSpace,pls::cs::Int32 bottomSpace,pls::cs::Int32 barArwSpace,pls::cs::Int32 flag) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.DrawWindow2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
return DrawWindow(g, width, height, title, sideSpace, topSpace, bottomSpace, barArwSpace, flag, 0, -1);
}
}

// M:form.SubForm.DrawWindow(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IntArray SubForm::DrawWindow(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::String title,pls::cs::Int32 sideSpace,pls::cs::Int32 topSpace,pls::cs::Int32 bottomSpace,pls::cs::Int32 barArwSpace,pls::cs::Int32 flag,pls::cs::Int32 page,pls::cs::Int32 pageMax) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.DrawWindow(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
GameForm::ensure_initialized();

if ([&]() { auto cs_left = pls::cs::box(drawWindow_tmp_SubForm); auto cs_right = pls::cs::box(IntArray{}); return cs_left == cs_right; }()) {
drawWindow_tmp_SubForm = IntArray::make(8);
}
pls::cs::Int32 num;
if (pageMax != -1) {
pls::cs::String text = title;
title = pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(text, literal(u" ")), integer_string((page + 1))), literal(u"/")), integer_string(pageMax));
}
if (pageMax > 1) {
flag = (flag | 3);
}
require(apdat_)->DrawWindow(g, width, height, 0, title);
if (require(apdat_)->IsTopForm(this)) {

}
drawWindow_tmp_SubForm[0] = 120 - height / 2 + 17;
drawWindow_tmp_SubForm[3] = 120 - width / 2;
drawWindow_tmp_SubForm[1] = drawWindow_tmp_SubForm[3] + width;
drawWindow_tmp_SubForm[2] = drawWindow_tmp_SubForm[0] + height - 17;
drawWindow_tmp_SubForm[7] = drawWindow_tmp_SubForm[3] + sideSpace;
drawWindow_tmp_SubForm[5] = drawWindow_tmp_SubForm[1] - sideSpace;
drawWindow_tmp_SubForm[4] = drawWindow_tmp_SubForm[0] + topSpace;
drawWindow_tmp_SubForm[6] = drawWindow_tmp_SubForm[2] - bottomSpace;
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(flag, 4);})) {
{ pls::cs::Int32 cs_arg1 = drawWindow_tmp_SubForm[7]; pls::cs::Int32 cs_arg2 = drawWindow_tmp_SubForm[4]; pls::cs::Int32 cs_arg3 = drawWindow_tmp_SubForm[5]; pls::cs::Int32 cs_arg4 = drawWindow_tmp_SubForm[6]; require(apdat_)->DrawBox(g, cs_arg1, cs_arg2, cs_arg3, cs_arg4); }
}
num = GameForm::VIEW_Y() / 2;
{ auto cs_target = drawWindow_tmp_SubForm; auto cs_index = 0; auto cs_old = cs_target.at(cs_index); auto cs_rhs = num; pls::cs::Int32 cs_value = cs_old + cs_rhs; cs_target.at(cs_index) = cs_value; }
{ auto cs_target = drawWindow_tmp_SubForm; auto cs_index = 2; auto cs_old = cs_target.at(cs_index); auto cs_rhs = num; pls::cs::Int32 cs_value = cs_old + cs_rhs; cs_target.at(cs_index) = cs_value; }
{ auto cs_target = drawWindow_tmp_SubForm; auto cs_index = 4; auto cs_old = cs_target.at(cs_index); auto cs_rhs = num; pls::cs::Int32 cs_value = cs_old + cs_rhs; cs_target.at(cs_index) = cs_value; }
{ auto cs_target = drawWindow_tmp_SubForm; auto cs_index = 6; auto cs_old = cs_target.at(cs_index); auto cs_rhs = num; pls::cs::Int32 cs_value = cs_old + cs_rhs; cs_target.at(cs_index) = cs_value; }
return drawWindow_tmp_SubForm;

}
}

// M:form.SubForm.SetWinCharaJamp(System.Int32)
void SubForm::SetWinCharaJamp(pls::cs::Int32 time) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.SetWinCharaJamp(System.Int32)",game);
{
SetWinCharaJamp(time, 6, -10, 14);
}
}

// M:form.SubForm.SetWinCharaJamp(System.Int32,System.Int32,System.Int32,System.Int32)
void SubForm::SetWinCharaJamp(pls::cs::Int32 time,pls::cs::Int32 wait,pls::cs::Int32 JAMP_DIS,pls::cs::Int32 JAMP_TIME) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.SetWinCharaJamp(System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
pls::cs::Int32 num = time % (JAMP_TIME + wait);
num -= wait / 2;
pls::cs::Single num2 = game::GameUtil::SetVStop(JAMP_DIS, JAMP_TIME / 2);
pls::cs::Single num3 = game::GameUtil::SetAStop(JAMP_DIS, JAMP_TIME / 2);
SubForm::WIN_CHA()[1] = pls::cs::to_int32((num2 * pls::cs::Single(num) + num3 * pls::cs::Single(num) * pls::cs::Single((num + 1)) / 2.0f));
if (SubForm::WIN_CHA()[1] > 0) {
SubForm::WIN_CHA()[1] = 0;
}
if (SubForm::WIN_CHA()[1] < 0) {
SubForm::WIN_CHA()[0] = 3;
} else {
SubForm::WIN_CHA()[0] = 0;
}
}
}

// M:form.SubForm.SetWinCharaTraining(System.Int32,System.Int32)
void SubForm::SetWinCharaTraining(pls::cs::Int32 time,pls::cs::Int32 tMode) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.SetWinCharaTraining(System.Int32,System.Int32)",game);
{
game::Player::ensure_initialized();

if (tMode == 2) {
pls::cs::Int32 num = 6;
pls::cs::Int32 num2 = time % (14 + num);
num2 -= num / 2;
pls::cs::Single num3 = game::GameUtil::SetVStop(-10.0f, 7);
pls::cs::Single num4 = game::GameUtil::SetAStop(-10.0f, 7);
SubForm::WIN_CHA()[1] = pls::cs::to_int32((num3 * pls::cs::Single(num2) + num4 * pls::cs::Single(num2) * pls::cs::Single((num2 + 1)) / 2.0f));
if (SubForm::WIN_CHA()[1] > 0) {
SubForm::WIN_CHA()[1] = 0;
}
if (SubForm::WIN_CHA()[1] < 0) {
SubForm::WIN_CHA()[0] = 2;
} else {
SubForm::WIN_CHA()[0] = 0;
}
SubForm::WIN_CHA()[2] = 0;
if (SubForm::WIN_CHA()[0] == 2 && num2 >= (14 + num) / 2 - 3) {
SubForm::WIN_CHA()[2] = 1;
}
} else {
SubForm::WIN_CHA()[1] = 0;
pls::cs::Int32 num5 = 0;
if (tMode == 0) {
SubForm::WIN_CHA()[0] = 1;
num5 = time % game::Player::SEB_H_KICK_ANIME()[pls::cs::Int32(game::Player::SEB_H_KICK_ANIME().length()) - 1];
if (num5 < game::Player::SEB_H_KICK_ANIME()[0]) {
SubForm::WIN_CHA()[2] = 0;
} else if (num5 < game::Player::SEB_H_KICK_ANIME()[1]) {
SubForm::WIN_CHA()[2] = 1;
} else if (num5 < game::Player::SEB_H_KICK_ANIME()[2]) {
SubForm::WIN_CHA()[2] = 2;
}
} else if (tMode == 1) {
SubForm::WIN_CHA()[0] = 10;
num5 = time % game::Player::SEB_H_HEAD_ANIME()[pls::cs::Int32(game::Player::SEB_H_HEAD_ANIME().length()) - 1];
SubForm::WIN_CHA()[2] = time % (game::Player::SEB_H_WALK_ASPEED() * 4) / game::Player::SEB_H_WALK_ASPEED();
} else if (tMode == 3) {
SubForm::WIN_CHA()[0] = 4;
num5 = time % game::Player::SEB_H_THROWIN_ANIME()[pls::cs::Int32(game::Player::SEB_H_THROWIN_ANIME().length()) - 1];
SubForm::WIN_CHA()[2] = time % 12 / 6;
}
}

}
}

// M:form.SubForm.SetMeterParamRank(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void SubForm::SetMeterParamRank(pls::cs::Int32 line,pls::cs::Int32 TIME,pls::cs::Int32 value,pls::cs::Int32 valueMax,pls::cs::Int32 rank,pls::cs::Int32 rankMax,pls::cs::Int32 add) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.SetMeterParamRank(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
SubForm::meterParam()[line][0] = TIME;
SubForm::meterParam()[line][1] = value;
SubForm::meterParam()[line][2] = valueMax;
SubForm::meterParam()[line][3] = rank;
SubForm::meterParam()[line][4] = rankMax;
SubForm::meterParam()[line][6] = add;
SubForm::meterParam()[line][5] = 1;
SubForm::meterParam()[line][7] = ([&]() -> pls::cs::Int32 { auto cs_left = SubForm::meterParam()[line][1]; auto cs_right = SubForm::meterParam()[line][6]; return cs_left + cs_right; }());
SubForm::meterParam()[line][8] = SubForm::meterParam()[line][3];
if (([&]() -> bool { auto cs_left = SubForm::meterParam()[line][7]; auto cs_right = SubForm::meterParam()[line][2]; return cs_left >= cs_right; }()) && ([&]() -> bool { auto cs_left = SubForm::meterParam()[line][3]; auto cs_right = SubForm::meterParam()[line][4]; return cs_left < cs_right; }()) && SubForm::meterParam()[line][5] == 1) {
{ auto cs_target = SubForm::meterParam()[line]; auto cs_index = 7; auto cs_old = cs_target.at(cs_index); auto cs_rhs = SubForm::meterParam()[line][2]; pls::cs::Int32 cs_value = cs_old - cs_rhs; cs_target.at(cs_index) = cs_value; }
SubForm::meterParam()[line][8]++;
}
}
}

// M:form.SubForm.SetMeterParam(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void SubForm::SetMeterParam(pls::cs::Int32 line,pls::cs::Int32 TIME,pls::cs::Int32 value,pls::cs::Int32 valueMax,pls::cs::Int32 add) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.SetMeterParam(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
SubForm::meterParam()[line][0] = TIME;
SubForm::meterParam()[line][1] = value;
SubForm::meterParam()[line][2] = valueMax;
SubForm::meterParam()[line][6] = add;
SubForm::meterParam()[line][5] = 0;
{ auto cs_target = SubForm::meterParam()[line]; auto cs_index = 7; auto cs_value = ([&]() -> pls::cs::Int32 { pls::cs::Int32 cs_arg0 = ([&]() -> pls::cs::Int32 { auto cs_left = SubForm::meterParam()[line][1]; auto cs_right = SubForm::meterParam()[line][6]; return cs_left + cs_right; }()); pls::cs::Int32 cs_arg1 = SubForm::meterParam()[line][2]; return main::AppData::ClampMax(cs_arg0, cs_arg1); }());cs_target.set_Item(cs_index,cs_value);}
}
}

// M:form.SubForm.SetMeterParamDispAdd(System.Int32,System.Int32,System.Int32)
void SubForm::SetMeterParamDispAdd(pls::cs::Int32 line,pls::cs::Int32 faId,pls::cs::Int32 nowValue) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.SetMeterParamDispAdd(System.Int32,System.Int32,System.Int32)",game);
{
pls::cs::Int32 num = 0;
pls::cs::Int32 num2 = 0;
num = nowValue;
if (faId == 3) {
num2 = ([&]() -> pls::cs::Int32 { auto cs_left = SubForm::meterParam()[line][1]; auto cs_right = SubForm::meterParam()[line][6]; return cs_left + cs_right; }());
} else {
num2 = ([&]() -> pls::cs::Int32 { auto cs_left = SubForm::meterParam()[line][1]; auto cs_right = SubForm::meterParam()[line][6]; return cs_left + cs_right; }());
num2 = data::FanActData::GetFanDispParam(num2, faId);
}
SubForm::meterParam()[line][9] = num2 - num;
}
}

// M:form.SubForm.UpdateMeterParam(System.Int32,System.Int32)
void SubForm::UpdateMeterParam(pls::cs::Int32 frame,pls::cs::Int32 line) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.UpdateMeterParam(System.Int32,System.Int32)",game);
{
pls::cs::Int32 cs_arg2_236 = SubForm::meterParam()[line][0]; pls::cs::Int32 cs_arg4_236 = SubForm::meterParam()[line][6];
pls::cs::Int32 num = game::GameUtil::RateConvert(frame - 1, 0, cs_arg2_236, 0, cs_arg4_236, true);
pls::cs::Int32 num2 = ([&]() -> pls::cs::Int32 { pls::cs::Int32 cs_arg2 = SubForm::meterParam()[line][0]; pls::cs::Int32 cs_arg4 = SubForm::meterParam()[line][6]; return game::GameUtil::RateConvert(frame, 0, cs_arg2, 0, cs_arg4, true); }()) - num;
{ auto cs_target = SubForm::meterParam()[line]; auto cs_index = 1; auto cs_old = cs_target.at(cs_index); auto cs_rhs = num2; pls::cs::Int32 cs_value = cs_old + cs_rhs; cs_target.at(cs_index) = cs_value; }
if (SubForm::meterParam()[line][5] == 1) {
if (([&]() -> bool { auto cs_left = SubForm::meterParam()[line][1]; auto cs_right = SubForm::meterParam()[line][2]; return cs_left >= cs_right; }()) && ([&]() -> bool { auto cs_left = SubForm::meterParam()[line][3]; auto cs_right = SubForm::meterParam()[line][4]; return cs_left < cs_right; }())) {
{ auto cs_target = SubForm::meterParam()[line]; auto cs_index = 1; auto cs_old = cs_target.at(cs_index); auto cs_rhs = SubForm::meterParam()[line][2]; pls::cs::Int32 cs_value = cs_old - cs_rhs; cs_target.at(cs_index) = cs_value; }
SubForm::meterParam()[line][3]++;
}
} else if (SubForm::meterParam()[line][5] == 0) {
{ auto cs_target = SubForm::meterParam()[line]; auto cs_index = 1; auto cs_value = ([&]() -> pls::cs::Int32 { pls::cs::Int32 cs_arg0 = SubForm::meterParam()[line][1]; pls::cs::Int32 cs_arg1 = SubForm::meterParam()[line][2]; return main::AppData::ClampMax(cs_arg0, cs_arg1); }());cs_target.set_Item(cs_index,cs_value);}
}
}
}

// M:form.SubForm.FinishMeterParam(System.Int32)
void SubForm::FinishMeterParam(pls::cs::Int32 line) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.FinishMeterParam(System.Int32)",game);
{
SubForm::meterParam()[line][1] = SubForm::meterParam()[line][7];
if (SubForm::meterParam()[line][5] == 1) {
SubForm::meterParam()[line][3] = SubForm::meterParam()[line][8];
}
}
}

// M:form.SubForm.GetMeterParam(System.Int32)
IntArray SubForm::GetMeterParam(pls::cs::Int32 line) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.GetMeterParam(System.Int32)",game);
{
return SubForm::meterParam()[line];
}
}

// M:form.SubForm.Draw_chara(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void SubForm::Draw_chara(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 charaImg,pls::cs::Int32 charaSeb,pls::cs::Int32 direct,pls::cs::Int32 cnt,pls::cs::Int32 dx,pls::cs::Int32 dy) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Draw_chara(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
pls::cs::Int32 frame = 0;
if ((charaSeb == 0)) {
frame = 0 + direct;
} else if ((charaSeb == 1)) {
frame = 2 + direct;
} else if ((charaSeb == 2)) {
pls::cs::Int32 num = cnt % 12 / 6;
frame = num * 2 + 4 + direct;
}
pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(instance)->resCom2_)->seb.get_Item(96); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(instance)->resCom2_)->img.get_Item(charaImg); require(instance)->DrawSeb(g, dx, dy, cs_arg3, cs_arg4, frame); }
}

}

// M:form.SubForm.Draw_categoryIcon(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32)
void SubForm::Draw_categoryIcon(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 iconId,pls::cs::Int32 dx,pls::cs::Int32 dy) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Draw_categoryIcon(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(116); require(g)->DrawImage(cs_arg0, dx, dy, iconId % 9 * 14, iconId / 9 * 14, 14, 14); }());});
}
}

// M:form.SubForm.Draw_tenantBuildIcon(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32)
void SubForm::Draw_tenantBuildIcon(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 iconId,pls::cs::Int32 dx,pls::cs::Int32 dy) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Draw_tenantBuildIcon(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(98); require(g)->DrawImage(cs_arg0, dx, dy, iconId % 10 * 16, iconId / 10 * 16, 16, 16); }());});
}
}

// M:form.SubForm.Draw_trainingIcon(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32)
void SubForm::Draw_trainingIcon(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 iconId,pls::cs::Int32 dx,pls::cs::Int32 dy) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Draw_trainingIcon(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(173); require(g)->DrawImage(cs_arg0, dx, dy, iconId % 10 * 16, iconId / 10 * 16, 16, 16); }());});
}
}

// M:form.SubForm.Draw_fanActBack(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32)
void SubForm::Draw_fanActBack(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 backId,pls::cs::Int32 dx,pls::cs::Int32 dy) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Draw_fanActBack(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(174); require(g)->DrawImage(cs_arg0, dx, dy, backId % 3 * 40, backId / 3 * 55, 40, 55); }());});
}
}

// M:form.SubForm.SetTicketWindowBtmMsg(System.String)
void SubForm::SetTicketWindowBtmMsg(pls::cs::String msg) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.SetTicketWindowBtmMsg(System.String)",game);
{
SubForm::ticketPriceMessage() = msg;
}
}

// M:form.SubForm.Draw_newMark(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32)
void SubForm::Draw_newMark(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 dx,pls::cs::Int32 dy,pls::cs::Int32 frame_) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Draw_newMark(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32)",game);
{
pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(instance)->resCom2_)->seb.get_Item(98); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(instance)->resCom2_)->img.get_Item(181); require(instance)->DrawSeb(g, dx, dy, cs_arg3, cs_arg4, frame_ % 12 / 6); }
}

}

// M:form.SubForm.CheckMainWindow
bool SubForm::CheckMainWindow() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.CheckMainWindow",game);
{
return false;
}
}

// M:form.SubForm.Update_clearPoint
void SubForm::Update_clearPoint() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Update_clearPoint",game);
{
kl_cfg::Config::ensure_initialized();

frame_ = ((frame_ + 1) % 2147483647 /* Int32.MaxValue */);
if ([&]() -> bool { auto cs_left = clearPoint_cnt; auto cs_right = SubForm::CLEARPOINT_ANIMETIME()[clearPoint_mode]; return cs_left < cs_right; }()) {
++clearPoint_cnt;
if (kl_cfg::Config::DEBUG_CMD() && pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyState(64);})) {
clearPoint_cnt = SubForm::CLEARPOINT_ANIMETIME()[clearPoint_mode];
}
if ([&]() -> bool { auto cs_left = clearPoint_cnt; auto cs_right = SubForm::CLEARPOINT_ANIMETIME()[clearPoint_mode]; return cs_left == cs_right; }()) {
if (clearPoint_mode == 3) {

}
if (clearPoint_mode == 3) {
clearPoint_score = clearPoint_score + require(udat_)->clear_point[clearPoint_index][1];
}
}
}
if ([&]() -> bool { auto cs_left = clearPoint_cnt; auto cs_right = SubForm::CLEARPOINT_ANIMETIME()[clearPoint_mode]; return cs_left >= cs_right; }()) {
if (clearPoint_mode == 0) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
clearPoint_cnt = 0;
clearPoint_mode = 1;
}
} else if (clearPoint_mode == 1) {
clearPoint_cnt = 0;
clearPoint_mode = 2;
} else if (clearPoint_mode == 2) {
clearPoint_cnt = 0;
clearPoint_mode = 3;
} else if (clearPoint_mode == 3) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);}) || (kl_cfg::Config::DEBUG_CMD() && pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyState(64);}))) {
clearPoint_cnt = 0;
++clearPoint_index;
clearPoint_mode = 5;
if (clearPoint_index < 7) {
clearPoint_mode = 5;
} else if (clearPoint_score > clearPoint_highScore) {
clearPoint_mode = 4;
} else {
clearPoint_mode = 6;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Log::Info(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(literal(u"■SubForm.java update_clearPoint() clearPoint_index = "), integer_string(clearPoint_index)), literal(u", clearPoint_mode = ")), integer_string(clearPoint_mode)), pls::cs::Ref<pls::cs::ExceptionObject>{});});
}
} else if (clearPoint_mode == 4) {
clearPoint_cnt = 0;
clearPoint_mode = 6;
} else if (clearPoint_mode == 5) {
clearPoint_cnt = 0;
clearPoint_mode = 1;
} else {
if (clearPoint_mode == 6) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->Pop();});
require(apdat_)->PlayBgm(0);
require(apdat_)->ExecEvent(6, pls::cs::String{}, IntArray{});
if (clearPoint_score > clearPoint_highScore) {
if (clearPoint_score >= pls::cs::cast_integral<pls::cs::Int64>(100000)) {
require(require(apdat_)->sysSave_)->ints[10] = 4;
} else if (clearPoint_score >= pls::cs::cast_integral<pls::cs::Int64>(75000)) {
require(require(apdat_)->sysSave_)->ints[10] = 3;
} else if (clearPoint_score >= pls::cs::cast_integral<pls::cs::Int64>(50000)) {
require(require(apdat_)->sysSave_)->ints[10] = 2;
} else {
require(require(apdat_)->sysSave_)->ints[10] = 1;
}
([&]() -> pls::cs::Ref<SubForm> { auto cs_receiver = apdat_; pls::cs::String cs_arg1 = ([&]() { auto cs_left = pls::cs::String::concat(main::AppData::CommaSeparate(clearPoint_score), literal(u"\t")); auto cs_right = MyFormBase::LT(SubForm::TROPHY_NAME()[require(require(apdat_)->sysSave_)->ints[10]]); return pls::cs::String::concat(cs_left,cs_right); }()); return require(cs_receiver)->ExecEvent(4, cs_arg1, IntArray{}); }());
require(require(apdat_)->sysSave_)->lngs[0] = clearPoint_score;
require(require(apdat_)->sysSave_)->strs[0] = require(require(apdat_)->save_)->strs[0];
} else {
([&]() -> pls::cs::Ref<SubForm> { auto cs_receiver = apdat_; pls::cs::String cs_arg1 = main::AppData::CommaSeparate(clearPoint_score); return require(cs_receiver)->ExecEvent(5, cs_arg1, IntArray{}); }());
}
clearPoint_cnt = 0;
clearPoint_mode = 7;
try {
require(apdat_)->SaveSystem();
} catch(const pls::cs::Exception& cs_caught_127) {auto t=pls::cs::capture_exception(cs_caught_127);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Log::Info(t);});
}}
}
}
}

}
}

// M:form.SubForm.Draw_clearPoint(kairo.unity.ui.Graphics)
void SubForm::Draw_clearPoint(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Draw_clearPoint(kairo.unity.ui.Graphics)",game);
{
game::UserData::ensure_initialized();

pls::cs::Ref<pls::kairo::Font> font = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{});});
require(apdat_)->DrawWindow(g, 222, 155, 0, literal(u"ｸﾘｱﾎﾟｲﾝﾄ発表"));
require(apdat_)->DrawBox(g, 17, 81, 224, 177);
pls::cs::Int32 num2;
pls::cs::Int32 recoveredUnusedLayout;
pls::cs::Int32 num = 105;
num2 = 30;
num = 105;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resEvent_)->img.get_Item(11); require(g)->DrawImage(cs_arg0, num2, num); }());});
require(apdat_)->DrawBox(g, 21, 85, 218, 137);
num = 181;
if (clearPoint_mode == 4) {
pls::cs::Int32 num3 = 0;
if (frame_ % 6 * 2 < 6) {
num3 = 1;
}
SubForm::Draw_chara(g, 171, 2, 1, frame_, 190, num);
SubForm::Draw_chara(g, 172, 2, 0, frame_, 51, num);
} else {
SubForm::Draw_chara(g, 171, 0, 1, frame_, 190, num);
SubForm::Draw_chara(g, 172, 0, 0, frame_, 51, num);
}
if (clearPoint_mode == 0) {
if (clearPoint_cnt >= 15) {
num = 105;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"それではさっそく"), 120.0f, num, 2);});
if ([&]() -> bool { auto cs_left = clearPoint_cnt; auto cs_right = (SubForm::CLEARPOINT_ANIMETIME()[clearPoint_mode] + 15) / 2; return cs_left >= cs_right; }()) {
num += 22;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ｸﾘｱﾎﾟｲﾝﾄの計算に入ります。"), 120.0f, num, 2);});
}
}
if (([&]() -> bool { auto cs_left = clearPoint_cnt; auto cs_right = SubForm::CLEARPOINT_ANIMETIME()[clearPoint_mode]; return cs_left == cs_right; }()) && frame_ % 40 > 20) {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(63); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(72); require(apdat_)->DrawSeb(g, 213, 179, cs_arg3, cs_arg4, 0); }
}
} else if (clearPoint_mode == 1) {
if (clearPoint_cnt >= 15) {
num = 105;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = game::UserData::CPOINT_STR()[clearPoint_index][0]; require(g)->DrawString(cs_arg0, 120.0f, num, 2); }());});
if ([&]() -> bool { auto cs_left = clearPoint_cnt; auto cs_right = (SubForm::CLEARPOINT_ANIMETIME()[clearPoint_mode] + 15) / 2; return cs_left >= cs_right; }()) {
num += 22;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<0><1>"), ([&]() { auto cs_left = pls::cs::String::concat(main::AppData::CommaSeparate(require(udat_)->clear_point[clearPoint_index][0]), literal(u"\t")); auto cs_right = MyFormBase::LT(game::UserData::CPOINT_STR()[clearPoint_index][1]); return pls::cs::String::concat(cs_left,cs_right); }())); require(g)->DrawString(cs_arg0, 120.0f, num, 2); }());});
}
}
} else if (clearPoint_mode == 2) {
if (clearPoint_cnt >= 15) {
num = 117;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ｸﾘｱﾎﾟｲﾝﾄに…"), 120.0f, num, 2);});
}
} else if (clearPoint_mode == 3) {
if (clearPoint_cnt >= 15) {
pls::cs::String empty = pls::cs::String(u"");
empty = main::AppData::CommaSeparate(require(udat_)->clear_point[clearPoint_index][1]);
pls::cs::String text = literal(u"点追加!!");
num2 = 120 - (([&]() -> pls::cs::Int32 { auto cs_left = pls::cs::Int32(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(font)->StringWidth(empty);})); auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(font)->StringWidth(text);}); return cs_left + cs_right; }())) / 2;
num = 117;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(empty, num2, num);});
num2 += pls::diagnostic::api_call([&]() -> decltype(auto) {return require(font)->StringWidth(empty);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(text, num2, num);});
}
if (([&]() -> bool { auto cs_left = clearPoint_cnt; auto cs_right = SubForm::CLEARPOINT_ANIMETIME()[clearPoint_mode]; return cs_left == cs_right; }()) && frame_ % 40 > 20) {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(63); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(72); require(apdat_)->DrawSeb(g, 213, 179, cs_arg3, cs_arg4, 0); }
}
} else if (clearPoint_mode == 4) {
num = 117;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ハイスコア更新！"), 120.0f, num, 2);});
} else if (clearPoint_mode == 5) {
if (clearPoint_cnt >= 15) {
num = 117;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"つづきまして…"), 120.0f, num, 2);});
}
} else if (clearPoint_mode == 6) {
if (clearPoint_cnt >= 15) {
num = 105;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ｸﾘｱﾎﾟｲﾝﾄの計算は"), 120.0f, num, 2);});
if ([&]() -> bool { auto cs_left = clearPoint_cnt; auto cs_right = (SubForm::CLEARPOINT_ANIMETIME()[clearPoint_mode] + 15) / 2; return cs_left >= cs_right; }()) {
num += 22;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"以上となります。"), 120.0f, num, 2);});
}
}
if (([&]() -> bool { auto cs_left = clearPoint_cnt; auto cs_right = SubForm::CLEARPOINT_ANIMETIME()[clearPoint_mode]; return cs_left == cs_right; }()) && frame_ % 40 > 20) {
{ pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(63); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(72); require(apdat_)->DrawSeb(g, 213, 167, cs_arg3, cs_arg4, 0); }
}
}
num = 78;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
if (!SubForm::En()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"現在ﾎﾟｲﾝﾄ:"), 93.0f, num, 4);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"現在ﾎﾟｲﾝﾄ:"), 33.0f, num, 1);});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<0>点"), main::AppData::CommaSeparate(clearPoint_score)); require(g)->DrawString(cs_arg0, 213.0f, num, 4); }());});
num = 192;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLUE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾊｲｽｺｱ  :"), 93.0f, num, 4);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = MyFormBase::LT(literal(u"<0>点"), main::AppData::CommaSeparate(clearPoint_highScore)); require(g)->DrawString(cs_arg0, 213.0f, num, 4); }());});

}
}

// M:form.SubForm.GetTouchValue(System.Int32,System.Int32)
std::int32_t SubForm::GetTouchValue(std::int32_t type_raw,std::int32_t index_raw) {
pls::cs::Int32 type = type_raw;
pls::cs::Int32 index = index_raw;
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.GetTouchValue(System.Int32,System.Int32)",game);
{
type = pls::cs::to_int32((pls::cs::Int64(type) & pls::cs::Int64(0xFFFF0000u)));
switch (type) {
case 131072:
{
return select_;
}
case 1310720:
{
return page_;
}
case 262144:
{
if (type_ == 26) {
return require(udat_)->scrollValue_;
}
return scrollValue_;
}
case 786432:
{
return require(udat_)->et_cur[0];
}
case 851968:
{
return require(udat_)->et_cur[1];
}
case 917504:
{
return require(udat_)->et_cur[2];
}
case 983040:
{
return require(udat_)->et_cur[3];
}
case 1048576:
{
return require(udat_)->et_cur[4];
}
case 1114112:
{
return require(udat_)->et_cur[5];
}
case 1179648:
{
return require(udat_)->et_cur[6];
}
default:
{
return MyFormBase::GetTouchValue(type, index);
}
}
}
}

// M:form.SubForm.SetTouchValue(System.Int32,System.Int32)
void SubForm::SetTouchValue(std::int32_t type_raw,std::int32_t value_raw) {
pls::cs::Int32 type = type_raw;
pls::cs::Int32 value = value_raw;
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.SetTouchValue(System.Int32,System.Int32)",game);
{
type = pls::cs::to_int32((pls::cs::Int64(type) & pls::cs::Int64(0xFFFF0000u)));
switch (type) {
case 131072:
{
select_ = value;
break;
}
case 1310720:
{
page_ = value;
break;
}
case 262144:
{
scrollValue_ = value;
require(udat_)->scrollValue_ = value;
break;
}
case 1376256:
{
udArrowCnt = value;
break;
}
default:
{
MyFormBase::SetTouchValue(type, value);
break;
}
}
}
}

// M:form.SubForm.OnTouchEvent(kairo.unity.surface.TouchEvent)
bool SubForm::OnTouchEvent(pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.OnTouchEvent(kairo.unity.surface.TouchEvent)",game);
{
pls::cs::Ref<kairo::unity::surface::TouchComponent> component = require(e)->component;
return true;
}
}

// M:form.SubForm.Draw_backBlackAlpha(kairo.unity.ui.Graphics)
void SubForm::Draw_backBlackAlpha(pls::cs::Ref<pls::kairo::Graphics> g) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Draw_backBlackAlpha(kairo.unity.ui.Graphics)",game);
{
pls::cs::Ref<surface::GameView> instance = surface::GameView::GetInstance();
pls::cs::Int32 originX = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginX();});
pls::cs::Int32 originY = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginY();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetOrigin(0, 0);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0, 180);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg2 = require(instance)->GetGameWidth(); pls::cs::Single cs_arg3 = require(instance)->GetGameHeight(); require(g)->FillRect(0.0f, 0.0f, cs_arg2, cs_arg3); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetOrigin(originX, originY);});
}

}

// M:form.SubForm.Draw_udArrow(kairo.unity.ui.Graphics)
void SubForm::Draw_udArrow(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Draw_udArrow(kairo.unity.ui.Graphics)",game);
{

}
}

// M:form.SubForm.DrawConfig_jp(kairo.unity.ui.Graphics)
void SubForm::DrawConfig_jp(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.DrawConfig_jp(kairo.unity.ui.Graphics)",game);
{
kl_cfg::Config::ensure_initialized();

IntArray array = MyFormBase::DrawWindow(g, 210, 186, literal(u"設定"), 4, 4, 39, 80, 4);
pls::cs::Int32 num = array[7] + 10;
pls::cs::Int32 num2 = array[4] + 10;
pls::cs::Int32 num3 = 24;
pls::cs::Int32 num4 = num + 65;
pls::cs::Int32 num5 = array[5] - 15;
pls::cs::Int32 num6 = 0;
while (num6 < SubForm::CONFIG_NAMES().length()) {
pls::cs::Int32 num7 = 36;
if (num6 == SubForm::CONFIG_BGM() || num6 == SubForm::CONFIG_SE()) {
num7 = 54;
} else if (num6 == SubForm::CONFIG_ORIENTATION()) {
num7 = 48;
}
if (select_ == num6) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(159, 189, 255);});
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num - 1, num2 - 1, num7 + 2, 14.0f);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num - 1, num2 - 1, 56.0f, 14.0f);});
}
}
pls::cs::Int32 num8 = num + 30;
surface::GameView::AddTouch(g, 6, -120, num2 - 6, 120 + num8, num3, 0x20000 | num6);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(30, 30, 30);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = SubForm::CONFIG_NAMES()[num6]; require(g)->DrawString(cs_arg0, num, num2); }());});
pls::cs::Int32 num9 = this->GetTouchValue(SubForm::CONFIG_VALUES()[num6], 0);
if (SubForm::CONFIG_VALUE_REVERSE()[num6]) {
num9 = (num9 + 1) % 2;
}
if (num6 == SubForm::CONFIG_BGM() || num6 == SubForm::CONFIG_SE()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(30, 30, 30);}));});
kairo::unity::ui::Graphics::DrawString(require(g), pls::cs::cast_integral<pls::cs::Int64>(num9), num4 - 12, num2, 4);
surface::GameView::AddTouch(g, 21, num8, num2 - 6, num4 + 20 - num8, num3, 0x20000 | num6, require(kairo::unity::surface::TouchOption::Create())->ExtendValues(65552));
surface::GameView::AddTouch(g, 20, num5 - 20, num2 - 6, 240, num3, 0x20000 | num6, require(kairo::unity::surface::TouchOption::Create())->ExtendValues(65554));
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = num4 + 25; pls::cs::Int32 cs_arg3 = num2 - 6; pls::cs::Int32 cs_arg4 = num5 - num4 - 50; pls::cs::Int32 cs_arg5 = num3; pls::cs::Int32 cs_arg6 = SubForm::CONFIG_VALUES()[num6]; pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(require(kairo::unity::surface::TouchOption::Drag(num4 + 25, 0, num5 - num4 - 50, 0, 6, 0))->Flag(4))->ExtendValues(0x20000 | num6); surface::GameView::AddTouch(cs_arg0, 19, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6, cs_arg7);}
} else {
for (pls::cs::Int32 i = 0; i < SubForm::CONFIG_VALUE_NAMES()[num6].length(); ++i) {
IntArray evenlyDivisionArea = require(apdat_)->GetEvenlyDivisionArea(num4, num5, 2, i, 2);
bool flag = false;
if (num6 == SubForm::CONFIG_ORIENTATION()) {
if (i == 0 && num9 == -1) {
flag = true;
}
if (i == 1 && num9 != -1) {
flag = true;
}
} else if (num9 == i) {
flag = true;
}
if (flag) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(159, 189, 255);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg0 = ([&]() -> pls::cs::Int32 { auto cs_left = evenlyDivisionArea[0]; auto cs_right = (evenlyDivisionArea[1] - evenlyDivisionArea[0]) / 2; return cs_left + cs_right; }()) - 26 - 1; require(g)->FillRect(cs_arg0, num2 - 1, 54.0f, 14.0f); }());});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(30, 30, 30);});
if (num6 == SubForm::CONFIG_SPEED() && i == 0 && require(require(apdat_)->sysSave_)->ints[9] == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(128, 128, 128);});
}
if (kl_cfg::Config::ADMOB_ENABLE() && num6 == SubForm::CONFIG_ORIENTATION() && i == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(128, 128, 128);});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = SubForm::CONFIG_VALUE_NAMES()[num6][i]; pls::cs::Single cs_arg1 = ([&]() -> pls::cs::Int32 { auto cs_left = evenlyDivisionArea[0]; auto cs_right = (evenlyDivisionArea[1] - evenlyDivisionArea[0]) / 2; return cs_left + cs_right; }()); require(g)->DrawString(cs_arg0, cs_arg1, num2, 2); }());});
if (num6 == SubForm::CONFIG_SPEED() && i == 0 && require(require(apdat_)->sysSave_)->ints[9] == 0) {
continue;
}
pls::cs::Int32 num10;
if (num6 == SubForm::CONFIG_ORIENTATION()) {
if (i == 0) {
num10 = -1;
} else {
num10 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(app_)->GetOrientation();});
}
} else {
num10 = i;
if (SubForm::CONFIG_VALUE_REVERSE()[num6]) {
num10 = (num10 + 1) % 2;
}
}
if (i == 0) {
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = num8; pls::cs::Int32 cs_arg3 = num2 - 6; pls::cs::Int32 cs_arg4 = evenlyDivisionArea[1] + 2 - num8; pls::cs::Int32 cs_arg5 = num3; pls::cs::Int32 cs_arg6 = Tv(SubForm::CONFIG_VALUES()[num6], num10); pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(kairo::unity::surface::TouchOption::Create())->ExtendValues(0x20000 | num6); surface::GameView::AddTouch(cs_arg0, 6, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6, cs_arg7);}
} else {
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = evenlyDivisionArea[0] - 2; pls::cs::Int32 cs_arg3 = num2 - 6; pls::cs::Int32 cs_arg5 = num3; pls::cs::Int32 cs_arg6 = Tv(SubForm::CONFIG_VALUES()[num6], num10); pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(kairo::unity::surface::TouchOption::Create())->ExtendValues(0x20000 | num6); surface::GameView::AddTouch(cs_arg0, 6, cs_arg2, cs_arg3, 240, cs_arg5, cs_arg6, cs_arg7);}
}
}
}
++num6;
num2 += num3;
}
num2 = SubForm::GetBoxFooterY(array[6]);
if (select_ == SubForm::CONFIG_QUALITY()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(30, 30, 30);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg1 = array[7] + 15; require(g)->DrawString(literal(u"速度優先にすると一部の演出や"), cs_arg1, num2, 17); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg1 = array[7] + 15; require(g)->DrawString(literal(u"表示が削除されます"), cs_arg1, num2 + 18, 17); }());});
} else if (select_ == SubForm::CONFIG_SPEED()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(30, 30, 30);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg1 = array[7] + 15; require(g)->DrawString(literal(u"ゲームの動作速度を変更します"), cs_arg1, num2, 17); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(200, 0, 0);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg1 = array[7] + 15; require(g)->DrawString(literal(u"ｹﾞｰﾑをｸﾘｱすると変更できます"), cs_arg1, num2 + 18); }());});
} else if (select_ == SubForm::CONFIG_BGM() || select_ == SubForm::CONFIG_SE()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(30, 30, 30);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg1 = array[7] + 15; require(g)->DrawString(literal(u"ゲーム中のボリュームを"), cs_arg1, num2, 17); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg1 = array[7] + 15; require(g)->DrawString(literal(u"設定します"), cs_arg1, num2 + 18, 17); }());});
} else if (select_ == SubForm::CONFIG_ORIENTATION()) {
if (kl_cfg::Config::ADMOB_ENABLE()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(200, 0, 0);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg1 = array[7] + 15; require(g)->DrawString(literal(u"横画面モードは"), cs_arg1, num2, 17); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg1 = array[7] + 15; require(g)->DrawString(literal(u"正式版でご利用頂けます!!"), cs_arg1, num2 + 18, 17); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(30, 30, 30);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg1 = array[7] + 15; require(g)->DrawString(literal(u"本体の向きに合わせて"), cs_arg1, num2, 17); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg1 = array[7] + 15; require(g)->DrawString(literal(u"画面を回転するか設定します"), cs_arg1, num2 + 18, 17); }());});
}
}

}
}

// M:form.SubForm.DrawConfig_en(kairo.unity.ui.Graphics)
void SubForm::DrawConfig_en(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.DrawConfig_en(kairo.unity.ui.Graphics)",game);
{
kl_cfg::Config::ensure_initialized();

IntArray array = MyFormBase::DrawWindow(g, 210, 210, MyFormBase::LT(literal(u"設定")), 4, 4, 39, 80, 4);
pls::cs::Int32 num = array[7] + 10;
pls::cs::Int32 num2 = array[4] + 10;
pls::cs::Int32 num3 = 24;
pls::cs::Int32 num4 = num + 65;
pls::cs::Int32 num5 = array[5] - 15;
pls::cs::Int32 num6 = 0;
while (num6 < 6) {
pls::cs::Int32 num7 = 36;
if (num6 == SubForm::CONFIG_EN_BGM() || num6 == SubForm::CONFIG_EN_SE()) {
num7 = 54;
} else if (num6 == SubForm::CONFIG_EN_CURRENCY() || num6 == SubForm::CONFIG_EN_ORIENTATION()) {
num7 = 48;
}
if (select_ == num6) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(159, 189, 255);});
if (MyFormBase::Jp()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num - 1, num2 - 1, num7 + 2, 14.0f);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(num - 1, num2 - 1, 56.0f, 14.0f);});
}
}
pls::cs::Int32 num8 = num + 30;
surface::GameView::AddTouch(g, 6, -120, num2 - 6, 120 + num8, num3, 0x20000 | num6);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(30, 30, 30);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = SubForm::CONFIG_EN_NAMES()[num6]; require(g)->DrawString(cs_arg0, num, num2); }());});
pls::cs::Int32 num9 = this->GetTouchValue(SubForm::CONFIG_EN_VALUES()[num6], 0);
if (SubForm::CONFIG_EN_VALUE_REVERSE()[num6]) {
num9 = (num9 + 1) % 2;
}
if (num6 == SubForm::CONFIG_EN_BGM() || num6 == SubForm::CONFIG_EN_SE()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(30, 30, 30);}));});
kairo::unity::ui::Graphics::DrawString(require(g), pls::cs::cast_integral<pls::cs::Int64>(num9), num4 - 12, num2, 4);
surface::GameView::AddTouch(g, 21, num8, num2 - 6, num4 + 20 - num8, num3, 0x20000 | num6, require(kairo::unity::surface::TouchOption::Create())->ExtendValues(65552));
surface::GameView::AddTouch(g, 20, num5 - 20, num2 - 6, 240, num3, 0x20000 | num6, require(kairo::unity::surface::TouchOption::Create())->ExtendValues(65554));
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = num4 + 25; pls::cs::Int32 cs_arg3 = num2 - 6; pls::cs::Int32 cs_arg4 = num5 - num4 - 50; pls::cs::Int32 cs_arg5 = num3; pls::cs::Int32 cs_arg6 = SubForm::CONFIG_VALUES()[num6]; pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(require(kairo::unity::surface::TouchOption::Drag(num4 + 25, 0, num5 - num4 - 50, 0, 6, 0))->Flag(4))->ExtendValues(0x20000 | num6); surface::GameView::AddTouch(cs_arg0, 19, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6, cs_arg7);}
} else {
for (pls::cs::Int32 i = 0; i < SubForm::CONFIG_EN_VALUE_NAMES()[num6].length(); ++i) {
IntArray evenlyDivisionArea = require(apdat_)->GetEvenlyDivisionArea(num4, num5, 2, i, 2);
bool flag = false;
if (num6 == SubForm::CONFIG_EN_ORIENTATION()) {
if (i == 0 && num9 == -1) {
flag = true;
}
if (i == 1 && num9 != -1) {
flag = true;
}
} else if (num9 == i) {
flag = true;
}
if (flag) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(159, 189, 255);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg0 = ([&]() -> pls::cs::Int32 { auto cs_left = evenlyDivisionArea[0]; auto cs_right = (evenlyDivisionArea[1] - evenlyDivisionArea[0]) / 2; return cs_left + cs_right; }()) - 26 - 1; require(g)->FillRect(cs_arg0, num2 - 1, 54.0f, 14.0f); }());});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(30, 30, 30);});
if (num6 == SubForm::CONFIG_EN_SPEED() && i == 0 && require(require(apdat_)->sysSave_)->ints[9] == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(128, 128, 128);});
}
if (kl_cfg::Config::ADMOB_ENABLE() && num6 == SubForm::CONFIG_ORIENTATION() && i == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(128, 128, 128);});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = SubForm::CONFIG_EN_VALUE_NAMES()[num6][i]; pls::cs::Single cs_arg1 = ([&]() -> pls::cs::Int32 { auto cs_left = evenlyDivisionArea[0]; auto cs_right = (evenlyDivisionArea[1] - evenlyDivisionArea[0]) / 2; return cs_left + cs_right; }()); require(g)->DrawString(cs_arg0, cs_arg1, num2, 2); }());});
if (num6 == SubForm::CONFIG_EN_SPEED() && i == 0 && require(require(apdat_)->sysSave_)->ints[9] == 0) {
continue;
}
pls::cs::Int32 num10;
if (num6 == SubForm::CONFIG_EN_ORIENTATION()) {
if (i == 0) {
num10 = -1;
} else {
num10 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(app_)->GetOrientation();});
}
} else {
num10 = i;
if (SubForm::CONFIG_EN_VALUE_REVERSE()[num6]) {
num10 = (num10 + 1) % 2;
}
}
if (i == 0) {
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = num8; pls::cs::Int32 cs_arg3 = num2 - 6; pls::cs::Int32 cs_arg4 = evenlyDivisionArea[1] + 2 - num8; pls::cs::Int32 cs_arg5 = num3; pls::cs::Int32 cs_arg6 = Tv(SubForm::CONFIG_EN_VALUES()[num6], num10); pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(kairo::unity::surface::TouchOption::Create())->ExtendValues(0x20000 | num6); surface::GameView::AddTouch(cs_arg0, 6, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6, cs_arg7);}
} else {
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = evenlyDivisionArea[0] - 2; pls::cs::Int32 cs_arg3 = num2 - 6; pls::cs::Int32 cs_arg5 = num3; pls::cs::Int32 cs_arg6 = Tv(SubForm::CONFIG_EN_VALUES()[num6], num10); pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(kairo::unity::surface::TouchOption::Create())->ExtendValues(0x20000 | num6); surface::GameView::AddTouch(cs_arg0, 6, cs_arg2, cs_arg3, 240, cs_arg5, cs_arg6, cs_arg7);}
}
}
}
++num6;
num2 += num3;
}
num2 = SubForm::GetBoxFooterY(array[6]);
if (select_ == SubForm::CONFIG_EN_QUALITY()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(30, 30, 30);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg1 = array[7] + 15; require(g)->DrawString(literal(u"速度優先にすると一部の演出や"), cs_arg1, num2, 17); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg1 = array[7] + 15; require(g)->DrawString(literal(u"表示が削除されます"), cs_arg1, num2 + 18, 17); }());});
} else if (select_ == SubForm::CONFIG_EN_SPEED()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(30, 30, 30);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg1 = array[7] + 15; require(g)->DrawString(literal(u"ゲームの動作速度を変更します"), cs_arg1, num2, 17); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(200, 0, 0);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg1 = array[7] + 15; require(g)->DrawString(literal(u"ｹﾞｰﾑをｸﾘｱすると変更できます"), cs_arg1, num2 + 18); }());});
} else if (select_ == SubForm::CONFIG_EN_BGM() || select_ == SubForm::CONFIG_EN_SE()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(30, 30, 30);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg1 = array[7] + 15; require(g)->DrawString(literal(u"ゲーム中のボリュームを"), cs_arg1, num2, 17); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg1 = array[7] + 15; require(g)->DrawString(literal(u"設定します"), cs_arg1, num2 + 18, 17); }());});
} else if (select_ == SubForm::CONFIG_EN_CURRENCY()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(30, 30, 30);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg1 = array[7] + 15; require(g)->DrawString(literal(u"お金の表記を変更できます"), cs_arg1, num2, 17); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg1 = array[7] + 15; require(g)->DrawString(literal(u"\\100 = $1というレートです"), cs_arg1, num2 + 18, 17); }());});
} else if (select_ == SubForm::CONFIG_EN_ORIENTATION()) {
if (kl_cfg::Config::ADMOB_ENABLE()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(200, 0, 0);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg1 = array[7] + 15; require(g)->DrawString(literal(u"Landscape mode available"), cs_arg1, num2, 17); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg1 = array[7] + 15; require(g)->DrawString(literal(u"in the Full Version!"), cs_arg1, num2 + 18, 17); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(30, 30, 30);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg1 = array[7] + 15; require(g)->DrawString(literal(u"本体の向きに合わせて"), cs_arg1, num2, 17); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg1 = array[7] + 15; require(g)->DrawString(literal(u"画面を回転するか設定します"), cs_arg1, num2 + 18, 17); }());});
}
}

}
}

// M:form.SubForm.SetFontSize(kairo.unity.ui.Graphics,System.Int32)
void SubForm::SetFontSize(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 size) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.SetFontSize(kairo.unity.ui.Graphics,System.Int32)",game);
{
if (!(SubForm::En())) {
return;
}
{
pls::cs::Ref<pls::kairo::Font> font = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{});});
SubForm::fontSize() = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(font)->GetSize();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(font)->SetSize(size, true);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetFont(font);});
}
}

}

// M:form.SubForm.ResetFontSize(kairo.unity.ui.Graphics)
void SubForm::ResetFontSize(pls::cs::Ref<pls::kairo::Graphics> g) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.ResetFontSize(kairo.unity.ui.Graphics)",game);
{
if (!(SubForm::En())) {
return;
}
{
pls::cs::Ref<pls::kairo::Font> font = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{});});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(font)->SetSize(SubForm::fontSize(), true);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetFont(font);});
}
}

}

// M:form.SubForm.En
bool SubForm::En() {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.En",game);
{
return kairo::unity::util::Language::English();
}

}

// M:form.SubForm.Draw_btmMsg(kairo.unity.ui.Graphics,System.String,System.Int32)
void SubForm::Draw_btmMsg(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 dy) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Draw_btmMsg(kairo.unity.ui.Graphics,System.String,System.Int32)",game);
{
SubForm::Draw_btmMsg(g, str, dy, true, true);
}

}

// M:form.SubForm.Draw_btmMsg(kairo.unity.ui.Graphics,System.String,System.Int32,System.Boolean,System.Boolean)
void SubForm::Draw_btmMsg(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 dy,bool flgSelect,bool flgCursor) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Draw_btmMsg(kairo.unity.ui.Graphics,System.String,System.Int32,System.Boolean,System.Boolean)",game);
{
pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{});}))->StringWidth(str);});
pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
if (flgSelect) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_SELECT());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(120 - (num + 16) / 2, dy, num + 16, 16.0f);});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(str, 120.0f, dy + 2, 2);});
if (flgCursor) {
{ auto cs_receiver = require(require(instance)->resCom2_)->seb.get_Item(60); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(instance)->resCom2_)->img; require(cs_receiver)->Draw(g, 120 - (num + 16) / 2 - 4, dy + 9, cs_arg3, -1); }
}
}

}

// M:form.SubForm.Draw_btmMsg(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32)
void SubForm::Draw_btmMsg(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 dx,pls::cs::Int32 dy) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Draw_btmMsg(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32)",game);
{
SubForm::Draw_btmMsg(g, str, dx, dy, true, true);
}

}

// M:form.SubForm.Draw_btmMsg(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Boolean,System.Boolean)
void SubForm::Draw_btmMsg(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 dx,pls::cs::Int32 dy,bool flgSelect,bool flgCursor) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.Draw_btmMsg(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Boolean,System.Boolean)",game);
{
pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{});}))->StringWidth(str);});
pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
if (flgSelect) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_SELECT());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(dx - (num + 16) / 2, dy, num + 16, 16.0f);});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(SubForm::SC_WINDOW_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(str, dx, dy + 2, 2);});
if (flgCursor) {
{ auto cs_receiver = require(require(instance)->resCom2_)->seb.get_Item(60); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(instance)->resCom2_)->img; require(cs_receiver)->Draw(g, dx - (num + 16) / 2 - 4, dy + 9, cs_arg3, -1); }
}
}

}

// M:form.SubForm.GetHashCode
std::int32_t SubForm::GetHashCode() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.GetHashCode",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(pls::cs::static_pointer_cast<MyFormBase>(this));return require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}
}

// M:form.SubForm.GetStringLength(System.String)
pls::cs::Int32 SubForm::GetStringLength(pls::cs::String s) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.GetStringLength(System.String)",game);
{
pls::cs::Int32 num = 0;
for (pls::cs::Int32 i = 0; i < kl_lang::StringEx::Length(s); ++i) {
if (SubForm::IsSimpleChara(kl_lang::StringEx::CharAt(s, i))) {
num = (num + 1);
} else {
num = (num + 2);
}
}
return num;
}

}

// M:form.SubForm.IsSimpleChara(System.Char)
bool SubForm::IsSimpleChara(char16_t c) {
SubForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SubForm.IsSimpleChara(System.Char)",game);
{
return ((pls::cs::cast_integral<pls::cs::Int32>(c) < pls::cs::cast_integral<pls::cs::Int32>(char16_t(127))) && (pls::cs::cast_integral<pls::cs::Int32>(c) >= pls::cs::cast_integral<pls::cs::Int32>(u' '))) || ((pls::cs::cast_integral<pls::cs::Int32>(c) > pls::cs::cast_integral<pls::cs::Int32>(char16_t(65376))) && (pls::cs::cast_integral<pls::cs::Int32>(c) <= pls::cs::cast_integral<pls::cs::Int32>(char16_t(65439))));
}

}
} // namespace form
}
