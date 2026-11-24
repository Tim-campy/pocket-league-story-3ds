// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "data.BaseData.hpp"
#include "data.EventData.hpp"
#include "data.FanActData.hpp"
#include "data.FanBonusData.hpp"
#include "data.FormationData.hpp"
#include "data.LeagueData.hpp"
#include "data.MapchipMain.hpp"
#include "data.MapchipMatch.hpp"
#include "data.PlayerData.hpp"
#include "data.QuestMatchData.hpp"
#include "data.SponsorData.hpp"
#include "data.StadiumData.hpp"
#include "data.SupervisorData.hpp"
#include "data.TeamData.hpp"
#include "data.TenantData.hpp"
#include "data.TradeData.hpp"
#include "data.TrainingData.hpp"
#include "form.BootForm.hpp"
#include "form.FormManager.hpp"
#include "form.GameForm.hpp"
#include "form.MyFormBase.hpp"
#include "form.SoccerForm.hpp"
#include "form.SubForm.hpp"
#include "form.TitleForm.hpp"
#include "game.Camera.hpp"
#include "game.DelayEvent.hpp"
#include "game.GameUtil.hpp"
#include "game.Map.hpp"
#include "game.MapMain.hpp"
#include "game.Player.hpp"
#include "game.TPlayer.hpp"
#include "game.Tenant.hpp"
#include "game.UserData.hpp"
#include "generated/java.io.ByteArrayInputStream.hpp"
#include "generated/java.io.ByteArrayOutputStream.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.lang.JString.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/java.util.JCalendar.hpp"
#include "generated/java.util.JDate.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.io.ConnectionException.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.Encrypter.hpp"
#include "generated/kairo.unity.util.Language.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "generated/kairo.unity.util.Property.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "java.lang.JThread.hpp"
#include "kairo.unity.graph.Graph.hpp"
#include "kairo.unity.graphics.Rectangle.hpp"
#include "kairo.unity.graphics.RectangleF.hpp"
#include "kairo.unity.io.AssetReader.hpp"
#include "kairo.unity.io.Http.hpp"
#include "kairo.unity.io.ScratchPad.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "kairo.unity.surface.TouchOption.hpp"
#include "kairo.unity.ui.Balloon.hpp"
#include "kairo.unity.ui.Canvas.hpp"
#include "kairo.unity.ui.Dialog.hpp"
#include "kairo.unity.ui.Graphics.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "kairo.unity.ui.Seb.hpp"
#include "kairo.unity.ui.TextLayout.hpp"
#include "kairo.unity.ui.UIException.hpp"
#include "kairo.unity.util.Language.hpp"
#include "main.AppData.hpp"
#include "main.Main.hpp"
#include "surface.GamePad.hpp"
#include "surface.GameView.hpp"
#include "surface.SurfaceManager.hpp"
#include "generated/java.util.JTool_templates.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_java_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_unity_io = pls::generated::kairo::unity::io;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using BoolArray = pls::cs::Array<bool>;
using ByteArray = pls::cs::Array<std::uint8_t>;
using StringArray = pls::cs::Array<pls::cs::String>;
using StringArray2 = pls::cs::Array<pls::cs::Array<pls::cs::String>>;
using LongArray = pls::cs::Array<pls::cs::Int64>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;
using IntArray3 = pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>>;

namespace pls::game {
namespace main {

void AppData::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(frmBoot_, visitor);
    pls::cs::trace_value(frmTitle_, visitor);
    pls::cs::trace_value(frmSoccer_, visitor);
    pls::cs::trace_value(frmGame_, visitor);
    pls::cs::trace_value(resCom2_, visitor);
    pls::cs::trace_value(resHuman2_, visitor);
    pls::cs::trace_value(resHumanHead_, visitor);
    pls::cs::trace_value(resMapChip_, visitor);
    pls::cs::trace_value(resMapObject_, visitor);
    pls::cs::trace_value(resMapChipMain_, visitor);
    pls::cs::trace_value(resEvent_, visitor);
    pls::cs::trace_value(resSound_, visitor);
    pls::cs::trace_value(sysSave_, visitor);
    pls::cs::trace_value(save_, visitor);
    pls::cs::trace_value(popupMessages_, visitor);
    pls::cs::trace_value(popupScriptBuffer_, visitor);
    pls::cs::trace_value(newsTypes_, visitor);
    pls::cs::trace_value(newsTitles_, visitor);
    pls::cs::trace_value(newsTexts_, visitor);
    pls::cs::trace_value(resChip_, visitor);
    pls::cs::trace_value(resChipSeason_, visitor);
    pls::cs::trace_value(effect_, visitor);
    pls::cs::trace_value(manualTexts_, visitor);
    pls::cs::trace_value(tmpInt4_, visitor);
    pls::cs::trace_value(eventData_, visitor);
    pls::cs::trace_value(eventNum_, visitor);
    pls::cs::trace_value(delayEvents_, visitor);
    pls::cs::trace_value(eventMsgs_, visitor);
    pls::cs::trace_value(systemMsgs_, visitor);
    pls::cs::trace_value(characterSource_, visitor);
    pls::cs::trace_value(platform_, visitor);
    pls::cs::trace_value(gameObjectPool_, visitor);
    pls::cs::trace_value(zsortObjectCount_, visitor);
    pls::cs::trace_value(zsortObjects_, visitor);
    pls::cs::trace_value(screen_pos, visitor);
    pls::cs::trace_value(camera_pos, visitor);
    pls::cs::trace_value(camera, visitor);
    pls::cs::trace_value(map_, visitor);
    pls::cs::trace_value(mapMain_, visitor);
    pls::cs::trace_value(pData_, visitor);
    pls::cs::trace_value(tData_, visitor);
    pls::cs::trace_value(svisorData_, visitor);
    pls::cs::trace_value(formationData_, visitor);
    pls::cs::trace_value(mapchipMatch_, visitor);
    pls::cs::trace_value(mapchipMain_, visitor);
    pls::cs::trace_value(stadiumData_, visitor);
    pls::cs::trace_value(fanActData_, visitor);
    pls::cs::trace_value(sponsorData_, visitor);
    pls::cs::trace_value(fanBonus_, visitor);
    pls::cs::trace_value(qmData_, visitor);
    pls::cs::trace_value(tenantData_, visitor);
    pls::cs::trace_value(tradeData_, visitor);
    pls::cs::trace_value(trainingData_, visitor);
    pls::cs::trace_value(leagueData_, visitor);
    pls::cs::trace_value(ef_cpos, visitor);
    pls::cs::trace_value(rotatePoint_tmp, visitor);
    pls::cs::trace_value(imgOutline1_, visitor);
    pls::cs::trace_value(graOutline1_, visitor);
    pls::cs::trace_value(imgOutline2_, visitor);
    pls::cs::trace_value(graOutline2_, visitor);
    pls::cs::trace_value(drawCommand_tmp, visitor);
    pls::cs::trace_value(getEvenlyDivisionArea_tmp_, visitor);
    pls::cs::trace_value(drawPopupMessage_heights, visitor);
    pls::cs::trace_value(temp_str, visitor);
    pls::cs::trace_value(draw_helpMessage_tmp1, visitor);
    pls::cs::trace_value(debugLog_, visitor);
}

static IntArray AppData_APPLI_VERSION_RESOURCE_storage{};

static IntArray AppData_BGM_storage{};

static pls::cs::Ref<pls::kairo::Canvas> AppData_canvas__storage{};

static StringArray AppData_CGI_storage{};

static pls::cs::String AppData_CGI_COMMON_QUERY_storage{};

static pls::cs::Int32 AppData_currentSaveSlot__storage{};

static IntArray AppData_dateFileHead__storage{};

static pls::cs::Array<ByteArray> AppData_defSaveB__storage{};

static IntArray AppData_defSaveI__storage{};

static LongArray AppData_defSaveL__storage{};

static pls::cs::Array<pls::cs::Ref<kl_unity_util::Property>> AppData_defSaveP__storage{};

static StringArray AppData_defSaveS__storage{};

static pls::cs::Array<ByteArray> AppData_defSysSaveB__storage{};

static IntArray AppData_defSysSaveI__storage{};

static LongArray AppData_defSysSaveL__storage{};

static pls::cs::Array<pls::cs::Ref<kl_unity_util::Property>> AppData_defSysSaveP__storage{};

static StringArray AppData_defSysSaveS__storage{};

static IntArray2 AppData_DIRECT1_storage{};

static IntArray2 AppData_DIRECT2_storage{};

static IntArray2 AppData_DIRECT3_storage{};

static pls::cs::Int32 AppData_EFF_CHARGE_TIME_storage{};

static IntArray AppData_EFF_EXPUP_DY_storage{};

static IntArray AppData_EFF_EXPUP_TIME_storage{};

static IntArray AppData_EFF_MONEYUP_DY_storage{};

static IntArray AppData_EFF_MONEYUP_TIME_storage{};

static IntArray AppData_EFF_RPUP_DY_storage{};

static IntArray AppData_EFF_RPUP_TIME_storage{};

static pls::cs::Int32 AppData_EFF_SHOOT_TIME_storage{};

static pls::cs::Int32 AppData_EFF_TLVUP_TIME_storage{};

static IntArray AppData_EFF_TUP_DY_storage{};

static IntArray AppData_EFF_TUP_TIME_storage{};

static IntArray3 AppData_EFPOS_DATA_storage{};

static pls::cs::Int32 AppData_FLG_FUKIDASHI_DISP_storage{};

static pls::cs::Int32 AppData_FLG_NYUUKIN_storage{};

static pls::cs::Int32 AppData_FLG_SHOPPING_BAG_storage{};

static pls::cs::Int32 AppData_FRAME_TIME1_storage{};

static pls::cs::String AppData_HOST_storage{};

static pls::cs::Ref<AppData> AppData_instance__storage{};

static pls::cs::Int32 AppData_NUM_MOVESEARCH_storage{};

static StringArray AppData_resourceString_storage{};

static pls::cs::Int32 AppData_ROOPCNT_MOVESEARCH_storage{};

static StringArray2 AppData_RSFILENAMESS_storage{};

static IntArray AppData_SE_storage{};

static pls::cs::String AppData_SITE_URL_storage{};

static StringArray AppData_softLabels__storage{};

static StringArray2 AppData_SOUND_FILENAME_storage{};

static StringArray AppData_strDatFileName__storage{};

static StringArray AppData_talks__storage{};

static pls::cs::Int64 AppData_TIME_MOVESEARCH_storage{};

static pls::cs::Ref<game::UserData> AppData_udat__storage{};

static pls::cs::String AppData_URL_storage{};

static pls::cs::String AppData_URL_CGI_storage{};

static pls::cs::String AppData_URL_DAT_storage{};

static pls::cs::String AppData_VERSIONUP_URL_storage{};

static PLS_NOINLINE void cs_init_2ffa6f51468590ea_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(AppData_APPLI_VERSION_RESOURCE_storage, visitor);
        pls::cs::trace_value(AppData_BGM_storage, visitor);
        pls::cs::trace_value(AppData_canvas__storage, visitor);
        pls::cs::trace_value(AppData_CGI_storage, visitor);
        pls::cs::trace_value(AppData_CGI_COMMON_QUERY_storage, visitor);
        pls::cs::trace_value(AppData_currentSaveSlot__storage, visitor);
        pls::cs::trace_value(AppData_dateFileHead__storage, visitor);
        pls::cs::trace_value(AppData_defSaveB__storage, visitor);
        pls::cs::trace_value(AppData_defSaveI__storage, visitor);
        pls::cs::trace_value(AppData_defSaveL__storage, visitor);
        pls::cs::trace_value(AppData_defSaveP__storage, visitor);
        pls::cs::trace_value(AppData_defSaveS__storage, visitor);
        pls::cs::trace_value(AppData_defSysSaveB__storage, visitor);
        pls::cs::trace_value(AppData_defSysSaveI__storage, visitor);
        pls::cs::trace_value(AppData_defSysSaveL__storage, visitor);
        pls::cs::trace_value(AppData_defSysSaveP__storage, visitor);
        pls::cs::trace_value(AppData_defSysSaveS__storage, visitor);
        pls::cs::trace_value(AppData_DIRECT1_storage, visitor);
        pls::cs::trace_value(AppData_DIRECT2_storage, visitor);
        pls::cs::trace_value(AppData_DIRECT3_storage, visitor);
        pls::cs::trace_value(AppData_EFF_CHARGE_TIME_storage, visitor);
        pls::cs::trace_value(AppData_EFF_EXPUP_DY_storage, visitor);
        pls::cs::trace_value(AppData_EFF_EXPUP_TIME_storage, visitor);
        pls::cs::trace_value(AppData_EFF_MONEYUP_DY_storage, visitor);
        pls::cs::trace_value(AppData_EFF_MONEYUP_TIME_storage, visitor);
        pls::cs::trace_value(AppData_EFF_RPUP_DY_storage, visitor);
        pls::cs::trace_value(AppData_EFF_RPUP_TIME_storage, visitor);
        pls::cs::trace_value(AppData_EFF_SHOOT_TIME_storage, visitor);
        pls::cs::trace_value(AppData_EFF_TLVUP_TIME_storage, visitor);
        pls::cs::trace_value(AppData_EFF_TUP_DY_storage, visitor);
        pls::cs::trace_value(AppData_EFF_TUP_TIME_storage, visitor);
        pls::cs::trace_value(AppData_EFPOS_DATA_storage, visitor);
        pls::cs::trace_value(AppData_FLG_FUKIDASHI_DISP_storage, visitor);
        pls::cs::trace_value(AppData_FLG_NYUUKIN_storage, visitor);
        pls::cs::trace_value(AppData_FLG_SHOPPING_BAG_storage, visitor);
        pls::cs::trace_value(AppData_FRAME_TIME1_storage, visitor);
        pls::cs::trace_value(AppData_HOST_storage, visitor);
        pls::cs::trace_value(AppData_instance__storage, visitor);
        pls::cs::trace_value(AppData_NUM_MOVESEARCH_storage, visitor);
        pls::cs::trace_value(AppData_resourceString_storage, visitor);
        pls::cs::trace_value(AppData_ROOPCNT_MOVESEARCH_storage, visitor);
        pls::cs::trace_value(AppData_RSFILENAMESS_storage, visitor);
        pls::cs::trace_value(AppData_SE_storage, visitor);
        pls::cs::trace_value(AppData_SITE_URL_storage, visitor);
        pls::cs::trace_value(AppData_softLabels__storage, visitor);
        pls::cs::trace_value(AppData_SOUND_FILENAME_storage, visitor);
        pls::cs::trace_value(AppData_strDatFileName__storage, visitor);
        pls::cs::trace_value(AppData_talks__storage, visitor);
        pls::cs::trace_value(AppData_TIME_MOVESEARCH_storage, visitor);
        pls::cs::trace_value(AppData_udat__storage, visitor);
        pls::cs::trace_value(AppData_URL_storage, visitor);
        pls::cs::trace_value(AppData_URL_CGI_storage, visitor);
        pls::cs::trace_value(AppData_URL_DAT_storage, visitor);
        pls::cs::trace_value(AppData_VERSIONUP_URL_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("main.AppData", flag, []() {
        AppData_instance__storage = pls::cs::evaluate_type_initializer_field(
            "F:main.AppData.instance_", [&]() { return pls::cs::Ref<AppData>{}; });
        AppData_canvas__storage = pls::cs::evaluate_type_initializer_field(
            "F:main.AppData.canvas_", [&]() { return pls::cs::Ref<pls::kairo::Canvas>{}; });
        AppData_udat__storage = pls::cs::evaluate_type_initializer_field(
            "F:main.AppData.udat_", [&]() { return pls::cs::Ref<game::UserData>{}; });
        AppData_APPLI_VERSION_RESOURCE_storage = pls::cs::evaluate_type_initializer_field(
            "F:main.AppData.APPLI_VERSION_RESOURCE", [&]() { return IntArray::make(6); });
        AppData_CGI_COMMON_QUERY_storage =
            pls::cs::evaluate_type_initializer_field("F:main.AppData.CGI_COMMON_QUERY", [&]() {
                return ((kl_cfg::Config::APPLI_TYPE() == 0) ? literal(u"uid=NULLGWDOCOMO")
                                                            : literal(u"uid=1&sid=PL91"));
            });
        AppData_URL_storage = pls::cs::evaluate_type_initializer_field("F:main.AppData.URL",
                                                                       [&]() { return pls::cs::String{}; });
        AppData_HOST_storage = pls::cs::evaluate_type_initializer_field("F:main.AppData.HOST",
                                                                        [&]() { return pls::cs::String{}; });
        AppData_URL_CGI_storage = pls::cs::evaluate_type_initializer_field(
            "F:main.AppData.URL_CGI", [&]() { return pls::cs::String{}; });
        AppData_URL_DAT_storage = pls::cs::evaluate_type_initializer_field(
            "F:main.AppData.URL_DAT", [&]() { return pls::cs::String{}; });
        AppData_SITE_URL_storage = pls::cs::evaluate_type_initializer_field(
            "F:main.AppData.SITE_URL", [&]() { return pls::cs::String{}; });
        AppData_VERSIONUP_URL_storage = pls::cs::evaluate_type_initializer_field(
            "F:main.AppData.VERSIONUP_URL", [&]() { return pls::cs::String{}; });
        AppData_CGI_storage = pls::cs::evaluate_type_initializer_field("F:main.AppData.CGI", [&]() {
            return StringArray::from(
                {pls::cs::String::concat(
                     pls::cs::String::concat(
                         pls::cs::String::concat(
                             pls::cs::String::concat(pls::cs::String::concat(literal(u"regist.php?"),
                                                                             AppData::CGI_COMMON_QUERY()),
                                                     literal(u"&pid=")),
                             integer_string(55)),
                         literal(u"&ver=")),
                     integer_string(202)),
                 pls::cs::String::concat(
                     pls::cs::String::concat(
                         pls::cs::String::concat(
                             pls::cs::String::concat(pls::cs::String::concat(literal(u"ranking.php?"),
                                                                             AppData::CGI_COMMON_QUERY()),
                                                     literal(u"&pid=")),
                             integer_string(55)),
                         literal(u"&ver=")),
                     integer_string(202)),
                 pls::cs::String::concat(
                     pls::cs::String::concat(
                         pls::cs::String::concat(
                             pls::cs::String::concat(pls::cs::String::concat(literal(u"regist_score.php?"),
                                                                             AppData::CGI_COMMON_QUERY()),
                                                     literal(u"&pid=")),
                             integer_string(55)),
                         literal(u"&ver=")),
                     integer_string(202)),
                 pls::cs::String::concat(
                     pls::cs::String::concat(
                         pls::cs::String::concat(
                             pls::cs::String::concat(pls::cs::String::concat(literal(u"get_score.php?"),
                                                                             AppData::CGI_COMMON_QUERY()),
                                                     literal(u"&pid=")),
                             integer_string(55)),
                         literal(u"&ver=")),
                     integer_string(202))});
        });
        AppData_strDatFileName__storage =
            pls::cs::evaluate_type_initializer_field("F:main.AppData.strDatFileName_", [&]() {
                return StringArray::from({literal(u"data1"), literal(u"data2"), literal(u"data3"),
                                          literal(u"data4"), literal(u"data5"), literal(u"data6"),
                                          literal(u"data7"), literal(u"data8"), literal(u"data9")});
            });
        AppData_dateFileHead__storage = pls::cs::evaluate_type_initializer_field(
            "F:main.AppData.dateFileHead_", [&]() { return IntArray::from({0, 1, 2, 4, 5, 6, 7, 9, 10}); });
        AppData_RSFILENAMESS_storage =
            pls::cs::evaluate_type_initializer_field("F:main.AppData.RSFILENAMESS", [&]() {
                return StringArray2::from(
                    {StringArray::from({literal(u"system"), literal(u"save1"), literal(u"save2")}),
                     StringArray::from({literal(u"test"), literal(u"common2"), literal(u"map"),
                                        literal(u"event"), literal(u"image"), literal(u"object"),
                                        literal(u"xls"), literal(u"title"), literal(u"imageMain"),
                                        literal(u"human2"), literal(u"human_head"), literal(u"sound")})});
            });
        AppData_SOUND_FILENAME_storage =
            pls::cs::evaluate_type_initializer_field("F:main.AppData.SOUND_FILENAME", [&]() {
                return StringArray2::from(
                    {StringArray::from({literal(u"soccer_mainA.mld"), literal(u"soccer_formation.mld"),
                                        literal(u"soccer_gameA.mld"), literal(u"soccer_gameB.mld"),
                                        literal(u"soccer_title.mld")}),
                     StringArray::from({literal(u"se_06_decide.mld"),
                                        literal(u"soccer_crossbar.mld"),
                                        literal(u"soccer_kanseiA.mld"),
                                        literal(u"soccer_kickA-1.mld"),
                                        literal(u"soccer_kickA-2.mld"),
                                        literal(u"soccer_kickA-3.mld"),
                                        literal(u"soccer_sliding.mld"),
                                        literal(u"soccer_whistleA.mld"),
                                        literal(u"soccer_whistleB.mld"),
                                        literal(u"soccer_whistleC.mld"),
                                        literal(u"soccer_kickShoot.mld"),
                                        literal(u"soccer_kickShoot2.mld"),
                                        literal(u"soccer_yorokobi.mld"),
                                        literal(u"soccer_goal-mikata.mld"),
                                        literal(u"soccer_goal-teki.mld"),
                                        literal(u"soccer_fanfale.mld"),
                                        literal(u"soccer_kanashimi.mld"),
                                        literal(u"se_00_kiran1.mld"),
                                        literal(u"se_03_miss.mld"),
                                        literal(u"se_09_bu.mld"),
                                        literal(u"department_LevelUp.mld"),
                                        literal(u"se_04.mld"),
                                        literal(u"se_05.mld"),
                                        literal(u"se_01.mld")})});
            });
        AppData_BGM_storage = pls::cs::evaluate_type_initializer_field(
            "F:main.AppData.BGM", [&]() { return IntArray::from({0, 1, 2, 3, 4}); });
        AppData_SE_storage = pls::cs::evaluate_type_initializer_field("F:main.AppData.SE", [&]() {
            return IntArray::from(
                {5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26});
        });
        AppData_softLabels__storage =
            pls::cs::evaluate_type_initializer_field("F:main.AppData.softLabels_", [&]() {
                return StringArray::from({pls::cs::String(u""), literal(u"終了"), literal(u"戻る"),
                                          literal(u"セーブ"), literal(u"ﾒﾆｭｰ"), literal(u"ｻｲﾄ"),
                                          literal(u"切替"), literal(u"外す"), literal(u"説明"),
                                          literal(u"情報"), literal(u"撤去"), literal(u"ベンチ"),
                                          literal(u"編成"), literal(u"決定")});
            });
        AppData_defSysSaveP__storage =
            pls::cs::evaluate_type_initializer_field("F:main.AppData.defSysSaveP_", [&]() {
                return pls::cs::Array<pls::cs::Ref<kl_unity_util::Property>>::make(0);
            });
        AppData_defSysSaveI__storage =
            pls::cs::evaluate_type_initializer_field("F:main.AppData.defSysSaveI_", [&]() {
                return IntArray::from({202, 0, 0, 3, 3, 0, -1, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0});
            });
        AppData_defSysSaveL__storage = pls::cs::evaluate_type_initializer_field(
            "F:main.AppData.defSysSaveL_", [&]() { return LongArray::make(4); });
        AppData_defSysSaveS__storage =
            pls::cs::evaluate_type_initializer_field("F:main.AppData.defSysSaveS_", [&]() {
                return StringArray::from({literal(u"記録がありません"), literal(u"記録がありません"),
                                          pls::cs::String(u""), pls::cs::String(u""), literal(u"5000"),
                                          literal(u"5000"), pls::cs::String(u""), pls::cs::String(u""),
                                          literal(u"5000"), literal(u"5000"), pls::cs::String(u""),
                                          pls::cs::String(u"")});
            });
        AppData_defSysSaveB__storage =
            pls::cs::evaluate_type_initializer_field("F:main.AppData.defSysSaveB_", [&]() {
                return pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::JTool::MakeArray<pls::cs::Array<ByteArray>>(IntArray::from({6, 0}));
                });
            });
        AppData_defSaveP__storage =
            pls::cs::evaluate_type_initializer_field("F:main.AppData.defSaveP_", [&]() {
                return pls::cs::Array<pls::cs::Ref<kl_unity_util::Property>>::from(
                    {kl_unity_util::Property::create()});
            });
        AppData_defSaveI__storage =
            pls::cs::evaluate_type_initializer_field("F:main.AppData.defSaveI_", [&]() {
                return IntArray::from({0, 0, 3, 0, 0, 0, 0, 0, 255, -1, 0, 0, 1, 0, 0, 0, 0});
            });
        AppData_defSaveL__storage = pls::cs::evaluate_type_initializer_field(
            "F:main.AppData.defSaveL_", [&]() { return LongArray::from({5000ll, 0ll, 20ll}); });
        AppData_defSaveS__storage = pls::cs::evaluate_type_initializer_field(
            "F:main.AppData.defSaveS_", [&]() { return StringArray::from({pls::cs::String(u"")}); });
        AppData_defSaveB__storage =
            pls::cs::evaluate_type_initializer_field("F:main.AppData.defSaveB_", [&]() {
                return pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::JTool::MakeArray<pls::cs::Array<ByteArray>>(IntArray::from({17, 0}));
                });
            });
        AppData_FRAME_TIME1_storage =
            pls::cs::evaluate_type_initializer_field("F:main.AppData.FRAME_TIME1", [&]() { return 56; });
        AppData_EFPOS_DATA_storage = pls::cs::evaluate_type_initializer_field(
            "F:main.AppData.EFPOS_DATA", [&]() { return IntArray3::make(7); });
        AppData_EFF_SHOOT_TIME_storage =
            pls::cs::evaluate_type_initializer_field("F:main.AppData.EFF_SHOOT_TIME", [&]() { return 6; });
        AppData_EFF_CHARGE_TIME_storage =
            pls::cs::evaluate_type_initializer_field("F:main.AppData.EFF_CHARGE_TIME", [&]() { return 3; });
        AppData_EFF_TUP_TIME_storage = pls::cs::evaluate_type_initializer_field(
            "F:main.AppData.EFF_TUP_TIME", [&]() { return IntArray::from({6, 10}); });
        AppData_EFF_TLVUP_TIME_storage =
            pls::cs::evaluate_type_initializer_field("F:main.AppData.EFF_TLVUP_TIME", [&]() { return 30; });
        AppData_EFF_EXPUP_TIME_storage = pls::cs::evaluate_type_initializer_field(
            "F:main.AppData.EFF_EXPUP_TIME", [&]() { return IntArray::from({6, 20}); });
        AppData_EFF_RPUP_TIME_storage = pls::cs::evaluate_type_initializer_field(
            "F:main.AppData.EFF_RPUP_TIME", [&]() { return IntArray::from({6, 30}); });
        AppData_EFF_MONEYUP_TIME_storage = pls::cs::evaluate_type_initializer_field(
            "F:main.AppData.EFF_MONEYUP_TIME", [&]() { return IntArray::from({6, 20}); });
        AppData_EFF_TUP_DY_storage = pls::cs::evaluate_type_initializer_field(
            "F:main.AppData.EFF_TUP_DY", [&]() { return IntArray::from({-26, -36}); });
        AppData_EFF_EXPUP_DY_storage = pls::cs::evaluate_type_initializer_field(
            "F:main.AppData.EFF_EXPUP_DY", [&]() { return IntArray::from({-16, -26}); });
        AppData_EFF_RPUP_DY_storage = pls::cs::evaluate_type_initializer_field(
            "F:main.AppData.EFF_RPUP_DY", [&]() { return IntArray::from({-16, -26}); });
        AppData_EFF_MONEYUP_DY_storage = pls::cs::evaluate_type_initializer_field(
            "F:main.AppData.EFF_MONEYUP_DY", [&]() { return IntArray::from({-16, -26}); });
        AppData_DIRECT1_storage = pls::cs::evaluate_type_initializer_field("F:main.AppData.DIRECT1", [&]() {
            return IntArray2::from({IntArray::from({0, -1}), IntArray::from({1, 0}), IntArray::from({0, 1}),
                                    IntArray::from({-1, 0})});
        });
        AppData_DIRECT2_storage = pls::cs::evaluate_type_initializer_field("F:main.AppData.DIRECT2", [&]() {
            return IntArray2::from({IntArray::from({1, 0}), IntArray::from({0, 1}), IntArray::from({-1, 0}),
                                    IntArray::from({0, -1})});
        });
        AppData_DIRECT3_storage = pls::cs::evaluate_type_initializer_field("F:main.AppData.DIRECT3", [&]() {
            return IntArray2::from({IntArray::from({0, 1}), IntArray::from({0, -1}), IntArray::from({1, 0}),
                                    IntArray::from({-1, 0})});
        });
        AppData_FLG_FUKIDASHI_DISP_storage = pls::cs::evaluate_type_initializer_field(
            "F:main.AppData.FLG_FUKIDASHI_DISP", [&]() { return 1; });
        AppData_FLG_NYUUKIN_storage =
            pls::cs::evaluate_type_initializer_field("F:main.AppData.FLG_NYUUKIN", [&]() { return 1; });
        AppData_FLG_SHOPPING_BAG_storage =
            pls::cs::evaluate_type_initializer_field("F:main.AppData.FLG_SHOPPING_BAG", [&]() { return 1; });
        AppData_NUM_MOVESEARCH_storage =
            pls::cs::evaluate_type_initializer_field("F:main.AppData.NUM_MOVESEARCH", [&]() { return 0; });
        AppData_TIME_MOVESEARCH_storage =
            pls::cs::evaluate_type_initializer_field("F:main.AppData.TIME_MOVESEARCH", [&]() { return 0ll; });
        AppData_ROOPCNT_MOVESEARCH_storage = pls::cs::evaluate_type_initializer_field(
            "F:main.AppData.ROOPCNT_MOVESEARCH", [&]() { return 0; });
    });
}

void AppData::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_2ffa6f51468590ea_slow(flag);
}

IntArray& AppData::APPLI_VERSION_RESOURCE() {
    AppData::ensure_initialized();
    return AppData_APPLI_VERSION_RESOURCE_storage;
}

IntArray& AppData::BGM() {
    AppData::ensure_initialized();
    return AppData_BGM_storage;
}

pls::cs::Ref<pls::kairo::Canvas>& AppData::canvas_() {
    AppData::ensure_initialized();
    return AppData_canvas__storage;
}

StringArray& AppData::CGI() {
    AppData::ensure_initialized();
    return AppData_CGI_storage;
}

pls::cs::String& AppData::CGI_COMMON_QUERY() {
    AppData::ensure_initialized();
    return AppData_CGI_COMMON_QUERY_storage;
}

pls::cs::Int32& AppData::currentSaveSlot_() {
    AppData::ensure_initialized();
    return AppData_currentSaveSlot__storage;
}

IntArray& AppData::dateFileHead_() {
    AppData::ensure_initialized();
    return AppData_dateFileHead__storage;
}

pls::cs::Array<ByteArray>& AppData::defSaveB_() {
    AppData::ensure_initialized();
    return AppData_defSaveB__storage;
}

IntArray& AppData::defSaveI_() {
    AppData::ensure_initialized();
    return AppData_defSaveI__storage;
}

LongArray& AppData::defSaveL_() {
    AppData::ensure_initialized();
    return AppData_defSaveL__storage;
}

pls::cs::Array<pls::cs::Ref<kl_unity_util::Property>>& AppData::defSaveP_() {
    AppData::ensure_initialized();
    return AppData_defSaveP__storage;
}

StringArray& AppData::defSaveS_() {
    AppData::ensure_initialized();
    return AppData_defSaveS__storage;
}

pls::cs::Array<ByteArray>& AppData::defSysSaveB_() {
    AppData::ensure_initialized();
    return AppData_defSysSaveB__storage;
}

IntArray& AppData::defSysSaveI_() {
    AppData::ensure_initialized();
    return AppData_defSysSaveI__storage;
}

LongArray& AppData::defSysSaveL_() {
    AppData::ensure_initialized();
    return AppData_defSysSaveL__storage;
}

pls::cs::Array<pls::cs::Ref<kl_unity_util::Property>>& AppData::defSysSaveP_() {
    AppData::ensure_initialized();
    return AppData_defSysSaveP__storage;
}

StringArray& AppData::defSysSaveS_() {
    AppData::ensure_initialized();
    return AppData_defSysSaveS__storage;
}

IntArray2& AppData::DIRECT1() {
    AppData::ensure_initialized();
    return AppData_DIRECT1_storage;
}

IntArray2& AppData::DIRECT2() {
    AppData::ensure_initialized();
    return AppData_DIRECT2_storage;
}

IntArray2& AppData::DIRECT3() {
    AppData::ensure_initialized();
    return AppData_DIRECT3_storage;
}

pls::cs::Int32& AppData::EFF_CHARGE_TIME() {
    AppData::ensure_initialized();
    return AppData_EFF_CHARGE_TIME_storage;
}

IntArray& AppData::EFF_EXPUP_DY() {
    AppData::ensure_initialized();
    return AppData_EFF_EXPUP_DY_storage;
}

IntArray& AppData::EFF_EXPUP_TIME() {
    AppData::ensure_initialized();
    return AppData_EFF_EXPUP_TIME_storage;
}

IntArray& AppData::EFF_MONEYUP_DY() {
    AppData::ensure_initialized();
    return AppData_EFF_MONEYUP_DY_storage;
}

IntArray& AppData::EFF_MONEYUP_TIME() {
    AppData::ensure_initialized();
    return AppData_EFF_MONEYUP_TIME_storage;
}

IntArray& AppData::EFF_RPUP_DY() {
    AppData::ensure_initialized();
    return AppData_EFF_RPUP_DY_storage;
}

IntArray& AppData::EFF_RPUP_TIME() {
    AppData::ensure_initialized();
    return AppData_EFF_RPUP_TIME_storage;
}

pls::cs::Int32& AppData::EFF_SHOOT_TIME() {
    AppData::ensure_initialized();
    return AppData_EFF_SHOOT_TIME_storage;
}

pls::cs::Int32& AppData::EFF_TLVUP_TIME() {
    AppData::ensure_initialized();
    return AppData_EFF_TLVUP_TIME_storage;
}

IntArray& AppData::EFF_TUP_DY() {
    AppData::ensure_initialized();
    return AppData_EFF_TUP_DY_storage;
}

IntArray& AppData::EFF_TUP_TIME() {
    AppData::ensure_initialized();
    return AppData_EFF_TUP_TIME_storage;
}

IntArray3& AppData::EFPOS_DATA() {
    AppData::ensure_initialized();
    return AppData_EFPOS_DATA_storage;
}

pls::cs::Int32& AppData::FLG_FUKIDASHI_DISP() {
    AppData::ensure_initialized();
    return AppData_FLG_FUKIDASHI_DISP_storage;
}

pls::cs::Int32& AppData::FLG_NYUUKIN() {
    AppData::ensure_initialized();
    return AppData_FLG_NYUUKIN_storage;
}

pls::cs::Int32& AppData::FLG_SHOPPING_BAG() {
    AppData::ensure_initialized();
    return AppData_FLG_SHOPPING_BAG_storage;
}

pls::cs::Int32& AppData::FRAME_TIME1() {
    AppData::ensure_initialized();
    return AppData_FRAME_TIME1_storage;
}

pls::cs::String& AppData::HOST() {
    AppData::ensure_initialized();
    return AppData_HOST_storage;
}

pls::cs::Ref<AppData>& AppData::instance_() {
    AppData::ensure_initialized();
    return AppData_instance__storage;
}

pls::cs::Int32& AppData::NUM_MOVESEARCH() {
    AppData::ensure_initialized();
    return AppData_NUM_MOVESEARCH_storage;
}

StringArray& AppData::resourceString() {
    AppData::ensure_initialized();
    return AppData_resourceString_storage;
}

pls::cs::Int32& AppData::ROOPCNT_MOVESEARCH() {
    AppData::ensure_initialized();
    return AppData_ROOPCNT_MOVESEARCH_storage;
}

StringArray2& AppData::RSFILENAMESS() {
    AppData::ensure_initialized();
    return AppData_RSFILENAMESS_storage;
}

IntArray& AppData::SE() {
    AppData::ensure_initialized();
    return AppData_SE_storage;
}

pls::cs::String& AppData::SITE_URL() {
    AppData::ensure_initialized();
    return AppData_SITE_URL_storage;
}

StringArray& AppData::softLabels_() {
    AppData::ensure_initialized();
    return AppData_softLabels__storage;
}

StringArray2& AppData::SOUND_FILENAME() {
    AppData::ensure_initialized();
    return AppData_SOUND_FILENAME_storage;
}

StringArray& AppData::strDatFileName_() {
    AppData::ensure_initialized();
    return AppData_strDatFileName__storage;
}

StringArray& AppData::talks_() {
    AppData::ensure_initialized();
    return AppData_talks__storage;
}

pls::cs::Int64& AppData::TIME_MOVESEARCH() {
    AppData::ensure_initialized();
    return AppData_TIME_MOVESEARCH_storage;
}

pls::cs::Ref<game::UserData>& AppData::udat_() {
    AppData::ensure_initialized();
    return AppData_udat__storage;
}

pls::cs::String& AppData::URL() {
    AppData::ensure_initialized();
    return AppData_URL_storage;
}

pls::cs::String& AppData::URL_CGI() {
    AppData::ensure_initialized();
    return AppData_URL_CGI_storage;
}

pls::cs::String& AppData::URL_DAT() {
    AppData::ensure_initialized();
    return AppData_URL_DAT_storage;
}

pls::cs::String& AppData::VERSIONUP_URL() {
    AppData::ensure_initialized();
    return AppData_VERSIONUP_URL_storage;
}

void AppData::create_init(pls::cs::Ref<AppData> self) {
    AppData::ensure_initialized();
    self->popupMessages_ = kl_java_util::Vector::create();
    self->effect_ = kl_java_util::Vector::create();
    self->tmpInt4_ = IntArray::make(4);
    self->eventData_ = pls::cs::Array<pls::cs::Ref<data::EventData>>::make(0);
    self->scriptArgCharacter_ = -1;
    self->gameObjectPool_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
        return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({768, 10}));
    });
    self->zsortObjectCount_ = ByteArray::make(960);
    self->zsortObjects_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
        return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({960, 30}));
    });
    self->screen_pos = IntArray::make(2);
    self->camera_pos = IntArray::make(2);
    self->ef_cpos = IntArray::make(2);
    self->rotatePoint_tmp = IntArray::make(2);
    self->drawCommand_tmp = IntArray::make(4);
    self->getEvenlyDivisionArea_tmp_ = IntArray::make(2);
    self->drawPopupMessage_heights = IntArray::make(100);
    self->temp_str = literal(u"１２３４５６７８");
    self->draw_helpMessage_tmp1 = IntArray::make(0);
    self->debugLog_ = kl_java_util::Vector::create();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.#ctor", game);
    {
    }
}

// M:main.AppData.#ctor
pls::cs::Ref<AppData> AppData::create() {
    AppData::ensure_initialized();
    auto self = pls::cs::make_ref<AppData>();
    AppData::create_init(self);
    return self;
}

// M:main.AppData.SetNowStoreIndex(System.Int32)
void AppData::SetNowStoreIndex(pls::cs::Int32 nowStore_index) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.SetNowStoreIndex(System.Int32)", game);
    {
        NOWSTORE_INDEX = nowStore_index;
    }
}

// M:main.AppData.GetNowStoreIndex
pls::cs::Int32 AppData::GetNowStoreIndex() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.GetNowStoreIndex", game);
    {
        return NOWSTORE_INDEX;
    }
}

// M:main.AppData.GetInstance
pls::cs::Ref<AppData> AppData::GetInstance() {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.GetInstance", game);
    {
        if (is_null(AppData::instance_())) {
            AppData::instance_() = AppData::create();
            require(AppData::instance_())->Init();
        }
        return AppData::instance_();
    }
}

// M:main.AppData.Init
void AppData::Init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.Init", game);
    {
        kl_cfg::Config::ensure_initialized();

        AppData::canvas_() =
            pls::diagnostic::api_call([&]() -> decltype(auto) { return pls::kairo::Canvas::GetInstance(); });
        AppData::udat_() = game::UserData::GetInstance();
        platform_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return pls::kairo::IApplication::GetProperty(literal(u"microedition.platform"));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_cfg::Config::Init(pls::diagnostic::api_call([&]() -> decltype(auto) {
                return pls::kairo::IApplication::GetProperty(literal(u"MIDlet-Jar-URL"));
            }));
        });
        try {
            if (!pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return pls::kairo::RecordStore::Setup(); })) {
                pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return pls::kairo::RecordStore::CreateRecordStore(); });
            }
        } catch (const pls::cs::Exception& cs_caught_3) {
            auto t = pls::cs::capture_exception(cs_caught_3);
            {
                pls::diagnostic::api_call([&]() -> decltype(auto) { return kl_unity_util::Log::Info(t); });
            }
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return pls::kairo::RecordStore::SetResourceFiles(AppData::RSFILENAMESS()[1]);
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return pls::kairo::Storage::Setup(2, 8, literal(u"kairosoft/onsen"));
        });
        IntArray array =
            IntArray::from({-1387743643, 321849466, -380916995, 1114766278, 1209944503, 138008561, -893766998,
                            -1242421477, -1230126924, 626883230, 1684377624});
        ByteArray array2 = ByteArray::make(pls::cs::Int32(array.length()) * 4);
        for (pls::cs::Int32 i = 0; i < array2.length(); ++i) {
            array2[i] = pls::cs::cast_integral<std::uint8_t>(((array[i / 4] >> (i % 4 * 8)) & 0xFF));
        }
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::Encrypter::SetEncryptionKey(array2); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return pls::kairo::RecordStore::PreferencesToFile(); });
        if (kl_cfg::Config::DEBUG() && !kl_cfg::Config::PTW()) {
            kairo::unity::io::AssetReader::SetSecurity(LongArray{}, true);
        } else {
            LongArray crcTable = LongArray::from(
                {580282563ll,  3896006224ll, 1416911673ll, 3042983061ll, 3698152071ll, 1699866191ll,
                 529229099ll,  3024621896ll, 491867833ll,  2309839040ll, 3418722154ll, 1915009444ll,
                 2928711961ll, 1795527151ll, 1348013988ll, 534896488ll,  199728330ll,  1032406477ll,
                 1673000315ll, 2194497168ll, 1766122277ll, 3102284349ll, 1971932774ll, 505776908ll,
                 2612373199ll, 117867316ll,  3309258413ll, 2511525444ll});
            kairo::unity::io::AssetReader::SetSecurity(crcTable, true);
        }
        surface::SurfaceManager::Setup();
        pls::cs::Ref<pls::kairo::Image> image = pls::cs::Ref<pls::kairo::Image>{};
        pls::cs::Ref<pls::kairo::Graphics> graphics = pls::cs::Ref<pls::kairo::Graphics>{};
        pls::cs::run_finally(
            [&]() {
                {
                    image = pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return pls::kairo::Image::CreateImage(4, 4, static_cast<pls::kairo::Image::Format>(3),
                                                              static_cast<pls::kairo::Image::Filter>(-1));
                    });
                    graphics = pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(image)->GetGraphics(); });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(graphics)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0);
                        }));
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(graphics)->FillRect(0.0f, 0.0f, 4.0f, 4.0f);
                    });
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(graphics)->SetRenderMode(1, 128, 128); });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(graphics)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);
                        }));
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(graphics)->FillRect(0.0f, 0.0f, 4.0f, 4.0f);
                    });
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(graphics)->SetRenderMode(0, 255, 0); });
                    alphaRectPossible_ = false;
                }
            },
            [&]() {
                if (!is_null(graphics)) {
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(graphics)->Dispose(false); });
                }
                if (!is_null(image)) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) { return require(image)->Dispose(); });
                }
            });
        frmBoot_ = form::BootForm::create();
        frmTitle_ = form::TitleForm::create();
        frmSoccer_ = form::SoccerForm::create();
        frmGame_ = form::GameForm::create();
        camera = game::Camera::GetInstance();
    }
}

// M:main.AppData.PhpDlFile(System.String,System.String)
pls::cs::Array<ByteArray> AppData::PhpDlFile(pls::cs::String dir, pls::cs::String file) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.PhpDlFile(System.String,System.String)", game);
    {
        kl_cfg::Config::ensure_initialized();

        pls::cs::String url = pls::cs::String::concat(
            pls::cs::String::concat(([&]() {
                                        auto cs_left = kl_cfg::Config::URL_DATA();
                                        auto cs_right =
                                            ((is_null(dir))
                                                 ? (pls::cs::String(u""))
                                                 : ((pls::cs::String::concat(dir, literal(u"/")))));
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }()),
                                    file),
            literal(u".dat"));
        return kairo::unity::io::Http::Connect(url, ByteArray{}, false, true);
    }
}

// M:main.AppData.CgiRegist(System.String,System.String)
ByteArray AppData::CgiRegist(pls::cs::String cm, pls::cs::String r) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.CgiRegist(System.String,System.String)", game);
    {
        return pls::services::managed::register_local();
    }
}

// M:main.AppData.CgiRegistURL(System.String,System.String)
pls::cs::String AppData::CgiRegistURL(pls::cs::String cm, pls::cs::String r) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.CgiRegistURL(System.String,System.String)", game);
    {
        kl_cfg::Config::ensure_initialized();

        cm = AppData::MakeQuery(literal(u"&cm="), cm);
        r = AppData::MakeQuery(literal(u"&r="), r);
        return pls::cs::String::concat(
            pls::cs::String::concat(
                pls::cs::String::concat(
                    pls::cs::String::concat(kl_cfg::Config::URL_REGIST(), literal(u"&ver=")),
                    integer_string(202)),
                cm),
            r);
    }
}

// M:main.AppData.CgiRegistScore(System.String,System.String,System.String)
ByteArray AppData::CgiRegistScore(pls::cs::String m, pls::cs::String s, pls::cs::String r) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:main.AppData.CgiRegistScore(System.String,System.String,System.String)", game);
    {
        pls::cs::String url = CgiRegistScoreURL(m, s, r);
        return kairo::unity::io::Http::Connect(url, ByteArray{}, false);
    }
}

// M:main.AppData.CgiRegistScoreURL(System.String,System.String,System.String)
pls::cs::String AppData::CgiRegistScoreURL(pls::cs::String m, pls::cs::String s, pls::cs::String r) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:main.AppData.CgiRegistScoreURL(System.String,System.String,System.String)", game);
    {
        kl_cfg::Config::ensure_initialized();

        m = AppData::MakeQuery(literal(u"&m="), m);
        s = AppData::MakeQuery(literal(u"&s="), s);
        r = AppData::MakeQuery(literal(u"&r="), r);
        return pls::cs::String::concat(
            pls::cs::String::concat(
                pls::cs::String::concat(
                    pls::cs::String::concat(
                        pls::cs::String::concat(kl_cfg::Config::URL_REGIST_SCORE(), literal(u"&ver=")),
                        integer_string(202)),
                    m),
                s),
            r);
    }
}

// M:main.AppData.CgiGetScore(System.String)
ByteArray AppData::CgiGetScore(pls::cs::String m) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.CgiGetScore(System.String)", game);
    {
        pls::cs::String url = CgiGetScoreURL(m);
        return kairo::unity::io::Http::Connect(url, ByteArray{}, false);
    }
}

// M:main.AppData.CgiGetScoreURL(System.String)
pls::cs::String AppData::CgiGetScoreURL(pls::cs::String m) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.CgiGetScoreURL(System.String)", game);
    {
        kl_cfg::Config::ensure_initialized();

        m = AppData::MakeQuery(literal(u"&m="), m);
        return pls::cs::String::concat(
            pls::cs::String::concat(
                pls::cs::String::concat(kl_cfg::Config::URL_GET_SCORE(), literal(u"&ver=")),
                integer_string(202)),
            m);
    }
}

// M:main.AppData.CgiRanking(System.String,System.String,System.String)
ByteArray AppData::CgiRanking(pls::cs::String m, pls::cs::String r, pls::cs::String p) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:main.AppData.CgiRanking(System.String,System.String,System.String)", game);
    {
        pls::cs::String url = CgiRankingURL(m, r, p);
        return kairo::unity::io::Http::Connect(url, ByteArray{}, false);
    }
}

// M:main.AppData.CgiRankingURL(System.String,System.String,System.String)
pls::cs::String AppData::CgiRankingURL(pls::cs::String m, pls::cs::String r, pls::cs::String p) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:main.AppData.CgiRankingURL(System.String,System.String,System.String)", game);
    {
        kl_cfg::Config::ensure_initialized();

        m = AppData::MakeQuery(literal(u"&m="), m);
        r = AppData::MakeQuery(literal(u"&r="), r);
        p = AppData::MakeQuery(literal(u"&p="), p);
        return pls::cs::String::concat(
            pls::cs::String::concat(
                pls::cs::String::concat(
                    pls::cs::String::concat(
                        pls::cs::String::concat(kl_cfg::Config::URL_RANKING(), literal(u"&ver=")),
                        integer_string(202)),
                    m),
                r),
            p);
    }
}

// M:main.AppData.MakeQuery(System.String,System.String)
pls::cs::String AppData::MakeQuery(pls::cs::String query, pls::cs::String param) {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.MakeQuery(System.String,System.String)", game);
    {
        if (is_null(param)) {
            return pls::cs::String(u"");
        }
        return pls::cs::String::concat(query, param);
    }
}

// M:main.AppData.IsPushSoftLabel(System.Int32)
bool AppData::IsPushSoftLabel(pls::cs::Int32 softlabel) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.IsPushSoftLabel(System.Int32)", game);
    {
        return IsPushSoftLabel(softlabel, 0);
    }
}

// M:main.AppData.IsPushStateSoftLabel(System.Int32)
bool AppData::IsPushStateSoftLabel(pls::cs::Int32 softlabel) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.IsPushStateSoftLabel(System.Int32)", game);
    {
        pls::cs::String softLabelL = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(AppData::canvas_())->GetSoftLabelL(); });
        pls::cs::String softLabelR = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(AppData::canvas_())->GetSoftLabelR(); });
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return string_equals(softLabelL, AppData::softLabels_()[softlabel]);
            }) &&
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(AppData::canvas_())->CheckKeyState(2097152); })) {
            return true;
        }
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return string_equals(softLabelR, AppData::softLabels_()[softlabel]);
            }) &&
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(AppData::canvas_())->CheckKeyState(4194304); })) {
            return true;
        }
        return false;
    }
}

// M:main.AppData.IsPushSoftLabel(System.Int32,System.Int32)
bool AppData::IsPushSoftLabel(pls::cs::Int32 softlabel, pls::cs::Int32 key) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.IsPushSoftLabel(System.Int32,System.Int32)", game);
    {
        pls::cs::String softLabelL = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(AppData::canvas_())->GetSoftLabelL(); });
        pls::cs::String softLabelR = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(AppData::canvas_())->GetSoftLabelR(); });
        if ((pls::diagnostic::api_call([&]() -> decltype(auto) {
                 return string_equals(softLabelL, AppData::softLabels_()[softlabel]);
             }) &&
             pls::diagnostic::api_call(
                 [&]() -> decltype(auto) { return require(AppData::canvas_())->CheckKeyPulse(2097152); })) ||
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(AppData::canvas_())->CheckKeyPulse(key); })) {
            return true;
        }
        if ((pls::diagnostic::api_call([&]() -> decltype(auto) {
                 return string_equals(softLabelR, AppData::softLabels_()[softlabel]);
             }) &&
             pls::diagnostic::api_call(
                 [&]() -> decltype(auto) { return require(AppData::canvas_())->CheckKeyPulse(4194304); })) ||
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(AppData::canvas_())->CheckKeyPulse(key); })) {
            return true;
        }
        return false;
    }
}

// M:main.AppData.Clamp(System.Int32,System.Int32,System.Int32)
pls::cs::Int32 AppData::Clamp(pls::cs::Int32 val, pls::cs::Int32 min_, pls::cs::Int32 max_) {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.Clamp(System.Int32,System.Int32,System.Int32)", game);
    {
        if (val > max_) {
            val = max_;
        }
        if (val < min_) {
            val = min_;
        }
        return val;
    }
}

// M:main.AppData.Clamp(System.Single,System.Single,System.Single)
pls::cs::Single AppData::ClampFloat(pls::cs::Single val, pls::cs::Single min_, pls::cs::Single max_) {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.Clamp(System.Single,System.Single,System.Single)",
                     game);
    {
        if (val > max_) {
            val = max_;
        }
        if (val < min_) {
            val = min_;
        }
        return val;
    }
}

// M:main.AppData.Clamp(System.Int64,System.Int64,System.Int64)
pls::cs::Int64 AppData::ClampLong(pls::cs::Int64 val, pls::cs::Int64 min_, pls::cs::Int64 max_) {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.Clamp(System.Int64,System.Int64,System.Int64)", game);
    {
        if (val > max_) {
            val = max_;
        }
        if (val < min_) {
            val = min_;
        }
        return val;
    }
}

// M:main.AppData.ClampMin(System.Int32,System.Int32)
pls::cs::Int32 AppData::ClampMin(pls::cs::Int32 val, pls::cs::Int32 min_) {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.ClampMin(System.Int32,System.Int32)", game);
    {
        if (val < min_) {
            return min_;
        }
        return val;
    }
}

// M:main.AppData.ClampMax(System.Int32,System.Int32)
pls::cs::Int32 AppData::ClampMax(pls::cs::Int32 val, pls::cs::Int32 max_) {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.ClampMax(System.Int32,System.Int32)", game);
    {
        if (val > max_) {
            return max_;
        }
        return val;
    }
}

// M:main.AppData.ClampMin(System.Int64,System.Int64)
pls::cs::Int64 AppData::ClampMinLong(pls::cs::Int64 val, pls::cs::Int64 min_) {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.ClampMin(System.Int64,System.Int64)", game);
    {
        if (val < min_) {
            return min_;
        }
        return val;
    }
}

// M:main.AppData.ClampMax(System.Int64,System.Int64)
pls::cs::Int64 AppData::ClampMaxLong(pls::cs::Int64 val, pls::cs::Int64 max_) {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.ClampMax(System.Int64,System.Int64)", game);
    {
        if (val > max_) {
            return max_;
        }
        return val;
    }
}

// M:main.AppData.Max(System.Int32,System.Int32)
pls::cs::Int32 AppData::Max(pls::cs::Int32 v1, pls::cs::Int32 v2) {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.Max(System.Int32,System.Int32)", game);
    {
        if (v1 < v2) {
            return v2;
        }
        return v1;
    }
}

// M:main.AppData.Min(System.Int32,System.Int32)
pls::cs::Int32 AppData::Min(pls::cs::Int32 v1, pls::cs::Int32 v2) {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.Min(System.Int32,System.Int32)", game);
    {
        if (v1 < v2) {
            return v1;
        }
        return v2;
    }
}

// M:main.AppData.InitSystemSaveData
void AppData::InitSystemSaveData() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.InitSystemSaveData", game);
    {
        kl_cfg::Config::ensure_initialized();

        sysSave_ = kl_unity_util::Property::create(AppData::defSysSaveP_(), AppData::defSysSaveI_(),
                                                   AppData::defSysSaveL_(), AppData::defSysSaveS_(),
                                                   AppData::defSysSaveB_());
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::Language::Japanese(); })) {
            require(sysSave_)->ints[14] = 0;
        } else {
            require(sysSave_)->ints[14] = 1;
        }
        if (kl_cfg::Config::MUTE_SE() && pls::diagnostic::api_call([&]() -> decltype(auto) {
                return pls::cs::culture_starts_with(platform_, literal(u"ap"));
            })) {
            require(sysSave_)->ints[4] = 0;
        }
    }
}

// M:main.AppData.LoadSystem
bool AppData::LoadSystem() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.LoadSystem", game);
    {
        kl_cfg::Config::ensure_initialized();

        pls::cs::Ref<pls::kairo::RecordStore> recordStore = pls::cs::Ref<pls::kairo::RecordStore>{};
        {
            auto cs_flow_61 = pls::cs::run_finally(
                [&]() -> pls::cs::Flow<bool> {
                    {
                        recordStore = pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return pls::kairo::RecordStore::OpenRecordStore(0); });
                        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return require(recordStore)->GetNumRecords();
                            }) == 0) {
                            return pls::cs::flow_return(false);
                        }
                        ByteArray data = pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return pls::kairo::RecordStore::ReadRecord(0, 0); });
                        InitSystemSaveData();
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(sysSave_)->Load(data); });
                    }
                    return {};
                },
                [&]() {
                    if (!is_null(recordStore)) {
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(recordStore)->CloseRecordStore(); });
                    }
                    recordStore = pls::cs::Ref<pls::kairo::RecordStore>{};
                });
            if (cs_flow_61.returned())
                return cs_flow_61.value();
        }
        if (kl_cfg::Config::MUTE_SE()) {
            require(sysSave_)->ints[4] = 0;
        }
        return true;
    }
}

// M:main.AppData.SaveSystem
void AppData::SaveSystem() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.SaveSystem", game);
    {
        kl_cfg::Config::ensure_initialized();

        pls::cs::Ref<pls::kairo::RecordStore> recordStore = pls::cs::Ref<pls::kairo::RecordStore>{};
        pls::cs::run_finally(
            [&]() {
                try {
                    recordStore = pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return pls::kairo::RecordStore::OpenRecordStore(0); });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> void {
                            ByteArray cs_arg1 = pls::diagnostic::api_call(
                                [&]() -> decltype(auto) { return require(sysSave_)->ToByteArray(); });
                            require(recordStore)->WriteRecord(0, cs_arg1);
                        }());
                    });
                    if (kl_cfg::Config::DEBUG_CMD() && kl_cfg::Config::PRINT()) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::Log::Info(
                                pls::cs::String::concat(
                                    literal(u"■AppData.java saveSystem() sysSave_.toByteArray().length = "),
                                    integer_string(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                       return require(sysSave_)->ToByteArray();
                                                   }).length())),
                                pls::cs::Ref<pls::cs::ExceptionObject>{});
                        });
                    }
                } catch (const pls::cs::Exception& cs_caught_59) {
                    auto t = pls::cs::capture_exception(cs_caught_59);
                    {
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return kl_unity_util::Log::Info(t); });
                    }
                }
            },
            [&]() {
                if (!is_null(recordStore)) {
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(recordStore)->CloseRecordStore(); });
                }
                recordStore = pls::cs::Ref<pls::kairo::RecordStore>{};
            });
    }
}

// M:main.AppData.NewGame(System.Int32,System.String)
void AppData::NewGame(pls::cs::Int32 slot, pls::cs::String name) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.NewGame(System.Int32,System.String)", game);
    {
        AppData::currentSaveSlot_() = slot;
        require(sysSave_)->ints[8] = slot;
        SaveSystem();
        save_ =
            kl_unity_util::Property::create(AppData::defSaveP_(), AppData::defSaveI_(), AppData::defSaveL_(),
                                            AppData::defSaveS_(), AppData::defSaveB_());
        require(save_)->strs[0] = name;
        {
            auto cs_target = require(save_)->ints;
            auto cs_index = 4;
            auto cs_value = game::GameUtil::RateConvert(0, 0, 144, 0, 10800, true);
            cs_target.set_Item(cs_index, cs_value);
        }
        eventNum_ = IntArray::make(eventData_.length());
        delayEvents_ = kl_java_util::Vector::create();
        pls::cs::Ref<pls::kairo::IApplication> currentApp = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return pls::kairo::IApplication::GetCurrentApp(); });
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return pls::cs::Single(require(currentApp)->GetScaleRatio(false));
            }) % 100.0f !=
                0.0f &&
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(currentApp)->GetWidth(); }) >
                480 &&
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(currentApp)->GetHeight(); }) >
                480) {
            require(save_)->ints[12] = 0;
            kairo::unity::ui::Canvas::SetLinearFilterEnable(require(AppData::canvas_()), false);
        }
        {
            auto cs_receiver = AppData::canvas_();
            bool cs_arg0 = require(save_)->ints[12] == 1;
            kairo::unity::ui::Canvas::SetLinearFilterEnable(require(cs_receiver), cs_arg0);
        }
        try {
            SaveSystem();
        } catch (const pls::cs::Exception& cs_caught_129) {
            auto t = pls::cs::capture_exception(cs_caught_129);
            {
                pls::diagnostic::api_call([&]() -> decltype(auto) { return kl_unity_util::Log::Info(t); });
            }
        }
    }
}

// M:main.AppData.SaveGame
void AppData::SaveGame() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.SaveGame", game);
    {
        SaveGame(false);
    }
}

// M:main.AppData.SaveGame(System.Boolean)
void AppData::SaveGame(bool auto_) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.SaveGame(System.Boolean)", game);
    {
        kl_cfg::Config::ensure_initialized();

        saveLine_ = 0;
        pls::cs::Ref<pls::kairo::RecordStore> recordStore = pls::cs::Ref<pls::kairo::RecordStore>{};
        pls::cs::Ref<kl_java_io::ByteArrayOutputStream> byteArrayOutputStream =
            pls::cs::Ref<kl_java_io::ByteArrayOutputStream>{};
        if (kl_cfg::Config::PRINT() && is_null(save_)) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::Log::Info(literal(u"■AppData.java saveGame() save_ == null"),
                                                pls::cs::Ref<pls::cs::ExceptionObject>{});
            });
        }
        pls::cs::run_finally(
            [&]() {
                {
                    require(save_)->ints[15] = 1;
                    saveLine_ = 0;
                    {
                        auto cs_target = require(save_)->pros.get_Item(0);
                        auto cs_value = eventNum_;
                        require(cs_target)->ints = cs_value;
                    }
                    saveLine_ = 1;
                    byteArrayOutputStream = kl_java_io::ByteArrayOutputStream::create();
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_unity_util::StreamUtil::WriteInt(
                            static_cast<pls::cs::Ref<kl_java_io::OutputStream>>(byteArrayOutputStream),
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_Size(require(delayEvents_));
                            }));
                    });
                    for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                   return kl_java_util::Vector_2_Size(require(delayEvents_));
                                               });
                         ++i) {
                        saveLine_ = 2;
                        pls::cs::Ref<game::DelayEvent> delayEvent =
                            pls::cs::unbox<pls::cs::Ref<game::DelayEvent>>(
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_java_util::Vector_2_ElementAt(require(delayEvents_), i);
                                }));
                        saveLine_ = 3;
                        require(delayEvent)->Serialize(byteArrayOutputStream);
                    }
                    {
                        auto cs_target = require(save_)->bins;
                        auto cs_index = 16;
                        auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream)->ToByteArray();
                        });
                        cs_target.set_Item(cs_index, cs_value);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayOutputStream)->Close(); });
                    saveLine_ = 4;
                    byteArrayOutputStream = kl_java_io::ByteArrayOutputStream::create();
                    for (pls::cs::Int32 j = 0; j < pData_.length(); ++j) {
                        require(pData_.get_Item(j))->Serialize(byteArrayOutputStream);
                    }
                    {
                        auto cs_target = require(save_)->bins;
                        auto cs_index = 0;
                        auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream)->ToByteArray();
                        });
                        cs_target.set_Item(cs_index, cs_value);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayOutputStream)->Close(); });
                    saveLine_ = 5;
                    byteArrayOutputStream = kl_java_io::ByteArrayOutputStream::create();
                    for (pls::cs::Int32 k = 0; k < qmData_.length(); ++k) {
                        require(qmData_.get_Item(k))->Serialize(byteArrayOutputStream);
                    }
                    {
                        auto cs_target = require(save_)->bins;
                        auto cs_index = 1;
                        auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream)->ToByteArray();
                        });
                        cs_target.set_Item(cs_index, cs_value);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayOutputStream)->Close(); });
                    saveLine_ = 6;
                    byteArrayOutputStream = kl_java_io::ByteArrayOutputStream::create();
                    for (pls::cs::Int32 l = 0; l < sponsorData_.length(); ++l) {
                        require(sponsorData_.get_Item(l))->Serialize(byteArrayOutputStream);
                    }
                    {
                        auto cs_target = require(save_)->bins;
                        auto cs_index = 2;
                        auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream)->ToByteArray();
                        });
                        cs_target.set_Item(cs_index, cs_value);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayOutputStream)->Close(); });
                    saveLine_ = 7;
                    byteArrayOutputStream = kl_java_io::ByteArrayOutputStream::create();
                    for (pls::cs::Int32 m = 0; m < formationData_.length(); ++m) {
                        require(formationData_.get_Item(m))->Serialize(byteArrayOutputStream);
                    }
                    {
                        auto cs_target = require(save_)->bins;
                        auto cs_index = 3;
                        auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream)->ToByteArray();
                        });
                        cs_target.set_Item(cs_index, cs_value);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayOutputStream)->Close(); });
                    saveLine_ = 8;
                    byteArrayOutputStream = kl_java_io::ByteArrayOutputStream::create();
                    for (pls::cs::Int32 n = 0; n < stadiumData_.length(); ++n) {
                        require(stadiumData_.get_Item(n))->Serialize(byteArrayOutputStream);
                    }
                    {
                        auto cs_target = require(save_)->bins;
                        auto cs_index = 4;
                        auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream)->ToByteArray();
                        });
                        cs_target.set_Item(cs_index, cs_value);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayOutputStream)->Close(); });
                    saveLine_ = 9;
                    byteArrayOutputStream = kl_java_io::ByteArrayOutputStream::create();
                    for (pls::cs::Int32 num = 0; num < svisorData_.length(); ++num) {
                        require(svisorData_.get_Item(num))->Serialize(byteArrayOutputStream);
                    }
                    {
                        auto cs_target = require(save_)->bins;
                        auto cs_index = 5;
                        auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream)->ToByteArray();
                        });
                        cs_target.set_Item(cs_index, cs_value);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayOutputStream)->Close(); });
                    saveLine_ = 10;
                    byteArrayOutputStream = kl_java_io::ByteArrayOutputStream::create();
                    for (pls::cs::Int32 num2 = 0; num2 < tData_.length(); ++num2) {
                        require(tData_.get_Item(num2))->Serialize(byteArrayOutputStream);
                    }
                    {
                        auto cs_target = require(save_)->bins;
                        auto cs_index = 6;
                        auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream)->ToByteArray();
                        });
                        cs_target.set_Item(cs_index, cs_value);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayOutputStream)->Close(); });
                    saveLine_ = 11;
                    byteArrayOutputStream = kl_java_io::ByteArrayOutputStream::create();
                    for (pls::cs::Int32 num3 = 0; num3 < tenantData_.length(); ++num3) {
                        require(tenantData_.get_Item(num3))->Serialize(byteArrayOutputStream);
                    }
                    {
                        auto cs_target = require(save_)->bins;
                        auto cs_index = 7;
                        auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream)->ToByteArray();
                        });
                        cs_target.set_Item(cs_index, cs_value);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayOutputStream)->Close(); });
                    saveLine_ = 12;
                    byteArrayOutputStream = kl_java_io::ByteArrayOutputStream::create();
                    for (pls::cs::Int32 num4 = 0; num4 < fanActData_.length(); ++num4) {
                        require(fanActData_.get_Item(num4))->Serialize(byteArrayOutputStream);
                    }
                    {
                        auto cs_target = require(save_)->bins;
                        auto cs_index = 8;
                        auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream)->ToByteArray();
                        });
                        cs_target.set_Item(cs_index, cs_value);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayOutputStream)->Close(); });
                    saveLine_ = 13;
                    byteArrayOutputStream = kl_java_io::ByteArrayOutputStream::create();
                    for (pls::cs::Int32 num5 = 0; num5 < fanBonus_.length(); ++num5) {
                        require(fanBonus_.get_Item(num5))->Serialize(byteArrayOutputStream);
                    }
                    {
                        auto cs_target = require(save_)->bins;
                        auto cs_index = 9;
                        auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream)->ToByteArray();
                        });
                        cs_target.set_Item(cs_index, cs_value);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayOutputStream)->Close(); });
                    saveLine_ = 14;
                    byteArrayOutputStream = kl_java_io::ByteArrayOutputStream::create();
                    for (pls::cs::Int32 num6 = 0; num6 < tradeData_.length(); ++num6) {
                        require(tradeData_.get_Item(num6))->Serialize(byteArrayOutputStream);
                    }
                    {
                        auto cs_target = require(save_)->bins;
                        auto cs_index = 10;
                        auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream)->ToByteArray();
                        });
                        cs_target.set_Item(cs_index, cs_value);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayOutputStream)->Close(); });
                    saveLine_ = 15;
                    byteArrayOutputStream = kl_java_io::ByteArrayOutputStream::create();
                    for (pls::cs::Int32 num7 = 0; num7 < trainingData_.length(); ++num7) {
                        require(trainingData_.get_Item(num7))->Serialize(byteArrayOutputStream);
                    }
                    {
                        auto cs_target = require(save_)->bins;
                        auto cs_index = 11;
                        auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream)->ToByteArray();
                        });
                        cs_target.set_Item(cs_index, cs_value);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayOutputStream)->Close(); });
                    saveLine_ = 16;
                    byteArrayOutputStream = kl_java_io::ByteArrayOutputStream::create();
                    for (pls::cs::Int32 num8 = 0; num8 < trainingData_.length(); ++num8) {
                        require(trainingData_.get_Item(num8))->Serialize(byteArrayOutputStream);
                    }
                    {
                        auto cs_target = require(save_)->bins;
                        auto cs_index = 11;
                        auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream)->ToByteArray();
                        });
                        cs_target.set_Item(cs_index, cs_value);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayOutputStream)->Close(); });
                    saveLine_ = 17;
                    byteArrayOutputStream = kl_java_io::ByteArrayOutputStream::create();
                    for (pls::cs::Int32 num9 = 0; num9 < leagueData_.length(); ++num9) {
                        require(leagueData_.get_Item(num9))->Serialize(byteArrayOutputStream);
                    }
                    {
                        auto cs_target = require(save_)->bins;
                        auto cs_index = 12;
                        auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream)->ToByteArray();
                        });
                        cs_target.set_Item(cs_index, cs_value);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayOutputStream)->Close(); });
                    saveLine_ = 18;
                    byteArrayOutputStream = kl_java_io::ByteArrayOutputStream::create();
                    require(camera)->Serialize(byteArrayOutputStream);
                    {
                        auto cs_target = require(save_)->bins;
                        auto cs_index = 13;
                        auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream)->ToByteArray();
                        });
                        cs_target.set_Item(cs_index, cs_value);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayOutputStream)->Close(); });
                    saveLine_ = 19;
                    byteArrayOutputStream = kl_java_io::ByteArrayOutputStream::create();
                    require(AppData::udat_())->Serialize(byteArrayOutputStream);
                    {
                        auto cs_target = require(save_)->bins;
                        auto cs_index = 14;
                        auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream)->ToByteArray();
                        });
                        cs_target.set_Item(cs_index, cs_value);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayOutputStream)->Close(); });
                    saveLine_ = 20;
                    byteArrayOutputStream = kl_java_io::ByteArrayOutputStream::create();
                    for (pls::cs::Int32 num10 = 0; num10 < require(AppData::udat_())->tenants_.length();
                         ++num10) {
                        require(require(AppData::udat_())->tenants_.get_Item(num10))
                            ->Serialize(byteArrayOutputStream);
                    }
                    {
                        auto cs_target = require(save_)->bins;
                        auto cs_index = 15;
                        auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream)->ToByteArray();
                        });
                        cs_target.set_Item(cs_index, cs_value);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayOutputStream)->Close(); });
                    saveLine_ = 21;
                    recordStore = pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return pls::kairo::RecordStore::OpenRecordStore(0); });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> void {
                            pls::cs::Int32 cs_arg0 = ((auto_) ? 3 : 1) + AppData::currentSaveSlot_();
                            ByteArray cs_arg1 = pls::diagnostic::api_call(
                                [&]() -> decltype(auto) { return require(save_)->ToByteArray(); });
                            require(recordStore)->WriteRecord(cs_arg0, cs_arg1);
                        }());
                    });
                    saveLine_ = 31;
                    require(sysSave_)->ints[((auto_) ? 11 : 6) + AppData::currentSaveSlot_()] =
                        ([&]() -> pls::cs::Int32 {
                            auto cs_left = ([&]() -> pls::cs::Int32 {
                                auto cs_left = require(save_)->ints[1] * 100 * 100;
                                auto cs_right = require(save_)->ints[2] * 100;
                                return cs_left + cs_right;
                            }());
                            auto cs_right = require(save_)->ints[3];
                            return cs_left + cs_right;
                        }());
                    {
                        auto cs_target = require(sysSave_)->strs;
                        auto cs_index = ((auto_) ? 8 : 4) + AppData::currentSaveSlot_();
                        auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_lang::JString::ValueOfLong(require(save_)->lngs[0]);
                        });
                        cs_target.set_Item(cs_index, cs_value);
                    }
                    require(sysSave_)->strs[((auto_) ? 6 : 2) + AppData::currentSaveSlot_()] =
                        require(save_)->strs[0];
                    saveLine_ = 32;
                    SaveSystem();
                    if (kl_cfg::Config::PRINT()) {
                        pls::cs::Int32 num11 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                   return require(save_)->ToByteArray();
                                               }).length();
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::Log::Info(
                                pls::cs::String::concat(
                                    pls::cs::String::concat(
                                        pls::cs::String::concat(
                                            pls::cs::String::concat(
                                                pls::cs::String::concat(
                                                    pls::cs::String::concat(literal(u"save:"),
                                                                            integer_string(num11)),
                                                    literal(u"byte (")),
                                                integer_string(num11 / 1024)),
                                            literal(u".")),
                                        integer_string(num11 % 1024 * 100 / 1024)),
                                    literal(u"kb)")),
                                pls::cs::Ref<pls::cs::ExceptionObject>{});
                        });
                    }
                }
            },
            [&]() {
                if (!is_null(byteArrayOutputStream)) {
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayOutputStream)->Close(); });
                }
                byteArrayOutputStream = pls::cs::Ref<kl_java_io::ByteArrayOutputStream>{};
                if (!is_null(recordStore)) {
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(recordStore)->CloseRecordStore(); });
                }
                recordStore = pls::cs::Ref<pls::kairo::RecordStore>{};
            });
    }
}

// M:main.AppData.LoadGame(System.Int32)
void AppData::LoadGame(pls::cs::Int32 slot) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.LoadGame(System.Int32)", game);
    {
        LoadGame(slot, false);
    }
}

// M:main.AppData.LoadGame(System.Int32,System.Boolean)
void AppData::LoadGame(pls::cs::Int32 slot, bool auto_) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.LoadGame(System.Int32,System.Boolean)", game);
    {
        pls::cs::Ref<pls::kairo::RecordStore> recordStore = pls::cs::Ref<pls::kairo::RecordStore>{};
        pls::cs::Ref<kl_java_io::ByteArrayInputStream> byteArrayInputStream =
            pls::cs::Ref<kl_java_io::ByteArrayInputStream>{};
        AppData::currentSaveSlot_() = slot;
        require(sysSave_)->ints[8] = slot;
        SaveSystem();
        pls::cs::run_finally(
            [&]() {
                {
                    recordStore = pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return pls::kairo::RecordStore::OpenRecordStore(0); });
                    pls::cs::Int32 num;
                    ByteArray data = pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return pls::kairo::RecordStore::ReadRecord(0, ((auto_) ? 3 : 1) +
                                                                          AppData::currentSaveSlot_());
                    });
                    save_ = kl_unity_util::Property::create(AppData::defSaveP_(), AppData::defSaveI_(),
                                                            AppData::defSaveL_(), AppData::defSaveS_(),
                                                            AppData::defSaveB_());
                    pls::diagnostic::api_call([&]() -> decltype(auto) { return require(save_)->Load(data); });
                    eventNum_ = IntArray::make(eventData_.length());
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> void {
                            pls::cs::Ref<pls::cs::Object> cs_arg0 =
                                pls::cs::box(require(require(save_)->pros.get_Item(0))->ints);
                            pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(eventNum_);
                            pls::cs::Int32 cs_arg4 = require(require(save_)->pros.get_Item(0))->ints.length();
                            kl_lang::JSystem::Arraycopy(cs_arg0, 0, cs_arg2, 0, cs_arg4);
                        }());
                    });
                    delayEvents_ = kl_java_util::Vector::create();
                    byteArrayInputStream = kl_java_io::ByteArrayInputStream::create(require(save_)->bins[16]);
                    num = pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream);
                    });
                    for (pls::cs::Int32 i = 0; i < num; ++i) {
                        pls::cs::Ref<game::DelayEvent> delayEvent = game::DelayEvent::create();
                        require(delayEvent)->Deserialize(byteArrayInputStream);
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_AddElement(require(delayEvents_),
                                                                     pls::cs::box(delayEvent));
                        });
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayInputStream)->Close(); });
                    byteArrayInputStream = kl_java_io::ByteArrayInputStream::create(require(save_)->bins[0]);
                    for (pls::cs::Int32 j = 0; j < pData_.length(); ++j) {
                        require(pData_.get_Item(j))->Deserialize(byteArrayInputStream);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayInputStream)->Close(); });
                    byteArrayInputStream = kl_java_io::ByteArrayInputStream::create(require(save_)->bins[1]);
                    for (pls::cs::Int32 k = 0; k < qmData_.length(); ++k) {
                        require(qmData_.get_Item(k))->Deserialize(byteArrayInputStream);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayInputStream)->Close(); });
                    byteArrayInputStream = kl_java_io::ByteArrayInputStream::create(require(save_)->bins[2]);
                    for (pls::cs::Int32 l = 0; l < sponsorData_.length(); ++l) {
                        require(sponsorData_.get_Item(l))->Deserialize(byteArrayInputStream);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayInputStream)->Close(); });
                    byteArrayInputStream = kl_java_io::ByteArrayInputStream::create(require(save_)->bins[3]);
                    for (pls::cs::Int32 m = 0; m < formationData_.length(); ++m) {
                        require(formationData_.get_Item(m))->Deserialize(byteArrayInputStream);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayInputStream)->Close(); });
                    byteArrayInputStream = kl_java_io::ByteArrayInputStream::create(require(save_)->bins[4]);
                    for (pls::cs::Int32 n = 0; n < stadiumData_.length(); ++n) {
                        require(stadiumData_.get_Item(n))->Deserialize(byteArrayInputStream);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayInputStream)->Close(); });
                    byteArrayInputStream = kl_java_io::ByteArrayInputStream::create(require(save_)->bins[5]);
                    for (pls::cs::Int32 num2 = 0; num2 < svisorData_.length(); ++num2) {
                        require(svisorData_.get_Item(num2))->Deserialize(byteArrayInputStream);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayInputStream)->Close(); });
                    byteArrayInputStream = kl_java_io::ByteArrayInputStream::create(require(save_)->bins[6]);
                    for (pls::cs::Int32 num3 = 0; num3 < tData_.length(); ++num3) {
                        require(tData_.get_Item(num3))->Deserialize(byteArrayInputStream);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayInputStream)->Close(); });
                    byteArrayInputStream = kl_java_io::ByteArrayInputStream::create(require(save_)->bins[7]);
                    for (pls::cs::Int32 num4 = 0; num4 < tenantData_.length(); ++num4) {
                        require(tenantData_.get_Item(num4))->Deserialize(byteArrayInputStream);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayInputStream)->Close(); });
                    byteArrayInputStream = kl_java_io::ByteArrayInputStream::create(require(save_)->bins[8]);
                    for (pls::cs::Int32 num5 = 0; num5 < fanActData_.length(); ++num5) {
                        require(fanActData_.get_Item(num5))->Deserialize(byteArrayInputStream);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayInputStream)->Close(); });
                    byteArrayInputStream = kl_java_io::ByteArrayInputStream::create(require(save_)->bins[9]);
                    for (pls::cs::Int32 num6 = 0; num6 < fanBonus_.length(); ++num6) {
                        require(fanBonus_.get_Item(num6))->Deserialize(byteArrayInputStream);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayInputStream)->Close(); });
                    byteArrayInputStream = kl_java_io::ByteArrayInputStream::create(require(save_)->bins[10]);
                    for (pls::cs::Int32 num7 = 0; num7 < tradeData_.length(); ++num7) {
                        require(tradeData_.get_Item(num7))->Deserialize(byteArrayInputStream);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayInputStream)->Close(); });
                    byteArrayInputStream = kl_java_io::ByteArrayInputStream::create(require(save_)->bins[11]);
                    for (pls::cs::Int32 num8 = 0; num8 < trainingData_.length(); ++num8) {
                        require(trainingData_.get_Item(num8))->Deserialize(byteArrayInputStream);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayInputStream)->Close(); });
                    byteArrayInputStream = kl_java_io::ByteArrayInputStream::create(require(save_)->bins[12]);
                    for (pls::cs::Int32 num9 = 0; num9 < leagueData_.length(); ++num9) {
                        require(leagueData_.get_Item(num9))->Deserialize(byteArrayInputStream);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayInputStream)->Close(); });
                    byteArrayInputStream = kl_java_io::ByteArrayInputStream::create(require(save_)->bins[13]);
                    require(camera)->Deserialize(byteArrayInputStream);
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayInputStream)->Close(); });
                    byteArrayInputStream = kl_java_io::ByteArrayInputStream::create(require(save_)->bins[14]);
                    require(AppData::udat_())->Deserialize(byteArrayInputStream);
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayInputStream)->Close(); });
                    byteArrayInputStream = kl_java_io::ByteArrayInputStream::create(require(save_)->bins[15]);
                    for (pls::cs::Int32 num10 = 0; num10 < require(AppData::udat_())->tenants_.length();
                         ++num10) {
                        require(require(AppData::udat_())->tenants_.get_Item(num10))
                            ->Deserialize(byteArrayInputStream, num10);
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayInputStream)->Close(); });
                    require(AppData::udat_())->Deserialize2();
                    for (pls::cs::Int32 num11 = 0; num11 < require(AppData::udat_())->tenants_.length();
                         ++num11) {
                        require(require(AppData::udat_())->tenants_.get_Item(num11))->Deserialize2();
                    }
                }
            },
            [&]() {
                if (!is_null(byteArrayInputStream)) {
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayInputStream)->Close(); });
                }
                byteArrayInputStream = pls::cs::Ref<kl_java_io::ByteArrayInputStream>{};
                if (!is_null(recordStore)) {
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(recordStore)->CloseRecordStore(); });
                }
                recordStore = pls::cs::Ref<pls::kairo::RecordStore>{};
            });
        require(mapMain_)->UpdateTenantMapcip();
        {
            auto cs_receiver = AppData::canvas_();
            bool cs_arg0 = require(save_)->ints[12] == 1;
            kairo::unity::ui::Canvas::SetLinearFilterEnable(require(cs_receiver), cs_arg0);
        }
        require(frmGame_)->SetAllDraw();
    }
}

// M:main.AppData.DrawWindow(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.String)
void AppData::DrawWindow(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 GWidth, pls::cs::Int32 GHeight,
                         pls::cs::Int32 GTop, pls::cs::String T_S) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawWindow(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.String)",
        game);
    {
        DrawWindow(g, GWidth, GHeight, GTop, T_S, 0);
    }
}

// M:main.AppData.DrawWindow(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.String,System.Int32)
void AppData::DrawWindow(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 GWidth, pls::cs::Int32 GHeight,
                         pls::cs::Int32 GTop, pls::cs::String T_S, pls::cs::Int32 off_y) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawWindow(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.String,System.Int32)",
        game);
    {
        form::GameForm::ensure_initialized();
        form::SubForm::ensure_initialized();

        pls::cs::Ref<pls::kairo::Font> font = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{}); });
        pls::cs::Int32 num = 240;
        pls::cs::Int32 num2 = 240;
        pls::cs::Int32 num3 = form::GameForm::VIEW_Y() + off_y * 2;
        if (GHeight > 216) {
            num3 = 0;
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->SetColor(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(89, 103, 91); }));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->DrawRect(num / 2 - GWidth / 2 - 1,
                                        (num3 + num2) / 2 - GHeight / 2 - 1 + GTop - 1, GWidth + 1,
                                        GHeight + 2);
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->SetColor(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(239, 239, 221); }));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->DrawRect(num / 2 - GWidth / 2, (num3 + num2) / 2 - GHeight / 2 - 1 + GTop,
                                        GWidth - 1, GHeight);
        });
        pls::cs::Int32 num4 = GWidth / 40 + 1;
        for (pls::cs::Int32 i = 0; i < num4; ++i) {
            pls::cs::Int32 num5 = num / 2 - GWidth / 2 + i * 40;
            pls::cs::Int32 width = AppData::ClampMax(GWidth - i * 40, 40);
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(resCom2_)->img.get_Item(28);
                    require(g)->DrawImage(cs_arg0, num5, (num3 + num2) / 2 - GHeight / 2 + GTop, 0, 0, width,
                                          GHeight);
                }());
            });
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(resCom2_)->img.get_Item(29);
                require(g)->DrawImage(cs_arg0, 120 - GWidth / 2 + 1, (num3 + num2) / 2 - GHeight / 2 + GTop,
                                      120 - GWidth / 2 + 1, 0, GWidth - 2, 17);
            }());
        });
        if (is_null(T_S)) {
            return;
        }
        {
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(g)->SetColor(form::SubForm::SC_WINDOW_TITLE2()); });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::String cs_arg0 = T_S;
                    pls::cs::Single cs_arg1 =
                        120 - pls::cs::Int32(pls::diagnostic::api_call(
                                  [&]() -> decltype(auto) { return require(font)->StringWidth(T_S); })) /
                                  2;
                    require(g)->DrawString(cs_arg0, cs_arg1,
                                           (num3 + num2) / 2 - GHeight / 2 - 1 + GTop + 3 + 1);
                }());
            });
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(g)->SetColor(form::SubForm::SC_WINDOW_TITLE()); });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::String cs_arg0 = T_S;
                    pls::cs::Single cs_arg1 =
                        120 - pls::cs::Int32(pls::diagnostic::api_call(
                                  [&]() -> decltype(auto) { return require(font)->StringWidth(T_S); })) /
                                  2;
                    require(g)->DrawString(cs_arg0, cs_arg1, (num3 + num2) / 2 - GHeight / 2 - 1 + GTop + 3);
                }());
            });
        }
    }
}

// M:main.AppData.DrawWindow2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)
void AppData::DrawWindow2(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 GWidth, pls::cs::Int32 GHeight,
                          pls::cs::Int32 GTop, pls::cs::Int32 oy) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawWindow2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        --oy;
        pls::cs::Int32 originX =
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->GetOriginX(); });
        pls::cs::Int32 originY =
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->GetOriginY(); });
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->SetOrigin(0, 0); });
        pls::cs::Ref<surface::GameView> instance = surface::GameView::GetInstance();
        pls::cs::Ref<pls::kairo::Image> image = require(resCom2_)->img.get_Item(28);
        pls::cs::Ref<pls::kairo::Font> recoveredUnusedSlot4 = pls::cs::Ref<pls::kairo::Font>{};
        pls::cs::Int32 recoveredUnusedSlot5;
        pls::cs::Int32 recoveredUnusedSlot6;
        pls::cs::Int32 recoveredUnusedSlot7;
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                pls::cs::Ref<pls::kairo::Image> cs_arg0 = image;
                pls::cs::Single cs_arg2 = oy;
                pls::cs::Single cs_arg3 = require(instance)->GetGameWidth();
                pls::cs::Single cs_arg4 = require(instance)->GetGameHeight() - oy;
                pls::cs::Int32 cs_arg7 =
                    pls::diagnostic::api_call([&]() -> decltype(auto) { return require(image)->GetWidth(); });
                pls::cs::Int32 cs_arg8 = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(image)->GetHeight(); });
                require(g)->DrawScaledImage(cs_arg0, 0.0f, cs_arg2, cs_arg3, cs_arg4, 0, 0, cs_arg7, cs_arg8);
            }());
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->SetOrigin(originX, originY); });
    }
}

// M:main.AppData.DrawBox(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)
void AppData::DrawBox(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 BoxX1, pls::cs::Int32 BoxY1,
                      pls::cs::Int32 BoxX2, pls::cs::Int32 BoxY2) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawBox(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        form::SoccerForm::ensure_initialized();

        pls::cs::Int32 num = BoxX2 - BoxX1;
        pls::cs::Int32 num2 = BoxY2 - BoxY1;
        BoxY1 += form::SoccerForm::VIEW_Y() / 2;
        BoxY2 += form::SoccerForm::VIEW_Y() / 2;
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->SetColor(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(247, 253, 247); }));
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->FillRect(BoxX1, BoxY1, num, num2); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->SetColor(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(172, 202, 179); }));
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->DrawRect(BoxX1, BoxY1, num - 1, num2 - 1); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->SetColor(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(222, 234, 225); }));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->DrawRect(BoxX1 + 1, BoxY1 + 1, num - 2 - 1, num2 - 2 - 1);
        });
        {
            auto cs_receiver = require(resCom2_)->seb.get_Item(27);
            pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
            require(cs_receiver)->DrawFrame(g, BoxX1, BoxY1, cs_arg3, 0, -1);
        }
        {
            auto cs_receiver = require(resCom2_)->seb.get_Item(27);
            pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
            require(cs_receiver)->DrawFrame(g, BoxX2, BoxY1, cs_arg3, 1, -1);
        }
        {
            auto cs_receiver = require(resCom2_)->seb.get_Item(27);
            pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
            require(cs_receiver)->DrawFrame(g, BoxX2, BoxY2, cs_arg3, 2, -1);
        }
        {
            auto cs_receiver = require(resCom2_)->seb.get_Item(27);
            pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
            require(cs_receiver)->DrawFrame(g, BoxX1, BoxY2, cs_arg3, 3, -1);
        }
    }
}

// M:main.AppData.DrawArcRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void AppData::DrawArcRect(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                          pls::cs::Int32 w, pls::cs::Int32 h, pls::cs::Int32 r) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawArcRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->DrawLine(x, y + r, x, y + h - r, 1.0f); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->DrawLine(x + w, y + r, x + w, y + h - r, 1.0f); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->DrawLine(x + r, y, x + w - r, y, 1.0f); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->DrawLine(x + r, y + h, x + w - r, y + h, 1.0f); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->DrawArc(x, y, r * 2, r * 2, 90.0f, 90.0f, 1.0f); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->DrawArc(x, y + h - r * 2, r * 2, r * 2, 180.0f, 90.0f, 1.0f);
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->DrawArc(x + w - r * 2, y, r * 2, r * 2, 0.0f, 90.0f, 1.0f);
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->DrawArc(x + w - r * 2, y + h - r * 2, r * 2, r * 2, 270.0f, 90.0f, 1.0f);
        });
    }
}

// M:main.AppData.FillArcRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void AppData::FillArcRect(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                          pls::cs::Int32 w, pls::cs::Int32 h, pls::cs::Int32 r) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.FillArcRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        pls::cs::Int32 num = r * 2;
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->FillRect(x, y + r, r, h - num); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->FillRect(x + w - r, y + r, r, h - num); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->FillRect(x + r, y, w - num, r); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->FillRect(x + r, y + h - r, w - num, r); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->FillRect(x + r, y + r, w - num, h - num); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->FillArc(x, y, r * 2, r * 2, 90.0f, 90.0f); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->FillArc(x, y + h - r * 2, r * 2, r * 2, 180.0f, 90.0f);
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->FillArc(x + w - r * 2, y, r * 2, r * 2, 0.0f, 90.0f);
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->FillArc(x + w - r * 2, y + h - r * 2, r * 2, r * 2, 270.0f, 90.0f);
        });
    }
}

// M:main.AppData.DrawFillArcRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void AppData::DrawFillArcRect(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                              pls::cs::Int32 w, pls::cs::Int32 h, pls::cs::Int32 r, pls::cs::Int32 r0,
                              pls::cs::Int32 g0, pls::cs::Int32 b0, pls::cs::Int32 r1, pls::cs::Int32 g1,
                              pls::cs::Int32 b1) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawFillArcRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->SetColor(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(r0, g0, b0); }));
        });
        FillArcRect(g, x + 1, y + 1, w - 2, h - 2, r);
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->SetColor(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(r1, g1, b1); }));
        });
        DrawArcRect(g, x, y, w - 1, h - 1, r);
    }
}

// M:main.AppData.Draw3DBox(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32[][])
void AppData::Draw3DBox(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 offset_x,
                        pls::cs::Int32 offset_y, pls::cs::Int32 width, pls::cs::Int32 height,
                        IntArray2 colors) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.Draw3DBox(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32[][])",
        game);
    {
        pls::cs::Int32 recoveredBorderX = offset_x;
        pls::cs::Int32 recoveredBorderY = offset_y;
        pls::cs::Int32 recoveredBorderWidth = width;
        pls::cs::Int32 recoveredBorderHeight = height;
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                pls::cs::Int32 cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = colors[0][0];
                        pls::cs::Int32 cs_arg1 = colors[0][1];
                        pls::cs::Int32 cs_arg2 = colors[0][2];
                        return pls::kairo::Graphics::GetColorOfRGB(cs_arg0, cs_arg1, cs_arg2);
                    }());
                });
                require(g)->SetColor(cs_arg0);
            }());
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->DrawRect(recoveredBorderX, recoveredBorderY, recoveredBorderWidth - 1,
                                        recoveredBorderHeight - 1);
        });
        pls::cs::Int32 num = offset_x + 1;
        pls::cs::Int32 num2 = offset_y + 1;
        pls::cs::Int32 num3 = width - 2;
        pls::cs::Int32 num4 = height - 2;
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                pls::cs::Int32 cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = colors[2][0];
                        pls::cs::Int32 cs_arg1 = colors[2][1];
                        pls::cs::Int32 cs_arg2 = colors[2][2];
                        return pls::kairo::Graphics::GetColorOfRGB(cs_arg0, cs_arg1, cs_arg2);
                    }());
                });
                require(g)->SetColor(cs_arg0);
            }());
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->DrawLine(num, num2, num + num3 - 1, num2, 1.0f); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->DrawLine(num, num2 + 1, num, num2 + num4 - 2, 1.0f);
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                pls::cs::Int32 cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = colors[3][0];
                        pls::cs::Int32 cs_arg1 = colors[3][1];
                        pls::cs::Int32 cs_arg2 = colors[3][2];
                        return pls::kairo::Graphics::GetColorOfRGB(cs_arg0, cs_arg1, cs_arg2);
                    }());
                });
                require(g)->SetColor(cs_arg0);
            }());
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->DrawLine(num, num2 + num4 - 1, num + num3 - 1, num2 + num4 - 1, 1.0f);
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->DrawLine(num + num3 - 1, num2 + 1, num + num3 - 1, num2 + num4 - 2, 1.0f);
        });
        pls::cs::Int32 num5 = offset_x + 2;
        pls::cs::Int32 num6 = offset_y + 2;
        pls::cs::Int32 num7 = width - 4;
        pls::cs::Int32 num8 = height - 4;
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                pls::cs::Int32 cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = colors[1][0];
                        pls::cs::Int32 cs_arg1 = colors[1][1];
                        pls::cs::Int32 cs_arg2 = colors[1][2];
                        return pls::kairo::Graphics::GetColorOfRGB(cs_arg0, cs_arg1, cs_arg2);
                    }());
                });
                require(g)->SetColor(cs_arg0);
            }());
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->FillRect(num5, num6, num7, num8); });
    }
}

// M:main.AppData.IsTopForm(kairo.unity.form.FormBase)
bool AppData::IsTopForm(pls::cs::Ref<pls::kairo::FormBase> formBase) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.IsTopForm(kairo.unity.form.FormBase)", game);
    {
        pls::cs::Ref<form::FormManager> instance = form::FormManager::GetInstance();
        return pls::cs::box(formBase) == pls::cs::box(pls::diagnostic::api_call([&]() -> decltype(auto) {
                   return require(instance)->GetTopForm();
               }));
    }
}

// M:main.AppData.DrawSeb(kairo.unity.ui.Graphics,System.Int32,System.Int32,kairo.unity.ui.Seb,kairo.unity.ui.Image[],System.Int32,System.Int32,System.Int32)
pls::cs::Int32 AppData::DrawSeb(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                                pls::cs::Ref<kairo::unity::ui::Seb> seb,
                                pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> imgs, pls::cs::Int32 frame,
                                pls::cs::Int32 w1000, pls::cs::Int32 h1000) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawSeb(kairo.unity.ui.Graphics,System.Int32,System.Int32,kairo.unity.ui.Seb,kairo.unity.ui.Image[],System.Int32,System.Int32,System.Int32)",
        game);
    {
        return DrawSeb(g, x, y, seb, imgs, frame, w1000, h1000, -1, -1);
    }
}

// M:main.AppData.DrawSeb(kairo.unity.ui.Graphics,System.Int32,System.Int32,kairo.unity.ui.Seb,kairo.unity.ui.Image[],System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Int32 AppData::DrawSeb(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                                pls::cs::Ref<kairo::unity::ui::Seb> seb,
                                pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> imgs, pls::cs::Int32 frame,
                                pls::cs::Int32 w1000, pls::cs::Int32 h1000, pls::cs::Int32 maxWidth,
                                pls::cs::Int32 maxHeight) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawSeb(kairo.unity.ui.Graphics,System.Int32,System.Int32,kairo.unity.ui.Seb,kairo.unity.ui.Image[],System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        pls::cs::Int32 num = x;
        w1000 = AppData::Clamp(w1000, 0, 1000);
        h1000 = AppData::Clamp(h1000, 0, 1000);
        if (w1000 <= 0 || h1000 <= 0) {
            return num;
        }
        IntArray2 sprites = require(seb)->GetSprites(frame);
        for (pls::cs::Int32 spriteIndex = 0; spriteIndex < sprites.length(); ++spriteIndex) {
            IntArray array = sprites[spriteIndex];
            pls::cs::Int32 num2 = maxWidth;
            pls::cs::Int32 num3 = maxHeight;
            if (num2 == -1) {
                num2 = array[4];
            }
            if (num3 == -1) {
                num3 = array[5];
            }
            pls::cs::Ref<pls::kairo::Image> image = imgs.get_Item(array[1]);
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::Single cs_arg1 = x + array[6];
                    pls::cs::Single cs_arg2 = y + array[6];
                    pls::cs::Int32 cs_arg3 = array[2];
                    pls::cs::Int32 cs_arg4 = array[3];
                    require(g)->DrawImage(image, cs_arg1, cs_arg2, cs_arg3, cs_arg4, num2 * w1000 / 1000,
                                          num3 * h1000 / 1000);
                }());
            });
            pls::cs::Int32 num4 = x + array[6] + num2 * w1000 / 1000;
            if (num < num4) {
                num = num4;
            }
        }
        return num;
    }
}

// M:main.AppData.DrawSeb(kairo.unity.ui.Graphics,System.Int32,System.Int32,kairo.unity.ui.Seb,kairo.unity.ui.Image[],System.Int32,System.Int32)
void AppData::DrawSeb(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                      pls::cs::Ref<kairo::unity::ui::Seb> seb,
                      pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> imgs, pls::cs::Int32 frame,
                      pls::cs::Int32 ucnt) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawSeb(kairo.unity.ui.Graphics,System.Int32,System.Int32,kairo.unity.ui.Seb,kairo.unity.ui.Image[],System.Int32,System.Int32)",
        game);
    {
        IntArray2 sprites = require(seb)->GetSprites(frame);
        for (pls::cs::Int32 spriteIndex = 0; spriteIndex < sprites.length(); ++spriteIndex) {
            IntArray array = sprites[spriteIndex];
            pls::cs::Ref<pls::kairo::Image> image = imgs.get_Item(array[1]);
            if ([&]() -> bool {
                    auto cs_left = array[2] + ucnt * array[4] + array[4];
                    auto cs_right = pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(image)->GetWidth(); });
                    return cs_left < cs_right;
                }()) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::Single cs_arg1 = x + array[6];
                        pls::cs::Single cs_arg2 = y + array[7];
                        pls::cs::Int32 cs_arg3 = array[2] + ucnt * array[4];
                        pls::cs::Int32 cs_arg4 = array[3];
                        pls::cs::Int32 cs_arg5 = array[4];
                        pls::cs::Int32 cs_arg6 = array[5];
                        require(g)->DrawImage(image, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6);
                    }());
                });
            } else {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::Single cs_arg1 = x + array[6];
                        pls::cs::Single cs_arg2 = y + array[7];
                        pls::cs::Int32 cs_arg3 = array[2] + ucnt * array[4];
                        pls::cs::Int32 cs_arg4 = array[3];
                        pls::cs::Int32 cs_arg5 = array[4];
                        pls::cs::Int32 cs_arg6 = array[5];
                        require(g)->DrawImage(image, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6);
                    }());
                });
            }
        }
    }
}

// M:main.AppData.DrawSebV(kairo.unity.ui.Graphics,System.Int32,System.Int32,kairo.unity.ui.Seb,kairo.unity.ui.Image[],System.Int32,System.Int32)
void AppData::DrawSebV(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                       pls::cs::Ref<kairo::unity::ui::Seb> seb,
                       pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> imgs, pls::cs::Int32 frame,
                       pls::cs::Int32 vcnt) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawSebV(kairo.unity.ui.Graphics,System.Int32,System.Int32,kairo.unity.ui.Seb,kairo.unity.ui.Image[],System.Int32,System.Int32)",
        game);
    {
        IntArray2 sprites = require(seb)->GetSprites(frame);
        for (pls::cs::Int32 spriteIndex = 0; spriteIndex < sprites.length(); ++spriteIndex) {
            IntArray array = sprites[spriteIndex];
            pls::cs::Ref<pls::kairo::Image> image = imgs.get_Item(array[1]);
            if ([&]() -> bool {
                    auto cs_left = array[3] + vcnt * array[5] + array[5];
                    auto cs_right = pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(image)->GetHeight(); });
                    return cs_left < cs_right;
                }()) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::Single cs_arg1 = x + array[6];
                        pls::cs::Single cs_arg2 = y + array[7];
                        pls::cs::Int32 cs_arg3 = array[2];
                        pls::cs::Int32 cs_arg4 = array[3] + vcnt * array[5];
                        pls::cs::Int32 cs_arg5 = array[4];
                        pls::cs::Int32 cs_arg6 = array[5];
                        require(g)->DrawImage(image, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6);
                    }());
                });
            } else {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::Single cs_arg1 = x + array[6];
                        pls::cs::Single cs_arg2 = y + array[7];
                        pls::cs::Int32 cs_arg3 = array[2];
                        pls::cs::Int32 cs_arg4 = array[3] + vcnt * array[5];
                        pls::cs::Int32 cs_arg5 = array[4];
                        pls::cs::Int32 cs_arg6 = array[5];
                        require(g)->DrawImage(image, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6);
                    }());
                });
            }
        }
    }
}

// M:main.AppData.DrawSeb(kairo.unity.ui.Graphics,System.Int32,System.Int32,kairo.unity.ui.Seb,kairo.unity.ui.Image,System.Int32)
void AppData::DrawSeb(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                      pls::cs::Ref<kairo::unity::ui::Seb> seb, pls::cs::Ref<pls::kairo::Image> img,
                      pls::cs::Int32 frame) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawSeb(kairo.unity.ui.Graphics,System.Int32,System.Int32,kairo.unity.ui.Seb,kairo.unity.ui.Image,System.Int32)",
        game);
    {
        IntArray2 sprites = require(seb)->GetSprites(frame);
        for (pls::cs::Int32 spriteIndex = 0; spriteIndex < sprites.length(); ++spriteIndex) {
            IntArray array = sprites[spriteIndex];
            if (array[1] < 0) {
                continue;
            }
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::Single cs_arg1 = x + array[6];
                    pls::cs::Single cs_arg2 = y + array[7];
                    pls::cs::Int32 cs_arg3 = array[2];
                    pls::cs::Int32 cs_arg4 = array[3];
                    pls::cs::Int32 cs_arg5 = array[4];
                    pls::cs::Int32 cs_arg6 = array[5];
                    require(g)->DrawImage(img, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6);
                }());
            });
        }
    }
}

// M:main.AppData.DrawSebReverse(kairo.unity.ui.Graphics,System.Int32,System.Int32,kairo.unity.ui.Seb,System.Int32,kairo.unity.ui.Image[])
void AppData::DrawSebReverse(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                             pls::cs::Ref<kairo::unity::ui::Seb> seb, pls::cs::Int32 frame,
                             pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> imgs) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawSebReverse(kairo.unity.ui.Graphics,System.Int32,System.Int32,kairo.unity.ui.Seb,System.Int32,kairo.unity.ui.Image[])",
        game);
    {
        IntArray2 sprites = require(seb)->GetSprites(frame);
        for (pls::cs::Int32 spriteIndex = 0; spriteIndex < sprites.length(); ++spriteIndex) {
            IntArray array = sprites[spriteIndex];
            if (array[1] < 0) {
                continue;
            }
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 = imgs.get_Item(array[1]);
                    pls::cs::Single cs_arg1 = x - array[6] - array[4];
                    pls::cs::Single cs_arg2 = y + array[7];
                    pls::cs::Int32 cs_arg3 = array[2];
                    pls::cs::Int32 cs_arg4 = array[3];
                    pls::cs::Int32 cs_arg5 = array[4];
                    pls::cs::Int32 cs_arg6 = array[5];
                    require(g)->DrawImage(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6);
                }());
            });
        }
    }
}

// M:main.AppData.ColRect(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
bool AppData::ColRect(pls::cs::Int32 x, pls::cs::Int32 y, pls::cs::Int32 left, pls::cs::Int32 top,
                      pls::cs::Int32 right, pls::cs::Int32 bottom) {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.ColRect(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        return left < x && x < right && top < y && y < bottom;
    }
}

// M:main.AppData.ColRect(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
bool AppData::ColRect(pls::cs::Int32 left1, pls::cs::Int32 top1, pls::cs::Int32 right1,
                      pls::cs::Int32 bottom1, pls::cs::Int32 left2, pls::cs::Int32 top2,
                      pls::cs::Int32 right2, pls::cs::Int32 bottom2) {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.ColRect(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        if (right1 < left2 || bottom1 < top2 || left1 > right2 || top1 > bottom2) {
            return false;
        }
        return true;
    }
}

// M:main.AppData.ColRect(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
bool AppData::ColRectFloat(pls::cs::Single left1, pls::cs::Single top1, pls::cs::Single right1,
                           pls::cs::Single bottom1, pls::cs::Single left2, pls::cs::Single top2,
                           pls::cs::Single right2, pls::cs::Single bottom2) {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.ColRect(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)",
        game);
    {
        if (right1 < left2) {
            return false;
        }
        if (bottom1 < top2) {
            return false;
        }
        if (left1 > right2) {
            return false;
        }
        if (top1 > bottom2) {
            return false;
        }
        return true;
    }
}

// M:main.AppData.CommaSeparate(System.Int64)
pls::cs::String AppData::CommaSeparate(pls::cs::Int64 value) {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.CommaSeparate(System.Int64)", game);
    {
        bool flag = (value < pls::cs::cast_integral<pls::cs::Int64>(0));
        if (flag) {
            value = -value;
        }
        pls::cs::String str = pls::cs::String::concat(pls::cs::String(u""), integer_string(value));
        pls::cs::String text = pls::cs::String(u"");
        pls::cs::Int32 num = 0;
        pls::cs::Int32 num2 = kl_lang::StringEx::Length(str) - 1;
        while (num2 >= 0) {
            if (num > 0 && num % 3 == 0) {
                text = pls::cs::String::concat(char_string(u','), text);
            }
            text = pls::cs::String::concat(char_string(kl_lang::StringEx::CharAt(str, num2)), text);
            --num2;
            ++num;
        }
        if (flag) {
            text = pls::cs::String::concat(literal(u"-"), text);
        }
        return text;
    }
}

// M:main.AppData.CommaSeparate_en(System.Int64)
pls::cs::String AppData::CommaSeparate_en(pls::cs::Int64 value) {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.CommaSeparate_en(System.Int64)", game);
    {
        bool flag = require(require(AppData::GetInstance())->sysSave_)->ints[14] == 1;
        bool flag2 = (value < pls::cs::cast_integral<pls::cs::Int64>(0));
        if (flag2) {
            value = -value;
        }
        pls::cs::String str = pls::cs::String::concat(pls::cs::String(u""), integer_string(value));
        pls::cs::String text = pls::cs::String(u"");
        pls::cs::Int32 num = 0;
        if (flag) {
            pls::cs::Int32 num2 = kl_lang::StringEx::Length(str) - 1;
            while (num2 >= 0) {
                if (num == 1) {
                    text = pls::cs::String::concat(literal(u"."), text);
                }
                if (num > 1 && (num - 1) % 3 == 0) {
                    text = pls::cs::String::concat(char_string(u','), text);
                }
                text = pls::cs::String::concat(char_string(kl_lang::StringEx::CharAt(str, num2)), text);
                --num2;
                ++num;
            }
        } else if (kairo::unity::util::Language::English()) {
            str = pls::cs::String::concat(pls::cs::String(u""), integer_string(value * pls::cs::Int64(10)));
            pls::cs::Int32 num3 = kl_lang::StringEx::Length(str) - 1;
            while (num3 >= 0) {
                if (num > 0 && num % 3 == 0) {
                    text = pls::cs::String::concat(char_string(u','), text);
                }
                text = pls::cs::String::concat(char_string(kl_lang::StringEx::CharAt(str, num3)), text);
                --num3;
                ++num;
            }
        } else {
            pls::cs::Int32 num4 = kl_lang::StringEx::Length(str) - 1;
            while (num4 >= 0) {
                if (num > 0 && num % 3 == 0) {
                    text = pls::cs::String::concat(char_string(u','), text);
                }
                text = pls::cs::String::concat(char_string(kl_lang::StringEx::CharAt(str, num4)), text);
                --num4;
                ++num;
            }
        }
        if (flag2) {
            text = pls::cs::String::concat(literal(u"-"), text);
        }
        return text;
    }
}

// M:main.AppData.GetBRectSeb(kairo.unity.ui.Seb,System.Int32,System.Int32,System.Int32)
IntArray AppData::GetBRectSeb(pls::cs::Ref<kairo::unity::ui::Seb> seb, pls::cs::Int32 x, pls::cs::Int32 y,
                              pls::cs::Int32 frame) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:main.AppData.GetBRectSeb(kairo.unity.ui.Seb,System.Int32,System.Int32,System.Int32)",
                     game);
    {
        IntArray boundingRect = require(seb)->GetBoundingRect();
        tmpInt4_[0] = x + boundingRect[0];
        tmpInt4_[1] = y + boundingRect[1];
        tmpInt4_[2] = boundingRect[2];
        tmpInt4_[3] = boundingRect[3];
        return tmpInt4_;
    }
}

// M:main.AppData.DrawVerticalScroll2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void AppData::DrawVerticalScroll2(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                                  pls::cs::Int32 w, pls::cs::Int32 h, pls::cs::Int32 value,
                                  pls::cs::Int32 maximum, pls::cs::Int32 largeChange) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawVerticalScroll2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        if (maximum < largeChange - 1) {
            maximum = largeChange - 1;
        }
        surface::GameView::AddTouch(
            g, 12, x, y, w - 1, h, 262144,
            kairo::unity::surface::TouchOption::Create(IntArray::from({maximum + 1, largeChange, 131072})));
    }
}

// M:main.AppData.DrawVerticalScroll3(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void AppData::DrawVerticalScroll3(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                                  pls::cs::Int32 w, pls::cs::Int32 h, pls::cs::Int32 value,
                                  pls::cs::Int32 maximum, pls::cs::Int32 largeChange) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawVerticalScroll3(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        if (maximum < largeChange - 1) {
            maximum = largeChange - 1;
        }
        surface::GameView::AddTouch(
            g, 22, x, y, w - 1, h, 262144,
            kairo::unity::surface::TouchOption::Create(IntArray::from({maximum, largeChange, 851968})));
    }
}

// M:main.AppData.DrawNumImage(kairo.unity.ui.Graphics,System.Int32,System.String,System.Int64,System.String,System.Int32,System.Int32)
void AppData::DrawNumImage(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 seb, pls::cs::String header,
                           pls::cs::Int64 value, pls::cs::String footer, pls::cs::Int32 x, pls::cs::Int32 y) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawNumImage(kairo.unity.ui.Graphics,System.Int32,System.String,System.Int64,System.String,System.Int32,System.Int32)",
        game);
    {
        DrawNumImage(g, seb, header, value, footer, x, y, 0, 1);
    }
}

// M:main.AppData.DrawNumImage(kairo.unity.ui.Graphics,System.Int32,System.String,System.Int64,System.String,System.Int32,System.Int32,System.Int32)
void AppData::DrawNumImage(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 seb, pls::cs::String header,
                           pls::cs::Int64 value, pls::cs::String footer, pls::cs::Int32 x, pls::cs::Int32 y,
                           pls::cs::Int32 padding) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawNumImage(kairo.unity.ui.Graphics,System.Int32,System.String,System.Int64,System.String,System.Int32,System.Int32,System.Int32)",
        game);
    {
        DrawNumImage(g, seb, header, value, footer, x, y, padding, 1);
    }
}

// M:main.AppData.DrawNumImage(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32,System.Int32,System.Int32)
void AppData::DrawNumImageLongIntInt(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 seb,
                                     pls::cs::Int64 value, pls::cs::Int32 x, pls::cs::Int32 y,
                                     pls::cs::Int32 padding, pls::cs::Int32 anchor) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawNumImage(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        {
            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
            pls::cs::Int32 cs_arg1 = seb;
            pls::cs::String cs_arg2 = pls::cs::String(u"");
            pls::cs::Int64 cs_arg3 = value;
            pls::cs::String cs_arg4 = pls::cs::String(u"");
            DrawNumImage(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, x, y, padding, anchor);
        }
    }
}

// M:main.AppData.DrawNumImage(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32)
void AppData::DrawNumImage(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 seb, pls::cs::Int64 value,
                           pls::cs::Int32 x, pls::cs::Int32 y) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawNumImage(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32)",
        game);
    {
        {
            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
            pls::cs::Int32 cs_arg1 = seb;
            pls::cs::String cs_arg2 = pls::cs::String(u"");
            pls::cs::Int64 cs_arg3 = value;
            pls::cs::String cs_arg4 = pls::cs::String(u"");
            DrawNumImage(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, x, y, 0, 1);
        }
    }
}

// M:main.AppData.DrawNumImage(kairo.unity.ui.Graphics,System.Int32,System.String,System.Int64,System.String,System.Int32,System.Int32,System.Int32,System.Int32)
void AppData::DrawNumImage(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 seb, pls::cs::String header,
                           pls::cs::Int64 value, pls::cs::String footer, pls::cs::Int32 x, pls::cs::Int32 y,
                           pls::cs::Int32 padding, pls::cs::Int32 anchor) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawNumImage(kairo.unity.ui.Graphics,System.Int32,System.String,System.Int64,System.String,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        pls::cs::Ref<kairo::unity::ui::ResourceManager> resourceManager = resCom2_;
        pls::cs::Int32 num = require(require(resourceManager)->seb.get_Item(seb))->GetSprite(0, 0)[4];
        pls::cs::Int64 num2 = 1ll;
        pls::cs::Int64 num3 = 1ll;
        pls::cs::Int64 num4 = value;
        while (num4 / pls::cs::Int64(10) > pls::cs::cast_integral<pls::cs::Int64>(0)) {
            num4 = num4 / 10;
            num3 = num3 * 10;
            ++num2;
        }
        auto cs_left_56 = num2 + pls::cs::Int64(kl_lang::StringEx::Length(header));
        auto cs_right_56 =
            pls::cs::Int64(pls::cs::cast_integral<pls::cs::Int64>(kl_lang::StringEx::Length(footer)));
        pls::cs::Int64 num5 = cs_left_56 + cs_right_56;
        num5 = num5 * pls::cs::Int64((num + padding)) - pls::cs::Int64(padding);
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::BitUtil::Check(anchor, 2); })) {
            x -= pls::cs::to_int32((num5 / pls::cs::Int64(2)));
        } else if (pls::diagnostic::api_call(
                       [&]() -> decltype(auto) { return kl_unity_util::BitUtil::Check(anchor, 4); })) {
            x -= pls::cs::to_int32(num5);
        }
        for (pls::cs::Int32 i = 0; i < kl_lang::StringEx::Length(header); ++i) {
            char16_t c = kl_lang::StringEx::CharAt(header, i);
            if (pls::cs::cast_integral<pls::cs::Int32>(c) != pls::cs::cast_integral<pls::cs::Int32>(u' ')) {
                {
                    auto cs_receiver = require(resourceManager)->seb.get_Item(seb);
                    pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resourceManager)->img;
                    require(cs_receiver)->DrawFrame(g, x, y, cs_arg3, c - 48, -1);
                }
            }
            x += num + padding;
        }
        num4 = value;
        for (pls::cs::Int32 j = 0; pls::cs::cast_integral<pls::cs::Int64>(j) < num2; ++j) {
            {
                auto cs_receiver = require(resourceManager)->seb.get_Item(seb);
                pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resourceManager)->img;
                pls::cs::Int32 cs_arg4 = pls::cs::to_int32((num4 / num3));
                require(cs_receiver)->DrawFrame(g, x, y, cs_arg3, cs_arg4, -1);
            }
            num4 = num4 % num3;
            num3 = num3 / 10;
            x += num + padding;
        }
        for (pls::cs::Int32 k = 0; k < kl_lang::StringEx::Length(footer); ++k) {
            char16_t c2 = kl_lang::StringEx::CharAt(footer, k);
            if (pls::cs::cast_integral<pls::cs::Int32>(c2) != pls::cs::cast_integral<pls::cs::Int32>(u' ')) {
                {
                    auto cs_receiver = require(resourceManager)->seb.get_Item(seb);
                    pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resourceManager)->img;
                    require(cs_receiver)->DrawFrame(g, x, y, cs_arg3, c2 - 48, -1);
                }
            }
            x += num + padding;
        }
    }
}

// M:main.AppData.DrawNumImageComma(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void AppData::DrawNumImageComma(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 seb,
                                pls::cs::Int64 in_value, pls::cs::Int32 x, pls::cs::Int32 y,
                                pls::cs::Int32 padding, pls::cs::Int32 comma_padding, pls::cs::Int32 anchor) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawNumImageComma(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        pls::cs::String str = AppData::CommaSeparate(in_value);
        pls::cs::Int32 num = 0;
        num += kl_lang::StringEx::Length(pls::diagnostic::api_call(
                   [&]() -> decltype(auto) { return kl_lang::JString::ValueOfLong(in_value); })) *
                   (8 + padding) -
               padding;
        if ((anchor == 2)) {
            x -= num / 2;
        } else if ((anchor == 4)) {
            x -= num;
        }
        bool flag = false;
        for (pls::cs::Int32 i = 0; i < kl_lang::StringEx::Length(str); ++i) {
            char16_t c = kl_lang::StringEx::CharAt(str, i);
            if (pls::cs::cast_integral<pls::cs::Int32>(c) == pls::cs::cast_integral<pls::cs::Int32>(u',')) {
                flag = true;
                continue;
            }
            {
                auto cs_receiver = require(resCom2_)->seb.get_Item(seb);
                pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
                require(cs_receiver)->DrawFrame(g, x, y, cs_arg3, c - 48, -1);
            }
            if (flag) {
                {
                    auto cs_receiver = require(resCom2_)->seb.get_Item(seb);
                    pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
                    require(cs_receiver)->DrawFrame(g, x - 2, y, cs_arg3, 10, -1);
                }
                flag = false;
            }
            x += 8 + padding;
        }
    }
}

// M:main.AppData.DrawNumImageComma_en(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void AppData::DrawNumImageComma_en(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 seb,
                                   pls::cs::Int64 in_value, pls::cs::Int32 x, pls::cs::Int32 y,
                                   pls::cs::Int32 padding, pls::cs::Int32 comma_padding,
                                   pls::cs::Int32 anchor) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawNumImageComma_en(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        pls::cs::String str = AppData::CommaSeparate_en(in_value);
        pls::cs::Int32 num = 0;
        num += kl_lang::StringEx::Length(pls::diagnostic::api_call(
                   [&]() -> decltype(auto) { return kl_lang::JString::ValueOfLong(in_value); })) *
                   (8 + padding) -
               padding;
        if ((anchor == 2)) {
            x -= num / 2;
        } else if ((anchor == 4)) {
            x -= num;
        }
        bool flag = false;
        bool flag2 = false;
        for (pls::cs::Int32 i = 0; i < kl_lang::StringEx::Length(str); ++i) {
            char16_t c = kl_lang::StringEx::CharAt(str, i);
            if (((pls::cs::cast_integral<pls::cs::Int32>(c) ==
                  pls::cs::cast_integral<pls::cs::Int32>(u',')))) {
                flag = true;
                continue;
            } else if (((pls::cs::cast_integral<pls::cs::Int32>(c) ==
                         pls::cs::cast_integral<pls::cs::Int32>(u'.')))) {
                flag2 = true;
                continue;
            }
            {
                auto cs_receiver = require(resCom2_)->seb.get_Item(seb);
                pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
                require(cs_receiver)->DrawFrame(g, x, y, cs_arg3, c - 48, -1);
            }
            if (flag) {
                {
                    auto cs_receiver = require(resCom2_)->seb.get_Item(seb);
                    pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
                    require(cs_receiver)->DrawFrame(g, x - 2, y, cs_arg3, 10, -1);
                }
                flag = false;
            } else if (flag2) {
                {
                    auto cs_receiver = require(resCom2_)->seb.get_Item(seb);
                    pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
                    require(cs_receiver)->DrawFrame(g, x - 2, y, cs_arg3, 10, -1);
                }
                flag2 = false;
            }
            x += 8 + padding;
        }
    }
}

// M:main.AppData.DrawMoney(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void AppData::DrawMoney(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 seb, pls::cs::Int64 in_value,
                        pls::cs::Int32 x, pls::cs::Int32 y, pls::cs::Int32 padding,
                        pls::cs::Int32 comma_padding, pls::cs::Int32 anchor) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawMoney(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        DrawMoney(g, seb, in_value, x, y, padding, comma_padding, anchor, true);
    }
}

// M:main.AppData.DrawMoney(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
void AppData::DrawMoney(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 seb, pls::cs::Int64 in_value,
                        pls::cs::Int32 x, pls::cs::Int32 y, pls::cs::Int32 padding,
                        pls::cs::Int32 comma_padding, pls::cs::Int32 anchor, bool kmark) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawMoney(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)",
        game);
    {
        bool flag = false;
        if (AppData::IsLanguageOther()) {
            flag = true;
            in_value = in_value * 10;
            x -= 8;
        }
        pls::cs::String str = AppData::CommaSeparate_en(in_value);
        bool flag2 = require(require(AppData::GetInstance())->sysSave_)->ints[14] == 1;
        if (!kmark) {
            str = AppData::CommaSeparate(in_value);
            if (!flag2) {
                str = AppData::CommaSeparate(in_value * pls::cs::Int64(100));
            }
        }
        if (flag) {
            str = AppData::CommaSeparate((kmark) ? (in_value) : ((in_value / pls::cs::Int64(100))));
            kmark = false;
        }
        pls::cs::Int32 num = 0;
        num += kl_lang::StringEx::Length(pls::diagnostic::api_call(
                   [&]() -> decltype(auto) { return kl_lang::JString::ValueOfLong(in_value); })) *
                   (8 + padding) -
               padding + 17;
        if (!flag2) {
            num += 8;
        }
        if (!kmark) {
            num -= 7;
        }
        if ((anchor == 2)) {
            x -= num / 2;
        } else if ((anchor == 4)) {
            x -= num;
        }
        if (!flag) {
            if (flag2) {
                {
                    auto cs_receiver = require(resCom2_)->seb.get_Item(seb);
                    pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
                    require(cs_receiver)->DrawFrame(g, x, y, cs_arg3, 11, -1);
                }
            } else {
                {
                    auto cs_receiver = require(resCom2_)->seb.get_Item(seb);
                    pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
                    require(cs_receiver)->DrawFrame(g, x, y, cs_arg3, 17, -1);
                }
            }
        }
        x += 10 + padding;
        bool flag3 = false;
        bool flag4 = false;
        for (pls::cs::Int32 i = 0; i < kl_lang::StringEx::Length(str); ++i) {
            char16_t c = kl_lang::StringEx::CharAt(str, i);
            if (((pls::cs::cast_integral<pls::cs::Int32>(c) ==
                  pls::cs::cast_integral<pls::cs::Int32>(u',')))) {
                flag3 = true;
                continue;
            } else if (((pls::cs::cast_integral<pls::cs::Int32>(c) ==
                         pls::cs::cast_integral<pls::cs::Int32>(u'.')))) {
                flag4 = true;
                continue;
            }
            if (flag3) {
                x += comma_padding;
            }
            if (flag4) {
                ++x;
            }
            {
                auto cs_receiver = require(resCom2_)->seb.get_Item(seb);
                pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
                require(cs_receiver)->DrawFrame(g, x, y, cs_arg3, c - 48, -1);
            }
            if (flag3) {
                {
                    auto cs_receiver = require(resCom2_)->seb.get_Item(seb);
                    pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
                    require(cs_receiver)->DrawFrame(g, x - 2, y, cs_arg3, 10, -1);
                }
                flag3 = false;
            } else if (flag4) {
                {
                    auto cs_receiver = require(resCom2_)->seb.get_Item(seb);
                    pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
                    require(cs_receiver)->DrawFrame(g, x - 2, y + 1, cs_arg3, 19, -1);
                }
                flag4 = false;
            }
            x += 8 + padding;
        }
        if (kmark) {
            {
                auto cs_receiver = require(resCom2_)->seb.get_Item(seb);
                pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
                require(cs_receiver)->DrawFrame(g, x, y, cs_arg3, 12, -1);
            }
        }
        if (flag) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(resCom2_)->img.get_Item(193);
                    require(g)->DrawImage(cs_arg0, x, y, 37, 54, 9, 10);
                }());
            });
        }
    }
}

// M:main.AppData.DrawMoney2(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void AppData::DrawMoney2(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 seb, pls::cs::Int64 in_value,
                         pls::cs::Int32 x, pls::cs::Int32 y, pls::cs::Int32 padding,
                         pls::cs::Int32 comma_padding, pls::cs::Int32 anchor) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawMoney2(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        bool flag = false;
        if (AppData::IsLanguageOther()) {
            flag = true;
            in_value = in_value * 10;
            x += 8;
        }
        pls::cs::String str = AppData::CommaSeparate_en(in_value);
        if (flag) {
            str = AppData::CommaSeparate(in_value);
        }
        pls::cs::Int32 num = 0;
        num += kl_lang::StringEx::Length(pls::diagnostic::api_call(
                   [&]() -> decltype(auto) { return kl_lang::JString::ValueOfLong(in_value); })) *
                   (8 + padding) -
               padding + 7;
        if ((anchor == 2)) {
            x -= num / 2;
        } else if ((anchor == 4)) {
            x -= num;
        }
        bool flag2 = false;
        bool flag3 = false;
        for (pls::cs::Int32 i = 0; i < kl_lang::StringEx::Length(str); ++i) {
            char16_t c = kl_lang::StringEx::CharAt(str, i);
            if (((pls::cs::cast_integral<pls::cs::Int32>(c) ==
                  pls::cs::cast_integral<pls::cs::Int32>(u',')))) {
                flag2 = true;
                continue;
            } else if (((pls::cs::cast_integral<pls::cs::Int32>(c) ==
                         pls::cs::cast_integral<pls::cs::Int32>(u'.')))) {
                flag3 = true;
                continue;
            }
            if (flag2) {
                x += comma_padding;
            }
            if (flag3) {
                x += comma_padding;
            }
            {
                auto cs_receiver = require(resCom2_)->seb.get_Item(seb);
                pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
                require(cs_receiver)->DrawFrame(g, x, y, cs_arg3, c - 48, -1);
            }
            if (flag2) {
                {
                    auto cs_receiver = require(resCom2_)->seb.get_Item(seb);
                    pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
                    require(cs_receiver)->DrawFrame(g, x - 2, y, cs_arg3, 10, -1);
                }
                flag2 = false;
            } else if (flag3) {
                {
                    auto cs_receiver = require(resCom2_)->seb.get_Item(seb);
                    pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
                    require(cs_receiver)->DrawFrame(g, x - 2, y, cs_arg3, 10, -1);
                }
                flag3 = false;
            }
            x += 8 + padding;
        }
        if (flag) {
            return;
        }
        {
            auto cs_receiver = require(resCom2_)->seb.get_Item(seb);
            pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
            require(cs_receiver)->DrawFrame(g, x, y, cs_arg3, 12, -1);
        }
    }
}

// M:main.AppData.DrawMoney3(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void AppData::DrawMoney3(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 seb, pls::cs::Int64 in_value,
                         pls::cs::Int32 x, pls::cs::Int32 y, pls::cs::Int32 padding,
                         pls::cs::Int32 comma_padding, pls::cs::Int32 anchor) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawMoney3(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        pls::cs::String str = AppData::CommaSeparate_en(in_value);
        bool flag = require(require(AppData::GetInstance())->sysSave_)->ints[14] == 1;
        pls::cs::Int32 num = 0;
        num += kl_lang::StringEx::Length(pls::diagnostic::api_call(
                   [&]() -> decltype(auto) { return kl_lang::JString::ValueOfLong(in_value); })) *
                   (8 + padding) -
               padding + 7;
        if (!flag) {
            num += 8;
        }
        if ((anchor == 2)) {
            x -= num / 2;
        } else if ((anchor == 4)) {
            x -= num;
        }
        bool flag2 = false;
        bool flag3 = false;
        for (pls::cs::Int32 i = 0; i < kl_lang::StringEx::Length(str); ++i) {
            char16_t c = kl_lang::StringEx::CharAt(str, i);
            if (((pls::cs::cast_integral<pls::cs::Int32>(c) ==
                  pls::cs::cast_integral<pls::cs::Int32>(u',')))) {
                flag2 = true;
                continue;
            } else if (((pls::cs::cast_integral<pls::cs::Int32>(c) ==
                         pls::cs::cast_integral<pls::cs::Int32>(u'.')))) {
                flag3 = true;
                continue;
            }
            if (flag2) {
                x += comma_padding;
            }
            if (flag3) {
                ++x;
            }
            {
                auto cs_receiver = require(resCom2_)->seb.get_Item(seb);
                pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
                require(cs_receiver)->DrawFrame(g, x, y, cs_arg3, c - 48, -1);
            }
            if (flag2) {
                {
                    auto cs_receiver = require(resCom2_)->seb.get_Item(seb);
                    pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
                    require(cs_receiver)->DrawFrame(g, x - 2, y, cs_arg3, 10, -1);
                }
                flag2 = false;
            } else if (flag3) {
                {
                    auto cs_receiver = require(resCom2_)->seb.get_Item(seb);
                    pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
                    require(cs_receiver)->DrawFrame(g, x - 2, y + 1, cs_arg3, 19, -1);
                }
                flag3 = false;
            }
            x += 8 + padding;
        }
        {
            auto cs_receiver = require(resCom2_)->seb.get_Item(seb);
            pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
            require(cs_receiver)->DrawFrame(g, x, y, cs_arg3, 12, -1);
        }
    }
}

// M:main.AppData.DrawMoney4(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void AppData::DrawMoney4(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 seb, pls::cs::Int64 in_value,
                         pls::cs::Int32 x, pls::cs::Int32 y, pls::cs::Int32 padding,
                         pls::cs::Int32 comma_padding, pls::cs::Int32 anchor) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawMoney4(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        pls::cs::String str = AppData::CommaSeparate_en(in_value);
        pls::cs::Int32 num = 0;
        num += kl_lang::StringEx::Length(pls::diagnostic::api_call(
                   [&]() -> decltype(auto) { return kl_lang::JString::ValueOfLong(in_value); })) *
                   (8 + padding) -
               padding;
        if ((anchor == 2)) {
            x -= num / 2;
        } else if ((anchor == 4)) {
            x -= num;
        }
        bool flag = false;
        bool flag2 = false;
        for (pls::cs::Int32 i = 0; i < kl_lang::StringEx::Length(str); ++i) {
            char16_t c = kl_lang::StringEx::CharAt(str, i);
            if (((pls::cs::cast_integral<pls::cs::Int32>(c) ==
                  pls::cs::cast_integral<pls::cs::Int32>(u',')))) {
                flag = true;
                continue;
            } else if (((pls::cs::cast_integral<pls::cs::Int32>(c) ==
                         pls::cs::cast_integral<pls::cs::Int32>(u'.')))) {
                flag2 = true;
                continue;
            }
            if (flag) {
                x += comma_padding;
            }
            if (flag2) {
                x += comma_padding;
            }
            {
                auto cs_receiver = require(resCom2_)->seb.get_Item(seb);
                pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
                require(cs_receiver)->DrawFrame(g, x, y, cs_arg3, c - 48, -1);
            }
            if (flag) {
                {
                    auto cs_receiver = require(resCom2_)->seb.get_Item(seb);
                    pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
                    require(cs_receiver)->DrawFrame(g, x - 2, y, cs_arg3, 10, -1);
                }
                flag = false;
            } else if (flag2) {
                {
                    auto cs_receiver = require(resCom2_)->seb.get_Item(seb);
                    pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
                    require(cs_receiver)->DrawFrame(g, x - 2, y, cs_arg3, 10, -1);
                }
                flag2 = false;
            }
            x += 8 + padding;
        }
    }
}

// M:main.AppData.Push(kairo.unity.form.FormBase)
bool AppData::Push(pls::cs::Ref<pls::kairo::FormBase> form) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.Push(kairo.unity.form.FormBase)", game);
    {
        pls::cs::Ref<form::FormManager> instance = form::FormManager::GetInstance();
        return pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> bool {
                pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(instance)->GetCurrentForm(); });
                return require(instance)->Push(cs_arg0, form);
            }());
        });
    }
}

// M:main.AppData.AddEffectShoot(System.Int32,System.Int32)
void AppData::AddEffectShoot(pls::cs::Int32 sx, pls::cs::Int32 sy) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.AddEffectShoot(System.Int32,System.Int32)", game);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                auto cs_receiver = effect_;
                pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(IntArray::from({0, 0, sx, sy}));
                kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
            }());
        });
    }
}

// M:main.AppData.AddEffectCharge(System.Int32,System.Int32)
void AppData::AddEffectCharge(pls::cs::Int32 sx, pls::cs::Int32 sy) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.AddEffectCharge(System.Int32,System.Int32)", game);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                auto cs_receiver = effect_;
                pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(IntArray::from({1, 0, sx, sy}));
                kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
            }());
        });
    }
}

// M:main.AppData.AddEffectTUp(System.Int32,System.Int32,System.Int32)
void AppData::AddEffectTUp(pls::cs::Int32 TAreaCoatNo, pls::cs::Int32 pId, pls::cs::Int32 t_index) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.AddEffectTUp(System.Int32,System.Int32,System.Int32)",
                     game);
    {
        pls::cs::Single cs_arg0_263 = (([&]() -> pls::cs::Int32 {
                                          auto cs_left_263 = AppData::EFF_TUP_DY()[1];
                                          auto cs_right_263 = AppData::EFF_TUP_DY()[0];
                                          return cs_left_263 - cs_right_263;
                                      }())) *
                                      1000;
        pls::cs::Int32 cs_arg1_263 = AppData::EFF_TUP_TIME()[0];
        pls::cs::Single num = game::GameUtil::SetVStop(cs_arg0_263, cs_arg1_263);
        pls::cs::Single cs_arg0_264 = (([&]() -> pls::cs::Int32 {
                                          auto cs_left_264 = AppData::EFF_TUP_DY()[1];
                                          auto cs_right_264 = AppData::EFF_TUP_DY()[0];
                                          return cs_left_264 - cs_right_264;
                                      }())) *
                                      1000;
        pls::cs::Int32 cs_arg1_264 = AppData::EFF_TUP_TIME()[0];
        pls::cs::Single num2 = game::GameUtil::SetAStop(cs_arg0_264, cs_arg1_264);
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                auto cs_receiver = effect_;
                pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(
                    IntArray::from({2, 0, pId, t_index, pls::cs::to_int32(num), pls::cs::to_int32(num2)}));
                kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
            }());
        });
    }
}

// M:main.AppData.AddEffectLvUp(System.Int32,System.Int32)
void AppData::AddEffectLvUp(pls::cs::Int32 wait, pls::cs::Int32 pId) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.AddEffectLvUp(System.Int32,System.Int32)", game);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                auto cs_receiver = effect_;
                pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(IntArray::from({3, -wait, pId}));
                kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
            }());
        });
    }
}

// M:main.AppData.AddEffectExpUp(System.Int32,System.Int32)
void AppData::AddEffectExpUp(pls::cs::Int32 pId, pls::cs::Int32 value) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.AddEffectExpUp(System.Int32,System.Int32)", game);
    {
        pls::cs::Single cs_arg0_112 = (([&]() -> pls::cs::Int32 {
                                          auto cs_left_112 = AppData::EFF_EXPUP_DY()[1];
                                          auto cs_right_112 = AppData::EFF_EXPUP_DY()[0];
                                          return cs_left_112 - cs_right_112;
                                      }())) *
                                      1000;
        pls::cs::Int32 cs_arg1_112 = AppData::EFF_EXPUP_TIME()[0];
        pls::cs::Single num = game::GameUtil::SetVStop(cs_arg0_112, cs_arg1_112);
        pls::cs::Single cs_arg0_113 = (([&]() -> pls::cs::Int32 {
                                          auto cs_left_113 = AppData::EFF_EXPUP_DY()[1];
                                          auto cs_right_113 = AppData::EFF_EXPUP_DY()[0];
                                          return cs_left_113 - cs_right_113;
                                      }())) *
                                      1000;
        pls::cs::Int32 cs_arg1_113 = AppData::EFF_EXPUP_TIME()[0];
        pls::cs::Single num2 = game::GameUtil::SetAStop(cs_arg0_113, cs_arg1_113);
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                auto cs_receiver = effect_;
                pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(
                    IntArray::from({4, 0, pId, value, pls::cs::to_int32(num), pls::cs::to_int32(num2)}));
                kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
            }());
        });
    }
}

// M:main.AppData.AddEffectRpUp(System.Int32,System.Int32,System.Int32,System.Int32)
void AppData::AddEffectRpUp(pls::cs::Int32 sx, pls::cs::Int32 sy, pls::cs::Int32 rId, pls::cs::Int32 value) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:main.AppData.AddEffectRpUp(System.Int32,System.Int32,System.Int32,System.Int32)",
                     game);
    {
        pls::cs::Single cs_arg0_116 = (([&]() -> pls::cs::Int32 {
                                          auto cs_left_116 = AppData::EFF_RPUP_DY()[1];
                                          auto cs_right_116 = AppData::EFF_RPUP_DY()[0];
                                          return cs_left_116 - cs_right_116;
                                      }())) *
                                      1000;
        pls::cs::Int32 cs_arg1_116 = AppData::EFF_RPUP_TIME()[0];
        pls::cs::Single num = game::GameUtil::SetVStop(cs_arg0_116, cs_arg1_116);
        pls::cs::Single cs_arg0_117 = (([&]() -> pls::cs::Int32 {
                                          auto cs_left_117 = AppData::EFF_RPUP_DY()[1];
                                          auto cs_right_117 = AppData::EFF_RPUP_DY()[0];
                                          return cs_left_117 - cs_right_117;
                                      }())) *
                                      1000;
        pls::cs::Int32 cs_arg1_117 = AppData::EFF_RPUP_TIME()[0];
        pls::cs::Single num2 = game::GameUtil::SetAStop(cs_arg0_117, cs_arg1_117);
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                auto cs_receiver = effect_;
                pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(IntArray::from(
                    {5, 0, sx, sy, rId, value, pls::cs::to_int32(num), pls::cs::to_int32(num2)}));
                kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
            }());
        });
    }
}

// M:main.AppData.AddEffectMoneyUp(System.Int32,System.Int32,System.Int32)
void AppData::AddEffectMoneyUp(pls::cs::Int32 sx, pls::cs::Int32 sy, pls::cs::Int32 value) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:main.AppData.AddEffectMoneyUp(System.Int32,System.Int32,System.Int32)", game);
    {
        pls::cs::Single cs_arg0_114 = (([&]() -> pls::cs::Int32 {
                                          auto cs_left_114 = AppData::EFF_MONEYUP_DY()[1];
                                          auto cs_right_114 = AppData::EFF_MONEYUP_DY()[0];
                                          return cs_left_114 - cs_right_114;
                                      }())) *
                                      1000;
        pls::cs::Int32 cs_arg1_114 = AppData::EFF_MONEYUP_TIME()[0];
        pls::cs::Single num = game::GameUtil::SetVStop(cs_arg0_114, cs_arg1_114);
        pls::cs::Single cs_arg0_115 = (([&]() -> pls::cs::Int32 {
                                          auto cs_left_115 = AppData::EFF_MONEYUP_DY()[1];
                                          auto cs_right_115 = AppData::EFF_MONEYUP_DY()[0];
                                          return cs_left_115 - cs_right_115;
                                      }())) *
                                      1000;
        pls::cs::Int32 cs_arg1_115 = AppData::EFF_MONEYUP_TIME()[0];
        pls::cs::Single num2 = game::GameUtil::SetAStop(cs_arg0_115, cs_arg1_115);
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                auto cs_receiver = effect_;
                pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(
                    IntArray::from({6, 0, sx, sy, value, pls::cs::to_int32(num), pls::cs::to_int32(num2)}));
                kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
            }());
        });
    }
}

// M:main.AppData.DrawEffect(kairo.unity.ui.Graphics)
void AppData::DrawEffect(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.DrawEffect(kairo.unity.ui.Graphics)", game);
    {
        form::SubForm::ensure_initialized();
        data::PlayerData::ensure_initialized();

        for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_Size(require(effect_));
                                   });
             ++i) {
            IntArray array = pls::cs::unbox<IntArray>(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_java_util::Vector_2_ElementAt(require(effect_), i); }));
            if (array[0] == 0) {
                {
                    pls::cs::Int32 cs_arg0 = array[2];
                    pls::cs::Int32 cs_arg1 = array[3];
                    IntArray cs_arg2 = ef_cpos;
                    game::Camera::ConvertScreenToCamera(cs_arg0, cs_arg1, cs_arg2);
                }
                {
                    pls::cs::Int32 cs_arg1 = ef_cpos[0];
                    pls::cs::Int32 cs_arg2 = ef_cpos[1];
                    pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(resCom2_)->seb.get_Item(6);
                    pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(resCom2_)->img.get_Item(9);
                    DrawSeb(g, cs_arg1, cs_arg2, cs_arg3, cs_arg4, 0);
                }
            } else if (array[0] == 1) {
                {
                    pls::cs::Int32 cs_arg0 = array[2];
                    pls::cs::Int32 cs_arg1 = array[3];
                    IntArray cs_arg2 = ef_cpos;
                    game::Camera::ConvertScreenToCamera(cs_arg0, cs_arg1, cs_arg2);
                }
                {
                    pls::cs::Int32 cs_arg1 = ef_cpos[0];
                    pls::cs::Int32 cs_arg2 = ef_cpos[1];
                    pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(resCom2_)->seb.get_Item(81);
                    pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(resCom2_)->img.get_Item(90);
                    DrawSeb(g, cs_arg1, cs_arg2, cs_arg3, cs_arg4, 0);
                }
            } else if (array[0] == 2) {
                pls::cs::Ref<game::TPlayer> tPlayer = require(AppData::udat_())->tPlayers_.get_Item(array[2]);
                game::Camera::ConvertScreenToCameraIntArray(require(tPlayer)->screen_pos_, ef_cpos);
                if ([&]() -> bool {
                        auto cs_left = array[1];
                        auto cs_right = AppData::EFF_TUP_TIME()[0];
                        return cs_left >= cs_right;
                    }()) {
                    {
                        auto cs_target = ef_cpos;
                        auto cs_index = 1;
                        auto cs_old = cs_target.at(cs_index);
                        auto cs_rhs = AppData::EFF_TUP_DY()[1];
                        pls::cs::Int32 cs_value = cs_old + cs_rhs;
                        cs_target.at(cs_index) = cs_value;
                    }
                } else {
                    {
                        auto cs_target = ef_cpos;
                        auto cs_index = 1;
                        auto cs_old = cs_target.at(cs_index);
                        auto cs_rhs = ([&]() -> pls::cs::Int32 {
                            auto cs_left = AppData::EFF_TUP_DY()[0];
                            auto cs_right = (([&]() -> pls::cs::Int32 {
                                                auto cs_left = array[4] * array[1];
                                                auto cs_right = array[5] * array[1] * (array[1] + 1) / 2;
                                                return cs_left + cs_right;
                                            }())) /
                                            1000;
                            return cs_left + cs_right;
                        }());
                        pls::cs::Int32 cs_value = cs_old + cs_rhs;
                        cs_target.at(cs_index) = cs_value;
                    }
                }
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return pls::kairo::Graphics::GetColorOfRGB(255, 255, 168);
                    }));
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::Single cs_arg0 = ef_cpos[0] - 26;
                        pls::cs::Single cs_arg1 = ef_cpos[1];
                        require(g)->FillRect(cs_arg0, cs_arg1, 52.0f, 17.0f);
                    }());
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return pls::kairo::Graphics::GetColorOfRGB(255, 199, 147);
                    }));
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::Single cs_arg0 = ef_cpos[0] - 26;
                        pls::cs::Single cs_arg1 = ef_cpos[1];
                        require(g)->DrawRect(cs_arg0, cs_arg1, 51.0f, 16.0f);
                    }());
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->SetColor(form::SubForm::SC_WINDOW_BLACK());
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::String cs_arg0 = data::PlayerData::PARAM_NAME()[array[3]];
                        pls::cs::Single cs_arg1 = ef_cpos[0] - 26 + 2 + 10 + 9;
                        pls::cs::Single cs_arg2 = ef_cpos[1] + 2;
                        require(g)->DrawString(cs_arg0, cs_arg1, cs_arg2, 2);
                    }());
                });
                {
                    pls::cs::Single cs_arg1 = ef_cpos[0] + 14;
                    pls::cs::Single cs_arg2 = ef_cpos[1] + 3;
                    require(resCom2_)->DrawSeb(g, cs_arg1, cs_arg2, 52, 0);
                }
            } else if (array[0] == 3) {
                if (array[1] < 0) {
                    continue;
                }
                {
                    pls::cs::Ref<game::TPlayer> tPlayer2 =
                        require(AppData::udat_())->tPlayers_.get_Item(array[2]);
                    game::Camera::ConvertScreenToCameraIntArray(require(tPlayer2)->screen_pos_, ef_cpos);
                    {
                        pls::cs::Single cs_arg1 = ef_cpos[0];
                        pls::cs::Single cs_arg2 = ef_cpos[1] - 16;
                        pls::cs::Int32 cs_arg4 = array[1] % 12 / 6;
                        require(resCom2_)->DrawSeb(g, cs_arg1, cs_arg2, 94, cs_arg4);
                    }
                }
            } else if (array[0] == 4) {
                pls::cs::Ref<game::TPlayer> tPlayer3 =
                    require(AppData::udat_())->tPlayers_.get_Item(array[2]);
                game::Camera::ConvertScreenToCameraIntArray(require(tPlayer3)->screen_pos_, ef_cpos);
                if ([&]() -> bool {
                        auto cs_left = array[1];
                        auto cs_right = AppData::EFF_EXPUP_TIME()[0];
                        return cs_left >= cs_right;
                    }()) {
                    {
                        auto cs_target = ef_cpos;
                        auto cs_index = 1;
                        auto cs_old = cs_target.at(cs_index);
                        auto cs_rhs = AppData::EFF_EXPUP_DY()[1];
                        pls::cs::Int32 cs_value = cs_old + cs_rhs;
                        cs_target.at(cs_index) = cs_value;
                    }
                } else {
                    {
                        auto cs_target = ef_cpos;
                        auto cs_index = 1;
                        auto cs_old = cs_target.at(cs_index);
                        auto cs_rhs = ([&]() -> pls::cs::Int32 {
                            auto cs_left = AppData::EFF_EXPUP_DY()[0];
                            auto cs_right = (([&]() -> pls::cs::Int32 {
                                                auto cs_left = array[4] * array[1];
                                                auto cs_right = array[5] * array[1] * (array[1] + 1) / 2;
                                                return cs_left + cs_right;
                                            }())) /
                                            1000;
                            return cs_left + cs_right;
                        }());
                        pls::cs::Int32 cs_value = cs_old + cs_rhs;
                        cs_target.at(cs_index) = cs_value;
                    }
                }
                DrawExp(g, ef_cpos[0] - 18, ef_cpos[1] - 6);
                {
                    pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(array[3]);
                    pls::cs::Int32 cs_arg3 = ef_cpos[0] + 12;
                    pls::cs::Int32 cs_arg4 = ef_cpos[1] - 7;
                    DrawNumImageLongIntInt(g, 35, cs_arg2, cs_arg3, cs_arg4, 0, 2);
                }
            } else if (array[0] == 5) {
                {
                    pls::cs::Int32 cs_arg0 = array[2];
                    pls::cs::Int32 cs_arg1 = array[3];
                    IntArray cs_arg2 = ef_cpos;
                    game::Camera::ConvertScreenToCamera(cs_arg0, cs_arg1, cs_arg2);
                }
                if ([&]() -> bool {
                        auto cs_left = array[1];
                        auto cs_right = AppData::EFF_RPUP_TIME()[0];
                        return cs_left >= cs_right;
                    }()) {
                    {
                        auto cs_target = ef_cpos;
                        auto cs_index = 1;
                        auto cs_old = cs_target.at(cs_index);
                        auto cs_rhs = AppData::EFF_RPUP_DY()[1];
                        pls::cs::Int32 cs_value = cs_old + cs_rhs;
                        cs_target.at(cs_index) = cs_value;
                    }
                } else {
                    {
                        auto cs_target = ef_cpos;
                        auto cs_index = 1;
                        auto cs_old = cs_target.at(cs_index);
                        auto cs_rhs = ([&]() -> pls::cs::Int32 {
                            auto cs_left = AppData::EFF_RPUP_DY()[0];
                            auto cs_right = (([&]() -> pls::cs::Int32 {
                                                auto cs_left = array[6] * array[1];
                                                auto cs_right = array[7] * array[1] * (array[1] + 1) / 2;
                                                return cs_left + cs_right;
                                            }())) /
                                            1000;
                            return cs_left + cs_right;
                        }());
                        pls::cs::Int32 cs_value = cs_old + cs_rhs;
                        cs_target.at(cs_index) = cs_value;
                    }
                }
                {
                    pls::cs::Int32 cs_arg1 = ef_cpos[0] - 19 + 35;
                    pls::cs::Int32 cs_arg2 = ef_cpos[1] - 46 + 33;
                    pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(resCom2_)->seb.get_Item(83);
                    pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(resCom2_)->img.get_Item(94);
                    pls::cs::Int32 cs_arg5 = array[4];
                    DrawSeb(g, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
                }
                {
                    pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(array[5]);
                    pls::cs::Int32 cs_arg3 = ef_cpos[0] + 7 + 35;
                    pls::cs::Int32 cs_arg4 = ef_cpos[1] - 44 + 33;
                    DrawNumImageLongIntInt(g, 35, cs_arg2, cs_arg3, cs_arg4, 0, 2);
                }
            } else if (array[0] == 6) {
                if (array[1] < 0) {
                    continue;
                }
                {
                    pls::cs::Int32 cs_arg0 = array[2];
                    pls::cs::Int32 cs_arg1 = array[3];
                    IntArray cs_arg2 = ef_cpos;
                    game::Camera::ConvertScreenToCamera(cs_arg0, cs_arg1, cs_arg2);
                }
                if ([&]() -> bool {
                        auto cs_left = array[1];
                        auto cs_right = AppData::EFF_MONEYUP_TIME()[0];
                        return cs_left >= cs_right;
                    }()) {
                    {
                        auto cs_target = ef_cpos;
                        auto cs_index = 1;
                        auto cs_old = cs_target.at(cs_index);
                        auto cs_rhs = AppData::EFF_MONEYUP_DY()[1];
                        pls::cs::Int32 cs_value = cs_old + cs_rhs;
                        cs_target.at(cs_index) = cs_value;
                    }
                } else {
                    {
                        auto cs_target = ef_cpos;
                        auto cs_index = 1;
                        auto cs_old = cs_target.at(cs_index);
                        auto cs_rhs = ([&]() -> pls::cs::Int32 {
                            auto cs_left = AppData::EFF_MONEYUP_DY()[0];
                            auto cs_right = (([&]() -> pls::cs::Int32 {
                                                auto cs_left = array[5] * array[1];
                                                auto cs_right = array[6] * array[1] * (array[1] + 1) / 2;
                                                return cs_left + cs_right;
                                            }())) /
                                            1000;
                            return cs_left + cs_right;
                        }());
                        pls::cs::Int32 cs_value = cs_old + cs_rhs;
                        cs_target.at(cs_index) = cs_value;
                    }
                }
                if (kairo::unity::util::Language::English()) {
                    pls::cs::Int32 x = ef_cpos[0] + 33;
                    pls::cs::Int32 y = ef_cpos[1] - 15 + 5;
                    DrawMoney(g, 35, pls::cs::cast_integral<pls::cs::Int64>(array[4] * 100), x, y, 0, 0, 2,
                              false);
                    continue;
                }
                pls::cs::Int32 num = 0;
                pls::cs::Int32 num2 = 18;
                num2 += kl_lang::StringEx::Length(pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return kl_lang::JString::ValueOfInt(array[4]); })) *
                        8;
                pls::cs::Int32 num3 = ef_cpos[0] - num2 / 2 + 33;
                pls::cs::Int32 num4 = ef_cpos[1] - 15 + 5;
                pls::cs::String str =
                    AppData::CommaSeparate(pls::cs::cast_integral<pls::cs::Int64>(array[4]));
                str = kl_lang::StringEx::SubstringJ(str, 0, kl_lang::StringEx::Length(str) - num);
                {
                    auto cs_receiver = require(resCom2_)->seb.get_Item(35);
                    pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
                    require(cs_receiver)->DrawFrame(g, num3, num4, cs_arg3, 11, -1);
                }
                num3 += 9;
                bool flag = false;
                for (pls::cs::Int32 j = 0; j < kl_lang::StringEx::Length(str); ++j) {
                    char16_t c = kl_lang::StringEx::CharAt(str, j);
                    if (pls::cs::cast_integral<pls::cs::Int32>(c) ==
                        pls::cs::cast_integral<pls::cs::Int32>(u',')) {
                        flag = true;
                        continue;
                    }
                    {
                        auto cs_receiver = require(resCom2_)->seb.get_Item(35);
                        pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
                        require(cs_receiver)->DrawFrame(g, num3, num4, cs_arg3, c - 48, -1);
                    }
                    if (flag) {
                        {
                            auto cs_receiver = require(resCom2_)->seb.get_Item(35);
                            pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
                            require(cs_receiver)->DrawFrame(g, num3 - 2, num4, cs_arg3, 10, -1);
                        }
                        flag = false;
                    }
                    num3 += 8;
                }
                {
                    auto cs_receiver = require(resCom2_)->seb.get_Item(35);
                    pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resCom2_)->img;
                    require(cs_receiver)->DrawFrame(g, num3, num4, cs_arg3, 17, -1);
                }
            }
        }
    }
}

// M:main.AppData.UpdateEffect
void AppData::UpdateEffect() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.UpdateEffect", game);
    {
        for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_Size(require(effect_));
                                   });
             ++i) {
            IntArray array = pls::cs::unbox<IntArray>(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_java_util::Vector_2_ElementAt(require(effect_), i); }));
            if (array[0] == 0) {
                array[1]++;
                if (array[1] >= AppData::EFF_SHOOT_TIME()) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_RemoveElementAt(require(effect_), i);
                    });
                }
            } else if (array[0] == 1) {
                array[1]++;
                if (array[1] >= AppData::EFF_CHARGE_TIME()) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_RemoveElementAt(require(effect_), i);
                    });
                }
            } else if (array[0] == 2) {
                array[1]++;
                if ([&]() -> bool {
                        auto cs_left = array[1];
                        auto cs_right = AppData::EFF_TUP_TIME()[1];
                        return cs_left >= cs_right;
                    }()) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_RemoveElementAt(require(effect_), i);
                    });
                }
            } else if (array[0] == 3) {
                array[1]++;
                if (array[1] >= AppData::EFF_TLVUP_TIME()) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_RemoveElementAt(require(effect_), i);
                    });
                }
            } else if (array[0] == 4) {
                array[1]++;
                if ([&]() -> bool {
                        auto cs_left = array[1];
                        auto cs_right = AppData::EFF_EXPUP_TIME()[1];
                        return cs_left >= cs_right;
                    }()) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_RemoveElementAt(require(effect_), i);
                    });
                }
            } else if (array[0] == 5) {
                array[1]++;
                if ([&]() -> bool {
                        auto cs_left = array[1];
                        auto cs_right = AppData::EFF_RPUP_TIME()[1];
                        return cs_left >= cs_right;
                    }()) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_RemoveElementAt(require(effect_), i);
                    });
                }
            } else if (array[0] == 6) {
                array[1]++;
                if ([&]() -> bool {
                        auto cs_left = array[1];
                        auto cs_right = AppData::EFF_MONEYUP_TIME()[1];
                        return cs_left >= cs_right;
                    }()) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_RemoveElementAt(require(effect_), i);
                    });
                }
            }
        }
    }
}

// M:main.AppData.RemoveeEffect
void AppData::RemoveeEffect() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.RemoveeEffect", game);
    {
        for (pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                      return kl_java_util::Vector_2_Size(require(effect_));
                                  }) -
                                  1;
             num >= 0; --num) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_RemoveElementAt(require(effect_), num);
            });
        }
    }
}

// M:main.AppData.GetSeason(System.Int32)
pls::cs::Int32 AppData::GetSeason(pls::cs::Int32 month) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.GetSeason(System.Int32)", game);
    {
        if (3 <= month + 1 && month + 1 <= 5) {
            return 0;
        }
        if (6 <= month + 1 && month + 1 <= 8) {
            return 1;
        }
        if (9 <= month + 1 && month + 1 <= 11) {
            return 2;
        }
        return 3;
    }
}

// M:main.AppData.IntegerVectorToIntAry(java.util.Vector)
IntArray AppData::IntegerVectorToIntAry(pls::cs::Ref<kl_java_util::Vector> ary) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.IntegerVectorToIntAry(java.util.Vector)", game);
    {
        IntArray array = IntArray::make(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_java_util::Vector_2_Size(require(ary)); }));
        for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
            array[i] = pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require((pls::cs::unbox<pls::cs::Ref<kl_lang::JInteger>>(
                                   pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_ElementAt(require(ary), i);
                                   }))))
                    ->IntValue();
            });
        }
        return array;
    }
}

// M:main.AppData.PlayBgm(System.Int32)
void AppData::PlayBgm(pls::cs::Int32 bgm) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.PlayBgm(System.Int32)", game);
    {
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return pls::cs::culture_starts_with(require(AppData::GetInstance())->platform_,
                                                    literal(u"ap"));
            })) {
            return;
        }
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(require(resSound_)->sound.get_Item(bgm))->GetState();
            }) == 2) {
            return;
        }
        for (pls::cs::Int32 i = 0; i < AppData::BGM().length(); ++i) {
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(require(resSound_)->sound.get_Item(AppData::BGM()[i]))->GetState();
                }) == 2) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(require(resSound_)->sound.get_Item(AppData::BGM()[i]))->Stop();
                });
            }
        }
        pls::cs::Ref<pls::kairo::SoundPlayer> instance = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return pls::kairo::SoundPlayer::GetInstance(); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                pls::cs::Ref<pls::kairo::SoundBase> cs_arg0 = require(resSound_)->sound.get_Item(bgm);
                require(instance)->Play(cs_arg0);
            }());
        });
    }
}

// M:main.AppData.PlaySe(System.Int32)
void AppData::PlaySe(pls::cs::Int32 se) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.PlaySe(System.Int32)", game);
    {
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return pls::cs::culture_starts_with(require(AppData::GetInstance())->platform_,
                                                    literal(u"ap"));
            })) {
            return;
        }
        {
            pls::cs::Ref<pls::kairo::SoundPlayer> instance = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::kairo::SoundPlayer::GetInstance(); });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::Ref<pls::kairo::SoundBase> cs_arg0 = require(resSound_)->sound.get_Item(se);
                    require(instance)->Play(cs_arg0);
                }());
            });
        }
    }
}

// M:main.AppData.PlayJingle(System.Int32)
void AppData::PlayJingle(pls::cs::Int32 jingle) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.PlayJingle(System.Int32)", game);
    {
        Main::SetJingle(require(resSound_)->sound.get_Item(jingle), 20);
        PlaySe(jingle);
    }
}

// M:main.AppData.GetHttpErrorText
pls::cs::String AppData::GetHttpErrorText() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.GetHttpErrorText", game);
    {
        pls::cs::String result = literal(u"通信を許可し電波状況\nを確認して下さい");
        if (!is_null(kairo::unity::io::Http::GetErrorText())) {
            result = kairo::unity::io::Http::GetErrorText();
        }
        return result;
    }
}

// M:main.AppData.ShowNews(System.Int32,System.String)
bool AppData::ShowNews(pls::cs::Int32 id, pls::cs::String arg) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.ShowNews(System.Int32,System.String)", game);
    {
        pls::cs::Ref<form::FormManager> instance = form::FormManager::GetInstance();
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> bool {
                pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = form::SubForm::MakeNews(id, arg);
                return require(instance)->Push(cs_arg0);
            }());
        });
        return pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> bool {
                pls::cs::Ref<pls::kairo::FormBase> cs_arg0 =
                    form::SubForm::MakeDialog(literal(u"開幕ｷｯｸｵﾌ通信\nが発行されました"));
                return require(instance)->Push(cs_arg0);
            }());
        });
    }
}

// M:main.AppData.GetHighScore
pls::cs::Int64 AppData::GetHighScore() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.GetHighScore", game);
    {
        return require(sysSave_)->lngs[0];
    }
}

// M:main.AppData.SetHighScore(System.Int64)
void AppData::SetHighScore(pls::cs::Int64 score) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.SetHighScore(System.Int64)", game);
    {
        require(sysSave_)->lngs[0] = score;
    }
}

// M:main.AppData.GetNetHighScore
pls::cs::Int64 AppData::GetNetHighScore() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.GetNetHighScore", game);
    {
        return require(sysSave_)->lngs[1];
    }
}

// M:main.AppData.SetNetHighScore(System.Int64)
void AppData::SetNetHighScore(pls::cs::Int64 score) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.SetNetHighScore(System.Int64)", game);
    {
        require(sysSave_)->lngs[1] = score;
    }
}

// M:main.AppData.GetMoneyHighScore
pls::cs::Int64 AppData::GetMoneyHighScore() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.GetMoneyHighScore", game);
    {
        return require(sysSave_)->lngs[2];
    }
}

// M:main.AppData.SetMoneyHighScore(System.Int64)
void AppData::SetMoneyHighScore(pls::cs::Int64 score) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.SetMoneyHighScore(System.Int64)", game);
    {
        require(sysSave_)->lngs[2] = score;
    }
}

// M:main.AppData.GettMoneyNetHighScore
pls::cs::Int64 AppData::GettMoneyNetHighScore() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.GettMoneyNetHighScore", game);
    {
        return require(sysSave_)->lngs[3];
    }
}

// M:main.AppData.SettMoneyNetHighScore(System.Int64)
void AppData::SettMoneyNetHighScore(pls::cs::Int64 score) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.SettMoneyNetHighScore(System.Int64)", game);
    {
        require(sysSave_)->lngs[3] = score;
    }
}

// M:main.AppData.DateToTime(System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Int32 AppData::DateToTime(pls::cs::Int32 year, pls::cs::Int32 month, pls::cs::Int32 day,
                                   pls::cs::Int32 time) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:main.AppData.DateToTime(System.Int32,System.Int32,System.Int32,System.Int32)", game);
    {
        return DateToDays(year, month, day) * 24 * 60 * 60 + time;
    }
}

// M:main.AppData.DateToDays(System.Int32,System.Int32,System.Int32)
pls::cs::Int32 AppData::DateToDays(pls::cs::Int32 year, pls::cs::Int32 month, pls::cs::Int32 week) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.DateToDays(System.Int32,System.Int32,System.Int32)",
                     game);
    {
        return year * 336 + month * 28 + week * 7;
    }
}

// M:main.AppData.DrawIcon(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32)
void AppData::DrawIcon(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                       pls::cs::Int32 icon) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawIcon(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32)", game);
    {
    }
}

// M:main.AppData.AddMoney(System.Int32,System.Int32)
pls::cs::Int64 AppData::AddMoney(pls::cs::Int32 add, pls::cs::Int32 recordId) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.AddMoney(System.Int32,System.Int32)", game);
    {
        {
            auto cs_target = require(save_)->lngs;
            auto cs_index = 0;
            auto cs_value = AppData::ClampLong(require(save_)->lngs[0] + pls::cs::Int64(add),
                                               (-9223372036854775807ll - 1) /* Int64.MinValue */,
                                               9223372036854775807ll /* Int64.MaxValue */);
            cs_target.set_Item(cs_index, cs_value);
        }
        require(AppData::udat_())->RecordAddMoney(recordId, add);
        if (require(save_)->ints[14] == 0 && ([&]() -> bool {
                auto cs_left = require(save_)->lngs[0];
                auto cs_right = GetMoneyHighScore();
                return cs_left > cs_right;
            }())) {
            require(sysSave_)->strs[1] = require(save_)->strs[0];
            SetMoneyHighScore(require(save_)->lngs[0]);
        }
        return require(save_)->lngs[0];
    }
}

// M:main.AppData.SubMoney(System.Int32,System.Int32)
pls::cs::Int64 AppData::SubMoney(pls::cs::Int32 sub, pls::cs::Int32 recordId) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.SubMoney(System.Int32,System.Int32)", game);
    {
        {
            auto cs_target = require(save_)->lngs;
            auto cs_index = 0;
            auto cs_value = AppData::ClampLong(require(save_)->lngs[0] - pls::cs::Int64(sub),
                                               (-9223372036854775807ll - 1) /* Int64.MinValue */,
                                               9223372036854775807ll /* Int64.MaxValue */);
            cs_target.set_Item(cs_index, cs_value);
        }
        require(AppData::udat_())->RecordSubMoney(recordId, sub);
        return require(save_)->lngs[0];
    }
}

// M:main.AppData.ChPayMoney(System.Int32)
bool AppData::ChPayMoney(pls::cs::Int32 cost) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.ChPayMoney(System.Int32)", game);
    {
        if (require(save_)->lngs[0] >= pls::cs::cast_integral<pls::cs::Int64>(cost)) {
            return true;
        }
        return false;
    }
}

// M:main.AppData.RotatePoint(System.Int32,System.Int32,System.Int32)
IntArray AppData::RotatePoint(pls::cs::Int32 x, pls::cs::Int32 y, pls::cs::Int32 dir) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.RotatePoint(System.Int32,System.Int32,System.Int32)",
                     game);
    {
        if ((dir == 0)) {
            rotatePoint_tmp[0] = x;
            rotatePoint_tmp[1] = y;
        } else if ((dir == 1)) {
            rotatePoint_tmp[0] = -y;
            rotatePoint_tmp[1] = x;
        } else if ((dir == 2)) {
            rotatePoint_tmp[0] = -x;
            rotatePoint_tmp[1] = -y;
        } else {
            rotatePoint_tmp[0] = y;
            rotatePoint_tmp[1] = -x;
        }
        return rotatePoint_tmp;
    }
}

// M:main.AppData.UpdatePassiveScript
void AppData::UpdatePassiveScript() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.UpdatePassiveScript", game);
    {
    }
}

// M:main.AppData.RemoveAllMenuForms
bool AppData::RemoveAllMenuForms() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.RemoveAllMenuForms", game);
    {
        pls::cs::Ref<form::FormManager> instance = form::FormManager::GetInstance();
        pls::cs::Int32 formsNum =
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(instance)->GetFormsNum(); });
        for (pls::cs::Int32 num = formsNum - 1; num >= 0; --num) {
            pls::cs::Ref<pls::kairo::FormBase> form = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(instance)->GetForm(num); });
            if (pls::diagnostic::api_call([&]() -> decltype(auto) { return require(form)->GetId(); }) != 4) {
                continue;
            }
            pls::cs::Ref<form::SubForm> subForm =
                pls::cs::unbox<pls::cs::Ref<form::SubForm>>(pls::cs::box(form));
            if (require(subForm)->IsMenu()) {
                pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(instance)->Pop(subForm); });
            }
        }
        return true;
    }
}

// M:main.AppData.GetNearNeighborNode(System.Int32[][][],System.Int32,System.Int32)
IntArray AppData::GetNearNeighborNode(IntArray3 nodeMap, pls::cs::Int32 x, pls::cs::Int32 y) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:main.AppData.GetNearNeighborNode(System.Int32[][][],System.Int32,System.Int32)",
                     game);
    {
        return GetNearNeighborNode(nodeMap, x, y, IntArray{});
    }
}

// M:main.AppData.GetNearNeighborNode(System.Int32[][][],System.Int32,System.Int32,System.Int32[])
IntArray AppData::GetNearNeighborNode(IntArray3 nodeMap, pls::cs::Int32 x, pls::cs::Int32 y,
                                      IntArray priority) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.GetNearNeighborNode(System.Int32[][][],System.Int32,System.Int32,System.Int32[])",
        game);
    {
        pls::cs::Int32 num = 2147483647 /* Int32.MaxValue */;
        IntArray result = IntArray{};
        for (pls::cs::Int32 i = 0; i < AppData::DIRECT1().length(); ++i) {
            pls::cs::Int32 num2 = x + AppData::DIRECT1()[i][0];
            pls::cs::Int32 num3 = y + AppData::DIRECT1()[i][1];
            if ((((num3 < 0) || ((nodeMap.length() <= num3))) || (num2 < 0)) ||
                ((nodeMap[0].length() <= num2))) {
                continue;
            }
            IntArray array = nodeMap[num3][num2];
            if (([&]() {
                    auto cs_left = pls::cs::box(priority);
                    auto cs_right = pls::cs::box(IntArray{});
                    return cs_left != cs_right;
                }()) &&
                ([&]() {
                    auto cs_left = pls::cs::box(array);
                    auto cs_right = pls::cs::box(priority);
                    return cs_left == cs_right;
                }())) {
                return priority;
            }
            pls::cs::Int32 num4 = array[0];
            if (num4 < num) {
                num = num4;
                result = array;
            }
        }
        return result;
    }
}

// M:main.AppData.GetNeighborNodeList(System.Int32[][][],System.Int32,System.Int32)
IntArray2 AppData::GetNeighborNodeList(IntArray3 nodeMap, pls::cs::Int32 x, pls::cs::Int32 y) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:main.AppData.GetNeighborNodeList(System.Int32[][][],System.Int32,System.Int32)",
                     game);
    {
        pls::cs::Ref<kl_java_util::Vector> vector = kl_java_util::Vector::create();
        for (pls::cs::Int32 i = 0; i < AppData::DIRECT1().length(); ++i) {
            pls::cs::Int32 num = x + AppData::DIRECT1()[i][0];
            pls::cs::Int32 num2 = y + AppData::DIRECT1()[i][1];
            if ((((num2 < 0) || ((nodeMap.length() <= num2))) || (num < 0)) ||
                ((nodeMap[0].length() <= num))) {
                continue;
            }
            IntArray array = nodeMap[num2][num];
            if (array[0] < 2147483647 /* Int32.MaxValue */) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_AddElement(require(vector), pls::cs::box(array));
                });
            }
        }
        IntArray2 array2 = IntArray2::make(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_java_util::Vector_2_Size(require(vector)); }));
        for (pls::cs::Int32 j = 0; j < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_Size(require(vector));
                                   });
             ++j) {
            array2[j] = pls::cs::unbox<IntArray>(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_java_util::Vector_2_ElementAt(require(vector), j); }));
        }
        for (pls::cs::Int32 k = 0; k < pls::cs::Int32(array2.length()) - 1; ++k) {
            for (pls::cs::Int32 num3 = pls::cs::Int32(array2.length()) - 1; num3 > k; --num3) {
                if ([&]() -> bool {
                        auto cs_left = array2[num3][0];
                        auto cs_right = array2[num3 - 1][0];
                        return cs_left < cs_right;
                    }()) {
                    IntArray array3 = array2[num3];
                    array2[num3] = array2[num3 - 1];
                    array2[num3 - 1] = array3;
                }
            }
        }
        return array2;
    }
}

// M:main.AppData.GetIntArray(System.String)
IntArray AppData::GetIntArray(pls::cs::String src) {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.GetIntArray(System.String)", game);
    {
        StringArray array = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StringUtil::Split(src, literal(u",")); });
        IntArray array2 = IntArray::make(array.length());
        for (pls::cs::Int32 i = 0; i < array2.length(); ++i) {
            array2[i] = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_lang::JInteger::ParseInt(array[i]); });
        }
        return array2;
    }
}

// M:main.AppData.GetInt2Array(System.String)
IntArray2 AppData::GetInt2Array(pls::cs::String src) {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.GetInt2Array(System.String)", game);
    {
        StringArray array = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StringUtil::Split(src, literal(u"&")); });
        IntArray2 array2 = IntArray2::make(array.length());
        for (pls::cs::Int32 i = 0; i < array2.length(); ++i) {
            array2[i] = AppData::GetIntArray(array[i]);
        }
        return array2;
    }
}

// M:main.AppData.BooleanToByteArray(System.Boolean[])
ByteArray AppData::BooleanToByteArray(BoolArray bools) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.BooleanToByteArray(System.Boolean[])", game);
    {
        pls::cs::Ref<kl_java_io::ByteArrayOutputStream> byteArrayOutputStream =
            kl_java_io::ByteArrayOutputStream::create();
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteInt(
                static_cast<pls::cs::Ref<kl_java_io::OutputStream>>(byteArrayOutputStream), bools.length());
        });
        for (pls::cs::Int32 i = 0; i < bools.length(); ++i) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::StreamUtil::WriteByte(
                    static_cast<pls::cs::Ref<kl_java_io::OutputStream>>(byteArrayOutputStream),
                    pls::cs::cast_integral<std::int8_t>((bools[i] ? 1 : 0)));
            });
        }
        ByteArray result = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(byteArrayOutputStream)->ToByteArray(); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(byteArrayOutputStream)->Close(); });
        return result;
    }
}

// M:main.AppData.SbyteArrayToBoolean(System.Byte[])
BoolArray AppData::SbyteArrayToBoolean(ByteArray src) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.SbyteArrayToBoolean(System.Byte[])", game);
    {
        return SbyteArrayToBoolean(src, -1);
    }
}

// M:main.AppData.SbyteArrayToBoolean(System.Byte[],System.Int32)
BoolArray AppData::SbyteArrayToBoolean(ByteArray src, pls::cs::Int32 size) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.SbyteArrayToBoolean(System.Byte[],System.Int32)",
                     game);
    {
        pls::cs::Ref<kl_java_io::ByteArrayInputStream> byteArrayInputStream =
            kl_java_io::ByteArrayInputStream::create(src);
        pls::cs::Int32 num = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream); });
        if (size == -1) {
            size = num;
        }
        BoolArray array = BoolArray::make(size);
        for (pls::cs::Int32 i = 0; i < num && i < array.length(); ++i) {
            array[i] =
                (pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                     return kl_unity_util::StreamUtil::ReadByte(byteArrayInputStream);
                 })) == 1);
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(byteArrayInputStream)->Close(); });
        return array;
    }
}

// M:main.AppData.IntToByteArray(System.Int32[])
ByteArray AppData::IntToByteArray(IntArray ints) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.IntToByteArray(System.Int32[])", game);
    {
        pls::cs::Ref<kl_java_io::ByteArrayOutputStream> byteArrayOutputStream =
            kl_java_io::ByteArrayOutputStream::create();
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteInt(
                static_cast<pls::cs::Ref<kl_java_io::OutputStream>>(byteArrayOutputStream), ints.length());
        });
        for (pls::cs::Int32 i = 0; i < ints.length(); ++i) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::StreamUtil::WriteInt(
                    static_cast<pls::cs::Ref<kl_java_io::OutputStream>>(byteArrayOutputStream), ints[i]);
            });
        }
        ByteArray result = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(byteArrayOutputStream)->ToByteArray(); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(byteArrayOutputStream)->Close(); });
        return result;
    }
}

// M:main.AppData.SbyteArrayToInt(System.Byte[])
IntArray AppData::SbyteArrayToInt(ByteArray src) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.SbyteArrayToInt(System.Byte[])", game);
    {
        return SbyteArrayToInt(src, -1);
    }
}

// M:main.AppData.SbyteArrayToInt(System.Byte[],System.Int32)
IntArray AppData::SbyteArrayToInt(ByteArray src, pls::cs::Int32 size) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.SbyteArrayToInt(System.Byte[],System.Int32)", game);
    {
        pls::cs::Ref<kl_java_io::ByteArrayInputStream> byteArrayInputStream =
            kl_java_io::ByteArrayInputStream::create(src);
        pls::cs::Int32 num = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream); });
        if (size == -1) {
            size = num;
        }
        IntArray array = IntArray::make(size);
        for (pls::cs::Int32 i = 0; i < num && i < array.length(); ++i) {
            array[i] = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream); });
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(byteArrayInputStream)->Close(); });
        return array;
    }
}

// M:main.AppData.FrameToMilliSecond(System.Int32)
pls::cs::Int32 AppData::FrameToMilliSecond(pls::cs::Int32 frame) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.FrameToMilliSecond(System.Int32)", game);
    {
        return 1000 * frame / 20;
    }
}

// M:main.AppData.DrawOutline(kairo.unity.ui.Graphics,System.Int32,System.Int32,kairo.unity.ui.Seb,kairo.unity.ui.Image[],System.Int32,System.Int32,System.Int32)
void AppData::DrawOutline(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                          pls::cs::Ref<kairo::unity::ui::Seb> seb,
                          pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> images, pls::cs::Int32 frame,
                          pls::cs::Int32 lineWidth, pls::cs::Int32 color) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawOutline(kairo.unity.ui.Graphics,System.Int32,System.Int32,kairo.unity.ui.Seb,kairo.unity.ui.Image[],System.Int32,System.Int32,System.Int32)",
        game);
    {
        IntArray boundingRect = require(seb)->GetBoundingRect();
        pls::cs::Int32 num = boundingRect[2] - boundingRect[0] + lineWidth * 2;
        pls::cs::Int32 num2 = boundingRect[3] - boundingRect[1] + lineWidth * 2;
        if (!is_null(imgOutline1_) && (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return require(imgOutline1_)->GetWidth();
                                       }) < num ||
                                       pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return require(imgOutline1_)->GetHeight();
                                       }) < num2)) {
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(graOutline1_)->Dispose(false); });
            graOutline1_ = pls::cs::Ref<pls::kairo::Graphics>{};
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(imgOutline1_)->Dispose(); });
            imgOutline1_ = pls::cs::Ref<pls::kairo::Image>{};
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(graOutline2_)->Dispose(false); });
            graOutline2_ = pls::cs::Ref<pls::kairo::Graphics>{};
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(imgOutline2_)->Dispose(); });
            imgOutline2_ = pls::cs::Ref<pls::kairo::Image>{};
        }
        if (is_null(imgOutline1_)) {
            imgOutline1_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
                return pls::kairo::Image::CreateImage(num, num2, static_cast<pls::kairo::Image::Format>(3),
                                                      static_cast<pls::kairo::Image::Filter>(-1));
            });
            graOutline1_ = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(imgOutline1_)->GetGraphics(); });
            imgOutline2_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
                return pls::kairo::Image::CreateImage(num, num2, static_cast<pls::kairo::Image::Format>(3),
                                                      static_cast<pls::kairo::Image::Filter>(-1));
            });
            graOutline2_ = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(imgOutline2_)->GetGraphics(); });
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(graOutline1_)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);
            }));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                auto cs_receiver = graOutline1_;
                pls::cs::Single cs_arg2 = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(imgOutline1_)->GetWidth(); });
                pls::cs::Single cs_arg3 = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(imgOutline1_)->GetHeight(); });
                require(cs_receiver)->FillRect(0.0f, 0.0f, cs_arg2, cs_arg3);
            }());
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(graOutline1_)->SetRenderMode(0, 0, 0); });
        for (pls::cs::Int32 i = 0; i < 3; ++i) {
            for (pls::cs::Int32 j = 0; j < 3; ++j) {
                if ((i == 1) && (j == 1)) {
                    continue;
                }
                {
                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = graOutline1_;
                    pls::cs::Single cs_arg1 = j * lineWidth - boundingRect[0];
                    pls::cs::Single cs_arg2 = i * lineWidth - boundingRect[1];
                    require(seb)->DrawFrame(cs_arg0, cs_arg1, cs_arg2, images, frame, -1);
                }
            }
        }
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(graOutline1_)->SetRenderMode(0, 255, 0); });
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(graOutline2_)->SetColor(color); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                auto cs_receiver = graOutline2_;
                pls::cs::Single cs_arg2 = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(imgOutline2_)->GetWidth(); });
                pls::cs::Single cs_arg3 = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(imgOutline2_)->GetHeight(); });
                require(cs_receiver)->FillRect(0.0f, 0.0f, cs_arg2, cs_arg3);
            }());
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(graOutline2_)->SetRenderMode(2, 255, 255); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(graOutline2_)->DrawImage(imgOutline1_, 0.0f, 0.0f, 0, 0, num, num2);
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(graOutline2_)->SetRenderMode(0, 0, 0); });
        {
            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = graOutline2_;
            pls::cs::Single cs_arg1 = lineWidth - boundingRect[0];
            pls::cs::Single cs_arg2 = lineWidth - boundingRect[1];
            require(seb)->DrawFrame(cs_arg0, cs_arg1, cs_arg2, images, frame, -1);
        }
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(graOutline2_)->SetRenderMode(0, 255, 0); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(imgOutline2_)
                ->SetTransparentColor(pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0); }));
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(imgOutline2_)->SetTransparentEnabled(true); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                pls::cs::Ref<pls::kairo::Image> cs_arg0 = imgOutline2_;
                pls::cs::Single cs_arg1 = x + boundingRect[0] - lineWidth;
                pls::cs::Single cs_arg2 = y + boundingRect[1] - lineWidth;
                require(g)->DrawImage(cs_arg0, cs_arg1, cs_arg2, 0, 0, num, num2);
            }());
        });
    }
}

// M:main.AppData.DrawOutline(kairo.unity.ui.Graphics,System.Int32,System.Int32,kairo.unity.ui.Image,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void AppData::DrawOutline(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                          pls::cs::Ref<pls::kairo::Image> img, pls::cs::Int32 u, pls::cs::Int32 v,
                          pls::cs::Int32 w, pls::cs::Int32 h, pls::cs::Int32 lineWidth,
                          pls::cs::Int32 color) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawOutline(kairo.unity.ui.Graphics,System.Int32,System.Int32,kairo.unity.ui.Image,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        pls::cs::Ref<pls::kairo::Image> image = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return pls::kairo::Image::CreateImage(w + lineWidth * 2, h + lineWidth * 2,
                                                  static_cast<pls::kairo::Image::Format>(3),
                                                  static_cast<pls::kairo::Image::Filter>(-1));
        });
        pls::cs::Ref<pls::kairo::Image> image2 = pls::cs::Ref<pls::kairo::Image>{};
        pls::cs::Ref<pls::kairo::Graphics> graphics =
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(image)->GetGraphics(); });
        image2 = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> pls::cs::Ref<pls::kairo::Image> {
                pls::cs::Int32 cs_arg0 =
                    pls::diagnostic::api_call([&]() -> decltype(auto) { return require(image)->GetWidth(); });
                pls::cs::Int32 cs_arg1 = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(image)->GetHeight(); });
                return pls::kairo::Image::CreateImage(cs_arg0, cs_arg1,
                                                      static_cast<pls::kairo::Image::Format>(3),
                                                      static_cast<pls::kairo::Image::Filter>(-1));
            }());
        });
        pls::cs::Ref<pls::kairo::Graphics> graphics2 =
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(image2)->GetGraphics(); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(graphics)->SetColor(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255); }));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                pls::cs::Single cs_arg2 =
                    pls::diagnostic::api_call([&]() -> decltype(auto) { return require(image)->GetWidth(); });
                pls::cs::Single cs_arg3 = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(image)->GetHeight(); });
                require(graphics)->FillRect(0.0f, 0.0f, cs_arg2, cs_arg3);
            }());
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(graphics)->SetRenderMode(0, 0, 0); });
        for (pls::cs::Int32 i = 0; i < 3; ++i) {
            for (pls::cs::Int32 j = 0; j < 3; ++j) {
                if ((i == 1) && (j == 1)) {
                    continue;
                }
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(graphics)->DrawImage(img, j * lineWidth, i * lineWidth, u, v, w, h);
                });
            }
        }
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(graphics)->SetRenderMode(0, 255, 0); });
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(graphics2)->SetColor(color); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                pls::cs::Single cs_arg2 = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(image2)->GetWidth(); });
                pls::cs::Single cs_arg3 = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(image2)->GetHeight(); });
                require(graphics2)->FillRect(0.0f, 0.0f, cs_arg2, cs_arg3);
            }());
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(graphics2)->SetRenderMode(2, 255, 255); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(graphics2)->DrawImage(image, 0.0f, 0.0f); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(graphics2)->SetRenderMode(0, 0, 0); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(graphics2)->DrawImage(img, lineWidth, lineWidth, u, v, w, h);
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(graphics2)->SetRenderMode(0, 255, 0); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(image2)->SetTransparentColor(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0); }));
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(image2)->SetTransparentEnabled(true); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->DrawImage(image2, x - lineWidth, y - lineWidth); });
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(graphics)->Dispose(false); });
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(image)->Dispose(); });
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(graphics2)->Dispose(false); });
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(image2)->Dispose(); });
    }
}

// M:main.AppData.CheckTimeZone(System.Int32,System.Int32,System.Int32)
bool AppData::CheckTimeZone(pls::cs::Int32 time, pls::cs::Int32 start, pls::cs::Int32 end) {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:main.AppData.CheckTimeZone(System.Int32,System.Int32,System.Int32)", game);
    {
        if (start > end) {
            return start <= time || time < end;
        }
        return start <= time && time < end;
    }
}

// M:main.AppData.ResourceReDownload
void AppData::ResourceReDownload() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.ResourceReDownload", game);
    {
    }
}

// M:main.AppData.DrawMeter(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32)
void AppData::DrawMeter(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                        pls::cs::Int32 value, pls::cs::Int32 max_, pls::cs::Int32 scaleNum, bool reverse,
                        pls::cs::Int32 anchor) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawMeter(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32)",
        game);
    {
        DrawMeter(g, x, y, value, max_, scaleNum, reverse, anchor, 12);
    }
}

// M:main.AppData.DrawMeter(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Int32)
void AppData::DrawMeter(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                        pls::cs::Int32 value, pls::cs::Int32 max_, pls::cs::Int32 scaleNum, bool reverse,
                        pls::cs::Int32 anchor, pls::cs::Int32 height) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawMeter(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Int32)",
        game);
    {
        y -= 2;
        if ((anchor & 4) != 0) {
            x -= scaleNum * 2 + 3;
        } else if ((anchor & 2) != 0) {
            x -= (scaleNum * 2 + 3) / 2;
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->SetColor(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0); }));
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->FillRect(x, y + 2, scaleNum * 2 + 3, height - 4); });
        if (height > 8) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(g)->SetColor(pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(64, 64, 64); }));
            });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(g)->FillRect(x + 1, y + 3, scaleNum * 2 + 1, height - 6);
            });
        } else {
            --y;
            height += 2;
        }
        pls::cs::Int32 num = 0;
        pls::cs::Int32 num2 = scaleNum;
        pls::cs::Int32 num3 = 1;
        if (reverse) {
            num = scaleNum - 1;
            num2 = -1;
            num3 = -1;
        }
        pls::cs::Int32 num4 = max_ / scaleNum;
        pls::cs::Int32 num5 = value;
        for (pls::cs::Int32 i = num; i != num2; i += num3) {
            pls::cs::Int32 num6 = height - 8;
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(g)->SetColor(pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(32, 32, 32); }));
            });
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(g)->FillRect(x + 2 + i * 2, y + 4, 1.0f, num6); });
            pls::cs::Int32 num7 = AppData::ClampMax(num5 * num6 / num4, num6);
            if (num7 > 0) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return pls::kairo::Graphics::GetColorOfRGB(64, 255, 128);
                    }));
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->FillRect(x + 2 + i * 2, y + 4 + num6 - num7, 1.0f, num7);
                });
            }
            num5 -= num4;
        }
    }
}

// M:main.AppData.GetAllStock(System.Int32)
pls::cs::Int32 AppData::GetAllStock(pls::cs::Int32 itemId) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.GetAllStock(System.Int32)", game);
    {
        {
            pls::cs::Int32 recoveredReturn = 0;
            return recoveredReturn;
        }
    }
}

// M:main.AppData.GetStockTotal(System.Int32[])
pls::cs::Int32 AppData::GetStockTotal(IntArray stock) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.GetStockTotal(System.Int32[])", game);
    {
        if ([&]() {
                auto cs_left = pls::cs::box(stock);
                auto cs_right = pls::cs::box(IntArray{});
                return cs_left == cs_right;
            }()) {
            return 0;
        }
        pls::cs::Int32 num = 0;
        for (pls::cs::Int32 i = 0; i < stock.length(); ++i) {
            num += stock[i];
        }
        return num;
    }
}

// M:main.AppData.SearchInteger(System.Int32[],System.Int32)
pls::cs::Int32 AppData::SearchInteger(IntArray array, pls::cs::Int32 key) {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.SearchInteger(System.Int32[],System.Int32)", game);
    {
        if ([&]() {
                auto cs_left = pls::cs::box(array);
                auto cs_right = pls::cs::box(IntArray{});
                return cs_left == cs_right;
            }()) {
            return -1;
        }
        for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
            if (array[i] == key) {
                return i;
            }
        }
        return -1;
    }
}

// M:main.AppData.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean,kairo.unity.form.FormBase,System.Int32)
IntArray AppData::DrawCommand(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String str, pls::cs::Int32 x,
                              pls::cs::Int32 y, pls::cs::Int32 anchor, bool active, pls::cs::Int32 margin,
                              bool cursor, pls::cs::Ref<pls::kairo::FormBase> form, pls::cs::Int32 frame) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean,kairo.unity.form.FormBase,System.Int32)",
        game);
    {
        pls::cs::Ref<pls::kairo::Font> font = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{}); });
        pls::cs::Int32 num =
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(font)->StringWidth(str); });
        pls::cs::Int32 height =
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(font)->GetHeight(); });
        IntArray anchorPosition = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return pls::kairo::Graphics::GetAnchorPosition(x, y, num, height, anchor);
        });
        pls::cs::Int32 color =
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->GetColor(); });
        if (active) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(g)->SetColor(pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(205, 235, 111); }));
            });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::Single cs_arg0 = anchorPosition[0] - margin;
                    pls::cs::Single cs_arg1 = anchorPosition[1] - 1;
                    require(g)->FillRect(cs_arg0, cs_arg1, num + margin * 2, height + 2);
                }());
            });
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->SetColor(color); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                pls::cs::Single cs_arg1 = anchorPosition[0];
                pls::cs::Single cs_arg2 = anchorPosition[1];
                require(g)->DrawString(str, cs_arg1, cs_arg2);
            }());
        });
        if (cursor) {
        }
        drawCommand_tmp[0] = anchorPosition[0] - margin - 4;
        drawCommand_tmp[1] = anchorPosition[1] - 1 - 1;
        drawCommand_tmp[2] = num + margin * 2 + 8;
        drawCommand_tmp[3] = height + 2 + 2;
        return drawCommand_tmp;
    }
}

// M:main.AppData.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean,kairo.unity.form.FormBase,System.Int32)
void AppData::DrawCommandIntBool(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String str, pls::cs::Int32 x,
                                 pls::cs::Int32 y, pls::cs::Int32 w, pls::cs::Int32 anchor, bool active,
                                 bool cursor, pls::cs::Ref<pls::kairo::FormBase> form, pls::cs::Int32 frame) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean,kairo.unity.form.FormBase,System.Int32)",
        game);
    {
        pls::cs::Ref<pls::kairo::Font> font = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{}); });
        pls::cs::Int32 height =
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(font)->GetHeight(); });
        pls::cs::Int32 width =
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(font)->StringWidth(str); });
        IntArray anchorPosition = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return pls::kairo::Graphics::GetAnchorPosition(x, y, width, height, anchor);
        });
        pls::cs::Int32 color =
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->GetColor(); });
        if (active) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(g)->SetColor(pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(205, 235, 111); }));
            });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::Single cs_arg1 = anchorPosition[1] - 1;
                    require(g)->FillRect(x - w / 2, cs_arg1, w, height + 2);
                }());
            });
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->SetColor(color); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                pls::cs::Single cs_arg1 = anchorPosition[0];
                pls::cs::Single cs_arg2 = anchorPosition[1];
                require(g)->DrawString(str, cs_arg1, cs_arg2);
            }());
        });
        if (cursor) {
        }
        return;
    }
}

// M:main.AppData.GetMainBGM
pls::cs::Int32 AppData::GetMainBGM() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.GetMainBGM", game);
    {
        return 0;
    }
}

// M:main.AppData.Gc
void AppData::Gc() {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.Gc", game);
    {
        {
            pls::cs::GcCallSite gc_site("M:main.AppData.Gc");
            pls::diagnostic::api_call([&]() -> decltype(auto) { return kl_lang::JSystem::Gc(); });
        }
        java::lang::JThread::Yield();
        try {
            java::lang::JThread::Sleep(100ll);
        } catch (const pls::cs::Exception& cs_caught_149) {
            pls::cs::capture_exception(cs_caught_149);
            {
            }
        }
    }
}

// M:main.AppData.Sort(System.Int32[])
void AppData::Sort(IntArray list) {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.Sort(System.Int32[])", game);
    {
        for (pls::cs::Int32 i = 0; i < pls::cs::Int32(list.length()) - 1; ++i) {
            for (pls::cs::Int32 num = pls::cs::Int32(list.length()) - 1; num > i; --num) {
                if (list[num - 1] > list[num]) {
                    pls::cs::Int32 num2 = list[num];
                    list[num] = list[num - 1];
                    list[num - 1] = num2;
                }
            }
        }
    }
}

// M:main.AppData.GetTime(System.Int32,System.Int32)
pls::cs::Int32 AppData::GetTime(pls::cs::Int32 week, pls::cs::Int32 time) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.GetTime(System.Int32,System.Int32)", game);
    {
        pls::cs::Int32 num = 0;
        num += week % 4 * 21600;
        num += time / 4;
        num = (num + 43200) % 86400;
        return num;
    }
}

// M:main.AppData.CheckNightTime(System.Int32)
bool AppData::CheckNightTime(pls::cs::Int32 time) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.CheckNightTime(System.Int32)", game);
    {
        pls::cs::Int32 num = time / 3600;
        return num < 6 || 20 <= num;
    }
}

// M:main.AppData.CheckSleepingTime(System.Int32)
bool AppData::CheckSleepingTime(pls::cs::Int32 time) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.CheckSleepingTime(System.Int32)", game);
    {
        pls::cs::Int32 num = time / 3600;
        return num < 5 || 22 <= num;
    }
}

// M:main.AppData.CheckPointInPolygon(System.Int32,System.Int32,System.Int32[][])
bool AppData::CheckPointInPolygon(pls::cs::Int32 x, pls::cs::Int32 y, IntArray2 aPoint) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:main.AppData.CheckPointInPolygon(System.Int32,System.Int32,System.Int32[][])", game);
    {
        pls::cs::Int32 num = 0;
        IntArray array = aPoint[0];
        bool flag = x <= array[0];
        bool flag2 = y <= array[1];
        for (pls::cs::Int32 i = 1; i < pls::cs::Int32(aPoint.length()) + 1; ++i) {
            IntArray array2 = aPoint[i % aPoint.length()];
            bool flag3 = x <= array2[0];
            bool flag4 = y <= array2[1];
            if (flag2 != flag4) {
                if (flag == flag3) {
                    if (flag) {
                        num += ((flag2) ? -1 : 1);
                    }
                } else if (x <= ([&]() -> pls::cs::Int32 {
                               auto cs_left = array[0];
                               auto cs_right = ([&]() -> pls::cs::Int32 {
                                   auto cs_left = ([&]() -> pls::cs::Int32 {
                                       auto cs_left = (([&]() -> pls::cs::Int32 {
                                           auto cs_left = array2[0];
                                           auto cs_right = array[0];
                                           return cs_left - cs_right;
                                       }()));
                                       auto cs_right = (y - array[1]);
                                       return cs_left * cs_right;
                                   }());
                                   auto cs_right = (([&]() -> pls::cs::Int32 {
                                       auto cs_left = array2[1];
                                       auto cs_right = array[1];
                                       return cs_left - cs_right;
                                   }()));
                                   return cs_left / cs_right;
                               }());
                               return cs_left + cs_right;
                           }())) {
                    num += ((flag2) ? -1 : 1);
                }
            }
            array = array2;
            flag = flag3;
            flag2 = flag4;
        }
        return 0 != num;
    }
}

// M:main.AppData.DrawFukidashiBalloon(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32)
void AppData::DrawFukidashiBalloon(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String text,
                                   pls::cs::Int32 dx, pls::cs::Int32 dy, pls::cs::Int32 color) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawFukidashiBalloon(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32)",
        game);
    {
        dy += 12;
        pls::cs::Int32 color2 =
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->GetColor(); });
        pls::cs::Ref<kairo::unity::ui::Balloon> balloon = kairo::unity::ui::Balloon::create(text, color);
        require(balloon)->Draw(g, dx, dy);
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->SetColor(color2); });
    }
}

// M:main.AppData.DrawFukidashiKimochi(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)
void AppData::DrawFukidashiKimochi(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 dx, pls::cs::Int32 dy,
                                   pls::cs::Int32 numValue, pls::cs::Int32 numSeb) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawFukidashiKimochi(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        pls::cs::Ref<pls::cs::Cell<pls::cs::Ref<pls::kairo::Graphics>>> g_cell =
            pls::cs::make_ref<pls::cs::Cell<pls::cs::Ref<pls::kairo::Graphics>>>(g);
        pls::cs::Ref<pls::cs::Cell<pls::cs::Int32>> numValue_cell =
            pls::cs::make_ref<pls::cs::Cell<pls::cs::Int32>>(numValue);
        pls::cs::Ref<pls::cs::Cell<pls::cs::Int32>> numSeb_cell =
            pls::cs::make_ref<pls::cs::Cell<pls::cs::Int32>>(numSeb);
        {
            form::SubForm::ensure_initialized();

            dy += 12;
            pls::cs::Int32 color = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(g_cell->value)->GetColor(); });
            pls::cs::String cs_arg0_55 = form::MyFormBase::LT(literal(u"気持ち"));
            pls::cs::Ref<kairo::unity::ui::Balloon> balloon =
                kairo::unity::ui::Balloon::create(cs_arg0_55, form::SubForm::SC_WINDOW_BLUE());
            pls::cs::Ref<pls::cs::Cell<pls::cs::Int32>> keta_cell =
                pls::cs::make_ref<pls::cs::Cell<pls::cs::Int32>>(3);
            {
                pls::cs::Int32 cs_arg1 = 12 + 8 * keta_cell->value;
                pls::cs::Delegate<void(pls::cs::Ref<pls::kairo::Graphics>, pls::cs::Single,
                                       pls::cs::Ref<kairo::unity::graphics::RectangleF>,
                                       pls::cs::Ref<kairo::unity::graphics::RectangleF>)>
                    cs_arg4 = pls::cs::Delegate<void(pls::cs::Ref<pls::kairo::Graphics>, pls::cs::Single,
                                                     pls::cs::Ref<kairo::unity::graphics::RectangleF>,
                                                     pls::cs::Ref<kairo::unity::graphics::RectangleF>)>::
                        from_closure(
                            pls::cs::raw(keta_cell),
                            std::string(
                                "M:main.AppData.DrawFukidashiKimochi(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32):107424") +
                                std::to_string(reinterpret_cast<std::uintptr_t>(pls::cs::raw(g_cell))) +
                                std::to_string(reinterpret_cast<std::uintptr_t>(pls::cs::raw(numSeb_cell))) +
                                std::to_string(reinterpret_cast<std::uintptr_t>(pls::cs::raw(numValue_cell))),
                            [keta_cell, g_cell, numSeb_cell, numValue_cell,
                             self = this](pls::cs::Ref<pls::kairo::Graphics> gra, pls::cs::Single fy,
                                          pls::cs::Ref<kairo::unity::graphics::RectangleF> left,
                                          pls::cs::Ref<kairo::unity::graphics::RectangleF> right) -> void {
                                {
                                    pls::cs::Int32 num =
                                        pls::cs::to_int32(require(right)->left) + 8 * keta_cell->value;
                                    pls::cs::Int32 y = -16;
                                    self->DrawNumImageLongIntInt(
                                        g_cell->value, numSeb_cell->value,
                                        pls::cs::cast_integral<pls::cs::Int64>(numValue_cell->value), num, y,
                                        0, 4);
                                    {
                                        pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g_cell->value;
                                        pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                                            require(self->resCom2_)->seb.get_Item(90);
                                        pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                                            require(self->resCom2_)->img.get_Item(131);
                                        self->DrawSeb(cs_arg0, num + 2, y, cs_arg3, cs_arg4, 1);
                                    }
                                }
                            },
                            keta_cell, g_cell, numSeb_cell, numValue_cell, this);
                require(balloon)->SetSpace(0, cs_arg1, 0, 0, cs_arg4);
            }
            require(balloon)->Draw(g_cell->value, dx, dy);
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(g_cell->value)->SetColor(color); });
        }
    }
}

// M:main.AppData.DrawFukidashiKimochiOLD(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)
void AppData::DrawFukidashiKimochiOLD(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 dx,
                                      pls::cs::Int32 dy, pls::cs::Int32 numValue, pls::cs::Int32 numSeb) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawFukidashiKimochiOLD(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        pls::cs::Int32 color =
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->GetColor(); });
        if (form::MyFormBase::Jp()) {
            DrawFukidashiOLD(g, pls::cs::String(u""), dx, dy, -1);
            {
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(resCom2_)->seb.get_Item(90);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(resCom2_)->img.get_Item(131);
                DrawSeb(g, dx - 28, dy - 5, cs_arg3, cs_arg4, 0);
            }
            {
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(resCom2_)->seb.get_Item(90);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(resCom2_)->img.get_Item(131);
                DrawSeb(g, dx + 19, dy - 5, cs_arg3, cs_arg4, 1);
            }
            DrawNumImageLongIntInt(g, 78, pls::cs::cast_integral<pls::cs::Int64>(numValue), dx + 17, dy - 5,
                                   0, 4);
        } else if (form::MyFormBase::En()) {
            pls::cs::Int32 num = 8;
            DrawFukidashiOLD(g, pls::cs::String(u""), dx, dy, 70);
            {
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(resCom2_)->seb.get_Item(90);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(resCom2_)->img.get_Item(131);
                DrawSeb(g, dx - 28 - num, dy - 5, cs_arg3, cs_arg4, 0);
            }
            {
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(resCom2_)->seb.get_Item(90);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(resCom2_)->img.get_Item(131);
                DrawSeb(g, dx + 19 + num, dy - 5, cs_arg3, cs_arg4, 1);
            }
            DrawNumImageLongIntInt(g, 78, pls::cs::cast_integral<pls::cs::Int64>(numValue), dx + 17 + num,
                                   dy - 5, 0, 4);
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->SetColor(color); });
    }
}

// M:main.AppData.DrawFukidashiOLD(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32)
void AppData::DrawFukidashiOLD(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String str, pls::cs::Int32 dx,
                               pls::cs::Int32 dy) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawFukidashiOLD(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32)",
        game);
    {
        form::SubForm::ensure_initialized();

        form::SubForm::SetFontSize(g, 10);
        pls::cs::Int32 len = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(pls::diagnostic::api_call([&]() -> decltype(auto) {
                       return require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{});
                   }))
                ->StringWidth(str);
        });
        DrawFukidashiOLD(g, str, dx, dy, len, form::SubForm::SC_WINDOW_BLUE());
        form::SubForm::ResetFontSize(g);
    }
}

// M:main.AppData.DrawFukidashiOLD(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32)
void AppData::DrawFukidashiOLD(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String str, pls::cs::Int32 dx,
                               pls::cs::Int32 dy, pls::cs::Int32 len) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawFukidashiOLD(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32)",
        game);
    {
        form::SubForm::ensure_initialized();

        DrawFukidashiOLD(g, str, dx, dy, len, form::SubForm::SC_WINDOW_BLUE());
    }
}

// M:main.AppData.DrawFukidashiOLD(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Int32)
void AppData::DrawFukidashiOLD(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String str, pls::cs::Int32 dx,
                               pls::cs::Int32 dy, pls::cs::Int32 len, pls::cs::Int32 color) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawFukidashiOLD(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        pls::cs::Int32 color2 =
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->GetColor(); });
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->SetColor(color); });
        if (len != -1) {
            len += 12;
            if (len < 72) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(resCom2_)->img.get_Item(130);
                        require(g)->DrawImage(cs_arg0, dx - len / 2 + 6, dy - 9, 6, 0, len - 12, 18);
                    }());
                });
            } else {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(resCom2_)->img.get_Item(130);
                        require(g)->DrawImage(cs_arg0, dx - len / 2 + 6, dy - 9, 6, 0, 60, 18);
                    }());
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(resCom2_)->img.get_Item(130);
                        require(g)->DrawImage(cs_arg0, dx - len / 2 + 6 + 60, dy - 9, 6, 0, len - 12 - 60,
                                              18);
                    }());
                });
            }
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(resCom2_)->img.get_Item(130);
                    require(g)->DrawImage(cs_arg0, dx - len / 2, dy - 9, 0, 0, 6, 18);
                }());
            });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(resCom2_)->img.get_Item(130);
                    require(g)->DrawImage(cs_arg0, dx + len / 2 - 6, dy - 9, 66, 0, 6, 18);
                }());
            });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(resCom2_)->img.get_Item(130);
                    require(g)->DrawImage(cs_arg0, dx - 1, dy + 7, 72, 0, 5, 5);
                }());
            });
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(g)->DrawString(str, dx, dy, 34); });
        } else {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(resCom2_)->img.get_Item(130);
                    require(g)->DrawImage(cs_arg0, dx - 36, dy - 9, 0, 0, 72, 18);
                }());
            });
            kairo::unity::ui::Graphics::DrawString2(require(g), str, dx, dy, 34);
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(resCom2_)->img.get_Item(130);
                    require(g)->DrawImage(cs_arg0, dx - 1, dy + 7, 72, 0, 5, 5);
                }());
            });
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->SetColor(color2); });
    }
}

// M:main.AppData.GetEvenlyDivisionArea(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IntArray AppData::GetEvenlyDivisionArea(pls::cs::Int32 left, pls::cs::Int32 right, pls::cs::Int32 padding,
                                        pls::cs::Int32 index, pls::cs::Int32 max_) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.GetEvenlyDivisionArea(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        pls::cs::Int32 num = (right - left - padding * (max_ - 1)) / max_;
        getEvenlyDivisionArea_tmp_[0] = left + index * (num + padding);
        getEvenlyDivisionArea_tmp_[1] = left + index * (num + padding) + num;
        return getEvenlyDivisionArea_tmp_;
    }
}

// M:main.AppData.BubbleSort(System.Int32[])
void AppData::BubbleSort(IntArray list) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.BubbleSort(System.Int32[])", game);
    {
        for (pls::cs::Int32 i = 0; i < pls::cs::Int32(list.length()) - 1; ++i) {
            for (pls::cs::Int32 num = pls::cs::Int32(list.length()) - 1; num > i; --num) {
                if (list[num] > list[num - 1]) {
                    pls::cs::Int32 num2 = list[num];
                    list[num] = list[num - 1];
                    list[num - 1] = num2;
                }
            }
        }
    }
}

// M:main.AppData.GetIsometricX(System.Int32,System.Int32)
pls::cs::Int32 AppData::GetIsometricX(pls::cs::Int32 xi, pls::cs::Int32 yi) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.GetIsometricX(System.Int32,System.Int32)", game);
    {
        return xi * 30 - yi * 30;
    }
}

// M:main.AppData.GetIsometricY(System.Int32,System.Int32)
pls::cs::Int32 AppData::GetIsometricY(pls::cs::Int32 xi, pls::cs::Int32 yi) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.GetIsometricY(System.Int32,System.Int32)", game);
    {
        return yi * 15 + xi * 15;
    }
}

// M:main.AppData.AdjustDataList(data.BaseData[],System.Int32)
pls::cs::Array<pls::cs::Ref<data::BaseData>>
AppData::AdjustDataList(pls::cs::Array<pls::cs::Ref<data::BaseData>> list, pls::cs::Int32 id) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.AdjustDataList(data.BaseData[],System.Int32)", game);
    {
        pls::cs::Int32 num = 0;
        for (pls::cs::Int32 i = 0; i < list.length(); ++i) {
            if (num < require(list.get_Item(i))->id_) {
                num = require(list.get_Item(i))->id_;
            }
        }
        ++num;
        pls::cs::Array<pls::cs::Ref<data::BaseData>> array = pls::cs::Array<pls::cs::Ref<data::BaseData>>{};
        if (id == 1) {
            array =
                pls::cs::Array<pls::cs::Ref<data::BaseData>>::covariant_from<pls::cs::Ref<data::EventData>>(
                    pls::cs::Array<pls::cs::Ref<data::EventData>>::make(num));
        }
        for (pls::cs::Int32 j = 0; j < list.length(); ++j) {
            {
                auto cs_target = array;
                auto cs_index = require(list.get_Item(j))->id_;
                auto cs_value = list.get_Item(j);
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        return array;
    }
}

// M:main.AppData.SerializeScripts(java.io.OutputStream,java.util.Vector)
void AppData::SerializeScripts(pls::cs::Ref<kl_java_io::OutputStream> os,
                               pls::cs::Ref<kl_java_util::Vector> scripts) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:main.AppData.SerializeScripts(java.io.OutputStream,java.util.Vector)", game);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteInt(
                os, pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return kl_java_util::Vector_2_Size(require(scripts)); }));
        });
        for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_Size(require(scripts));
                                   });
             ++i) {
            IntArray array = pls::cs::unbox<IntArray>(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_java_util::Vector_2_ElementAt(require(scripts), i); }));
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, array.length()); });
            for (pls::cs::Int32 j = 0; j < array.length(); ++j) {
                pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, array[j]); });
            }
        }
    }
}

// M:main.AppData.DeserializeScripts(java.io.InputStream)
pls::cs::Ref<kl_java_util::Vector> AppData::DeserializeScripts(pls::cs::Ref<kl_java_io::InputStream> stream) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.DeserializeScripts(java.io.InputStream)", game);
    {
        pls::cs::Ref<kl_java_util::Vector> vector = kl_java_util::Vector::create();
        pls::cs::Int32 num = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
        for (pls::cs::Int32 i = 0; i < num; ++i) {
            IntArray array = IntArray::make(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); }));
            for (pls::cs::Int32 j = 0; j < array.length(); ++j) {
                array[j] = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
            }
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_AddElement(require(vector), pls::cs::box(array));
            });
        }
        return vector;
    }
}

// M:main.AppData.ExecEvent(System.Int32,System.String,System.Int32[])
pls::cs::Ref<form::SubForm> AppData::ExecEvent(pls::cs::Int32 id, pls::cs::String args, IntArray argi) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.ExecEvent(System.Int32,System.String,System.Int32[])",
                     game);
    {
        kl_cfg::Config::ensure_initialized();

        if (id < 0 || (eventData_.length() <= id)) {
            return pls::cs::Ref<form::SubForm>{};
        }
        if (is_null(args)) {
            args = require(save_)->strs[0];
        }
        pls::cs::Ref<data::EventData> eventData = eventData_.get_Item(id);
        {
            auto cs_target = eventNum_;
            auto cs_index = id;
            auto cs_value = AppData::ClampMax(eventNum_[id] + 1, 2147483647 /* Int32.MaxValue */);
            cs_target.set_Item(cs_index, cs_value);
        }
        if (kl_cfg::Config::PRINT() && (([&]() {
                                            auto cs_left = pls::cs::box(require(eventData)->execsScript_);
                                            auto cs_right = pls::cs::box(IntArray2{});
                                            return cs_left == cs_right;
                                        }()) ||
                                        (require(eventData)->execsScript_.length() == 0))) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::Log::Info(
                    pls::cs::String::concat(pls::cs::String::concat(literal(u"ID["), integer_string(id)),
                                            literal(u"] のイベントは存在しません")),
                    pls::cs::Ref<pls::cs::ExceptionObject>{});
            });
        }
        return ExecuteScript(require(eventData)->execsScript_, true, args, argi, 0);
    }
}

// M:main.AppData.CheckAlreadyEvent(System.Int32)
bool AppData::CheckAlreadyEvent(pls::cs::Int32 id) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.CheckAlreadyEvent(System.Int32)", game);
    {
        if (id < 0 || (eventData_.length() <= id)) {
            return false;
        }
        return eventNum_[id] > 0;
    }
}

// M:main.AppData.ExecuteScript(System.Int32[][],System.Boolean,System.String,System.Int32[],System.Int32)
pls::cs::Ref<form::SubForm> AppData::ExecuteScript(IntArray2 script, bool popup, pls::cs::String args,
                                                   IntArray argi, pls::cs::Int32 line) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.ExecuteScript(System.Int32[][],System.Boolean,System.String,System.Int32[],System.Int32)",
        game);
    {
        return ExecuteScript(script, popup, args, argi, line, 0, -1);
    }
}

// M:main.AppData.ExecuteScript(System.Int32[][],System.Boolean,System.String,System.Int32[],System.Int32,System.Int32,System.Int32)
pls::cs::Ref<form::SubForm> AppData::ExecuteScript(IntArray2 script, bool popup, pls::cs::String args,
                                                   IntArray argi, pls::cs::Int32 line,
                                                   pls::cs::Int32 talkCharaType,
                                                   pls::cs::Int32 talkCharaIndex) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.ExecuteScript(System.Int32[][],System.Boolean,System.String,System.Int32[],System.Int32,System.Int32,System.Int32)",
        game);
    {
        if ([&]() {
                auto cs_left = pls::cs::box(script);
                auto cs_right = pls::cs::box(IntArray2{});
                return cs_left == cs_right;
            }()) {
            return pls::cs::Ref<form::SubForm>{};
        }
        pls::cs::Ref<form::SubForm> subForm = pls::cs::Ref<form::SubForm>{};
        pls::cs::Ref<game::DelayEvent> delayEvent = pls::cs::Ref<game::DelayEvent>{};
        for (pls::cs::Int32 i = line; i < script.length(); ++i) {
            IntArray array = script[i];
            pls::cs::Int32 num = array[0];
            switch (num) {
            case 5: {
                delayEvent = ([&]() -> pls::cs::Ref<game::DelayEvent> {
                    pls::cs::Int32 cs_arg0 = GetDelayId(script);
                    pls::cs::Int32 cs_arg2 = array[1];
                    pls::cs::Int32 cs_arg4 = require(save_)->ints[9];
                    return game::DelayEvent::create(cs_arg0, i + 1, cs_arg2, -1, cs_arg4, args, argi);
                }());
                if (2 < array.length()) {
                    {
                        auto cs_target = delayEvent;
                        pls::cs::Int32 cs_value = array[2];
                        require(cs_target)->hour_ = cs_value;
                    }
                }
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_AddElement(require(delayEvents_), pls::cs::box(delayEvent));
                });
                return subForm;
            }
            default: {
                subForm = ExecuteScriptIntArrayIntArrayArray(array, popup, args, argi, script);
                if (talkCharaIndex != -1 && !is_null(subForm) && require(subForm)->humanCharaIndex_ == -1) {
                    require(subForm)->humanCharaType_ = talkCharaType;
                    require(subForm)->humanCharaIndex_ = talkCharaIndex;
                }
                break;
            }
            }
        }
        return subForm;
    }
}

// M:main.AppData.ExecuteScript(System.Int32[],System.Boolean,System.String,System.Int32[])
pls::cs::Ref<form::SubForm> AppData::ExecuteScript(IntArray scr, bool popup, pls::cs::String args,
                                                   IntArray argi) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.ExecuteScript(System.Int32[],System.Boolean,System.String,System.Int32[])", game);
    {
        return ExecuteScriptIntArrayIntArrayArray(scr, popup, args, argi, IntArray2{});
    }
}

// M:main.AppData.ExecuteScript(System.Int32[],System.Boolean,System.String,System.Int32[],System.Int32[][])
pls::cs::Ref<form::SubForm> AppData::ExecuteScriptIntArrayIntArrayArray(IntArray scr, bool popup,
                                                                        pls::cs::String args, IntArray argi,
                                                                        IntArray2 script) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.ExecuteScript(System.Int32[],System.Boolean,System.String,System.Int32[],System.Int32[][])",
        game);
    {
        kl_cfg::Config::ensure_initialized();
        data::EventData::ensure_initialized();
        data::TenantData::ensure_initialized();

        if (([&]() {
                auto cs_left = pls::cs::box(scr);
                auto cs_right = pls::cs::box(IntArray{});
                return cs_left == cs_right;
            }()) ||
            (scr.length() == 0)) {
            return pls::cs::Ref<form::SubForm>{};
        }
        pls::cs::Ref<form::SubForm> subForm = pls::cs::Ref<form::SubForm>{};
        pls::cs::Int32 num = scr[0];
        pls::cs::Int32 num2 = 0;
        pls::cs::Ref<data::TeamData> teamData = pls::cs::Ref<data::TeamData>{};
        pls::cs::Ref<data::TenantData> tenantData = pls::cs::Ref<data::TenantData>{};
        IntArray array = IntArray::make(scr.length());
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_lang::JSystem::Arraycopy(pls::cs::box(scr), 0, pls::cs::box(array), 0, array.length());
        });
        for (pls::cs::Int32 i = 1; i < array.length(); ++i) {
            if (array[i] <= -2147483549) {
                pls::cs::Int32 num3 = (array[i] - (-2147483647 - 1) /* Int32.MinValue */);
                if (kl_cfg::Config::DEBUG()) {
                    if ([&]() {
                            auto cs_left = pls::cs::box(argi);
                            auto cs_right = pls::cs::box(IntArray{});
                            return cs_left == cs_right;
                        }()) {
                        pls::cs::Ref<kairo::unity::ui::Dialog> dialog =
                            kairo::unity::ui::Dialog::create(0, literal(u"ｴﾗｰ"));
                        require(dialog)->SetText(
                            literal(u"スクリプトの実行に失敗しました。整数引数への参照が null です。"));
                        require(dialog)->Show();
                    } else if (argi.length() <= num3) {
                        pls::cs::Ref<kairo::unity::ui::Dialog> dialog2 =
                            kairo::unity::ui::Dialog::create(0, literal(u"ｴﾗｰ"));
                        require(dialog2)->SetText(pls::cs::String::concat(
                            pls::cs::String::concat(
                                pls::cs::String::concat(
                                    literal(
                                        u"スクリプトの実行に失敗しました。整数引数への参照番号が範囲外です。"),
                                    integer_string(num3)),
                                literal(u"/")),
                            integer_string(argi.length())));
                        require(dialog2)->Show();
                    }
                }
                array[i] = argi[num3];
            }
        }
        scr = array;
        switch (num) {
        case 0: {
            if (scr[1] < 0) {
                SubMoney(-scr[1], 4);
            } else {
                AddMoney(scr[1], 4);
                AddPopupMessage(
                    1, form::MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(scr[1])));
            }
            break;
        }
        case 1: {
            subForm = ExecEvent(scr[1], args, argi);
            break;
        }
        case 2: {
            if (scr.length() > 2) {
                pls::cs::String text = pls::cs::String(u"");
                for (pls::cs::Int32 n = 2; n < scr.length(); ++n) {
                    if (n != 2) {
                        text = pls::cs::String::concat(text, literal(u"\t"));
                    }
                    pls::cs::String value = data::EventData::stringTable_()[scr[n]];
                    text = pls::cs::String::concat(text, pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                       return kl_unity_util::StringUtil::Replace(value, args);
                                                   }));
                }
                args = text;
            }
            subForm = form::SubForm::MakeTalkForm(scr[1], args);
            Push(subForm);
            break;
        }
        case 3: {
            Push(
                form::SubForm::MakeDialog(form::MyFormBase::LT(literal(u"開幕ｷｯｸｵﾌ通信\nが発行されました"))));
            subForm = form::SubForm::MakeNews(scr[1], args);
            Push(subForm);
            break;
        }
        case 4: {
            if (scr.length() > 2) {
                pls::cs::String text2 = pls::cs::String(u"");
                for (pls::cs::Int32 num4 = 2; num4 < scr.length(); ++num4) {
                    if (num4 != 2) {
                        text2 = pls::cs::String::concat(text2, literal(u"\t"));
                    }
                    pls::cs::String value2 = data::EventData::stringTable_()[scr[num4]];
                    text2 =
                        pls::cs::String::concat(text2, pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                    return kl_unity_util::StringUtil::Replace(value2, args);
                                                }));
                }
                args = text2;
            }
            subForm = ([&]() -> pls::cs::Ref<form::SubForm> {
                pls::cs::String cs_arg0 = eventMsgs_[scr[1]];
                pls::cs::Int32 cs_arg2 = scr[1];
                return form::SubForm::MakeEvent(cs_arg0, args, cs_arg2);
            }());
            Push(subForm);
            break;
        }
        case 6: {
            subForm = form::SubForm::MakeWait(scr[1]);
            Push(subForm);
            break;
        }
        case 7: {
            {
                auto cs_target = require(save_)->ints;
                auto cs_index = 8;
                auto cs_old = cs_target.at(cs_index);
                auto cs_rhs = scr[1];
                pls::cs::Int32 cs_value = (cs_old | cs_rhs);
                cs_target.at(cs_index) = cs_value;
            }
            break;
        }
        case 8: {
            {
                auto cs_target = require(save_)->ints;
                auto cs_index = 8;
                auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = require(save_)->ints[8];
                        pls::cs::Int32 cs_arg1 = scr[1];
                        return kl_unity_util::BitUtil::Off(cs_arg0, cs_arg1);
                    }());
                });
                cs_target.set_Item(cs_index, cs_value);
            }
            break;
        }
        case 9: {
            if (scr[1] != -1) {
                pls::cs::Ref<data::PlayerData> playerData5 = pData_.get_Item(scr[1]);
                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_IndexOf(
                            require(require(AppData::udat_())->memberPDataist_), pls::cs::box(playerData5));
                    }) == -1) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_AddElement(
                            require(require(AppData::udat_())->memberPDataist_), pls::cs::box(playerData5));
                    });
                }
                AddPopupMessage(4, ([&]() {
                                    auto cs_left = require(playerData5)->name_;
                                    auto cs_right = pls::cs::String(u"");
                                    return pls::cs::String::concat(cs_left, cs_right);
                                }()));
            }
            break;
        }
        case 10: {
            if (scr[1] != -1) {
                pls::cs::Ref<data::SupervisorData> supervisorData = svisorData_.get_Item(scr[1]);
                require(supervisorData)->ChangeState(1);
                if (!ChExistPopup(26)) {
                    AddPopupMessage(26, pls::cs::String{});
                }
            }
            break;
        }
        case 11: {
            if (scr[1] != -1) {
                pls::cs::Ref<data::FormationData> formationData = formationData_.get_Item(scr[1]);
                require(formationData)->ChangeState(1);
            }
            break;
        }
        case 12: {
            if (scr[1] != -1) {
                tenantData = tenantData_.get_Item(scr[1]);
                require(tenantData)->ChangeState(1);
                AddPopupMessage(24, require(tenantData)->name_);
                if (!require(AppData::udat_())->ChEventFlg(4)) {
                    require(AppData::udat_())->OnEventFlg(4);
                }
            }
            break;
        }
        case 13: {
            if (scr[1] != -1) {
                pls::cs::Ref<data::FanActData> fanActData = fanActData_.get_Item(scr[1]);
                require(fanActData)->ChangeState(1);
                AddPopupMessage(25, require(fanActData)->name_);
                if (!require(AppData::udat_())->ChEventFlg(2)) {
                    require(AppData::udat_())->OnEventFlg(2);
                }
            }
            break;
        }
        case 14: {
            if (scr[1] != -1) {
                pls::cs::Ref<data::TrainingData> trainingData = trainingData_.get_Item(scr[1]);
                require(trainingData)->ChangeState(1);
                AddPopupMessage(23, ([&]() {
                                    auto cs_left = require(trainingData)->name_;
                                    auto cs_right = pls::cs::String(u"");
                                    return pls::cs::String::concat(cs_left, cs_right);
                                }()));
            }
            break;
        }
        case 15: {
            if (scr[1] != -1) {
                pls::cs::Ref<data::SponsorData> sponsorData = sponsorData_.get_Item(scr[1]);
                if (require(sponsorData)->state_ == 0) {
                    require(sponsorData)->ChangeState(1);
                }
                if (!ChExistPopup(22)) {
                    AddPopupMessage(22, pls::cs::String{});
                }
                if (!require(AppData::udat_())->ChEventFlg(32)) {
                    require(AppData::udat_())->OnEventFlg(32);
                }
            }
            break;
        }
        case 16: {
            if (scr[1] != -1) {
                pls::cs::Ref<data::QuestMatchData> questMatchData = qmData_.get_Item(scr[1]);
                if (require(questMatchData)->state_ == 0) {
                    require(questMatchData)->ChangeState(1);
                }
                if (!ChExistPopup(6)) {
                    AddPopupMessage(6, pls::cs::String{});
                }
                if (!require(AppData::udat_())->ChEventFlg(8)) {
                    require(AppData::udat_())->OnEventFlg(8);
                }
            }
            break;
        }
        case 17: {
            {
                if (scr[1] != -1) {
                    pls::cs::Ref<data::TradeData> tradeData2 = tradeData_.get_Item(scr[1]);
                    if (require(tradeData2)->state_ != 2) {
                        require(tradeData2)->ChangeState(1);
                        if (!ChExistPopup(3)) {
                            AddPopupMessage(3, pls::cs::String{});
                        }
                        if (!require(AppData::udat_())->ChEventFlg(16)) {
                            require(AppData::udat_())->OnEventFlg(16);
                        }
                    }
                }
                break;
            }
        }
        case 18: {
            {
                for (pls::cs::Int32 k = 0; k < tradeData_.length(); ++k) {
                    pls::cs::Ref<data::TradeData> tradeData = tradeData_.get_Item(k);
                    if ([&]() -> bool {
                            auto cs_left = require(tradeData)->tradeGroup_;
                            auto cs_right = scr[1];
                            return cs_left == cs_right;
                        }()) {
                        require(tradeData)->ChangeState(1);
                        if (!ChExistPopup(2)) {
                            AddPopupMessage(2, pls::cs::String{});
                        }
                    }
                }
                break;
            }
        }
        case 19: {
            if (scr[1] != -1) {
                pls::cs::Ref<data::LeagueData> leagueData = leagueData_.get_Item(scr[1]);
                require(leagueData)->ChangeState(1);
                AddPopupMessage(5, require(leagueData)->name_);
                if (!require(AppData::udat_())->ChEventFlg(1)) {
                    require(AppData::udat_())->OnEventFlg(1);
                }
            }
            break;
        }
        case 20: {
            tenantData = tenantData_.get_Item(data::TenantData::TENANT_ID_STADIUM());
            require(tenantData)->ChangeState(1);
            AddPopupMessage(38, require(tenantData)->name_);
            if (!require(AppData::udat_())->ChEventFlg(4)) {
                require(AppData::udat_())->OnEventFlg(4);
            }
            break;
        }
        case 21: {
            tenantData = tenantData_.get_Item(data::TenantData::TENANT_ID_TRAININGAREA_SPRED());
            require(tenantData)->ChangeState(1);
            AddPopupMessage(38, require(tenantData)->name_);
            if (!require(AppData::udat_())->ChEventFlg(4)) {
                require(AppData::udat_())->OnEventFlg(4);
            }
            break;
        }
        case 22: {
            tenantData = tenantData_.get_Item(data::TenantData::TENANT_ID_TRAININGAREA());
            require(tenantData)->ChangeState(1);
            AddPopupMessage(38, require(tenantData)->name_);
            if (!require(AppData::udat_())->ChEventFlg(4)) {
                require(AppData::udat_())->OnEventFlg(4);
            }
            break;
        }
        case 23: {
            {
                auto cs_receiver = AppData::udat_();
                pls::cs::Int32 cs_arg1 = scr[1];
                require(cs_receiver)->AddResearchPoint(0, cs_arg1);
            }
            break;
        }
        case 24: {
            {
                auto cs_receiver = AppData::udat_();
                pls::cs::Int32 cs_arg1 = scr[1];
                require(cs_receiver)->AddResearchPoint(1, cs_arg1);
            }
            break;
        }
        case 25: {
            {
                auto cs_receiver = AppData::udat_();
                pls::cs::Int32 cs_arg1 = scr[1];
                require(cs_receiver)->AddResearchPoint(2, cs_arg1);
            }
            break;
        }
        case 26: {
            {
                auto cs_receiver = AppData::udat_();
                pls::cs::Int32 cs_arg1 = scr[1];
                require(cs_receiver)->AddResearchPoint(3, cs_arg1);
            }
            break;
        }
        case 27: {
            {
                for (pls::cs::Int32 num8 = 0; num8 < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                  return kl_java_util::Vector_2_Size(
                                                      require(require(AppData::udat_())->memberPDataist_));
                                              });
                     ++num8) {
                    pls::cs::Ref<data::PlayerData> playerData8 =
                        pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_ElementAt(
                                    require(require(AppData::udat_())->memberPDataist_), num8);
                            }));
                    {
                        pls::cs::Int32 cs_arg0 = scr[1];
                        require(playerData8)->AddExp(cs_arg0, true);
                    }
                }
                AddPopupMessage(7, ([&]() {
                                    auto cs_left = integer_string(scr[1]);
                                    auto cs_right = pls::cs::String(u"");
                                    return pls::cs::String::concat(cs_left, cs_right);
                                }()));
                break;
            }
        }
        case 28: {
            {
                for (pls::cs::Int32 num7 = 0; num7 < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                  return kl_java_util::Vector_2_Size(
                                                      require(require(AppData::udat_())->memberPDataist_));
                                              });
                     ++num7) {
                    pls::cs::Ref<data::PlayerData> playerData7 =
                        pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_ElementAt(
                                    require(require(AppData::udat_())->memberPDataist_), num7);
                            }));
                    {
                        pls::cs::Int32 cs_arg0 = scr[1];
                        require(playerData7)->AddPhysicalParam(cs_arg0, 0);
                    }
                }
                AddPopupMessage(8, ([&]() {
                                    auto cs_left = integer_string(scr[1]);
                                    auto cs_right = pls::cs::String(u"");
                                    return pls::cs::String::concat(cs_left, cs_right);
                                }()));
                break;
            }
        }
        case 29: {
            {
                for (pls::cs::Int32 num6 = 0; num6 < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                  return kl_java_util::Vector_2_Size(
                                                      require(require(AppData::udat_())->memberPDataist_));
                                              });
                     ++num6) {
                    pls::cs::Ref<data::PlayerData> playerData6 =
                        pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_ElementAt(
                                    require(require(AppData::udat_())->memberPDataist_), num6);
                            }));
                    {
                        pls::cs::Int32 cs_arg0 = scr[1];
                        require(playerData6)->AddPhysicalParam(cs_arg0, 1);
                    }
                }
                AddPopupMessage(9, ([&]() {
                                    auto cs_left = integer_string(scr[1]);
                                    auto cs_right = pls::cs::String(u"");
                                    return pls::cs::String::concat(cs_left, cs_right);
                                }()));
                break;
            }
        }
        case 30: {
            {
                for (pls::cs::Int32 num5 = 0; num5 < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                  return kl_java_util::Vector_2_Size(
                                                      require(require(AppData::udat_())->memberPDataist_));
                                              });
                     ++num5) {
                    pls::cs::Ref<data::PlayerData> playerData4 =
                        pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_ElementAt(
                                    require(require(AppData::udat_())->memberPDataist_), num5);
                            }));
                    {
                        pls::cs::Int32 cs_arg0 = scr[1];
                        require(playerData4)->AddPhysicalParam(cs_arg0, 2);
                    }
                }
                AddPopupMessage(10, ([&]() {
                                    auto cs_left = integer_string(scr[1]);
                                    auto cs_right = pls::cs::String(u"");
                                    return pls::cs::String::concat(cs_left, cs_right);
                                }()));
                break;
            }
        }
        case 31: {
            {
                for (pls::cs::Int32 m = 0; m < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                               return kl_java_util::Vector_2_Size(
                                                   require(require(AppData::udat_())->memberPDataist_));
                                           });
                     ++m) {
                    pls::cs::Ref<data::PlayerData> playerData3 =
                        pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_ElementAt(
                                    require(require(AppData::udat_())->memberPDataist_), m);
                            }));
                    {
                        pls::cs::Int32 cs_arg0 = scr[1];
                        require(playerData3)->AddPhysicalParam(cs_arg0, 3);
                    }
                }
                AddPopupMessage(11, ([&]() {
                                    auto cs_left = integer_string(scr[1]);
                                    auto cs_right = pls::cs::String(u"");
                                    return pls::cs::String::concat(cs_left, cs_right);
                                }()));
                break;
            }
        }
        case 32: {
            {
                for (pls::cs::Int32 l = 0; l < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                               return kl_java_util::Vector_2_Size(
                                                   require(require(AppData::udat_())->memberPDataist_));
                                           });
                     ++l) {
                    pls::cs::Ref<data::PlayerData> playerData2 =
                        pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_ElementAt(
                                    require(require(AppData::udat_())->memberPDataist_), l);
                            }));
                    {
                        pls::cs::Int32 cs_arg0 = scr[1];
                        require(playerData2)->AddPhysicalParam(cs_arg0, 4);
                    }
                }
                AddPopupMessage(12, ([&]() {
                                    auto cs_left = integer_string(scr[1]);
                                    auto cs_right = pls::cs::String(u"");
                                    return pls::cs::String::concat(cs_left, cs_right);
                                }()));
                break;
            }
        }
        case 33: {
            {
                for (pls::cs::Int32 j = 0; j < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                               return kl_java_util::Vector_2_Size(
                                                   require(require(AppData::udat_())->memberPDataist_));
                                           });
                     ++j) {
                    pls::cs::Ref<data::PlayerData> playerData =
                        pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_ElementAt(
                                    require(require(AppData::udat_())->memberPDataist_), j);
                            }));
                    {
                        pls::cs::Int32 cs_arg0 = scr[1];
                        require(playerData)->AddAuraPoint(cs_arg0, false);
                    }
                }
                AddPopupMessage(13, ([&]() {
                                    auto cs_left = integer_string(scr[1]);
                                    auto cs_right = pls::cs::String(u"");
                                    return pls::cs::String::concat(cs_left, cs_right);
                                }()));
                break;
            }
        }
        case 34: {
            num2 = data::FanActData::GetDispParamToEva(scr[1], 0);
            data::FanActData::AddFanParam(num2, 0);
            if (num2 >= 0) {
                AddPopupMessage(14, ([&]() {
                                    auto cs_left = integer_string(scr[1]);
                                    auto cs_right = pls::cs::String(u"");
                                    return pls::cs::String::concat(cs_left, cs_right);
                                }()));
            } else {
                AddPopupMessage(15, ([&]() {
                                    auto cs_left = integer_string(scr[1]);
                                    auto cs_right = pls::cs::String(u"");
                                    return pls::cs::String::concat(cs_left, cs_right);
                                }()));
            }
            break;
        }
        case 35: {
            num2 = data::FanActData::GetDispParamToEva(scr[1], 1);
            data::FanActData::AddFanParam(num2, 1);
            if (num2 >= 0) {
                AddPopupMessage(16, ([&]() {
                                    auto cs_left = integer_string(scr[1]);
                                    auto cs_right = pls::cs::String(u"");
                                    return pls::cs::String::concat(cs_left, cs_right);
                                }()));
            } else {
                AddPopupMessage(17, ([&]() {
                                    auto cs_left = integer_string(scr[1]);
                                    auto cs_right = pls::cs::String(u"");
                                    return pls::cs::String::concat(cs_left, cs_right);
                                }()));
            }
            break;
        }
        case 36: {
            num2 = data::FanActData::GetDispParamToEva(scr[1], 2);
            data::FanActData::AddFanParam(num2, 2);
            if (num2 >= 0) {
                AddPopupMessage(18, ([&]() {
                                    auto cs_left = integer_string(scr[1]);
                                    auto cs_right = pls::cs::String(u"");
                                    return pls::cs::String::concat(cs_left, cs_right);
                                }()));
            } else {
                AddPopupMessage(19, ([&]() {
                                    auto cs_left = integer_string(scr[1]);
                                    auto cs_right = pls::cs::String(u"");
                                    return pls::cs::String::concat(cs_left, cs_right);
                                }()));
            }
            break;
        }
        case 37: {
            subForm = form::SubForm::create(72);
            Push(subForm);
            break;
        }
        case 38: {
            subForm = form::SubForm::create(52);
            Push(subForm);
            break;
        }
        case 39: {
            subForm = form::SubForm::create(70);
            Push(subForm);
            break;
        }
        case 40: {
            subForm = form::SubForm::create(69);
            {
                auto cs_target = subForm;
                pls::cs::Int32 cs_value = scr[1];
                require(cs_target)->value1_ = cs_value;
            }
            Push(subForm);
            break;
        }
        case 41: {
            teamData = tData_.get_Item(0);
            {
                pls::cs::Int32 cs_arg0 = scr[1];
                require(teamData)->AddTeamEva(cs_arg0);
            }
            if (scr[1] >= 0) {
                AddPopupMessage(20, ([&]() {
                                    auto cs_left = integer_string(scr[1]);
                                    auto cs_right = pls::cs::String(u"");
                                    return pls::cs::String::concat(cs_left, cs_right);
                                }()));
            } else {
                AddPopupMessage(21, ([&]() {
                                    auto cs_left = integer_string(scr[1]);
                                    auto cs_right = pls::cs::String(u"");
                                    return pls::cs::String::concat(cs_left, cs_right);
                                }()));
            }
            break;
        }
        case 42: {
            subForm = form::SubForm::create(73);
            Push(subForm);
            break;
        }
        }
        return subForm;
    }
}

// M:main.AppData.CheckTermScript(System.Int32[][])
bool AppData::CheckTermScript(IntArray2 terms) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.CheckTermScript(System.Int32[][])", game);
    {
        bool flag = true;
        for (pls::cs::Int32 i = 0; i < terms.length(); ++i) {
            flag = CheckTermScriptIntArray(terms[i]);
            if (!flag) {
                break;
            }
        }
        return flag;
    }
}

// M:main.AppData.CheckTermScript(System.Int32[])
bool AppData::CheckTermScriptIntArray(IntArray terms) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.CheckTermScript(System.Int32[])", game);
    {
        pls::cs::Int64 num = 0ll;
        num = 0ll;
        IntArray termsAlias = terms;
        pls::cs::Int32 num2 = termsAlias[1];
        pls::cs::Int32 num3 = 2;
        bool flag = true;
        switch (num2) {
        case 0: {
            flag = false;
            break;
        }
        case 1: {
            num = require(save_)->lngs[0];
            break;
        }
        case 2: {
            flag = CheckAlreadyEvent(termsAlias[num3++]);
            break;
        }
        case 3: {
            num = pls::cs::cast_integral<pls::cs::Int64>(require(save_)->ints[1] + 1);
            break;
        }
        case 4: {
            num = pls::cs::cast_integral<pls::cs::Int64>(require(save_)->ints[2] + 1);
            break;
        }
        case 5: {
            num = pls::cs::cast_integral<pls::cs::Int64>(require(save_)->ints[3] + 1);
            break;
        }
        case 6: {
            if ([&]() -> bool {
                    auto cs_left = require(frmSoccer_)->game_sec / 6;
                    auto cs_right = termsAlias[2];
                    return cs_left == cs_right;
                }()) {
                return true;
            }
            return false;
        }
        case 7: {
            {
                pls::cs::Int32 rankIndex = require(AppData::udat_())->GetRankIndex();
                if (rankIndex + 1 >= termsAlias[2]) {
                    return true;
                }
                return false;
            }
        }
        case 8: {
            {
                auto cs_left_85 = ([&]() -> pls::cs::Int32 {
                    auto cs_left_85 = require(AppData::udat_())->matchResult_[0];
                    auto cs_right_85 = require(AppData::udat_())->matchResult_[1];
                    return cs_left_85 + cs_right_85;
                }());
                auto cs_right_85 = require(AppData::udat_())->matchResult_[2];
                pls::cs::Int32 num7 = cs_left_85 + cs_right_85;
                if (num7 >= termsAlias[2]) {
                    return true;
                }
                return false;
            }
        }
        case 9: {
            {
                pls::cs::Int32 num6 = require(AppData::udat_())->matchResult_[0];
                if (num6 >= termsAlias[2]) {
                    return true;
                }
                return false;
            }
        }
        case 10: {
            {
                pls::cs::Int32 num5 = require(AppData::udat_())->matchResult_[1];
                if (num5 >= termsAlias[2]) {
                    return true;
                }
                return false;
            }
        }
        case 11: {
            {
                pls::cs::Int32 num4 = require(AppData::udat_())->matchResult_[2];
                if (num4 >= termsAlias[2]) {
                    return true;
                }
                return false;
            }
        }
        case 12: {
            {
                pls::cs::Int32 fanDispParam =
                    data::FanActData::GetFanDispParam(data::FanActData::GetFanEva(0), 0);
                if (fanDispParam >= termsAlias[2]) {
                    return true;
                }
                return false;
            }
        }
        }
        if (flag && num3 < termsAlias.length()) {
            flag = (pls::cs::cast_integral<pls::cs::Int64>(termsAlias[num3]) <= num) &&
                   ((termsAlias.length() <= num3 + 1) ||
                    (num <= pls::cs::cast_integral<pls::cs::Int64>(termsAlias[num3 + 1])));
        }
        if (termsAlias[0] == 1) {
            flag = !flag;
        }
        if (!flag) {
            return false;
        }
        return true;
    }
}

// M:main.AppData.GetDelayId(System.Int32[][])
pls::cs::Int32 AppData::GetDelayId(IntArray2 script) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.GetDelayId(System.Int32[][])", game);
    {
        kl_cfg::Config::ensure_initialized();

        for (pls::cs::Int32 i = 0; i < eventData_.length(); ++i) {
            if (!is_null(eventData_.get_Item(i)) && ([&]() {
                    auto cs_left = pls::cs::box(script);
                    auto cs_right = pls::cs::box(require(eventData_.get_Item(i))->execsScript_);
                    return cs_left == cs_right;
                }())) {
                return 0 + i;
            }
        }
        if (kl_cfg::Config::PRINT()) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::Log::Info(literal(u"getDelayId:-1"),
                                                pls::cs::Ref<pls::cs::ExceptionObject>{});
            });
        }
        return -1;
    }
}

// M:main.AppData.GetDelayScript(System.Int32)
IntArray2 AppData::GetDelayScript(pls::cs::Int32 delayId) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.GetDelayScript(System.Int32)", game);
    {
        pls::cs::Int32 num = delayId % 1000;
        if (delayId < 1000) {
            return require(eventData_.get_Item(num))->execsScript_;
        }
        return IntArray2{};
    }
}

// M:main.AppData.Print(System.String)
void AppData::Print(pls::cs::String str) {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.Print(System.String)", game);
    {
        kl_cfg::Config::ensure_initialized();

        if (kl_cfg::Config::PRINT()) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::Log::Info(pls::cs::String::concat(literal(u"■"), str),
                                                pls::cs::Ref<pls::cs::ExceptionObject>{});
            });
        }
    }
}

// M:main.AppData.ClearZSortObjects
void AppData::ClearZSortObjects() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.ClearZSortObjects", game);
    {
        gameObjectPoolIndex_ = 0;
        zsortObjectStart_ = zsortObjectCount_.length();
        zsortObjectLast_ = 0;
        for (pls::cs::Int32 i = 0; i < zsortObjectCount_.length(); ++i) {
            zsortObjectCount_[i] = pls::cs::cast_integral<std::uint8_t>(0);
        }
    }
}

// M:main.AppData.InsertGameObject(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void AppData::InsertGameObject(pls::cs::Int32 type, pls::cs::Int32 id, pls::cs::Int32 depth,
                               pls::cs::Int32 seb, pls::cs::Int32 frame, pls::cs::Int32 x, pls::cs::Int32 y) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.InsertGameObject(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        InsertGameObject(type, id, depth, -1, seb, frame, x, y, false, -1);
    }
}

// M:main.AppData.InsertGameObject(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void AppData::InsertGameObject(pls::cs::Int32 type, pls::cs::Int32 id, pls::cs::Int32 depth,
                               pls::cs::Int32 img, pls::cs::Int32 seb, pls::cs::Int32 frame, pls::cs::Int32 x,
                               pls::cs::Int32 y) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.InsertGameObject(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        InsertGameObject(type, id, depth, img, seb, frame, x, y, false, -1);
    }
}

// M:main.AppData.InsertGameObject(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
void AppData::InsertGameObjectBool(pls::cs::Int32 type, pls::cs::Int32 id, pls::cs::Int32 depth,
                                   pls::cs::Int32 seb, pls::cs::Int32 frame, pls::cs::Int32 x,
                                   pls::cs::Int32 y, bool dark) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.InsertGameObject(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)",
        game);
    {
        InsertGameObject(type, id, depth, -1, seb, frame, x, y, dark, -1);
    }
}

// M:main.AppData.InsertGameObject(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
void AppData::InsertGameObject(pls::cs::Int32 type, pls::cs::Int32 id, pls::cs::Int32 depth,
                               pls::cs::Int32 img, pls::cs::Int32 seb, pls::cs::Int32 frame, pls::cs::Int32 x,
                               pls::cs::Int32 y, bool dark) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.InsertGameObject(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)",
        game);
    {
        InsertGameObject(type, id, depth, img, seb, frame, x, y, dark, -1);
    }
}

// M:main.AppData.InsertGameObject(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32)
void AppData::InsertGameObject(pls::cs::Int32 type, pls::cs::Int32 id, pls::cs::Int32 depth,
                               pls::cs::Int32 img, pls::cs::Int32 seb, pls::cs::Int32 frame, pls::cs::Int32 x,
                               pls::cs::Int32 y, bool dark, pls::cs::Int32 layer) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.InsertGameObject(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32)",
        game);
    {
        if (gameObjectPoolIndex_ >= gameObjectPool_.length()) {
            return;
        }
        pls::cs::Int32 num;
        while (true) {
            num = depth + 360;
            if (num < 0 || (zsortObjectCount_.length() <= num)) {
                return;
            }
            if (pls::cs::cast_integral<pls::cs::Int32>(zsortObjectCount_[num]) >= 30) {
                ++depth;
                continue;
            }
            {
                auto cs_target = zsortObjects_[num];
                auto cs_index = zsortObjectCount_[num];
                auto cs_value = gameObjectPoolIndex_;
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_array = zsortObjectCount_;
                auto cs_index = num;
                auto cs_old = cs_array.at(cs_index);
                auto cs_new = pls::cs::cast_integral<std::uint8_t>(cs_old + 1);
                cs_array.at(cs_index) = cs_new;
            }
            if (zsortObjectStart_ > num) {
                zsortObjectStart_ = num;
            }
            if (zsortObjectLast_ < num) {
                zsortObjectLast_ = num;
            }
            IntArray array = gameObjectPool_[gameObjectPoolIndex_];
            array[0] = type;
            array[1] = id;
            array[2] = depth;
            array[3] = img;
            array[4] = seb;
            array[5] = frame;
            array[6] = x;
            array[7] = y;
            array[8] = (dark ? 1 : 0);
            array[9] = layer;
            ++gameObjectPoolIndex_;
            break;
        }
    }
}

// M:main.AppData.DrawZSortObjects(kairo.unity.ui.Graphics)
void AppData::DrawZSortObjects(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.DrawZSortObjects(kairo.unity.ui.Graphics)", game);
    {
        DrawZSortObjects(g, false, 65535);
    }
}

// M:main.AppData.DrawZSortObjects(kairo.unity.ui.Graphics,System.Boolean)
void AppData::DrawZSortObjects(pls::cs::Ref<pls::kairo::Graphics> g, bool offscreen) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:main.AppData.DrawZSortObjects(kairo.unity.ui.Graphics,System.Boolean)", game);
    {
        DrawZSortObjects(g, offscreen, 65535);
    }
}

// M:main.AppData.DrawZSortObjects(kairo.unity.ui.Graphics,System.Boolean,System.Int32)
void AppData::DrawZSortObjects(pls::cs::Ref<pls::kairo::Graphics> g, bool offscreen,
                               pls::cs::Int32 typeBits) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:main.AppData.DrawZSortObjects(kairo.unity.ui.Graphics,System.Boolean,System.Int32)",
                     game);
    {
        form::SoccerForm::ensure_initialized();
        game::UserData::ensure_initialized();
        game::Tenant::ensure_initialized();

        pls::cs::Ref<game::Player> player = pls::cs::Ref<game::Player>{};
        pls::cs::Int32 num3, num;
        num = 0;
        num3 = num;
        pls::cs::Ref<pls::kairo::MeshManager> meshManager =
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->GetMeshManager(); });
        for (pls::cs::Int32 i = zsortObjectStart_; i <= zsortObjectLast_; ++i) {
            for (pls::cs::Int32 j = 0; j < pls::cs::cast_integral<pls::cs::Int32>(zsortObjectCount_[i]);
                 ++j) {
                IntArray array = gameObjectPool_[zsortObjects_[i][j]];
                bool flag = array[8] == 1;
                pls::cs::Int32 num2 = array[0];
                if (!offscreen) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> void {
                            pls::cs::Int32 cs_arg0 = array[2] * 1024;
                            require(meshManager)->SetDepth(cs_arg0, false);
                        }());
                    });
                }
                switch (num2) {
                case 1: {
                    if (!(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::BitUtil::Check(typeBits, pls::cs::Int32(1) << num2);
                        }))) {
                        continue;
                    }
                    {
                        player = ([&]() -> pls::cs::Ref<game::Player> {
                            auto cs_receiver = AppData::udat_();
                            pls::cs::Int32 cs_arg0 = array[1] / 100;
                            pls::cs::Int32 cs_arg1 = array[1] % 100;
                            return require(cs_receiver)->GetPlayer(cs_arg0, cs_arg1);
                        }());
                        {
                            pls::cs::Int32 cs_arg1 = array[6];
                            pls::cs::Int32 cs_arg2 = array[7];
                            pls::cs::Int32 cs_arg3 = array[9];
                            require(player)->Draw(g, cs_arg1, cs_arg2, cs_arg3, true);
                        }
                    }
                    break;
                }
                case 2: {
                    if (!pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::BitUtil::Check(typeBits, pls::cs::Int32(1) << num2);
                        })) {
                        continue;
                    }
                    {
                        auto cs_receiver_34 = AppData::udat_();
                        pls::cs::Int32 cs_arg0_34 = array[1];
                        pls::cs::Ref<game::TPlayer> tPlayer2 =
                            require(cs_receiver_34)->GetTPlayer(cs_arg0_34);
                        {
                            pls::cs::Int32 cs_arg1 = array[6];
                            pls::cs::Int32 cs_arg2 = array[7];
                            pls::cs::Int32 cs_arg3 = array[9];
                            require(tPlayer2)->Draw(g, cs_arg1, cs_arg2, cs_arg3, false);
                        }
                    }
                    break;
                }
                case 3: {
                    if (!pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::BitUtil::Check(typeBits, pls::cs::Int32(1) << num2);
                        })) {
                        continue;
                    }
                    {
                        {
                            auto cs_receiver = require(AppData::udat_())->tp_svisor_;
                            pls::cs::Int32 cs_arg1 = array[6];
                            pls::cs::Int32 cs_arg2 = array[7];
                            pls::cs::Int32 cs_arg3 = array[9];
                            require(cs_receiver)->Draw(g, cs_arg1, cs_arg2, cs_arg3, false);
                        }
                    }
                    break;
                }
                case 8: {
                    if (!pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::BitUtil::Check(typeBits, pls::cs::Int32(1) << num2);
                        })) {
                        continue;
                    }
                    {
                        {
                            pls::cs::Int32 cs_arg1 = array[6];
                            pls::cs::Int32 cs_arg2 = array[7];
                            pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                                require(resCom2_)->seb.get_Item(array[4]);
                            pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                                require(resCom2_)->img.get_Item(array[3]);
                            pls::cs::Int32 cs_arg5 = array[5];
                            DrawSeb(g, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
                        }
                    }
                    break;
                }
                case 9: {
                    if (!pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::BitUtil::Check(typeBits, pls::cs::Int32(1) << num2);
                        })) {
                        break;
                    }
                    {
                        pls::cs::Int32 cs_arg1 = array[6];
                        pls::cs::Int32 cs_arg2 = array[7];
                        pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                            require(resCom2_)->seb.get_Item(array[4]);
                        pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(resCom2_)->img.get_Item(array[3]);
                        pls::cs::Int32 cs_arg5 = array[5];
                        DrawSeb(g, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
                    }
                    if (form::SoccerForm::SHOW_DEBUGDRAW() == 1) {
                        IntArray2 array2 = game::UserData::COLLISION_SPOS()[1];
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return pls::kairo::Graphics::GetColorOfRGB(255, 0, 0);
                            }));
                        });
                        for (pls::cs::Int32 k = 0; k < array2.length(); ++k) {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return ([&]() -> void {
                                    pls::cs::Single cs_arg0 = ([&]() -> pls::cs::Int32 {
                                        auto cs_left = array[6];
                                        auto cs_right = array2[k][0];
                                        return cs_left + cs_right;
                                    }());
                                    pls::cs::Single cs_arg1 = ([&]() -> pls::cs::Int32 {
                                        auto cs_left = array[7];
                                        auto cs_right = array2[k][1];
                                        return cs_left - cs_right;
                                    }());
                                    pls::cs::Single cs_arg2 = ([&]() -> pls::cs::Int32 {
                                        auto cs_left = array[6];
                                        auto cs_right = array2[(k + 1) % 4][0];
                                        return cs_left + cs_right;
                                    }());
                                    pls::cs::Single cs_arg3 = ([&]() -> pls::cs::Int32 {
                                        auto cs_left = array[7];
                                        auto cs_right = array2[(k + 1) % 4][1];
                                        return cs_left - cs_right;
                                    }());
                                    require(g)->DrawLine(cs_arg0, cs_arg1, cs_arg2, cs_arg3, 1.0f);
                                }());
                            });
                        }
                    }
                    break;
                }
                case 4: {
                    if (!pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::BitUtil::Check(typeBits, pls::cs::Int32(1) << num2);
                        })) {
                        continue;
                    }
                    {
                        {
                            pls::cs::Int32 cs_arg1 = array[6];
                            pls::cs::Int32 cs_arg2 = array[7];
                            pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                                require(resMapChip_)->seb.get_Item(array[4]);
                            pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                                require(resMapChip_)->img.get_Item(array[3]);
                            pls::cs::Int32 cs_arg5 = array[5];
                            DrawSeb(g, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
                        }
                    }
                    break;
                }
                case 5: {
                    if (!pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::BitUtil::Check(typeBits, pls::cs::Int32(1) << num2);
                        })) {
                        continue;
                    }
                    {
                        {
                            pls::cs::Int32 cs_arg1 = array[6];
                            pls::cs::Int32 cs_arg2 = array[7];
                            pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                                require(resMapChipMain_)->seb.get_Item(array[4]);
                            pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                                require(resMapChipMain_)->img.get_Item(array[3]);
                            pls::cs::Int32 cs_arg5 = array[5];
                            DrawSeb(g, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
                        }
                    }
                    break;
                }
                case 6: {
                    if (!pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::BitUtil::Check(typeBits, pls::cs::Int32(1) << num2);
                        })) {
                        continue;
                    }
                    {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> void {
                                pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                                    require(resMapChipMain_)->img.get_Item(array[3]);
                                pls::cs::Single cs_arg1 = array[6];
                                pls::cs::Single cs_arg2 = array[7];
                                require(g)->DrawImage(cs_arg0, cs_arg1, cs_arg2);
                            }());
                        });
                    }
                    break;
                }
                case 7: {
                    if (!pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::BitUtil::Check(typeBits, pls::cs::Int32(1) << num2);
                        })) {
                        continue;
                    }
                    {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> void {
                                pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                                    require(resMapObject_)->img.get_Item(array[3]);
                                pls::cs::Single cs_arg1 = array[6];
                                pls::cs::Single cs_arg2 = array[7];
                                require(g)->DrawImage(cs_arg0, cs_arg1, cs_arg2);
                            }());
                        });
                    }
                    break;
                }
                case 10: {
                    if (!pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::BitUtil::Check(typeBits, pls::cs::Int32(1) << num2);
                        })) {
                        continue;
                    }
                    {
                        pls::cs::Ref<game::TPlayer> tPlayer =
                            require(AppData::udat_())->tPlayers_.get_Item(array[1]);
                        pls::cs::Ref<data::PlayerData> playerData =
                            pData_.get_Item(require(tPlayer)->pData_id_);
                        num3 = array[6] - 25;
                        num = array[7] - 18;
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> void {
                                pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                                    require(resCom2_)->img.get_Item(136);
                                require(g)->DrawImage(cs_arg0, num3, num, 0, 0, 51, 18);
                            }());
                        });
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(g)->ClipRect(num3 + 1, num + 2, 16.0f, 13.0f, true);
                        });
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(g)->SetImageClip(num3 + 1, num + 2, 16.0f, 13.0f);
                        });
                        require(AppData::udat_())
                            ->SetDispPlayerData(0, require(AppData::udat_())->selectUniform_,
                                                require(playerData)->faceImg_, 0, 1);
                        require(AppData::udat_())->DrawDispPlayer(g, num3 + 10, num + 16 + 6);
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(g)->ClearImageClip(); });
                        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->PopClip(); });
                        pls::cs::Int32 cs_arg0_35 = require(tPlayer)->useTenantCnt_;
                        pls::cs::Int32 cs_arg2_35 = game::Tenant::USETENANT_TIME()[0];
                        pls::cs::Int32 width =
                            game::GameUtil::RateConvert(cs_arg0_35, 0, cs_arg2_35, 0, 30, true);
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> void {
                                pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                                    require(resCom2_)->img.get_Item(136);
                                require(g)->DrawImage(cs_arg0, num3 + 19, num + 10, 19, 18, width, 4);
                            }());
                        });
                    }
                    break;
                }
                }
            }
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(meshManager)->SetDepthFront(); });
    }
}

// M:main.AppData.AddPopupScriptBuffer(System.Int32[],System.Int32,System.String)
void AppData::AddPopupScriptBuffer(IntArray script, pls::cs::Int32 popId, pls::cs::String popMsg) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:main.AppData.AddPopupScriptBuffer(System.Int32[],System.Int32,System.String)", game);
    {
        if ([&]() {
                auto cs_left = pls::cs::box(script);
                auto cs_right = pls::cs::box(IntArray{});
                return cs_left == cs_right;
            }()) {
            script = IntArray::make(0);
        }
        if (is_null(popMsg)) {
            popMsg = pls::cs::String(u"");
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                auto cs_receiver = popupScriptBuffer_;
                pls::cs::Ref<pls::cs::Object> cs_arg0 =
                    pls::cs::box(pls::cs::Array<pls::cs::Ref<pls::cs::Object>>::from(
                        {pls::cs::box(script), pls::cs::box(kl_lang::JInteger::create(popId)),
                         pls::cs::box(popMsg)}));
                kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
            }());
        });
    }
}

// M:main.AppData.ChangeMap(System.Int32)
void AppData::ChangeMap(pls::cs::Int32 next_mapId) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.ChangeMap(System.Int32)", game);
    {
        SetNowStoreIndex(next_mapId);
    }
}

// M:main.AppData.GetSeason
pls::cs::Int32 AppData::GetSeason() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.GetSeason", game);
    {
        if (require(save_)->ints[2] >= 2 && require(save_)->ints[2] <= 4) {
            return 0;
        }
        if (require(save_)->ints[2] >= 5 && require(save_)->ints[2] <= 7) {
            return 1;
        }
        if (require(save_)->ints[2] >= 8 && require(save_)->ints[2] <= 10) {
            return 2;
        }
        return 3;
    }
}

// M:main.AppData.ClearPopupMessages
void AppData::ClearPopupMessages() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.ClearPopupMessages", game);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::Vector_2_RemoveAllElements(require(popupMessages_));
        });
    }
}

// M:main.AppData.AddPopupMessage(System.Int32,System.String)
void AppData::AddPopupMessage(pls::cs::Int32 id, pls::cs::String args) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.AddPopupMessage(System.Int32,System.String)", game);
    {
        game::UserData::ensure_initialized();

        pls::cs::Int32 existPopupNum = GetExistPopupNum(id);
        if (existPopupNum >= 2) {
            return;
        }
        {
            pls::cs::String value = form::MyFormBase::LT(game::UserData::POPUP_MEM()[id]);
            value = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::StringUtil::Replace(value, args); });
            AddPopupMessage(id, value, -1, 60);
        }
    }
}

// M:main.AppData.AddPopupMessage(System.Int32,System.String,System.Int32,System.Int32)
void AppData::AddPopupMessage(pls::cs::Int32 id, pls::cs::String msg, pls::cs::Int32 wait,
                              pls::cs::Int32 time) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:main.AppData.AddPopupMessage(System.Int32,System.String,System.Int32,System.Int32)",
                     game);
    {
        pls::cs::Ref<kairo::unity::ui::TextLayout> textLayout =
            kairo::unity::ui::TextLayout::create(false, true);
        require(textLayout)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
            return pls::kairo::Graphics::GetColorOfRGB(30, 30, 30);
        }));
        require(textLayout)->SetText(msg);
        require(textLayout)->Flush();
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                auto cs_receiver = popupMessages_;
                pls::cs::Ref<pls::cs::Object> cs_arg0 =
                    pls::cs::box(pls::cs::Array<pls::cs::Ref<pls::cs::Object>>::from(
                        {pls::cs::box(textLayout), pls::cs::box(IntArray::from({id, wait, time}))}));
                kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
            }());
        });
    }
}

// M:main.AppData.RemovePopupMessages(System.Int32)
void AppData::RemovePopupMessages(pls::cs::Int32 id) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.RemovePopupMessages(System.Int32)", game);
    {
        for (pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                      return kl_java_util::Vector_2_Size(require(popupMessages_));
                                  }) -
                                  1;
             num >= 0; --num) {
            pls::cs::Array<pls::cs::Ref<pls::cs::Object>> array =
                pls::cs::unbox<pls::cs::Array<pls::cs::Ref<pls::cs::Object>>>(
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(popupMessages_), num);
                    }));
            if ((pls::cs::unbox<IntArray>(array.get_Item(1)))[0] == id) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_RemoveElementAt(require(popupMessages_), num);
                });
            }
        }
    }
}

// M:main.AppData.DrawPopupMessage(kairo.unity.ui.Graphics,System.Int32)
void AppData::DrawPopupMessage(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 bottom) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:main.AppData.DrawPopupMessage(kairo.unity.ui.Graphics,System.Int32)", game);
    {
        form::SoccerForm::ensure_initialized();

        pls::cs::Ref<surface::GameView> instance = surface::GameView::GetInstance();
        pls::cs::Int32 num = 8;
        pls::cs::Int32 num2 = bottom;
        for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_Size(require(popupMessages_));
                                   });
             ++i) {
            pls::cs::Array<pls::cs::Ref<pls::cs::Object>> array =
                pls::cs::unbox<pls::cs::Array<pls::cs::Ref<pls::cs::Object>>>(
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(popupMessages_), i);
                    }));
            IntArray array2 = pls::cs::unbox<IntArray>(array.get_Item(1));
            if (array2[1] < 0) {
                continue;
            }
            pls::cs::Int32 num3 = array2[1];
            pls::cs::Int32 num4 = 19;
            if (i == 0) {
                num4 = 21;
            }
            pls::cs::Int32 num5 = 0;
            if ((num3 <= num)) {
                num5 = (num4 * num3 / num);
            } else {
                if ((num3 >= array2[2] + num)) {
                    num5 = ((num4 - num4 * (num3 - (array2[2] + num)) / num));
                } else {
                    num5 = (num4);
                }
            }
            drawPopupMessage_heights[i] = num5;
            if (num5 <= 0) {
                continue;
            }
            num2 -= num5;
        }
        pls::cs::Int32 cs_arg0_84 = require(instance)->GetGameWidth();
        pls::cs::Int32 cs_arg1_84 = 240 + require(instance)->GetSideSoftWidth() * 2;
        pls::cs::Int32 num6 = AppData::ClampMin(cs_arg0_84, cs_arg1_84);
        pls::cs::Int32 num7 = bottom - num2 + 20;
        pls::cs::Int32 num8 = 0;
        if (require(surface::GamePad::GetInstance())->GetMode() == 2) {
            num8 += require(instance)->GetSideSoftWidth();
        }
        pls::cs::Int32 num9 = num6 - require(instance)->GetSideSoftWidth();
        pls::cs::Double num10 = pls::cs::Double((num6 - require(instance)->GetSideSoftWidth() * 2)) / 240.0;
        pls::cs::Int32 num11 = 0;
        if (!pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::Language::Japanese(); })) {
            num11 = 1;
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                pls::cs::Single cs_arg1 = form::SoccerForm::VIEW_Y();
                pls::cs::Single cs_arg2 = require(instance)->GetWidth();
                require(g)->ClipRect(0.0f, cs_arg1, cs_arg2, bottom - form::SoccerForm::VIEW_Y(), true);
            }());
        });
        for (pls::cs::Int32 num12 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return kl_java_util::Vector_2_Size(require(popupMessages_));
                                    }) -
                                    1;
             num12 >= 0; --num12) {
            pls::cs::Array<pls::cs::Ref<pls::cs::Object>> array3 =
                pls::cs::unbox<pls::cs::Array<pls::cs::Ref<pls::cs::Object>>>(
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(popupMessages_), num12);
                    }));
            IntArray array4 = pls::cs::unbox<IntArray>(array3.get_Item(1));
            if (array4[1] < 0) {
                continue;
            }
            pls::cs::Ref<kairo::unity::ui::TextLayout> textLayout =
                pls::cs::unbox<pls::cs::Ref<kairo::unity::ui::TextLayout>>(array3.get_Item(0));
            if (drawPopupMessage_heights[num12] <= 0) {
                continue;
            }
            Draw_helpMessage(g, require(textLayout)->GetText(), num8, num2);
            num2 += drawPopupMessage_heights[num12];
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->PopClip(); });
    }
}

// M:main.AppData.Draw_helpMessage(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32)
void AppData::Draw_helpMessage(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String text, pls::cs::Int32 x,
                               pls::cs::Int32 y) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.Draw_helpMessage(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32)",
        game);
    {
        pls::cs::Ref<pls::kairo::Font> font = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{}); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(resCom2_)->img.get_Item(77);
                require(g)->DrawImage(cs_arg0, x, y, 0, 0, 32, 22);
            }());
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(resCom2_)->img.get_Item(172);
                require(g)->DrawImage(cs_arg0, x + 2, y + 1, 0, 0, 16, 19);
            }());
        });
        pls::cs::Int32 num = 0;
        pls::cs::String text2 = text;
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return pls::cs::culture_index_of(text, literal(u"<co="), 0);
            }) != -1) {
            text2 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                return pls::cs::string_replace(text2, literal(u"<co=0064FF>"), pls::cs::String(u""));
            });
            text2 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                return pls::cs::string_replace(text2, literal(u"</co>"), pls::cs::String(u""));
            });
        }
        pls::cs::Int32 num2 = pls::cs::Int32(pls::diagnostic::api_call(
                                  [&]() -> decltype(auto) { return require(font)->StringWidth(text2); })) +
                              16;
        pls::cs::Int32 num3 = 32;
        pls::cs::Ref<surface::GameView> instance = surface::GameView::GetInstance();
        auto cs_left_82 = require(instance)->GetGameWidth();
        auto cs_right_82 = require(instance)->GetSideSoftWidth();
        pls::cs::Int32 num4 = cs_left_82 - cs_right_82;
        pls::cs::Int32 num5 = x + 32;
        pls::cs::Int32 num6 = 0;
        pls::cs::Int32 num7 = num2;
        num = 0;
        while (true) {
            {
                num6 = AppData::ClampMax(108, num7);
                if (num5 + num6 > num4) {
                    num6 = num4 - num5;
                }
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(resCom2_)->img.get_Item(77);
                        require(g)->DrawImage(cs_arg0, num5, y, 32, 0, num6, 22);
                    }());
                });
                num5 += num6;
                num7 -= num6;
                if (num5 >= num4) {
                    break;
                }
                if (num7 == 0) {
                    break;
                }
                ++num;
            }
            if (num >= 5) {
                break;
            }
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->SetColor(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(30, 30, 30); }));
        });
        kairo::unity::ui::Graphics::DrawString2(require(g), text, x + 32, y + 6);
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(resCom2_)->img.get_Item(77);
                require(g)->DrawImage(cs_arg0, num5 - 16, y, 160, 0, 16, 22);
            }());
        });
    }
}

// M:main.AppData.UpdatePopupMessage
void AppData::UpdatePopupMessage() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.UpdatePopupMessage", game);
    {
        for (pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                      return kl_java_util::Vector_2_Size(require(popupMessages_));
                                  }) -
                                  1;
             num >= 0; --num) {
            pls::cs::Array<pls::cs::Ref<pls::cs::Object>> array =
                pls::cs::unbox<pls::cs::Array<pls::cs::Ref<pls::cs::Object>>>(
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(popupMessages_), num);
                    }));
            IntArray array2 = pls::cs::unbox<IntArray>(array.get_Item(1));
            if (++array2[1] < 0) {
                continue;
            }
            pls::cs::Int32 num2 = array2[1];
            if (num2 == 1) {
                PlaySe(24);
            }
            pls::cs::Int32 num3 = 8;
            pls::cs::Int32 num4 = num3 * 2 + array2[2];
            if (num2 > num4) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_RemoveElementAt(require(popupMessages_), num);
                });
            }
        }
    }
}

// M:main.AppData.GetPopupMessage(System.Int32)
pls::cs::Array<pls::cs::Ref<pls::cs::Object>> AppData::GetPopupMessage(pls::cs::Int32 key) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.GetPopupMessage(System.Int32)", game);
    {
        for (pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                      return kl_java_util::Vector_2_Size(require(popupMessages_));
                                  }) -
                                  1;
             num >= 0; --num) {
            pls::cs::Array<pls::cs::Ref<pls::cs::Object>> array =
                pls::cs::unbox<pls::cs::Array<pls::cs::Ref<pls::cs::Object>>>(
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(popupMessages_), num);
                    }));
            IntArray array2 = pls::cs::unbox<IntArray>(array.get_Item(1));
            if (array2[3] == key) {
                return array;
            }
        }
        return pls::cs::Array<pls::cs::Ref<pls::cs::Object>>{};
    }
}

// M:main.AppData.ChExistPopup(System.Int32)
bool AppData::ChExistPopup(pls::cs::Int32 id) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.ChExistPopup(System.Int32)", game);
    {
        for (pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                      return kl_java_util::Vector_2_Size(require(popupMessages_));
                                  }) -
                                  1;
             num >= 0; --num) {
            pls::cs::Array<pls::cs::Ref<pls::cs::Object>> array =
                pls::cs::unbox<pls::cs::Array<pls::cs::Ref<pls::cs::Object>>>(
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(popupMessages_), num);
                    }));
            IntArray array2 = pls::cs::unbox<IntArray>(array.get_Item(1));
            if (array2[0] == id) {
                return true;
            }
        }
        return false;
    }
}

// M:main.AppData.GetExistPopupNum(System.Int32)
pls::cs::Int32 AppData::GetExistPopupNum(pls::cs::Int32 id) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.GetExistPopupNum(System.Int32)", game);
    {
        pls::cs::Int32 num = 0;
        for (pls::cs::Int32 num2 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_Size(require(popupMessages_));
                                   }) -
                                   1;
             num2 >= 0; --num2) {
            pls::cs::Array<pls::cs::Ref<pls::cs::Object>> array =
                pls::cs::unbox<pls::cs::Array<pls::cs::Ref<pls::cs::Object>>>(
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(popupMessages_), num2);
                    }));
            IntArray array2 = pls::cs::unbox<IntArray>(array.get_Item(1));
            if (array2[0] == id) {
                ++num;
            }
        }
        return num;
    }
}

// M:main.AppData.AddDebugLog(System.String)
void AppData::AddDebugLog(pls::cs::String debug_log) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.AddDebugLog(System.String)", game);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::Vector_2_AddElement(require(debugLog_), pls::cs::box(debug_log));
        });
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_java_util::Vector_2_Size(require(debugLog_)); }) > 50) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_RemoveElementAt(require(debugLog_), 0);
            });
        }
    }
}

// M:main.AppData.SendSaveData(System.String)
void AppData::SendSaveData(pls::cs::String text) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.SendSaveData(System.String)", game);
    {
        SendSaveData(text, false);
    }
}

// M:main.AppData.SendSaveData(System.String,System.Boolean)
void AppData::SendSaveData(pls::cs::String text, bool scratchpad) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.SendSaveData(System.String,System.Boolean)", game);
    {
        SendSaveData(text, scratchpad, pls::cs::Ref<pls::cs::ExceptionObject>{});
    }
}

// M:main.AppData.SendSaveData(System.String,System.Boolean,System.Exception)
void AppData::SendSaveData(pls::cs::String text, bool scratchpad, pls::cs::Ref<pls::cs::ExceptionObject> th) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:main.AppData.SendSaveData(System.String,System.Boolean,System.Exception)", game);
    {
        SendSaveDataInt(text, scratchpad ? 1 : 0, th);
    }
}

// M:main.AppData.SendSaveData(System.String,System.Int32)
void AppData::SendSaveDataInt(pls::cs::String text, pls::cs::Int32 type) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.SendSaveData(System.String,System.Int32)", game);
    {
        SendSaveDataInt(text, type, pls::cs::Ref<pls::cs::ExceptionObject>{});
    }
}

// M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception)
void AppData::SendSaveDataInt(pls::cs::String text, pls::cs::Int32 type,
                              pls::cs::Ref<pls::cs::ExceptionObject> th) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:main.AppData.SendSaveData(System.String,System.Int32,System.Exception)", game);
    {
        pls::cs::Ref<pls::kairo::Canvas> instance{};
        pls::cs::Ref<kl_java_util::JCalendar> instance2{};
        pls::cs::String text2{};
        pls::cs::String text3{};
        pls::cs::String text4{};
        pls::cs::String text5{};
        pls::cs::String text6{};
        pls::cs::String text7{};
        pls::cs::String date{};
        bool flag{};
        pls::cs::String text8{};
        pls::cs::String text9{};
        pls::cs::Int32 num{};
        pls::cs::String text11{};
        pls::cs::String text12{};
        pls::cs::Int32 num2{};
        ByteArray array{};
        ByteArray array2{};
        ByteArray array3{};
        pls::cs::Ref<pls::kairo::RecordStore> recordStore{};
        pls::cs::Ref<pls::kairo::RecordStore> recordStore2{};
        pls::cs::String url{};
        pls::cs::Int32 num3{};
        pls::cs::Array<ByteArray> array4{};
        StringArray array5{};
        StringArray array6{};
        pls::cs::String str{};
        pls::cs::Ref<pls::kairo::RecordStore> recordStore3{};
        ByteArray data{};
        pls::cs::Ref<kl_unity_util::Property> property{};
        pls::cs::Int32 num4{};
        pls::cs::Int32 i{};
        pls::cs::Int32 num5{};
        pls::cs::Int32 num6{};
        pls::cs::Int32 num7{};
        pls::cs::Ref<kairo::unity::ui::Dialog> dialog{};
        pls::cs::Ref<kairo::unity::ui::Dialog> dialog2{};
        pls::cs::Ref<kairo::unity::ui::Dialog> dialog3{};
        {
            kl_cfg::Config::ensure_initialized();

            text = pls::cs::String::concat(
                pls::cs::String::concat(
                    pls::cs::String::concat(
                        pls::cs::String::concat(pls::cs::String::concat(literal(u"dev="), platform_),
                                                literal(u"\nver")),
                        integer_string(202)),
                    literal(u"\n")),
                text);
            instance = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::kairo::Canvas::GetInstance(); });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::String cs_arg1 = pls::cs::String(u"");
                    require(instance)->SetSoftLabel(0, cs_arg1);
                }());
            });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::String cs_arg1 = pls::cs::String(u"");
                    require(instance)->SetSoftLabel(1, cs_arg1);
                }());
            });
            instance2 = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_java_util::JCalendar::GetInstance(); });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::Ref<kl_java_util::JDate> cs_arg0 =
                        kl_java_util::JDate::create(pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return kl_lang::JSystem::CurrentTimeMillis(); }));
                    require(instance2)->SetTime(cs_arg0);
                }());
            });
            auto cs_left_249 = pls::cs::String(u"");
            auto cs_right_249 = integer_string(
                pls::diagnostic::api_call([&]() -> decltype(auto) { return require(instance2)->Get(1); }));
            text2 = pls::cs::String::concat(cs_left_249, cs_right_249);
            auto cs_left_250 = pls::cs::String(u"");
            auto cs_right_250 =
                integer_string((pls::cs::Int32(pls::diagnostic::api_call(
                                    [&]() -> decltype(auto) { return require(instance2)->Get(2); })) +
                                1));
            text3 = pls::cs::String::concat(cs_left_250, cs_right_250);
            if (kl_lang::StringEx::Length(text3) == 1) {
                text3 = pls::cs::String::concat(literal(u"0"), text3);
            }
            auto cs_left_251 = pls::cs::String(u"");
            auto cs_right_251 = integer_string(
                pls::diagnostic::api_call([&]() -> decltype(auto) { return require(instance2)->Get(5); }));
            text4 = pls::cs::String::concat(cs_left_251, cs_right_251);
            if (kl_lang::StringEx::Length(text4) == 1) {
                text4 = pls::cs::String::concat(literal(u"0"), text4);
            }
            auto cs_left_252 = pls::cs::String(u"");
            auto cs_right_252 = integer_string(
                pls::diagnostic::api_call([&]() -> decltype(auto) { return require(instance2)->Get(11); }));
            text5 = pls::cs::String::concat(cs_left_252, cs_right_252);
            if (kl_lang::StringEx::Length(text5) == 1) {
                text5 = pls::cs::String::concat(literal(u"0"), text5);
            }
            auto cs_left_253 = pls::cs::String(u"");
            auto cs_right_253 = integer_string(
                pls::diagnostic::api_call([&]() -> decltype(auto) { return require(instance2)->Get(12); }));
            text6 = pls::cs::String::concat(cs_left_253, cs_right_253);
            if (kl_lang::StringEx::Length(text6) == 1) {
                text6 = pls::cs::String::concat(literal(u"0"), text6);
            }
            auto cs_left_254 = pls::cs::String(u"");
            auto cs_right_254 = integer_string(
                pls::diagnostic::api_call([&]() -> decltype(auto) { return require(instance2)->Get(13); }));
            text7 = pls::cs::String::concat(cs_left_254, cs_right_254);
            if (kl_lang::StringEx::Length(text7) == 1) {
                text7 = pls::cs::String::concat(literal(u"0"), text7);
            }
            auto cs_left_255 = pls::cs::String::concat(
                pls::cs::String::concat(
                    pls::cs::String::concat(
                        pls::cs::String::concat(
                            pls::cs::String::concat(
                                pls::cs::String::concat(
                                    pls::cs::String::concat(
                                        pls::cs::String::concat(
                                            pls::cs::String::concat(
                                                pls::cs::String::concat(
                                                    pls::cs::String::concat(pls::cs::String(u""), text2),
                                                    literal(u".")),
                                                text3),
                                            literal(u".")),
                                        text4),
                                    literal(u"_")),
                                text5),
                            literal(u".")),
                        text6),
                    literal(u".")),
                text7);
            auto cs_right_255 = pls::cs::String(u"");
            date = pls::cs::String::concat(cs_left_255, cs_right_255);
            flag = false;
            sendState_ = 0;
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(instance)->ClearKeyBuffer(); });
            text8 = pls::cs::String{};
            if (!is_null(th)) {
                text8 = pls::cs::String(u"");
                if (!is_null(kairo::unity::io::Http::GetErrorUrl())) {
                    text9 = kairo::unity::io::Http::GetErrorUrl();
                    num = pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return last_index_char1(text9, u'/'); });
                    if (num != -1) {
                        text9 = kl_lang::StringEx::SubstringJ(text9, num + 1);
                    }
                    num = pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return last_index_char1(text9, u'.'); });
                    if (num != -1) {
                        text9 = kl_lang::StringEx::SubstringJ(text9, 0, num);
                    }
                    text8 = pls::cs::String::concat(
                        text8,
                        pls::cs::String::concat(
                            pls::cs::String::concat(pls::cs::String::concat(text9, literal(u",")),
                                                    integer_string(kairo::unity::io::Http::GetErrorCode())),
                            literal(u"\n")));
                }
                text11 = pls::cs::String::concat(pls::cs::String(u""), object_string(pls::cs::box(th)));
                text12 =
                    require(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() {
                            auto cs_receiver = pls::cs::box(th);
                            return pls::cs::RuntimeType::for_name(require(cs_receiver)->managed_type_name());
                        }());
                    }))->get_Name();
                num2 = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return last_index_char1(text12, u'.'); });
                if (num2 != -1) {
                    text12 = kl_lang::StringEx::SubstringJ(text12, num2 + 1);
                }
                num2 = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return pls::cs::culture_index_of(text11, text12); });
                if (num2 != -1) {
                    text11 = kl_lang::StringEx::SubstringJ(text11, num2);
                }
                if (is_instance<pls::cs::Ref<kl_unity_io::ConnectionException>>(pls::cs::box(th))) {
                    text11 = pls::cs::String::concat(
                        pls::cs::String::concat(text11, literal(u",")),
                        integer_string(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require((pls::cs::unbox<pls::cs::Ref<kl_unity_io::ConnectionException>>(
                                               pls::cs::box(th))))
                                ->GetStatus();
                        })));
                }
                if (is_instance<pls::cs::Ref<kairo::unity::ui::UIException>>(pls::cs::box(th))) {
                    text11 = pls::cs::String::concat(
                        pls::cs::String::concat(text11, literal(u",")),
                        integer_string(require((pls::cs::unbox<pls::cs::Ref<kairo::unity::ui::UIException>>(
                                                   pls::cs::box(th))))
                                           ->GetStatus()));
                }
                text8 = pls::cs::String::concat(text8, text11);
            }
            if (kl_cfg::Config::APPLI_TYPE() == 0) {
                Draw(text8);
                while ((pls::cs::Int32(pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(instance)->GetKeypadState(); })) &
                        0x100000) != 0) {
                    try {
                        java::lang::JThread::Sleep(100ll);
                    } catch (const pls::cs::Exception& cs_caught_141) {
                        auto cs_exception_141 = pls::cs::capture_exception(cs_caught_141);
                        if (pls::cs::exception_is(cs_exception_141,
                                                  "System.Threading.ThreadAbortException")) {
                            {
                            }
                        } else {
                            throw;
                        }
                    }
                }
            }
            while (true) {
                pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(instance)->DecideKeyState(); });
                try {
                    if (sendState_ == 0) {
                        Draw(text8, true);
                        if (pls::diagnostic::api_call(
                                [&]() -> decltype(auto) { return require(instance)->CheckKeyPulse(1024); })) {
                            kairo::unity::ui::Canvas::ImeOnBlock(require(instance), text8, 0, 0);
                        } else if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return require(instance)->CheckKeyPulse(1048576);
                                   })) {
                            sendState_ = 1;
                        }
                    } else if (sendState_ == 1) {
                        Draw(text8);
                        array = ByteArray{};
                        if (kl_cfg::Config::APPLI_TYPE() == 0) {
                            if (type == 1) {
                                text = pls::cs::String::concat(text, literal(u"\nscratchpad"));
                                array = kairo::unity::io::ScratchPad::ReadByteArray(
                                    0, 0, kairo::unity::io::ScratchPad::GetSPSize(0));
                            } else if (type == 2) {
                                {
                                    text = pls::cs::String::concat(text, literal(u"\nall-scratchpad"));
                                    array2 = kairo::unity::io::ScratchPad::ReadByteArray(
                                        0, 0, kairo::unity::io::ScratchPad::GetSPSize(0));
                                    array3 = kairo::unity::io::ScratchPad::ReadByteArray(
                                        1, 0, kairo::unity::io::ScratchPad::GetSPSize(1));
                                    array =
                                        ByteArray::make(pls::cs::Int32(array2.length()) + array3.length());
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return kl_lang::JSystem::Arraycopy(
                                            pls::cs::box(array2), 0, pls::cs::box(array), 0, array2.length());
                                    });
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return kl_lang::JSystem::Arraycopy(pls::cs::box(array3), 0,
                                                                           pls::cs::box(array),
                                                                           array2.length(), array3.length());
                                    });
                                }
                            } else if (type == 0) {
                                try {
                                    recordStore = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return pls::kairo::RecordStore::OpenRecordStore(0);
                                    });
                                    array = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return pls::kairo::RecordStore::ReadRecord(
                                            0, 1 + AppData::currentSaveSlot_());
                                    });
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return require(recordStore)->CloseRecordStore();
                                    });
                                } catch (const pls::cs::Exception& cs_caught_142) {
                                    auto ex2 = pls::cs::capture_exception(cs_caught_142);
                                    {
                                        if (!flag) {
                                            text = pls::cs::String::concat(
                                                pls::cs::String::concat(
                                                    pls::cs::String::concat(text, literal(u"\nRecordStore[")),
                                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                        return require(ex2)->ToString();
                                                    })),
                                                literal(u"]"));
                                        }
                                        array = kairo::unity::io::ScratchPad::ReadByteArray(
                                            0, 0, kairo::unity::io::ScratchPad::GetSPSize(0));
                                        flag = true;
                                    }
                                }
                            }
                        } else if (kl_cfg::Config::APPLI_TYPE() == 1) {
                            try {
                                recordStore2 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return pls::kairo::RecordStore::OpenRecordStore(0);
                                });
                                array = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return pls::kairo::RecordStore::ReadRecord(
                                        0, 1 + AppData::currentSaveSlot_());
                                });
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return require(recordStore2)->CloseRecordStore();
                                });
                            } catch (const pls::cs::Exception& cs_caught_143) {
                                pls::cs::capture_exception(cs_caught_143);
                                {
                                    flag = true;
                                }
                            }
                        }
                        url = pls::cs::String::concat(
                            pls::cs::String::concat(kl_cfg::Config::URL_SP(), literal(u"&ver=")),
                            integer_string(202));
                        num3 = 51200;
                        array4 = pls::cs::Array<ByteArray>::make(((array.length() + num3) - 1) / num3 + 1);
                        array5 = StringArray::make(array4.length());
                        array6 = StringArray::make(array5.length());
                        if (kl_cfg::Config::DEBUG()) {
                            str = pls::cs::String::concat(
                                pls::cs::String::concat(
                                    pls::cs::String::concat(
                                        ((!is_null(save_)) ? require(save_)->strs[0] : pls::cs::String(u"")),
                                        literal(u"\n")),
                                    text),
                                literal(u"\n"));
                            try {
                                recordStore3 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return pls::kairo::RecordStore::OpenRecordStore(0);
                                });
                                data = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return pls::kairo::RecordStore::ReadRecord(
                                        0, 1 + AppData::currentSaveSlot_());
                                });
                                property = kl_unity_util::Property::create(
                                    AppData::defSaveP_(), AppData::defSaveI_(), AppData::defSaveL_(),
                                    AppData::defSaveS_(), AppData::defSaveB_());
                                pls::diagnostic::api_call(
                                    [&]() -> decltype(auto) { return require(property)->Load(data); });
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return require(recordStore3)->CloseRecordStore();
                                });
                            } catch (const pls::cs::Exception& cs_caught_144) {
                                pls::cs::capture_exception(cs_caught_144);
                                {
                                }
                            }
                            array4[0] = kl_lang::StringEx::GetBytes(str);
                        } else {
                            array4[0] = kl_lang::StringEx::GetBytes((pls::cs::String::concat(
                                pls::cs::String::concat(
                                    ((!is_null(save_)) ? require(save_)->strs[0] : pls::cs::String(u"")),
                                    literal(u"\n")),
                                text)));
                        }
                        array5[0] = literal(u"info");
                        array6[0] = literal(u"0");
                        num4 = 0;
                        for (i = 0; i < pls::cs::Int32(array4.length()) - 1; ++i) {
                            num5 = (array.length() - num4);
                            if (num5 > num3) {
                                num5 = num3;
                            }
                            num6 = i + 1;
                            array4[num6] = ByteArray::make(num5);
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_lang::JSystem::Arraycopy(pls::cs::box(array), num4,
                                                                   pls::cs::box(array4[num6]), 0, num5);
                            });
                            array5[num6] = literal(u"save");
                            if (type == 1) {
                                {
                                    auto cs_target = array5;
                                    auto cs_index = num6;
                                    auto cs_old = cs_target.at(cs_index);
                                    auto cs_rhs = literal(u"-sys");
                                    auto cs_value = pls::cs::String::concat(cs_old, cs_rhs);
                                    cs_target.at(cs_index) = cs_value;
                                }
                            } else if (type == 2) {
                                {
                                    auto cs_target = array5;
                                    auto cs_index = num6;
                                    auto cs_old = cs_target.at(cs_index);
                                    auto cs_rhs = literal(u"-all");
                                    auto cs_value = pls::cs::String::concat(cs_old, cs_rhs);
                                    cs_target.at(cs_index) = cs_value;
                                }
                            }
                            array6[num6] = pls::diagnostic::api_call(
                                [&]() -> decltype(auto) { return kl_lang::JString::ValueOfInt(i); });
                            num4 = num4 + num5;
                        }
                        for (num7 = 0; num7 < array4.length(); ++num7) {
                        cs_label_recoveredSendRetry:;
                            Draw(text8);
                            try {
                                {
                                    pls::cs::String cs_arg1 = array5[num7];
                                    pls::cs::String cs_arg2 = array6[num7];
                                    ByteArray cs_arg4 = array4[num7];
                                    Post(url, cs_arg1, cs_arg2, date, cs_arg4);
                                }
                                continue;
                            } catch (const pls::cs::Exception& cs_caught_145) {
                                auto t = pls::cs::capture_exception(cs_caught_145);
                                {
                                    if (kl_cfg::Config::PRINT()) {
                                        pls::diagnostic::api_call(
                                            [&]() -> decltype(auto) { return kl_unity_util::Log::Info(t); });
                                    }
                                    dialog = kairo::unity::ui::Dialog::create(3, literal(u"ｴﾗｰ"));
                                    require(dialog)->SetText(
                                        literal(u"エラーが発生しました。リトライしますか？"));
                                    if (require(dialog)->Show() == 8) {
                                        while ((pls::cs::Int32(
                                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                        return require(instance)->GetKeypadState();
                                                    })) &
                                                0x100000) != 0) {
                                            try {
                                                java::lang::JThread::Sleep(100ll);
                                            } catch (const pls::cs::Exception& cs_caught_146) {
                                                auto cs_exception_146 =
                                                    pls::cs::capture_exception(cs_caught_146);
                                                if (pls::cs::exception_is(
                                                        cs_exception_146,
                                                        "System.Threading.ThreadAbortException")) {
                                                    {
                                                    }
                                                } else {
                                                    throw;
                                                }
                                            }
                                        }
                                        sendState_ = 0;
                                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                                            return require(instance)->ClearKeyBuffer();
                                        });
                                        goto cs_label_recoveredSendOuterEnd;
                                    }
                                }
                            }
                            goto cs_label_recoveredSendRetry;
                        }
                        {
                            auto cs_target = require(sysSave_)->strs;
                            auto cs_index = 10;
                            auto cs_value = pls::cs::String(u"");
                            cs_target.set_Item(cs_index, cs_value);
                        }
                        SaveSystem();
                        dialog2 = kairo::unity::ui::Dialog::create(0, literal(u"完了"));
                        require(dialog2)->SetText(literal(
                            u"送信を完了しました。\nご協力ありがとうございます。\n今後もカイロパークを宜しくお願い致します。"));
                        require(dialog2)->Show();
                        return;
                    }
                    java::lang::JThread::Sleep(100ll);
                } catch (const pls::cs::Exception& cs_caught_147) {
                    auto t2 = pls::cs::capture_exception(cs_caught_147);
                    {
                        if (kl_cfg::Config::PRINT()) {
                            pls::diagnostic::api_call(
                                [&]() -> decltype(auto) { return kl_unity_util::Log::Info(t2); });
                        }
                        dialog3 = kairo::unity::ui::Dialog::create(3, literal(u"ｴﾗｰ"));
                        require(dialog3)->SetText(literal(u"エラーが発生しました。リトライしますか？"));
                        if (require(dialog3)->Show() == 8) {
                            while ((pls::cs::Int32(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return require(instance)->GetKeypadState();
                                    })) &
                                    0x100000) != 0) {
                                try {
                                    java::lang::JThread::Sleep(100ll);
                                } catch (const pls::cs::Exception& cs_caught_148) {
                                    auto cs_exception_148 = pls::cs::capture_exception(cs_caught_148);
                                    if (pls::cs::exception_is(cs_exception_148,
                                                              "System.Threading.ThreadAbortException")) {
                                        {
                                        }
                                    } else {
                                        throw;
                                    }
                                }
                            }
                            sendState_ = 0;
                            pls::diagnostic::api_call(
                                [&]() -> decltype(auto) { return require(instance)->ClearKeyBuffer(); });
                        }
                    }
                }
            cs_label_recoveredSendOuterEnd:;
                ;
            }
        }
    }
}

// M:main.AppData.Draw(System.String)
void AppData::Draw(pls::cs::String err) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.Draw(System.String)", game);
    {
        Draw(err, false);
    }
}

// M:main.AppData.Draw(System.String,System.Boolean)
void AppData::Draw(pls::cs::String err, bool copy) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.Draw(System.String,System.Boolean)", game);
    {
        pls::cs::String text;
        pls::cs::Ref<pls::kairo::Canvas> instance =
            pls::diagnostic::api_call([&]() -> decltype(auto) { return pls::kairo::Canvas::GetInstance(); });
        pls::cs::Ref<pls::kairo::Graphics> graphics =
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(instance)->BeginPaint(); });
        pls::cs::Ref<pls::kairo::Font> font = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(graphics)->GetFont(pls::cs::Ref<pls::kairo::Font>{}); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(graphics)->SetColor(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(0, 0, 64); }));
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(graphics)->FillRect(0.0f, 0.0f, 240.0f, 240.0f); });
        if (!is_null(err)) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(graphics)->SetColor(pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255); }));
            });
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(graphics)->DrawRect(1.0f, 1.0f, 237.0f, 147.0f); });
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(graphics)->DrawRect(1.0f, 150.0f, 237.0f, 88.0f); });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(graphics)->SetColor(pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255); }));
            });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(graphics)->DrawString(literal(u"【エラー情報】"), 120.0f, 5.0f, 2);
            });
            kairo::unity::ui::TextLayout::Draw(graphics, err, 5.0f, 20.0f, 230.0f, 100.0f,
                                               pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                   return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);
                                               }),
                                               2, 0);
            if (copy) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(graphics)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return pls::kairo::Graphics::GetColorOfRGB(0, 255, 255);
                    }));
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(graphics)->DrawString(literal(u"[＊]キーでコピー出来ます"), 120.0f, 133.0f,
                                                         2);
                });
            }
        }
        pls::cs::Int32 num = 106;
        if (!is_null(err)) {
            num = 186;
        }
        if (sendState_ == 0) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(graphics)->SetColor(pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255); }));
            });
            text = literal(u"決定キーを押すと送信を開始します。");
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::String cs_arg0 = text;
                    pls::cs::Single cs_arg1 =
                        120 - pls::cs::Int32(pls::diagnostic::api_call(
                                  [&]() -> decltype(auto) { return require(font)->StringWidth(text); })) /
                                  2;
                    require(graphics)->DrawString(cs_arg0, cs_arg1, num);
                }());
            });
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(instance)->CheckKeyPulse(1048576); })) {
                sendState_ = 1;
            }
        } else if (sendState_ == 1) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(graphics)->SetColor(pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255); }));
            });
            text = literal(u"セーブデータの送信中...");
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::String cs_arg0 = text;
                    pls::cs::Single cs_arg1 =
                        120 - pls::cs::Int32(pls::diagnostic::api_call(
                                  [&]() -> decltype(auto) { return require(font)->StringWidth(text); })) /
                                  2;
                    require(graphics)->DrawString(cs_arg0, cs_arg1, num);
                }());
            });
            text = literal(u"電源キーを押さないでください。");
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::String cs_arg0 = text;
                    pls::cs::Single cs_arg1 =
                        120 - pls::cs::Int32(pls::diagnostic::api_call(
                                  [&]() -> decltype(auto) { return require(font)->StringWidth(text); })) /
                                  2;
                    require(graphics)->DrawString(cs_arg0, cs_arg1, num + 16);
                }());
            });
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(instance)->EndPaint(); });
    }
}

// M:main.AppData.Post(System.String,System.String,System.String,System.String,System.Byte[])
void AppData::Post(pls::cs::String url, pls::cs::String file, pls::cs::String index, pls::cs::String date,
                   ByteArray data) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.Post(System.String,System.String,System.String,System.String,System.Byte[])", game);
    {
        kairo::unity::io::Http::Connect(
            pls::cs::String::concat(
                pls::cs::String::concat(
                    pls::cs::String::concat(
                        pls::cs::String::concat(
                            pls::cs::String::concat(
                                pls::cs::String::concat(pls::cs::String::concat(url, literal(u"&file=")),
                                                        file),
                                literal(u"&index=")),
                            index),
                        literal(u"&date=(")),
                    date),
                literal(u")")),
            data, true);
    }
}

// M:main.AppData.Draw_trophy(kairo.unity.ui.Graphics,System.Int32)
void AppData::Draw_trophy(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 frame) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.Draw_trophy(kairo.unity.ui.Graphics,System.Int32)",
                     game);
    {
        if (require(sysSave_)->ints[10] > 0) {
            pls::cs::Int32 px = 118;
            pls::cs::Int32 py = require(surface::GameView::GetInstance())->GetGameHeight() - 90;
            DrawTrophyEffect(g, require(sysSave_)->ints[10] - 1, frame, px, py);
        }
    }
}

// M:main.AppData.DrawTrophyEffect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)
void AppData::DrawTrophyEffect(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 trophy_id,
                               pls::cs::Int32 subform_frame, pls::cs::Int32 px, pls::cs::Int32 py) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawTrophyEffect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        {
            pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(resCom2_)->seb.get_Item(106);
            pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(resCom2_)->img.get_Item(190);
            pls::cs::Int32 cs_arg5 = require(sysSave_)->ints[10] - 1;
            DrawSeb(g, px, py, cs_arg3, cs_arg4, cs_arg5);
        }
        pls::cs::Int32 trophyOriginX = px;
        pls::cs::Int32 trophyOriginY = py;
        pls::cs::Int32 num = (subform_frame - 20) % 66;
        IntArray array = IntArray{};
        array = require(require(resCom2_)->seb.get_Item(106))->GetSprite(trophy_id, 0);
        pls::cs::Int32 num2 = array[5];
        IntArray2 array2 = IntArray2::from({IntArray::from({1, 4, 1, 128}), IntArray::from({1, 2, 5, 255})});
        pls::cs::Int32 num3 = 4;
        pls::cs::Int32 num4 = num - 2;
        for (pls::cs::Int32 i = 0; i < array2.length(); ++i) {
            if (i == 1) {
                continue;
            }
            IntArray array3 = array2[i];
            pls::cs::Int32 num5 = num4 * num3;
            pls::cs::Int32 num6 = 0;
            if (num5 <= array[4] / 2) {
                num6 = ([&]() -> pls::cs::Int32 {
                    pls::cs::Int32 cs_arg0 = array3[0];
                    pls::cs::Int32 cs_arg1 = array3[1];
                    pls::cs::Int32 cs_arg2 = array[4] / 2;
                    return kairo::unity::graph::Graph::Easing(cs_arg0, cs_arg1, cs_arg2, num5, 0);
                }());
            }
            if (num5 >= array[4] / 2) {
                num6 = ([&]() -> pls::cs::Int32 {
                    pls::cs::Int32 cs_arg0 = array3[1];
                    pls::cs::Int32 cs_arg1 = array3[0];
                    pls::cs::Int32 cs_arg2 = array[4] / 2;
                    pls::cs::Int32 cs_arg3 = num5 - array[4] / 2;
                    return kairo::unity::graph::Graph::Easing(cs_arg0, cs_arg1, cs_arg2, cs_arg3, 0);
                }());
            }
            pls::cs::Int32 num7 = trophyOriginX + array[6] + num5 - num6 / 2;
            pls::cs::Int32 num8 = trophyOriginY + array[7];
            pls::cs::Int32 num9 = array[2] + num5 - num6 / 2;
            pls::cs::Int32 sy = array[3];
            pls::cs::Int32 num10 = num6;
            pls::cs::Int32 height = num2;
            if (num9 < array[2]) {
                pls::cs::Int32 num11 = array[2] - num9;
                num9 += num11;
                num10 -= num11;
                num7 += num11;
            }
            if (num9 + num10 > array[2] + array[4]) {
                num10 = array[2] + array[4] - num9;
            }
            if (num10 > 0) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::Int32 cs_arg1 = array3[3];
                        require(g)->SetRenderMode(1, cs_arg1, 255);
                    }());
                });
                for (pls::cs::Int32 j = 0; j < array3[2]; ++j) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> void {
                            pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                                require(resCom2_)->img.get_Item(array[1]);
                            require(g)->DrawImage(cs_arg0, num7, num8, num9, sy, num10, height);
                        }());
                    });
                }
                pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(g)->SetRenderMode(0, 255, 255); });
            }
        }
    }
}

// M:main.AppData.Random(System.Int32)
pls::cs::Int32 AppData::Random(pls::cs::Int32 total) {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.Random(System.Int32)", game);
    {
        return game::GameUtil::Random(total);
    }
}

// M:main.AppData.IsLanguageOther
bool AppData::IsLanguageOther() {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.IsLanguageOther", game);
    {
        return kairo::unity::util::Language::GetLanguageCode() != literal(u"ja-JP") &&
               kairo::unity::util::Language::GetLanguageCode() != literal(u"en-US") &&
               !pls::diagnostic::api_call([&]() -> decltype(auto) {
                   return pls::cs::culture_starts_with(kairo::unity::util::Language::GetLanguageCode(),
                                                       literal(u"*"));
               });
    }
}

// M:main.AppData.IsLanguageJpBase(System.Boolean)
bool AppData::IsLanguageJpBase(bool includeJP) {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.IsLanguageJpBase(System.Boolean)", game);
    {
        if (includeJP && form::MyFormBase::Jp()) {
            return true;
        }
        pls::cs::String languageCode = kairo::unity::util::Language::GetLanguageCode();
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return string_equals(literal(u"ko"), languageCode); })) {
            return true;
        }
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return string_equals(literal(u"zh"), languageCode); })) {
            return true;
        }
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return string_equals(literal(u"zh-CN"), languageCode); })) {
            return true;
        }
        return false;
    }
}

// M:main.AppData.GetFig(System.Int64)
pls::cs::Int32 AppData::GetFig(pls::cs::Int64 value) {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.GetFig(System.Int64)", game);
    {
        return pls::cs::to_int32(pls::diagnostic::api_call([&]() -> decltype(auto) {
                   return std::log10(pls::cs::Double(pls::diagnostic::api_call(
                       [&]() -> decltype(auto) { return pls::cs::math_abs<pls::cs::Int64>(value); })));
               })) +
               1;
    }
}

// M:main.AppData.DrawExp(kairo.unity.ui.Graphics,System.Int32,System.Int32)
void AppData::DrawExp(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:main.AppData.DrawExp(kairo.unity.ui.Graphics,System.Int32,System.Int32)", game);
    {
        if (AppData::IsSC_LangCode()) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(resCom2_)->img.get_Item(117);
                    require(g)->DrawImage(cs_arg0, x - 11, y - 2);
                }());
            });
        } else {
            {
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(resCom2_)->seb.get_Item(76);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(resCom2_)->img.get_Item(117);
                DrawSeb(g, x, y, cs_arg3, cs_arg4, 0);
            }
        }
    }
}

// M:main.AppData.DrawLv(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32)
void AppData::DrawLv(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String text, pls::cs::Int32 x,
                     pls::cs::Int32 y) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:main.AppData.DrawLv(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32)",
                     game);
    {
        if (AppData::IsSC_LangCode()) {
            form::SubForm::SetFontSize(g, 8);
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(g)->DrawString(text, x, y + 3); });
            form::SubForm::ResetFontSize(g);
        } else {
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->DrawString(text, x, y); });
        }
    }
}

// M:main.AppData.DrawPositionStatus(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)
void AppData::DrawPositionStatus(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 index,
                                 pls::cs::Int32 rank, pls::cs::Int32 x, pls::cs::Int32 y) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.AppData.DrawPositionStatus(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        data::PlayerData::ensure_initialized();

        pls::cs::Int32 num = 18;
        if (AppData::IsSC_LangCode()) {
            form::SubForm::SetFontSize(g, 6);
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::String cs_arg0 = data::PlayerData::POSITION_NAME()[index];
                    require(g)->DrawString(cs_arg0, x + 6, y + 1, 2);
                }());
            });
            ++num;
        } else {
            form::SubForm::SetFontSize(g, 8);
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::String cs_arg0 = data::PlayerData::POSITION_NAME()[index];
                    pls::cs::Single cs_arg1 = x;
                    pls::cs::Single cs_arg2 = y + (form::MyFormBase::En() ? 2 : 0);
                    require(g)->DrawString(cs_arg0, cs_arg1, cs_arg2);
                }());
            });
        }
        form::SubForm::ResetFontSize(g);
        if (rank < 0) {
            return;
        }
        {
            {
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(resCom2_)->seb.get_Item(65);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(resCom2_)->img.get_Item(75);
                DrawSeb(g, x + num, y + 11, cs_arg3, cs_arg4, rank);
            }
        }
    }
}

// M:main.AppData.IsSC_LangCode
bool AppData::IsSC_LangCode() {
    AppData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.IsSC_LangCode", game);
    {
        pls::cs::String languageCode = kairo::unity::util::Language::GetLanguageCode();
        if (!is_null(languageCode) && pls::diagnostic::api_call([&]() -> decltype(auto) {
                return string_equals(languageCode, literal(u"zh-CN"));
            })) {
            return true;
        }
        return false;
    }
}
} // namespace main
}
