// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "data.BaseData.hpp"
#include "data.EventData.hpp"
#include "data.FanActData.hpp"
#include "data.LeagueData.hpp"
#include "data.PlayerData.hpp"
#include "data.QuestMatchData.hpp"
#include "data.SupervisorData.hpp"
#include "data.TeamData.hpp"
#include "data.TenantData.hpp"
#include "form.DebugForm.hpp"
#include "form.FormManager.hpp"
#include "form.GameForm.hpp"
#include "form.MyFormBase.hpp"
#include "form.SoccerForm.hpp"
#include "form.SubForm.hpp"
#include "game.Camera.hpp"
#include "game.DelayEvent.hpp"
#include "game.GameManager.hpp"
#include "game.GameUtil.hpp"
#include "game.MapMain.hpp"
#include "game.Player.hpp"
#include "game.TPlayer.hpp"
#include "game.Tenant.hpp"
#include "game.UserData.hpp"
#include "generated/java.lang.JMath.hpp"
#include "generated/java.lang.JRuntime.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.m3d4.util3d.Vector3D.hpp"
#include "generated/kairo.unity.util.FastVector.hpp"
#include "generated/kairo.unity.util.FastVector_1.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "generated/kairo.unity.util.Property.hpp"
#include "java.lang.JRuntime.hpp"
#include "kairo.common.cfg.Config.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "kairo.unity.surface.TouchEvent.hpp"
#include "kairo.unity.surface.TouchOption.hpp"
#include "kairo.unity.ui.Canvas.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "kairo.unity.ui.Seb.hpp"
#include "main.AppData.hpp"
#include "surface.GameView.hpp"
#include "generated/java.util.JTool_templates.hpp"
#include "generated/java.util.Vector_1_templates.hpp"
#include "generated/kairo.unity.util.FastVector_1_templates.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_util3d = pls::generated::kairo::unity::m3d4::util3d;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using ByteArray = pls::cs::Array<std::uint8_t>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace form {

void GameForm::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    MyFormBase::trace_edges(visitor);
    pls::cs::trace_value(udat_, visitor);
    pls::cs::trace_value(dialog__GameForm, visitor);
    pls::cs::trace_value(menu_, visitor);
    pls::cs::trace_value(selectTenantData_, visitor);
    pls::cs::trace_value(script_, visitor);
    pls::cs::trace_value(offscreenDayTimeString_, visitor);
    pls::cs::trace_value(offscreenMoneyString_, visitor);
    pls::cs::trace_value(offUpdateSRect, visitor);
    pls::cs::trace_value(build_btmMessage, visitor);
    pls::cs::trace_value(touchCameraSpeed_, visitor);
    pls::cs::trace_value(touchCameraDecimal_, visitor);
    pls::cs::trace_value(touchCameraPoint_, visitor);
    pls::cs::trace_value(getScaleRange_tmp, visitor);
}

static pls::cs::Int32 GameForm_BOTTOM_INFO_BAR_storage{};

static pls::cs::Int32 GameForm_busgather_ph_cnt_storage{};

static pls::cs::Int32 GameForm_DISP_COPAREA_storage{};

static pls::cs::Int32 GameForm_FLG_PROCESSTIME_storage{};

static IntArray GameForm_MENU_BACK_storage{};

static pls::cs::Ref<pls::kairo::Offscreen> GameForm_offGameScreen__storage{};

static bool GameForm_resetOffscreen__storage{};

static pls::cs::Int32 GameForm_SHOW_CHUUSER_storage{};

static pls::cs::Int32 GameForm_SHOW_DEBUGDRAW_storage{};

static pls::cs::Int32 GameForm_SHOW_DEBUGDRAW2_storage{};

static pls::cs::Int32 GameForm_SHOW_DRAWNUM_storage{};

static pls::cs::Int32 GameForm_SHOW_FPS_storage{};

static pls::cs::Int32 GameForm_SHOW_MEMORY_storage{};

static pls::cs::Int32 GameForm_SHOW_PDTIME_storage{};

static IntArray2 GameForm_softLabels__storage{};

static IntArray GameForm_TBAR_SX_storage{};

static IntArray GameForm_TBAR_W_storage{};

static IntArray GameForm_touch_cpos_storage{};

static IntArray GameForm_touch_startDragPos_storage{};

static IntArray GameForm_touch_startDragSPosCenter_storage{};

static pls::cs::Int32 GameForm_TRAINING_GETEXP_TIME_storage{};

static IntArray GameForm_TRAINING_PARAMUP_TIME_storage{};

static pls::cs::Int32 GameForm_VIEW_H_storage{};

static pls::cs::Int32 GameForm_VIEW_W_storage{};

static pls::cs::Int32 GameForm_VIEW_X_storage{};

static pls::cs::Int32 GameForm_VIEW_Y_storage{};

static PLS_NOINLINE void cs_init_d0b7ac4933bed3ac_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(GameForm_BOTTOM_INFO_BAR_storage, visitor);
        pls::cs::trace_value(GameForm_busgather_ph_cnt_storage, visitor);
        pls::cs::trace_value(GameForm_DISP_COPAREA_storage, visitor);
        pls::cs::trace_value(GameForm_FLG_PROCESSTIME_storage, visitor);
        pls::cs::trace_value(GameForm_MENU_BACK_storage, visitor);
        pls::cs::trace_value(GameForm_offGameScreen__storage, visitor);
        pls::cs::trace_value(GameForm_resetOffscreen__storage, visitor);
        pls::cs::trace_value(GameForm_SHOW_CHUUSER_storage, visitor);
        pls::cs::trace_value(GameForm_SHOW_DEBUGDRAW_storage, visitor);
        pls::cs::trace_value(GameForm_SHOW_DEBUGDRAW2_storage, visitor);
        pls::cs::trace_value(GameForm_SHOW_DRAWNUM_storage, visitor);
        pls::cs::trace_value(GameForm_SHOW_FPS_storage, visitor);
        pls::cs::trace_value(GameForm_SHOW_MEMORY_storage, visitor);
        pls::cs::trace_value(GameForm_SHOW_PDTIME_storage, visitor);
        pls::cs::trace_value(GameForm_softLabels__storage, visitor);
        pls::cs::trace_value(GameForm_TBAR_SX_storage, visitor);
        pls::cs::trace_value(GameForm_TBAR_W_storage, visitor);
        pls::cs::trace_value(GameForm_touch_cpos_storage, visitor);
        pls::cs::trace_value(GameForm_touch_startDragPos_storage, visitor);
        pls::cs::trace_value(GameForm_touch_startDragSPosCenter_storage, visitor);
        pls::cs::trace_value(GameForm_TRAINING_GETEXP_TIME_storage, visitor);
        pls::cs::trace_value(GameForm_TRAINING_PARAMUP_TIME_storage, visitor);
        pls::cs::trace_value(GameForm_VIEW_H_storage, visitor);
        pls::cs::trace_value(GameForm_VIEW_W_storage, visitor);
        pls::cs::trace_value(GameForm_VIEW_X_storage, visitor);
        pls::cs::trace_value(GameForm_VIEW_Y_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("form.GameForm", flag, []() {
        GameForm_softLabels__storage =
            pls::cs::evaluate_type_initializer_field("F:form.GameForm.softLabels_", [&]() {
                return IntArray2::from({IntArray::from({3, 4}), IntArray::from({0, 2}), IntArray::make(2),
                                        IntArray::make(2), IntArray::make(2)});
            });
        GameForm_BOTTOM_INFO_BAR_storage =
            pls::cs::evaluate_type_initializer_field("F:form.GameForm.BOTTOM_INFO_BAR", [&]() { return 0; });
        GameForm_VIEW_X_storage =
            pls::cs::evaluate_type_initializer_field("F:form.GameForm.VIEW_X", [&]() { return 0; });
        GameForm_VIEW_Y_storage =
            pls::cs::evaluate_type_initializer_field("F:form.GameForm.VIEW_Y", [&]() { return 23; });
        GameForm_VIEW_W_storage =
            pls::cs::evaluate_type_initializer_field("F:form.GameForm.VIEW_W", [&]() { return 240; });
        GameForm_VIEW_H_storage = pls::cs::evaluate_type_initializer_field("F:form.GameForm.VIEW_H", [&]() {
            return ([&]() -> pls::cs::Int32 {
                auto cs_left = 240 - GameForm::VIEW_Y();
                auto cs_right = GameForm::BOTTOM_INFO_BAR();
                return cs_left - cs_right;
            }());
        });
        GameForm_DISP_COPAREA_storage =
            pls::cs::evaluate_type_initializer_field("F:form.GameForm.DISP_COPAREA", [&]() { return 1; });
        GameForm_MENU_BACK_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.GameForm.MENU_BACK", [&]() { return IntArray::from({97, 217, 223, 128}); });
        GameForm_FLG_PROCESSTIME_storage =
            pls::cs::evaluate_type_initializer_field("F:form.GameForm.FLG_PROCESSTIME", [&]() { return 1; });
        GameForm_SHOW_FPS_storage =
            pls::cs::evaluate_type_initializer_field("F:form.GameForm.SHOW_FPS", [&]() { return 1; });
        GameForm_SHOW_MEMORY_storage =
            pls::cs::evaluate_type_initializer_field("F:form.GameForm.SHOW_MEMORY", [&]() { return 0; });
        GameForm_SHOW_PDTIME_storage =
            pls::cs::evaluate_type_initializer_field("F:form.GameForm.SHOW_PDTIME", [&]() { return 1; });
        GameForm_SHOW_DRAWNUM_storage =
            pls::cs::evaluate_type_initializer_field("F:form.GameForm.SHOW_DRAWNUM", [&]() { return 0; });
        GameForm_SHOW_CHUUSER_storage =
            pls::cs::evaluate_type_initializer_field("F:form.GameForm.SHOW_CHUUSER", [&]() { return 0; });
        GameForm_SHOW_DEBUGDRAW_storage =
            pls::cs::evaluate_type_initializer_field("F:form.GameForm.SHOW_DEBUGDRAW", [&]() { return 0; });
        GameForm_SHOW_DEBUGDRAW2_storage =
            pls::cs::evaluate_type_initializer_field("F:form.GameForm.SHOW_DEBUGDRAW2", [&]() { return 0; });
        GameForm_TBAR_SX_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.GameForm.TBAR_SX", [&]() { return IntArray::from({0, 2, 22, 113, 118, 238}); });
        GameForm_TBAR_W_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.GameForm.TBAR_W", [&]() { return IntArray::from({2, 20, 91, 5, 120, 2}); });
        GameForm_touch_cpos_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.GameForm.touch_cpos", [&]() { return IntArray::make(2); });
        GameForm_touch_startDragPos_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.GameForm.touch_startDragPos", [&]() { return IntArray::make(2); });
        GameForm_touch_startDragSPosCenter_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.GameForm.touch_startDragSPosCenter", [&]() { return IntArray::make(2); });
    });
}

void GameForm::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_d0b7ac4933bed3ac_slow(flag);
}

pls::cs::Int32& GameForm::BOTTOM_INFO_BAR() {
    GameForm::ensure_initialized();
    return GameForm_BOTTOM_INFO_BAR_storage;
}

pls::cs::Int32& GameForm::busgather_ph_cnt() {
    GameForm::ensure_initialized();
    return GameForm_busgather_ph_cnt_storage;
}

pls::cs::Int32& GameForm::DISP_COPAREA() {
    GameForm::ensure_initialized();
    return GameForm_DISP_COPAREA_storage;
}

pls::cs::Int32& GameForm::FLG_PROCESSTIME() {
    GameForm::ensure_initialized();
    return GameForm_FLG_PROCESSTIME_storage;
}

IntArray& GameForm::MENU_BACK() {
    GameForm::ensure_initialized();
    return GameForm_MENU_BACK_storage;
}

pls::cs::Ref<pls::kairo::Offscreen>& GameForm::offGameScreen_() {
    GameForm::ensure_initialized();
    return GameForm_offGameScreen__storage;
}

bool& GameForm::resetOffscreen_() {
    GameForm::ensure_initialized();
    return GameForm_resetOffscreen__storage;
}

pls::cs::Int32& GameForm::SHOW_CHUUSER() {
    GameForm::ensure_initialized();
    return GameForm_SHOW_CHUUSER_storage;
}

pls::cs::Int32& GameForm::SHOW_DEBUGDRAW() {
    GameForm::ensure_initialized();
    return GameForm_SHOW_DEBUGDRAW_storage;
}

pls::cs::Int32& GameForm::SHOW_DEBUGDRAW2() {
    GameForm::ensure_initialized();
    return GameForm_SHOW_DEBUGDRAW2_storage;
}

pls::cs::Int32& GameForm::SHOW_DRAWNUM() {
    GameForm::ensure_initialized();
    return GameForm_SHOW_DRAWNUM_storage;
}

pls::cs::Int32& GameForm::SHOW_FPS() {
    GameForm::ensure_initialized();
    return GameForm_SHOW_FPS_storage;
}

pls::cs::Int32& GameForm::SHOW_MEMORY() {
    GameForm::ensure_initialized();
    return GameForm_SHOW_MEMORY_storage;
}

pls::cs::Int32& GameForm::SHOW_PDTIME() {
    GameForm::ensure_initialized();
    return GameForm_SHOW_PDTIME_storage;
}

IntArray2& GameForm::softLabels_() {
    GameForm::ensure_initialized();
    return GameForm_softLabels__storage;
}

IntArray& GameForm::TBAR_SX() {
    GameForm::ensure_initialized();
    return GameForm_TBAR_SX_storage;
}

IntArray& GameForm::TBAR_W() {
    GameForm::ensure_initialized();
    return GameForm_TBAR_W_storage;
}

IntArray& GameForm::touch_cpos() {
    GameForm::ensure_initialized();
    return GameForm_touch_cpos_storage;
}

IntArray& GameForm::touch_startDragPos() {
    GameForm::ensure_initialized();
    return GameForm_touch_startDragPos_storage;
}

IntArray& GameForm::touch_startDragSPosCenter() {
    GameForm::ensure_initialized();
    return GameForm_touch_startDragSPosCenter_storage;
}

pls::cs::Int32& GameForm::TRAINING_GETEXP_TIME() {
    GameForm::ensure_initialized();
    return GameForm_TRAINING_GETEXP_TIME_storage;
}

IntArray& GameForm::TRAINING_PARAMUP_TIME() {
    GameForm::ensure_initialized();
    return GameForm_TRAINING_PARAMUP_TIME_storage;
}

pls::cs::Int32& GameForm::VIEW_H() {
    GameForm::ensure_initialized();
    return GameForm_VIEW_H_storage;
}

pls::cs::Int32& GameForm::VIEW_W() {
    GameForm::ensure_initialized();
    return GameForm_VIEW_W_storage;
}

pls::cs::Int32& GameForm::VIEW_X() {
    GameForm::ensure_initialized();
    return GameForm_VIEW_X_storage;
}

pls::cs::Int32& GameForm::VIEW_Y() {
    GameForm::ensure_initialized();
    return GameForm_VIEW_Y_storage;
}

void GameForm::create_init(pls::cs::Ref<GameForm> self) {
    GameForm::ensure_initialized();
    self->offscreenDayTime_ = -1;
    self->offscreenDayTimeString_ = pls::cs::String(u"");
    self->offscreenMoneyString_ = literal(u"0");
    self->offUpdateSRect = IntArray::make(4);
    self->build_btmMessage = literal(u"設置場所を選択して下さい。");
    self->touchCameraSpeed_ = kl_util3d::Vector3D::create();
    self->touchCameraDecimal_ = kl_util3d::Vector3D::create();
    self->touchCameraPoint_ = kl_unity_util::FastVector::create();
    self->getScaleRange_tmp = IntArray::make(2);
    MyFormBase::create_init(pls::cs::static_pointer_cast<MyFormBase>(self), 9);
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.#ctor", game);
    {
    }
}

// M:form.GameForm.#ctor
pls::cs::Ref<GameForm> GameForm::create() {
    GameForm::ensure_initialized();
    auto self = pls::cs::make_ref<GameForm>();
    GameForm::create_init(self);
    return self;
}

// M:form.GameForm.ToString
pls::cs::String GameForm::ToString() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.ToString", game);
    {
        return pls::cs::String::concat(
            pls::cs::String::concat(
                pls::cs::String::concat(
                    pls::cs::String::concat(
                        pls::cs::String::concat(literal(u"GameForm:"), integer_string(state_)),
                        literal(u",")),
                    integer_string(errFunc_)),
                literal(u",")),
            integer_string(errLine_));
    }
}

// M:form.GameForm.Init
bool GameForm::Init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.Init", game);
    {
        main::AppData::ensure_initialized();
        game::Camera::ensure_initialized();
        kl_cfg::Config::ensure_initialized();

        MyFormBase::Init();
        udat_ = game::UserData::GetInstance();
        require(require(apdat_)->camera)->ChangeMode(0);
        menu_ = SubForm::create(3, 0, 25);
        PLS_API(require(canvas_)->DecideKeyState());
        if (!is_null(require(apdat_)->resMapChipMain_)) {
            require(require(apdat_)->resMapChipMain_)->Dispose();
        }
        {
            auto cs_target = apdat_;
            auto cs_value = kairo::unity::ui::ResourceManager::create(
                pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{},
                pls::cs::String{}, pls::cs::String{});
            require(cs_target)->resMapChipMain_ = cs_value;
        }
        {
            auto cs_receiver = require(apdat_)->resMapChipMain_;
            ByteArray cs_arg0 = PLS_API(pls::kairo::RecordStore::ReadRecord(1, 8));
            require(cs_receiver)->Load(cs_arg0, 3);
        }
        require(require(apdat_)->mapMain_)->UpdateMapGround();
        ChangeState(0);
        SetAllDraw();
        scale_ = 100;
        pinchScaleValue_ = 120;
        InitOffscreen();
        script_ = kl_java_util::Vector::create();
        require(apdat_)->PlayBgm(0);
        GameForm::TRAINING_PARAMUP_TIME() = IntArray::make(3);
        for (pls::cs::Int32 i = 0; i < 3; ++i) {
            GameForm::TRAINING_PARAMUP_TIME()[i] = 10800 * (i + 1) / 3;
        }
        GameForm::TRAINING_GETEXP_TIME() = 10800 / main::AppData::FRAME_TIME1() / 4 / 3;
        {
            auto cs_receiver = require(apdat_)->pData_.get_Item(0);
            pls::cs::Ref<game::Player> cs_arg0 = require(udat_)->tp_svisor_;
            require(cs_receiver)->SetGameData(cs_arg0);
        }
        pls::cs::Int32 num = 0;
        if (num == 1) {
        }
        pls::cs::Single recoveredUnusedScale;
        pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>> array =
            pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::make(4);
        array.set_Item(0, kl_util3d::Vector3D::create(0.0f, 0.0f, 0.0f));
        array.set_Item(1, kl_util3d::Vector3D::create(900.0f, 0.0f, 0.0f));
        array.set_Item(2, kl_util3d::Vector3D::create(900.0f, 0.0f, 900.0f));
        array.set_Item(3, kl_util3d::Vector3D::create(0.0f, 0.0f, 900.0f));
        IntArray2 array2 = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2})));
        IntArray2 array3 = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2})));
        for (pls::cs::Int32 j = 0; j < array.length(); ++j) {
            {
                pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = array.get_Item(j);
                IntArray cs_arg1 = array2[j];
                game::Camera::ConvertGlobalToScreen(cs_arg0, cs_arg1);
            }
        }
        for (pls::cs::Int32 k = 0; k < array.length(); ++k) {
            array3[k][0] = ([&]() -> pls::cs::Int32 {
                auto cs_left = array2[k][0];
                auto cs_right = array2[0][0];
                return cs_left - cs_right;
            }());
            array3[k][1] = ([&]() -> pls::cs::Int32 {
                auto cs_left = array2[k][1];
                auto cs_right = array2[0][1];
                return cs_left - cs_right;
            }());
        }
        game::Camera::UPX_FROMX() = array3[1][0];
        game::Camera::UPX_FROMZ() = array3[3][0];
        game::Camera::UPZ_FROMX() = array3[1][1];
        game::Camera::UPZ_FROMZ() = array3[3][1];
        game::Camera::OFF_SX() = array2[0][0];
        game::Camera::OFF_SY() = array2[0][1];
        pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>> array4 =
            pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::make(4);
        for (pls::cs::Int32 l = 0; l < array.length(); ++l) {
            array4.set_Item(l, kl_util3d::Vector3D::create());
            {
                IntArray cs_arg0 = array2[l];
                pls::cs::Ref<kl_util3d::Vector3D> cs_arg1 = array4.get_Item(l);
                game::Camera::ConvertScreenToGlobal(cs_arg0, cs_arg1);
            }
        }
        if (kl_cfg::Config::ADMOB_ENABLE()) {
            PLS_API(require(app_)->SetOrientation(0));
        } else {
            PLS_API(([&]() -> void {
                pls::cs::Int32 cs_arg0 = require(require(apdat_)->sysSave_)->ints[13];
                require(app_)->SetOrientation(cs_arg0);
            }()));
        }
        SetAllDraw();
        return true;
    }
}

// M:form.GameForm.GameScreenLayout(System.Int32@,System.Int32@,kairo.unity.ui.Image.Format@,kairo.unity.ui.Image.Filter@)
void GameForm::GameScreenLayout(pls::cs::Int32& width, pls::cs::Int32& height,
                                pls::kairo::Image::Format& format, pls::kairo::Image::Filter& filterMode) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:form.GameForm.GameScreenLayout(System.Int32@,System.Int32@,kairo.unity.ui.Image.Format@,kairo.unity.ui.Image.Filter@)",
        game);
    {
        width = require(view_)->GetGameWidth() * 100 / 60 + 1;
        height = require(view_)->GetGameHeight() * 100 / 60 + 1;
        format = static_cast<pls::kairo::Image::Format>(5) /* Format.ARGB32 */;
        filterMode = static_cast<pls::kairo::Image::Filter>(0) /* Filter.Point */;
    }
}

// M:form.GameForm.StaticRender(kairo.unity.ui.Graphics,kairo.unity.graphics.Offscreen)
bool GameForm::StaticRender(pls::cs::Ref<pls::kairo::Graphics> g,
                            pls::cs::Ref<pls::kairo::Offscreen> offscreen) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:form.GameForm.StaticRender(kairo.unity.ui.Graphics,kairo.unity.graphics.Offscreen)",
                     game);
    {
        require(apdat_)->ClearZSortObjects();
        GameForm::resetOffscreen_() = false;
        return true;
    }
}

// M:form.GameForm.RenderGameScreen(kairo.unity.ui.Graphics,kairo.unity.graphics.Offscreen)
bool GameForm::RenderGameScreen(pls::cs::Ref<pls::kairo::Graphics> g,
                                pls::cs::Ref<pls::kairo::Offscreen> offscreen) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:form.GameForm.RenderGameScreen(kairo.unity.ui.Graphics,kairo.unity.graphics.Offscreen)", game);
    {
        errLine_ = 13;
        GameForm::VIEW_W() = GetGameWidth();
        GameForm::VIEW_H() = GetGameHeight();
        game::Camera::SetDrawCenter(GameForm::VIEW_X(), GameForm::VIEW_Y(), GameForm::VIEW_W(),
                                    GameForm::VIEW_H());
        UpdateOffscreen(g);
        PLS_API(require(g)->SetClip(GameForm::VIEW_X(), GameForm::VIEW_Y(), GameForm::VIEW_W(),
                                    GameForm::VIEW_H()));
        kairo::unity::ui::Seb::SetClip(GameForm::VIEW_X(), GameForm::VIEW_Y(), GameForm::VIEW_W(),
                                       GameForm::VIEW_H());
        require(apdat_)->ClearZSortObjects();
        require(require(apdat_)->mapMain_)->Draw(g, false);
        require(udat_)->Draw_training(g);
        require(udat_)->Draw_bus(g);
        for (pls::cs::Int32 i = 0; i < require(udat_)->tenants_.length(); ++i) {
            require(require(udat_)->tenants_.get_Item(i))->Draw(g);
        }
        require(apdat_)->DrawZSortObjects(g, false);
        require(apdat_)->DrawEffect(g);
        require(require(apdat_)->mapMain_)->Draw_tenantAround(g);
        errLine_ = 14;
        kairo::unity::ui::Seb::ClearClip();
        PLS_API(require(g)->ClearClip());
        errLine_ = 15;
        return true;
    }
}

// M:form.GameForm.ResetOffscreen
void GameForm::ResetOffscreen() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.ResetOffscreen", game);
    {
        SetAllDraw();
    }
}

// M:form.GameForm.InitOffscreen
void GameForm::InitOffscreen() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.InitOffscreen", game);
    {
        GameForm::offGameScreen_() = PLS_API(([&]() -> pls::cs::Ref<pls::kairo::Offscreen> {
            pls::cs::Delegate<bool(pls::cs::Ref<pls::kairo::Graphics>, pls::cs::Ref<pls::kairo::Offscreen>)>
                cs_arg0 = ([&]() {
                    auto cs_target = static_cast<pls::cs::Ref<GameForm>>(this);
                    if (!cs_target)
                        throw pls::cs::ArgumentException();
                    return pls::cs::Delegate<bool(pls::cs::Ref<pls::kairo::Graphics>,
                                                  pls::cs::Ref<pls::kairo::Offscreen>)>::
                        bind(
                            cs_target,
                            "M:form.GameForm.RenderGameScreen(kairo.unity.ui.Graphics,kairo.unity.graphics.Offscreen)",
                            [cs_weak = pls::cs::DelegateCapture<GameForm>(cs_target)](
                                pls::cs::Ref<pls::kairo::Graphics> cs_param0,
                                pls::cs::Ref<pls::kairo::Offscreen> cs_param1) -> bool {
                                auto cs_receiver = cs_weak.lock();
                                if (!cs_receiver)
                                    throw pls::cs::NullReferenceException();
                                return cs_receiver->RenderGameScreen(cs_param0, cs_param1);
                            });
                }());
            pls::cs::Delegate<bool(pls::cs::Ref<pls::kairo::Graphics>, pls::cs::Ref<pls::kairo::Offscreen>)>
                cs_arg1 = ([&]() {
                    auto cs_target = static_cast<pls::cs::Ref<GameForm>>(this);
                    if (!cs_target)
                        throw pls::cs::ArgumentException();
                    return pls::cs::Delegate<bool(pls::cs::Ref<pls::kairo::Graphics>,
                                                  pls::cs::Ref<pls::kairo::Offscreen>)>::
                        bind(
                            cs_target,
                            "M:form.GameForm.StaticRender(kairo.unity.ui.Graphics,kairo.unity.graphics.Offscreen)",
                            [cs_weak = pls::cs::DelegateCapture<GameForm>(cs_target)](
                                pls::cs::Ref<pls::kairo::Graphics> cs_param0,
                                pls::cs::Ref<pls::kairo::Offscreen> cs_param1) -> bool {
                                auto cs_receiver = cs_weak.lock();
                                if (!cs_receiver)
                                    throw pls::cs::NullReferenceException();
                                return cs_receiver->StaticRender(cs_param0, cs_param1);
                            });
                }());
            pls::cs::Delegate<void(std::int32_t&, std::int32_t&, pls::kairo::Image::Format&,
                                   pls::kairo::Image::Filter&)>
                cs_arg2 = ([&]() {
                    auto cs_target = static_cast<pls::cs::Ref<GameForm>>(this);
                    if (!cs_target)
                        throw pls::cs::ArgumentException();
                    return pls::cs::Delegate<void(std::int32_t&, std::int32_t&, pls::kairo::Image::Format&,
                                                  pls::kairo::Image::Filter&)>::
                        bind(
                            cs_target,
                            "M:form.GameForm.GameScreenLayout(System.Int32@,System.Int32@,kairo.unity.ui.Image.Format@,kairo.unity.ui.Image.Filter@)",
                            [cs_weak = pls::cs::DelegateCapture<GameForm>(cs_target)](
                                std::int32_t& cs_param0, std::int32_t& cs_param1,
                                pls::kairo::Image::Format& cs_param2,
                                pls::kairo::Image::Filter& cs_param3) -> void {
                                auto cs_receiver = cs_weak.lock();
                                if (!cs_receiver)
                                    throw pls::cs::NullReferenceException();
                                pls::cs::Int32 cs_ref0 = cs_param0;
                                pls::cs::Int32 cs_ref1 = cs_param1;
                                cs_receiver->GameScreenLayout(cs_ref0, cs_ref1, cs_param2, cs_param3);
                                cs_param0 = cs_ref0;
                                cs_param1 = cs_ref1;
                            });
                }());
            return pls::kairo::Offscreen::CreateOffscreen(cs_arg0, cs_arg1, cs_arg2, 0);
        }()));
        require(apdat_)->offSeason_ = -1;
        require(apdat_)->offYear_ = -1;
        require(apdat_)->offMonth_ = -1;
        require(apdat_)->offWeek_ = -1;
        require(apdat_)->offHour_ = -1;
        require(apdat_)->offSec_ = -1;
        require(apdat_)->offMoney_ = -2147483648ll;
    }
}

// M:form.GameForm.Draw_topBarParts(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32)
void GameForm::Draw_topBarParts(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 type, pls::cs::Int32 dx,
                                pls::cs::Int32 w) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:form.GameForm.Draw_topBarParts(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32)",
        game);
    {
        {
            if ((type == 0)) {
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(26);
                    require(g)->DrawImage(cs_arg0, dx, 0.0f, 0, 0, w, 24);
                }()));
            } else if ((type == 1)) {
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(26);
                    require(g)->DrawImage(cs_arg0, dx, 0.0f, 2, 0, w, 24);
                }()));
            } else if ((type == 2)) {
                if (w <= GameForm::TBAR_W()[type]) {
                    PLS_API(([&]() -> void {
                        pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                            require(require(apdat_)->resCom2_)->img.get_Item(26);
                        require(g)->DrawImage(cs_arg0, dx, 0.0f, 22, 0, w, 24);
                    }()));
                } else {
                    pls::cs::Int32 num4 = w;
                    pls::cs::Int32 num5 = 0;
                    while (num4 > 0) {
                        pls::cs::Int32 num6 = main::AppData::Clamp(num4, 1, GameForm::TBAR_W()[type]);
                        PLS_API(([&]() -> void {
                            pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                                require(require(apdat_)->resCom2_)->img.get_Item(26);
                            require(g)->DrawImage(cs_arg0, dx + num5, 0.0f, 22, 0, num6, 24);
                        }()));
                        num4 -= num6;
                        num5 += num6;
                    }
                }
            } else if ((type == 3)) {
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(26);
                    require(g)->DrawImage(cs_arg0, dx, 0.0f, 113, 0, w, 24);
                }()));
            } else if ((type == 4)) {
                if (w <= GameForm::TBAR_W()[type]) {
                    PLS_API(([&]() -> void {
                        pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                            require(require(apdat_)->resCom2_)->img.get_Item(26);
                        require(g)->DrawImage(cs_arg0, dx, 0.0f, 118, 0, w, 24);
                    }()));
                } else {
                    pls::cs::Int32 num = w;
                    pls::cs::Int32 num2 = 0;
                    while (num > 0) {
                        pls::cs::Int32 num3 = main::AppData::Clamp(num, 1, GameForm::TBAR_W()[type]);
                        PLS_API(([&]() -> void {
                            pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                                require(require(apdat_)->resCom2_)->img.get_Item(26);
                            require(g)->DrawImage(cs_arg0, dx + num2, 0.0f, 118, 0, num3, 24);
                        }()));
                        num -= num3;
                        num2 += num3;
                    }
                }
            } else if ((type == 5)) {
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(26);
                    require(g)->DrawImage(cs_arg0, dx, 0.0f, 238, 0, w, 24);
                }()));
            }
        }
    }
}

// M:form.GameForm.GetTopBarOffT
pls::cs::Int32 GameForm::GetTopBarOffT() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.GetTopBarOffT", game);
    {
        pls::cs::Int32 result = 0;
        if (require(surface::GameView::GetInstance())->GetGameWidth() > 240) {
            result = 30;
        }
        return result;
    }
}

// M:form.GameForm.GetTopBarOffM
pls::cs::Int32 GameForm::GetTopBarOffM() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.GetTopBarOffM", game);
    {
        pls::cs::Int32 result = 0;
        if (require(surface::GameView::GetInstance())->GetGameWidth() > 240) {
            result = 30;
        }
        return result;
    }
}

// M:form.GameForm.GetTopBarOffMBack
pls::cs::Int32 GameForm::GetTopBarOffMBack() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.GetTopBarOffMBack", game);
    {
        pls::cs::Int32 result = 0;
        if (require(surface::GameView::GetInstance())->GetGameWidth() > 240) {
            result = 30;
        }
        return result;
    }
}

// M:form.GameForm.GetFirstScript
IntArray GameForm::GetFirstScript() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.GetFirstScript", game);
    {
        if (PLS_API(kl_java_util::Vector_2_Size(require(script_))) == 0) {
            return IntArray{};
        }
        return pls::cs::unbox<IntArray>(PLS_API(kl_java_util::Vector_2_FirstElement(require(script_))));
    }
}

// M:form.GameForm.ClearScript
void GameForm::ClearScript() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.ClearScript", game);
    {
        PLS_API(kl_java_util::Vector_2_RemoveAllElements(require(script_)));
    }
}

// M:form.GameForm.AddCommandWait(System.Int32)
void GameForm::AddCommandWait(pls::cs::Int32 wait) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.AddCommandWait(System.Int32)", game);
    {
        PLS_API(([&]() -> void {
            auto cs_receiver = script_;
            pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(IntArray::from({1, wait}));
            kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
        }()));
    }
}

// M:form.GameForm.AddCommandEvent(System.Int32)
void GameForm::AddCommandEvent(pls::cs::Int32 evtId) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.AddCommandEvent(System.Int32)", game);
    {
        PLS_API(([&]() -> void {
            auto cs_receiver = script_;
            pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(IntArray::from({0, evtId}));
            kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
        }()));
    }
}

// M:form.GameForm.AddCommandScene(System.Int32)
void GameForm::AddCommandScene(pls::cs::Int32 on) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.AddCommandScene(System.Int32)", game);
    {
        PLS_API(([&]() -> void {
            auto cs_receiver = script_;
            pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(IntArray::from({2, on}));
            kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
        }()));
    }
}

// M:form.GameForm.AddCommandSpecial(System.Int32[])
void GameForm::AddCommandSpecial(IntArray arg) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.AddCommandSpecial(System.Int32[])", game);
    {
        if ([&]() {
                auto cs_left = pls::cs::box(arg);
                auto cs_right = pls::cs::box(IntArray{});
                return cs_left == cs_right;
            }()) {
            arg = IntArray::make(0);
        }
        IntArray array = IntArray::make(pls::cs::Int32(arg.length()) + 1);
        array[0] = 3;
        if (arg.length() > 0) {
            PLS_API(kl_lang::JSystem::Arraycopy(pls::cs::box(arg), 0, pls::cs::box(array), 1, arg.length()));
        }
        PLS_API(kl_java_util::Vector_2_AddElement(require(script_), pls::cs::box(array)));
    }
}

// M:form.GameForm.Script
void GameForm::Script() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.Script", game);
    {
        while (PLS_API(kl_java_util::Vector_2_Size(require(script_))) > 0) {
            IntArray firstScript = GetFirstScript();
            pls::cs::Int32 recoveredScriptKind = firstScript[0];
            if (recoveredScriptKind == 1) {
                PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                    SubForm::MakeWait(firstScript[1])));
                PLS_API(kl_java_util::Vector_2_RemoveElementAt(require(script_), 0));
            } else if (recoveredScriptKind == 0) {
                ([&]() -> pls::cs::Ref<SubForm> {
                    pls::cs::Int32 cs_arg0 = firstScript[1];
                    pls::cs::String cs_arg1 = require(require(apdat_)->save_)->strs[0];
                    return require(apdat_)->ExecEvent(cs_arg0, cs_arg1, IntArray{});
                }());
                PLS_API(kl_java_util::Vector_2_RemoveElementAt(require(script_), 0));
            } else if (recoveredScriptKind == 2) {
                PLS_API(kl_java_util::Vector_2_RemoveElementAt(require(script_), 0));
                continue;
            } else if (recoveredScriptKind == 3) {
                PLS_API(kl_java_util::Vector_2_RemoveElementAt(require(script_), 0));
            }
            break;
        }
    }
}

// M:form.GameForm.Resume
bool GameForm::Resume() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.Resume", game);
    {
        return true;
    }
}

// M:form.GameForm.Finish
bool GameForm::Finish() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.Finish", game);
    {
        if (!is_null(require(apdat_)->resMapChipMain_)) {
            require(require(apdat_)->resMapChipMain_)->Dispose();
        }
        require(apdat_)->resMapChipMain_ = pls::cs::Ref<kairo::unity::ui::ResourceManager>{};
        if (!is_null(require(apdat_)->resMapChip_)) {
            require(require(apdat_)->resMapChip_)->Dispose();
        }
        require(apdat_)->resMapChip_ = pls::cs::Ref<kairo::unity::ui::ResourceManager>{};
        if (!is_null(GameForm::offGameScreen_())) {
            PLS_API(require(GameForm::offGameScreen_())->Dispose());
            GameForm::offGameScreen_() = pls::cs::Ref<pls::kairo::Offscreen>{};
        }
        require(udat_)->Training_init();
        if (!is_null(require(require(apdat_)->camera)->subPlayer_)) {
            require(require(apdat_)->camera)->subPlayer_ = pls::cs::Ref<game::TPlayer>{};
        }
        if (!is_null(require(require(apdat_)->camera)->subSvisor_)) {
            require(require(apdat_)->camera)->subSvisor_ = pls::cs::Ref<game::TPlayer>{};
        }
        {
            pls::cs::GcCallSite gc_site("M:form.GameForm.Finish");
            PLS_API(kl_lang::JSystem::Gc());
        }
        return true;
    }
}

// M:form.GameForm.ChangeState(System.Int32)
void GameForm::ChangeState(pls::cs::Int32 state) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.ChangeState(System.Int32)", game);
    {
        main::AppData::ensure_initialized();

        IntArray array = GameForm::softLabels_()[state];
        if ([&]() {
                auto cs_left = pls::cs::box(array);
                auto cs_right = pls::cs::box(IntArray{});
                return cs_left != cs_right;
            }()) {
            PLS_API(([&]() -> void {
                pls::cs::String cs_arg0 = main::AppData::softLabels_()[array[0]];
                pls::cs::String cs_arg1 = main::AppData::softLabels_()[array[1]];
                this->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{});
            }()));
        }
        state_ = state;
        stateCnt_ = 0;
        if (state_ == 0) {

        } else {
            if (state_ == 1) {
                SetBuildBtmMessage(literal(u"設置場所を選択して下さい。"), 0);
            } else if (state_ == 2) {
                if (!is_null(require(require(apdat_)->camera)->subPlayer_)) {
                    require(require(apdat_)->camera)->subPlayer_ = pls::cs::Ref<game::TPlayer>{};
                }
                if (!is_null(require(require(apdat_)->camera)->subSvisor_)) {
                    require(require(apdat_)->camera)->subSvisor_ = pls::cs::Ref<game::TPlayer>{};
                }
            }
        }
    }
}

// M:form.GameForm.Update
bool GameForm::Update() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.Update", game);
    {
        kl_cfg::Config::ensure_initialized();

        frame_ = ((frame_ + 1) % 2147483647 /* Int32.MaxValue */);
        if (kl_cfg::Config::ADMOB_ENABLE() && require(require(apdat_)->sysSave_)->ints[13] != 1) {
            require(require(apdat_)->sysSave_)->ints[13] = 1;
        }
        if (kl_cfg::Config::TRIAL_VERSION() && !is_null(dialog__GameForm)) {
            if (require(dialog__GameForm)->dialogId_ == 105) {
                PLS_API(require(formMan_)->RemoveAllForms());
                pls::cs::String packageName =
                    PLS_API(require(PLS_API(pls::kairo::IApplication::GetCurrentApp()))->GetPackageName());
                packageName =
                    kl_lang::StringEx::SubstringJ(packageName, 0, kl_lang::StringEx::Length(packageName) - 1);
                kairo::unity::ui::Canvas::OpenBrowser(pls::cs::String::concat(
                    pls::cs::String::concat(
                        pls::cs::String::concat(
                            pls::cs::String::concat(literal(u"market://details?id="), packageName),
                            literal(
                                u"&referrer=utm_source%3Dappli%26utm_medium%3Dhouse_ad%26utm_content%3D")),
                        packageName),
                    literal(u"_lite%26utm_campaign%3Dbanner")));
                return true;
            }
            dialog__GameForm = pls::cs::Ref<SubForm>{};
        }
        pls::cs::Int32 num = 1;
        if (require(require(apdat_)->save_)->ints[13] == 1) {
            num = 2;
        }
        if (state_ != 0) {
            num = 1;
        }
        if (kl_cfg::Config::DEBUG_CMD() || kl_cfg::Config::PTW()) {
            if (PLS_API(require(canvas_)->CheckKeyState(16))) {
                num = 2;
            } else if (PLS_API(require(canvas_)->CheckKeyState(32))) {
                num = 20;
            } else if (PLS_API(require(canvas_)->CheckKeyState(64))) {
                num = 10;
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(16)) &&
                PLS_API(require(canvas_)->CheckKeyRepeat(32))) {
            }
        }
        if (kl_cfg::Config::DEBUG_CMD()) {
            if (PLS_API(require(canvas_)->CheckKeyRepeat(2))) {
                GameForm::SHOW_DEBUGDRAW() = 1 - GameForm::SHOW_DEBUGDRAW();
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(4))) {
                GameForm::SHOW_DEBUGDRAW2() = 1 - GameForm::SHOW_DEBUGDRAW2();
            }
        }
        errFunc_ = 1;
        errLine_ = 0;
        if (state_ == 0) {
            require(require(apdat_)->camera)->Update_pos();
        }
        for (pls::cs::Int32 i = 0; (i < num); ++i) {
            if ((_update(i))) {
                break;
            }
        }
        errFunc_ = -1;
        return true;
    }
}

// M:form.GameForm._update(System.Int32)
bool GameForm::_update(pls::cs::Int32 frameCount) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm._update(System.Int32)", game);
    {
        kl_cfg::Config::ensure_initialized();
        game::Camera::ensure_initialized();
        main::AppData::ensure_initialized();

        stateCnt_ = ((stateCnt_ + 1) % 2147483647 /* Int32.MaxValue */);
        if (kl_cfg::Config::DEBUG_CMD() && PLS_API(require(canvas_)->CheckKeyPulse(1))) {
            return PLS_API(([&]() -> bool {
                auto cs_receiver = formMan_;
                pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = DebugForm::create();
                return require(cs_receiver)->Push(cs_arg0);
            }()));
        }
        require(apdat_)->UpdateEffect();
        if (kl_cfg::Config::DEBUG_CMD() && PLS_API(require(canvas_)->CheckKeyRepeat(8))) {
            require(apdat_)->ExecEvent(100, pls::cs::String{}, IntArray{});
        }
        if (state_ == 0) {
            if (stateCnt_ == 1) {
                SetAllDraw();
            }
            if (require(require(apdat_)->save_)->lngs[0] < pls::cs::cast_integral<pls::cs::Int64>(0)) {
            }
            for (pls::cs::Int32 i = 0; i < require(apdat_)->eventData_.length(); ++i) {
                if (((is_null(require(apdat_)->eventData_.get_Item(i))) || (([&]() -> bool {
                         pls::cs::Int32 cs_arg0 = require(require(apdat_)->eventData_.get_Item(i))->id_;
                         return require(apdat_)->CheckAlreadyEvent(cs_arg0);
                     }())))) {
                    continue;
                }
                if ((([&]() -> bool {
                        IntArray2 cs_arg0 = require(require(apdat_)->eventData_.get_Item(i))->termsScript_;
                        return require(apdat_)->CheckTermScript(cs_arg0);
                    }()))) {
                    ([&]() -> pls::cs::Ref<SubForm> {
                        pls::cs::Int32 cs_arg0 = require(require(apdat_)->eventData_.get_Item(i))->id_;
                        return require(apdat_)->ExecEvent(cs_arg0, pls::cs::String{}, IntArray{});
                    }());
                    return false;
                }
            }
            for (pls::cs::Int32 j = 0;
                 j < PLS_API(kl_java_util::Vector_2_Size(require(require(apdat_)->delayEvents_))); ++j) {
                pls::cs::Ref<game::DelayEvent> delayEvent = pls::cs::unbox<pls::cs::Ref<game::DelayEvent>>(
                    PLS_API(kl_java_util::Vector_2_ElementAt(require(require(apdat_)->delayEvents_), j)));
                --require(delayEvent)->wait_;
                if (require(delayEvent)->wait_ <= 0) {
                    PLS_API(
                        kl_java_util::Vector_2_RemoveElementAt(require(require(apdat_)->delayEvents_), j));
                    --j;
                    require(require(apdat_)->save_)->ints[9] = require(delayEvent)->rideChara_;
                    {
                        auto cs_receiver = apdat_;
                        IntArray2 cs_arg0 = require(apdat_)->GetDelayScript(require(delayEvent)->delayId_);
                        pls::cs::String cs_arg2 = require(delayEvent)->args_;
                        IntArray cs_arg3 = require(delayEvent)->argi_;
                        pls::cs::Int32 cs_arg4 = require(delayEvent)->line_;
                        require(cs_receiver)->ExecuteScript(cs_arg0, true, cs_arg2, cs_arg3, cs_arg4);
                    }
                    return false;
                }
            }
            if (data::FanActData::GetFanEva(1) == 1000 && !require(apdat_)->CheckAlreadyEvent(177)) {
                require(apdat_)->ExecEvent(177, pls::cs::String{}, IntArray{});
            }
        }
        if (state_ == 0) {
            require(udat_)->Update_bus();
            require(udat_)->Update_training();
            for (pls::cs::Int32 k = 0; k < require(apdat_)->fanActData_.length(); ++k) {
                require(require(apdat_)->fanActData_.get_Item(k))->Update();
            }
            for (pls::cs::Int32 l = 0; l < require(apdat_)->tenantData_.length(); ++l) {
                require(require(apdat_)->tenantData_.get_Item(l))->Update();
            }
            for (pls::cs::Int32 m = 0; m < require(udat_)->tenants_.length(); ++m) {
                require(require(udat_)->tenants_.get_Item(m))->Update();
            }
            require(require(apdat_)->mapMain_)->UpdateMapGround();
            if (LEAGUE_SCHEDULE_UPDATECNT > 0) {
                --LEAGUE_SCHEDULE_UPDATECNT;
            }
            if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                pls::cs::Ref<SubForm> subForm = OepnWindowFromMainDisp();
                if (!is_null(subForm)) {
                    return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(subForm));
                }
            } else {
                if (require(apdat_)->IsPushSoftLabel(4)) {
                    return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(menu_));
                }
                if (require(apdat_)->IsPushSoftLabel(3)) {
                    return PLS_API(
                        static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(16)));
                }
            }
        } else if (state_ == 1) {
            if (build_btmCnt > 0) {
                --build_btmCnt;
                if (build_btmCnt == 0) {
                    SetBuildBtmMessage(literal(u"設置場所を選択して下さい。"), 0);
                }
            }
            if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                bool flag = false;
                pls::cs::Int32 num = 0;
                for (pls::cs::Int32 n = 0; n < require(udat_)->tenants_.length(); ++n) {
                    pls::cs::Ref<game::Tenant> tenant = require(udat_)->tenants_.get_Item(n);
                    if ((([&]() -> bool {
                             auto cs_left = game::Camera::camera_address()[0];
                             auto cs_right = require(tenant)->address_[0];
                             return cs_left == cs_right;
                         }()) ||
                         ([&]() -> bool {
                             auto cs_left = game::Camera::camera_address()[0];
                             auto cs_right = require(tenant)->address_[0] + 1;
                             return cs_left == cs_right;
                         }())) &&
                        (([&]() -> bool {
                             auto cs_left = game::Camera::camera_address()[1];
                             auto cs_right = require(tenant)->address_[1];
                             return cs_left == cs_right;
                         }()) ||
                         ([&]() -> bool {
                             auto cs_left = game::Camera::camera_address()[1];
                             auto cs_right = require(tenant)->address_[1] - 1;
                             return cs_left == cs_right;
                         }()))) {
                        flag = true;
                        num = n;
                        break;
                    }
                }
                if (flag) {
                    pls::cs::Ref<game::Tenant> tenant2 = require(udat_)->tenants_.get_Item(num);
                    if (require(tenant2)->state_ == 0) {
                        require(tenant2)->BuildTenant(require(selectTenantData_)->id_);
                        require(require(apdat_)->mapMain_)->UpdateTenantMapcip();
                        ChangeState(0);
                    } else {
                        SetBuildBtmMessage(literal(u"既に施設が設置してあります。"), 30);
                        require(require(apdat_)->frmGame_)->SetAllDraw();
                    }
                }
            } else if (require(apdat_)->IsPushSoftLabel(2)) {
                ChangeState(0);
            }
        } else if (state_ == 2) {
            if (busgather_ph == 1) {
                ++GameForm::busgather_ph_cnt();
                require(require(require(apdat_)->resCom2_)->seb.get_Item(60))->Frame();
                if (([&]() -> bool {
                        auto cs_left = GameForm::busgather_ph_cnt();
                        auto cs_right =
                            PLS_API(kl_java_util::Vector_2_Size(require(require(udat_)->memberPDataist_))) *
                                12 +
                            20;
                        return cs_left >= cs_right;
                    }()) ||
                    PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    SetBattleData();
                    pls::cs::Int32 testedMatchInfoJoin = require(udat_)->GetMatchInfoJoin();
                    if (testedMatchInfoJoin == 0 && !require(apdat_)->CheckAlreadyEvent(176)) {
                        require(apdat_)->ExecEvent(176, pls::cs::String{}, IntArray{});
                    }
                }
            } else if (busgather_ph == 2) {
                ++GameForm::busgather_ph_cnt();
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    require(require(apdat_)->camera)->SaveMapMainBasePos();
                    PLS_API(require(formMan_)->ChangeCurrentForm(require(apdat_)->frmSoccer_));
                }
            }
        } else if (state_ == 3 && stateCnt_ >= 10 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
            ChangeState(0);
        }
        require(apdat_)->UpdatePopupMessage();
        if (require(apdat_)->IsPushSoftLabel(4)) {
            return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(menu_));
        }
        pls::cs::Int32 add = main::AppData::FRAME_TIME1();
        if (state_ != 0) {
            add = 0;
        }
        ProgressTime(add, frameCount);
        return false;
    }
}

// M:form.GameForm.UpdateOffscreenTopBar(kairo.unity.ui.Graphics,System.Boolean)
void GameForm::UpdateOffscreenTopBar(pls::cs::Ref<pls::kairo::Graphics> g, bool all_update) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:form.GameForm.UpdateOffscreenTopBar(kairo.unity.ui.Graphics,System.Boolean)", game);
    {
        pls::cs::Ref<pls::kairo::Font> font = PLS_API(require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{}));
        pls::cs::Int32 topBarOffT = GetTopBarOffT();
        pls::cs::Int32 topBarOffM = GetTopBarOffM();
        pls::cs::Int32 topBarOffMBack = GetTopBarOffMBack();
        if (all_update) {
            require(apdat_)->offYear_ = -1;
            require(apdat_)->offMonth_ = -1;
            require(apdat_)->offHour_ = -1;
            require(apdat_)->offSec_ = -1;
            require(apdat_)->offMoney_ = -1ll;
            require(apdat_)->offWeatherAlpha_ = -1;
            require(apdat_)->offSeason_ = -1;
            require(apdat_)->offWeek_ = -1;
            require(apdat_)->offMoney_ = -2147483648ll;
        }
        pls::cs::Int32 num = 0;
        Draw_topBarParts(g, 0, 0, GameForm::TBAR_W()[0]);
        num += GameForm::TBAR_W()[0];
        if (topBarOffT > 0) {
            Draw_topBarParts(g, 2, num, topBarOffT);
            num += topBarOffT;
        }
        Draw_topBarParts(g, 1, num, GameForm::TBAR_W()[1]);
        num += GameForm::TBAR_W()[1];
        Draw_topBarParts(g, 2, num, GameForm::TBAR_W()[2]);
        num += GameForm::TBAR_W()[2];
        Draw_topBarParts(g, 3, num, GameForm::TBAR_W()[3]);
        num += GameForm::TBAR_W()[3];
        pls::cs::Int32 num2 = main::AppData::ClampMin(([&]() -> pls::cs::Int32 {
                                                          auto cs_left =
                                                              require(view_)->GetGameWidth() - topBarOffMBack;
                                                          auto cs_right = GameForm::TBAR_W()[4];
                                                          return cs_left - cs_right;
                                                      }()),
                                                      num);
        if (num2 > num) {
            Draw_topBarParts(g, 2, num, num2 - num);
            num = num2;
        }
        Draw_topBarParts(g, 4, num, GameForm::TBAR_W()[4]);
        num += GameForm::TBAR_W()[4];
        if (topBarOffMBack == 0) {
            {
                pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                auto cs_left_83 = require(view_)->GetGameWidth();
                auto cs_right_83 = GameForm::TBAR_W()[5];
                pls::cs::Int32 cs_arg2 = cs_left_83 - cs_right_83;
                pls::cs::Int32 cs_arg3 = GameForm::TBAR_W()[5];
                Draw_topBarParts(cs_arg0, 5, cs_arg2, cs_arg3);
            }
        } else {
            pls::cs::Int32 num3 = require(view_)->GetGameWidth() - num;
            if (num3 > 0) {
                Draw_topBarParts(g, 2, num, num3);
            }
        }
        {
            auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(23);
            pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(apdat_)->resCom2_)->img;
            require(cs_receiver)->DrawFrame(g, 50 + topBarOffT, 6.0f, cs_arg3, 10, -1);
        }
        {
            auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(23);
            pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(apdat_)->resCom2_)->img;
            require(cs_receiver)->DrawFrame(g, 78 + topBarOffT, 6.0f, cs_arg3, 11, -1);
        }
        {
            auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(23);
            pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(require(apdat_)->resCom2_)->img;
            require(cs_receiver)->DrawFrame(g, 100 + topBarOffT, 6.0f, cs_arg3, 12, -1);
        }
        pls::cs::Int32 season = GetSeason(require(require(apdat_)->save_)->ints[2]);
        if (require(apdat_)->offSeason_ != season) {
            require(apdat_)->offSeason_ = season;
            PLS_API(([&]() -> void {
                pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                    require(require(apdat_)->resCom2_)->img.get_Item(26);
                require(g)->DrawImage(cs_arg0, 2 + topBarOffT, 2.0f, 2, 2, 20, 20);
            }()));
            {
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                    require(require(apdat_)->resCom2_)->seb.get_Item(84);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                    require(require(apdat_)->resCom2_)->img.get_Item(95);
                pls::cs::Int32 cs_arg5 = require(apdat_)->offSeason_;
                require(apdat_)->DrawSeb(g, 2 + topBarOffT + 1, 3, cs_arg3, cs_arg4, cs_arg5);
            }
        }
        if ([&]() -> bool {
                auto cs_left = require(apdat_)->offYear_;
                auto cs_right = require(require(apdat_)->save_)->ints[1] + 1;
                return cs_left != cs_right;
            }()) {
            {
                auto cs_target = apdat_;
                pls::cs::Int32 cs_value = require(require(apdat_)->save_)->ints[1] + 1;
                require(cs_target)->offYear_ = cs_value;
            }
            if (MyFormBase::Jp()) {
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(26);
                    require(g)->DrawImage(cs_arg0, 24 + topBarOffT, 6.0f, 24, 6, 24, 12);
                }()));
                {
                    auto cs_receiver = apdat_;
                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                    pls::cs::String cs_arg2 = pls::cs::String(u"");
                    pls::cs::Int64 cs_arg3 =
                        pls::cs::cast_integral<pls::cs::Int64>(require(apdat_)->offYear_);
                    pls::cs::String cs_arg4 = pls::cs::String(u"");
                    require(cs_receiver)
                        ->DrawNumImage(cs_arg0, 23, cs_arg2, cs_arg3, cs_arg4, 48 + topBarOffT, 6, 0, 4);
                }
            } else {
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(26);
                    require(g)->DrawImage(cs_arg0, 24 + topBarOffT, 6.0f, 24, 6, 24, 12);
                }()));
                {
                    auto cs_receiver = apdat_;
                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                    pls::cs::String cs_arg2 = pls::cs::String(u"");
                    pls::cs::Int64 cs_arg3 =
                        pls::cs::cast_integral<pls::cs::Int64>(require(apdat_)->offYear_);
                    pls::cs::String cs_arg4 = pls::cs::String(u"");
                    require(cs_receiver)
                        ->DrawNumImage(cs_arg0, 23, cs_arg2, cs_arg3, cs_arg4, 48 + topBarOffT, 6, 0, 4);
                }
            }
        }
        if ([&]() -> bool {
                auto cs_left = require(apdat_)->offMonth_;
                auto cs_right = require(require(apdat_)->save_)->ints[2] + 1;
                return cs_left != cs_right;
            }()) {
            {
                auto cs_target = apdat_;
                pls::cs::Int32 cs_value = require(require(apdat_)->save_)->ints[2] + 1;
                require(cs_target)->offMonth_ = cs_value;
            }
            if (MyFormBase::Jp()) {
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(26);
                    require(g)->DrawImage(cs_arg0, 62 + topBarOffT, 6.0f, 62, 6, 16, 12);
                }()));
                {
                    auto cs_receiver = apdat_;
                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                    pls::cs::String cs_arg2 = pls::cs::String(u"");
                    pls::cs::Int64 cs_arg3 =
                        pls::cs::cast_integral<pls::cs::Int64>(require(apdat_)->offMonth_);
                    pls::cs::String cs_arg4 = pls::cs::String(u"");
                    require(cs_receiver)
                        ->DrawNumImage(cs_arg0, 23, cs_arg2, cs_arg3, cs_arg4, 78 + topBarOffT, 6, 0, 4);
                }
            } else {
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(26);
                    require(g)->DrawImage(cs_arg0, 62 + topBarOffT, 6.0f, 62, 6, 16, 12);
                }()));
                {
                    auto cs_receiver = apdat_;
                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                    pls::cs::String cs_arg2 = pls::cs::String(u"");
                    pls::cs::Int64 cs_arg3 =
                        pls::cs::cast_integral<pls::cs::Int64>(require(apdat_)->offMonth_);
                    pls::cs::String cs_arg4 = pls::cs::String(u"");
                    require(cs_receiver)
                        ->DrawNumImage(cs_arg0, 23, cs_arg2, cs_arg3, cs_arg4, 78 + topBarOffT, 6, 0, 4);
                }
            }
        }
        if ([&]() -> bool {
                auto cs_left = require(apdat_)->offWeek_;
                auto cs_right = require(require(apdat_)->save_)->ints[3] + 1;
                return cs_left != cs_right;
            }()) {
            {
                auto cs_target = apdat_;
                pls::cs::Int32 cs_value = require(require(apdat_)->save_)->ints[3] + 1;
                require(cs_target)->offWeek_ = cs_value;
            }
            if (MyFormBase::Jp()) {
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(26);
                    require(g)->DrawImage(cs_arg0, 91 + topBarOffT, 6.0f, 91, 6, 8, 12);
                }()));
                {
                    auto cs_receiver = apdat_;
                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                    pls::cs::String cs_arg2 = pls::cs::String(u"");
                    pls::cs::Int64 cs_arg3 =
                        pls::cs::cast_integral<pls::cs::Int64>(require(apdat_)->offWeek_);
                    pls::cs::String cs_arg4 = pls::cs::String(u"");
                    require(cs_receiver)
                        ->DrawNumImage(cs_arg0, 23, cs_arg2, cs_arg3, cs_arg4, 99 + topBarOffT, 6, 0, 4);
                }
            } else {
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(26);
                    require(g)->DrawImage(cs_arg0, 91 + topBarOffT, 6.0f, 91, 6, 8, 12);
                }()));
                {
                    auto cs_receiver = apdat_;
                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                    pls::cs::String cs_arg2 = pls::cs::String(u"");
                    pls::cs::Int64 cs_arg3 =
                        pls::cs::cast_integral<pls::cs::Int64>(require(apdat_)->offWeek_);
                    pls::cs::String cs_arg4 = pls::cs::String(u"");
                    require(cs_receiver)
                        ->DrawNumImage(cs_arg0, 23, cs_arg2, cs_arg3, cs_arg4, 99 + topBarOffT, 6, 0, 4);
                }
            }
        }
        if ([&]() -> bool {
                auto cs_left = offscreenMoney_;
                auto cs_right = require(require(apdat_)->save_)->lngs[0];
                return cs_left != cs_right;
            }()) {
            offscreenMoneyString_ = main::AppData::CommaSeparate(require(require(apdat_)->save_)->lngs[0]);
            offscreenMoney_ = require(require(apdat_)->save_)->lngs[0];
        }
        if (([&]() -> bool {
                auto cs_left = require(apdat_)->offMoney_;
                auto cs_right = require(require(apdat_)->save_)->lngs[0];
                return cs_left != cs_right;
            }()) ||
            flg_allDraw) {
            {
                auto cs_target = apdat_;
                pls::cs::Int64 cs_value = require(require(apdat_)->save_)->lngs[0];
                require(cs_target)->offMoney_ = cs_value;
            }
            pls::cs::Int32 num4 =
                main::AppData::ClampMin(([&]() -> pls::cs::Int32 {
                                            auto cs_left = require(view_)->GetGameWidth() - topBarOffMBack;
                                            auto cs_right = GameForm::TBAR_W()[4];
                                            return cs_left - cs_right;
                                        }()),
                                        121);
            PLS_API(([&]() -> void {
                pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                    require(require(apdat_)->resCom2_)->img.get_Item(26);
                require(g)->DrawImage(cs_arg0, num4, 4.0f, 119, 4, 117, 15);
            }()));
            if (require(require(apdat_)->save_)->lngs[0] >= pls::cs::cast_integral<pls::cs::Int64>(0)) {
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(20, 29, 49))));
            } else {
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 0, 0))));
            }
            pls::cs::String text =
                MyFormBase::YEN(literal(u"万円"), require(require(apdat_)->save_)->lngs[0]);
            if (MyFormBase::Jp()) {
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = text;
                    pls::cs::Single cs_arg1 = ([&]() -> pls::cs::Int32 {
                        auto cs_left = ([&]() -> pls::cs::Int32 {
                            auto cs_left = require(view_)->GetGameWidth() - topBarOffM;
                            auto cs_right = GameForm::TBAR_W()[5];
                            return cs_left - cs_right;
                        }());
                        auto cs_right = PLS_API(require(font)->StringWidth(text));
                        return cs_left - cs_right;
                    }());
                    require(g)->DrawString(cs_arg0, cs_arg1, 6.0f);
                }()));
            } else {
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = text;
                    pls::cs::Single cs_arg1 = ([&]() -> pls::cs::Int32 {
                                                  auto cs_left = ([&]() -> pls::cs::Int32 {
                                                      auto cs_left =
                                                          require(view_)->GetGameWidth() - topBarOffM;
                                                      auto cs_right = GameForm::TBAR_W()[5];
                                                      return cs_left - cs_right;
                                                  }());
                                                  auto cs_right = PLS_API(require(font)->StringWidth(text));
                                                  return cs_left - cs_right;
                                              }()) -
                                              5;
                    require(g)->DrawString(cs_arg0, cs_arg1, 6.0f);
                }()));
            }
        }
    }
}

// M:form.GameForm.Draw_watch(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Double,System.Int32)
void GameForm::Draw_watch(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 cx, pls::cs::Int32 cy,
                          pls::cs::Double len, pls::cs::Int32 angle) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:form.GameForm.Draw_watch(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Double,System.Int32)",
        game);
    {
        pls::cs::Double a = PLS_API(kl_lang::JMath::ToRadians(angle));
        pls::cs::Double num = PLS_API(kl_lang::JMath::Cos(a));
        pls::cs::Double num2 = PLS_API(kl_lang::JMath::Sin(a));
        if (len == pls::cs::Double(PLS_API(kl_lang::JMath::AbsInt(pls::cs::to_int32((len * num)))))) {
            num = num * 0.999;
        }
        if (len == pls::cs::Double(PLS_API(kl_lang::JMath::AbsInt(pls::cs::to_int32((len * num2)))))) {
            num2 = num2 * 0.999;
        }
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 0, 0))));
        PLS_API(require(g)->DrawLine(cx, cy, cx + pls::cs::to_int32((len * num)),
                                     cy - pls::cs::to_int32((len * num2)), 1.0f));
    }
}

// M:form.GameForm.UpdateOffscreen(kairo.unity.ui.Graphics)
void GameForm::UpdateOffscreen(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.UpdateOffscreen(kairo.unity.ui.Graphics)", game);
    {
        game::Camera::ensure_initialized();

        pls::cs::Int32 num = 0;
        if (pls::cs::box(game::Camera::old_pos()) != pls::cs::box(game::Camera::pos()) ||
            pls::cs::box(game::Camera::old_pos()) != pls::cs::box(game::Camera::pos())) {
            num = 1;
            if (GameForm::DISP_COPAREA() == 0) {
                num = 2;
            }
        }
        if (flg_allDraw) {
            flg_allDraw = false;
            num = 2;
        }
        pls::cs::Int32 vIEW_W = GameForm::VIEW_W();
        pls::cs::Int32 vIEW_H = GameForm::VIEW_H();
        GameForm::VIEW_W() = GetGameWidth();
        GameForm::VIEW_H() = GetGameHeight();
        PLS_API(require(g)->ClipRect(GameForm::VIEW_X(), GameForm::VIEW_Y(), GameForm::VIEW_W(),
                                     GameForm::VIEW_H(), true));
        kairo::unity::ui::Seb::SetClip(GameForm::VIEW_X(), GameForm::VIEW_Y(), GameForm::VIEW_W(),
                                       GameForm::VIEW_H());
        require(apdat_)->ClearZSortObjects();
        num = 2;
        pls::cs::Int32 colorOfRGB = PLS_API(pls::kairo::Graphics::GetColorOfRGB(128, 210, 255));
        if (num == 2) {
            PLS_API(require(g)->SetColor(colorOfRGB));
            PLS_API(require(g)->FillRect(GameForm::VIEW_X(), GameForm::VIEW_Y(), GameForm::VIEW_W(),
                                         GameForm::VIEW_H()));
            require(require(apdat_)->mapMain_)->Draw(g, true);
            require(game::Camera::old_pos())->x_ = require(game::Camera::pos())->x_;
            require(game::Camera::old_pos())->y_ = require(game::Camera::pos())->y_;
        } else {
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 0, 255))));
            pls::cs::Int32 num2 =
                -pls::cs::to_int32((require(game::Camera::pos())->x_ - require(game::Camera::old_pos())->x_));
            pls::cs::Int32 num3 =
                pls::cs::to_int32((require(game::Camera::pos())->y_ - require(game::Camera::old_pos())->y_));
            require(game::Camera::old_pos())->x_ = require(game::Camera::pos())->x_;
            require(game::Camera::old_pos())->y_ = require(game::Camera::pos())->y_;
            PLS_API(require(g)->CopyArea(GameForm::VIEW_X(), GameForm::VIEW_Y(), GameForm::VIEW_W(),
                                         GameForm::VIEW_H(), num2, num3));
            for (pls::cs::Int32 i = 0; i < offUpdateSRect.length(); ++i) {
                offUpdateSRect[i] = 0;
            }
            if (num2 > 0) {
                offUpdateSRect[3] = num2;
            } else {
                offUpdateSRect[1] = -num2;
            }
            if (num3 > 0) {
                offUpdateSRect[0] = num3;
            } else {
                offUpdateSRect[2] = -num3;
            }
            if (offUpdateSRect[0] > 0) {
                PLS_API(require(g)->SetColor(colorOfRGB));
                PLS_API(([&]() -> void {
                    pls::cs::Single cs_arg3 = offUpdateSRect[0];
                    require(g)->FillRect(0.0f, GameForm::VIEW_Y(), GameForm::VIEW_W(), cs_arg3);
                }()));
            }
            if (offUpdateSRect[1] > 0) {
                PLS_API(require(g)->SetColor(colorOfRGB));
                PLS_API(([&]() -> void {
                    pls::cs::Single cs_arg0 = GameForm::VIEW_W() - offUpdateSRect[1];
                    pls::cs::Single cs_arg2 = offUpdateSRect[1];
                    require(g)->FillRect(cs_arg0, GameForm::VIEW_Y(), cs_arg2, GameForm::VIEW_H());
                }()));
            }
            if (offUpdateSRect[2] > 0) {
                PLS_API(require(g)->SetColor(colorOfRGB));
                PLS_API(([&]() -> void {
                    pls::cs::Single cs_arg1 = GameForm::VIEW_Y() + GameForm::VIEW_H() - offUpdateSRect[2];
                    pls::cs::Single cs_arg3 = offUpdateSRect[2];
                    require(g)->FillRect(0.0f, cs_arg1, GameForm::VIEW_W(), cs_arg3);
                }()));
            }
            if (offUpdateSRect[3] > 0) {
                PLS_API(require(g)->SetColor(colorOfRGB));
                PLS_API(([&]() -> void {
                    pls::cs::Single cs_arg2 = offUpdateSRect[3];
                    require(g)->FillRect(GameForm::VIEW_X(), GameForm::VIEW_Y(), cs_arg2, GameForm::VIEW_H());
                }()));
            }
            require(require(apdat_)->mapMain_)->Draw_copyArea(g, offUpdateSRect);
        }
        require(apdat_)->DrawZSortObjects(g, true);
        kairo::unity::ui::Seb::ClearClip();
        PLS_API(require(g)->PopClip());
        GameForm::VIEW_W() = vIEW_W;
        GameForm::VIEW_H() = vIEW_H;
    }
}

// M:form.GameForm.SetAllDraw
void GameForm::SetAllDraw() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.SetAllDraw", game);
    {
        flg_allDraw = true;
        GameForm::resetOffscreen_() = true;
    }
}

// M:form.GameForm.Draw(kairo.unity.ui.Graphics)
void GameForm::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.Draw(kairo.unity.ui.Graphics)", game);
    {
        GameForm::VIEW_W() = ([&]() -> pls::cs::Int32 {
            auto cs_left = require(view_)->GetGameWidth();
            auto cs_right = GameForm::VIEW_X();
            return cs_left - cs_right;
        }());
        GameForm::VIEW_H() = ([&]() -> pls::cs::Int32 {
            auto cs_left = require(view_)->GetGameHeight();
            auto cs_right = GameForm::VIEW_Y();
            return cs_left - cs_right;
        }());
        errFunc_ = 2;
        errLine_ = 0;
        pls::cs::Int32 cs_arg0_118 = scale_;
        pls::cs::Int32 cs_arg1_118 = GetScaleMin();
        pls::cs::Int32 cs_arg2_118 = GetScaleMax() + 40;
        pls::cs::Int32 num = main::AppData::Clamp(cs_arg0_118, cs_arg1_118, cs_arg2_118);
        if (num != scale_) {
            SetScale(num);
        }
        try {
            _draw(g);
        } catch (const pls::cs::Exception& cs_caught_102) {
            auto ex = pls::cs::capture_exception(cs_caught_102);
            {
                PLS_API(kl_unity_util::Log::Info(ex));
                pls::cs::throw_exception(ex);
            }
        }
        errFunc_ = -1;
    }
}

// M:form.GameForm._draw(kairo.unity.ui.Graphics)
void GameForm::_draw(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm._draw(kairo.unity.ui.Graphics)", game);
    {
        kl_cfg::Config::ensure_initialized();
        game::UserData::ensure_initialized();

        errLine_ = 10;
        pls::cs::Int32 num13, num, num2, num3;
        num3 = 0;
        num2 = num3;
        num = num2;
        num13 = num;
        game::Camera::SetDrawCenter(GameForm::VIEW_X(), GameForm::VIEW_Y(), GameForm::VIEW_W(),
                                    GameForm::VIEW_H());
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(50, 205, 255))));
        PLS_API(require(g)->FillRect(GameForm::VIEW_X(), GameForm::VIEW_Y(), GameForm::VIEW_W(),
                                     GameForm::VIEW_H()));
        PLS_API(([&]() -> void {
            pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(GameForm::offGameScreen_())->get_Image();
            pls::cs::Single cs_arg1 = GameForm::VIEW_X();
            pls::cs::Single cs_arg2 = GameForm::VIEW_Y();
            pls::cs::Single cs_arg3 = GameForm::VIEW_W();
            pls::cs::Single cs_arg4 = GameForm::VIEW_H();
            pls::cs::Int32 cs_arg5 = GameForm::VIEW_X();
            pls::cs::Int32 cs_arg6 = GameForm::VIEW_Y();
            pls::cs::Int32 cs_arg7 = GetGameWidth();
            pls::cs::Int32 cs_arg8 = GetGameHeight();
            require(g)->DrawScaledImage(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6,
                                        cs_arg7, cs_arg8);
        }()));
        errLine_ = 15;
        if (require(view_)->CheckFirstTouch(17)) {
            surface::GameView::AddTouch(g, 17, -1000, -1000, 2000, 2000, 0,
                                        require(kairo::unity::surface::TouchOption::Drag(1, 1))->Flag(40));
        } else {
            {
                pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                pls::cs::Int32 cs_arg2 = GameForm::VIEW_X();
                pls::cs::Int32 cs_arg3 = GameForm::VIEW_Y();
                pls::cs::Int32 cs_arg4 = GameForm::VIEW_W();
                pls::cs::Int32 cs_arg5 = GameForm::VIEW_H();
                pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 =
                    kairo::unity::surface::TouchOption::Drag(1, 1);
                surface::GameView::AddTouch(cs_arg0, 17, cs_arg2, cs_arg3, cs_arg4, cs_arg5, 0, cs_arg7);
            }
        }
        if (state_ == 0) {
            {
                pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                pls::cs::Int32 cs_arg2 = GameForm::VIEW_X();
                pls::cs::Int32 cs_arg4 = GameForm::VIEW_W();
                pls::cs::Int32 cs_arg5 = 200 + GameForm::VIEW_Y() + 10;
                pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 =
                    kairo::unity::surface::TouchOption::CreateInt(32);
                surface::GameView::AddTouch(cs_arg0, 4, cs_arg2, -200, cs_arg4, cs_arg5, 22, cs_arg7);
            }
        }
        require(require(apdat_)->camera)->DrawCursor(g);
        errLine_ = 16;
        num3 = GameForm::VIEW_Y() + GameForm::VIEW_H();
        if (state_ == 0) {
            errLine_ = 17;
            if (!is_null(require(require(apdat_)->camera)->subPlayer_)) {
                errLine_ = 18;
                pls::cs::Int32 sideSoftWidth = require(view_)->GetSideSoftWidth();
                auto cs_left_77 = require(view_)->GetGameWidth();
                auto cs_right_77 = require(view_)->GetSideSoftWidth() * 2;
                pls::cs::Int32 num4 = cs_left_77 - cs_right_77;
                pls::cs::Ref<game::TPlayer> subPlayer_ = require(require(apdat_)->camera)->subPlayer_;
                pls::cs::Ref<data::PlayerData> playerData =
                    require(apdat_)->pData_.get_Item(require(subPlayer_)->pData_id_);
                pls::cs::Int32 num5 = sideSoftWidth;
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(141);
                    require(g)->DrawImage(cs_arg0, sideSoftWidth, num3 - 25, 0, 0, 127, 25);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(141);
                    require(g)->DrawImage(cs_arg0, sideSoftWidth + num4 - 3, num3 - 25, 237, 0, 3, 25);
                }()));
                num5 += 127;
                pls::cs::Int32 num6 = num4 - 130;
                while (num6 > 0) {
                    pls::cs::Int32 num7 = main::AppData::Clamp(num6, 1, 110);
                    PLS_API(([&]() -> void {
                        pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                            require(require(apdat_)->resCom2_)->img.get_Item(141);
                        require(g)->DrawImage(cs_arg0, num5, num3 - 25, 127, 0, num7, 25);
                    }()));
                    num6 -= num7;
                    num5 += num7;
                }
                PLS_API(require(g)->ClipRect(sideSoftWidth + 4, num3 - 20, 15.0f, 15.0f, true));
                require(udat_)->SetDispPlayerData(0, require(udat_)->selectUniform_,
                                                  require(playerData)->faceImg_, 0, 1);
                require(udat_)->DrawDispPlayer(g, sideSoftWidth + 4 + 8, num3);
                PLS_API(require(g)->PopClip());
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(249, 232, 223))));
                PLS_API(require(g)->DrawString(
                    pls::cs::String::concat(
                        pls::cs::String::concat(require(playerData)->name_, literal(u" ")),
                        require(playerData)->name2_),
                    sideSoftWidth + 27, num3 - 18));
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(126);
                    require(g)->DrawImage(cs_arg0, sideSoftWidth + 129, num3 - 17);
                }()));
                require(apdat_)->DrawNumImageLongIntInt(
                    g, 79, pls::cs::cast_integral<pls::cs::Int64>(require(playerData)->lv_),
                    sideSoftWidth + 129 + 35 - 4, num3 - 19, 0, 2);
                errLine_ = 19;
            }
            errLine_ = 20;
        } else if (state_ == 1) {
            pls::cs::Int32 sideSoftWidth2 = require(view_)->GetSideSoftWidth();
            require(apdat_)->Draw_helpMessage(g, build_btmMessage, sideSoftWidth2, num3 - 22);
        }
        errLine_ = 21;
        UpdateOffscreenTopBar(g, true);
        pls::cs::Int32 topBarOffT = GetTopBarOffT();
        pls::cs::Int32 num8 =
            game::GameUtil::RateConvert(require(require(apdat_)->save_)->ints[4], 0, 10800, 0, 10, true);
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 0))));
        PLS_API(require(g)->FillRect(114 + topBarOffT, 2 + num8 * 2, 3.0f, 1.0f));
        PLS_API(([&]() -> void {
            pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(143);
            pls::cs::Single cs_arg1 = require(view_)->GetGameWidth() - 178;
            require(g)->DrawImage(cs_arg0, cs_arg1, GameForm::VIEW_Y());
        }()));
        num = GameForm::VIEW_Y();
        {
            auto cs_receiver = apdat_;
            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
            pls::cs::Int64 cs_arg2 =
                pls::cs::cast_integral<pls::cs::Int64>(require(udat_)->researchPoint_[0]);
            pls::cs::Int32 cs_arg3 = require(view_)->GetGameWidth() - 136;
            require(cs_receiver)->DrawNumImageLongIntInt(cs_arg0, 35, cs_arg2, cs_arg3, num + 3, 0, 4);
        }
        {
            auto cs_receiver = apdat_;
            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
            pls::cs::Int64 cs_arg2 =
                pls::cs::cast_integral<pls::cs::Int64>(require(udat_)->researchPoint_[1]);
            pls::cs::Int32 cs_arg3 = require(view_)->GetGameWidth() - 136 + 44;
            require(cs_receiver)->DrawNumImageLongIntInt(cs_arg0, 35, cs_arg2, cs_arg3, num + 3, 0, 4);
        }
        {
            auto cs_receiver = apdat_;
            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
            pls::cs::Int64 cs_arg2 =
                pls::cs::cast_integral<pls::cs::Int64>(require(udat_)->researchPoint_[2]);
            pls::cs::Int32 cs_arg3 = require(view_)->GetGameWidth() - 136 + 88;
            require(cs_receiver)->DrawNumImageLongIntInt(cs_arg0, 35, cs_arg2, cs_arg3, num + 3, 0, 4);
        }
        {
            auto cs_receiver = apdat_;
            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
            pls::cs::Int64 cs_arg2 =
                pls::cs::cast_integral<pls::cs::Int64>(require(udat_)->researchPoint_[3]);
            pls::cs::Int32 cs_arg3 = require(view_)->GetGameWidth() - 136 + 132;
            require(cs_receiver)->DrawNumImageLongIntInt(cs_arg0, 35, cs_arg2, cs_arg3, num + 3, 0, 4);
        }
        errLine_ = 22;
        pls::cs::Int32 matchInfoJoin = require(udat_)->GetMatchInfoJoin();
        if (matchInfoJoin != 2) {
            num = 42;
            PLS_API(([&]() -> void {
                pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                    require(require(apdat_)->resCom2_)->img.get_Item(144);
                pls::cs::Single cs_arg1 = require(view_)->GetGameWidth() - 89;
                require(g)->DrawImage(cs_arg0, cs_arg1, num - 3);
            }()));
            pls::cs::Int32 num9 = game::GameUtil::RateConvert(LEAGUE_SCHEDULE_UPDATECNT, 12, 0, -12, 0, true);
            pls::cs::Int32 num10 = 0;
            if (matchInfoJoin == 0) {
                pls::cs::Ref<data::LeagueData> leagueData =
                    require(apdat_)->leagueData_.get_Item(require(udat_)->selectLeagueId_);
                num10 = require(leagueData)->schedule_ - require(udat_)->matchInfoWeek_;
            } else if (matchInfoJoin == 1) {
                pls::cs::Ref<data::QuestMatchData> questMatchData =
                    require(apdat_)->qmData_.get_Item(require(udat_)->selectQmId_);
                num10 = require(questMatchData)->schedule_ - require(udat_)->matchInfoWeek_;
            }
            pls::cs::Int32 num11 = require(view_)->GetGameWidth() - 25;
            if (MyFormBase::En()) {
                num11 += -53;
            }
            if (main::AppData::IsLanguageJpBase(false)) {
                num11 = require(view_)->GetGameWidth() - 25;
            }
            PLS_API(require(g)->ClipRect(num11 - 5, num, 16.0f, 13.0f, true));
            require(apdat_)->DrawNumImageLongIntInt(g, 82, pls::cs::cast_integral<pls::cs::Int64>(num10),
                                                    num11, num + num9, 0, 1);
            if (num9 != 0) {
                require(apdat_)->DrawNumImageLongIntInt(
                    g, 82, pls::cs::cast_integral<pls::cs::Int64>(num10 + 1), num11, num + num9 + 12, 0, 1);
            }
            PLS_API(require(g)->PopClip());
        }
        errLine_ = 23;
        if (state_ == 2) {
            if (busgather_ph == 1) {
                SubForm::Draw_moveToBus(g, frame_);
            } else if (busgather_ph == 2) {
                SubForm::Draw_battlePic(g, frame_);
            }
        } else if (state_ == 0) {
            pls::cs::Int32 num12 = GameForm::VIEW_Y() + GameForm::VIEW_H();
            if (!is_null(require(require(apdat_)->camera)->subPlayer_)) {
                num12 -= 25;
            }
            errLine_ = 24;
            LogOut();
            require(apdat_)->DrawPopupMessage(g, num12);
            errLine_ = 25;
            LogOut();
        } else if (state_ == 3) {
            num13 = 0;
            num = 0;
            for (pls::cs::Int32 i = 0; i < require(view_)->GetGameHeight() / 40 + 1; ++i) {
                for (pls::cs::Int32 j = 0; j < require(view_)->GetGameWidth() / 120 + 1; ++j) {
                    num13 = 120 * j;
                    num = 40 * i;
                    pls::cs::Int32 width =
                        main::AppData::ClampMax(120, require(view_)->GetGameWidth() - num13);
                    pls::cs::Int32 height =
                        main::AppData::ClampMax(40, require(view_)->GetGameHeight() - num);
                    PLS_API(([&]() -> void {
                        pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                            require(require(apdat_)->resCom2_)->img.get_Item(89);
                        require(g)->DrawImage(cs_arg0, num13, num, 0, 0, width, height);
                    }()));
                }
            }
        }
        pls::cs::Ref<pls::kairo::FormBase> topForm = PLS_API(require(formMan_)->GetTopForm());
        if (PLS_API(require(topForm)->GetId()) == 4) {
            pls::cs::Ref<SubForm> subForm = pls::cs::unbox<pls::cs::Ref<SubForm>>(pls::cs::box(topForm));
            if (require(subForm)->IsMenu()) {
                PLS_API(([&]() -> void {
                    pls::cs::Int32 cs_arg0 = PLS_API(([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = GameForm::MENU_BACK()[0];
                        pls::cs::Int32 cs_arg1 = GameForm::MENU_BACK()[1];
                        pls::cs::Int32 cs_arg2 = GameForm::MENU_BACK()[2];
                        pls::cs::Int32 cs_arg3 = GameForm::MENU_BACK()[3];
                        return pls::kairo::Graphics::GetColorOfRGB(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                    }()));
                    require(g)->SetColor(cs_arg0);
                }()));
                PLS_API(require(g)->FillRect(GameForm::VIEW_X(), GameForm::VIEW_Y(), GameForm::VIEW_W(),
                                             GameForm::VIEW_H() + GameForm::BOTTOM_INFO_BAR()));
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 0, 0, 255))));
            }
        }
        errLine_ = 26;
        errLine_ = 27;
        if (kl_cfg::Config::DEBUG_CMD() && game::UserData::DEBUG_DISPFPS() == 1) {
            {
                auto cs_receiver = apdat_;
                pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                pls::cs::String cs_arg2 = pls::cs::String(u"");
                pls::cs::Int64 cs_arg3 =
                    pls::cs::cast_integral<pls::cs::Int64>(require(FormManager::GetInstance())->GetFps());
                pls::cs::String cs_arg4 = pls::cs::String(u"");
                require(cs_receiver)->DrawNumImage(cs_arg0, 23, cs_arg2, cs_arg3, cs_arg4, 5, 25, 0);
            }
            {
                auto cs_receiver = apdat_;
                pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                pls::cs::String cs_arg2 = pls::cs::String(u"");
                pls::cs::Int64 cs_arg3 = proc_time;
                pls::cs::String cs_arg4 = pls::cs::String(u"");
                require(cs_receiver)->DrawNumImage(cs_arg0, 23, cs_arg2, cs_arg3, cs_arg4, 5, 40, 0);
            }
            {
                auto cs_receiver = apdat_;
                pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                pls::cs::String cs_arg2 = pls::cs::String(u"");
                pls::cs::Int64 cs_arg3 = draw_time;
                pls::cs::String cs_arg4 = pls::cs::String(u"");
                require(cs_receiver)->DrawNumImage(cs_arg0, 23, cs_arg2, cs_arg3, cs_arg4, 5, 55, 0);
            }
        }
        errLine_ = 28;
        if (kl_cfg::Config::DEBUG_CMD() && GameForm::SHOW_DEBUGDRAW2() == 1) {
            if (GameForm::SHOW_FPS() == 1) {
                {
                    auto cs_receiver = apdat_;
                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                    pls::cs::String cs_arg2 = pls::cs::String(u"");
                    pls::cs::Int64 cs_arg3 =
                        pls::cs::cast_integral<pls::cs::Int64>(require(FormManager::GetInstance())->GetFps());
                    pls::cs::String cs_arg4 = pls::cs::String(u"");
                    require(cs_receiver)->DrawNumImage(cs_arg0, 23, cs_arg2, cs_arg3, cs_arg4, 5, 25, 0);
                }
            }
            if (GameForm::SHOW_MEMORY() == 1) {
                {
                    auto cs_receiver = apdat_;
                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                    pls::cs::String cs_arg2 = pls::cs::String(u"");
                    pls::cs::Int64 cs_arg3 =
                        java::lang::JRuntime::FreeMemory(require(PLS_API(kl_lang::JRuntime::GetRuntime()))) /
                        pls::cs::Int64(1024);
                    pls::cs::String cs_arg4 = pls::cs::String(u"");
                    require(cs_receiver)->DrawNumImage(cs_arg0, 23, cs_arg2, cs_arg3, cs_arg4, 10, 195, 0);
                }
                {
                    auto cs_receiver = apdat_;
                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                    pls::cs::String cs_arg2 = pls::cs::String(u"");
                    pls::cs::Int64 cs_arg3 =
                        java::lang::JRuntime::TotalMemory(require(PLS_API(kl_lang::JRuntime::GetRuntime()))) /
                        pls::cs::Int64(1024);
                    pls::cs::String cs_arg4 = pls::cs::String(u"");
                    require(cs_receiver)->DrawNumImage(cs_arg0, 23, cs_arg2, cs_arg3, cs_arg4, 10, 210, 0);
                }
            }
            if (GameForm::SHOW_PDTIME() == 1) {
                {
                    auto cs_receiver = apdat_;
                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                    pls::cs::String cs_arg2 = pls::cs::String(u"");
                    pls::cs::Int64 cs_arg3 = proc_time;
                    pls::cs::String cs_arg4 = pls::cs::String(u"");
                    require(cs_receiver)->DrawNumImage(cs_arg0, 23, cs_arg2, cs_arg3, cs_arg4, 5, 40, 0);
                }
                {
                    auto cs_receiver = apdat_;
                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                    pls::cs::String cs_arg2 = pls::cs::String(u"");
                    pls::cs::Int64 cs_arg3 = draw_time;
                    pls::cs::String cs_arg4 = pls::cs::String(u"");
                    require(cs_receiver)->DrawNumImage(cs_arg0, 23, cs_arg2, cs_arg3, cs_arg4, 5, 55, 0);
                }
            }
            if (GameForm::SHOW_DRAWNUM() == 1) {
                {
                    auto cs_receiver = apdat_;
                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                    pls::cs::String cs_arg2 = pls::cs::String(u"");
                    pls::cs::Int64 cs_arg3 =
                        pls::cs::cast_integral<pls::cs::Int64>(kairo::common::cfg::Config::drawImageCount_());
                    pls::cs::String cs_arg4 = pls::cs::String(u"");
                    require(cs_receiver)->DrawNumImage(cs_arg0, 23, cs_arg2, cs_arg3, cs_arg4, 5, 70, 0);
                }
            }
        }
        errLine_ = 29;
        errLine_ = 35;
    }
}

// M:form.GameForm.ProgressTime(System.Int32,System.Int32)
void GameForm::ProgressTime(pls::cs::Int32 add, pls::cs::Int32 frameCount) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.ProgressTime(System.Int32,System.Int32)", game);
    {
        kl_cfg::Config::ensure_initialized();

        pls::cs::Int32 num = require(require(apdat_)->save_)->ints[4];
        pls::cs::Int32 num2 = require(require(apdat_)->save_)->ints[1];
        pls::cs::Int32 num3 = require(require(apdat_)->save_)->ints[2];
        pls::cs::Int32 num4 = require(require(apdat_)->save_)->ints[3];
        pls::cs::Int32 num5 = pls::cs::Int32(GameForm::TRAINING_PARAMUP_TIME().length()) - 1;
        for (pls::cs::Int32 i = 0; i < GameForm::TRAINING_PARAMUP_TIME().length(); ++i) {
            if (num <= GameForm::TRAINING_PARAMUP_TIME()[i]) {
                num5 = i;
                break;
            }
        }
        require(require(apdat_)->save_)->ints[5] = require(require(apdat_)->save_)->ints[4];
        {
            auto cs_target = require(require(apdat_)->save_)->ints;
            auto cs_index = 4;
            auto cs_old = cs_target.at(cs_index);
            auto cs_rhs = add;
            pls::cs::Int32 cs_value = cs_old + cs_rhs;
            cs_target.at(cs_index) = cs_value;
        }
        if (require(require(apdat_)->save_)->ints[4] >= 10800) {
            pls::cs::Int32 num6 = require(require(apdat_)->save_)->ints[4];
            require(require(apdat_)->save_)->ints[4] = require(require(apdat_)->save_)->ints[5];
            require(apdat_)->SaveGame(true);
            require(require(apdat_)->save_)->ints[4] = num6;
        }
        while (require(require(apdat_)->save_)->ints[4] >= 10800) {
            require(require(apdat_)->save_)->ints[3]++;
            {
                auto cs_target = require(require(apdat_)->save_)->ints;
                auto cs_index = 4;
                auto cs_old = cs_target.at(cs_index);
                auto cs_rhs = 10800;
                pls::cs::Int32 cs_value = cs_old - cs_rhs;
                cs_target.at(cs_index) = cs_value;
            }
            if (require(require(apdat_)->save_)->ints[3] >= 4) {
                require(require(apdat_)->save_)->ints[3] = 0;
                require(require(apdat_)->save_)->ints[2]++;
                if (require(require(apdat_)->save_)->ints[2] >= 12) {
                    require(require(apdat_)->save_)->ints[2] = 0;
                    require(require(apdat_)->save_)->ints[1]++;
                }
            }
        }
        if (num2 != require(require(apdat_)->save_)->ints[1]) {
            require(udat_)->RotateTestPlayParam();
            require(udat_)->RecordReset();
            require(udat_)->CustomerNumReset();
            require(apdat_)->AddPopupMessage(36, pls::cs::String{});
        }
        if (num3 != require(require(apdat_)->save_)->ints[2]) {
            {
                pls::cs::GcCallSite gc_site("M:form.GameForm.ProgressTime(System.Int32,System.Int32)");
                PLS_API(kl_lang::JSystem::Gc());
            }
            if (kl_cfg::Config::TRIAL_VERSION() && require(require(apdat_)->save_)->ints[1] + 1 >= 2 &&
                require(require(apdat_)->save_)->ints[2] + 1 >= 1) {
                PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::MakeTalkForm(
                    0, MyFormBase::LT(literal(u"おつかれさまでした。<br>ここで体験版は終了となります")),
                    pls::cs::String{})));
                PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::MakeTalkForm(
                    0,
                    MyFormBase::LT(literal(
                        u"なお製品版では年数制限なく心ゆくまでゲームが遊べ、素敵なサッカーチームを運営することができます。")),
                    pls::cs::String{})));
                PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::MakeTalkForm(
                    0, MyFormBase::LT(literal(u"このあと正式版のサイトにアクセスすることができます。")),
                    pls::cs::String{})));
                dialog__GameForm = SubForm::MakeTalkForm(
                    0, MyFormBase::LT(literal(u"それではまた会いましょう。")), pls::cs::String{});
                require(dialog__GameForm)->dialogId_ = 105;
                PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(dialog__GameForm));
                return;
            }
            if (require(require(apdat_)->save_)->ints[1] == 7 &&
                require(require(apdat_)->save_)->ints[2] == 3) {
                ([&]() -> pls::cs::Ref<SubForm> {
                    auto cs_receiver = apdat_;
                    pls::cs::String cs_arg1 =
                        pls::cs::String::concat(integer_string(7), pls::cs::String(u""));
                    return require(cs_receiver)->ExecEvent(3, cs_arg1, IntArray{});
                }());
                {
                    auto cs_receiver = apdat_;
                    pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = SubForm::create(19);
                    require(cs_receiver)->Push(cs_arg0);
                }
                require(require(apdat_)->save_)->ints[14] = 1;
                require(require(apdat_)->sysSave_)->ints[9] = 1;
                require(udat_)->SetContinueGameData();
            }
            require(require(apdat_)->svisorData_.get_Item(require(udat_)->selectSupervisorId_))->workMonth_++;
            pls::cs::Int32 num7 = 0;
            pls::cs::Ref<data::SupervisorData> supervisorData =
                require(apdat_)->svisorData_.get_Item(require(udat_)->selectSupervisorId_);
            num7 += require(supervisorData)->GetSallay();
            {
                auto cs_receiver = apdat_;
                pls::cs::Int32 cs_arg0 = require(supervisorData)->GetSallay();
                require(cs_receiver)->SubMoney(cs_arg0, 3);
            }
            for (pls::cs::Int32 j = 0; j < require(udat_)->tenants_.length(); ++j) {
                pls::cs::Ref<game::Tenant> tenant = require(udat_)->tenants_.get_Item(j);
                if ((require(tenant)->state_ != 1) && (require(tenant)->state_ != 4)) {
                    continue;
                }
                if (require(tenant)->tenantDataId_ == -1) {
                    continue;
                }
                pls::cs::Ref<data::TenantData> tenantData =
                    require(apdat_)->tenantData_.get_Item(require(tenant)->tenantDataId_);
                num7 += require(tenantData)->paramKeepCost_;
                require(apdat_)->SubMoney(require(tenantData)->paramKeepCost_, 1);
            }
        }
        if (num4 != require(require(apdat_)->save_)->ints[3]) {
            pls::cs::Int32 matchInfoJoin = require(udat_)->GetMatchInfoJoin();
            if (matchInfoJoin != 2) {
                ++require(udat_)->matchInfoWeek_;
                if ((matchInfoJoin == 0)) {
                    pls::cs::Ref<data::LeagueData> leagueData =
                        require(apdat_)->leagueData_.get_Item(require(udat_)->selectLeagueId_);
                    if (require(udat_)->matchInfoWeek_ >= require(leagueData)->schedule_) {
                        busgather_ph = 1;
                        if (!require(apdat_)->CheckAlreadyEvent(156)) {
                            require(apdat_)->ExecEvent(156, pls::cs::String{}, IntArray{});
                        }
                        if (data::LeagueData::IsVictoryMatch()) {
                            require(apdat_)->ExecEvent(131, pls::cs::String{}, IntArray{});
                        } else if (data::LeagueData::IsLastMatch()) {
                            require(apdat_)->ExecEvent(130, pls::cs::String{}, IntArray{});
                        } else {
                            ([&]() -> pls::cs::Ref<SubForm> {
                                auto cs_receiver = apdat_;
                                pls::cs::String cs_arg1 = ([&]() {
                                    auto cs_left = integer_string(require(udat_)->league_setu_ + 1);
                                    auto cs_right = pls::cs::String(u"");
                                    return pls::cs::String::concat(cs_left, cs_right);
                                }());
                                return require(cs_receiver)->ExecEvent(129, cs_arg1, IntArray{});
                            }());
                        }
                        pls::cs::Ref<SubForm> form2 = SubForm::create(78);
                        require(apdat_)->Push(form2);
                    } else {
                        LEAGUE_SCHEDULE_UPDATECNT = 12;
                    }
                } else if ((matchInfoJoin == 1)) {
                    pls::cs::Ref<data::QuestMatchData> questMatchData =
                        require(apdat_)->qmData_.get_Item(require(udat_)->selectQmId_);
                    if (require(udat_)->matchInfoWeek_ >= require(questMatchData)->schedule_) {
                        busgather_ph = 1;
                        if (!require(apdat_)->CheckAlreadyEvent(156)) {
                            require(apdat_)->ExecEvent(156, pls::cs::String{}, IntArray{});
                        }
                        if (data::QuestMatchData::IsVictoryMatch()) {
                            require(apdat_)->ExecEvent(131, pls::cs::String{}, IntArray{});
                        } else {
                            require(apdat_)->ExecEvent(133, require(questMatchData)->name_, IntArray{});
                        }
                        pls::cs::Ref<SubForm> form = SubForm::create(78);
                        require(apdat_)->Push(form);
                    } else {
                        LEAGUE_SCHEDULE_UPDATECNT = 12;
                    }
                }
            }
            if (require(require(apdat_)->save_)->ints[3] == 2 &&
                require(require(apdat_)->save_)->ints[2] == 11) {
                pls::cs::Ref<data::TeamData> teamData = require(apdat_)->tData_.get_Item(0);
                if (!require(apdat_)->CheckAlreadyEvent(166)) {
                    require(apdat_)->ExecEvent(166, pls::cs::String{}, IntArray{});
                }
                ([&]() -> pls::cs::Ref<SubForm> {
                    auto cs_receiver = apdat_;
                    pls::cs::String cs_arg1 = ([&]() {
                        auto cs_left = pls::cs::String::concat(require(teamData)->name_, literal(u"\t"));
                        auto cs_right = integer_string(
                            PLS_API(kl_java_util::Vector_2_Size(require(require(udat_)->memberPDataist_))));
                        return pls::cs::String::concat(cs_left, cs_right);
                    }());
                    return require(cs_receiver)->ExecEvent(110, cs_arg1, IntArray{});
                }());
            }
            for (pls::cs::Int32 num8 =
                     PLS_API(kl_java_util::Vector_2_Size(require(require(udat_)->restTPlayers_))) - 1;
                 num8 >= 0; --num8) {
                pls::cs::Ref<game::TPlayer> tenantIn = pls::cs::unbox<pls::cs::Ref<game::TPlayer>>(
                    PLS_API(kl_java_util::Vector_2_ElementAt(require(require(udat_)->restTPlayers_), num8)));
                if (require(udat_)->SetTenantIn(tenantIn)) {
                    PLS_API(
                        kl_java_util::Vector_2_RemoveElementAt(require(require(udat_)->restTPlayers_), num8));
                }
            }
        }
        pls::cs::Int32 num9 = require(require(apdat_)->save_)->ints[4];
        pls::cs::Int32 num10 = require(require(apdat_)->save_)->ints[1];
        pls::cs::Int32 num11 = require(require(apdat_)->save_)->ints[2];
        pls::cs::Int32 num12 = require(require(apdat_)->save_)->ints[3];
        pls::cs::Int32 num13 = pls::cs::Int32(GameForm::TRAINING_PARAMUP_TIME().length()) - 1;
        for (pls::cs::Int32 k = 0; k < GameForm::TRAINING_PARAMUP_TIME().length(); ++k) {
            if (num9 <= GameForm::TRAINING_PARAMUP_TIME()[k]) {
                num13 = k;
                break;
            }
        }
        num9 += add;
        while (num9 >= 10800) {
            ++num12;
            num9 -= 10800;
            if (num12 >= 4) {
                num12 = 0;
                ++num11;
                if (num11 >= 12) {
                    num11 = 0;
                    ++num10;
                }
            }
        }
        pls::cs::Ref<data::SupervisorData> supervisorData2 = pls::cs::Ref<data::SupervisorData>{};
        if (num5 != num13) {
            supervisorData2 = require(apdat_)->svisorData_.get_Item(require(udat_)->selectSupervisorId_);
            for (pls::cs::Int32 l = 0;
                 l < PLS_API(kl_java_util::Vector_2_Size(require(require(udat_)->memberPDataist_))); ++l) {
                pls::cs::Ref<data::PlayerData> playerData = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                    PLS_API(kl_java_util::Vector_2_ElementAt(require(require(udat_)->memberPDataist_), l)));
                for (pls::cs::Int32 m = 0; m < require(playerData)->trainingPoint_.length(); ++m) {
                }
            }
        }
    }
}

// M:form.GameForm.SetBattleData
void GameForm::SetBattleData() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.SetBattleData", game);
    {
        pls::cs::Ref<data::LeagueData> leagueData =
            require(apdat_)->leagueData_.get_Item(require(udat_)->selectLeagueId_);
        pls::cs::Int32 testedValue = require(udat_)->GetMatchInfoJoin();
        if (testedValue == 0) {
            IntArray nextBattleLeagueIndex =
                require(udat_)->GetNextBattleLeagueIndex(require(udat_)->league_setu_);
            {
                auto cs_receiver = require(udat_)->gm_;
                pls::cs::Int32 cs_arg1 = require(leagueData)->matchEnemy_[nextBattleLeagueIndex[0]];
                pls::cs::Int32 cs_arg2 = nextBattleLeagueIndex[1];
                require(cs_receiver)->SetBattleTeamId(0, cs_arg1, cs_arg2);
            }
        } else {
            pls::cs::Ref<data::QuestMatchData> questMatchData =
                require(apdat_)->qmData_.get_Item(require(udat_)->selectQmId_);
            {
                auto cs_receiver = require(udat_)->gm_;
                pls::cs::Int32 cs_arg1 = require(questMatchData)->matchEnemy_[require(udat_)->battleQmIndex_];
                require(cs_receiver)->SetBattleTeamId(0, cs_arg1, 1);
            }
        }
    }
}

// M:form.GameForm.SetBuildBtmMessage(System.String,System.Int32)
void GameForm::SetBuildBtmMessage(pls::cs::String str, pls::cs::Int32 cnt) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.SetBuildBtmMessage(System.String,System.Int32)",
                     game);
    {
        build_btmMessage = str;
        build_btmCnt = cnt;
    }
}

// M:form.GameForm.GetSeason(System.Int32)
pls::cs::Int32 GameForm::GetSeason(pls::cs::Int32 month) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.GetSeason(System.Int32)", game);
    {
        if (month >= 2 && month < 5) {
            return 0;
        }
        if (month >= 5 && month < 8) {
            return 1;
        }
        if (month >= 8 && month < 11) {
            return 2;
        }
        return 3;
    }
}

// M:form.GameForm.Draw_stadiumName(kairo.unity.ui.Graphics,System.Int32,System.Int32)
void GameForm::Draw_stadiumName(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 dy,
                                pls::cs::Int32 centerX) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:form.GameForm.Draw_stadiumName(kairo.unity.ui.Graphics,System.Int32,System.Int32)",
                     game);
    {
        game::GameManager::ensure_initialized();

        pls::cs::Ref<data::TeamData> teamData =
            require(apdat_)->tData_.get_Item(require(require(udat_)->gm_)->teamId_[0]);
        pls::cs::Ref<data::TeamData> teamData2 =
            require(apdat_)->tData_.get_Item(require(require(udat_)->gm_)->teamId_[1]);
        pls::cs::String empty = pls::cs::String(u"");
        if (require(require(udat_)->gm_)->homeAway_ == 0) {
            empty = require(teamData)->GetHomeStadiumName();
        } else {
            empty = require(teamData2)->GetHomeStadiumName();
        }
        pls::cs::Int32 num = PLS_API(([&]() -> pls::cs::Int32 {
            auto cs_receiver = PLS_API(require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{}));
            pls::cs::String cs_arg0 =
                game::GameManager::GAME_HOMEAWAY_STR()[require(require(udat_)->gm_)->homeAway_];
            return require(cs_receiver)->StringWidth(cs_arg0);
        }()));
        pls::cs::Int32 num2 = PLS_API(
            require(PLS_API(require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{})))->StringWidth(empty));
        pls::cs::Int32 num3 = 26 + num + 10 + num2;
        bool flag = false;
        if (MyFormBase::En()) {
            if (require(require(udat_)->gm_)->homeAway_ == 0) {
                if (require(teamData)->nationalFlag_ == 0) {
                    flag = true;
                }
            } else if (require(teamData2)->nationalFlag_ == 0) {
                flag = true;
            }
        }
        if (flag) {
            num3 = num + 10 + num2;
        }
        require(require(udat_)->gm_)->Draw_timeMessageWindow(g, dy, 222, 1, centerX);
        if (!flag) {
            if (require(require(udat_)->gm_)->homeAway_ == 0) {
                {
                    pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                        require(require(apdat_)->resCom2_)->seb.get_Item(100);
                    pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                        require(require(apdat_)->resCom2_)->img.get_Item(183);
                    pls::cs::Int32 cs_arg5 = require(teamData)->nationalFlag_;
                    require(apdat_)->DrawSeb(g, centerX - num3 / 2, dy + 2, cs_arg3, cs_arg4, cs_arg5);
                }
            } else {
                {
                    pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                        require(require(apdat_)->resCom2_)->seb.get_Item(100);
                    pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                        require(require(apdat_)->resCom2_)->img.get_Item(183);
                    pls::cs::Int32 cs_arg5 = require(teamData2)->nationalFlag_;
                    require(apdat_)->DrawSeb(g, centerX - num3 / 2, dy + 2, cs_arg3, cs_arg4, cs_arg5);
                }
            }
        }
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
        if (!flag) {
            PLS_API(([&]() -> void {
                pls::cs::String cs_arg0 =
                    game::GameManager::GAME_HOMEAWAY_STR()[require(require(udat_)->gm_)->homeAway_];
                require(g)->DrawString(cs_arg0, centerX - num3 / 2 + 26, dy + 3);
            }()));
        } else {
            PLS_API(([&]() -> void {
                pls::cs::String cs_arg0 =
                    game::GameManager::GAME_HOMEAWAY_STR()[require(require(udat_)->gm_)->homeAway_];
                require(g)->DrawString(cs_arg0, centerX - num3 / 2, dy + 3);
            }()));
        }
        if (!flag) {
            PLS_API(require(g)->DrawString(empty, centerX - num3 / 2 + (26 + num + 10), dy + 3));
        } else {
            PLS_API(require(g)->DrawString(empty, centerX - num3 / 2 + (num + 10), dy + 3));
        }
    }
}

// M:form.GameForm.GetTouchValue(System.Int32,System.Int32)
std::int32_t GameForm::GetTouchValue(std::int32_t type_raw, std::int32_t index_raw) {
    pls::cs::Int32 type = type_raw;
    pls::cs::Int32 index = index_raw;
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.GetTouchValue(System.Int32,System.Int32)", game);
    {
        return MyFormBase::GetTouchValue(type, index);
    }
}

// M:form.GameForm.SetTouchValue(System.Int32,System.Int32)
void GameForm::SetTouchValue(std::int32_t type_raw, std::int32_t value_raw) {
    pls::cs::Int32 type = type_raw;
    pls::cs::Int32 value = value_raw;
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.SetTouchValue(System.Int32,System.Int32)", game);
    {
        MyFormBase::SetTouchValue(type, value);
    }
}

// M:form.GameForm.OnTouchEvent(kairo.unity.surface.TouchEvent)
bool GameForm::OnTouchEvent(pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.OnTouchEvent(kairo.unity.surface.TouchEvent)", game);
    {
        if (require(require(e)->component)->id == 17) {
            OnTouchCamera(require(e)->type, require(require(e)->component)->value, e);
            return false;
        }
        return true;
    }
}

// M:form.GameForm.OnTouchCamera(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void GameForm::OnTouchCamera(pls::cs::Int32 type, pls::cs::Int32 v,
                             pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:form.GameForm.OnTouchCamera(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)", game);
    {
        game::Camera::ensure_initialized();

        pls::cs::Ref<kairo::unity::surface::TouchComponent> component = require(e)->component;
        IntArray array = IntArray{};
        pls::cs::Single num = require(e)->dx * 100 / scale_;
        pls::cs::Single num2 = require(e)->dy * 100 / scale_;
        pls::cs::Int32 num3 = pls::cs::to_int32((([&]() -> pls::cs::FloatEval {
            auto cs_left = require(game::Camera::pos())->x_;
            auto cs_right = pls::cs::Single((([&]() -> pls::cs::Int32 {
                auto cs_left = (([&]() -> pls::cs::Int32 {
                                   auto cs_left = require(e)->x;
                                   auto cs_right = require(view_)->GetGameWidth() / 2;
                                   return cs_left - cs_right;
                               }())) *
                               100;
                auto cs_right = scale_;
                return cs_left / cs_right;
            }())));
            return cs_left + cs_right;
        }())));
        pls::cs::Int32 num4 = pls::cs::to_int32((([&]() -> pls::cs::FloatEval {
            auto cs_left = require(game::Camera::pos())->y_;
            auto cs_right = pls::cs::Single((([&]() -> pls::cs::Int32 {
                auto cs_left = (([&]() -> pls::cs::Int32 {
                                   auto cs_left = require(e)->y;
                                   auto cs_right = require(view_)->GetGameHeight() / 2;
                                   return cs_left - cs_right;
                               }())) *
                               100;
                auto cs_right = scale_;
                return cs_left / cs_right;
            }())));
            return cs_left - cs_right;
        }())));
        pls::cs::Int32 num5 = require(e)->x * 100 / scale_;
        pls::cs::Int32 num6 = (require(e)->y - GameForm::VIEW_Y()) * 100 / scale_;
        switch (type) {
        case 0: {
            PLS_API(kl_unity_util::FastVector_2_RemoveAllElements(require(touchCameraPoint_)));
            PLS_API(require(touchCameraSpeed_)->Set(0.0f, 0.0f, 0.0f));
            touchDragCamera_ = true;
            touchBuildDrag_ = false;
            cursorHideWait_ = 40;
            buildDownX_ = require(e)->x;
            buildDownY_ = require(e)->y;
            isBuildTrack_ = false;
            buildLock_ = true;
            touchBuildDragFrame_ = 0;
            GameForm::touch_startDragPos()[0] = num5;
            GameForm::touch_startDragPos()[1] = num6;
            GameForm::touch_startDragSPosCenter()[0] = pls::cs::to_int32(require(game::Camera::pos())->x_);
            GameForm::touch_startDragSPosCenter()[1] = pls::cs::to_int32(require(game::Camera::pos())->y_);
            SetCursorPosition(num3, num4);
            require(require(apdat_)->camera)->flg_disp = false;
            break;
        }
        case 8: {
            if (buildLock_ && PLS_API(kl_lang::JMath::AbsInt(buildDownX_ - require(e)->x)) < 4 &&
                PLS_API(kl_lang::JMath::AbsInt(buildDownY_ - require(e)->y)) < 4) {
                break;
            }
            buildLock_ = false;
            if (touchDragCamera_) {
                if (num * num + num2 * num2 > 625.0f) {
                    touchSkip_ = true;
                }
                cursorHideWait_ = 0;
                {
                    auto cs_left_121 = GameForm::touch_startDragSPosCenter()[0];
                    auto cs_right_121 = (num5 - GameForm::touch_startDragPos()[0]);
                    pls::cs::Int32 cs_arg0 = cs_left_121 - cs_right_121;
                    auto cs_left_122 = GameForm::touch_startDragSPosCenter()[1];
                    auto cs_right_122 = (num6 - GameForm::touch_startDragPos()[1]);
                    pls::cs::Int32 cs_arg1 = cs_left_122 + cs_right_122;
                    SetCameraPosition(cs_arg0, cs_arg1);
                }
            }
            array = IntArray{};
            if (PLS_API(kl_unity_util::FastVector_2_Size(require(touchCameraPoint_))) < 5) {
                array = IntArray::from({pls::cs::to_int32(num), pls::cs::to_int32(num2)});
            } else {
                array = pls::cs::unbox<IntArray>(
                    PLS_API(kl_unity_util::FastVector_2_LastElement(require(touchCameraPoint_))));
                array[0] = pls::cs::to_int32(num);
                array[1] = pls::cs::to_int32(num2);
                PLS_API(([&]() -> void {
                    auto cs_receiver = touchCameraPoint_;
                    pls::cs::Int32 cs_arg0 =
                        PLS_API(kl_unity_util::FastVector_2_Size(require(touchCameraPoint_))) - 1;
                    kl_unity_util::FastVector_2_RemoveElementAt(require(cs_receiver), cs_arg0);
                }()));
            }
            PLS_API(kl_unity_util::FastVector_2_InsertElementAt(require(touchCameraPoint_),
                                                                pls::cs::box(array), 0));
            break;
        }
        case 5: {
            require(require(apdat_)->camera)->flg_disp = true;
            if (PLS_API(kl_unity_util::FastVector_2_Size(require(touchCameraPoint_))) == 0) {
                require(require(apdat_)->camera)->old_subPlayer_ =
                    require(require(apdat_)->camera)->subPlayer_;
                require(require(apdat_)->camera)->old_subSvisor_ =
                    require(require(apdat_)->camera)->subSvisor_;
                require(require(apdat_)->camera)->old_subTenant_ =
                    require(require(apdat_)->camera)->subTenant_;
                require(require(apdat_)->camera)->subPlayer_ = pls::cs::Ref<game::TPlayer>{};
                require(require(apdat_)->camera)->subSvisor_ = pls::cs::Ref<game::TPlayer>{};
                require(require(apdat_)->camera)->subTenant_ = pls::cs::Ref<game::Tenant>{};
                require(require(apdat_)->camera)->Collision(num3, num4);
                bool flag = false;
                if (!is_null(require(require(apdat_)->camera)->subPlayer_)) {
                    flag = true;
                } else if (!is_null(require(require(apdat_)->camera)->subSvisor_)) {
                    flag = true;
                } else if (!is_null(require(require(apdat_)->camera)->subTenant_)) {
                    flag = true;
                }
                if (flag) {
                    PLS_API(require(canvas_)->KeyClick(1048576));
                }
            }
            break;
        }
        case 1: {
            require(require(apdat_)->camera)->flg_disp = true;
            require(require(apdat_)->camera)->cursorCnt_ = 0;
            if (PLS_API(kl_unity_util::FastVector_2_Size(require(touchCameraPoint_))) > 0 &&
                touchDragCamera_) {
                IntArray array2 = pls::cs::unbox<IntArray>(
                    PLS_API(kl_unity_util::FastVector_2_FirstElement(require(touchCameraPoint_))));
                PLS_API(([&]() -> void {
                    pls::cs::Single cs_arg0 = pls::cs::to_int32(num) - array2[0];
                    pls::cs::Single cs_arg2 = pls::cs::to_int32(num2) - array2[1];
                    require(touchCameraSpeed_)->Set(cs_arg0, 0.0f, cs_arg2);
                }()));
                PLS_API(require(touchCameraDecimal_)->Set(0.0f, 0.0f, 0.0f));
            }
            break;
        }
        case 12: {
            {
                touchBuildDrag_ = false;
                pinchScaleValue_ = ([&]() -> pls::cs::Int32 {
                    pls::cs::Int32 cs_arg0 = pinchScaleValue_ + require(e)->pinch;
                    pls::cs::Int32 cs_arg1 = GetScaleMin();
                    pls::cs::Int32 cs_arg2 = GetScaleMax() + 40;
                    return main::AppData::Clamp(cs_arg0, cs_arg1, cs_arg2);
                }());
                pls::cs::Int32 num7 = pinchScaleValue_;
                if (num7 > 100) {
                    num7 = main::AppData::ClampMin(num7 - 40, 100);
                }
                SetScale(num7);
                touchDragCamera_ = false;
                break;
            }
        }
        }
    }
}

// M:form.GameForm.SetCameraPosition(System.Int32,System.Int32)
void GameForm::SetCameraPosition(pls::cs::Int32 x, pls::cs::Int32 y) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.SetCameraPosition(System.Int32,System.Int32)", game);
    {
        game::Camera::ensure_initialized();

        require(game::Camera::cursor_pos())->x_ = x;
        require(game::Camera::cursor_pos())->y_ = y;
        PLS_API(require(game::Camera::pos())->Set(game::Camera::cursor_pos()));
        require(require(apdat_)->camera)->SetCameraRect();
        game::Camera::camera_spos()[0] = pls::cs::to_int32(require(game::Camera::cursor_pos())->x_);
        game::Camera::camera_spos()[1] = pls::cs::to_int32(require(game::Camera::cursor_pos())->y_);
        game::Camera::ConvertScreenToGlobal(game::Camera::camera_spos(), game::Camera::camera_gpos());
        PLS_API(require(game::Camera::CAMERA_ADS_GPOS())
                    ->Set(require(game::Camera::camera_gpos())->x_ -
                              require(game::Camera::CAMERA_BASE_GPOS())->x_,
                          0.0f,
                          require(game::Camera::camera_gpos())->z_ -
                              require(game::Camera::CAMERA_BASE_GPOS())->z_));
        game::Camera::ConvertGlobalToAddressMain(game::Camera::CAMERA_ADS_GPOS(),
                                                 game::Camera::camera_address());
    }
}

// M:form.GameForm.SetCursorPosition(System.Int32,System.Int32)
void GameForm::SetCursorPosition(pls::cs::Int32 x, pls::cs::Int32 y) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.SetCursorPosition(System.Int32,System.Int32)", game);
    {
        game::Camera::ensure_initialized();

        require(game::Camera::cursor_pos())->x_ = x;
        require(game::Camera::cursor_pos())->y_ = y;
        require(require(apdat_)->camera)->SetCameraRect();
        game::Camera::camera_spos()[0] = pls::cs::to_int32(require(game::Camera::cursor_pos())->x_);
        game::Camera::camera_spos()[1] = pls::cs::to_int32(require(game::Camera::cursor_pos())->y_);
        game::Camera::ConvertScreenToGlobal(game::Camera::camera_spos(), game::Camera::camera_gpos());
        PLS_API(require(game::Camera::CAMERA_ADS_GPOS())
                    ->Set(require(game::Camera::camera_gpos())->x_ -
                              require(game::Camera::CAMERA_BASE_GPOS())->x_,
                          0.0f,
                          require(game::Camera::camera_gpos())->z_ -
                              require(game::Camera::CAMERA_BASE_GPOS())->z_));
        game::Camera::ConvertGlobalToAddressMain(game::Camera::CAMERA_ADS_GPOS(),
                                                 game::Camera::camera_address());
    }
}

// M:form.GameForm.GetScaleRange
IntArray GameForm::GetScaleRange() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.GetScaleRange", game);
    {
        {
            auto cs_target = getScaleRange_tmp;
            auto cs_index = 0;
            auto cs_value = GetScaleMin();
            cs_target.set_Item(cs_index, cs_value);
        }
        {
            auto cs_target = getScaleRange_tmp;
            auto cs_index = 1;
            auto cs_value = GetScaleMax();
            cs_target.set_Item(cs_index, cs_value);
        }
        return getScaleRange_tmp;
    }
}

// M:form.GameForm.GetScaleMin
pls::cs::Int32 GameForm::GetScaleMin() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.GetScaleMin", game);
    {
        if (require(view_)->GetGameWidth() > 240) {
            return 75;
        }
        return 60;
    }
}

// M:form.GameForm.GetScaleMax
pls::cs::Int32 GameForm::GetScaleMax() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.GetScaleMax", game);
    {
        return 200;
    }
}

// M:form.GameForm.SetScale(System.Int32)
void GameForm::SetScale(pls::cs::Int32 scale) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.SetScale(System.Int32)", game);
    {
        IntArray scaleRange = GetScaleRange();
        scale = main::AppData::Clamp(scale, scaleRange[0], scaleRange[1]);
        if (scale == scale_) {
            return;
        }
        {
            pls::cs::Int32 gameWidth = GetGameWidth();
            pls::cs::Int32 gameHeight = GetGameHeight();
            scale_ = scale;
            ResetOffscreen();
        }
    }
}

// M:form.GameForm.GetGameWidth
pls::cs::Int32 GameForm::GetGameWidth() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.GetGameWidth", game);
    {
        {
            auto cs_left_78 = (([&]() -> pls::cs::Int32 {
                                  auto cs_left_78 = require(view_)->GetGameWidth();
                                  auto cs_right_78 = GameForm::VIEW_X();
                                  return cs_left_78 - cs_right_78;
                              }())) *
                              100;
            auto cs_right_78 = scale_;
            return cs_left_78 / cs_right_78;
        }
    }
}

// M:form.GameForm.GetGameHeight
pls::cs::Int32 GameForm::GetGameHeight() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.GetGameHeight", game);
    {
        {
            auto cs_left_79 = (([&]() -> pls::cs::Int32 {
                                  auto cs_left_79 = require(view_)->GetGameHeight();
                                  auto cs_right_79 = GameForm::VIEW_Y();
                                  return cs_left_79 - cs_right_79;
                              }())) *
                              100;
            auto cs_right_79 = scale_;
            return cs_left_79 / cs_right_79;
        }
    }
}

// M:form.GameForm.OepnWindowFromMainDisp
pls::cs::Ref<SubForm> GameForm::OepnWindowFromMainDisp() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.OepnWindowFromMainDisp", game);
    {
        if (!is_null(require(require(apdat_)->camera)->subPlayer_)) {
            pls::cs::Ref<SubForm> subForm = SubForm::create(30);
            {
                auto cs_target = subForm;
                auto cs_value = require(apdat_)->pData_.get_Item(
                    require(require(require(apdat_)->camera)->subPlayer_)->pData_id_);
                require(cs_target)->playerData_ = cs_value;
            }
            return subForm;
        }
        if (!is_null(require(require(apdat_)->camera)->subSvisor_)) {
            {
                pls::cs::Ref<SubForm> recoveredReturn_48915 = SubForm::create(50);
                return recoveredReturn_48915;
            }
        }
        if (!is_null(require(require(apdat_)->camera)->subTenant_)) {
            pls::cs::Ref<SubForm> subForm2 = pls::cs::Ref<SubForm>{};
            if (require(require(require(apdat_)->camera)->subTenant_)->state_ == 0) {
                if (!require(apdat_)->CheckAlreadyEvent(157)) {
                    require(apdat_)->ExecEvent(157, pls::cs::String{}, IntArray{});
                }
                require(apdat_)->ExecEvent(125, pls::cs::String{}, IntArray{});
                subForm2 = SubForm::create(61);
                require(subForm2)->tenantId_ = require(require(require(apdat_)->camera)->subTenant_)->id_;
                require(subForm2)->tenantDataId_ = -1;
                return subForm2;
            }
            if (require(require(require(apdat_)->camera)->subTenant_)->state_ == 1) {
                subForm2 = SubForm::create(65);
                require(subForm2)->tenantId_ = require(require(require(apdat_)->camera)->subTenant_)->id_;
                require(subForm2)->tenantDataId_ =
                    require(require(require(apdat_)->camera)->subTenant_)->tenantDataId_;
                return subForm2;
            }
        }
        return pls::cs::Ref<SubForm>{};
    }
}

// M:form.GameForm.LogOut
void GameForm::LogOut() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.LogOut", game);
    {
    }
}

// M:form.GameForm.GetHashCode
std::int32_t GameForm::GetHashCode() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.GameForm.GetHashCode", game);
    {
        return PLS_API(([&]() {
            auto cs_receiver = pls::cs::box(pls::cs::static_pointer_cast<MyFormBase>(this));
            return require(cs_receiver)->pls::cs::Object::GetHashCode();
        }()));
    }
}
} // namespace form
}
