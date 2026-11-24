// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.FastVector_1.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.surface.SurfaceManagerBase.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "kairo.unity.surface.TouchOption.hpp"
#include "kairo.unity.ui.Graphics.hpp"
#include "generated/java.util.Vector_1_templates.hpp"
#include "generated/kairo.unity.util.FastVector_1_templates.hpp"

namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace kairo::unity::surface {

void SurfaceManagerBase::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(surfaceList_, visitor);
    pls::cs::trace_value(components_, visitor);
    pls::cs::trace_value(paintRects_, visitor);
    pls::cs::trace_value(getBoundingRect_tmp, visitor);
}

static bool SurfaceManagerBase_autoGLRender__storage{};

static bool SurfaceManagerBase_autoGLRenderClipEnable__storage{};

static PLS_NOINLINE void cs_init_4a8bef2ab48b32d7_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(SurfaceManagerBase_autoGLRender__storage, visitor);
        pls::cs::trace_value(SurfaceManagerBase_autoGLRenderClipEnable__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.surface.SurfaceManagerBase", flag, []() {

    });
}

void SurfaceManagerBase::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_4a8bef2ab48b32d7_slow(flag);
}

bool& SurfaceManagerBase::autoGLRender_() {
    SurfaceManagerBase::ensure_initialized();
    return SurfaceManagerBase_autoGLRender__storage;
}

bool& SurfaceManagerBase::autoGLRenderClipEnable_() {
    SurfaceManagerBase::ensure_initialized();
    return SurfaceManagerBase_autoGLRenderClipEnable__storage;
}

// M:kairo.unity.surface.SurfaceManagerBase.#ctor
void SurfaceManagerBase::create_init(pls::cs::Ref<SurfaceManagerBase> self) {
    SurfaceManagerBase::ensure_initialized();
    self->surfaceList_ = kl_java_util::Vector_2_create<pls::cs::Ref<SurfaceBase>>();
    self->components_ = pls::cs::Array<pls::cs::Ref<TouchComponent>>::make(0);
    self->paintRects_ = pls::cs::List<pls::cs::Array<pls::kairo::Vector2>>::make();
    self->currentPaintRect_ = -1;
    self->currentPaintPoint_ = -1;
    self->getBoundingRect_tmp = IntArray::make(4);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceManagerBase.#ctor", kairo);
    {
    }
}

// M:kairo.unity.surface.SurfaceManagerBase.GetSurfaceList
pls::cs::Ref<kl_java_util::Vector_2<pls::cs::Ref<SurfaceBase>>> SurfaceManagerBase::GetSurfaceList() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceManagerBase.GetSurfaceList", kairo);
    {
        return surfaceList_;
    }
}

// M:kairo.unity.surface.SurfaceManagerBase.ClearTouchComponent
void SurfaceManagerBase::ClearTouchComponent() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceManagerBase.ClearTouchComponent", kairo);
    {
        for (pls::cs::Int32 num = PLS_API(require(surfaceList_)->Size()) - 1; num >= 0; --num) {
            require(PLS_API(require(surfaceList_)->ElementAt(num)))->ClearTouchComponent();
        }
    }
}

// M:kairo.unity.surface.SurfaceManagerBase.DoEvents
void SurfaceManagerBase::DoEvents() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceManagerBase.DoEvents", kairo);
    {
        kl_cfg::Config::ensure_initialized();

        for (pls::cs::Int32 i = 0; i < PLS_API(require(surfaceList_)->Size()); ++i) {
            require(PLS_API(require(surfaceList_)->ElementAt(i)))->DoBegin();
        }
        pls::cs::Int32 num = 0;
        for (pls::cs::Int32 j = 0; j < PLS_API(require(surfaceList_)->Size()); ++j) {
            num += require(PLS_API(require(surfaceList_)->ElementAt(j)))->GetComponentLength();
        }
        if (components_.length() < num) {
            components_ = pls::cs::Array<pls::cs::Ref<TouchComponent>>::make(num);
        }
        pls::cs::Int32 num2 = 0;
        for (pls::cs::Int32 k = 0; k < PLS_API(require(surfaceList_)->Size()); ++k) {
            pls::cs::Ref<SurfaceBase> surfaceBase = PLS_API(require(surfaceList_)->ElementAt(k));
            for (pls::cs::Int32 l = 0; l < require(surfaceBase)->GetComponentLength(); ++l) {
                {
                    auto cs_target = components_;
                    auto cs_index = num2++;
                    auto cs_value = require(surfaceBase)->GetComponent(l);
                    cs_target.set_Item(cs_index, cs_value);
                }
            }
        }
        for (pls::cs::Int32 m = 0; m < num - 1; ++m) {
            for (pls::cs::Int32 num3 = num - 1; num3 > m; --num3) {
                if ([&]() -> bool {
                        auto cs_left = require(components_.get_Item(num3 - 1))->GetPriority();
                        auto cs_right = require(components_.get_Item(num3))->GetPriority();
                        return cs_left > cs_right;
                    }()) {
                    pls::cs::Ref<TouchComponent> touchComponent = components_.get_Item(num3);
                    components_.set_Item(num3, components_.get_Item(num3 - 1));
                    components_.set_Item(num3 - 1, touchComponent);
                }
            }
        }
        for (pls::cs::Int32 num4 = num - 1; num4 >= 0; --num4) {
            pls::cs::Ref<TouchComponent> touchComponent2 = components_.get_Item(num4);
            if (require(require(touchComponent2)->surface_)->DoEvent(touchComponent2)) {
                break;
            }
        }
        for (pls::cs::Int32 num5 = PLS_API(require(surfaceList_)->Size()) - 1; num5 >= 0; --num5) {
            require(PLS_API(require(surfaceList_)->ElementAt(num5)))->DoEnd();
        }
        if (kl_cfg::Config::DEBUG() && PLS_API(require(surfaceList_)->Size()) > 0 &&
            (PLS_API(pls::kairo::DebugInput::GetKey(304 /* KeyCode.LeftShift */)) ||
             PLS_API(pls::kairo::DebugInput::GetKey(303 /* KeyCode.RightShift */)))) {
            pls::cs::Ref<SurfaceBase> surfaceBase2 = PLS_API(require(surfaceList_)->FirstElement());
            auto cs_left_2 = (([&]() -> pls::cs::FloatEval {
                                 auto cs_left_2 = pls::kairo::DebugInput::get_mousePosition().x;
                                 auto cs_right_2 = pls::cs::Single(require(surfaceBase2)->GetX());
                                 return cs_left_2 - cs_right_2;
                             }())) *
                             100.0f;
            auto cs_right_2 = require(surfaceBase2)->GetScaleRatio();
            pls::cs::Single num6 = cs_left_2 / cs_right_2;
            auto cs_left_3 = (([&]() -> pls::cs::FloatEval {
                                 auto cs_left_3 = ([&]() -> pls::cs::FloatEval {
                                     auto cs_left_3 =
                                         pls::cs::Single(pls::kairo::DebugInput::screen_height());
                                     auto cs_right_3 = pls::kairo::DebugInput::get_mousePosition().y;
                                     return cs_left_3 - cs_right_3;
                                 }());
                                 auto cs_right_3 = pls::cs::Single(require(surfaceBase2)->GetY());
                                 return cs_left_3 - cs_right_3;
                             }())) *
                             100.0f;
            auto cs_right_3 = require(surfaceBase2)->GetScaleRatio();
            pls::cs::Single num7 = cs_left_3 / cs_right_3;
            pls::cs::Single num8 = num6;
            pls::cs::Single num9 = num7;
            if (num8 < 0.0f) {
                num8 = 0.0f;
            }
            if (num8 > ([&]() -> pls::cs::FloatEval {
                    auto cs_left = pls::cs::Single((require(surfaceBase2)->GetWidth() * 100));
                    auto cs_right = require(surfaceBase2)->GetScaleRatio();
                    return cs_left / cs_right;
                }())) {
                num8 = ([&]() -> pls::cs::FloatEval {
                    auto cs_left = pls::cs::Single((require(surfaceBase2)->GetWidth() * 100));
                    auto cs_right = require(surfaceBase2)->GetScaleRatio();
                    return cs_left / cs_right;
                }());
            }
            if (num9 < 0.0f) {
                num9 = 0.0f;
            }
            if (num9 > ([&]() -> pls::cs::FloatEval {
                    auto cs_left = pls::cs::Single((require(surfaceBase2)->GetHeight() * 100));
                    auto cs_right = require(surfaceBase2)->GetScaleRatio();
                    return cs_left / cs_right;
                }())) {
                num9 = ([&]() -> pls::cs::FloatEval {
                    auto cs_left = pls::cs::Single((require(surfaceBase2)->GetHeight() * 100));
                    auto cs_right = require(surfaceBase2)->GetScaleRatio();
                    return cs_left / cs_right;
                }());
            }
            if (PLS_API(pls::kairo::DebugInput::GetMouseButtonDown(0))) {
                pls::cs::Int32 rectIndex;
                pls::cs::Int32 handleIndex;
                if (!([&]() -> bool {
                        auto cs_receiver = static_cast<pls::cs::Ref<SurfaceManagerBase>>(this);
                        pls::cs::Single cs_arg0 = num6;
                        pls::cs::Single cs_arg1 = num7;
                        if (!cs_receiver)
                            throw pls::cs::NullReferenceException();
                        auto& cs_arg2 = rectIndex;
                        auto& cs_arg3 = handleIndex;
                        return cs_receiver->GetSelectPaintPoint(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                    }())) {
                    PLS_API(([&]() -> void {
                        auto cs_receiver = paintRects_;
                        auto cs_arg0 = pls::cs::Array<pls::kairo::Vector2>::from(
                            {([&]() {
                                 auto cs_arg0 = num8;
                                 auto cs_arg1 = num9;
                                 return pls::kairo::Vector2(cs_arg0, cs_arg1);
                             }()),
                             ([&]() {
                                 auto cs_arg0 = num8;
                                 auto cs_arg1 = num9;
                                 return pls::kairo::Vector2(cs_arg0, cs_arg1);
                             }())});
                        cs_receiver.Add(cs_arg0);
                    }()));
                    currentPaintRect_ = pls::cs::Int32(paintRects_.get_Count()) - 1;
                    currentPaintPoint_ = 1;
                    return;
                }
                currentPaintRect_ = rectIndex;
                IntArray paintRect = GetPaintRect(paintRects_.get_Item(currentPaintRect_));
                if (handleIndex == 0) {
                    PLS_API(([&]() {
                        auto cs_value_storage_7_array = paintRects_.get_Item(currentPaintRect_);
                        auto cs_value_storage_7_index = 0;
                        auto& cs_value_storage_7 = cs_value_storage_7_array.at(cs_value_storage_7_index);
                        auto cs_arg0 = paintRect[0];
                        auto cs_arg1 = paintRect[1];
                        cs_value_storage_7.Set(cs_arg0, cs_arg1);
                    }()));
                    PLS_API(([&]() {
                        auto cs_value_storage_8_array = paintRects_.get_Item(currentPaintRect_);
                        auto cs_value_storage_8_index = 1;
                        auto& cs_value_storage_8 = cs_value_storage_8_array.at(cs_value_storage_8_index);
                        auto cs_arg0 = (paintRect[0] + paintRect[2]);
                        auto cs_arg1 = (paintRect[1] + paintRect[3]);
                        cs_value_storage_8.Set(cs_arg0, cs_arg1);
                    }()));
                    currentPaintPoint_ = 0;
                }
                if (handleIndex == 1) {
                    PLS_API(([&]() {
                        auto cs_value_storage_9_array = paintRects_.get_Item(currentPaintRect_);
                        auto cs_value_storage_9_index = 0;
                        auto& cs_value_storage_9 = cs_value_storage_9_array.at(cs_value_storage_9_index);
                        auto cs_arg0 = paintRect[0];
                        auto cs_arg1 = (paintRect[1] + paintRect[3]);
                        cs_value_storage_9.Set(cs_arg0, cs_arg1);
                    }()));
                    PLS_API(([&]() {
                        auto cs_value_storage_10_array = paintRects_.get_Item(currentPaintRect_);
                        auto cs_value_storage_10_index = 1;
                        auto& cs_value_storage_10 = cs_value_storage_10_array.at(cs_value_storage_10_index);
                        auto cs_arg0 = (paintRect[0] + paintRect[2]);
                        auto cs_arg1 = paintRect[1];
                        cs_value_storage_10.Set(cs_arg0, cs_arg1);
                    }()));
                    currentPaintPoint_ = 1;
                }
                if (handleIndex == 2) {
                    PLS_API(([&]() {
                        auto cs_value_storage_11_array = paintRects_.get_Item(currentPaintRect_);
                        auto cs_value_storage_11_index = 0;
                        auto& cs_value_storage_11 = cs_value_storage_11_array.at(cs_value_storage_11_index);
                        auto cs_arg0 = paintRect[0];
                        auto cs_arg1 = paintRect[1];
                        cs_value_storage_11.Set(cs_arg0, cs_arg1);
                    }()));
                    PLS_API(([&]() {
                        auto cs_value_storage_12_array = paintRects_.get_Item(currentPaintRect_);
                        auto cs_value_storage_12_index = 1;
                        auto& cs_value_storage_12 = cs_value_storage_12_array.at(cs_value_storage_12_index);
                        auto cs_arg0 = (paintRect[0] + paintRect[2]);
                        auto cs_arg1 = (paintRect[1] + paintRect[3]);
                        cs_value_storage_12.Set(cs_arg0, cs_arg1);
                    }()));
                    currentPaintPoint_ = 1;
                }
                if (handleIndex == 3) {
                    PLS_API(([&]() {
                        auto cs_value_storage_13_array = paintRects_.get_Item(currentPaintRect_);
                        auto cs_value_storage_13_index = 0;
                        auto& cs_value_storage_13 = cs_value_storage_13_array.at(cs_value_storage_13_index);
                        auto cs_arg0 = paintRect[0];
                        auto cs_arg1 = (paintRect[1] + paintRect[3]);
                        cs_value_storage_13.Set(cs_arg0, cs_arg1);
                    }()));
                    PLS_API(([&]() {
                        auto cs_value_storage_14_array = paintRects_.get_Item(currentPaintRect_);
                        auto cs_value_storage_14_index = 1;
                        auto& cs_value_storage_14 = cs_value_storage_14_array.at(cs_value_storage_14_index);
                        auto cs_arg0 = (paintRect[0] + paintRect[2]);
                        auto cs_arg1 = paintRect[1];
                        cs_value_storage_14.Set(cs_arg0, cs_arg1);
                    }()));
                    currentPaintPoint_ = 0;
                }
            } else if (PLS_API(pls::kairo::DebugInput::GetMouseButtonDown(1))) {
                if (paintRects_.get_Count() > 0) {
                    if (currentPaintRect_ != -1) {
                        PLS_API(paintRects_.RemoveAt(currentPaintRect_));
                    } else {
                        PLS_API(([&]() -> void {
                            auto cs_receiver = paintRects_;
                            auto cs_arg0 = pls::cs::Int32(paintRects_.get_Count()) - 1;
                            cs_receiver.RemoveAt(cs_arg0);
                        }()));
                    }
                }
                currentPaintPoint_ = -1;
                currentPaintRect_ = currentPaintPoint_;
            } else if ([&]() -> bool {
                           auto cs_left = PLS_API(pls::kairo::DebugInput::GetMouseButton(0));
                           auto cs_right = (currentPaintRect_ != -1);
                           return cs_left & cs_right;
                       }()) {
                {
                    auto cs_value_storage_15_array = paintRects_.get_Item(currentPaintRect_);
                    auto cs_value_storage_15_index = currentPaintPoint_;
                    auto& cs_value_storage_15 = cs_value_storage_15_array.at(cs_value_storage_15_index);
                    pls::cs::Single cs_value = num8;
                    cs_value_storage_15.x = cs_value;
                }
                {
                    auto cs_value_storage_16_array = paintRects_.get_Item(currentPaintRect_);
                    auto cs_value_storage_16_index = currentPaintPoint_;
                    auto& cs_value_storage_16 = cs_value_storage_16_array.at(cs_value_storage_16_index);
                    pls::cs::Single cs_value = num9;
                    cs_value_storage_16.y = cs_value;
                }
            } else {
                currentPaintRect_ = -1;
            }
        } else {
            currentPaintRect_ = -1;
        }
    }
}

// M:kairo.unity.surface.SurfaceManagerBase.GetSelectPaintPoint(System.Single,System.Single,System.Int32@,System.Int32@)
bool SurfaceManagerBase::GetSelectPaintPoint(pls::cs::Single x, pls::cs::Single y, pls::cs::Int32& rectIndex,
                                             pls::cs::Int32& handleIndex) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.surface.SurfaceManagerBase.GetSelectPaintPoint(System.Single,System.Single,System.Int32@,System.Int32@)",
        kairo);
    {
        pls::cs::Single recoveredPdbConstSingle = 36.0f;
        rectIndex = -1;
        handleIndex = -1;
        pls::cs::Single num = 36.0f;
        for (pls::cs::Int32 i = 0; i < paintRects_.get_Count(); ++i) {
            pls::cs::Array<pls::kairo::Vector2> paintHandlePoint =
                GetPaintHandlePoint(paintRects_.get_Item(i));
            for (pls::cs::Int32 j = 0; j < paintHandlePoint.length(); ++j) {
                pls::cs::Single num2 = x - paintHandlePoint[j].x;
                pls::cs::Single num3 = y - paintHandlePoint[j].y;
                pls::cs::Single num4 = num2 * num2 + num3 * num3;
                if (num4 <= num) {
                    num = num4;
                    rectIndex = i;
                    handleIndex = j;
                }
            }
        }
        return rectIndex != -1;
    }
}

// M:kairo.unity.surface.SurfaceManagerBase.GetPaintRect(UnityEngine.Vector2[])
IntArray SurfaceManagerBase::GetPaintRect(pls::cs::Array<pls::kairo::Vector2> points) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.SurfaceManagerBase.GetPaintRect(UnityEngine.Vector2[])", kairo);
    {
        pls::cs::Single num = 3.4028235E+38f /* Single.MaxValue */;
        pls::cs::Single num2 = 3.4028235E+38f /* Single.MaxValue */;
        pls::cs::Single num3 = -3.4028235E+38f /* Single.MinValue */;
        pls::cs::Single num4 = -3.4028235E+38f /* Single.MinValue */;
        {
            auto cs_each18 = points;
            for (std::int32_t cs_i18 = 0; cs_i18 < cs_each18.length(); ++cs_i18) {
                pls::kairo::Vector2 vector = cs_each18.get_Item(cs_i18);
                {
                    if (vector.x < num) {
                        num = vector.x;
                    }
                    if (vector.y < num2) {
                        num2 = vector.y;
                    }
                    if (vector.x > num3) {
                        num3 = vector.x;
                    }
                    if (vector.y > num4) {
                        num4 = vector.y;
                    }
                }
            }
        }
        pls::cs::Int32 num5 = pls::cs::to_int32((num + 0.1f));
        pls::cs::Int32 num6 = pls::cs::to_int32((num2 + 0.1f));
        pls::cs::Int32 num7 = pls::cs::to_int32((num3 + 0.1f)) - num5;
        pls::cs::Int32 num8 = pls::cs::to_int32((num4 + 0.1f)) - num6;
        return IntArray::from({num5, num6, num7, num8});
    }
}

// M:kairo.unity.surface.SurfaceManagerBase.GetPaintHandlePoint(UnityEngine.Vector2[])
pls::cs::Array<pls::kairo::Vector2>
SurfaceManagerBase::GetPaintHandlePoint(pls::cs::Array<pls::kairo::Vector2> points) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.SurfaceManagerBase.GetPaintHandlePoint(UnityEngine.Vector2[])",
                     kairo);
    {
        IntArray paintRect = GetPaintRect(points);
        return pls::cs::Array<pls::kairo::Vector2>::from({([&]() {
                                                              auto cs_arg0 = paintRect[0] - 1;
                                                              auto cs_arg1 = paintRect[1] - 1;
                                                              return pls::kairo::Vector2(cs_arg0, cs_arg1);
                                                          }()),
                                                          ([&]() {
                                                              auto cs_arg0 = paintRect[0] + paintRect[2];
                                                              auto cs_arg1 = paintRect[1] - 1;
                                                              return pls::kairo::Vector2(cs_arg0, cs_arg1);
                                                          }()),
                                                          ([&]() {
                                                              auto cs_arg0 = paintRect[0] + paintRect[2];
                                                              auto cs_arg1 = paintRect[1] + paintRect[3];
                                                              return pls::kairo::Vector2(cs_arg0, cs_arg1);
                                                          }()),
                                                          ([&]() {
                                                              auto cs_arg0 = paintRect[0] - 1;
                                                              auto cs_arg1 = paintRect[1] + paintRect[3];
                                                              return pls::kairo::Vector2(cs_arg0, cs_arg1);
                                                          }())});
    }
}

// M:kairo.unity.surface.SurfaceManagerBase.BeginTouchRegist(kairo.unity.ui.Graphics)
void SurfaceManagerBase::BeginTouchRegist(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.SurfaceManagerBase.BeginTouchRegist(kairo.unity.ui.Graphics)",
                     kairo);
    {
        TouchOption::ensure_initialized();

        for (pls::cs::Int32 i = 0; i < PLS_API(require(TouchOption::buffer())->Size()); ++i) {
            pls::cs::Ref<TouchOption> touchOption = PLS_API(require(TouchOption::buffer())->ElementAt(i));
            if (require(touchOption)->hasCount <= 0) {
                require(touchOption)->Lock = false;
            }
        }
        for (pls::cs::Int32 num = PLS_API(require(surfaceList_)->Size()) - 1; num >= 0; --num) {
            require(PLS_API(require(surfaceList_)->ElementAt(num)))->BeginTouchRegist(g);
        }
    }
}

// M:kairo.unity.surface.SurfaceManagerBase.EndTouchRegist(kairo.unity.ui.Graphics)
void SurfaceManagerBase::EndTouchRegist(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.SurfaceManagerBase.EndTouchRegist(kairo.unity.ui.Graphics)",
                     kairo);
    {
        for (pls::cs::Int32 num = PLS_API(require(surfaceList_)->Size()) - 1; num >= 0; --num) {
            require(PLS_API(require(surfaceList_)->ElementAt(num)))->EndTouchRegist(g);
        }
    }
}

// M:kairo.unity.surface.SurfaceManagerBase.Draw(kairo.unity.ui.Graphics)
void SurfaceManagerBase::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceManagerBase.Draw(kairo.unity.ui.Graphics)",
                     kairo);
    {
        kl_cfg::Config::ensure_initialized();

        bool flag = SurfaceManagerBase::IsAutoGLRender();
        pls::cs::Int32 i;
        for (([&]() {
                 pls::cs::Int32 cs_value = 0;
                 i = cs_value;
                 return cs_value;
             }());
             i < PLS_API(require(surfaceList_)->Size()); ++i) {
            PLS_API(require(g)->ResetRender());
            if (flag) {
                PLS_API(require(g)->BeginGLRender(SurfaceManagerBase::autoGLRenderClipEnable_()));
            }
            require(PLS_API(require(surfaceList_)->ElementAt(i)))->OnDraw(g);
            if (flag) {
                PLS_API(require(g)->EndGLRender(false));
            }
        }
        if (kl_cfg::Config::DEBUG() && PLS_API(require(surfaceList_)->Size()) > 0 &&
            (paintRects_.get_Count() > 0)) {
            pls::cs::Ref<SurfaceBase> surfaceBase = PLS_API(require(surfaceList_)->FirstElement());
            PLS_API(([&]() -> void {
                pls::cs::Int32 cs_arg0 = require(surfaceBase)->GetX();
                pls::cs::Int32 cs_arg1 = require(surfaceBase)->GetY();
                pls::cs::Int32 cs_arg2 = require(surfaceBase)->GetWidth();
                pls::cs::Int32 cs_arg3 = require(surfaceBase)->GetHeight();
                require(g)->SetRenderRect(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
            }()));
            PLS_API(([&]() -> void {
                pls::cs::Single cs_arg0 = require(surfaceBase)->GetScaleRatio();
                require(g)->Scale(cs_arg0);
            }()));
            pls::cs::run_finally(
                [&]() {
                    {
                        auto cs_left_10 = (([&]() -> pls::cs::FloatEval {
                                              auto cs_left_10 = pls::kairo::DebugInput::get_mousePosition().x;
                                              auto cs_right_10 =
                                                  pls::cs::Single(require(surfaceBase)->GetX());
                                              return cs_left_10 - cs_right_10;
                                          }())) *
                                          100.0f;
                        auto cs_right_10 = require(surfaceBase)->GetScaleRatio();
                        pls::cs::Single x = cs_left_10 / cs_right_10;
                        auto cs_left_11 =
                            (([&]() -> pls::cs::FloatEval {
                                auto cs_left_11 = ([&]() -> pls::cs::FloatEval {
                                    auto cs_left_11 =
                                        pls::cs::Single(pls::kairo::DebugInput::screen_height());
                                    auto cs_right_11 = pls::kairo::DebugInput::get_mousePosition().y;
                                    return cs_left_11 - cs_right_11;
                                }());
                                auto cs_right_11 = pls::cs::Single(require(surfaceBase)->GetY());
                                return cs_left_11 - cs_right_11;
                            }())) *
                            100.0f;
                        auto cs_right_11 = require(surfaceBase)->GetScaleRatio();
                        pls::cs::Single y = cs_left_11 / cs_right_11;
                        pls::cs::Int32 rectIndex;
                        pls::cs::Int32 handleIndex;
                        {
                            auto cs_receiver = static_cast<pls::cs::Ref<SurfaceManagerBase>>(this);
                            pls::cs::Single cs_arg0 = x;
                            pls::cs::Single cs_arg1 = y;
                            if (!cs_receiver)
                                throw pls::cs::NullReferenceException();
                            auto& cs_arg2 = rectIndex;
                            auto& cs_arg3 = handleIndex;
                            cs_receiver->GetSelectPaintPoint(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                        }
                        for (pls::cs::Int32 j = 0; j < paintRects_.get_Count(); ++j) {
                            IntArray paintRect = GetPaintRect(paintRects_.get_Item(j));
                            PLS_API(require(g)->SetColor(255, 0, 0));
                            {
                                pls::cs::Single cs_arg0 = paintRect[0] - 1;
                                pls::cs::Single cs_arg1 = paintRect[1] - 1;
                                pls::cs::Single cs_arg2 = paintRect[2] + 2;
                                pls::cs::Single cs_arg3 = paintRect[3] + 2;
                                ui::Graphics::DrawRect2(require(g), cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                            }
                            if (currentPaintRect_ != j &&
                                (PLS_API(pls::kairo::DebugInput::GetKey(304 /* KeyCode.LeftShift */)) ||
                                 PLS_API(pls::kairo::DebugInput::GetKey(303 /* KeyCode.RightShift */)))) {
                                pls::cs::Array<pls::kairo::Vector2> paintHandlePoint =
                                    GetPaintHandlePoint(paintRects_.get_Item(j));
                                for (pls::cs::Int32 k = 0; k < paintHandlePoint.length(); ++k) {
                                    PLS_API(require(g)->SetColor(255, 150, 255));
                                    if (currentPaintRect_ == -1 && rectIndex == j && handleIndex == k) {
                                        PLS_API(require(g)->SetColor(255, 255, 255));
                                    }
                                    PLS_API(([&]() -> void {
                                        pls::cs::Single cs_arg0 = (paintHandlePoint[k].x - 0.5f);
                                        pls::cs::Single cs_arg1 = (paintHandlePoint[k].y - 0.5f);
                                        require(g)->FillRect(cs_arg0, cs_arg1, 2.0f, 2.0f);
                                    }()));
                                }
                            }
                            PLS_API(require(g)->PushFont(6));
                            pls::cs::String text;
                            pls::cs::Int32 height = PLS_API(
                                require(PLS_API(require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{})))
                                    ->GetHeight());
                            text = ([&]() {
                                auto cs_left =
                                    pls::cs::String::concat(integer_string(paintRect[0]), literal(u","));
                                auto cs_right = integer_string(paintRect[1]);
                                return pls::cs::String::concat(cs_left, cs_right);
                            }());
                            pls::cs::Int32 num = paintRect[0];
                            pls::cs::Int32 num2 = paintRect[1] - 1 - height;
                            if (num2 < 0) {
                                num2 = 0;
                            }
                            PLS_API(require(g)->SetColor(0, 0, 0, 150));
                            PLS_API(([&]() -> void {
                                pls::cs::Single cs_arg0 = pls::cs::Single(num) - 0.5f;
                                pls::cs::Single cs_arg1 = pls::cs::Single(num2) - 0.5f;
                                pls::cs::Single cs_arg2 =
                                    pls::cs::Int32(PLS_API(require(g)->StringWidth(text))) + 1;
                                require(g)->FillRect(cs_arg0, cs_arg1, cs_arg2, height + 1);
                            }()));
                            PLS_API(require(g)->SetColor(255, 255, 255));
                            PLS_API(require(g)->DrawString(text, num, num2));
                            text = ([&]() {
                                auto cs_left =
                                    pls::cs::String::concat(integer_string(paintRect[2]), literal(u"x"));
                                auto cs_right = integer_string(paintRect[3]);
                                return pls::cs::String::concat(cs_left, cs_right);
                            }());
                            num = ([&]() -> pls::cs::Int32 {
                                auto cs_left = paintRect[0] + paintRect[2];
                                auto cs_right = PLS_API(require(g)->StringWidth(text));
                                return cs_left - cs_right;
                            }());
                            num2 = paintRect[1] + paintRect[3] + 1;
                            if (pls::cs::Single((num2 + height)) > ([&]() -> pls::cs::FloatEval {
                                    auto cs_left = pls::cs::Single((require(surfaceBase)->GetHeight() * 100));
                                    auto cs_right = require(surfaceBase)->GetScaleRatio();
                                    return cs_left / cs_right;
                                }())) {
                                num2 = pls::cs::to_int32((([&]() -> pls::cs::FloatEval {
                                                              auto cs_left = pls::cs::Single(
                                                                  (require(surfaceBase)->GetHeight() * 100));
                                                              auto cs_right =
                                                                  require(surfaceBase)->GetScaleRatio();
                                                              return cs_left / cs_right;
                                                          }()) -
                                                          pls::cs::Single(height)));
                            }
                            PLS_API(require(g)->SetColor(0, 0, 0, 150));
                            PLS_API(([&]() -> void {
                                pls::cs::Single cs_arg0 = pls::cs::Single(num) - 0.5f;
                                pls::cs::Single cs_arg1 = pls::cs::Single(num2) - 0.5f;
                                pls::cs::Single cs_arg2 =
                                    pls::cs::Int32(PLS_API(require(g)->StringWidth(text))) + 1;
                                require(g)->FillRect(cs_arg0, cs_arg1, cs_arg2, height + 1);
                            }()));
                            PLS_API(require(g)->SetColor(255, 255, 255));
                            PLS_API(require(g)->DrawString(text, num, num2));
                            PLS_API(require(g)->PopFont());
                        }
                    }
                },
                [&]() {
                    PLS_API(require(g)->Scale(100.0f));
                    PLS_API(require(g)->ClearRenderRect());
                });
        }
    }
}

// M:kairo.unity.surface.SurfaceManagerBase.CheckScreenRotation
void SurfaceManagerBase::CheckScreenRotation() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceManagerBase.CheckScreenRotation", kairo);
    {
    }
}

// M:kairo.unity.surface.SurfaceManagerBase.CheckScreenRotation(System.Boolean)
void SurfaceManagerBase::CheckScreenRotation(bool skip) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.SurfaceManagerBase.CheckScreenRotation(System.Boolean)", kairo);
    {
    }
}

// M:kairo.unity.surface.SurfaceManagerBase.DrawComponents(kairo.unity.ui.Graphics)
void SurfaceManagerBase::DrawComponents(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.SurfaceManagerBase.DrawComponents(kairo.unity.ui.Graphics)",
                     kairo);
    {
        for (pls::cs::Int32 i = 0; i < PLS_API(require(surfaceList_)->Size()); ++i) {
            pls::cs::Ref<SurfaceBase> surfaceBase = PLS_API(require(surfaceList_)->ElementAt(i));
            pls::cs::Double num = pls::cs::Double(require(surfaceBase)->GetScaleRatio()) / 100.0;
            for (pls::cs::Int32 num2 = require(surfaceBase)->GetComponentLength() - 1; num2 >= 0; --num2) {
                pls::cs::Ref<TouchComponent> component = require(surfaceBase)->GetComponent(num2);
                PLS_API(require(g)->SetColor(0, 255, 255));
                PLS_API(require(g)->SetRenderMode(1, 32, 223));
                PLS_API(([&]() -> void {
                    pls::cs::Single cs_arg0 = ([&]() -> pls::cs::Int32 {
                        auto cs_left = require(surfaceBase)->GetX();
                        auto cs_right = pls::cs::to_int32((pls::cs::Double(require(component)->x) * num));
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg1 = ([&]() -> pls::cs::Int32 {
                        auto cs_left = require(surfaceBase)->GetY();
                        auto cs_right = pls::cs::to_int32((pls::cs::Double(require(component)->y) * num));
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg2 =
                        pls::cs::to_int32((pls::cs::Double(require(component)->width) * num));
                    pls::cs::Single cs_arg3 =
                        pls::cs::to_int32((pls::cs::Double(require(component)->height) * num));
                    require(g)->FillRect(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                }()));
                PLS_API(require(g)->SetRenderMode());
                PLS_API(require(g)->SetColor(255, 0, 0));
                PLS_API(([&]() -> void {
                    pls::cs::Single cs_arg0 = ([&]() -> pls::cs::Int32 {
                        auto cs_left = require(surfaceBase)->GetX();
                        auto cs_right = pls::cs::to_int32((pls::cs::Double(require(component)->x) * num));
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg1 = ([&]() -> pls::cs::Int32 {
                        auto cs_left = require(surfaceBase)->GetY();
                        auto cs_right = pls::cs::to_int32((pls::cs::Double(require(component)->y) * num));
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg2 =
                        pls::cs::to_int32((pls::cs::Double(require(component)->width) * num)) - 1;
                    pls::cs::Single cs_arg3 =
                        pls::cs::to_int32((pls::cs::Double(require(component)->height) * num)) - 1;
                    require(g)->DrawRect(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                }()));
            }
        }
    }
}

// M:kairo.unity.surface.SurfaceManagerBase.OnKeyDown(System.Int32)
void SurfaceManagerBase::OnKeyDown(pls::cs::Int32 key) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceManagerBase.OnKeyDown(System.Int32)",
                     kairo);
    {
        for (pls::cs::Int32 num = PLS_API(require(surfaceList_)->Size()) - 1; num >= 0; --num) {
            require(PLS_API(require(surfaceList_)->ElementAt(num)))->OnKeyDown(key);
        }
    }
}

// M:kairo.unity.surface.SurfaceManagerBase.OnKeyUp(System.Int32)
void SurfaceManagerBase::OnKeyUp(pls::cs::Int32 key) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceManagerBase.OnKeyUp(System.Int32)", kairo);
    {
        for (pls::cs::Int32 num = PLS_API(require(surfaceList_)->Size()) - 1; num >= 0; --num) {
            require(PLS_API(require(surfaceList_)->ElementAt(num)))->OnKeyUp(key);
        }
    }
}

// M:kairo.unity.surface.SurfaceManagerBase.OnKeyDown(System.Int32,kairo.unity.ui.KeyEvent)
void SurfaceManagerBase::OnKeyDown(pls::cs::Int32 keyCode, pls::cs::Ref<pls::kairo::KeyEvent> evt) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.surface.SurfaceManagerBase.OnKeyDown(System.Int32,kairo.unity.ui.KeyEvent)", kairo);
    {
        for (pls::cs::Int32 num = PLS_API(require(surfaceList_)->Size()) - 1; num >= 0; --num) {
            require(PLS_API(require(surfaceList_)->ElementAt(num)))->OnKeyDown(keyCode, evt);
        }
    }
}

// M:kairo.unity.surface.SurfaceManagerBase.IsAutoGLRender
bool SurfaceManagerBase::IsAutoGLRender() {
    SurfaceManagerBase::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceManagerBase.IsAutoGLRender", kairo);
    {
        return SurfaceManagerBase::autoGLRender_();
    }
}
} // namespace kairo::unity::surface
}
