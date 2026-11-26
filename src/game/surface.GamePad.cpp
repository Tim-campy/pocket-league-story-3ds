// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "PlsPortGeneratedBootstrap.Source.hpp"
#include "form.FormManager.hpp"
#include "form.SpForm.hpp"
#include "form.SubForm.hpp"
#include "game.UserData.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/java.util.JCalendar.hpp"
#include "generated/java.util.JDate.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.JarInflater.hpp"
#include "generated/kairo.unity.util.Language.hpp"
#include "generated/kairo.unity.util.Property.hpp"
#include "kairo.unity.ad.AdMobView.hpp"
#include "kairo.unity.native.KairoPlugin.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.surface.SurfaceManagerBase.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "kairo.unity.surface.TouchEvent.hpp"
#include "kairo.unity.surface.TouchOption.hpp"
#include "kairo.unity.ui.Canvas.hpp"
#include "kairo.unity.ui.Graphics.hpp"
#include "kairo.unity.ui.IApplication.hpp"
#include "main.AppData.hpp"
#include "surface.GamePad.hpp"
#include "screen_layout.hpp"
#include "surface.GameView.hpp"
#include "surface.SurfaceManager.hpp"
#include "surface.TouchEffect.hpp"
#include "surface.TouchEffectManager.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using ByteArray = pls::cs::Array<std::uint8_t>;
using FloatArray = pls::cs::Array<pls::cs::Single>;
using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace surface {

void GamePad::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    SurfaceBase::trace_edges(visitor);
    pls::cs::trace_value(app_, visitor);
    pls::cs::trace_value(canvas_, visitor);
    pls::cs::trace_value(effMan_, visitor);
    pls::cs::trace_value(font_, visitor);
    pls::cs::trace_value(getEvenlyDivisionArea_tmp_, visitor);
}

static IntArray2 GamePad_COMPONENTS_storage{};

static pls::cs::Ref<kl_java_util::JCalendar> GamePad_drawWatch_calendar_storage{};

static pls::cs::Int64 GamePad_drawWatch_rangeMax_storage{};

static pls::cs::Int64 GamePad_drawWatch_rangeMin_storage{};

static StringArray GamePad_FILENAMES_storage{};

static IntArray GamePad_IMAGE_WIDTH_storage{};

static pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> GamePad_images__storage{};

static pls::cs::Ref<GamePad> GamePad_instance__storage{};

static pls::cs::Int32 GamePad_SIZE_FULL_storage{};

static pls::cs::Int32 GamePad_SIZE_PLAIN_storage{};

static pls::cs::Int32 GamePad_SIZE_PLAIN_MIN_storage{};

static IntArray2 GamePad_TEXTURES_storage{};

static bool GamePad_versionVisible__storage{};

static StringArray GamePad_WEB_NAMES_storage{};

static PLS_NOINLINE void cs_init_792a6372766eb19f_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(GamePad_COMPONENTS_storage, visitor);
        pls::cs::trace_value(GamePad_drawWatch_calendar_storage, visitor);
        pls::cs::trace_value(GamePad_drawWatch_rangeMax_storage, visitor);
        pls::cs::trace_value(GamePad_drawWatch_rangeMin_storage, visitor);
        pls::cs::trace_value(GamePad_FILENAMES_storage, visitor);
        pls::cs::trace_value(GamePad_IMAGE_WIDTH_storage, visitor);
        pls::cs::trace_value(GamePad_images__storage, visitor);
        pls::cs::trace_value(GamePad_instance__storage, visitor);
        pls::cs::trace_value(GamePad_SIZE_FULL_storage, visitor);
        pls::cs::trace_value(GamePad_SIZE_PLAIN_storage, visitor);
        pls::cs::trace_value(GamePad_SIZE_PLAIN_MIN_storage, visitor);
        pls::cs::trace_value(GamePad_TEXTURES_storage, visitor);
        pls::cs::trace_value(GamePad_versionVisible__storage, visitor);
        pls::cs::trace_value(GamePad_WEB_NAMES_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("surface.GamePad", flag, []() {
        GamePad_FILENAMES_storage =
            pls::cs::evaluate_type_initializer_field("F:surface.GamePad.FILENAMES", [&]() {
                return StringArray::from(
                    {literal(u"keypad01.png"), literal(u"keypad02.png"), literal(u"battery.png")});
            });
        GamePad_IMAGE_WIDTH_storage = pls::cs::evaluate_type_initializer_field(
            "F:surface.GamePad.IMAGE_WIDTH", [&]() { return IntArray::from({512, 512, 128}); });
        GamePad_TEXTURES_storage =
            pls::cs::evaluate_type_initializer_field("F:surface.GamePad.TEXTURES", [&]() {
                return IntArray2::from({IntArray::from({0, 0, 0, 0, 0, 320, 160}),
                                        IntArray::from({1, 0, 0, 0, 0, 320, 65}),
                                        IntArray::from({1, 0, 0, 0, 67, 320, 50}),
                                        IntArray::from({1, 0, 0, 0, 118, 320, 90}),
                                        IntArray::from({0, 0, 0, 1, 161, 73, 37}),
                                        IntArray::from({0, -5, -7, 75, 161, 81, 47}),
                                        IntArray::from({0, -1, 1, 237, 161, 73, 34}),
                                        IntArray::from({0, 0, 0, 0, 198, 75, 20}),
                                        IntArray::from({0, -5, -2, 320, 230, 82, 22}),
                                        IntArray::from({0, -1, 0, 237, 196, 73, 17}),
                                        IntArray::from({0, 0, 0, 322, 1, 109, 57}),
                                        IntArray::from({0, 0, 0, 322, 59, 109, 57}),
                                        IntArray::from({0, 0, 0, 322, 117, 56, 109}),
                                        IntArray::from({0, 0, 0, 379, 117, 56, 109}),
                                        IntArray::from({0, 0, 0, 157, 161, 78, 78}),
                                        IntArray::from({0, 0, 0, 432, 13, 21, 19}),
                                        IntArray::from({0, 0, 0, 454, 13, 20, 19}),
                                        IntArray::from({0, 0, 0, 432, 0, 52, 12}),
                                        IntArray::from({0, 0, 0, 432, 53, 52, 12}),
                                        IntArray::from({0, 0, 0, 432, 65, 22, 12}),
                                        IntArray::from({0, 0, 0, 453, 65, 22, 12}),
                                        IntArray::from({1, -1, 0, 320, 0, 85, 46}),
                                        IntArray::from({1, 1, 0, 320, 46, 85, 46}),
                                        IntArray::from({2, 0, 0, 106, 1, 10, 5}),
                                        IntArray::from({2, 0, 0, 106, 7, 10, 5}),
                                        IntArray::from({2, 0, 0, 2, 1, 8, 10}),
                                        IntArray::from({2, 0, 0, 12, 1, 8, 10}),
                                        IntArray::from({2, 0, 0, 22, 1, 8, 10}),
                                        IntArray::from({2, 0, 0, 32, 1, 8, 10}),
                                        IntArray::from({2, 0, 0, 42, 1, 8, 10}),
                                        IntArray::from({2, 0, 0, 52, 1, 8, 10}),
                                        IntArray::from({2, 0, 0, 62, 1, 8, 10}),
                                        IntArray::from({2, 0, 0, 72, 1, 8, 10}),
                                        IntArray::from({2, 0, 0, 82, 1, 8, 10}),
                                        IntArray::from({2, 0, 0, 92, 1, 8, 10}),
                                        IntArray::from({2, 0, 0, 102, 1, 3, 10}),
                                        IntArray::from({2, 0, 0, 0, 15, 21, 11}),
                                        IntArray::from({2, 0, 0, 21, 15, 21, 11}),
                                        IntArray::from({2, 0, 0, 42, 15, 21, 11}),
                                        IntArray::from({2, 0, 0, 63, 15, 21, 11}),
                                        IntArray::from({2, 0, 0, 84, 15, 21, 11}),
                                        IntArray::from({2, 0, 0, 0, 27, 21, 11}),
                                        IntArray::from({2, 0, 0, 21, 27, 21, 11}),
                                        IntArray::from({2, 0, 0, 42, 27, 21, 11}),
                                        IntArray::from({2, 0, 0, 63, 27, 21, 11}),
                                        IntArray::from({2, 0, 0, 84, 27, 21, 11}),
                                        IntArray::from({2, 0, 0, 0, 39, 21, 11}),
                                        IntArray::from({2, 0, 0, 21, 39, 21, 11}),
                                        IntArray::from({2, 0, 0, 42, 39, 21, 11}),
                                        IntArray::from({2, 0, 0, 63, 39, 21, 11}),
                                        IntArray::from({2, 0, 0, 84, 39, 21, 11})});
            });
        GamePad_COMPONENTS_storage =
            pls::cs::evaluate_type_initializer_field("F:surface.GamePad.COMPONENTS", [&]() {
                return IntArray2::from({IntArray::from({10, -7, 10, 10, 4, 5, 6}),
                                        IntArray::from({-6, 10, 10, 10, 4, 5, 6}),
                                        IntArray::from({10, -7, 10, 10, 4, 5, 6}),
                                        IntArray::from({-6, 10, 10, 10, 4, 5, 6}),
                                        IntArray::from({10, 10, 10, 10, 4, 5, 6}),
                                        IntArray::from({10, -7, 10, 10, 4, 5, 6}),
                                        IntArray::from({25, 29, 0, -9, 10, 10, -1}),
                                        IntArray::from({27, 27, -5, 20, 11, 11, -1}),
                                        IntArray::from({30, -8, 27, 27, 12, 12, -1}),
                                        IntArray::from({-7, 30, 25, 26, 13, 13, -1}),
                                        IntArray::from({-16, -15, -16, -15, 14, 14, -1}),
                                        IntArray::from({1, 1, 0, 0, 7, 8, 9}),
                                        IntArray::from({1, 1, 0, 0, 7, 8, 9}),
                                        IntArray::from({1, 1, 0, 0, 7, 8, 9}),
                                        IntArray::from({1, 1, 0, 0, 7, 8, 9}),
                                        IntArray::from({1, 1, 0, 0, 7, 8, 9}),
                                        IntArray::from({1, 1, 0, 0, 7, 8, 9}),
                                        IntArray::from({1, 1, 0, 0, 7, 8, 9}),
                                        IntArray::from({1, 1, 0, 0, 7, 8, 9}),
                                        IntArray::from({1, 1, 0, 0, 7, 8, 9}),
                                        IntArray::from({1, 1, 0, 0, 7, 8, 9}),
                                        IntArray::from({10, 10, 10, 10, 7, 8, 9}),
                                        IntArray::from({10, 10, 10, 10, 7, 8, 9})});
            });
        GamePad_SIZE_FULL_storage =
            pls::cs::evaluate_type_initializer_field("F:surface.GamePad.SIZE_FULL", [&]() { return 160; });
        GamePad_SIZE_PLAIN_storage =
            pls::cs::evaluate_type_initializer_field("F:surface.GamePad.SIZE_PLAIN", [&]() { return 65; });
        GamePad_SIZE_PLAIN_MIN_storage = pls::cs::evaluate_type_initializer_field(
            "F:surface.GamePad.SIZE_PLAIN_MIN", [&]() { return 40; });
        GamePad_WEB_NAMES_storage =
            pls::cs::evaluate_type_initializer_field("F:surface.GamePad.WEB_NAMES", [&]() {
                return StringArray::from({literal(u"ｻｲﾄ"), literal(u"site"), literal(u"web")});
            });
        GamePad_versionVisible__storage = pls::cs::evaluate_type_initializer_field(
            "F:surface.GamePad.versionVisible_", [&]() { return true; });
    });
}

void GamePad::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_792a6372766eb19f_slow(flag);
}

IntArray2& GamePad::COMPONENTS() {
    GamePad::ensure_initialized();
    return GamePad_COMPONENTS_storage;
}

pls::cs::Ref<kl_java_util::JCalendar>& GamePad::drawWatch_calendar() {
    GamePad::ensure_initialized();
    return GamePad_drawWatch_calendar_storage;
}

pls::cs::Int64& GamePad::drawWatch_rangeMax() {
    GamePad::ensure_initialized();
    return GamePad_drawWatch_rangeMax_storage;
}

pls::cs::Int64& GamePad::drawWatch_rangeMin() {
    GamePad::ensure_initialized();
    return GamePad_drawWatch_rangeMin_storage;
}

StringArray& GamePad::FILENAMES() {
    GamePad::ensure_initialized();
    return GamePad_FILENAMES_storage;
}

IntArray& GamePad::IMAGE_WIDTH() {
    GamePad::ensure_initialized();
    return GamePad_IMAGE_WIDTH_storage;
}

pls::cs::Array<pls::cs::Ref<pls::kairo::Image>>& GamePad::images_() {
    GamePad::ensure_initialized();
    return GamePad_images__storage;
}

pls::cs::Ref<GamePad>& GamePad::instance_() {
    GamePad::ensure_initialized();
    return GamePad_instance__storage;
}

pls::cs::Int32& GamePad::SIZE_FULL() {
    GamePad::ensure_initialized();
    return GamePad_SIZE_FULL_storage;
}

pls::cs::Int32& GamePad::SIZE_PLAIN() {
    GamePad::ensure_initialized();
    return GamePad_SIZE_PLAIN_storage;
}

pls::cs::Int32& GamePad::SIZE_PLAIN_MIN() {
    GamePad::ensure_initialized();
    return GamePad_SIZE_PLAIN_MIN_storage;
}

IntArray2& GamePad::TEXTURES() {
    GamePad::ensure_initialized();
    return GamePad_TEXTURES_storage;
}

bool& GamePad::versionVisible_() {
    GamePad::ensure_initialized();
    return GamePad_versionVisible__storage;
}

StringArray& GamePad::WEB_NAMES() {
    GamePad::ensure_initialized();
    return GamePad_WEB_NAMES_storage;
}

void GamePad::create_init(pls::cs::Ref<GamePad> self) {
    GamePad::ensure_initialized();
    self->optionPageMax_ = 2;
    self->getEvenlyDivisionArea_tmp_ = FloatArray::make(3);
    SurfaceBase::create_init(pls::cs::static_pointer_cast<SurfaceBase>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GamePad.#ctor", game);
    {
        self->app_ = PLS_API(pls::kairo::IApplication::GetCurrentApp());
        self->canvas_ = PLS_API(pls::kairo::Canvas::GetInstance());
        self->effMan_ = TouchEffectManager::GetInstance();
        pls::cs::Single scaleRatio = PLS_API(pls::cs::Single(require(self->app_)->GetScaleRatio(true)));
        pls::cs::Single num = 240.0f * scaleRatio / 100.0f;
        pls::cs::Single num2 = 320.0f;
        self->SetScaleRatio(num * 100.0f / num2);
        self->font_ = pls::cs::make_ref<pls::kairo::Font>();
        PLS_API(require(self->font_)->SetSize(14, true));
        self->mode_ = 1;
        pls::cs::Int32 num3 = PLS_API(kl_lang::JInteger::ParseInt(
            kl_lang::StringEx::SubstringJ(kairo::unity::native::KairoPlugin::GetReleaseNumber(), 0, 1)));
        if (num3 == 3) {
            GamePad::COMPONENTS()[8][0] = 0;
            GamePad::COMPONENTS()[9][1] = 0;
        }
    }
}

// M:surface.GamePad.#ctor
pls::cs::Ref<GamePad> GamePad::create() {
    GamePad::ensure_initialized();
    auto self = pls::cs::make_ref<GamePad>();
    GamePad::create_init(self);
    return self;
}

// M:surface.GamePad.Load(kairo.unity.util.JarInflater)
void GamePad::Load(pls::cs::Ref<kl_unity_util::JarInflater> jar) {
    GamePad::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GamePad.Load(kairo.unity.util.JarInflater)", game);
    {
        try {
            GamePad::images_() =
                pls::cs::Array<pls::cs::Ref<pls::kairo::Image>>::make(GamePad::FILENAMES().length());
            for (pls::cs::Int32 i = 0; i < GamePad::images_().length(); ++i) {
                if (PLS_API(([&]() -> pls::cs::Int64 {
                        pls::cs::String cs_arg0 = GamePad::FILENAMES()[i];
                        return require(jar)->GetSize(cs_arg0);
                    }())) != pls::cs::cast_integral<pls::cs::Int64>(-1)) {
                    {
                        auto cs_target = GamePad::images_();
                        auto cs_index = i;
                        auto cs_value =
                            PLS_API(pls::kairo::Image::Load(PLS_API(([&]() -> ByteArray {
                                                                pls::cs::String cs_arg0 =
                                                                    GamePad::FILENAMES()[i];
                                                                return require(jar)->GetData(cs_arg0);
                                                            }())),
                                                            static_cast<pls::kairo::Image::Format>(-1),
                                                            static_cast<pls::kairo::Image::Filter>(-1)));
                        cs_target.set_Item(cs_index, cs_value);
                    }
                }
            }
            pls::cs::Int32 width = PLS_API(require(GamePad::images_().get_Item(0))->GetWidth());
            if (width != 384 && width != 512 && width != 576 && width != 768) {
                GamePad::IMAGE_WIDTH()[0] = 484;
                GamePad::IMAGE_WIDTH()[1] = 405;
            }
        } catch (const pls::cs::Exception& cs_caught_28) {
            pls::cs::capture_exception(cs_caught_28);
            {
            }
        }
    }
}

// M:surface.GamePad.GetInstance
pls::cs::Ref<GamePad> GamePad::GetInstance() {
    GamePad::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GamePad.GetInstance", game);
    {
        if (is_null(GamePad::instance_())) {
            GamePad::instance_() = GamePad::create();
        }
        return GamePad::instance_();
    }
}

// M:surface.GamePad.GetMode
pls::cs::Int32 GamePad::GetMode() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GamePad.GetMode", game);
    {
        return mode_;
    }
}

// M:surface.GamePad.SetMode(System.Int32)
void GamePad::SetMode(pls::cs::Int32 mode) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GamePad.SetMode(System.Int32)", game);
    {
        mode_ = mode;
    }
}

// M:surface.GamePad.IsGameSurface
bool GamePad::IsGameSurface() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GamePad.IsGameSurface", game);
    {
        return false;
    }
}

// M:surface.GamePad.AddTouch(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32)
void GamePad::AddTouch(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y,
                       pls::cs::Int32 id) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GamePad.AddTouch(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32)", game);
    {
        AddTouch(g, x, y, id, 0, true);
    }
}

// M:surface.GamePad.AddTouch(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32,System.Int32)
void GamePad::AddTouch(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y,
                       pls::cs::Int32 id, pls::cs::Int32 value) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GamePad.AddTouch(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32,System.Int32)",
        game);
    {
        AddTouch(g, x, y, id, value, true);
    }
}

// M:surface.GamePad.AddTouch(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32,System.Int32,System.Boolean)
void GamePad::AddTouch(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y,
                       pls::cs::Int32 id, pls::cs::Int32 value, bool enable) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GamePad.AddTouch(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32,System.Int32,System.Boolean)",
        game);
    {
        main::AppData::ensure_initialized();

        IntArray array = GamePad::COMPONENTS()[id];
        IntArray array2 = GamePad::TEXTURES()[array[4]];
        pls::cs::Int32 imgId = array[4];
        pls::cs::Int32 num = 0;
        pls::cs::Int32 num2 = 0;
        if (!is_null(g)) {
            num = PLS_API(require(g)->GetOriginX());
            num2 = PLS_API(require(g)->GetOriginY());
            x += pls::cs::Single(num);
            y += pls::cs::Single(num2);
            PLS_API(require(g)->SetOrigin(0, 0));
        }
        {
            auto cs_flow_191 = pls::cs::run_finally(
                [&]() -> pls::cs::Flow<void> {
                    {
                        if (!is_null(g)) {
                            if (DrawSoftLabel(g, x, y, id, value, enable)) {
                                return pls::cs::flow_return();
                            }
                            switch (id) {
                            case 6:
                            case 7:
                            case 8:
                            case 9:
                            case 10: {
                                if (enable && CheckFirstTouch(id) && array[5] != -1) {
                                    DrawImage(g, x, y, array[5]);
                                }
                                break;
                            }
                            default: {
                                if (enable) {
                                    DrawImage(g, x, y, imgId);
                                    if (CheckFirstTouch(id) && array[5] != -1) {
                                        DrawImage(g, x, y, array[5]);
                                    }
                                    pls::cs::String text = pls::cs::String{};
                                    if (id == 0 || id == 5) {
                                        text = PLS_API(require(canvas_)->GetSoftLabelL());
                                    } else if (id == 1) {
                                        text = PLS_API(require(canvas_)->GetSoftLabelR());
                                    } else if (id == 2) {
                                        text = PLS_API(require(canvas_)->GetSoftLabel(2));
                                    } else if (id == 3) {
                                        text = PLS_API(require(canvas_)->GetSoftLabel(3));
                                    } else if (id == 11) {
                                        text = literal(u"debug");
                                    } else if (id == 12) {
                                        text = literal(u"skip");
                                    } else if (id == 13) {
                                        text = literal(u"dialog");
                                    } else if (id == 14) {
                                        text = literal(u"hittest");
                                    } else if (id == 15) {
                                        text = literal(u"slow");
                                    } else if (id == 16) {
                                        text = pls::cs::String::concat(
                                            pls::cs::String::concat(integer_string(optionPage_ + 1),
                                                                    literal(u" / ")),
                                            integer_string(optionPageMax_));
                                    } else if (id == 17) {
                                        text = literal(u"layout");
                                    } else if (id == 18) {
                                        text =
                                            ((PLS_API(require(form::FormManager::GetInstance())->IsPause()))
                                                 ? literal(u"play")
                                                 : literal(u"pause"));
                                    } else if (id == 19) {
                                        text = literal(u"captcha");
                                    } else if (id == 20) {
                                        text = literal(u"hide");
                                    } else if (id == 4) {
                                        text = PLS_API(require(canvas_)->GetSoftLabel(2));
                                        if (is_null(text)) {
                                            text = PLS_API(require(canvas_)->GetSoftLabel(3));
                                        }
                                    }
                                    if (id == 21) {
                                        DrawImage(g, x + 26.0f, y + 4.0f, 19);
                                    } else if (id == 22) {
                                        DrawImage(g, x + 26.0f, y + 4.0f, 20);
                                    }
                                    if (!is_null(text)) {
                                        pls::cs::Single num3 =
                                            x + pls::cs::Single((array2[5] + array2[1])) / 2.0f - 1.0f;
                                        pls::cs::Single num4 =
                                            y + pls::cs::Single((array2[6] + array2[2])) / 2.0f - 1.0f;
                                        if (mode_ == 2 && PLS_API(pls::platform::has_separate_screens())) {
                                            num3 = pls::cs::to_int32(num3);
                                            num4 = pls::cs::to_int32(num4);
                                        }
                                        if (id == 5) {
                                            bool linearFilterEnable =
                                                kairo::unity::ui::Canvas::IsLinearFilterEnable(
                                                    require(canvas_));
                                            kairo::unity::ui::Canvas::SetLinearFilterEnable(require(canvas_),
                                                                                            true);
                                            DrawImage(g, num3 - 27.0f, num4 - 10.0f,
                                                      ((PLS_API(kl_lang::JSystem::CurrentTimeMillis()) %
                                                            pls::cs::Int64(800) <
                                                        pls::cs::cast_integral<pls::cs::Int64>(400)))
                                                          ? 15
                                                          : 16);
                                            kairo::unity::ui::Canvas::SetLinearFilterEnable(
                                                require(canvas_), linearFilterEnable);
                                            num3 += 12.0f;
                                        }
                                        if (array[4] == 7) {
                                            pls::cs::Ref<pls::kairo::Font> font = PLS_API(
                                                require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{}));
                                            PLS_API(require(font)->SetSize(8, true));
                                            PLS_API(require(g)->PushFont(font));
                                        }
                                        PLS_API(require(g)->SetColor(0, 0, 0));
                                        {
                                            pls::cs::String cs_arg0 =
                                                PLS_API(kl_unity_util::Language::TranslateSoftLabel(text));
                                            kairo::unity::ui::Graphics::DrawText(
                                                require(g), cs_arg0, num3 - 30.0f, num4, 60.0f, 34);
                                        }
                                        if (array[4] == 7) {
                                            PLS_API(require(g)->PopFont());
                                        }
                                    }
                                } else {
                                    if (id != 0 && id != 1 && id != 2 && id != 3 && id == 4 && id != 21 &&
                                        id != 22 && mode_ == 0) {
                                        break;
                                    }
                                    bool flag = array[6] != -1;
                                    if (flag) {
                                        if (id == 2) {
                                            flag = !is_null(PLS_API(require(canvas_)->GetSoftLabel(2)));
                                        } else if (id == 3) {
                                            flag = !is_null(PLS_API(require(canvas_)->GetSoftLabel(3)));
                                        } else if (id == 4) {
                                            flag = (!is_null(PLS_API(require(canvas_)->GetSoftLabel(2))) ||
                                                    !is_null(PLS_API(require(canvas_)->GetSoftLabel(3))));
                                        }
                                    }
                                    if (flag) {
                                        DrawImage(g, x, y, array[6]);
                                    }
                                }
                                break;
                            }
                            }
                        }
                        if (enable && array[5] != -1) {
                            array2 = GamePad::TEXTURES()[array[5]];
                            auto cs_left_269 = ([&]() -> pls::cs::Int32 {
                                auto cs_left_269 = ([&]() -> pls::cs::Int32 {
                                    auto cs_left_269 = array2[5];
                                    auto cs_right_269 = array[0];
                                    return cs_left_269 + cs_right_269;
                                }());
                                auto cs_right_269 = array[1];
                                return cs_left_269 + cs_right_269;
                            }());
                            auto cs_right_269 = array2[1];
                            pls::cs::Single num5 = cs_left_269 - cs_right_269;
                            auto cs_left_270 = ([&]() -> pls::cs::Int32 {
                                auto cs_left_270 = ([&]() -> pls::cs::Int32 {
                                    auto cs_left_270 = array2[6];
                                    auto cs_right_270 = array[2];
                                    return cs_left_270 + cs_right_270;
                                }());
                                auto cs_right_270 = array[3];
                                return cs_left_270 + cs_right_270;
                            }());
                            auto cs_right_270 = array2[2];
                            pls::cs::Single num6 = cs_left_270 - cs_right_270;
                            auto cs_left_271 = x - pls::cs::Single(array[0]);
                            auto cs_right_271 = pls::cs::Single(array2[1]);
                            pls::cs::Single num7 = cs_left_271 + cs_right_271;
                            auto cs_left_272 = y - pls::cs::Single(array[2]);
                            auto cs_right_272 = pls::cs::Single(array2[2]);
                            pls::cs::Single num8 = cs_left_272 + cs_right_272;
                            pls::cs::Ref<kairo::unity::surface::TouchOption> touchOption =
                                pls::cs::Ref<kairo::unity::surface::TouchOption>{};
                            if (id == 6 || id == 7 || id == 8 || id == 9 || id == 13) {
                                touchOption = kairo::unity::surface::TouchOption::CreateInt(1);
                            }
                            if (id == 12 && mode_ == 0) {
                                touchOption = kairo::unity::surface::TouchOption::CreateInt(1);
                            }
                            if (is_null(touchOption)) {
                                touchOption = kairo::unity::surface::TouchOption::Create();
                            }
                            if (mode_ != 2) {
                                require(touchOption)->Flag(require(touchOption)->flag | 2);
                            }
                            pls::cs::String softLabelR = PLS_API(require(canvas_)->GetSoftLabelR());
                            pls::cs::Ref<pls::kairo::FormBase> topForm =
                                PLS_API(require(form::FormManager::GetInstance())->GetTopForm());
                            if (mode_ == 2 && id == 1 &&
                                PLS_API(string_equals(softLabelR, main::AppData::softLabels_()[2])) &&
                                (PLS_API(require(topForm)->GetId()) == 4 ||
                                 PLS_API(require(topForm)->GetId()) == 3)) {
                                num7 -= 10.0f;
                                num5 += 10.0f;
                                num8 -= 30.0f;
                                num6 += 30.0f;
                            }
                            if (id == 1 &&
                                PLS_API(string_equals(softLabelR, main::AppData::softLabels_()[2])) &&
                                PLS_API(require(topForm)->GetId()) == 5) {
                                num7 += 30.0f;
                                num5 -= 30.0f;
                            }
                            if (mode_ == 2 && PLS_API(pls::platform::has_separate_screens()) &&
                                (id == 0 || id == 1 || id == 5)) {
                                const auto button = GamePad::TEXTURES()[imgId];
                                num7 = x + pls::cs::Single(button[1]);
                                num8 = y + pls::cs::Single(button[2]);
                                num5 = button[5];
                                num6 = button[6];
                            }
                            pls::cs::Ref<kairo::unity::surface::TouchComponent> touchComponent =
                                AddTouchComponent(id, pls::cs::to_int32(num7), pls::cs::to_int32(num8),
                                                  pls::cs::to_int32(num5), pls::cs::to_int32(num6), value,
                                                  touchOption);
                            if (!is_null(touchComponent)) {
                                require(touchComponent)->SetPaint(pls::cs::to_int32(x), pls::cs::to_int32(y));
                            }
                        }
                    }
                    return {};
                },
                [&]() {
                    if (!is_null(g)) {
                        PLS_API(require(g)->SetOrigin(num, num2));
                    }
                });
            if (cs_flow_191.returned())
                return;
        }
    }
}

// M:surface.GamePad.OnTouchEvent(kairo.unity.surface.TouchEvent)
void GamePad::OnTouchEvent(pls::cs::Ref<kairo::unity::surface::TouchEvent> evt) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GamePad.OnTouchEvent(kairo.unity.surface.TouchEvent)",
                     game);
    {
        kl_cfg::Config::ensure_initialized();

        pls::cs::Ref<kairo::unity::surface::TouchComponent> component = require(evt)->component;
        pls::cs::Ref<form::FormManager> instance = form::FormManager::GetInstance();
        pls::cs::Int32 id = require(require(evt)->component)->id;
        pls::cs::Int32 type = require(evt)->type;
        switch (id) {
        case 6:
        case 7:
        case 8:
        case 9: {
            if (type == 0) {
                PLS_API(require(canvas_)->KeyDown(require(component)->value, true));
            }
            if (type == 6 || type == 10) {
                PLS_API(require(canvas_)->KeyUp(require(component)->value));
            }
            break;
        }
        case 12: {
            if (type == 0 ||
                (type == 13 && !PLS_API(require(canvas_)->CheckKeyState(require(component)->value)) &&
                 CheckFirstTouch(id))) {
                PLS_API(require(canvas_)->KeyDown(require(component)->value, true));
            }
            if (type == 6 || type == 10) {
                PLS_API(require(canvas_)->KeyUp(require(component)->value));
            }
            break;
        }
        case 13: {
            if (type == 0 ||
                (type == 13 && !PLS_API(require(canvas_)->CheckKeyState(require(component)->value)) &&
                 CheckFirstTouch(id))) {
                PLS_API(require(canvas_)->KeyDown(require(component)->value, true));
            }
            if (type == 6 || type == 10) {
                PLS_API(require(canvas_)->KeyUp(require(component)->value));
            }
            break;
        }
        case 14: {
            if (type == 5) {
                visibleTouchRange_ = (visibleTouchRange_ ? false : true);
            }
            break;
        }
        case 15: {
            if (type == 0 ||
                (type == 13 && !PLS_API(require(canvas_)->CheckKeyState(require(component)->value)) &&
                 CheckFirstTouch(id))) {
                PLS_API(require(canvas_)->KeyDown(require(component)->value, true));
            }
            if (type == 6 || type == 10) {
                PLS_API(require(canvas_)->KeyUp(require(component)->value));
            }
            break;
        }
        case 21:
        case 22: {
            if (kl_cfg::Config::DEBUG() && !kl_cfg::Config::PTW()) {
                if (type == 0) {
                    padTouchBegin_ = PLS_API(kl_lang::JSystem::CurrentTimeMillis());
                }
                if (type == 13 && (padTouchBegin_ > pls::cs::cast_integral<pls::cs::Int64>(0)) &&
                    CheckFirstTouch(id) && (([&]() -> pls::cs::Int64 {
                                                auto cs_left = PLS_API(kl_lang::JSystem::CurrentTimeMillis());
                                                auto cs_right = padTouchBegin_;
                                                return cs_left - cs_right;
                                            }()) > pls::cs::cast_integral<pls::cs::Int64>(1000))) {
                    padTouchBegin_ = 0ll;
                    hideDebugButton_ = !hideDebugButton_;
                    ClearTouchComponent();
                    break;
                }
                if (type == 6) {
                    padTouchBegin_ = 0ll;
                }
            }
            if (type == 5) {
                pls::cs::Ref<main::AppData> instance2 = main::AppData::GetInstance();
                pls::cs::Int32 num = ((id == 21) ? 0 : 1);
                SetMode(num);
                require(require(instance2)->sysSave_)->ints[15] = num;
                try {
                    require(instance2)->SaveSystem();
                } catch (const pls::cs::Exception& cs_caught_193) {
                    pls::cs::capture_exception(cs_caught_193);
                    {
                    }
                }
            }
            break;
        }
        case 5: {
            {
                if (type == 5) {
                    PLS_API(require(canvas_)->KeyClick(require(component)->value));
                }
                pls::cs::Ref<pls::kairo::FormBase> topForm = PLS_API(require(instance)->GetTopForm());
                if (type == 0) {
                    webTouchBegin_ = PLS_API(kl_lang::JSystem::CurrentTimeMillis());
                }
                if (type == 13 && (webTouchBegin_ > pls::cs::cast_integral<pls::cs::Int64>(0)) &&
                    CheckFirstTouch(id) && PLS_API(require(topForm)->GetId()) == 1 &&
                    (([&]() -> pls::cs::Int64 {
                         auto cs_left = PLS_API(kl_lang::JSystem::CurrentTimeMillis());
                         auto cs_right = webTouchBegin_;
                         return cs_left - cs_right;
                     }()) > pls::cs::cast_integral<pls::cs::Int64>(5000))) {
                    webTouchBegin_ = 0ll;
                    PLS_API(([&]() -> bool {
                        pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = form::SpForm::create();
                        return require(instance)->Push(cs_arg0);
                    }()));
                }
                if (type == 10 || type == 6) {
                    webTouchBegin_ = 0ll;
                }
                break;
            }
        }
        case 16: {
            if (type == 5) {
                optionPage_ = (optionPage_ + 1) % optionPageMax_;
            }
            break;
        }
        case 17: {
            if (type == 5) {
                layoutMode_ = (layoutMode_ + 1) % 2;
                SetLayoutMode(layoutMode_);
            }
            break;
        }
        case 18: {
            if (type == 0) {
                PLS_API(([&]() -> void {
                    bool cs_arg0 = !PLS_API(require(instance)->IsPause());
                    require(instance)->SetPause(cs_arg0);
                }()));
                require(TouchEffectManager::GetInstance())->Clear();
            }
            break;
        }
        case 19: {
            if (type == 5) {
                PLS_API(([&]() -> void {
                    pls::cs::Ref<SurfaceBase> cs_arg0 = GameView::GetInstance();
                    PlsPortGeneratedBootstrap::Source::Capture(require(instance), cs_arg0, StringArray{},
                                                               pls::cs::Delegate<void(StringArray)>{}, false);
                }()));
            }
            break;
        }
        case 20: {
            if (type == 5) {
                hide_ = !hide_;
            }
            break;
        }
        default: {
            if (type == 5) {
                PLS_API(require(canvas_)->KeyClick(require(component)->value));
            }
            break;
        }
        }
        if (type == 5 && (require(component)->paintX != 2147483647 /* Int32.MaxValue */) &&
            GamePad::COMPONENTS()[id][5] != -1 && id != 21 && id != 22) {
            IntArray array = GamePad::TEXTURES()[GamePad::COMPONENTS()[id][5]];
            pls::cs::Ref<pls::kairo::Image> image = GamePad::images_().get_Item(array[0]);
            auto cs_left_284 = pls::cs::Single(PLS_API(require(image)->GetWidth()));
            auto cs_right_284 = pls::cs::Single(GamePad::IMAGE_WIDTH()[array[0]]);
            pls::cs::Single num2 = cs_left_284 / cs_right_284;
            pls::cs::Array<pls::cs::Ref<pls::cs::Object>> arg =
                pls::cs::Array<pls::cs::Ref<pls::cs::Object>>::from(
                    {pls::cs::box(GamePad::images_().get_Item(array[0])),
                     pls::cs::box(
                         FloatArray::from({array[5], array[6], pls::cs::Single(array[3]) * num2,
                                           pls::cs::Single(array[4]) * num2, pls::cs::Single(array[5]) * num2,
                                           pls::cs::Single(array[6]) * num2}))});
            {
                auto cs_left_285 = require(component)->paintX;
                auto cs_right_285 = array[1];
                pls::cs::Single cs_arg2 = pls::cs::Int32(cs_left_285 + cs_right_285);
                auto cs_left_286 = require(component)->paintY;
                auto cs_right_286 = array[2];
                pls::cs::Single cs_arg3 = pls::cs::Int32(cs_left_286 + cs_right_286);
                require(effMan_)->AddEffect(this, 0, cs_arg2, cs_arg3, component, pls::cs::box(arg));
            }
        }
    }
}

// M:surface.GamePad.Draw(kairo.unity.ui.Graphics)
void GamePad::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GamePad.Draw(kairo.unity.ui.Graphics)", game);
    {
        SurfaceManager::ensure_initialized();
        kl_cfg::Config::ensure_initialized();

        pls::cs::Ref<SurfaceBase> view_ = SurfaceManager::view_();
        pls::cs::Ref<form::FormManager> instance = form::FormManager::GetInstance();
        pls::cs::Ref<pls::kairo::Font> font = PLS_API(require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{}));
        pls::cs::run_finally(
            [&]() {
                try {
                    PLS_API(pls::kairo::Font::PushLocalizeSetting(false));
                    PLS_API(([&]() -> void {
                        pls::cs::Int32 cs_arg0 = GetX();
                        pls::cs::Int32 cs_arg1 = GetY();
                        pls::cs::Int32 cs_arg2 = GetWidth();
                        pls::cs::Int32 cs_arg3 = GetHeight();
                        require(g)->SetRenderRect(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                    }()));
                    PLS_API(require(g)->Scale(100.0f));
                    PLS_API(require(g)->SetFont(font_));
                    bool flag = true;
                    if (kl_cfg::Config::ADMOB_ENABLE()) {
                        pls::cs::Ref<pls::kairo::Canvas> instance2 =
                            PLS_API(pls::kairo::Canvas::GetInstance());
                        pls::cs::Ref<pls::kairo::IApplication> currentApp =
                            PLS_API(pls::kairo::IApplication::GetCurrentApp());
                        auto cs_left_279 = PLS_API(require(instance2)->GetHeight());
                        auto cs_right_279 = kairo::unity::ad::AdMobView::GetAdHeight();
                        pls::cs::Int32 num = cs_left_279 - cs_right_279;
                        pls::cs::Single scaleRatio =
                            PLS_API(pls::cs::Single(require(currentApp)->GetScaleRatio(false)));
                        pls::cs::Int32 num2 = pls::cs::to_int32((240.0f * scaleRatio / 100.0f));
                        flag = pls::cs::Single((num - num2)) >= ([&]() -> pls::cs::FloatEval {
                                                                    auto cs_left =
                                                                        pls::cs::Single(GamePad::SIZE_FULL());
                                                                    auto cs_right = GetScaleRatio();
                                                                    return cs_left * cs_right;
                                                                }()) /
                                                                    100.0f;
                    }
                    bool flag2 = false;
                    pls::cs::String softLabelL = PLS_API(require(canvas_)->GetSoftLabelL());
                    for (pls::cs::Int32 i = 0; i < GamePad::WEB_NAMES().length(); ++i) {
                        if (kl_lang::StringEx::EqualsIgnoreCase(GamePad::WEB_NAMES()[i], softLabelL)) {
                            flag2 = true;
                            break;
                        }
                    }
                    pls::cs::Int32 num3 = pls::cs::to_int32((([&]() -> pls::cs::FloatEval {
                        auto cs_left = pls::cs::Single((GetWidth() * 100));
                        auto cs_right = GetScaleRatio();
                        return cs_left / cs_right;
                    }())));
                    pls::cs::Int32 num4 = pls::cs::to_int32((([&]() -> pls::cs::FloatEval {
                        auto cs_left = pls::cs::Single((GetHeight() * 100));
                        auto cs_right = GetScaleRatio();
                        return cs_left / cs_right;
                    }())));
                    auto cs_left_280 = require(view_)->GetY();
                    auto cs_right_280 = GetY();
                    pls::cs::Int32 num5 = cs_left_280 - cs_right_280;
                    auto cs_left_281 = ([&]() -> pls::cs::Int32 {
                        auto cs_left_281 = GetY();
                        auto cs_right_281 = GetHeight();
                        return cs_left_281 + cs_right_281;
                    }());
                    auto cs_right_281 = (([&]() -> pls::cs::Int32 {
                        auto cs_left_281 = require(view_)->GetY();
                        auto cs_right_281 = require(view_)->GetHeight();
                        return cs_left_281 + cs_right_281;
                    }()));
                    pls::cs::Int32 num6 = cs_left_281 - cs_right_281;
                    if (num5 > 0) {
                        pls::cs::Int32 num7 = GamePad::TEXTURES()[2][6];
                        if (num7 <= num5) {
                            DrawScaledImage(g, 0.0f, 0.0f, GetWidth(), num5, 2);
                        } else {
                            DrawScaledImage(g, 0.0f, num5 - num7, GetWidth(), num7, 2);
                        }
                    }
                    if (mode_ == 0) {
                        {
                            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                            pls::cs::Single cs_arg2 = pls::cs::Single((GetHeight() - num6)) - 0.5f;
                            pls::cs::Single cs_arg3 = GetWidth();
                            DrawScaledImage(cs_arg0, 0.0f, cs_arg2, cs_arg3, num6, 0);
                        }
                    } else if (mode_ == 1 && num6 > 0) {
                        pls::cs::Int32 num8 = GamePad::TEXTURES()[3][6];
                        pls::cs::Int32 num9 = GetHeight() - num6;
                        if (num8 <= num6) {
                            DrawScaledImage(g, 0.0f, num9 - 1, GetWidth(), num6 + 1, 3);
                        } else {
                            DrawScaledImage(g, 0.0f, num9 - 1, GetWidth(), num8 + 1, 3);
                        }
                    }
                    PLS_API(([&]() -> void {
                        pls::cs::Single cs_arg0 = GetScaleRatio();
                        require(g)->Scale(cs_arg0);
                    }()));
                    num5 = pls::cs::to_int32((pls::cs::Single((num5 * 100)) / GetScaleRatio()));
                    num6 = pls::cs::to_int32((pls::cs::Single((num6 * 100)) / GetScaleRatio()));
                    if (mode_ == 0) {
                        PLS_API(require(g)->SetOrigin(0, num4 - num6));
                        AddTouch(g, 104.0f, 0.0f, 6, 131072);
                        AddTouch(g, 106.0f, 107.0f, 7, 524288);
                        AddTouch(g, 79.0f, 27.0f, 8, 65536);
                        AddTouch(g, 186.0f, 25.0f, 9, 262144);
                        AddTouch(g, 121.0f, 41.0f, 10, 1048576);
                        if (kl_cfg::Config::DEBUG() && !PLS_API(require(instance)->IsPause()) &&
                            !hideDebugButton_ && !PLS_API(require(instance)->IsCapturing())) {
                            if (kl_cfg::Config::DEBUG()) {
                                AddTouch(g, 5.0f, 64.0f, 11, 1);
                            }
                            if (kl_cfg::Config::DEBUG()) {
                                AddTouch(g, 5.0f, 90.0f, 19);
                            }
                            if (kl_cfg::Config::DEBUG()) {
                                AddTouch(g, 243.0f, 110.0f, 12, 16);
                            }
                            if (!kl_cfg::Config::PTW()) {
                                AddTouch(g, 243.0f, 90.0f, 13, 64);
                            }
                            if (!kl_cfg::Config::PTW()) {
                                AddTouch(g, 243.0f, 64.0f, 14);
                            }
                        }
                        if (flag2) {
                            AddTouch(g, 5.0f, 7.0f, 5, 2097152);
                            AddTouch(g, 243.0f, 7.0f, 1, 4194304,
                                     kl_lang::StringEx::Length(PLS_API(require(canvas_)->GetSoftLabelR())) >
                                         0);
                            if (PLS_API(kl_unity_util::Language::Japanese())) {
                                DrawImage(g, 15.0f, 48.0f, 17);
                            } else {
                                DrawImage(g, 15.0f, 48.0f, 18);
                            }
                        } else {
                            AddTouch(g, 5.0f, 7.0f, 0, 2097152,
                                     kl_lang::StringEx::Length(PLS_API(require(canvas_)->GetSoftLabelL())) >
                                         0);
                            AddTouch(g, 243.0f, 7.0f, 1, 4194304,
                                     kl_lang::StringEx::Length(PLS_API(require(canvas_)->GetSoftLabelR())) >
                                         0);
                        }
                        DrawWatch(g, 320.0f, 143.0f);
                        DrawBattery(g, 292.0f, 142.0f);
                        AddTouch(g, 5.0f, num6 - 28, 22);
                        DrawVersion(g);
                    } else if (mode_ == 1) {
                        PLS_API(require(g)->SetOrigin(0, num4 - num6));
                        pls::cs::Int32 num10 = 7;
                        if (kl_cfg::Config::DEBUG()) {
                            num10 = 4;
                        }
                        if (flag2) {
                            AddTouch(g, 5.0f, 7.0f, 5, 2097152);
                            AddTouch(g, 243.0f, 7.0f, 1, 4194304,
                                     kl_lang::StringEx::Length(PLS_API(require(canvas_)->GetSoftLabelR())) >
                                         0);
                            if (PLS_API(kl_unity_util::Language::Japanese())) {
                                DrawImage(g, 15.0f, 48.0f, 17);
                            } else {
                                DrawImage(g, 15.0f, 48.0f, 18);
                            }
                        } else {
                            AddTouch(g, 5.0f, 7.0f, 0, 2097152,
                                     kl_lang::StringEx::Length(PLS_API(require(canvas_)->GetSoftLabelL())) >
                                         0);
                            AddTouch(g, 243.0f, 7.0f, 1, 4194304,
                                     kl_lang::StringEx::Length(PLS_API(require(canvas_)->GetSoftLabelR())) >
                                         0);
                        }
                        if (kl_cfg::Config::DEBUG() && !PLS_API(require(instance)->IsPause()) &&
                            !hideDebugButton_ && !PLS_API(require(instance)->IsCapturing())) {
                            AddTouch(g, 4.0f, num6 - 21, 19);
                            AddTouch(g, 242.0f, num6 - 21, 12, 16);
                        }
                        auto cs_left_282 = ([&]() -> pls::cs::FloatEval {
                            auto cs_left_282 = pls::cs::Single(
                                PLS_API(require(PLS_API(pls::kairo::Canvas::GetInstance()))->GetHeight()));
                            auto cs_right_282 = 240.0f * require(view_)->GetScaleRatio() / 100.0f;
                            return cs_left_282 - cs_right_282;
                        }());
                        auto cs_right_282 = pls::cs::Single((kl_cfg::Config::ADMOB_ENABLE()
                                                                 ? kairo::unity::ad::AdMobView::GetAdHeight()
                                                                 : pls::cs::Int32(0)));
                        pls::cs::Single num11 = cs_left_282 - cs_right_282;
                        if (num11 >= ([&]() -> pls::cs::FloatEval {
                                         auto cs_left = pls::cs::Single(GamePad::SIZE_FULL());
                                         auto cs_right = GetScaleRatio();
                                         return cs_left * cs_right;
                                     }()) /
                                         100.0f) {
                            AddTouch(g, 122.0f, num6 - 28, 21);
                        }
                        DrawVersion(g);
                    } else {
                        if (mode_ == 2) {
                            const bool separateScreens = PLS_API(pls::platform::has_separate_screens());
                            pls::cs::Int32 num12 = separateScreens ? pls::platform::label_bar::x : 0;
                            pls::cs::Int32 num13 = separateScreens
                                                       ? pls::cs::Int32(pls::platform::label_bar::x +
                                                                        pls::platform::label_bar::width - 85)
                                                       : num3 - 85;
                            pls::cs::Int32 num14 =
                                separateScreens ? pls::cs::Int32(pls::platform::label_bar::button_y - 7)
                                                : num4 - 46;
                            if (IsSmallSideView()) {
                                num13 = num3 - 83;
                            } else {
                                DrawImage(g, num12, num14, 21);
                                DrawImage(g, num13, num14, 22);
                            }
                            num12 += 3;
                            num13 += 9;
                            num14 += 7;
                            if (flag2) {
                                AddTouch(g, num12, num14, 5, 2097152);
                                AddTouch(g, num13, num14, 1, 4194304,
                                         kl_lang::StringEx::Length(
                                             PLS_API(require(canvas_)->GetSoftLabelR())) > 0);
                                pls::cs::Int32 num15 = 10;
                                pls::cs::Int32 num16 = -20;
                                if (IsSmallSideView()) {
                                    num15 = -2;
                                    num16 = -6;
                                }
                                if (PLS_API(kl_unity_util::Language::Japanese())) {
                                    DrawImage(g, num12 + num15, num14 + num16, 17);
                                } else {
                                    DrawImage(g, num12 + num15, num14 + num16, 18);
                                }
                            } else {
                                AddTouch(g, num12, num14, 0, 2097152,
                                         kl_lang::StringEx::Length(
                                             PLS_API(require(canvas_)->GetSoftLabelL())) > 0);
                                AddTouch(g, num13, num14, 1, 4194304,
                                         kl_lang::StringEx::Length(
                                             PLS_API(require(canvas_)->GetSoftLabelR())) > 0);
                            }
                            if (kl_cfg::Config::DEBUG() && !PLS_API(require(instance)->IsPause()) &&
                                !PLS_API(require(instance)->IsCapturing())) {
                                AddTouch(g, num13, num14 - 30, 12, 16);
                                AddTouch(g, num12, num14 - 30, 19);
                            }
                            pls::cs::Ref<pls::kairo::FormBase> topForm =
                                PLS_API(require(instance)->GetTopForm());
                            if (PLS_API(require(topForm)->GetId()) == 4 &&
                                require((pls::cs::unbox<pls::cs::Ref<form::SubForm>>(pls::cs::box(topForm))))
                                    ->IsMenu()) {
                                pls::cs::Int32 num17 = 2;
                                pls::cs::Int32 num18 = -19;
                                if (IsSmallSideView()) {
                                    num17 = 24;
                                    num18 = -4;
                                }
                                DrawWatch(g, num3 + num17, num14 + num18);
                                DrawBattery(g, num3 + 2 - 28, num14 - 20);
                            }
                        }
                    }
                } catch (const pls::cs::Exception& cs_caught_192) {
                    pls::cs::capture_exception(cs_caught_192);
                    {
                    }
                }
            },
            [&]() {
                PLS_API(require(g)->Scale(100.0f));
                PLS_API(require(g)->ClearRenderRect());
                PLS_API(pls::kairo::Font::PopLocalizeSetting());
                PLS_API(require(g)->SetFont(font));
            });
    }
}

// M:surface.GamePad.IsSmallSideView
bool GamePad::IsSmallSideView() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GamePad.IsSmallSideView", game);
    {
        return 0.0f < GetSideViewRatio();
    }
}

// M:surface.GamePad.GetSideViewRatio
pls::cs::Single GamePad::GetSideViewRatio() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GamePad.GetSideViewRatio", game);
    {
        pls::cs::Ref<GameView> instance = GameView::GetInstance();
        pls::cs::Single num = pls::cs::Single((require(instance)->GetGameWidth() - 164)) / 240.0f;
        {
            bool recoveredCondition_26283 = GetMode() == 2 && num < 0.9f;
            if (recoveredCondition_26283) {
                return num;
            }
        }
        return 0.0f;
    }
}

// M:surface.GamePad.GetSideSize
pls::cs::Int32 GamePad::GetSideSize() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GamePad.GetSideSize", game);
    {
        pls::cs::Int32 num = 82;
        pls::cs::Single sideViewRatio = GetSideViewRatio();
        if (0.0f < sideViewRatio) {
            num = pls::cs::to_int32((pls::cs::Single(num) * sideViewRatio));
        }
        return num;
    }
}

// M:surface.GamePad.DrawSoftLabel(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32,System.Int32,System.Boolean)
bool GamePad::DrawSoftLabel(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y,
                            pls::cs::Int32 id, pls::cs::Int32 value, bool enable) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GamePad.DrawSoftLabel(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32,System.Int32,System.Boolean)",
        game);
    {
        if (!IsSmallSideView()) {
            return false;
        }
        bool flag = x < pls::cs::Single(require(GameView::GetInstance())->GetGameWidth());
        IntArray array = GamePad::COMPONENTS()[id];
        IntArray array2 = GamePad::TEXTURES()[array[4]];
        pls::cs::Int32 imgId = array[4];
        pls::cs::String text = pls::cs::String{};
        if ((id == 0) || (id == 5)) {
            text = PLS_API(require(canvas_)->GetSoftLabelL());
        } else if ((id == 1)) {
            text = PLS_API(require(canvas_)->GetSoftLabelR());
        } else if ((id == 2)) {
            text = PLS_API(require(canvas_)->GetSoftLabel(2));
        } else if ((id == 3)) {
            text = PLS_API(require(canvas_)->GetSoftLabel(3));
        }
        if (is_null(text)) {
            return false;
        }
        pls::cs::Single num = x;
        pls::cs::Single num2 = y;
        pls::cs::Single sideViewRatio = GetSideViewRatio();
        pls::cs::Int32 num3 = pls::cs::to_int32((pls::cs::Single(array2[5]) * sideViewRatio));
        pls::cs::Int32 num4 = pls::cs::to_int32((pls::cs::Single(array2[6]) * sideViewRatio));
        if (!flag) {
            x += pls::cs::Single((array2[5] - num3));
        }
        y += pls::cs::Single((array2[6] - num4));
        switch (id) {
        case 0:
        case 5: {
            DrawSoftLabelImage(g, x - 2.0f, y - 3.0f, 21);
            break;
        }
        case 1: {
            DrawSoftLabelImage(g, x - 6.0f, y - 3.0f, 22);
            break;
        }
        }
        if (!enable && array[6] != -1) {
            DrawSoftLabelImage(g, x, y, array[6]);
            return true;
        }
        DrawSoftLabelImage(g, x, y, imgId);
        if (CheckFirstTouch(id) && array[5] != -1) {
            IntArray array3 = GamePad::TEXTURES()[array[5]];
            pls::cs::Int32 num5 = pls::cs::to_int32((pls::cs::Single(array3[5]) * sideViewRatio));
            pls::cs::Int32 num6 = pls::cs::to_int32((pls::cs::Single(array3[6]) * sideViewRatio));
            if (!flag) {
                num += pls::cs::Single((array3[5] - num5));
            }
            num2 += pls::cs::Single((array3[6] - num6));
            DrawSoftLabelImage(g, num, num2, array[5]);
        }
        pls::cs::Single num7 = x + pls::cs::Single((array2[5] + array2[1])) * sideViewRatio / 2.0f - 1.0f;
        pls::cs::Single num8 = y + pls::cs::Single((array2[6] + array2[2])) * sideViewRatio / 2.0f - 1.0f;
        if (id == 5) {
            bool linearFilterEnable = kairo::unity::ui::Canvas::IsLinearFilterEnable(require(canvas_));
            kairo::unity::ui::Canvas::SetLinearFilterEnable(require(canvas_), true);
            DrawSoftLabelImage(g, num7 - 27.0f * sideViewRatio, num8 - 10.0f * sideViewRatio,
                               ((PLS_API(kl_lang::JSystem::CurrentTimeMillis()) % pls::cs::Int64(800) <
                                 pls::cs::cast_integral<pls::cs::Int64>(400)))
                                   ? 15
                                   : 16);
            kairo::unity::ui::Canvas::SetLinearFilterEnable(require(canvas_), linearFilterEnable);
            num7 += 12.0f * sideViewRatio;
        }
        PLS_API(([&]() -> void {
            pls::cs::Int32 cs_arg0 = pls::cs::to_int32(
                (pls::cs::Single(PLS_API(
                     require(PLS_API(require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{})))->GetSize())) *
                 sideViewRatio));
            require(g)->PushFont(cs_arg0);
        }()));
        PLS_API(require(g)->SetColor(0, 0, 0));
        PLS_API(([&]() -> void {
            pls::cs::String cs_arg0 = PLS_API(kl_unity_util::Language::TranslateSoftLabel(text));
            require(g)->DrawString(cs_arg0, num7, num8, 34);
        }()));
        PLS_API(require(g)->PopFont());
        if (enable && array[5] != -1) {
            array2 = GamePad::TEXTURES()[array[5]];
            auto cs_left_273 = ([&]() -> pls::cs::Int32 {
                auto cs_left_273 = ([&]() -> pls::cs::Int32 {
                    auto cs_left_273 = array2[5];
                    auto cs_right_273 = array[0];
                    return cs_left_273 + cs_right_273;
                }());
                auto cs_right_273 = array[1];
                return cs_left_273 + cs_right_273;
            }());
            auto cs_right_273 = array2[1];
            pls::cs::Single num9 = cs_left_273 - cs_right_273;
            auto cs_left_274 = ([&]() -> pls::cs::Int32 {
                auto cs_left_274 = ([&]() -> pls::cs::Int32 {
                    auto cs_left_274 = array2[6];
                    auto cs_right_274 = array[2];
                    return cs_left_274 + cs_right_274;
                }());
                auto cs_right_274 = array[3];
                return cs_left_274 + cs_right_274;
            }());
            auto cs_right_274 = array2[2];
            pls::cs::Single num10 = cs_left_274 - cs_right_274;
            auto cs_left_275 = x - pls::cs::Single(array[0]);
            auto cs_right_275 = pls::cs::Single(array2[1]);
            pls::cs::Single num11 = cs_left_275 + cs_right_275;
            auto cs_left_276 = y - pls::cs::Single(array[2]);
            auto cs_right_276 = pls::cs::Single(array2[2]);
            pls::cs::Single num12 = cs_left_276 + cs_right_276;
            num9 *= sideViewRatio;
            pls::cs::Single num13 = pls::cs::Single(array2[6]) * (1.0f - sideViewRatio);
            num12 -= num13 / 2.0f;
            num10 += num13 / 2.0f;
            pls::cs::Ref<kairo::unity::surface::TouchComponent> touchComponent = AddTouchComponent(
                id, pls::cs::to_int32(num11), pls::cs::to_int32(num12), pls::cs::to_int32(num9),
                pls::cs::to_int32(num10), value, pls::cs::Ref<kairo::unity::surface::TouchOption>{});
            if (!is_null(touchComponent)) {
                require(touchComponent)->SetPaint(pls::cs::to_int32(x), pls::cs::to_int32(y));
            }
        }
        return true;
    }
}

// M:surface.GamePad.DrawSoftLabelImage(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32)
void GamePad::DrawSoftLabelImage(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y,
                                 pls::cs::Int32 imgId) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GamePad.DrawSoftLabelImage(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32)",
        game);
    {
        IntArray array = GamePad::TEXTURES()[imgId];
        pls::cs::Ref<pls::kairo::Image> image = GamePad::images_().get_Item(array[0]);
        pls::cs::Single sideViewRatio = GetSideViewRatio();
        pls::cs::Int32 num = pls::cs::to_int32((pls::cs::Single(array[5]) * sideViewRatio));
        pls::cs::Int32 num2 = pls::cs::to_int32((pls::cs::Single(array[6]) * sideViewRatio));
        auto cs_left_277 = pls::cs::Single(PLS_API(require(image)->GetWidth()));
        auto cs_right_277 = pls::cs::Single(GamePad::IMAGE_WIDTH()[array[0]]);
        pls::cs::Single num3 = cs_left_277 / cs_right_277;
        PLS_API(([&]() -> void {
            pls::cs::Single cs_arg1 = x + pls::cs::Single(array[1]);
            pls::cs::Single cs_arg2 = y + pls::cs::Single(array[2]);
            pls::cs::Int32 cs_arg5 = pls::cs::to_int32((pls::cs::Single(array[3]) * num3 + 0.5f));
            pls::cs::Int32 cs_arg6 = pls::cs::to_int32((pls::cs::Single(array[4]) * num3 + 0.5f));
            pls::cs::Int32 cs_arg7 = pls::cs::to_int32((pls::cs::Single(array[5]) * num3 + 0.5f));
            pls::cs::Int32 cs_arg8 = pls::cs::to_int32((pls::cs::Single(array[6]) * num3 + 0.5f));
            require(g)->DrawScaledImage(image, cs_arg1, cs_arg2, num, num2, cs_arg5, cs_arg6, cs_arg7,
                                        cs_arg8);
        }()));
    }
}

// M:surface.GamePad.IsSoftLabelID(System.Int32)
bool GamePad::IsSoftLabelID(pls::cs::Int32 id) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GamePad.IsSoftLabelID(System.Int32)", game);
    {
        if (id == 0 || id == 5 || id == 1 || id == 2 || id == 3) {
            return true;
        }
        return false;
    }
}

// M:surface.GamePad.DrawVersion(kairo.unity.ui.Graphics)
void GamePad::DrawVersion(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GamePad.DrawVersion(kairo.unity.ui.Graphics)", game);
    {
        kl_cfg::Config::ensure_initialized();

        if ((kl_cfg::Config::DEBUG()) &&
            (PLS_API(require(form::FormManager::GetInstance())->IsCapturing()))) {
            return;
        }
        if (!(GamePad::versionVisible_())) {
            return;
        }
        {
            pls::cs::Int32 num = 7;
            pls::cs::Int32 originX = PLS_API(require(g)->GetOriginX());
            pls::cs::Int32 originY = PLS_API(require(g)->GetOriginY());
            pls::cs::String value = pls::cs::String::concat(integer_string(202), pls::cs::String(u""));
            auto cs_arg0_283 = value;
            pls::cs::Ref<pls::cs::StringBuilder> stringBuilder =
                pls::cs::make_ref<pls::cs::StringBuilder>(cs_arg0_283);
            PLS_API(require(stringBuilder)->Insert(1, literal(u".")));
            pls::cs::String str =
                pls::cs::String::concat(literal(u"ver "), PLS_API(require(stringBuilder)->ToString()));
            pls::cs::Ref<pls::kairo::Font> font =
                PLS_API(require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{}));
            PLS_API(require(g)->SetFont(font));
            PLS_API(require(g)->SetColor(255, 255, 255));
            PLS_API(require(g)->DrawString(str, 277.0f, num + 38, 2));
            PLS_API(require(font)->SetSize(0, true));
            PLS_API(require(g)->SetFont(font));
        }
    }
}

// M:surface.GamePad.DrawWatch(kairo.unity.ui.Graphics,System.Single,System.Single)
void GamePad::DrawWatch(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:surface.GamePad.DrawWatch(kairo.unity.ui.Graphics,System.Single,System.Single)",
                     game);
    {
        if (is_null(GamePad::drawWatch_calendar())) {
            GamePad::drawWatch_calendar() = PLS_API(kl_java_util::JCalendar::GetInstance());
        }
        pls::cs::Ref<kl_java_util::JCalendar> jCalendar = GamePad::drawWatch_calendar();
        pls::cs::Int64 num = PLS_API(kl_lang::JSystem::CurrentTimeMillis());
        if (num < GamePad::drawWatch_rangeMin() || GamePad::drawWatch_rangeMax() <= num) {
            PLS_API(require(jCalendar)->SetTimeInMillis(num));
            pls::cs::Int32 num2 = PLS_API(require(jCalendar)->Get(13));
            pls::cs::Int32 num3 = PLS_API(require(jCalendar)->Get(14));
            GamePad::drawWatch_rangeMin() = num - pls::cs::Int64(num2 * 1000) - pls::cs::Int64(num3);
            GamePad::drawWatch_rangeMax() = GamePad::drawWatch_rangeMin() + pls::cs::Int64(60000);
        }
        pls::cs::Int32 num4 = PLS_API(require(jCalendar)->Get(11));
        pls::cs::Int32 num5 = PLS_API(require(jCalendar)->Get(12));
        pls::cs::Ref<kl_java_util::JCalendar> instance = PLS_API(kl_java_util::JCalendar::GetInstance());
        PLS_API(([&]() -> void {
            pls::cs::Ref<kl_java_util::JDate> cs_arg0 = kl_java_util::JDate::create();
            require(instance)->SetTime(cs_arg0);
        }()));
        pls::cs::String text = PLS_API(integer_string(PLS_API(require(instance)->Get(11))));
        if (is_null(text) || PLS_API(string_equals(text, literal(u"12")))) {
            if (num4 < 12) {
                DrawImage(g, x - 81.0f, y, 23);
            } else {
                DrawImage(g, x - 81.0f, y + 5.0f, 24);
            }
            num4 %= 12;
        }
        for (pls::cs::Int32 i = 0; i < 2; ++i) {
            pls::cs::Int32 num6 = num4 % 10;
            DrawImage(g, x - 63.0f + 2.0f - pls::cs::Single((9 * i)), y, 25 + num6);
            num4 /= 10;
            if (num4 <= 0) {
                break;
            }
        }
        DrawImage(g, x - 54.0f + 2.0f, y, 35);
        for (pls::cs::Int32 j = 0; j < 2; ++j) {
            pls::cs::Int32 num7 = num5 % 10;
            DrawImage(g, x - 40.0f + 2.0f - pls::cs::Single((9 * j)), y, 25 + num7);
            num5 /= 10;
        }
    }
}

// M:surface.GamePad.DrawBattery(kairo.unity.ui.Graphics,System.Single,System.Single)
void GamePad::DrawBattery(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:surface.GamePad.DrawBattery(kairo.unity.ui.Graphics,System.Single,System.Single)",
                     game);
    {
        pls::cs::Int32 num = 13;
        if (kairo::unity::ui::IApplication::IsBatteryCharging(require(app_))) {
            DrawImage(g, x, y, 50);
        } else {
            pls::cs::Int32 num2 = kairo::unity::ui::IApplication::GetBattery(require(app_)) * num / 100;
            DrawImage(g, x, y, 36 + num2);
        }
    }
}

// M:surface.GamePad.DrawImage(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32)
void GamePad::DrawImage(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y,
                        pls::cs::Int32 imgId) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GamePad.DrawImage(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32)",
        game);
    {
        IntArray array = GamePad::TEXTURES()[imgId];
        DrawScaledImage(g, x, y, array[5], array[6], imgId);
    }
}

// M:surface.GamePad.DrawScaledImage(kairo.unity.ui.Graphics,System.Single,System.Single,System.Single,System.Single,System.Int32)
void GamePad::DrawScaledImage(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y,
                              pls::cs::Single w, pls::cs::Single h, pls::cs::Int32 imgId) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GamePad.DrawScaledImage(kairo.unity.ui.Graphics,System.Single,System.Single,System.Single,System.Single,System.Int32)",
        game);
    {
        IntArray array = GamePad::TEXTURES()[imgId];
        pls::cs::Ref<pls::kairo::Image> image = GamePad::images_().get_Item(array[0]);
        auto cs_left_278 = pls::cs::Single(PLS_API(require(image)->GetWidth()));
        auto cs_right_278 = pls::cs::Single(GamePad::IMAGE_WIDTH()[array[0]]);
        pls::cs::Single num = cs_left_278 / cs_right_278;
        PLS_API(([&]() -> void {
            pls::cs::Single cs_arg1 = x + pls::cs::Single(array[1]);
            pls::cs::Single cs_arg2 = y + pls::cs::Single(array[2]);
            pls::cs::Int32 cs_arg5 = pls::cs::to_int32((pls::cs::Single(array[3]) * num + 0.5f));
            pls::cs::Int32 cs_arg6 = pls::cs::to_int32((pls::cs::Single(array[4]) * num + 0.5f));
            pls::cs::Int32 cs_arg7 = pls::cs::to_int32((pls::cs::Single(array[5]) * num + 0.5f));
            pls::cs::Int32 cs_arg8 = pls::cs::to_int32((pls::cs::Single(array[6]) * num + 0.5f));
            require(g)->DrawScaledImage(image, cs_arg1, cs_arg2, w, h, cs_arg5, cs_arg6, cs_arg7, cs_arg8);
        }()));
    }
}

// M:surface.GamePad.RotateClear
void GamePad::RotateClear() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GamePad.RotateClear", game);
    {
    }
}

// M:surface.GamePad.GetDivisionArea(System.Single,System.Single,System.Single,System.Int32,System.Int32)
FloatArray GamePad::GetDivisionArea(pls::cs::Single left, pls::cs::Single right, pls::cs::Single padding,
                                    pls::cs::Int32 index, pls::cs::Int32 max_) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GamePad.GetDivisionArea(System.Single,System.Single,System.Single,System.Int32,System.Int32)",
        game);
    {
        index = main::AppData::ClampMax(index, max_ - 1);
        if (max_ == 1) {
            getEvenlyDivisionArea_tmp_[0] = left;
            getEvenlyDivisionArea_tmp_[1] = right;
        } else {
            pls::cs::Single num =
                (right - left - padding * pls::cs::Single((max_ - 1))) / pls::cs::Single(max_);
            getEvenlyDivisionArea_tmp_[0] =
                left + pls::cs::Single(pls::cs::to_int32((pls::cs::Single(index) * (num + padding) + 0.1f)));
            getEvenlyDivisionArea_tmp_[1] =
                left +
                pls::cs::Single(pls::cs::to_int32((pls::cs::Single(index) * (num + padding) + num + 0.1f)));
        }
        getEvenlyDivisionArea_tmp_[2] =
            getEvenlyDivisionArea_tmp_[0] +
            (getEvenlyDivisionArea_tmp_[1] - getEvenlyDivisionArea_tmp_[0]) / 2.0f;
        return getEvenlyDivisionArea_tmp_;
    }
}

// M:surface.GamePad.SetLayoutMode(System.Int32)
void GamePad::SetLayoutMode(pls::cs::Int32 mode) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GamePad.SetLayoutMode(System.Int32)", game);
    {
        pls::cs::Ref<SurfaceManager> surfaceManager = pls::cs::unbox<pls::cs::Ref<SurfaceManager>>(
            pls::cs::box(PLS_API(([&]() -> pls::cs::Ref<kairo::unity::surface::SurfaceManagerBase> {
                auto cs_canvas = PLS_API(pls::kairo::Canvas::GetInstance());
                return pls::cs::unbox<pls::cs::Ref<kairo::unity::surface::SurfaceManagerBase>>(
                    require(cs_canvas)->GetSourceSurfaceManager());
            }()))));
        if ((mode == 0)) {
            require(surfaceManager)->SetLayoutMode(false);
            PLS_API(require(app_)->SetScaleRatio(-std::numeric_limits<float>::quiet_NaN() /* Single.NaN */));
        } else if ((mode == 1)) {
            require(surfaceManager)->SetLayoutMode(true);
        }
    }
}

// M:surface.GamePad.GetLayoutMode
pls::cs::Int32 GamePad::GetLayoutMode() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GamePad.GetLayoutMode", game);
    {
        return layoutMode_;
    }
}

// M:surface.GamePad.SetOptionPage(System.Int32)
void GamePad::SetOptionPage(pls::cs::Int32 page) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GamePad.SetOptionPage(System.Int32)", game);
    {
        optionPage_ = page;
    }
}

// M:surface.GamePad.GetOptionPage
pls::cs::Int32 GamePad::GetOptionPage() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GamePad.GetOptionPage", game);
    {
        return optionPage_;
    }
}
} // namespace surface
}
