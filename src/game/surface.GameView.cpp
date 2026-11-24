// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "form.FormManager.hpp"
#include "form.MyFormBase.hpp"
#include "form.SubForm.hpp"
#include "generated/java.lang.JMath.hpp"
#include "generated/java.lang.JRuntime.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.JarInflater.hpp"
#include "java.lang.JRuntime.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "kairo.unity.surface.TouchEvent.hpp"
#include "kairo.unity.surface.TouchOption.hpp"
#include "kairo.unity.ui.Dialog.hpp"
#include "kairo.unity.ui.Graphics.hpp"
#include "kairo.unity.ui.Seb.hpp"
#include "surface.GamePad.hpp"
#include "surface.GameView.hpp"
#include "surface.TouchEffect.hpp"
#include "surface.TouchEffectManager.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using ShortArray = pls::cs::Array<std::int16_t>;
using ByteArray = pls::cs::Array<std::uint8_t>;
using FloatArray = pls::cs::Array<pls::cs::Single>;
using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace surface {

void GameView::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    SurfaceBase::trace_edges(visitor);
    pls::cs::trace_value(app_, visitor);
    pls::cs::trace_value(canvas_, visitor);
    pls::cs::trace_value(effMan_, visitor);
    pls::cs::trace_value(formMan_, visitor);
    pls::cs::trace_value(render_, visitor);
    pls::cs::trace_value(g_, visitor);
    pls::cs::trace_value(font_, visitor);
    pls::cs::trace_value(captureFile_, visitor);
    pls::cs::trace_value(toastText_, visitor);
    pls::cs::trace_value(delayPaintBuffer_, visitor);
    pls::cs::trace_value(drawVerticalScroll_tmp, visitor);
}

static StringArray GameView_FILENAMES_storage{};

static FloatArray GameView_GetImageRect_result_storage{};

static IntArray GameView_IMAGE_WIDTH_storage{};

static pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> GameView_images__storage{};

static pls::cs::Ref<GameView> GameView_instance__storage{};

static IntArray2 GameView_TEXTURES_storage{};

static IntArray2 GameView_TOUCHPARAMS_storage{};

static PLS_NOINLINE void cs_init_e315dac1df3b175d_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(GameView_FILENAMES_storage, visitor);
        pls::cs::trace_value(GameView_GetImageRect_result_storage, visitor);
        pls::cs::trace_value(GameView_IMAGE_WIDTH_storage, visitor);
        pls::cs::trace_value(GameView_images__storage, visitor);
        pls::cs::trace_value(GameView_instance__storage, visitor);
        pls::cs::trace_value(GameView_TEXTURES_storage, visitor);
        pls::cs::trace_value(GameView_TOUCHPARAMS_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("surface.GameView", flag, []() {
        GameView_FILENAMES_storage =
            pls::cs::evaluate_type_initializer_field("F:surface.GameView.FILENAMES", [&]() {
                return StringArray::from({literal(u"buttoneffect.png"), literal(u"notes.png")});
            });
        GameView_IMAGE_WIDTH_storage = pls::cs::evaluate_type_initializer_field(
            "F:surface.GameView.IMAGE_WIDTH", [&]() { return IntArray::from({128, 63}); });
        GameView_TEXTURES_storage =
            pls::cs::evaluate_type_initializer_field("F:surface.GameView.TEXTURES", [&]() {
                return IntArray2::from(
                    {IntArray::from({0, -5, -8, 0, 57, 15, 20}), IntArray::from({0, -4, -8, 15, 57, 15, 20}),
                     IntArray::from({0, -9, -12, 31, 57, 20, 26}),
                     IntArray::from({0, -6, -12, 52, 57, 20, 26}),
                     IntArray::from({0, -11, -11, 1, 85, 22, 21}),
                     IntArray::from({0, -11, -11, 24, 85, 22, 21}),
                     IntArray::from({0, -14, -14, 47, 85, 28, 28}),
                     IntArray::from({0, -14, -14, 76, 85, 28, 28}), IntArray::from({0, 0, 0, 70, 1, 7, 26}),
                     IntArray::from({0, 0, 0, 78, 1, 8, 26}), IntArray::from({0, 0, 0, 87, 1, 7, 26}),
                     IntArray::from({0, -2, -13, 73, 57, 9, 23}), IntArray::from({0, -9, -7, 0, 3, 18, 14}),
                     IntArray::from({0, -9, 15, 0, 18, 18, 14}), IntArray::from({0, -12, -10, 22, 0, 25, 17}),
                     IntArray::from({0, -12, 15, 22, 21, 25, 17})});
            });
        GameView_TOUCHPARAMS_storage =
            pls::cs::evaluate_type_initializer_field("F:surface.GameView.TOUCHPARAMS", [&]() {
                return IntArray2::from(
                    {IntArray::from({10, 10, 10, 10, 1, 1}),    IntArray::from({120, 120, 120, 20, 1, 1}),
                     IntArray::from({31, 31, 18, 18, 1, 1}),    IntArray::from({16, 16, 8, 8, 1, 1}),
                     IntArray::from({0, 0, 0, 0, 0, 1}),        IntArray::from({0, 0, 0, 0, 1, 1}),
                     IntArray::from({0, 0, 0, 0, 1, 1}),        IntArray::from({0, 0, 0, 0, 1, 1}),
                     IntArray::from({40, 40, 10, 10, 1, 1}),    IntArray::from({40, 40, 10, 10, 1, 1}),
                     IntArray::from({240, 240, 10, 10, 1, 1}),  IntArray::from({80, -10, 3, 3, 1, 1}),
                     IntArray::from({20, 40, 0, 0, 0, 1}),      IntArray::make(6),
                     IntArray::from({20, 40, 0, 0, 0, 1}),      IntArray::from({20, 40, 0, 0, 0, 1}),
                     IntArray::from({0, 0, 0, 0, 0, 1}),        IntArray::from({0, 0, 0, 0, 0, 1}),
                     IntArray::from({0, 0, 0, 0, 1, 1}),        IntArray::make(6),
                     IntArray::from({0, 0, 0, 0, 1, 1}),        IntArray::from({0, 0, 0, 0, 1, 1}),
                     IntArray::from({20, 20, 0, 0, 0, 1}),      IntArray::from({0, 0, 0, 0, 1, 1}),
                     IntArray::from({0, 0, 0, 0, 1, 1}),        IntArray::from({0, 0, 0, 0, 1, 1}),
                     IntArray::from({120, 120, 120, 20, 1, 1}), IntArray::from({0, 0, 0, 0, 1, 1})});
            });
        GameView_GetImageRect_result_storage = pls::cs::evaluate_type_initializer_field(
            "F:surface.GameView.GetImageRect_result", [&]() { return FloatArray::make(4); });
    });
}

void GameView::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_e315dac1df3b175d_slow(flag);
}

StringArray& GameView::FILENAMES() {
    GameView::ensure_initialized();
    return GameView_FILENAMES_storage;
}

FloatArray& GameView::GetImageRect_result() {
    GameView::ensure_initialized();
    return GameView_GetImageRect_result_storage;
}

IntArray& GameView::IMAGE_WIDTH() {
    GameView::ensure_initialized();
    return GameView_IMAGE_WIDTH_storage;
}

pls::cs::Array<pls::cs::Ref<pls::kairo::Image>>& GameView::images_() {
    GameView::ensure_initialized();
    return GameView_images__storage;
}

pls::cs::Ref<GameView>& GameView::instance_() {
    GameView::ensure_initialized();
    return GameView_instance__storage;
}

IntArray2& GameView::TEXTURES() {
    GameView::ensure_initialized();
    return GameView_TEXTURES_storage;
}

IntArray2& GameView::TOUCHPARAMS() {
    GameView::ensure_initialized();
    return GameView_TOUCHPARAMS_storage;
}

void GameView::create_init(pls::cs::Ref<GameView> self) {
    GameView::ensure_initialized();
    self->delayPaintBuffer_ = kl_java_util::Vector_2_create<IntArray>();
    self->drawVerticalScroll_tmp = IntArray::make(2);
    SurfaceBase::create_init(pls::cs::static_pointer_cast<SurfaceBase>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GameView.#ctor", game);
    {
        self->app_ = PLS_API(pls::kairo::IApplication::GetCurrentApp());
        self->canvas_ = PLS_API(pls::kairo::Canvas::GetInstance());
        self->effMan_ = TouchEffectManager::GetInstance();
        self->formMan_ = form::FormManager::GetInstance();
        pls::cs::Ref<pls::kairo::IApplication> currentApp =
            PLS_API(pls::kairo::IApplication::GetCurrentApp());
        self->SetScaleRatio(PLS_API(pls::cs::Single(require(currentApp)->GetScaleRatio(false))));
        self->font_ = pls::cs::make_ref<pls::kairo::Font>();
        self->markComponentKey_ = -1ll;
        self->markComponentFrame_ = 0;
    }
}

// M:surface.GameView.#ctor
pls::cs::Ref<GameView> GameView::create() {
    GameView::ensure_initialized();
    auto self = pls::cs::make_ref<GameView>();
    GameView::create_init(self);
    return self;
}

// M:surface.GameView.Load(kairo.unity.util.JarInflater)
void GameView::Load(pls::cs::Ref<kl_unity_util::JarInflater> jar) {
    GameView::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GameView.Load(kairo.unity.util.JarInflater)", game);
    {
        try {
            GameView::images_() =
                pls::cs::Array<pls::cs::Ref<pls::kairo::Image>>::make(GameView::FILENAMES().length());
            for (pls::cs::Int32 i = 0; i < GameView::images_().length(); ++i) {
                if (PLS_API(([&]() -> pls::cs::Int64 {
                        pls::cs::String cs_arg0 = GameView::FILENAMES()[i];
                        return require(jar)->GetSize(cs_arg0);
                    }())) != pls::cs::cast_integral<pls::cs::Int64>(-1)) {
                    {
                        auto cs_target = GameView::images_();
                        auto cs_index = i;
                        auto cs_value =
                            PLS_API(pls::kairo::Image::Load(PLS_API(([&]() -> ByteArray {
                                                                pls::cs::String cs_arg0 =
                                                                    GameView::FILENAMES()[i];
                                                                return require(jar)->GetData(cs_arg0);
                                                            }())),
                                                            static_cast<pls::kairo::Image::Format>(-1),
                                                            static_cast<pls::kairo::Image::Filter>(-1)));
                        cs_target.set_Item(cs_index, cs_value);
                    }
                }
            }
        } catch (const pls::cs::Exception& cs_caught_27) {
            pls::cs::capture_exception(cs_caught_27);
            {
            }
        }
    }
}

// M:surface.GameView.GetInstance
pls::cs::Ref<GameView> GameView::GetInstance() {
    GameView::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GameView.GetInstance", game);
    {
        if (is_null(GameView::instance_())) {
            GameView::instance_() = GameView::create();
        }
        return GameView::instance_();
    }
}

// M:surface.GameView.GetSideSoftWidth
pls::cs::Int32 GameView::GetSideSoftWidth() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GameView.GetSideSoftWidth", game);
    {
        pls::cs::Ref<GamePad> instance = GamePad::GetInstance();
        if (require(instance)->GetMode() == 2) {
            pls::cs::Int32 sideSize = require(instance)->GetSideSize();
            return pls::cs::to_int32((([&]() -> pls::cs::FloatEval {
                                          auto cs_left =
                                              pls::cs::Single(sideSize) * require(instance)->GetScaleRatio();
                                          auto cs_right = GetScaleRatio();
                                          return cs_left / cs_right;
                                      }()) +
                                      0.01f));
        }
        return 0;
    }
}

// M:surface.GameView.IsGameSurface
bool GameView::IsGameSurface() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GameView.IsGameSurface", game);
    {
        return true;
    }
}

// M:surface.GameView.BeginTouchRegist(kairo.unity.ui.Graphics)
void GameView::BeginTouchRegist(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GameView.BeginTouchRegist(kairo.unity.ui.Graphics)", game);
    {
        SurfaceBase::BeginTouchRegist(g);
    }
}

// M:surface.GameView.EndTouchRegist(kairo.unity.ui.Graphics)
void GameView::EndTouchRegist(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GameView.EndTouchRegist(kairo.unity.ui.Graphics)", game);
    {
        pls::cs::Ref<kairo::unity::surface::TouchComponent> touchComponent =
            pls::cs::Ref<kairo::unity::surface::TouchComponent>{};
        pls::cs::Ref<kairo::unity::surface::TouchComponent> touchComponent2 =
            pls::cs::Ref<kairo::unity::surface::TouchComponent>{};
        pls::cs::Ref<kairo::unity::surface::TouchComponent> touchComponent3 =
            pls::cs::Ref<kairo::unity::surface::TouchComponent>{};
        pls::cs::Ref<kairo::unity::surface::TouchComponent> touchComponent4 =
            pls::cs::Ref<kairo::unity::surface::TouchComponent>{};
        pls::cs::Int32 componentLength = GetComponentLength();
        for (pls::cs::Int32 i = 0; i < componentLength; ++i) {
            pls::cs::Ref<kairo::unity::surface::TouchComponent> component = GetComponent(i);
            if (require(component)->id == 12 || require(component)->id == 15) {
                touchComponent3 = component;
            } else if (require(component)->id == 11) {
                pls::cs::Int32 num = pls::cs::cast_integral<pls::cs::Int32>(
                    PLS_API(kl_unity_util::BitUtil::Split(require(component)->value))[1]);
                if (is_null(touchComponent) ||
                    (pls::cs::cast_integral<pls::cs::Int32>(
                         PLS_API(kl_unity_util::BitUtil::Split(require(touchComponent)->value))[1]) > num)) {
                    touchComponent = component;
                }
                if (is_null(touchComponent2) ||
                    (pls::cs::cast_integral<pls::cs::Int32>(
                         PLS_API(kl_unity_util::BitUtil::Split(require(touchComponent2)->value))[1]) < num)) {
                    touchComponent2 = component;
                }
            }
            if (require(component)->Check(16)) {
                touchComponent4 = component;
            }
        }
        pls::cs::List<pls::cs::Ref<kairo::unity::surface::TouchComponent>> list =
            pls::cs::List<pls::cs::Ref<kairo::unity::surface::TouchComponent>>::make();
        pls::cs::List<pls::cs::Ref<kairo::unity::surface::TouchComponent>> list2 =
            pls::cs::List<pls::cs::Ref<kairo::unity::surface::TouchComponent>>::make();
        for (pls::cs::Int32 j = 0; j < componentLength; ++j) {
            pls::cs::Ref<kairo::unity::surface::TouchComponent> component2 = GetComponent(j);
            if (require(component2)->id == 11) {
                if (!is_null(touchComponent) && require(touchComponent)->y == require(component2)->y) {
                    PLS_API(list.Add(component2));
                }
                if (!is_null(touchComponent2) &&
                    require(touchComponent2)->y + require(touchComponent2)->height ==
                        require(component2)->y + require(component2)->height) {
                    PLS_API(list2.Add(component2));
                }
            }
        }
        for (pls::cs::Int32 k = 0; k < list.get_Count(); ++k) {
            {
                auto cs_target = list.get_Item(k);
                auto cs_old = require(cs_target)->y;
                auto cs_rhs = 10;
                pls::cs::Int32 cs_value = cs_old - cs_rhs;
                require(cs_target)->y = cs_value;
            }
            {
                auto cs_target = list.get_Item(k);
                auto cs_old = require(cs_target)->height;
                auto cs_rhs = 10;
                pls::cs::Int32 cs_value = cs_old + cs_rhs;
                require(cs_target)->height = cs_value;
            }
        }
        for (pls::cs::Int32 l = 0; l < list2.get_Count(); ++l) {
            {
                auto cs_target = list2.get_Item(l);
                auto cs_old = require(cs_target)->height;
                auto cs_rhs = 10;
                pls::cs::Int32 cs_value = cs_old + cs_rhs;
                require(cs_target)->height = cs_value;
            }
        }
        pls::cs::Int32 num2 = 2147483647 /* Int32.MaxValue */;
        pls::cs::Int32 num3 = (-2147483647 - 1) /* Int32.MinValue */;
        for (pls::cs::Int32 m = 0; m < list.get_Count(); ++m) {
            if (require(list.get_Item(m))->x < num2) {
                num2 = require(list.get_Item(m))->x;
            }
            if (([&]() -> pls::cs::Int32 {
                    auto cs_left = require(list.get_Item(m))->x;
                    auto cs_right = require(list.get_Item(m))->width;
                    return cs_left + cs_right;
                }()) > num3) {
                num3 = ([&]() -> pls::cs::Int32 {
                    auto cs_left = require(list.get_Item(m))->x;
                    auto cs_right = require(list.get_Item(m))->width;
                    return cs_left + cs_right;
                }());
            }
        }
        for (pls::cs::Int32 n = 0; n < list2.get_Count(); ++n) {
            if (require(list2.get_Item(n))->x < num2) {
                num2 = require(list2.get_Item(n))->x;
            }
            if (([&]() -> pls::cs::Int32 {
                    auto cs_left = require(list2.get_Item(n))->x;
                    auto cs_right = require(list2.get_Item(n))->width;
                    return cs_left + cs_right;
                }()) > num3) {
                num3 = ([&]() -> pls::cs::Int32 {
                    auto cs_left = require(list2.get_Item(n))->x;
                    auto cs_right = require(list2.get_Item(n))->width;
                    return cs_left + cs_right;
                }());
            }
        }
        if (!is_null(touchComponent) && !is_null(touchComponent3)) {
            IntArray array = IntArray::make(require(require(touchComponent3)->option)->args.length());
            PLS_API(kl_lang::JSystem::Arraycopy(pls::cs::box(require(require(touchComponent3)->option)->args),
                                                0, pls::cs::box(array), 0, array.length()));
            bool flag = false;
            bool flag2 = false;
            for (pls::cs::Int32 num4 = 0; num4 < list.get_Count(); ++num4) {
                if (CheckTouch(11, require(list.get_Item(num4))->value)) {
                    flag = true;
                }
            }
            for (pls::cs::Int32 num5 = 0; num5 < list2.get_Count(); ++num5) {
                if (CheckTouch(11, require(list2.get_Item(num5))->value)) {
                    flag2 = true;
                }
            }
            pls::cs::Ref<kairo::unity::surface::TouchOption> option =
                kairo::unity::surface::TouchOption::Create(array);
            if (flag || CheckTouch(13, require(touchComponent3)->value | 0)) {
                AddTouchComponent(13, num2, 0, num3 - num2, require(touchComponent)->y,
                                  require(touchComponent3)->value | 0, option);
            }
            if (flag2 || CheckTouch(13, require(touchComponent3)->value | 1)) {
                AddTouchComponent(13, num2, require(touchComponent2)->y + require(touchComponent2)->height,
                                  num3 - num2, 240, require(touchComponent3)->value | 1, option);
            }
        }
        if (!is_null(touchComponent3)) {
            pls::cs::Int32 num6 = require(require(touchComponent3)->option)->args[0];
            pls::cs::Int32 num7 = require(require(touchComponent3)->option)->args[1];
            if (num6 <= num7) {
                {
                    auto cs_target = require(touchComponent3)->option;
                    auto cs_old = require(cs_target)->flag;
                    auto cs_rhs = 2;
                    pls::cs::Int32 cs_value = (cs_old | cs_rhs);
                    require(cs_target)->flag = cs_value;
                }
                require(touchComponent3)->x = require(touchComponent3)->x + 20;
                for (pls::cs::Int32 num8 = 0; num8 < componentLength; ++num8) {
                    pls::cs::Ref<kairo::unity::surface::TouchComponent> component3 = GetComponent(num8);
                    if (require(component3)->id == 11) {
                        require(component3)->width = require(component3)->width + 20;
                    }
                }
            }
        }
        if (!is_null(touchComponent4)) {
            {
                pls::cs::Int32 cs_arg3 = GetGameWidth();
                pls::cs::Int32 cs_arg4 = GetGameHeight();
                pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg6 =
                    kairo::unity::surface::TouchOption::CreateInt(1);
                AddTouchComponent(16, 0, 0, cs_arg3, cs_arg4, 0, cs_arg6);
            }
        }
        pls::cs::Int32 originX = PLS_API(require(g)->GetOriginX());
        pls::cs::Int32 originY = PLS_API(require(g)->GetOriginY());
        pls::cs::Single scale = PLS_API(pls::cs::Single(require(g)->GetScale()));
        PLS_API(([&]() -> void {
            pls::cs::Int32 cs_arg0 =
                pls::cs::to_int32((([&]() -> pls::cs::FloatEval {
                                       auto cs_left = pls::cs::Single((GetX() * 100));
                                       auto cs_right =
                                           PLS_API(pls::cs::Single(require(app_)->GetScaleRatio(false)));
                                       return cs_left / cs_right;
                                   }()) +
                                   0.01f));
            pls::cs::Int32 cs_arg1 =
                pls::cs::to_int32((([&]() -> pls::cs::FloatEval {
                                       auto cs_left = pls::cs::Single((GetY() * 100));
                                       auto cs_right =
                                           PLS_API(pls::cs::Single(require(app_)->GetScaleRatio(false)));
                                       return cs_left / cs_right;
                                   }()) +
                                   0.01f));
            require(g)->SetOrigin(cs_arg0, cs_arg1);
        }()));
        PLS_API(([&]() -> void {
            pls::cs::Single cs_arg0 = GetScaleRatio() + 1.0f;
            require(g)->Scale(cs_arg0);
        }()));
        for (pls::cs::Int32 num9 = 0; num9 < PLS_API(require(delayPaintBuffer_)->Size()); ++num9) {
            IntArray array2 = PLS_API(require(delayPaintBuffer_)->ElementAt(num9));
            PLS_API(([&]() -> void {
                pls::cs::Single cs_arg0 =
                    pls::cs::Single(array2[pls::cs::Int32(array2.length()) - 1]) / 100.0f;
                require(g)->Scale(cs_arg0);
            }()));
            if (array2[0] == 0) {
                pls::cs::Int32 num10 = 6;
                pls::cs::Int32 num11 = 2;
                pls::cs::Int32 num12 = 2;
                pls::cs::Int32 num13 = 3;
                pls::cs::Int32 num14 = array2[1];
                pls::cs::Int32 num15 = array2[2];
                pls::cs::Int32 num16 = array2[3];
                pls::cs::Int32 num17 = array2[4];
                if (array2[3] > 30 && array2[4] > 30) {
                    num12 = 2;
                    num13 = 3;
                    num14 += 4;
                    num15 += 3;
                    num16 -= 8;
                    num17 -= 6;
                    num11 = 3;
                }
                pls::cs::Int32 num18 = markComponentFrame_ / num11 % num10;
                pls::cs::Int32 num19;
                if ((num18 == 0)) {
                    num19 = 255;
                } else if ((num18 == 1)) {
                    num19 = 224;
                } else if ((num18 == 2)) {
                    num19 = 192;
                } else if ((num18 == 3)) {
                    num19 = 160;
                } else if ((num18 == 4)) {
                    num19 = 128;
                } else {
                    num19 = 96;
                }
                pls::cs::Int32 num20 = num14 + num12;
                pls::cs::Int32 num21 = num15 - num13;
                pls::cs::Int32 num22 = num16 - num12 * 2;
                pls::cs::Int32 num23 = num17 + num13 * 2;
                PLS_API(require(g)->SetRenderMode(1, num19, 255 - num19));
                DrawScaledImage(g, num20 - 5, num21, 5.0f, num23, 8);
                DrawScaledImage(g, num20, num21, num22, num23, 9);
                DrawScaledImage(g, num20 + num22, num21, 5.0f, num23, 10);
                if (num18 > 0) {
                    DrawScaledImage(g, num20 - 5 - num18, num21 - num18, 5.0f, num23 + num18 * 2, 8);
                    DrawScaledImage(g, num20 - num18, num21 - num18, num22 + num18 * 2, num23 + num18 * 2, 9);
                    DrawScaledImage(g, num20 + num22 + num18, num21 - num18, 5.0f, num23 + num18 * 2, 10);
                }
                PLS_API(require(g)->SetRenderMode(0, 255, 0));
                markComponentFrame_ = ((markComponentFrame_ + 1) % 2147483647 /* Int32.MaxValue */);
            }
        }
        PLS_API(require(delayPaintBuffer_)->RemoveAllElements());
        loopFrame_ = ((loopFrame_ + 1) % 2147483647 /* Int32.MaxValue */);
        PLS_API(require(g)->Scale(scale));
        PLS_API(require(g)->SetOrigin(originX, originY));
        SurfaceBase::EndTouchRegist(g);
    }
}

// M:surface.GameView.DoEnd
void GameView::DoEnd() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GameView.DoEnd", game);
    {
        SurfaceBase::DoEnd();
    }
}

// M:surface.GameView.AddTouch(System.Int32)
pls::cs::Ref<kairo::unity::surface::TouchComponent> GameView::AddTouch(pls::cs::Int32 id) {
    GameView::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GameView.AddTouch(System.Int32)", game);
    {
        return ([&]() -> pls::cs::Ref<kairo::unity::surface::TouchComponent> {
            auto cs_receiver = GameView::instance_();
            pls::cs::Int32 cs_arg1 = id;
            pls::cs::Int32 cs_arg4 = require(GameView::instance_())->GetGameWidth();
            pls::cs::Int32 cs_arg5 = require(GameView::instance_())->GetGameHeight();
            return require(cs_receiver)
                ->_addTouch(pls::cs::Ref<pls::kairo::Graphics>{}, cs_arg1, 0, 0, cs_arg4, cs_arg5, 0,
                            pls::cs::Ref<kairo::unity::surface::TouchOption>{});
        }());
    }
}

// M:surface.GameView.AddTouch(System.Int32,System.Int32)
pls::cs::Ref<kairo::unity::surface::TouchComponent> GameView::AddTouch(pls::cs::Int32 id,
                                                                       pls::cs::Int32 value) {
    GameView::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GameView.AddTouch(System.Int32,System.Int32)", game);
    {
        return ([&]() -> pls::cs::Ref<kairo::unity::surface::TouchComponent> {
            auto cs_receiver = GameView::instance_();
            pls::cs::Int32 cs_arg1 = id;
            pls::cs::Int32 cs_arg4 = require(GameView::instance_())->GetGameWidth();
            pls::cs::Int32 cs_arg5 = require(GameView::instance_())->GetGameHeight();
            return require(cs_receiver)
                ->_addTouch(pls::cs::Ref<pls::kairo::Graphics>{}, cs_arg1, 0, 0, cs_arg4, cs_arg5, value,
                            pls::cs::Ref<kairo::unity::surface::TouchOption>{});
        }());
    }
}

// M:surface.GameView.AddTouch(System.Int32,kairo.unity.surface.TouchOption)
pls::cs::Ref<kairo::unity::surface::TouchComponent>
GameView::AddTouchTouchOption(pls::cs::Int32 id, pls::cs::Ref<kairo::unity::surface::TouchOption> opt) {
    GameView::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:surface.GameView.AddTouch(System.Int32,kairo.unity.surface.TouchOption)", game);
    {
        return ([&]() -> pls::cs::Ref<kairo::unity::surface::TouchComponent> {
            auto cs_receiver = GameView::instance_();
            pls::cs::Int32 cs_arg1 = id;
            pls::cs::Int32 cs_arg4 = require(GameView::instance_())->GetGameWidth();
            pls::cs::Int32 cs_arg5 = require(GameView::instance_())->GetGameHeight();
            return require(cs_receiver)
                ->_addTouch(pls::cs::Ref<pls::kairo::Graphics>{}, cs_arg1, 0, 0, cs_arg4, cs_arg5, 0, opt);
        }());
    }
}

// M:surface.GameView.AddTouch(System.Int32,System.Int32,kairo.unity.surface.TouchOption)
pls::cs::Ref<kairo::unity::surface::TouchComponent>
GameView::AddTouch(pls::cs::Int32 id, pls::cs::Int32 value,
                   pls::cs::Ref<kairo::unity::surface::TouchOption> opt) {
    GameView::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:surface.GameView.AddTouch(System.Int32,System.Int32,kairo.unity.surface.TouchOption)",
                     game);
    {
        return ([&]() -> pls::cs::Ref<kairo::unity::surface::TouchComponent> {
            auto cs_receiver = GameView::instance_();
            pls::cs::Int32 cs_arg1 = id;
            pls::cs::Int32 cs_arg4 = require(GameView::instance_())->GetGameWidth();
            pls::cs::Int32 cs_arg5 = require(GameView::instance_())->GetGameHeight();
            return require(cs_receiver)
                ->_addTouch(pls::cs::Ref<pls::kairo::Graphics>{}, cs_arg1, 0, 0, cs_arg4, cs_arg5, value,
                            opt);
        }());
    }
}

// M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Ref<kairo::unity::surface::TouchComponent> GameView::AddTouch(pls::cs::Ref<pls::kairo::Graphics> g,
                                                                       pls::cs::Int32 id, pls::cs::Int32 x,
                                                                       pls::cs::Int32 y, pls::cs::Int32 w,
                                                                       pls::cs::Int32 h) {
    GameView::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        return require(GameView::instance_())
            ->_addTouch(g, id, x, y, w, h, 0, pls::cs::Ref<kairo::unity::surface::TouchOption>{});
    }
}

// M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Ref<kairo::unity::surface::TouchComponent>
GameView::AddTouch(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 id, pls::cs::Int32 x,
                   pls::cs::Int32 y, pls::cs::Int32 w, pls::cs::Int32 h, pls::cs::Int32 value) {
    GameView::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        return require(GameView::instance_())
            ->_addTouch(g, id, x, y, w, h, value, pls::cs::Ref<kairo::unity::surface::TouchOption>{});
    }
}

// M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,kairo.unity.surface.TouchOption)
pls::cs::Ref<kairo::unity::surface::TouchComponent>
GameView::AddTouch(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 id, pls::cs::Int32 x,
                   pls::cs::Int32 y, pls::cs::Int32 w, pls::cs::Int32 h, pls::cs::Int32 value,
                   pls::cs::Ref<kairo::unity::surface::TouchOption> opt) {
    GameView::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,kairo.unity.surface.TouchOption)",
        game);
    {
        return require(GameView::instance_())->_addTouch(g, id, x, y, w, h, value, opt);
    }
}

// M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,kairo.unity.ui.Image,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Ref<kairo::unity::surface::TouchComponent>
GameView::AddTouch(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 id,
                   pls::cs::Ref<pls::kairo::Image> img, pls::cs::Int32 x, pls::cs::Int32 y, pls::cs::Int32 u,
                   pls::cs::Int32 v, pls::cs::Int32 w, pls::cs::Int32 h) {
    GameView::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,kairo.unity.ui.Image,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        return GameView::AddTouch(g, id, img, x, y, u, v, w, h, 0);
    }
}

// M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,kairo.unity.ui.Image,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Ref<kairo::unity::surface::TouchComponent>
GameView::AddTouch(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 id,
                   pls::cs::Ref<pls::kairo::Image> img, pls::cs::Int32 x, pls::cs::Int32 y, pls::cs::Int32 u,
                   pls::cs::Int32 v, pls::cs::Int32 w, pls::cs::Int32 h, pls::cs::Int32 value) {
    GameView::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,kairo.unity.ui.Image,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        return GameView::AddTouch(g, id, img, x, y, u, v, w, h, value);
    }
}

// M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,kairo.unity.ui.Image,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,kairo.unity.surface.TouchOption)
pls::cs::Ref<kairo::unity::surface::TouchComponent>
GameView::AddTouch(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 id,
                   pls::cs::Ref<pls::kairo::Image> img, pls::cs::Int32 x, pls::cs::Int32 y, pls::cs::Int32 u,
                   pls::cs::Int32 v, pls::cs::Int32 w, pls::cs::Int32 h, pls::cs::Int32 value,
                   pls::cs::Ref<kairo::unity::surface::TouchOption> opt) {
    GameView::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,kairo.unity.ui.Image,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,kairo.unity.surface.TouchOption)",
        game);
    {
        pls::cs::Int32 savedX = x;
        pls::cs::Int32 savedY = y;
        pls::cs::Int32 savedWidth = w;
        pls::cs::Int32 savedHeight = h;
        PLS_API(require(g)->DrawImage(img, x, y, u, v, w, h));
        pls::cs::Ref<kairo::unity::surface::TouchComponent> touchComponent =
            require(GameView::instance_())
                ->_addTouch(g, id, savedX, savedY, savedWidth, savedHeight, value, opt);
        if (is_null(touchComponent)) {
            return pls::cs::Ref<kairo::unity::surface::TouchComponent>{};
        }
        if (is_null(g)) {
            require(touchComponent)->SetPaint(x, y);
        } else {
            {
                pls::cs::Int32 cs_arg0 = PLS_API(require(g)->GetOriginX()) + x;
                pls::cs::Int32 cs_arg1 = PLS_API(require(g)->GetOriginY()) + y;
                require(touchComponent)->SetPaint(cs_arg0, cs_arg1);
            }
        }
        return touchComponent;
    }
}

// M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,kairo.unity.ui.Seb,System.Int32)
pls::cs::Ref<kairo::unity::surface::TouchComponent>
GameView::AddTouchSeb(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 id, pls::cs::Int32 x,
                      pls::cs::Int32 y, pls::cs::Ref<kairo::unity::ui::Seb> seb, pls::cs::Int32 frame) {
    GameView::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,kairo.unity.ui.Seb,System.Int32)",
        game);
    {
        return GameView::AddTouchSeb(g, id, x, y, seb, frame, 0,
                                     static_cast<pls::cs::Ref<kairo::unity::surface::TouchOption>>(
                                         pls::cs::Ref<kairo::unity::surface::TouchOption>{}));
    }
}

// M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,kairo.unity.ui.Seb,System.Int32,System.Int32)
pls::cs::Ref<kairo::unity::surface::TouchComponent>
GameView::AddTouchSeb(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 id, pls::cs::Int32 x,
                      pls::cs::Int32 y, pls::cs::Ref<kairo::unity::ui::Seb> seb, pls::cs::Int32 frame,
                      pls::cs::Int32 value) {
    GameView::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,kairo.unity.ui.Seb,System.Int32,System.Int32)",
        game);
    {
        return GameView::AddTouchSeb(g, id, x, y, seb, frame, value,
                                     static_cast<pls::cs::Ref<kairo::unity::surface::TouchOption>>(
                                         pls::cs::Ref<kairo::unity::surface::TouchOption>{}));
    }
}

// M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,kairo.unity.ui.Seb,System.Int32,System.Int32,kairo.unity.surface.TouchOption)
pls::cs::Ref<kairo::unity::surface::TouchComponent>
GameView::AddTouchSeb(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 id, pls::cs::Int32 x,
                      pls::cs::Int32 y, pls::cs::Ref<kairo::unity::ui::Seb> seb, pls::cs::Int32 frame,
                      pls::cs::Int32 value, pls::cs::Ref<kairo::unity::surface::TouchOption> opt) {
    GameView::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.AddTouch(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,kairo.unity.ui.Seb,System.Int32,System.Int32,kairo.unity.surface.TouchOption)",
        game);
    {
        ShortArray boundingRect = require(seb)->GetBoundingRect(frame);
        pls::cs::Int32 num = x + boundingRect[0];
        pls::cs::Int32 num2 = y + boundingRect[1];
        pls::cs::Int32 num3 = pls::cs::cast_integral<pls::cs::Int32>(boundingRect[2]);
        pls::cs::Int32 num4 = pls::cs::cast_integral<pls::cs::Int32>(boundingRect[3]);
        if (!is_null(g)) {
            switch (id) {
            case 1:
            case 18:
            case 26: {
                {
                    pls::cs::Int32 num5 = -1;
                    pls::cs::Int32 num6 = ((frame == 0 || frame == 3) ? 3 : 1);
                    if (require(GameView::instance_())->CheckTouch(id, value)) {
                        num5 = ((frame == 0 || frame == 3) ? 2 : 3);
                    } else {
                        num5 = ((frame == 0 || frame == 3) ? 0 : 1);
                    }
                    FloatArray imageRect = GameView::GetImageRect(num5);
                    x += pls::cs::to_int32((([&]() -> pls::cs::FloatEval {
                        auto cs_left = pls::cs::Single((([&]() -> pls::cs::Int32 {
                            auto cs_left = pls::cs::cast_integral<pls::cs::Int32>(boundingRect[0]);
                            auto cs_right = boundingRect[2] / 2;
                            return cs_left + cs_right;
                        }())));
                        auto cs_right = (imageRect[0] + imageRect[2] / 2.0f);
                        return cs_left - cs_right;
                    }())));
                    y += pls::cs::to_int32((([&]() -> pls::cs::FloatEval {
                        auto cs_left = pls::cs::Single((([&]() -> pls::cs::Int32 {
                            auto cs_left = pls::cs::cast_integral<pls::cs::Int32>(boundingRect[1]);
                            auto cs_right = boundingRect[3] / 2;
                            return cs_left + cs_right;
                        }())));
                        auto cs_right = (imageRect[1] + imageRect[3] / 2.0f);
                        return cs_left - cs_right;
                    }())));
                    num = pls::cs::to_int32((pls::cs::Single(x) + imageRect[0]));
                    num2 = pls::cs::to_int32((pls::cs::Single(y) + imageRect[1]));
                    num3 = pls::cs::to_int32(imageRect[2]);
                    num4 = pls::cs::to_int32(imageRect[3]);
                    if (id == 18) {
                        if ((num6 == 3)) {
                            num -= 30;
                            num2 -= 10;
                            num3 += 40;
                            num4 += 20;
                        } else if ((num6 == 1)) {
                            num -= 10;
                            num2 -= 10;
                            num3 += 40;
                            num4 += 20;
                        }
                    }
                    require(GameView::instance_())->DrawImage(g, x, y, num5);
                    break;
                }
            }
            }
        }
        pls::cs::Ref<kairo::unity::surface::TouchComponent> touchComponent =
            require(GameView::instance_())->_addTouch(g, id, num, num2, num3, num4, value, opt);
        if (is_null(touchComponent)) {
            return pls::cs::Ref<kairo::unity::surface::TouchComponent>{};
        }
        if (is_null(g)) {
            require(touchComponent)->SetPaint(x, y, frame);
        } else {
            {
                pls::cs::Int32 cs_arg0 = PLS_API(require(g)->GetOriginX()) + x;
                pls::cs::Int32 cs_arg1 = PLS_API(require(g)->GetOriginY()) + y;
                require(touchComponent)->SetPaint(cs_arg0, cs_arg1, frame);
            }
        }
        return touchComponent;
    }
}

// M:surface.GameView._addTouch(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,kairo.unity.surface.TouchOption)
pls::cs::Ref<kairo::unity::surface::TouchComponent>
GameView::_addTouch(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 id, pls::cs::Int32 x,
                    pls::cs::Int32 y, pls::cs::Int32 w, pls::cs::Int32 h, pls::cs::Int32 value,
                    pls::cs::Ref<kairo::unity::surface::TouchOption> opt) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView._addTouch(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,kairo.unity.surface.TouchOption)",
        game);
    {
        kl_cfg::Config::ensure_initialized();

        if (id == 2) {
            if (is_null(opt)) {
                opt = kairo::unity::surface::TouchOption::create();
            }
            require(opt)->Flag(require(opt)->flag | 0x400);
        }
        if (!is_null(g)) {
            {
                if ((id == 21)) {
                    if (CheckTouch(id, value)) {
                        DrawImage(g, x + w - 15, y + h / 2, 6);
                    } else {
                        DrawImage(g, x + w - 15, y + h / 2, 4);
                    }
                } else if ((id == 20)) {
                    if (CheckTouch(id, value)) {
                        DrawImage(g, x + 15, y + h / 2, 7);
                    } else {
                        DrawImage(g, x + 15, y + h / 2, 5);
                    }
                } else if ((id == 19)) {
                    pls::cs::Int32 num12 = y + (h - 4) / 2;
                    PLS_API(require(g)->SetColor(30, 30, 30));
                    PLS_API(require(g)->FillRect(x + 1, num12, w - 2, 4.0f));
                    PLS_API(require(g)->FillRect(x, num12 + 1, w, 2.0f));
                    pls::cs::Int32 num13 = (w - 2) / (require(opt)->dragCell[4] - 1);
                    DrawImage(g, x + Get(value) * num13, num12 + 2, 11);
                    x = x + Get(value) * num13 - 15;
                    w = 32;
                } else if ((id == 12) || (id == 14) || (id == 15)) {
                    pls::cs::Int32 num = require(opt)->args[0];
                    pls::cs::Int32 num2 = require(opt)->args[1];
                    bool flag = CheckFirstTouch(id, value);
                    IntArray array = IntArray{};
                    if (num <= num2) {
                        flag = false;
                    }
                    if (flag) {
                        GameView::ClearMarker();
                    }
                    addScrollMargin_ = (!is_null(opt) && (require(opt)->flag & 0x200) != 0);
                    if (id == 12 || id == 14) {
                        array = DrawVerticalScroll(g, x, y, w, h, Get(value), num - 1, num2, flag,
                                                   (id == 12) ? 0 : 1);
                    }
                    if ([&]() {
                            auto cs_left = pls::cs::box(array);
                            auto cs_right = pls::cs::box(IntArray{});
                            return cs_left != cs_right;
                        }()) {
                        if (flag && num - num2 > 0) {
                            require(opt)->flag = (require(opt)->flag | 36);
                            if (id == 15) {
                                pls::cs::Int32 num3 = x;
                                pls::cs::Int32 num4 = y;
                                pls::cs::Int32 num5 = w;
                                pls::cs::Int32 num6 = h;
                                pls::cs::Int32 num7 = 0;
                                pls::cs::Int32 num8 = 0;
                                if (!is_null(g)) {
                                    num7 = PLS_API(require(g)->GetOriginX());
                                    num8 = PLS_API(require(g)->GetOriginY());
                                    num3 += num7;
                                    num4 += num8;
                                }
                                if (!is_null(g) && ([&]() -> bool {
                                        auto cs_left = PLS_API(pls::cs::Single(require(g)->GetScale()));
                                        auto cs_right = GetScaleRatio();
                                        return cs_left != cs_right;
                                    }())) {
                                    auto cs_left_57 =
                                        pls::cs::Double(PLS_API(pls::cs::Single(require(g)->GetScale())));
                                    auto cs_right_57 = pls::cs::Double(GetScaleRatio());
                                    pls::cs::Double num9 = cs_left_57 / cs_right_57;
                                    num3 = num7 + pls::cs::to_int32((pls::cs::Double((num3 - num7)) * num9));
                                    num4 = num8 + pls::cs::to_int32((pls::cs::Double((num4 - num8)) * num9));
                                    num5 = pls::cs::to_int32((pls::cs::Double(num5) * num9));
                                    num6 = pls::cs::to_int32((pls::cs::Double(num6) * num9));
                                    num3 += pls::cs::to_int32(
                                        (([&]() -> pls::cs::FloatEval {
                                             auto cs_left = pls::cs::Single(
                                                 (PLS_API(require(g)->GetRenderRect())[0] * 100));
                                             auto cs_right = GetScaleRatio();
                                             return cs_left / cs_right;
                                         }()) +
                                         0.01f));
                                    num4 += pls::cs::to_int32(
                                        (([&]() -> pls::cs::FloatEval {
                                             auto cs_left = pls::cs::Single(
                                                 (PLS_API(require(g)->GetRenderRect())[1] * 100));
                                             auto cs_right = GetScaleRatio();
                                             return cs_left / cs_right;
                                         }()) +
                                         0.01f));
                                }
                                {
                                    auto cs_target = opt;
                                    auto cs_value =
                                        IntArray::from({num3, num4, num5, num6, 0, num, Get(value), num2});
                                    require(cs_target)->dragCell = cs_value;
                                }
                            } else {
                                pls::cs::Int32 num10 = x;
                                pls::cs::Int32 num11 = y;
                                if (!is_null(g)) {
                                    num10 += PLS_API(require(g)->GetOriginX());
                                    num11 += PLS_API(require(g)->GetOriginY());
                                }
                                if (num2 == 1) {
                                    {
                                        auto cs_target = opt;
                                        auto cs_value = IntArray::from({num10, num11, w, h, 0, num});
                                        require(cs_target)->dragCell = cs_value;
                                    }
                                } else {
                                    {
                                        auto cs_target = opt;
                                        pls::cs::Single cs_value =
                                            pls::cs::Single((h - array[1])) / pls::cs::Single((num - num2));
                                        require(cs_target)->dragGridH = cs_value;
                                    }
                                    if (require(opt)->dragGridH <= 0.0f) {
                                        require(opt)->dragGridH = 1.0f;
                                    }
                                }
                            }
                            x -= 30;
                            y = -1000;
                            w = 125;
                            h = 2000;
                        } else {
                            y = array[0];
                            w = 5;
                            h = array[1];
                        }
                    }
                }
            cs_label_dispatchExit:;
                ;
            }
        }
        if ([&]() {
                auto cs_left = pls::cs::box(PLS_API(require(formMan_)->GetCurrentForm()));
                auto cs_right = pls::cs::box(PLS_API(require(formMan_)->GetTopForm()));
                return cs_left != cs_right;
            }()) {
            pls::cs::Ref<pls::kairo::FormBase> topForm = PLS_API(require(formMan_)->GetTopForm());
            pls::cs::Ref<pls::kairo::FormBase> currentForm = PLS_API(require(formMan_)->GetCurrentForm());
            if (([&]() -> bool {
                    auto cs_left = PLS_API(require(topForm)->GetId());
                    auto cs_right = PLS_API(require(currentForm)->GetId());
                    return cs_left != cs_right;
                }()) ||
                PLS_API(require(topForm)->GetId()) != 4 ||
                !require((pls::cs::unbox<pls::cs::Ref<form::SubForm>>(pls::cs::box(topForm))))->IsMenu() ||
                !require((pls::cs::unbox<pls::cs::Ref<form::SubForm>>(pls::cs::box(currentForm))))
                     ->IsMenu()) {
                return pls::cs::Ref<kairo::unity::surface::TouchComponent>{};
            }
        }
        if (!is_null(opt) && (require(opt)->flag & 0x40) != 0) {
            return pls::cs::Ref<kairo::unity::surface::TouchComponent>{};
        }
        if (value < 0 && kl_cfg::Config::PRINT()) {
            pls::cs::Ref<kairo::unity::ui::Dialog> dialog =
                kairo::unity::ui::Dialog::create(1, literal(u"GameTouch._addTouch"));
            require(dialog)->SetText(pls::cs::String::concat(
                pls::cs::String::concat(literal(u"valueの値が不正です(value="), integer_string(value)),
                literal(u")")));
            require(dialog)->Show();
            PLS_API(require(app_)->Terminate());
            return pls::cs::Ref<kairo::unity::surface::TouchComponent>{};
        }
        pls::cs::Int32 num14 = 0;
        pls::cs::Int32 num15 = 0;
        if (!is_null(g)) {
            num14 = PLS_API(require(g)->GetOriginX());
            num15 = PLS_API(require(g)->GetOriginY());
            x += num14;
            y += num15;
            PLS_API(require(g)->SetOrigin(0, 0));
        }
        pls::cs::Int32 x2 = x;
        pls::cs::Int32 y2 = y;
        {
            auto cs_flow_95 = pls::cs::run_finally(
                [&]() -> pls::cs::Flow<pls::cs::Ref<kairo::unity::surface::TouchComponent>> {
                    {
                        if (!is_null(g) && !is_null(opt)) {
                            if ((require(opt)->flag & 0x10) != 0 && GameView::CheckMarker(id, value) &&
                                !IsTouch()) {
                                AddDelayPaintBuffer(
                                    g, IntArray::from({0, x + PLS_API(require(g)->GetOriginX()),
                                                       y + PLS_API(require(g)->GetOriginY()), w, h}));
                            }
                            pls::cs::Int32 color = PLS_API(require(g)->GetColor());
                            pls::cs::Int32 colorOfRGB =
                                PLS_API(pls::kairo::Graphics::GetColorOfRGB(239, 154, 22));
                            if ((require(opt)->flag & 0x100) != 0 &&
                                (value == 0 || Get(value) != (value & 0xFFFF))) {
                                PLS_API(require(g)->SetColor(colorOfRGB));
                                pls::cs::Int32 num16 = pls::cs::to_int32(
                                    (96.0 * PLS_API(kl_lang::JMath::Sin(
                                                PLS_API(kl_lang::JMath::ToRadians(loopFrame_ % 45 * 4))))));
                                PLS_API(require(g)->SetRenderMode(1, num16, 255 - num16));
                                if ([&]() {
                                        auto cs_left = pls::cs::box(require(opt)->args);
                                        auto cs_right = pls::cs::box(IntArray{});
                                        return cs_left != cs_right;
                                    }()) {
                                    PLS_API(([&]() -> void {
                                        pls::cs::Single cs_arg0 = require(opt)->args[0] + num14;
                                        pls::cs::Single cs_arg1 = require(opt)->args[1] + num15;
                                        pls::cs::Single cs_arg2 = require(opt)->args[2];
                                        pls::cs::Single cs_arg3 = require(opt)->args[3];
                                        require(g)->FillRect(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                                    }()));
                                } else {
                                    PLS_API(require(g)->FillRect(x, y, w, h));
                                }
                                PLS_API(require(g)->SetRenderMode());
                            }
                            if ((require(opt)->flag & 0x80) != 0) {
                                PLS_API(require(g)->SetColor(colorOfRGB));
                                pls::cs::Int32 num17 = loopFrame_ / 12 % 2;
                                pls::cs::Int32 num18 = x + num17;
                                pls::cs::Int32 num19 = y + num17;
                                pls::cs::Int32 num20 = w - num17 * 2;
                                pls::cs::Int32 num21 = h - num17 * 2;
                                PLS_API(require(g)->DrawRect(num18, num19, num20, num21));
                            }
                            if ((require(opt)->flag & 0x800) != 0 && CheckTouch(id, value)) {
                                PLS_API(require(g)->SetColor(255, 255, 255));
                                PLS_API(require(g)->PushRenderMode(1, 64, 255));
                                if (!is_null(opt) && ([&]() {
                                        auto cs_left = pls::cs::box(require(opt)->args);
                                        auto cs_right = pls::cs::box(IntArray{});
                                        return cs_left != cs_right;
                                    }())) {
                                    PLS_API(([&]() -> void {
                                        pls::cs::Single cs_arg0 = require(opt)->args[0] + num14;
                                        pls::cs::Single cs_arg1 = require(opt)->args[1] + num15;
                                        pls::cs::Single cs_arg2 = require(opt)->args[2];
                                        pls::cs::Single cs_arg3 = require(opt)->args[3];
                                        require(g)->FillRect(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                                    }()));
                                } else {
                                    PLS_API(require(g)->FillRect(x, y, w, h));
                                }
                                PLS_API(require(g)->PopRenderMode());
                            }
                            PLS_API(require(g)->SetColor(color));
                        }
                        if (!SurfaceBase::get_registTouch(pls::cs::static_pointer_cast<SurfaceBase>(this))) {
                            return pls::cs::flow_return(
                                pls::cs::Ref<kairo::unity::surface::TouchComponent>{});
                        }
                        IntArray array2 = GameView::TOUCHPARAMS()[id];
                        if (!is_null(opt) && ([&]() {
                                auto cs_left = pls::cs::box(require(opt)->margin);
                                auto cs_right = pls::cs::box(IntArray{});
                                return cs_left != cs_right;
                            }())) {
                            array2 = require(opt)->margin;
                        }
                        pls::cs::Int32 num22 = x - array2[0];
                        pls::cs::Int32 num23 = x + w + array2[1];
                        pls::cs::Int32 num24 = y - array2[2];
                        pls::cs::Int32 num25 = y + h + array2[3];
                        switch (id) {
                        case 8: {
                            if ([&]() {
                                    auto cs_left = pls::cs::box(PLS_API(require(formMan_)->GetCurrentForm()));
                                    auto cs_right = pls::cs::box(PLS_API(require(formMan_)->GetTopForm()));
                                    return cs_left != cs_right;
                                }()) {
                                num23 = x + w;
                            }
                            break;
                        }
                        case 9: {
                            if (!is_null(GetComponentId(8))) {
                                num22 = x;
                            }
                            break;
                        }
                        case 13: {
                            {
                                pls::cs::Int32 componentLength = GetComponentLength();
                                for (pls::cs::Int32 i = 0; i < componentLength; ++i) {
                                    pls::cs::Ref<kairo::unity::surface::TouchComponent> component =
                                        GetComponent(i);
                                    if (require(component)->id != 2 && require(component)->id != 3) {
                                        continue;
                                    }
                                    {
                                        pls::cs::Int32 num26 = (value & 0xFFFF);
                                        if (num26 == 0 &&
                                            CheckHitRect(num22, num24, num23 - num22, num25 - num24,
                                                         require(component)->x, require(component)->y,
                                                         require(component)->width,
                                                         require(component)->height)) {
                                            num24 = require(component)->y + require(component)->height;
                                        }
                                        if (num26 == 1 &&
                                            CheckHitRect(num22, num24, num23 - num22, num25 - num24,
                                                         require(component)->x, require(component)->y,
                                                         require(component)->width,
                                                         require(component)->height)) {
                                            num25 = require(component)->y;
                                        }
                                    }
                                }
                                break;
                            }
                        }
                        case 12:
                        case 14:
                        case 15:
                        case 22: {
                            if (CheckFirstTouch(id, value)) {
                                if (is_null(opt)) {
                                    opt = kairo::unity::surface::TouchOption::create();
                                }
                                require(opt)->flag = (require(opt)->flag | 8);
                            } else {
                                num24 -= 20;
                                num25 += 20;
                            }
                            break;
                        }
                        case 19: {
                            if (CheckFirstTouch(id, value)) {
                                require(opt)->flag = (require(opt)->flag | 8);
                                num22 = 0;
                                num24 = 0;
                                num23 = GetGameWidth();
                                num25 = GetGameHeight();
                            }
                            break;
                        }
                        case 11: {
                            if (addScrollMargin_) {
                                num23 += 120;
                            }
                            break;
                        }
                        }
                        if (!is_null(g)) {
                        }
                        if (GameView::TOUCHPARAMS()[id][5] == 1 &&
                            (is_null(opt) || (require(opt)->flag & 0x20) == 0)) {
                            pls::cs::Single num27 =
                                ((!is_null(g)) ? PLS_API(pls::cs::Single(require(g)->GetScale()))
                                               : GetScaleRatio());
                            pls::cs::Int32 num28 =
                                pls::cs::to_int32((pls::cs::Single((GetWidth() * 100)) / num27 + 0.01f));
                            pls::cs::Int32 num29 =
                                pls::cs::to_int32((pls::cs::Single((GetHeight() * 100)) / num27 + 0.01f));
                            if (num22 < 0) {
                                num22 = 0;
                            }
                            if (num24 < 0) {
                                num24 = 0;
                            }
                            if (num23 > num28) {
                                num23 = num28;
                            }
                            if (num25 > num29) {
                                num25 = num29;
                            }
                        }
                        x = num22;
                        y = num24;
                        w = num23 - num22;
                        h = num25 - num24;
                        if (!is_null(g) && ([&]() -> bool {
                                auto cs_left = PLS_API(pls::cs::Single(require(g)->GetScale()));
                                auto cs_right = GetScaleRatio();
                                return cs_left != cs_right;
                            }())) {
                            auto cs_left_58 =
                                pls::cs::Double(PLS_API(pls::cs::Single(require(g)->GetScale())));
                            auto cs_right_58 = pls::cs::Double(GetScaleRatio());
                            pls::cs::Double num30 = cs_left_58 / cs_right_58;
                            x = num14 + pls::cs::to_int32((pls::cs::Double((x - num14)) * num30));
                            y = num15 + pls::cs::to_int32((pls::cs::Double((y - num15)) * num30));
                            w = pls::cs::to_int32((pls::cs::Double(w) * num30));
                            h = pls::cs::to_int32((pls::cs::Double(h) * num30));
                        }
                        pls::cs::Ref<kairo::unity::surface::TouchComponent> touchComponent =
                            AddTouchComponent(id, x, y, w, h, value, opt);
                        require(touchComponent)->SetPaint(x2, y2);
                        pls::cs::Int32 num31 = 0;
                        if (GameView::TOUCHPARAMS()[id][4] == 1) {
                            num31 = (num31 | (pls::cs::Int32(1) << id));
                        }
                        if (!is_null(opt)) {
                            num31 = (num31 | require(opt)->collisionBits);
                        }
                        pls::cs::Int32 componentLength2 = GetComponentLength();
                        for (pls::cs::Int32 j = 0; j < componentLength2; ++j) {
                            pls::cs::Ref<kairo::unity::surface::TouchComponent> component2 = GetComponent(j);
                            if (pls::cs::box(component2) == pls::cs::box(touchComponent)) {
                                continue;
                            }
                            pls::cs::Int32 num32 = 0;
                            if (GameView::TOUCHPARAMS()[require(component2)->id][4] == 1) {
                                num32 = (num32 | (pls::cs::Int32(1) << require(component2)->id));
                            }
                            if (!is_null(require(component2)->option)) {
                                num32 = (num32 | require(require(component2)->option)->collisionBits);
                            }
                            if (((num32 & (pls::cs::Int32(1) << require(touchComponent)->id)) == 0 &&
                                 (num31 & (pls::cs::Int32(1) << require(component2)->id)) == 0)) {
                                continue;
                            }
                            if (([&]() -> bool {
                                    auto cs_left = require(touchComponent)->GetPriority();
                                    auto cs_right = require(component2)->GetPriority();
                                    return cs_left != cs_right;
                                }()) ||
                                !CheckHitRect(require(touchComponent)->x, require(touchComponent)->y,
                                              require(touchComponent)->width, require(touchComponent)->height,
                                              require(component2)->x, require(component2)->y,
                                              require(component2)->width, require(component2)->height)) {
                                continue;
                            }
                            pls::cs::Int32 num33 = require(touchComponent)->width -
                                                   (require(component2)->x - require(touchComponent)->x);
                            if (require(component2)->x < require(touchComponent)->x) {
                                num33 = require(component2)->width -
                                        (require(touchComponent)->x - require(component2)->x);
                            }
                            pls::cs::Int32 num34 = require(touchComponent)->height -
                                                   (require(component2)->y - require(touchComponent)->y);
                            if (require(component2)->y < require(touchComponent)->y) {
                                num34 = require(component2)->height -
                                        (require(touchComponent)->y - require(component2)->y);
                            }
                            bool flag2 = num33 < num34;
                            if (require(touchComponent)->x == require(component2)->x &&
                                require(touchComponent)->width == require(component2)->width) {
                                flag2 = false;
                            }
                            if (require(touchComponent)->y == require(component2)->y &&
                                require(touchComponent)->height == require(component2)->height) {
                                flag2 = true;
                            }
                            pls::cs::Ref<kairo::unity::surface::TouchComponent> touchComponent2 =
                                touchComponent;
                            pls::cs::Ref<kairo::unity::surface::TouchComponent> touchComponent3 = component2;
                            if (flag2) {
                                if (require(touchComponent3)->x < require(touchComponent2)->x) {
                                    touchComponent2 = component2;
                                    touchComponent3 = touchComponent;
                                }
                                require(touchComponent2)->width = require(touchComponent2)->width - num33 / 2;
                                num33 -= num33 / 2;
                                require(touchComponent3)->x = require(touchComponent3)->x + num33;
                                require(touchComponent3)->width = require(touchComponent3)->width - num33;
                            } else {
                                if (require(touchComponent3)->y < require(touchComponent2)->y) {
                                    touchComponent2 = component2;
                                    touchComponent3 = touchComponent;
                                }
                                require(touchComponent2)->height =
                                    require(touchComponent2)->height - num34 / 2;
                                num34 -= num34 / 2;
                                require(touchComponent3)->y = require(touchComponent3)->y + num34;
                                require(touchComponent3)->height = require(touchComponent3)->height - num34;
                            }
                        }
                        return pls::cs::flow_return(touchComponent);
                    }
                    return {};
                },
                [&]() {
                    if (!is_null(g)) {
                        PLS_API(require(g)->SetOrigin(num14, num15));
                    }
                });
            return cs_flow_95.value();
        }
    }
}

// M:surface.GameView.CheckMarker(System.Int64)
bool GameView::CheckMarker(pls::cs::Int64 key) {
    GameView::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GameView.CheckMarker(System.Int64)", game);
    {
        if (is_null(GameView::instance_())) {
            return false;
        }
        return require(GameView::instance_())->markComponentKey_ == key;
    }
}

// M:surface.GameView.CheckMarker(System.Int32,System.Int32)
bool GameView::CheckMarker(pls::cs::Int32 id, pls::cs::Int32 value) {
    GameView::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GameView.CheckMarker(System.Int32,System.Int32)", game);
    {
        if (is_null(GameView::instance_())) {
            return false;
        }
        {
            auto cs_left_62 = require(GameView::instance_())->markComponentKey_;
            auto cs_right_62 = kairo::unity::surface::TouchComponent::GetKey(id, value);
            return cs_left_62 == cs_right_62;
        }
    }
}

// M:surface.GameView.ClearMarker
void GameView::ClearMarker() {
    GameView::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GameView.ClearMarker", game);
    {
        if (is_null(GameView::instance_())) {
            return;
        }
        {
            require(GameView::instance_())->markComponentKey_ = -1ll;
            require(GameView::instance_())->markComponentFrame_ = 0;
        }
    }
}

// M:surface.GameView.OnKeyDown(System.Int32)
void GameView::OnKeyDown(pls::cs::Int32 key) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GameView.OnKeyDown(System.Int32)", game);
    {
        GameView::ClearMarker();
    }
}

// M:surface.GameView.Set(System.Int32,kairo.unity.surface.TouchComponent)
void GameView::Set(pls::cs::Int32 value, pls::cs::Ref<kairo::unity::surface::TouchComponent> c) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:surface.GameView.Set(System.Int32,kairo.unity.surface.TouchComponent)", game);
    {
        {
            pls::cs::Ref<pls::kairo::TouchValueAccessor> cs_arg0 = GetTouchValueAccessor();
            pls::cs::Int32 cs_arg1 = pls::cs::to_int32((pls::cs::Int64(value) & pls::cs::Int64(0xFFFF0000u)));
            pls::cs::Int32 cs_arg2 =
                pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_unity_util::BitUtil::Split(value))[1]);
            Set(cs_arg0, cs_arg1, cs_arg2, c);
        }
    }
}

// M:surface.GameView.Set(kairo.unity.surface.TouchValueAccessor,System.Int32,kairo.unity.surface.TouchComponent)
void GameView::Set(pls::cs::Ref<pls::kairo::TouchValueAccessor> va, pls::cs::Int32 value,
                   pls::cs::Ref<kairo::unity::surface::TouchComponent> c) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.Set(kairo.unity.surface.TouchValueAccessor,System.Int32,kairo.unity.surface.TouchComponent)",
        game);
    {
        Set(va, pls::cs::to_int32((pls::cs::Int64(value) & pls::cs::Int64(0xFFFF0000u))),
            pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_unity_util::BitUtil::Split(value))[1]), c);
    }
}

// M:surface.GameView.Set(System.Int32,System.Int32,kairo.unity.surface.TouchComponent)
void GameView::SetInt(pls::cs::Int32 type, pls::cs::Int32 value,
                      pls::cs::Ref<kairo::unity::surface::TouchComponent> c) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:surface.GameView.Set(System.Int32,System.Int32,kairo.unity.surface.TouchComponent)",
                     game);
    {
        Set(GetTouchValueAccessor(), type, value, c);
    }
}

// M:surface.GameView.Set(kairo.unity.surface.TouchValueAccessor,System.Int32,System.Int32,kairo.unity.surface.TouchComponent)
void GameView::Set(pls::cs::Ref<pls::kairo::TouchValueAccessor> va, pls::cs::Int32 type, pls::cs::Int32 value,
                   pls::cs::Ref<kairo::unity::surface::TouchComponent> c) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.Set(kairo.unity.surface.TouchValueAccessor,System.Int32,System.Int32,kairo.unity.surface.TouchComponent)",
        game);
    {
        type = pls::cs::to_int32((pls::cs::Int64(type) & pls::cs::Int64(0xFFFF0000u)));
        if (type != 0) {
            PLS_API(require(va)->SetTouchValue(type, value));
        }
        if ((!is_null(c) && !is_null(require(c)->option)) && ([&]() {
                auto cs_left = pls::cs::box(require(require(c)->option)->extendValues);
                auto cs_right = pls::cs::box(IntArray{});
                return cs_left != cs_right;
            }())) {
            IntArray extendValues = require(require(c)->option)->extendValues;
            for (pls::cs::Int32 i = 0; i < extendValues.length(); ++i) {
                PLS_API(([&]() -> void {
                    pls::cs::Int32 cs_arg0 =
                        pls::cs::to_int32((pls::cs::Int64(extendValues[i]) & pls::cs::Int64(0xFFFF0000u)));
                    pls::cs::Int32 cs_arg1 = pls::cs::cast_integral<pls::cs::Int32>(
                        PLS_API(kl_unity_util::BitUtil::Split(extendValues[i]))[1]);
                    require(va)->SetTouchValue(cs_arg0, cs_arg1);
                }()));
            }
        }
    }
}

// M:surface.GameView.Get(System.Int32)
pls::cs::Int32 GameView::Get(pls::cs::Int32 type) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GameView.Get(System.Int32)", game);
    {
        return Get(GetTouchValueAccessor(), type);
    }
}

// M:surface.GameView.Get(kairo.unity.surface.TouchValueAccessor,System.Int32)
pls::cs::Int32 GameView::Get(pls::cs::Ref<pls::kairo::TouchValueAccessor> va, pls::cs::Int32 type) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:surface.GameView.Get(kairo.unity.surface.TouchValueAccessor,System.Int32)", game);
    {
        type = pls::cs::to_int32((pls::cs::Int64(type) & pls::cs::Int64(0xFFFF0000u)));
        return PLS_API(require(va)->GetTouchValue(type, 0));
    }
}

// M:surface.GameView.CheckHitRect(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
bool GameView::CheckHitRect(pls::cs::Int32 x1, pls::cs::Int32 y1, pls::cs::Int32 w1, pls::cs::Int32 h1,
                            pls::cs::Int32 x2, pls::cs::Int32 y2, pls::cs::Int32 w2, pls::cs::Int32 h2) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.CheckHitRect(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        return x1 <= x2 + w2 && y1 <= y2 + h2 && x1 + w1 >= x2 && y1 + h1 >= y2;
    }
}

// M:surface.GameView.Join(System.Int32,System.Int32)
pls::cs::Int32 GameView::Join(pls::cs::Int32 type, pls::cs::Int32 v) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GameView.Join(System.Int32,System.Int32)", game);
    {
        std::int16_t high = pls::cs::cast_integral<std::int16_t>(type);
        if (type < -32768 || 32767 < type) {
            high = pls::cs::cast_integral<std::int16_t>((type >> 16));
        }
        return PLS_API(kl_unity_util::BitUtil::Join(high, pls::cs::cast_integral<std::int16_t>(v)));
    }
}

// M:surface.GameView.GetTouchValueAccessor
pls::cs::Ref<pls::kairo::TouchValueAccessor> GameView::GetTouchValueAccessor() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GameView.GetTouchValueAccessor", game);
    {
        return PLS_API(require(formMan_)->GetTopForm());
    }
}

// M:surface.GameView.OnTouchEvent(kairo.unity.surface.TouchEvent)
void GameView::OnTouchEvent(pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GameView.OnTouchEvent(kairo.unity.surface.TouchEvent)",
                     game);
    {
        pls::cs::Ref<kairo::unity::surface::TouchComponent> component = require(e)->component;
        if (is_instance<pls::cs::Ref<form::MyFormBase>>(
                pls::cs::box(PLS_API(require(formMan_)->GetTopForm())))) {
            pls::cs::Ref<form::MyFormBase> myFormBase = pls::cs::unbox<pls::cs::Ref<form::MyFormBase>>(
                pls::cs::box(PLS_API(require(formMan_)->GetTopForm())));
            if (!require(myFormBase)->OnTouchEvent(e)) {
                return;
            }
        }
        switch (require(component)->id) {
        case 0: {
            OnTouchTitleMenu(require(e)->type, require(component)->value, e);
            break;
        }
        case 1:
        case 18: {
            OnTouchDlgPage(require(e)->type, require(component)->value, e);
            break;
        }
        case 26: {
            OnTouchDlgPage2(require(e)->type, require(component)->value, e);
            break;
        }
        case 24: {
            OnTouchDlgPage(require(e)->type, require(component)->value, e);
            break;
        }
        case 2: {
            OnTouchDlgCmd(require(e)->type, require(component)->value, e);
            break;
        }
        case 3: {
            OnTouchDlgSel(require(e)->type, require(component)->value, e);
            break;
        }
        case 4: {
            OnTouchKeyClick(require(e)->type, require(component)->value, e);
            break;
        }
        case 5: {
            OnTouchKeyPress(require(e)->type, require(component)->value, e);
            break;
        }
        case 6: {
            OnTouchKeyDown(require(e)->type, require(component)->value, e);
            break;
        }
        case 7: {
            OnTouchKeyUp(require(e)->type, require(component)->value, e);
            break;
        }
        case 8: {
            OnTouchMainMenu(require(e)->type, require(component)->value, e);
            break;
        }
        case 9: {
            OnTouchSubMenu(require(e)->type, require(component)->value, e);
            break;
        }
        case 10: {
            OnTouchList(require(e)->type, require(component)->value, e);
            break;
        }
        case 11:
        case 23: {
            OnTouchScrollList(require(e)->type, require(component)->value, e);
            break;
        }
        case 12:
        case 14:
        case 15:
        case 22: {
            OnTouchVScrollBar(require(e)->type, require(component)->value, e);
            break;
        }
        case 13: {
            OnTouchVScrollButton(require(e)->type, require(component)->value, e);
            break;
        }
        case 16: {
            OnTouchUnMarker(require(e)->type, require(component)->value, e);
            break;
        }
        case 17: {
            OnTouchCamera(require(e)->type, require(component)->value, e);
            break;
        }
        case 19: {
            OnTouchTrackBar(require(e)->type, require(component)->value, e);
            break;
        }
        case 20: {
            OnTouchKeyClick(require(e)->type, require(component)->value, e);
            break;
        }
        case 21: {
            OnTouchKeyClick(require(e)->type, require(component)->value, e);
            break;
        }
        case 27: {
            OnTouchRect(require(e)->type, require(component)->value, e);
            break;
        }
        }
        return;
    }
}

// M:surface.GameView.OnTouchTitleMenu(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void GameView::OnTouchTitleMenu(pls::cs::Int32 type, pls::cs::Int32 v,
                                pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.OnTouchTitleMenu(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)",
        game);
    {
        switch (type) {
        case 2: {
            SetInt(196608, v, require(e)->component);
            break;
        }
        case 1: {
            PLS_API(([&]() -> void {
                auto cs_receiver = canvas_;
                pls::cs::Int32 cs_arg0 = GetKey(require(e)->component, 1048576);
                require(cs_receiver)->KeyClick(cs_arg0);
            }()));
            break;
        }
        }
    }
}

// M:surface.GameView.OnTouchDlgPage(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void GameView::OnTouchDlgPage(pls::cs::Int32 type, pls::cs::Int32 v,
                              pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.OnTouchDlgPage(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)", game);
    {
        pls::cs::Ref<kairo::unity::surface::TouchComponent> component = require(e)->component;
        pls::cs::Ref<TouchEffect> touchEffect = pls::cs::Ref<TouchEffect>{};
        switch (type) {
        case 0: {
            PLS_API(([&]() -> void {
                auto cs_receiver = canvas_;
                pls::cs::Int32 cs_arg0 = GetKey(require(e)->component, pls::cs::Int32(1) << v);
                require(cs_receiver)->KeyDown(cs_arg0, true);
            }()));
            if (v == 16) {
                touchEffect =
                    AddEffect(0, require(component)->paintX, require(component)->paintY, 2, component);
                require(touchEffect)->vx_ = -10.0f;
            } else if (v == 18) {
                touchEffect =
                    AddEffect(0, require(component)->paintX, require(component)->paintY, 3, component);
                require(touchEffect)->vx_ = 10.0f;
            } else if (v == 17) {
                touchEffect =
                    AddEffect(0, require(component)->paintX, require(component)->paintY, 14, component);
                require(touchEffect)->vy_ = -10.0f;
            } else if (v == 19) {
                touchEffect =
                    AddEffect(0, require(component)->paintX, require(component)->paintY, 15, component);
                require(touchEffect)->vy_ = 10.0f;
            }
            break;
        }
        case 6:
        case 10: {
            PLS_API(([&]() -> void {
                auto cs_receiver = canvas_;
                pls::cs::Int32 cs_arg0 = GetKey(require(e)->component, pls::cs::Int32(1) << v);
                require(cs_receiver)->KeyUp(cs_arg0);
            }()));
            break;
        }
        }
    }
}

// M:surface.GameView.OnTouchDlgPage2(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void GameView::OnTouchDlgPage2(pls::cs::Int32 type, pls::cs::Int32 v,
                               pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.OnTouchDlgPage2(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)", game);
    {
        pls::cs::Ref<kairo::unity::surface::TouchComponent> component = require(e)->component;
        pls::cs::Ref<TouchEffect> touchEffect = pls::cs::Ref<TouchEffect>{};
        switch (type) {
        case 5: {
            PLS_API(require(canvas_)->KeyClick(pls::cs::Int32(1) << v));
            if (v == 16) {
                touchEffect =
                    AddEffect(0, require(component)->paintX, require(component)->paintY, 2, component);
                require(touchEffect)->vx_ = -10.0f;
            } else if (v == 18) {
                touchEffect =
                    AddEffect(0, require(component)->paintX, require(component)->paintY, 3, component);
                require(touchEffect)->vx_ = 10.0f;
            } else if (v == 17) {
                touchEffect =
                    AddEffect(0, require(component)->paintX, require(component)->paintY, 14, component);
                require(touchEffect)->vy_ = -10.0f;
            } else if (v == 19) {
                touchEffect =
                    AddEffect(0, require(component)->paintX, require(component)->paintY, 15, component);
                require(touchEffect)->vy_ = 10.0f;
            }
            break;
        }
        case 1:
        case 2: {
            Set(v, require(e)->component);
            if (type == 1) {
                if (require(component)->Check(16) && ([&]() -> bool {
                        auto cs_left = markComponentKey_;
                        auto cs_right = require(component)->GetKey();
                        return cs_left != cs_right;
                    }())) {
                    markComponentKey_ = require(require(e)->component)->GetKey();
                } else {
                    PLS_API(require(canvas_)->KeyClick(1048576));
                }
            }
            break;
        }
        case 6:
        case 10: {
            PLS_API(([&]() -> void {
                auto cs_receiver = canvas_;
                pls::cs::Int32 cs_arg0 = GetKey(require(e)->component, pls::cs::Int32(1) << v);
                require(cs_receiver)->KeyUp(cs_arg0);
            }()));
            break;
        }
        }
    }
}

// M:surface.GameView.OnTouchDlgCmd(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void GameView::OnTouchDlgCmd(pls::cs::Int32 type, pls::cs::Int32 v,
                             pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.OnTouchDlgCmd(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)", game);
    {
        switch (type) {
        case 1:
        case 2: {
            {
                Set(v, require(e)->component);
                if (type == 1) {
                    PLS_API(([&]() -> void {
                        auto cs_receiver = canvas_;
                        pls::cs::Int32 cs_arg0 = GetKey(require(e)->component, 1048576);
                        require(cs_receiver)->KeyClick(cs_arg0);
                    }()));
                }
                break;
            }
        }
        }
    }
}

// M:surface.GameView.OnTouchDlgSel(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void GameView::OnTouchDlgSel(pls::cs::Int32 type, pls::cs::Int32 v,
                             pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.OnTouchDlgSel(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)", game);
    {
        pls::cs::Ref<kairo::unity::surface::TouchComponent> component = require(e)->component;
        switch (type) {
        case 1:
        case 2: {
            Set(v, require(e)->component);
            if (type == 1) {
                if (require(component)->Check(16) && ([&]() -> bool {
                        auto cs_left = markComponentKey_;
                        auto cs_right = require(component)->GetKey();
                        return cs_left != cs_right;
                    }())) {
                    markComponentKey_ = require(require(e)->component)->GetKey();
                } else {
                    PLS_API(([&]() -> void {
                        auto cs_receiver = canvas_;
                        pls::cs::Int32 cs_arg0 = GetKey(require(e)->component, 1048576);
                        require(cs_receiver)->KeyClick(cs_arg0);
                    }()));
                }
            }
            break;
        }
        }
    }
}

// M:surface.GameView.OnTouchKeyClick(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void GameView::OnTouchKeyClick(pls::cs::Int32 type, pls::cs::Int32 v,
                               pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.OnTouchKeyClick(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)", game);
    {
        if (v == 0) {
            v = 20;
        }
        bool flag =
            (pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_unity_util::BitUtil::Split(v))[0]) == 0);
        switch (type) {
        case 5: {
            if (flag) {
                PLS_API(([&]() -> void {
                    auto cs_receiver = canvas_;
                    pls::cs::Int32 cs_arg0 = GetKey(require(e)->component, pls::cs::Int32(1) << v);
                    require(cs_receiver)->KeyClick(cs_arg0);
                }()));
            } else {
                Set(v, require(e)->component);
            }
            break;
        }
        }
    }
}

// M:surface.GameView.OnTouchKeyPress(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void GameView::OnTouchKeyPress(pls::cs::Int32 type, pls::cs::Int32 v,
                               pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.OnTouchKeyPress(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)", game);
    {
        if (v == 0) {
            v = 20;
        }
        bool flag =
            (pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_unity_util::BitUtil::Split(v))[0]) == 0);
        switch (type) {
        case 0: {
            if (flag) {
                PLS_API(([&]() -> void {
                    auto cs_receiver = canvas_;
                    pls::cs::Int32 cs_arg0 = GetKey(require(e)->component, pls::cs::Int32(1) << v);
                    require(cs_receiver)->KeyDown(cs_arg0, false);
                }()));
            } else {
                Set(v, require(e)->component);
            }
            break;
        }
        case 6:
        case 10: {
            if (flag) {
                PLS_API(([&]() -> void {
                    auto cs_receiver = canvas_;
                    pls::cs::Int32 cs_arg0 = GetKey(require(e)->component, pls::cs::Int32(1) << v);
                    require(cs_receiver)->KeyUp(cs_arg0);
                }()));
            }
            break;
        }
        }
    }
}

// M:surface.GameView.OnTouchKeyDown(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void GameView::OnTouchKeyDown(pls::cs::Int32 type, pls::cs::Int32 v,
                              pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.OnTouchKeyDown(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)", game);
    {
        if (v == 0) {
            v = 20;
        }
        bool flag =
            (pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_unity_util::BitUtil::Split(v))[0]) == 0);
        switch (type) {
        case 0: {
            if (flag) {
                PLS_API(([&]() -> void {
                    auto cs_receiver = canvas_;
                    pls::cs::Int32 cs_arg0 = GetKey(require(e)->component, pls::cs::Int32(1) << v);
                    require(cs_receiver)->KeyDown(cs_arg0, true);
                }()));
            } else {
                Set(v, require(e)->component);
            }
            break;
        }
        }
    }
}

// M:surface.GameView.OnTouchKeyUp(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void GameView::OnTouchKeyUp(pls::cs::Int32 type, pls::cs::Int32 v,
                            pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.OnTouchKeyUp(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)", game);
    {
        if (v == 0) {
            v = 20;
        }
        bool flag =
            (pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_unity_util::BitUtil::Split(v))[0]) == 0);
        switch (type) {
        case 1: {
            if (flag) {
                PLS_API(([&]() -> void {
                    auto cs_receiver = canvas_;
                    pls::cs::Int32 cs_arg0 = GetKey(require(e)->component, pls::cs::Int32(1) << v);
                    require(cs_receiver)->KeyDown(cs_arg0, true);
                }()));
            } else {
                Set(v, require(e)->component);
            }
            break;
        }
        }
    }
}

// M:surface.GameView.OnTouchMainMenu(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void GameView::OnTouchMainMenu(pls::cs::Int32 type, pls::cs::Int32 v,
                               pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.OnTouchMainMenu(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)", game);
    {
        pls::cs::Ref<pls::kairo::FormBase> va = pls::cs::Ref<pls::kairo::FormBase>{};
        for (pls::cs::Int32 i = 0; i < PLS_API(require(formMan_)->GetFormsNum()); ++i) {
            pls::cs::Ref<pls::kairo::FormBase> form = PLS_API(require(formMan_)->GetForm(i));
            if (PLS_API(require(form)->GetId()) == 4 &&
                require((pls::cs::unbox<pls::cs::Ref<form::SubForm>>(pls::cs::box(form))))->type_ == 3) {
                va = form;
                break;
            }
        }
        switch (type) {
        case 1:
        case 2: {
            if (is_null(GetComponentId(9))) {
                Set(v, require(e)->component);
                if (type == 1) {
                    PLS_API(require(canvas_)->KeyClick(1048576));
                }
            } else if (Get(va, v) != (v & 0xFFFF)) {
                PLS_API(([&]() -> bool {
                    auto cs_receiver = formMan_;
                    pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = PLS_API(require(formMan_)->GetTopForm());
                    return require(cs_receiver)->Pop(cs_arg0);
                }()));
                Set(va, v, require(e)->component);
            }
            break;
        }
        }
    }
}

// M:surface.GameView.OnTouchSubMenu(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void GameView::OnTouchSubMenu(pls::cs::Int32 type, pls::cs::Int32 v,
                              pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.OnTouchSubMenu(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)", game);
    {
        switch (type) {
        case 1:
        case 2: {
            {
                Set(v, require(e)->component);
                if (type == 1) {
                    PLS_API(([&]() -> void {
                        auto cs_receiver = canvas_;
                        pls::cs::Int32 cs_arg0 = GetKey(require(e)->component, 1048576);
                        require(cs_receiver)->KeyClick(cs_arg0);
                    }()));
                }
                break;
            }
        }
        }
    }
}

// M:surface.GameView.OnTouchList(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void GameView::OnTouchList(pls::cs::Int32 type, pls::cs::Int32 v,
                           pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.OnTouchList(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)", game);
    {
        pls::cs::Ref<kairo::unity::surface::TouchComponent> component = require(e)->component;
        switch (type) {
        case 1:
        case 2: {
            Set(v, require(e)->component);
            if (type == 1) {
                if (require(component)->Check(16) && ([&]() -> bool {
                        auto cs_left = markComponentKey_;
                        auto cs_right = require(component)->GetKey();
                        return cs_left != cs_right;
                    }())) {
                    markComponentKey_ = require(require(e)->component)->GetKey();
                } else {
                    PLS_API(([&]() -> void {
                        auto cs_receiver = canvas_;
                        pls::cs::Int32 cs_arg0 = GetKey(require(e)->component, 1048576);
                        require(cs_receiver)->KeyClick(cs_arg0);
                    }()));
                }
            }
            break;
        }
        }
    }
}

// M:surface.GameView.OnTouchScrollList(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void GameView::OnTouchScrollList(pls::cs::Int32 type, pls::cs::Int32 v,
                                 pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.OnTouchScrollList(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)",
        game);
    {
        pls::cs::Ref<kairo::unity::surface::TouchComponent> component = require(e)->component;
        switch (type) {
        case 1:
        case 2: {
            Set(v, require(e)->component);
            if (type == 1) {
                if (require(component)->Check(16) && ([&]() -> bool {
                        auto cs_left = markComponentKey_;
                        auto cs_right = require(component)->GetKey();
                        return cs_left != cs_right;
                    }())) {
                    markComponentKey_ = require(require(e)->component)->GetKey();
                } else {
                    PLS_API(([&]() -> void {
                        auto cs_receiver = canvas_;
                        pls::cs::Int32 cs_arg0 = GetKey(require(e)->component, 1048576);
                        require(cs_receiver)->KeyClick(cs_arg0);
                    }()));
                }
            }
            break;
        }
        }
    }
}

// M:surface.GameView.OnTouchVScrollBar(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void GameView::OnTouchVScrollBar(pls::cs::Int32 type, pls::cs::Int32 v,
                                 pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.OnTouchVScrollBar(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)",
        game);
    {
        pls::cs::Ref<kairo::unity::surface::TouchComponent> component = require(e)->component;
        IntArray args = require(require(require(e)->component)->option)->args;
        pls::cs::Int32 num = args[0];
        pls::cs::Int32 num2 = args[1];
        pls::cs::Int32 num3 = ((2 < args.length()) ? args[2] : pls::cs::Int32(-1));
        pls::cs::Int32 num4 = 2147483647 /* Int32.MaxValue */;
        switch (type) {
        case 8: {
            num4 = ([&]() -> pls::cs::Int32 {
                auto cs_left = Get(v);
                auto cs_right = require(e)->dy;
                return cs_left + cs_right;
            }());
            break;
        }
        case 9: {
            num4 = require(e)->dy;
            break;
        }
        }
        if (num4 == 2147483647 /* Int32.MaxValue */) {
            return;
        }
        if (num4 > num - num2) {
            num4 = num - num2;
        }
        if (num4 < 0) {
            num4 = 0;
        }
        if (Get(v) != num4) {
            pls::cs::Int32 num5 = num4 - Get(v);
            SetInt(v, num4, require(e)->component);
            if (num3 != -1) {
                pls::cs::Int32 num6 = Get(num3);
                if (require(component)->id == 14) {
                    num6 += num5 * 2;
                    if (num6 < 0) {
                        num6 = 0;
                    }
                } else {
                    num6 += num5;
                    if (num6 < 0) {
                        num6 = 0;
                    }
                    if (num6 >= num) {
                        num6 = num - 1;
                    }
                }
                SetInt(num3, num6, require(e)->component);
            }
        }
    }
}

// M:surface.GameView.OnTouchVScrollButton(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void GameView::OnTouchVScrollButton(pls::cs::Int32 type, pls::cs::Int32 v,
                                    pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.OnTouchVScrollButton(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)",
        game);
    {
        pls::cs::Ref<kairo::unity::surface::TouchOption> option = require(require(e)->component)->option;
        pls::cs::Int32 num = require(option)->args[0];
        pls::cs::Int32 num2 = require(option)->args[1];
        pls::cs::Int32 num3 =
            ((2 < require(option)->args.length()) ? require(option)->args[2] : pls::cs::Int32(-1));
        if (num3 == -1) {
            return;
        }
        pls::cs::Int32 num4 = (v & 0xFFFF);
        switch (type) {
        case 13: {
            if (num4 == 0 && Get(num3) > 0) {
                {
                    pls::cs::Int32 cs_arg0 = num3;
                    pls::cs::Int32 cs_arg1 = Get(num3) - 1;
                    pls::cs::Ref<kairo::unity::surface::TouchComponent> cs_arg2 = require(e)->component;
                    SetInt(cs_arg0, cs_arg1, cs_arg2);
                }
            }
            if (num4 == 1 && Get(num3) < num - 1) {
                {
                    pls::cs::Int32 cs_arg0 = num3;
                    pls::cs::Int32 cs_arg1 = Get(num3) + 1;
                    pls::cs::Ref<kairo::unity::surface::TouchComponent> cs_arg2 = require(e)->component;
                    SetInt(cs_arg0, cs_arg1, cs_arg2);
                }
            }
            if ([&]() -> bool {
                    auto cs_left = Get(num3);
                    auto cs_right = Get(v) + num2;
                    return cs_left >= cs_right;
                }()) {
                {
                    pls::cs::Int32 cs_arg0 = v;
                    pls::cs::Int32 cs_arg1 = Get(num3) - (num2 - 1);
                    pls::cs::Ref<kairo::unity::surface::TouchComponent> cs_arg2 = require(e)->component;
                    SetInt(cs_arg0, cs_arg1, cs_arg2);
                }
            }
            if ([&]() -> bool {
                    auto cs_left = Get(num3);
                    auto cs_right = Get(v);
                    return cs_left < cs_right;
                }()) {
                {
                    pls::cs::Int32 cs_arg0 = v;
                    pls::cs::Int32 cs_arg1 = Get(num3);
                    pls::cs::Ref<kairo::unity::surface::TouchComponent> cs_arg2 = require(e)->component;
                    SetInt(cs_arg0, cs_arg1, cs_arg2);
                }
            }
            while (Get(v) > 0 && num < Get(v) + num2) {
                {
                    pls::cs::Int32 cs_arg0 = v;
                    pls::cs::Int32 cs_arg1 = Get(v) - 1;
                    pls::cs::Ref<kairo::unity::surface::TouchComponent> cs_arg2 = require(e)->component;
                    SetInt(cs_arg0, cs_arg1, cs_arg2);
                }
            }
            break;
        }
        }
    }
}

// M:surface.GameView.OnTouchUnMarker(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void GameView::OnTouchUnMarker(pls::cs::Int32 type, pls::cs::Int32 v,
                               pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.OnTouchUnMarker(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)", game);
    {
        pls::cs::Ref<kairo::unity::surface::TouchEvent> touchEvent =
            pls::cs::Ref<kairo::unity::surface::TouchEvent>{};
        switch (type) {
        case 0: {
            markComponentFrame_ = 0;
            if (markComponentKey_ != pls::cs::cast_integral<pls::cs::Int64>(-1)) {
                touchEvent = GetTouchEventKey(markComponentKey_, 0);
                if (!is_null(touchEvent)) {
                    break;
                }
            }
            GameView::ClearMarker();
            break;
        }
        case 7: {
            if (markComponentKey_ == pls::cs::cast_integral<pls::cs::Int64>(-1)) {
                break;
            }
            touchEvent = GetTouchEventKey(markComponentKey_, 7);
            if (is_null(touchEvent)) {
                GameView::ClearMarker();
            }
            break;
        }
        case 1: {
            if (markComponentKey_ == pls::cs::cast_integral<pls::cs::Int64>(-1)) {
                break;
            }
            touchEvent = GetTouchEventId(12, 1);
            if (!is_null(touchEvent)) {
                break;
            }
            touchEvent = GetTouchEventId(14, 1);
            if (!is_null(touchEvent)) {
                break;
            }
            touchEvent = GetTouchEventId(15, 1);
            if (!is_null(touchEvent)) {
                break;
            }
            touchEvent = GetTouchEventId(22, 1);
            if (!is_null(touchEvent)) {
                break;
            }
            touchEvent = GetTouchEventKey(markComponentKey_, 1);
            if (!is_null(touchEvent)) {
                break;
            }
            GameView::ClearMarker();
            break;
        }
        }
    }
}

// M:surface.GameView.OnTouchCamera(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void GameView::OnTouchCamera(pls::cs::Int32 type, pls::cs::Int32 v,
                             pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.OnTouchCamera(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)", game);
    {
    }
}

// M:surface.GameView.OnTouchTrackBar(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void GameView::OnTouchTrackBar(pls::cs::Int32 type, pls::cs::Int32 v,
                               pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.OnTouchTrackBar(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)", game);
    {
        switch (type) {
        case 0: {
            break;
        }
        case 9: {
            SetInt(v, require(e)->dx, require(e)->component);
            break;
        }
        }
    }
}

// M:surface.GameView.OnTouchRect(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void GameView::OnTouchRect(pls::cs::Int32 type, pls::cs::Int32 v,
                           pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.OnTouchRect(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)", game);
    {
        switch (type) {
        case 1:
        case 2: {
            {
                Set(v, require(e)->component);
                if (type == 1) {
                    PLS_API(require(canvas_)->KeyClick(1048576));
                }
                break;
            }
        }
        }
    }
}

// M:surface.GameView.Draw(kairo.unity.ui.Graphics)
void GameView::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GameView.Draw(kairo.unity.ui.Graphics)", game);
    {
        kl_cfg::Config::ensure_initialized();

        PLS_API(([&]() -> void {
            pls::cs::Int32 cs_arg0 = GetX();
            pls::cs::Int32 cs_arg1 = GetY();
            pls::cs::Int32 cs_arg2 = GetWidth();
            pls::cs::Int32 cs_arg3 = GetHeight();
            require(g)->SetRenderRect(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
        }()));
        PLS_API(([&]() -> void {
            pls::cs::Single cs_arg0 = GetScaleRatio();
            require(g)->Scale(cs_arg0);
        }()));
        pls::cs::Ref<pls::kairo::Font> font = PLS_API(require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{}));
        pls::cs::run_finally(
            [&]() {
                {
                    PLS_API(require(g)->SetFont(font_));
                    PLS_API(require(formMan_)->Draw(g));
                }
            },
            [&]() {
                PLS_API(require(g)->SetFont(font));
                PLS_API(require(g)->Scale(100.0f));
                PLS_API(require(g)->ClearRenderRect());
            });
        if (notesFrame_ != 0) {
            ++notesFrame_;
        }
        if (!PLS_API(require(formMan_)->IsPause()) && !require(GamePad::GetInstance())->hide_) {
            if (require(GamePad::GetInstance())->visibleTouchRange_) {
                PLS_API(require(g)->SetColor(255, 0, 0));
                PLS_API(([&]() -> void {
                    pls::cs::Single cs_arg0 = GetX();
                    pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = pls::cs::Single(GetY());
                        auto cs_right = ([&]() -> pls::cs::FloatEval {
                                            auto cs_left = pls::cs::Single(lastTouchY);
                                            auto cs_right = GetScaleRatio();
                                            return cs_left * cs_right;
                                        }()) /
                                        100.0f;
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg2 = ([&]() -> pls::cs::Int32 {
                        auto cs_left = GetX();
                        auto cs_right = GetWidth();
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg3 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = pls::cs::Single(GetY());
                        auto cs_right = ([&]() -> pls::cs::FloatEval {
                                            auto cs_left = pls::cs::Single(lastTouchY);
                                            auto cs_right = GetScaleRatio();
                                            return cs_left * cs_right;
                                        }()) /
                                        100.0f;
                        return cs_left + cs_right;
                    }());
                    require(g)->DrawLine(cs_arg0, cs_arg1, cs_arg2, cs_arg3, 1.0f);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = pls::cs::Single(GetX());
                        auto cs_right = ([&]() -> pls::cs::FloatEval {
                                            auto cs_left = pls::cs::Single(lastTouchX);
                                            auto cs_right = GetScaleRatio();
                                            return cs_left * cs_right;
                                        }()) /
                                        100.0f;
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg1 = GetY();
                    pls::cs::Single cs_arg2 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = pls::cs::Single(GetX());
                        auto cs_right = ([&]() -> pls::cs::FloatEval {
                                            auto cs_left = pls::cs::Single(lastTouchX);
                                            auto cs_right = GetScaleRatio();
                                            return cs_left * cs_right;
                                        }()) /
                                        100.0f;
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg3 = ([&]() -> pls::cs::Int32 {
                        auto cs_left = GetY();
                        auto cs_right = GetHeight();
                        return cs_left + cs_right;
                    }());
                    require(g)->DrawLine(cs_arg0, cs_arg1, cs_arg2, cs_arg3, 1.0f);
                }()));
            }
            if (kl_cfg::Config::SHOW_FPS()) {
                PLS_API(require(g)->SetColor(0, 0, 0));
                PLS_API(require(g)->SetRenderMode(1, 128, 128));
                PLS_API(([&]() -> void {
                    pls::cs::Single cs_arg0 = GetX();
                    pls::cs::Single cs_arg1 = GetY();
                    require(g)->FillRect(cs_arg0, cs_arg1, 14.0f, 14.0f);
                }()));
                PLS_API(require(g)->SetRenderMode());
                PLS_API(require(g)->SetColor(255, 255, 255));
                {
                    pls::cs::Int64 cs_arg0 =
                        pls::cs::cast_integral<pls::cs::Int64>(require(formMan_)->GetFps());
                    pls::cs::Single cs_arg1 = GetX() + 1;
                    pls::cs::Single cs_arg2 = GetY() + 1;
                    kairo::unity::ui::Graphics::DrawString(require(g), cs_arg0, cs_arg1, cs_arg2);
                }
                pls::cs::String text = PLS_API(integer_string(
                    java::lang::JRuntime::FreeMemory(require(PLS_API(kl_lang::JRuntime::GetRuntime())))));
                pls::cs::Int32 num =
                    PLS_API(require(PLS_API(require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{})))
                                ->StringWidth(text));
                PLS_API(require(g)->SetColor(0, 0, 0));
                PLS_API(require(g)->SetRenderMode(1, 128, 128));
                PLS_API(([&]() -> void {
                    pls::cs::Single cs_arg0 = GetX() + 15;
                    pls::cs::Single cs_arg1 = GetY();
                    require(g)->FillRect(cs_arg0, cs_arg1, num + 2, 14.0f);
                }()));
                PLS_API(require(g)->SetRenderMode());
                PLS_API(require(g)->SetColor(255, 255, 255));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = text;
                    pls::cs::Single cs_arg1 = GetX() + 15 + 1;
                    pls::cs::Single cs_arg2 = GetY() + 1;
                    require(g)->DrawString(cs_arg0, cs_arg1, cs_arg2);
                }()));
            }
        }
    }
}

// M:surface.GameView.DrawImage(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32)
void GameView::DrawImage(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y,
                         pls::cs::Int32 imgId) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.DrawImage(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32)",
        game);
    {
        IntArray array = GameView::TEXTURES()[imgId];
        pls::cs::Single num = 0.75f;
        DrawScaledImage(g, x, y, pls::cs::Single(array[5]) * num, pls::cs::Single(array[6]) * num, imgId);
    }
}

// M:surface.GameView.DrawScaledImage(kairo.unity.ui.Graphics,System.Single,System.Single,System.Single,System.Single,System.Int32)
void GameView::DrawScaledImage(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y,
                               pls::cs::Single w, pls::cs::Single h, pls::cs::Int32 imgId) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.DrawScaledImage(kairo.unity.ui.Graphics,System.Single,System.Single,System.Single,System.Single,System.Int32)",
        game);
    {
        IntArray array = GameView::TEXTURES()[imgId];
        pls::cs::Ref<pls::kairo::Image> image = GameView::images_().get_Item(array[0]);
        auto cs_left_60 = pls::cs::Single(PLS_API(require(image)->GetWidth()));
        auto cs_right_60 = pls::cs::Single(GameView::IMAGE_WIDTH()[array[0]]);
        pls::cs::Single num = cs_left_60 / cs_right_60;
        pls::cs::Single num2 = 0.75f;
        PLS_API(([&]() -> void {
            pls::cs::Single cs_arg1 = x + pls::cs::Single(array[1]) * num2;
            pls::cs::Single cs_arg2 = y + pls::cs::Single(array[2]) * num2;
            pls::cs::Int32 cs_arg5 = pls::cs::to_int32((pls::cs::Single(array[3]) * num + 0.5f));
            pls::cs::Int32 cs_arg6 = pls::cs::to_int32((pls::cs::Single(array[4]) * num + 0.5f));
            pls::cs::Int32 cs_arg7 = pls::cs::to_int32((pls::cs::Single(array[5]) * num + 0.5f));
            pls::cs::Int32 cs_arg8 = pls::cs::to_int32((pls::cs::Single(array[6]) * num + 0.5f));
            require(g)->DrawScaledImage(image, cs_arg1, cs_arg2, w, h, cs_arg5, cs_arg6, cs_arg7, cs_arg8);
        }()));
    }
}

// M:surface.GameView.GetImageRect(System.Int32)
FloatArray GameView::GetImageRect(pls::cs::Int32 imgId) {
    GameView::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GameView.GetImageRect(System.Int32)", game);
    {
        IntArray array = GameView::TEXTURES()[imgId];
        pls::cs::Single num = 0.75f;
        FloatArray getImageRect_result = GameView::GetImageRect_result();
        getImageRect_result[0] = pls::cs::Single(array[1]) * num;
        getImageRect_result[1] = pls::cs::Single(array[2]) * num;
        getImageRect_result[2] = pls::cs::Single(array[5]) * num;
        getImageRect_result[3] = pls::cs::Single(array[6]) * num;
        return getImageRect_result;
    }
}

// M:surface.GameView.DrawVerticalScroll(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32)
IntArray GameView::DrawVerticalScroll(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x,
                                      pls::cs::Int32 y, pls::cs::Int32 w, pls::cs::Int32 h,
                                      pls::cs::Int32 value, pls::cs::Int32 maximum,
                                      pls::cs::Int32 largeChange, bool touch, pls::cs::Int32 type) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.DrawVerticalScroll(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32)",
        game);
    {
        if (maximum < largeChange - 1) {
            maximum = largeChange - 1;
        }
        if (type == 0) {
            --x;
            w += 2;
        }
        if (type == 0) {
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(7, 5, 78))));
            PLS_API(require(g)->FillRect(x, y, w, h));
        } else {
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(168, 95, 80))));
            PLS_API(require(g)->FillRect(x, y - 1, w + 2, h + 2));
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(202, 150, 66))));
            PLS_API(require(g)->FillRect(x + w / 2, y, 1.0f, h - 2));
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(202, 150, 66))));
            PLS_API(require(g)->FillRect(x, y, w, 1.0f));
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(202, 150, 66))));
            PLS_API(require(g)->FillRect(x, y - 1 + h - 2, w, 1.0f));
        }
        if (maximum < 0) {
            maximum = 0;
        }
        pls::cs::Int32 num = y + value * h / (maximum + 1);
        pls::cs::Int32 num2 = largeChange * h / (maximum + 1);
        if (num + num2 > y + h) {
            num2 = h - num;
        }
        if (num2 <= 0) {
            return IntArray{};
        }
        pls::cs::Int32 color = 0;
        pls::cs::Int32 color2 = 0;
        if ((type == 0)) {
            if (touch) {
                color = PLS_API(pls::kairo::Graphics::GetColorOfRGB(246, 129, 0));
                color2 = PLS_API(pls::kairo::Graphics::GetColorOfRGB(246, 129, 0));
            } else {
                color = PLS_API(pls::kairo::Graphics::GetColorOfRGB(48, 160, 255));
                color2 = PLS_API(pls::kairo::Graphics::GetColorOfRGB(48, 160, 255));
            }
        } else if ((type == 1)) {
            if (touch) {
                color = PLS_API(pls::kairo::Graphics::GetColorOfRGB(240, 130, 0));
                color2 = PLS_API(pls::kairo::Graphics::GetColorOfRGB(240, 130, 0));
            } else {
                color = PLS_API(pls::kairo::Graphics::GetColorOfRGB(243, 210, 114));
                color2 = PLS_API(pls::kairo::Graphics::GetColorOfRGB(202, 150, 66));
            }
        }
        PLS_API(require(g)->SetColor(color));
        PLS_API(require(g)->FillRect(x, num, w, num2));
        PLS_API(require(g)->SetColor(color2));
        PLS_API(require(g)->FillRect(x, num, 1.0f, 1.0f));
        PLS_API(require(g)->FillRect(x + w - 1, num, 1.0f, 1.0f));
        PLS_API(require(g)->FillRect(x, num + num2 - 1, 1.0f, 1.0f));
        PLS_API(require(g)->FillRect(x + w - 1, num + num2 - 1, 1.0f, 1.0f));
        drawVerticalScroll_tmp[0] = num;
        drawVerticalScroll_tmp[1] = num2;
        return drawVerticalScroll_tmp;
    }
}

// M:surface.GameView.AddEffect(System.Int32,System.Int32,System.Int32,System.Int32,kairo.unity.surface.TouchComponent)
pls::cs::Ref<TouchEffect> GameView::AddEffect(pls::cs::Int32 id, pls::cs::Int32 x, pls::cs::Int32 y,
                                              pls::cs::Int32 imgId,
                                              pls::cs::Ref<kairo::unity::surface::TouchComponent> c) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.GameView.AddEffect(System.Int32,System.Int32,System.Int32,System.Int32,kairo.unity.surface.TouchComponent)",
        game);
    {
        if (imgId == -1) {
            {
                pls::cs::Ref<TouchEffect> recoveredReturn_49580 =
                    require(effMan_)->AddEffect(this, id, x, y, c, pls::cs::Ref<pls::cs::Object>{});
                return recoveredReturn_49580;
            }
        }
        IntArray array = GameView::TEXTURES()[imgId];
        pls::cs::Ref<pls::kairo::Image> image = GameView::images_().get_Item(array[0]);
        auto cs_left_287 = pls::cs::Single(PLS_API(require(image)->GetWidth()));
        auto cs_right_287 = pls::cs::Single(GameView::IMAGE_WIDTH()[array[0]]);
        pls::cs::Single num = cs_left_287 / cs_right_287;
        pls::cs::Single num2 = 0.75f;
        pls::cs::Array<pls::cs::Ref<pls::cs::Object>> arg =
            pls::cs::Array<pls::cs::Ref<pls::cs::Object>>::from(
                {pls::cs::box(GameView::images_().get_Item(array[0])),
                 pls::cs::box(
                     FloatArray::from({pls::cs::Single(array[5]) * num2, pls::cs::Single(array[6]) * num2,
                                       pls::cs::Single(array[3]) * num, pls::cs::Single(array[4]) * num,
                                       pls::cs::Single(array[5]) * num, pls::cs::Single(array[6]) * num}))});
        {
            pls::cs::Single cs_arg2_288 = pls::cs::Single(x) + pls::cs::Single(array[1]) * num2;
            pls::cs::Single cs_arg3_288 = pls::cs::Single(y) + pls::cs::Single(array[2]) * num2;
            pls::cs::Ref<TouchEffect> recoveredReturn_50165 =
                require(effMan_)->AddEffect(this, id, cs_arg2_288, cs_arg3_288, c, pls::cs::box(arg));
            return recoveredReturn_50165;
        }
    }
}

// M:surface.GameView.RotateClear
void GameView::RotateClear() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.GameView.RotateClear", game);
    {
        GameView::ClearMarker();
    }
}

// M:surface.GameView.OnReceiveTouchEvent(kairo.unity.surface.MotionEvent)
void GameView::OnReceiveTouchEvent(pls::cs::Ref<pls::kairo::MotionEvent> evt) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:surface.GameView.OnReceiveTouchEvent(kairo.unity.surface.MotionEvent)", game);
    {
        SurfaceBase::OnReceiveTouchEvent(evt);
    }
}

// M:surface.GameView.GetKey(kairo.unity.surface.TouchComponent,System.Int32)
pls::cs::Int32 GameView::GetKey(pls::cs::Ref<kairo::unity::surface::TouchComponent> c,
                                pls::cs::Int32 defaultKey) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:surface.GameView.GetKey(kairo.unity.surface.TouchComponent,System.Int32)", game);
    {
        if ((!is_null(require(c)->option) && ([&]() {
                auto cs_left = pls::cs::box(require(require(c)->option)->keys);
                auto cs_right = pls::cs::box(IntArray{});
                return cs_left != cs_right;
            }())) &&
            (require(require(c)->option)->keys.length() > 0)) {
            return require(require(c)->option)->keys[0];
        }
        return defaultKey;
    }
}

// M:surface.GameView.AddDelayPaintBuffer(kairo.unity.ui.Graphics,System.Int32[])
void GameView::AddDelayPaintBuffer(pls::cs::Ref<pls::kairo::Graphics> g, IntArray paint) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:surface.GameView.AddDelayPaintBuffer(kairo.unity.ui.Graphics,System.Int32[])", game);
    {
        IntArray array = IntArray::make(pls::cs::Int32(paint.length()) + 1);
        PLS_API(pls::cs::array_copy(pls::cs::array_cast(pls::cs::box(paint)), 0,
                                    pls::cs::array_cast(pls::cs::box(array)), 0, paint.length()));
        {
            auto cs_target = array;
            auto cs_index = pls::cs::Int32(array.length()) - 1;
            auto cs_value = pls::cs::to_int32((PLS_API(pls::cs::Single(require(g)->GetScale())) * 100.0f));
            cs_target.set_Item(cs_index, cs_value);
        }
        PLS_API(require(delayPaintBuffer_)->Add_1(array));
    }
}
} // namespace surface
}
