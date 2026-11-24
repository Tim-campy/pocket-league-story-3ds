// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/java.lang.JMath.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "java.util.Vector_1.hpp"
#include "kairo.unity.surface.SurfaceBase.MotionEventRecord.hpp"
#include "kairo.unity.surface.SurfaceBase.TouchPoint.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "kairo.unity.surface.TouchEvent.hpp"
#include "kairo.unity.surface.TouchOption.hpp"
#include "generated/java.util.JTool_templates.hpp"
#include "generated/java.util.Vector_1_templates.hpp"
#include "java.util.Vector_1_templates.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_util = pls::generated::java::util;

using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace kairo::unity::surface {

void SurfaceBase::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(componentBuffer_, visitor);
    pls::cs::trace_value(components_, visitor);
    pls::cs::trace_value(startTouchList_, visitor);
    pls::cs::trace_value(lastTouchList_, visitor);
    pls::cs::trace_value(touchListBuffer_, visitor);
    pls::cs::trace_value(touchEvents_, visitor);
    pls::cs::trace_value(taskBuffer_, visitor);
    pls::cs::trace_value(touchEventBuffer_, visitor);
    pls::cs::trace_value(touchEventBufferNum_, visitor);
    pls::cs::trace_value(start_, visitor);
    pls::cs::trace_value(last_, visitor);
    pls::cs::trace_value(last2_, visitor);
    pls::cs::trace_value(delay_, visitor);
    pls::cs::trace_value(pinchPointer_, visitor);
    pls::cs::trace_value(pinchStartPoint_, visitor);
    pls::cs::trace_value(windowsScaleBackup_, visitor);
    pls::cs::trace_value(windowsScaleGraphics_, visitor);
    pls::cs::trace_value(graphics_, visitor);
    pls::cs::trace_value(OnReceiveTouchEvent_lock1, visitor);
    pls::cs::trace_value(OnReceiveTouchEvent_lock2, visitor);
    pls::cs::trace_value(OnReceiveTrackballEvent_lock, visitor);
}

static IntArray SurfaceBase_localTouchToScreen_result_storage{};

static pls::cs::Ref<SurfaceBase_MotionEventRecord> SurfaceBase_onReceiveTouchEvent_tmp_storage{};

static IntArray SurfaceBase_screenTouchToLocal_result_storage{};

static PLS_NOINLINE void cs_init_9326c27a92cfea3a_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(SurfaceBase_localTouchToScreen_result_storage, visitor);
        pls::cs::trace_value(SurfaceBase_onReceiveTouchEvent_tmp_storage, visitor);
        pls::cs::trace_value(SurfaceBase_screenTouchToLocal_result_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.surface.SurfaceBase", flag, []() {
        SurfaceBase_onReceiveTouchEvent_tmp_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.unity.surface.SurfaceBase.onReceiveTouchEvent_tmp",
            [&]() { return SurfaceBase_MotionEventRecord::create(); });
        SurfaceBase_screenTouchToLocal_result_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.unity.surface.SurfaceBase.screenTouchToLocal_result",
            [&]() { return IntArray::make(2); });
        SurfaceBase_localTouchToScreen_result_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.unity.surface.SurfaceBase.localTouchToScreen_result",
            [&]() { return IntArray::make(2); });
    });
}

void SurfaceBase::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_9326c27a92cfea3a_slow(flag);
}

IntArray& SurfaceBase::localTouchToScreen_result() {
    SurfaceBase::ensure_initialized();
    return SurfaceBase_localTouchToScreen_result_storage;
}

pls::cs::Ref<SurfaceBase_MotionEventRecord>& SurfaceBase::onReceiveTouchEvent_tmp() {
    SurfaceBase::ensure_initialized();
    return SurfaceBase_onReceiveTouchEvent_tmp_storage;
}

IntArray& SurfaceBase::screenTouchToLocal_result() {
    SurfaceBase::ensure_initialized();
    return SurfaceBase_screenTouchToLocal_result_storage;
}

// M:kairo.unity.surface.SurfaceBase.set_registTouch(System.Boolean)
void SurfaceBase::set_registTouch(pls::cs::Ref<SurfaceBase> self, bool value) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.set_registTouch(System.Boolean)",
                     kairo);
    {
        self->registTouch_ = value;
    }
}

// M:kairo.unity.surface.SurfaceBase.get_registTouch
bool SurfaceBase::get_registTouch(pls::cs::Ref<SurfaceBase> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.get_registTouch", kairo);
    {
        if (self->registTouch_) {
            return true;
        }
        if (!is_null(pls::kairo::Graphics::GetCurrent()) &&
            !PLS_API(require(pls::kairo::Graphics::GetCurrent())->IsGUI())) {
            return true;
        }
        return false;
    }
}

// M:kairo.unity.surface.SurfaceBase.#ctor
void SurfaceBase::create_init(pls::cs::Ref<SurfaceBase> self) {
    SurfaceBase::ensure_initialized();
    self->windowsScaleBackup_ = pls::cs::List<pls::cs::Single>::make();
    self->windowsScaleGraphics_ = pls::cs::List<pls::cs::Ref<pls::kairo::Graphics>>::make();
    self->OnReceiveTouchEvent_lock1 = pls::cs::make_ref<pls::cs::Object>();
    self->OnReceiveTouchEvent_lock2 = pls::cs::make_ref<pls::cs::Object>();
    self->OnReceiveTrackballEvent_lock = pls::cs::make_ref<pls::cs::Object>();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.#ctor", kairo);
    {
        self->componentBuffer_ = kl_util::Vector_2_create<pls::cs::Ref<TouchComponent>>();
        self->components_ = kl_util::Vector_2_create<pls::cs::Ref<TouchComponent>>();
        self->start_ = SurfaceBase_MotionEventRecord::create();
        self->last_ = SurfaceBase_MotionEventRecord::create();
        self->last2_ = SurfaceBase_MotionEventRecord::create();
        self->startTouchList_ = kl_util::Vector_2_create<pls::cs::Ref<SurfaceBase_TouchPoint>>();
        self->lastTouchList_ = kl_util::Vector_2_create<pls::cs::Ref<SurfaceBase_TouchPoint>>();
        self->touchListBuffer_ = kl_util::Vector_2_create<pls::cs::Ref<SurfaceBase_TouchPoint>>();
        self->touchEvents_ = kl_util::Vector_2_create<pls::cs::Ref<TouchEvent>>();
        self->multiTouchEnable_ = pls::kairo::DebugInput::get_multiTouchEnabled();
        self->pinchPointer_ = IntArray2::from({IntArray::from({0, 0, -1}), IntArray::from({0, 0, -1})});
        self->pinchStartPoint_ = PLS_API(kl_util::JTool::MakeArray<IntArray2>(IntArray::from({2, 2})));
        self->pinchStart_ = false;
        self->scaleRatio_ = 100.0f;
        self->delay_ = pls::cs::Array<pls::cs::Ref<SurfaceBase_MotionEventRecord>>::make(0);
        self->delayNum_ = 0;
        self->lock_ = false;
        self->touchEventBuffer_ =
            pls::cs::Array<pls::cs::Ref<kl_util::Vector_2<pls::cs::Ref<TouchEvent>>>>::from(
                {kl_util::Vector_2_create<pls::cs::Ref<TouchEvent>>(),
                 kl_util::Vector_2_create<pls::cs::Ref<TouchEvent>>()});
        self->touchEventBufferNum_ = IntArray::make(2);
        self->touchDownComponentId_ = -1;
        self->touchOffset_ = -18;
    }
}

// M:kairo.unity.surface.SurfaceBase.AddTouchComponent(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,kairo.unity.surface.TouchOption)
pls::cs::Ref<TouchComponent> SurfaceBase::AddTouchComponent(pls::cs::Int32 id, pls::cs::Int32 x,
                                                            pls::cs::Int32 y, pls::cs::Int32 width,
                                                            pls::cs::Int32 height, pls::cs::Int32 value,
                                                            pls::cs::Ref<TouchOption> option) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.surface.SurfaceBase.AddTouchComponent(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,kairo.unity.surface.TouchOption)",
        kairo);
    {
        PLS_API(pls::kairo::Graphics::GetCurrent());
        if (!SurfaceBase::get_registTouch(this)) {
            return pls::cs::Ref<TouchComponent>{};
        }
        pls::cs::Ref<TouchComponent> touchComponent = pls::cs::Ref<TouchComponent>{};
        for (pls::cs::Int32 i = 0; i < PLS_API(require(componentBuffer_)->Size()); ++i) {
            if (!require(PLS_API(require(componentBuffer_)->ElementAt(i)))->isLock) {
                touchComponent = PLS_API(require(componentBuffer_)->ElementAt(i));
                require(touchComponent)->Init();
                break;
            }
        }
        if (is_null(touchComponent)) {
            PLS_API(([&]() -> void {
                auto cs_receiver = componentBuffer_;
                pls::cs::Ref<TouchComponent> cs_arg0 = ([&]() {
                    auto cs_value = TouchComponent::create();
                    touchComponent = cs_value;
                    return cs_value;
                }());
                require(cs_receiver)->Add_1(cs_arg0);
            }()));
        }
        require(touchComponent)->surface_ = this;
        require(touchComponent)->id = id;
        require(touchComponent)->x = x;
        require(touchComponent)->y = y;
        require(touchComponent)->width = width;
        require(touchComponent)->height = height;
        require(touchComponent)->value = value;
        require(touchComponent)->option = option;
        require(touchComponent)->isLock = true;
        AddTouchComponent(touchComponent);
        return touchComponent;
    }
}

// M:kairo.unity.surface.SurfaceBase.AddTouchComponent(kairo.unity.surface.TouchComponent)
pls::cs::Ref<TouchComponent> SurfaceBase::AddTouchComponent(pls::cs::Ref<TouchComponent> component) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.surface.SurfaceBase.AddTouchComponent(kairo.unity.surface.TouchComponent)", kairo);
    {
        if (!SurfaceBase::get_registTouch(this)) {
            return pls::cs::Ref<TouchComponent>{};
        }
        if (this->CanRegistComponent()) {
            PLS_API(require(components_)->Add_1(component));
        }
        return component;
    }
}

// M:kairo.unity.surface.SurfaceBase.ExistTouchComponent(kairo.unity.surface.TouchComponent)
bool SurfaceBase::ExistTouchComponent(pls::cs::Ref<TouchComponent> component) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.surface.SurfaceBase.ExistTouchComponent(kairo.unity.surface.TouchComponent)", kairo);
    {
        {
            auto cs_vector_enum155 = kl_util::Vector_2_get_List(components_).GetEnumerator();

            struct cs_vector_scope155 {
                decltype(cs_vector_enum155)& e;

                ~cs_vector_scope155() { e.Dispose(); }
            } cs_scope155{cs_vector_enum155};

            while (cs_vector_enum155.MoveNext()) {
                pls::cs::Ref<TouchComponent> item =
                    pls::cs::unbox<pls::cs::Ref<TouchComponent>>(cs_vector_enum155.get_Current());
                {
                    if ([&]() -> bool {
                            auto cs_left = require(item)->GetKey();
                            auto cs_right = require(component)->GetKey();
                            return cs_left == cs_right;
                        }()) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
}

// M:kairo.unity.surface.SurfaceBase.ClearTouchComponent
void SurfaceBase::ClearTouchComponent() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.ClearTouchComponent", kairo);
    {
        PLS_API(require(components_)->RemoveAllElements());
    }
}

// M:kairo.unity.surface.SurfaceBase.CreateTouchPoint(System.Int64,System.Single,System.Single,kairo.unity.surface.TouchComponent)
pls::cs::Ref<SurfaceBase_TouchPoint> SurfaceBase::CreateTouchPoint(pls::cs::Int64 key, pls::cs::Single x,
                                                                   pls::cs::Single y,
                                                                   pls::cs::Ref<TouchComponent> component) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.surface.SurfaceBase.CreateTouchPoint(System.Int64,System.Single,System.Single,kairo.unity.surface.TouchComponent)",
        kairo);
    {
        pls::cs::Ref<SurfaceBase_TouchPoint> touchPoint = pls::cs::Ref<SurfaceBase_TouchPoint>{};
        for (pls::cs::Int32 i = 0; i < PLS_API(require(touchListBuffer_)->Size()); ++i) {
            pls::cs::Ref<SurfaceBase_TouchPoint> touchPoint2 =
                PLS_API(require(touchListBuffer_)->ElementAt(i));
            if (!java::util::Vector::Contains(require(startTouchList_), touchPoint2) &&
                !java::util::Vector::Contains(require(lastTouchList_), touchPoint2)) {
                touchPoint = touchPoint2;
                break;
            }
        }
        if (is_null(touchPoint)) {
            PLS_API(([&]() -> void {
                auto cs_receiver = touchListBuffer_;
                pls::cs::Ref<SurfaceBase_TouchPoint> cs_arg0 = ([&]() {
                    auto cs_value = SurfaceBase_TouchPoint::create();
                    touchPoint = cs_value;
                    return cs_value;
                }());
                require(cs_receiver)->Add_1(cs_arg0);
            }()));
        }
        require(touchPoint)->Init(key, x, y, component);
        return touchPoint;
    }
}

// M:kairo.unity.surface.SurfaceBase.DoBegin
void SurfaceBase::DoBegin() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.DoBegin", kairo);
    {
        lock_ = true;
        pls::cs::Double num = scaleRatio_ / 100.0f;
        PLS_API(require(touchEvents_)->RemoveAllElements());
        for (pls::cs::Int32 i = 0; i < touchEventBufferNum_.length(); ++i) {
            touchEventBufferNum_[i] = 0;
        }
        for (pls::cs::Int32 j = 0; j < 2; ++j) {
            pls::cs::Ref<kl_util::Vector_2<pls::cs::Ref<SurfaceBase_TouchPoint>>> vector =
                ((j == 0) ? startTouchList_ : lastTouchList_);
            for (pls::cs::Int32 num2 = PLS_API(require(vector)->Size()) - 1; num2 >= 0; --num2) {
                bool flag = true;
                for (pls::cs::Int32 k = 0; k < PLS_API(require(components_)->Size()); ++k) {
                    if (CheckTouchKey(vector,
                                      require(PLS_API(require(components_)->ElementAt(k)))->GetKey())) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    PLS_API(([&]() -> void {
                        auto cs_receiver = touchEvents_;
                        pls::cs::Ref<TouchEvent> cs_arg0 = CreateTouchEvent(
                            10, require(PLS_API(require(vector)->ElementAt(num2)))->component);
                        require(cs_receiver)->Add_1(cs_arg0);
                    }()));
                    PLS_API(require(vector)->RemoveElementAt(num2));
                }
            }
        }
        for (pls::cs::Int32 l = 0; l < PLS_API(require(components_)->Size()) - 1; ++l) {
            for (pls::cs::Int32 num3 = PLS_API(require(components_)->Size()) - 1; num3 > l; --num3) {
                pls::cs::Ref<TouchComponent> touchComponent =
                    PLS_API(require(components_)->ElementAt(num3 - 1));
                pls::cs::Ref<TouchComponent> touchComponent2 = PLS_API(require(components_)->ElementAt(num3));
                if ([&]() -> bool {
                        auto cs_left = require(touchComponent)->GetPriority();
                        auto cs_right = require(touchComponent2)->GetPriority();
                        return cs_left > cs_right;
                    }()) {
                    PLS_API(require(components_)->SetElementAt(touchComponent, num3));
                    PLS_API(require(components_)->SetElementAt(touchComponent2, num3 - 1));
                }
            }
        }
        if (!require(last_)->IsEmpty()) {
            lastTouchX =
                pls::cs::to_int32((pls::cs::Double((require(last_)->x - pls::cs::Single(x_))) / num));
            lastTouchY =
                pls::cs::to_int32((pls::cs::Double((require(last_)->y - pls::cs::Single(y_))) / num));
        }
        if ([&]() {
                pls::cs::Ref<kl_util::Vector_2<pls::cs::Ref<TouchEvent>>> cs_left = taskBuffer_;
                pls::cs::Ref<kl_util::Vector> cs_right = pls::cs::Ref<kl_util::Vector>{};
                return kl_util::Vector_2_op_Equality(cs_left, cs_right);
            }()) {
            taskBuffer_ = kl_util::Vector_2_create<pls::cs::Ref<TouchEvent>>();
        }
        PLS_API(require(taskBuffer_)->RemoveAllElements());
    }
}

// M:kairo.unity.surface.SurfaceBase.DoEnd
void SurfaceBase::DoEnd() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.DoEnd", kairo);
    {
        pls::cs::Double num = scaleRatio_ / 100.0f;
        pls::cs::Int32 num2 = PLS_API(require(touchEvents_)->Size());
        if (!require(last_)->IsEmpty()) {
            pls::cs::Int32 num3 =
                pls::cs::to_int32((pls::cs::Double((require(last_)->x - pls::cs::Single(x_))) / num));
            pls::cs::Int32 num4 =
                pls::cs::to_int32((pls::cs::Double((require(last_)->y - pls::cs::Single(y_))) / num));
            for (pls::cs::Int32 num5 = PLS_API(require(lastTouchList_)->Size()) - 1; num5 >= 0; --num5) {
                pls::cs::Ref<SurfaceBase_TouchPoint> touchPoint =
                    PLS_API(require(lastTouchList_)->ElementAt(num5));
                pls::cs::Int32 num6 = PLS_API(require(taskBuffer_)->Size());
                for (pls::cs::Int32 i = 0; i < PLS_API(require(taskBuffer_)->Size()); ++i) {
                    pls::cs::Ref<TouchEvent> touchEvent = PLS_API(require(taskBuffer_)->ElementAt(i));
                    if ([&]() -> bool {
                            auto cs_left = require(require(touchEvent)->component)->GetKey();
                            auto cs_right = require(touchPoint)->key;
                            return cs_left == cs_right;
                        }()) {
                        if (require(touchEvent)->IsPositive()) {
                            num6 = -1;
                        } else {
                            num6 = (i + 1);
                        }
                    }
                }
                if (num6 != -1) {
                    pls::cs::Ref<TouchComponent> component =
                        GetComponent(require(touchPoint)->id, require(touchPoint)->value);
                    if (!is_null(component)) {
                        PLS_API(([&]() -> void {
                            auto cs_receiver = taskBuffer_;
                            pls::cs::Ref<TouchEvent> cs_arg0 = CreateTouchEvent(3, component);
                            require(cs_receiver)->InsertElementAt(cs_arg0, num6);
                        }()));
                        if ([&]() -> bool {
                                pls::cs::Ref<kl_util::Vector_2<pls::cs::Ref<SurfaceBase_TouchPoint>>>
                                    cs_arg0 = startTouchList_;
                                pls::cs::Int64 cs_arg1 = require(component)->GetKey();
                                return CheckTouchKey(cs_arg0, cs_arg1);
                            }()) {
                            PLS_API(([&]() -> void {
                                auto cs_receiver = taskBuffer_;
                                pls::cs::Ref<TouchEvent> cs_arg0 = CreateTouchEvent(6, component);
                                require(cs_receiver)->InsertElementAt(cs_arg0, num6 + 1);
                            }()));
                        }
                    }
                }
            }
            PLS_API(require(lastTouchList_)->RemoveAllElements());
            for (pls::cs::Int32 j = 0; j < PLS_API(require(components_)->Size()); ++j) {
                pls::cs::Ref<TouchComponent> touchComponent = PLS_API(require(components_)->ElementAt(j));
                bool flag = false;
                for (pls::cs::Int32 num7 = PLS_API(require(taskBuffer_)->Size()) - 1; num7 >= 0; --num7) {
                    pls::cs::Ref<TouchEvent> touchEvent2 = PLS_API(require(taskBuffer_)->ElementAt(num7));
                    if (pls::cs::box(require(touchEvent2)->component) == pls::cs::box(touchComponent) &&
                        require(touchEvent2)->IsPositive()) {
                        flag = true;
                        break;
                    }
                }
                if (flag) {
                    PLS_API(([&]() -> void {
                        auto cs_receiver = lastTouchList_;
                        pls::cs::Ref<SurfaceBase_TouchPoint> cs_arg0 =
                            CreateTouchPoint(require(touchComponent)->GetKey(), num3, num4, touchComponent);
                        require(cs_receiver)->Add_1(cs_arg0);
                    }()));
                }
            }
            for (pls::cs::Int32 num8 = PLS_API(require(startTouchList_)->Size()) - 1; num8 >= 0; --num8) {
                pls::cs::Ref<SurfaceBase_TouchPoint> touchPoint2 =
                    PLS_API(require(startTouchList_)->ElementAt(num8));
                bool flag2 = true;
                for (pls::cs::Int32 k = 0; k < PLS_API(require(lastTouchList_)->Size()); ++k) {
                    pls::cs::Ref<SurfaceBase_TouchPoint> touchPoint3 =
                        PLS_API(require(lastTouchList_)->ElementAt(k));
                    if (require(touchPoint2)->key == require(touchPoint3)->key) {
                        flag2 = false;
                        break;
                    }
                }
                if (flag2) {
                    PLS_API(require(startTouchList_)->RemoveElementAt(num8));
                }
            }
            pinchStart_ = false;
            for (pls::cs::Int32 l = 0; l < PLS_API(require(taskBuffer_)->Size()); ++l) {
                PLS_API(([&]() -> void {
                    auto cs_receiver = touchEvents_;
                    pls::cs::Ref<TouchEvent> cs_arg0 = PLS_API(require(taskBuffer_)->ElementAt(l));
                    require(cs_receiver)->Add_1(cs_arg0);
                }()));
            }
            touch_ = require(last_)->action == 0 || require(last_)->action == 2;
            if (!touch_) {
                PLS_API(require(lastTouchList_)->RemoveAllElements());
                PLS_API(require(startTouchList_)->RemoveAllElements());
            }
        }
        for (pls::cs::Int32 m = 0; m < PLS_API(require(lastTouchList_)->Size()); ++m) {
            pls::cs::Ref<SurfaceBase_TouchPoint> touchPoint4 = PLS_API(require(lastTouchList_)->ElementAt(m));
            pls::cs::Int32 num9 = -1;
            for (pls::cs::Int32 n = num2; n < PLS_API(require(touchEvents_)->Size()); ++n) {
                if (require(PLS_API(require(touchEvents_)->ElementAt(n)))->IsPositive()) {
                    num9 = n + 1;
                    break;
                }
            }
            if (num9 == -1) {
                num9 = PLS_API(require(touchEvents_)->Size());
            }
            PLS_API(([&]() -> void {
                auto cs_receiver = touchEvents_;
                pls::cs::Ref<TouchEvent> cs_arg0 = CreateTouchEvent(13, require(touchPoint4)->component);
                require(cs_receiver)->InsertElementAt(cs_arg0, num9);
            }()));
        }
        pls::cs::Ref<SurfaceBase_MotionEventRecord> motionEventRecord =
            ((!require(last_)->IsEmpty()) ? last_ : last2_);
        if (!require(motionEventRecord)->IsEmpty()) {
            pls::cs::Int32 x = pls::cs::to_int32(
                (pls::cs::Double((require(motionEventRecord)->x - pls::cs::Single(x_))) / num));
            pls::cs::Int32 y = pls::cs::to_int32(
                (pls::cs::Double((require(motionEventRecord)->y - pls::cs::Single(y_))) / num));
            pls::cs::Single speedX = 0.0f;
            pls::cs::Single speedY = 0.0f;
            if (require(motionEventRecord)->deltaTime > 0.0f) {
                speedX = require(motionEventRecord)->deltaX / require(motionEventRecord)->deltaTime;
                speedY = require(motionEventRecord)->deltaY / require(motionEventRecord)->deltaTime;
            }
            for (pls::cs::Int32 num10 = 0; num10 < PLS_API(require(touchEvents_)->Size()); ++num10) {
                pls::cs::Ref<TouchEvent> touchEvent3 = PLS_API(require(touchEvents_)->ElementAt(num10));
                if (require(touchEvent3)->type != 10) {
                    require(touchEvent3)->x = x;
                    require(touchEvent3)->y = y;
                    require(touchEvent3)->speedX = speedX;
                    require(touchEvent3)->speedY = speedY;
                }
            }
        }
        while (PLS_API(require(touchEvents_)->Size()) > 0) {
            pls::cs::Ref<TouchEvent> evt = PLS_API(require(touchEvents_)->FirstElement());
            PLS_API(require(touchEvents_)->RemoveElementAt(0));
            this->OnTouchEvent(evt);
        }
        if (!require(last_)->IsEmpty()) {
            require(last2_)->CopyMotionEventRecord(this, last_);
        }
        require(start_)->Clear();
        require(last_)->Clear();
        lock_ = false;
        for (pls::cs::Int32 num11 = 0; num11 < delayNum_; ++num11) {
            SurfaceBase::OnReceiveTouchEvent_2(delay_.get_Item(num11));
        }
        delayNum_ = 0;
        if (delayEraseTouchDownComponentId_) {
            touchDownComponentId_ = -1;
            delayEraseTouchDownComponentId_ = false;
        }
        if (touchDownComponentId_ != -1 && pls::kairo::DebugInput::get_touchCount() == 0 &&
            !PLS_API(pls::kairo::DebugInput::GetMouseButton(0))) {
            delayEraseTouchDownComponentId_ = true;
        }
    }
}

// M:kairo.unity.surface.SurfaceBase.DoEvent(kairo.unity.surface.TouchComponent)
bool SurfaceBase::DoEvent(pls::cs::Ref<TouchComponent> c) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.SurfaceBase.DoEvent(kairo.unity.surface.TouchComponent)", kairo);
    {
        if (require(last_)->IsEmpty()) {
            return false;
        }
        pls::cs::Double num = scaleRatio_ / 100.0f;
        pls::cs::Int32 num2 =
            pls::cs::to_int32((pls::cs::Double((require(last_)->x - pls::cs::Single(x_))) / num));
        pls::cs::Int32 num3 =
            pls::cs::to_int32((pls::cs::Double((require(last_)->y - pls::cs::Single(y_))) / num));
        pls::cs::Int32 num4 =
            pls::cs::to_int32((pls::cs::Double((require(start_)->x - pls::cs::Single(x_))) / num));
        pls::cs::Int32 num5 =
            pls::cs::to_int32((pls::cs::Double((require(start_)->y - pls::cs::Single(y_))) / num));
        pls::cs::Int32 action = require(last_)->action;
        pls::cs::Ref<TouchOption> option = require(c)->option;
        if (!CheckHitPointRect(num2, num3, require(c)->x, require(c)->y, require(c)->width,
                               require(c)->height)) {
            return false;
        }
        bool flag = CheckHitPointRect(num4, num5, require(c)->x, require(c)->y, require(c)->width,
                                      require(c)->height);
        pls::cs::Ref<kl_util::Vector_2<pls::cs::Ref<SurfaceBase_TouchPoint>>> cs_arg0_4 = lastTouchList_;
        pls::cs::Int64 cs_arg1_4 = require(c)->GetKey();
        bool flag2 = CheckTouchKey(cs_arg0_4, cs_arg1_4);
        pls::cs::Ref<kl_util::Vector_2<pls::cs::Ref<SurfaceBase_TouchPoint>>> cs_arg0_5 = startTouchList_;
        pls::cs::Int64 cs_arg1_5 = require(c)->GetKey();
        pls::cs::Int32 num6 = SearchTouchKey(cs_arg0_5, cs_arg1_5);
        {
            pls::cs::Ref<kl_util::Vector_2<pls::cs::Ref<SurfaceBase_TouchPoint>>> cs_arg0 = lastTouchList_;
            pls::cs::Int64 cs_arg1 = require(c)->GetKey();
            SearchTouchKey(cs_arg0, cs_arg1);
        }
        pls::cs::Int32 num7 = PLS_API(require(taskBuffer_)->Size());
        pls::cs::Ref<TouchEvent> touchEvent = pls::cs::Ref<TouchEvent>{};
        if (require(c)->Check(1024) && action != 0 && touchDownComponentId_ != -1 &&
            touchDownComponentId_ != require(c)->id) {
            return false;
        }
        switch (action) {
        case 0:
        cs_switch_17534_section_0:;
            {
                if (!flag2) {
                    PLS_API(([&]() -> void {
                        auto cs_receiver = taskBuffer_;
                        pls::cs::Ref<TouchEvent> cs_arg0 = CreateTouchEvent(2, c);
                        require(cs_receiver)->Add_1(cs_arg0);
                    }()));
                    if (num6 == -1) {
                        touchDownComponentId_ = require(c)->id;
                        PLS_API(([&]() -> void {
                            auto cs_receiver = taskBuffer_;
                            pls::cs::Ref<TouchEvent> cs_arg0 = CreateTouchEvent(0, c);
                            require(cs_receiver)->Add_1(cs_arg0);
                        }()));
                        PLS_API(([&]() -> void {
                            auto cs_receiver = startTouchList_;
                            pls::cs::Ref<SurfaceBase_TouchPoint> cs_arg0 =
                                CreateTouchPoint(require(c)->GetKey(), num2, num3, c);
                            require(cs_receiver)->Add_1(cs_arg0);
                        }()));
                        num6 = PLS_API(require(startTouchList_)->Size()) - 1;
                    }
                }
                break;
            }
        case 1:
        cs_switch_17534_section_1:;
            {
                if (flag2) {
                    if (num6 != -1) {
                        pls::cs::Ref<SurfaceBase_TouchPoint> touchPoint =
                            PLS_API(require(startTouchList_)->ElementAt(num6));
                        pls::cs::Single num8 = require(touchPoint)->x - pls::cs::Single(num2);
                        pls::cs::Single num9 = require(touchPoint)->y - pls::cs::Single(num3);
                        if (num8 * num8 + num9 * num9 < 225.0f) {
                            PLS_API(([&]() -> void {
                                auto cs_receiver = taskBuffer_;
                                pls::cs::Ref<TouchEvent> cs_arg0 = CreateTouchEvent(5, c);
                                require(cs_receiver)->Add_1(cs_arg0);
                            }()));
                        } else {
                            touchEvent = CreateTouchEvent(1, c);
                            goto cs_switch_17534_section_2;
                        }
                    }
                    PLS_API(([&]() -> void {
                        auto cs_receiver = taskBuffer_;
                        pls::cs::Ref<TouchEvent> cs_arg0 = CreateTouchEvent(1, c);
                        require(cs_receiver)->Add_1(cs_arg0);
                    }()));
                } else if (flag && require(start_)->action == 0) {
                    touchDownComponentId_ = require(c)->id;
                    PLS_API(([&]() -> void {
                        auto cs_receiver = taskBuffer_;
                        pls::cs::Ref<TouchEvent> cs_arg0 = CreateTouchEvent(0, c);
                        require(cs_receiver)->Add_1(cs_arg0);
                    }()));
                    PLS_API(([&]() -> void {
                        auto cs_receiver = taskBuffer_;
                        pls::cs::Ref<TouchEvent> cs_arg0 = CreateTouchEvent(5, c);
                        require(cs_receiver)->Add_1(cs_arg0);
                    }()));
                    PLS_API(([&]() -> void {
                        auto cs_receiver = taskBuffer_;
                        pls::cs::Ref<TouchEvent> cs_arg0 = CreateTouchEvent(1, c);
                        require(cs_receiver)->Add_1(cs_arg0);
                    }()));
                    PLS_API(([&]() -> void {
                        auto cs_receiver = taskBuffer_;
                        pls::cs::Ref<TouchEvent> cs_arg0 = CreateTouchEvent(3, c);
                        require(cs_receiver)->Add_1(cs_arg0);
                    }()));
                    PLS_API(([&]() -> void {
                        auto cs_receiver = taskBuffer_;
                        pls::cs::Ref<TouchEvent> cs_arg0 = CreateTouchEvent(6, c);
                        require(cs_receiver)->Add_1(cs_arg0);
                    }()));
                } else {
                    PLS_API(([&]() -> void {
                        auto cs_receiver = taskBuffer_;
                        pls::cs::Ref<TouchEvent> cs_arg0 = CreateTouchEvent(2, c);
                        require(cs_receiver)->Add_1(cs_arg0);
                    }()));
                    PLS_API(([&]() -> void {
                        auto cs_receiver = taskBuffer_;
                        pls::cs::Ref<TouchEvent> cs_arg0 = CreateTouchEvent(1, c);
                        require(cs_receiver)->Add_1(cs_arg0);
                    }()));
                    PLS_API(([&]() -> void {
                        auto cs_receiver = taskBuffer_;
                        pls::cs::Ref<TouchEvent> cs_arg0 = CreateTouchEvent(3, c);
                        require(cs_receiver)->Add_1(cs_arg0);
                    }()));
                }
                break;
            }
        case 2:
        cs_switch_17534_section_2:;
            {
                if (flag2) {
                    if (num6 != -1) {
                        pls::cs::Ref<SurfaceBase_TouchPoint> touchPoint2 =
                            PLS_API(require(startTouchList_)->ElementAt(num6));
                        pls::cs::Int32 num10 = 0;
                        pls::cs::Int32 num11 = 0;
                        if (!is_null(option) &&
                            (require(option)->dragGridW > 0.0f || require(option)->dragGridH > 0.0f)) {
                            pls::cs::Single num12 = pls::cs::Single(num2) - require(touchPoint2)->dragBaseX;
                            pls::cs::Single num13 = pls::cs::Single(num3) - require(touchPoint2)->dragBaseY;
                            if (require(option)->dragGridW > 0.0f) {
                                num10 = pls::cs::to_int32((num12 / require(option)->dragGridW));
                            }
                            if (require(option)->dragGridH > 0.0f) {
                                num11 = pls::cs::to_int32((num13 / require(option)->dragGridH));
                            }
                        }
                        if (num10 != 0 || num11 != 0) {
                            pls::cs::Ref<TouchEvent> touchEvent2 = CreateTouchEvent(8, c);
                            require(touchEvent2)->dx = num10;
                            require(touchEvent2)->dy = num11;
                            PLS_API(require(taskBuffer_)->Add_1(touchEvent2));
                            require(touchPoint2)->dragBaseX =
                                require(touchPoint2)->dragBaseX +
                                pls::cs::Single(num10) * require(option)->dragGridW;
                            require(touchPoint2)->dragBaseY =
                                require(touchPoint2)->dragBaseY +
                                pls::cs::Single(num11) * require(option)->dragGridH;
                        } else if (!is_null(option) && ([&]() {
                                       auto cs_left = pls::cs::box(require(option)->dragCell);
                                       auto cs_right = pls::cs::box(IntArray{});
                                       return cs_left != cs_right;
                                   }())) {
                            pls::cs::Ref<TouchEvent> touchEvent3 = CreateTouchEvent(9, c);
                            if (require(option)->dragCell[4] > 1) {
                                {
                                    auto cs_target = touchEvent3;
                                    pls::cs::Int32 cs_value =
                                        pls::cs::to_int32((([&]() -> pls::cs::FloatEval {
                                            auto cs_left = (pls::cs::Single(num2) -
                                                            pls::cs::Single(require(option)->dragCell[0]));
                                            auto cs_right = (([&]() -> pls::cs::FloatEval {
                                                auto cs_left = pls::cs::Single(require(option)->dragCell[2]);
                                                auto cs_right = pls::cs::Single(require(option)->dragCell[4]);
                                                return cs_left / cs_right;
                                            }()));
                                            return cs_left / cs_right;
                                        }())));
                                    require(cs_target)->dx = cs_value;
                                }
                            }
                            if (require(option)->dragCell[5] > 1) {
                                {
                                    auto cs_target = touchEvent3;
                                    pls::cs::Int32 cs_value =
                                        pls::cs::to_int32((([&]() -> pls::cs::FloatEval {
                                            auto cs_left = (pls::cs::Single(num3) -
                                                            pls::cs::Single(require(option)->dragCell[1]));
                                            auto cs_right = (([&]() -> pls::cs::FloatEval {
                                                auto cs_left = pls::cs::Single(require(option)->dragCell[3]);
                                                auto cs_right = pls::cs::Single(require(option)->dragCell[5]);
                                                return cs_left / cs_right;
                                            }()));
                                            return cs_left / cs_right;
                                        }())));
                                    require(cs_target)->dy = cs_value;
                                }
                            }
                            if (7 < require(option)->dragCell.length()) {
                                pls::cs::Int32 num14 = require(option)->dragCell[6];
                                pls::cs::Int32 num15 = require(option)->dragCell[7];
                                if (num14 < require(touchEvent3)->dx &&
                                    require(touchEvent3)->dx < num14 + num15) {
                                    require(touchEvent3)->dx = num14;
                                } else if (num14 + num15 <= require(touchEvent3)->dx) {
                                    require(touchEvent3)->dx = require(touchEvent3)->dx - (num15 - 1);
                                }
                                if (num14 < require(touchEvent3)->dy &&
                                    require(touchEvent3)->dy < num14 + num15) {
                                    require(touchEvent3)->dy = num14;
                                } else if (num14 + num15 <= require(touchEvent3)->dy) {
                                    require(touchEvent3)->dy = require(touchEvent3)->dy - (num15 - 1);
                                }
                            }
                            if ([&]() -> bool {
                                    auto cs_left = require(touchEvent3)->dx;
                                    auto cs_right = require(option)->dragCell[4];
                                    return cs_left >= cs_right;
                                }()) {
                                {
                                    auto cs_target = touchEvent3;
                                    pls::cs::Int32 cs_value = require(option)->dragCell[4] - 1;
                                    require(cs_target)->dx = cs_value;
                                }
                            }
                            if (require(touchEvent3)->dx < 0) {
                                require(touchEvent3)->dx = 0;
                            }
                            if ([&]() -> bool {
                                    auto cs_left = require(touchEvent3)->dy;
                                    auto cs_right = require(option)->dragCell[5];
                                    return cs_left >= cs_right;
                                }()) {
                                {
                                    auto cs_target = touchEvent3;
                                    pls::cs::Int32 cs_value = require(option)->dragCell[5] - 1;
                                    require(cs_target)->dy = cs_value;
                                }
                            }
                            if (require(touchEvent3)->dy < 0) {
                                require(touchEvent3)->dy = 0;
                            }
                            PLS_API(require(taskBuffer_)->Add_1(touchEvent3));
                        } else {
                            pls::cs::Ref<TouchEvent> touchEvent4 = CreateTouchEvent(7, c);
                            require(touchEvent4)->dx =
                                pls::cs::to_int32((pls::cs::Single(num2) - require(touchPoint2)->x));
                            require(touchEvent4)->dy =
                                pls::cs::to_int32((pls::cs::Single(num3) - require(touchPoint2)->y));
                            PLS_API(require(taskBuffer_)->Add_1(touchEvent4));
                        }
                    } else {
                        PLS_API(([&]() -> void {
                            auto cs_receiver = taskBuffer_;
                            pls::cs::Ref<TouchEvent> cs_arg0 = CreateTouchEvent(4, c);
                            require(cs_receiver)->Add_1(cs_arg0);
                        }()));
                    }
                    break;
                }
                PLS_API(([&]() -> void {
                    auto cs_receiver = taskBuffer_;
                    pls::cs::Ref<TouchEvent> cs_arg0 = CreateTouchEvent(2, c);
                    require(cs_receiver)->Add_1(cs_arg0);
                }()));
                if (flag && require(start_)->action == 0) {
                    touchDownComponentId_ = require(c)->id;
                    PLS_API(([&]() -> void {
                        auto cs_receiver = taskBuffer_;
                        pls::cs::Ref<TouchEvent> cs_arg0 = CreateTouchEvent(0, c);
                        require(cs_receiver)->Add_1(cs_arg0);
                    }()));
                    pls::cs::Ref<TouchEvent> touchEvent5 = CreateTouchEvent(7, c);
                    require(touchEvent5)->dx = num2 - num4;
                    require(touchEvent5)->dy = num3 - num5;
                    PLS_API(require(taskBuffer_)->Add_1(touchEvent5));
                    if (num6 != -1) {
                        PLS_API(require(startTouchList_)->RemoveElementAt(num6));
                    }
                    PLS_API(([&]() -> void {
                        auto cs_receiver = startTouchList_;
                        pls::cs::Ref<SurfaceBase_TouchPoint> cs_arg0 =
                            CreateTouchPoint(require(c)->GetKey(), num2, num3, c);
                        require(cs_receiver)->Add_1(cs_arg0);
                    }()));
                    num6 = PLS_API(require(startTouchList_)->Size()) - 1;
                }
                break;
            }
        case 3:
        cs_switch_17534_section_3:;
            {
                break;
            }
        }
        if (!is_null(touchEvent)) {
            PLS_API(require(taskBuffer_)->Add_1(touchEvent));
        }
        if (multiTouchEnable_ && pls::cs::Double(pinchDistance_) / num != 0.0) {
            IntArray2 array = pinchStartPoint_;
            if (([&]() -> bool {
                    pls::cs::Int32 cs_arg0 = pls::cs::to_int32((pls::cs::Double((([&]() -> pls::cs::Int32 {
                                                                    auto cs_left = array[0][0];
                                                                    auto cs_right = x_;
                                                                    return cs_left - cs_right;
                                                                }()))) /
                                                                num));
                    pls::cs::Int32 cs_arg1 = pls::cs::to_int32((pls::cs::Double((([&]() -> pls::cs::Int32 {
                                                                    auto cs_left = array[0][1];
                                                                    auto cs_right = y_;
                                                                    return cs_left - cs_right;
                                                                }()))) /
                                                                num));
                    pls::cs::Int32 cs_arg2 = require(c)->x;
                    pls::cs::Int32 cs_arg3 = require(c)->y;
                    pls::cs::Int32 cs_arg4 = require(c)->width;
                    pls::cs::Int32 cs_arg5 = require(c)->height;
                    return CheckHitPointRect(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
                }()) &&
                ([&]() -> bool {
                    pls::cs::Int32 cs_arg0 = pls::cs::to_int32((pls::cs::Double((([&]() -> pls::cs::Int32 {
                                                                    auto cs_left = array[1][0];
                                                                    auto cs_right = x_;
                                                                    return cs_left - cs_right;
                                                                }()))) /
                                                                num));
                    pls::cs::Int32 cs_arg1 = pls::cs::to_int32((pls::cs::Double((([&]() -> pls::cs::Int32 {
                                                                    auto cs_left = array[1][1];
                                                                    auto cs_right = y_;
                                                                    return cs_left - cs_right;
                                                                }()))) /
                                                                num));
                    pls::cs::Int32 cs_arg2 = require(c)->x;
                    pls::cs::Int32 cs_arg3 = require(c)->y;
                    pls::cs::Int32 cs_arg4 = require(c)->width;
                    pls::cs::Int32 cs_arg5 = require(c)->height;
                    return CheckHitPointRect(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
                }())) {
                pls::cs::Int32 i;
                for (([&]() {
                         pls::cs::Int32 cs_value = num7;
                         i = cs_value;
                         return cs_value;
                     }());
                     i < PLS_API(require(taskBuffer_)->Size()); ++i) {
                    if (!require(PLS_API(require(taskBuffer_)->ElementAt(i)))->IsPositive())
                        break;
                }
                if (pinchStart_) {
                    pls::cs::Ref<TouchEvent> touchEvent6 = CreateTouchEvent(11, c);
                    require(touchEvent6)->pinch = 0;
                    PLS_API(([&]() -> void {
                        pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(pinchStartPoint_[0]);
                        pls::cs::Ref<pls::cs::Object> cs_arg2 =
                            pls::cs::box(require(touchEvent6)->pinchPointBegin_[0]);
                        kl_lang::JSystem::Arraycopy(cs_arg0, 0, cs_arg2, 0, 2);
                    }()));
                    PLS_API(([&]() -> void {
                        pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(pinchStartPoint_[1]);
                        pls::cs::Ref<pls::cs::Object> cs_arg2 =
                            pls::cs::box(require(touchEvent6)->pinchPointBegin_[1]);
                        kl_lang::JSystem::Arraycopy(cs_arg0, 0, cs_arg2, 0, 2);
                    }()));
                    PLS_API(([&]() -> void {
                        pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(pinchPointer_[0]);
                        pls::cs::Ref<pls::cs::Object> cs_arg2 =
                            pls::cs::box(require(touchEvent6)->pinchPointBegin_[0]);
                        kl_lang::JSystem::Arraycopy(cs_arg0, 0, cs_arg2, 0, 2);
                    }()));
                    PLS_API(([&]() -> void {
                        pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(pinchPointer_[1]);
                        pls::cs::Ref<pls::cs::Object> cs_arg2 =
                            pls::cs::box(require(touchEvent6)->pinchPointBegin_[1]);
                        kl_lang::JSystem::Arraycopy(cs_arg0, 0, cs_arg2, 0, 2);
                    }()));
                    PLS_API(([&]() -> void {
                        auto cs_receiver = taskBuffer_;
                        pls::cs::Ref<TouchEvent> cs_arg0 = touchEvent6;
                        pls::cs::Int32 cs_arg1 = i++;
                        require(cs_receiver)->InsertElementAt(cs_arg0, cs_arg1);
                    }()));
                }
                pls::cs::Ref<TouchEvent> touchEvent7 = CreateTouchEvent(12, c);
                require(touchEvent7)->pinch = pls::cs::to_int32((pls::cs::Double(pinchDistance_) / num));
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(pinchStartPoint_[0]);
                    pls::cs::Ref<pls::cs::Object> cs_arg2 =
                        pls::cs::box(require(touchEvent7)->pinchPointBegin_[0]);
                    kl_lang::JSystem::Arraycopy(cs_arg0, 0, cs_arg2, 0, 2);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(pinchStartPoint_[1]);
                    pls::cs::Ref<pls::cs::Object> cs_arg2 =
                        pls::cs::box(require(touchEvent7)->pinchPointBegin_[1]);
                    kl_lang::JSystem::Arraycopy(cs_arg0, 0, cs_arg2, 0, 2);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(pinchPointer_[0]);
                    pls::cs::Ref<pls::cs::Object> cs_arg2 =
                        pls::cs::box(require(touchEvent7)->pinchPointNow_[0]);
                    kl_lang::JSystem::Arraycopy(cs_arg0, 0, cs_arg2, 0, 2);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(pinchPointer_[1]);
                    pls::cs::Ref<pls::cs::Object> cs_arg2 =
                        pls::cs::box(require(touchEvent7)->pinchPointNow_[1]);
                    kl_lang::JSystem::Arraycopy(cs_arg0, 0, cs_arg2, 0, 2);
                }()));
                PLS_API(([&]() -> void {
                    auto cs_receiver = taskBuffer_;
                    pls::cs::Ref<TouchEvent> cs_arg0 = touchEvent7;
                    pls::cs::Int32 cs_arg1 = i++;
                    require(cs_receiver)->InsertElementAt(cs_arg0, cs_arg1);
                }()));
                pinchDistance_ = 0;
            }
        }
        if (require(c)->Check(1)) {
            return false;
        }
        return true;
    }
}

// M:kairo.unity.surface.SurfaceBase.BeginTouchRegist(kairo.unity.ui.Graphics)
void SurfaceBase::BeginTouchRegist(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.SurfaceBase.BeginTouchRegist(kairo.unity.ui.Graphics)", kairo);
    {
        for (pls::cs::Int32 i = 0; i < PLS_API(require(componentBuffer_)->Size()); ++i) {
            pls::cs::Ref<TouchComponent> touchComponent = PLS_API(require(componentBuffer_)->ElementAt(i));
            if (require(touchComponent)->hasCount <= 0) {
                require(touchComponent)->isLock = false;
            }
        }
        for (pls::cs::Int32 j = 0; j < PLS_API(require(components_)->Size()); ++j) {
            pls::cs::Ref<TouchComponent> touchComponent2 = PLS_API(require(components_)->ElementAt(j));
            require(touchComponent2)->isLock = true;
            if (!is_null(require(touchComponent2)->option)) {
                require(require(touchComponent2)->option)->Lock = true;
            }
        }
        for (pls::cs::Int32 k = 0; k < PLS_API(require(startTouchList_)->Size()); ++k) {
            pls::cs::Ref<TouchComponent> component =
                require(PLS_API(require(startTouchList_)->ElementAt(k)))->component;
            if (!is_null(component)) {
                require(component)->isLock = true;
                if (!is_null(require(component)->option)) {
                    require(require(component)->option)->Lock = true;
                }
            }
        }
        for (pls::cs::Int32 l = 0; l < PLS_API(require(lastTouchList_)->Size()); ++l) {
            pls::cs::Ref<TouchComponent> component2 =
                require(PLS_API(require(lastTouchList_)->ElementAt(l)))->component;
            if (!is_null(component2)) {
                require(component2)->isLock = true;
                if (!is_null(require(component2)->option)) {
                    require(require(component2)->option)->Lock = true;
                }
            }
        }
        SurfaceBase::set_registTouch(this, true);
    }
}

// M:kairo.unity.surface.SurfaceBase.EndTouchRegist(kairo.unity.ui.Graphics)
void SurfaceBase::EndTouchRegist(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.SurfaceBase.EndTouchRegist(kairo.unity.ui.Graphics)", kairo);
    {
        SurfaceBase::set_registTouch(this, false);
    }
}

// M:kairo.unity.surface.SurfaceBase.SetTouchRegistEnable(System.Boolean)
void SurfaceBase::SetTouchRegistEnable(bool enable) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.SetTouchRegistEnable(System.Boolean)",
                     kairo);
    {
        SurfaceBase::set_registTouch(this, enable);
    }
}

// M:kairo.unity.surface.SurfaceBase.OnDraw(kairo.unity.ui.Graphics)
void SurfaceBase::OnDraw(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.OnDraw(kairo.unity.ui.Graphics)",
                     kairo);
    {
        graphics_ = g;
        PLS_API(windowsScaleBackup_.Clear());
        PLS_API(windowsScaleGraphics_.Clear());
        pls::cs::run_finally(
            [&]() {
                {
                    this->Draw(g);
                }
            },
            [&]() {
                graphics_ = pls::cs::Ref<pls::kairo::Graphics>{};
                PLS_API(windowsScaleBackup_.Clear());
                PLS_API(windowsScaleGraphics_.Clear());
            });
    }
}

// M:kairo.unity.surface.SurfaceBase.IsTouch
bool SurfaceBase::IsTouch() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.IsTouch", kairo);
    {
        return touch_;
    }
}

// M:kairo.unity.surface.SurfaceBase.GetComponentLength
pls::cs::Int32 SurfaceBase::GetComponentLength() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.GetComponentLength", kairo);
    {
        PLS_API(pls::kairo::Graphics::GetCurrent());
        return PLS_API(require(components_)->Size());
    }
}

// M:kairo.unity.surface.SurfaceBase.GetComponent(System.Int32)
pls::cs::Ref<TouchComponent> SurfaceBase::GetComponent(pls::cs::Int32 index) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.GetComponent(System.Int32)", kairo);
    {
        PLS_API(pls::kairo::Graphics::GetCurrent());
        return PLS_API(require(components_)->ElementAt(index));
    }
}

// M:kairo.unity.surface.SurfaceBase.GetComponent(System.Int32,System.Int32)
pls::cs::Ref<TouchComponent> SurfaceBase::GetComponent(pls::cs::Int32 id, pls::cs::Int32 value) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.SurfaceBase.GetComponent(System.Int32,System.Int32)", kairo);
    {
        pls::cs::Int32 componentLength = GetComponentLength();
        for (pls::cs::Int32 i = 0; i < componentLength; ++i) {
            pls::cs::Ref<TouchComponent> component = GetComponent(i);
            if (require(component)->id == id && require(component)->value == value) {
                return component;
            }
        }
        return pls::cs::Ref<TouchComponent>{};
    }
}

// M:kairo.unity.surface.SurfaceBase.GetComponentId(System.Int32)
pls::cs::Ref<TouchComponent> SurfaceBase::GetComponentId(pls::cs::Int32 id) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.GetComponentId(System.Int32)", kairo);
    {
        pls::cs::Int32 componentLength = GetComponentLength();
        for (pls::cs::Int32 i = 0; i < componentLength; ++i) {
            pls::cs::Ref<TouchComponent> component = GetComponent(i);
            if (require(component)->id == id) {
                return component;
            }
        }
        return pls::cs::Ref<TouchComponent>{};
    }
}

// M:kairo.unity.surface.SurfaceBase.CheckTouch(System.Int32,System.Int32)
bool SurfaceBase::CheckTouch(pls::cs::Int32 id, pls::cs::Int32 value) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.SurfaceBase.CheckTouch(System.Int32,System.Int32)", kairo);
    {
        {
            pls::cs::Ref<kl_util::Vector_2<pls::cs::Ref<SurfaceBase_TouchPoint>>> cs_arg0_59 = lastTouchList_;
            pls::cs::Int64 cs_arg1_59 = TouchComponent::GetKey(id, value);
            return CheckTouchKey(cs_arg0_59, cs_arg1_59);
        }
    }
}

// M:kairo.unity.surface.SurfaceBase.CheckFirstTouch(System.Int32,System.Int32)
bool SurfaceBase::CheckFirstTouch(pls::cs::Int32 id, pls::cs::Int32 value) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.SurfaceBase.CheckFirstTouch(System.Int32,System.Int32)", kairo);
    {
        {
            pls::cs::Ref<kl_util::Vector_2<pls::cs::Ref<SurfaceBase_TouchPoint>>> cs_arg0_61 =
                startTouchList_;
            pls::cs::Int64 cs_arg1_61 = TouchComponent::GetKey(id, value);
            return CheckTouchKey(cs_arg0_61, cs_arg1_61);
        }
    }
}

// M:kairo.unity.surface.SurfaceBase.CheckFirstTouch(System.Int32)
bool SurfaceBase::CheckFirstTouch(pls::cs::Int32 id) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.CheckFirstTouch(System.Int32)",
                     kairo);
    {
        return CheckTouchId(startTouchList_, id);
    }
}

// M:kairo.unity.surface.SurfaceBase.SearchTouchKey(java.util.Vector{kairo.unity.surface.SurfaceBase.TouchPoint},System.Int64)
pls::cs::Int32
SurfaceBase::SearchTouchKey(pls::cs::Ref<kl_util::Vector_2<pls::cs::Ref<SurfaceBase_TouchPoint>>> list,
                            pls::cs::Int64 key) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.surface.SurfaceBase.SearchTouchKey(java.util.Vector{kairo.unity.surface.SurfaceBase.TouchPoint},System.Int64)",
        kairo);
    {
        for (pls::cs::Int32 i = 0; i < PLS_API(require(list)->Size()); ++i) {
            if (require(PLS_API(require(list)->ElementAt(i)))->key == key) {
                return i;
            }
        }
        return -1;
    }
}

// M:kairo.unity.surface.SurfaceBase.SearchTouchId(java.util.Vector{kairo.unity.surface.SurfaceBase.TouchPoint},System.Int32)
pls::cs::Int32
SurfaceBase::SearchTouchId(pls::cs::Ref<kl_util::Vector_2<pls::cs::Ref<SurfaceBase_TouchPoint>>> list,
                           pls::cs::Int32 id) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.surface.SurfaceBase.SearchTouchId(java.util.Vector{kairo.unity.surface.SurfaceBase.TouchPoint},System.Int32)",
        kairo);
    {
        for (pls::cs::Int32 i = 0; i < PLS_API(require(list)->Size()); ++i) {
            if (require(PLS_API(require(list)->ElementAt(i)))->id == id) {
                return i;
            }
        }
        return -1;
    }
}

// M:kairo.unity.surface.SurfaceBase.CheckTouchKey(java.util.Vector{kairo.unity.surface.SurfaceBase.TouchPoint},System.Int64)
bool SurfaceBase::CheckTouchKey(pls::cs::Ref<kl_util::Vector_2<pls::cs::Ref<SurfaceBase_TouchPoint>>> list,
                                pls::cs::Int64 key) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.surface.SurfaceBase.CheckTouchKey(java.util.Vector{kairo.unity.surface.SurfaceBase.TouchPoint},System.Int64)",
        kairo);
    {
        return SearchTouchKey(list, key) != -1;
    }
}

// M:kairo.unity.surface.SurfaceBase.CheckTouchId(java.util.Vector{kairo.unity.surface.SurfaceBase.TouchPoint},System.Int32)
bool SurfaceBase::CheckTouchId(pls::cs::Ref<kl_util::Vector_2<pls::cs::Ref<SurfaceBase_TouchPoint>>> list,
                               pls::cs::Int32 id) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.surface.SurfaceBase.CheckTouchId(java.util.Vector{kairo.unity.surface.SurfaceBase.TouchPoint},System.Int32)",
        kairo);
    {
        return SearchTouchId(list, id) != -1;
    }
}

// M:kairo.unity.surface.SurfaceBase.GetTouchEventId(System.Int32,System.Int32)
pls::cs::Ref<TouchEvent> SurfaceBase::GetTouchEventId(pls::cs::Int32 id, pls::cs::Int32 type) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.SurfaceBase.GetTouchEventId(System.Int32,System.Int32)", kairo);
    {
        for (pls::cs::Int32 i = 0; i < PLS_API(require(touchEvents_)->Size()); ++i) {
            pls::cs::Ref<TouchEvent> touchEvent = PLS_API(require(touchEvents_)->ElementAt(i));
            if (require(require(touchEvent)->component)->id == id &&
                (type == -1 || require(touchEvent)->type == type)) {
                return touchEvent;
            }
        }
        return pls::cs::Ref<TouchEvent>{};
    }
}

// M:kairo.unity.surface.SurfaceBase.GetTouchEventKey(System.Int64,System.Int32)
pls::cs::Ref<TouchEvent> SurfaceBase::GetTouchEventKey(pls::cs::Int64 key, pls::cs::Int32 type) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.SurfaceBase.GetTouchEventKey(System.Int64,System.Int32)", kairo);
    {
        for (pls::cs::Int32 i = 0; i < PLS_API(require(touchEvents_)->Size()); ++i) {
            pls::cs::Ref<TouchEvent> touchEvent = PLS_API(require(touchEvents_)->ElementAt(i));
            if (require(require(touchEvent)->component)->GetKey() == key &&
                (type == -1 || require(touchEvent)->type == type)) {
                return touchEvent;
            }
        }
        return pls::cs::Ref<TouchEvent>{};
    }
}

// M:kairo.unity.surface.SurfaceBase.CreateTouchEvent(System.Int32,kairo.unity.surface.TouchComponent)
pls::cs::Ref<TouchEvent> SurfaceBase::CreateTouchEvent(pls::cs::Int32 type,
                                                       pls::cs::Ref<TouchComponent> component) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.surface.SurfaceBase.CreateTouchEvent(System.Int32,kairo.unity.surface.TouchComponent)",
        kairo);
    {
        pls::cs::Int32 num = 0;
        if (type == 12 || type == 11) {
            num = 1;
        }
        if ([&]() -> bool {
                auto cs_left = touchEventBufferNum_[num];
                auto cs_right = PLS_API(require(touchEventBuffer_.get_Item(num))->Size());
                return cs_left >= cs_right;
            }()) {
            PLS_API(([&]() -> void {
                auto cs_receiver = touchEventBuffer_.get_Item(num);
                pls::cs::Ref<TouchEvent> cs_arg0 = TouchEvent::create();
                require(cs_receiver)->Add_1(cs_arg0);
            }()));
        }
        pls::cs::Ref<TouchEvent> touchEvent = PLS_API(([&]() -> pls::cs::Ref<TouchEvent> {
            auto cs_receiver = touchEventBuffer_.get_Item(num);
            pls::cs::Int32 cs_arg0 = touchEventBufferNum_[num];
            return require(cs_receiver)->ElementAt(cs_arg0);
        }()));
        touchEventBufferNum_[num]++;
        if (num == 1 && ([&]() {
                auto cs_left = pls::cs::box(require(touchEvent)->pinchPointBegin_);
                auto cs_right = pls::cs::box(IntArray2{});
                return cs_left == cs_right;
            }())) {
            {
                auto cs_target = touchEvent;
                auto cs_value = PLS_API(kl_util::JTool::MakeArray<IntArray2>(IntArray::from({2, 2})));
                require(cs_target)->pinchPointBegin_ = cs_value;
            }
            {
                auto cs_target = touchEvent;
                auto cs_value = PLS_API(kl_util::JTool::MakeArray<IntArray2>(IntArray::from({2, 2})));
                require(cs_target)->pinchPointNow_ = cs_value;
            }
        }
        require(touchEvent)->Init();
        require(touchEvent)->type = type;
        require(touchEvent)->component = component;
        return touchEvent;
    }
}

// M:kairo.unity.surface.SurfaceBase.SetScaleRatio(System.Single)
void SurfaceBase::SetScaleRatio(pls::cs::Single scale) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.SetScaleRatio(System.Single)", kairo);
    {
        scaleRatio_ = scale;
    }
}

// M:kairo.unity.surface.SurfaceBase.GetScaleRatio
pls::cs::Single SurfaceBase::GetScaleRatio() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.GetScaleRatio", kairo);
    {
        return scaleRatio_;
    }
}

// M:kairo.unity.surface.SurfaceBase.GetX
pls::cs::Int32 SurfaceBase::GetX() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.GetX", kairo);
    {
        return x_;
    }
}

// M:kairo.unity.surface.SurfaceBase.GetY
pls::cs::Int32 SurfaceBase::GetY() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.GetY", kairo);
    {
        return y_;
    }
}

// M:kairo.unity.surface.SurfaceBase.GetWidth
pls::cs::Int32 SurfaceBase::GetWidth() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.GetWidth", kairo);
    {
        return width_;
    }
}

// M:kairo.unity.surface.SurfaceBase.SetHeight(System.Int32)
void SurfaceBase::SetHeight(pls::cs::Int32 height) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.SetHeight(System.Int32)", kairo);
    {
        height_ = height;
    }
}

// M:kairo.unity.surface.SurfaceBase.GetHeight
pls::cs::Int32 SurfaceBase::GetHeight() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.GetHeight", kairo);
    {
        return height_;
    }
}

// M:kairo.unity.surface.SurfaceBase.SetLocation(System.Int32,System.Int32)
void SurfaceBase::SetLocation(pls::cs::Int32 x, pls::cs::Int32 y) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.SurfaceBase.SetLocation(System.Int32,System.Int32)", kairo);
    {
        x_ = x;
        y_ = y;
    }
}

// M:kairo.unity.surface.SurfaceBase.SetSize(System.Int32,System.Int32)
void SurfaceBase::SetSize(pls::cs::Int32 width, pls::cs::Int32 height) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.SetSize(System.Int32,System.Int32)",
                     kairo);
    {
        width_ = width;
        height_ = height;
    }
}

// M:kairo.unity.surface.SurfaceBase.GetGameWidth
pls::cs::Int32 SurfaceBase::GetGameWidth() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.GetGameWidth", kairo);
    {
        pls::cs::Int32 num = pls::cs::to_int32((([&]() -> pls::cs::FloatEval {
                                                    auto cs_left = pls::cs::Single((GetWidth() * 100));
                                                    auto cs_right = GetScaleRatio();
                                                    return cs_left / cs_right;
                                                }()) +
                                                0.01f));
        if (!is_null(graphics_) && ([&]() -> bool {
                auto cs_left = PLS_API(pls::cs::Single(require(graphics_)->GetScale()));
                auto cs_right = GetScaleRatio();
                return cs_left != cs_right;
            }())) {
            num =
                pls::cs::to_int32((pls::cs::Single((num * 100)) / (([&]() -> pls::cs::FloatEval {
                                       auto cs_left =
                                           PLS_API(pls::cs::Single(require(graphics_)->GetScale())) * 100.0f;
                                       auto cs_right = GetScaleRatio();
                                       return cs_left / cs_right;
                                   }()))));
        }
        return num;
    }
}

// M:kairo.unity.surface.SurfaceBase.GetGameHeight
pls::cs::Int32 SurfaceBase::GetGameHeight() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.GetGameHeight", kairo);
    {
        pls::cs::Int32 num = pls::cs::to_int32((([&]() -> pls::cs::FloatEval {
                                                    auto cs_left = pls::cs::Single((GetHeight() * 100));
                                                    auto cs_right = GetScaleRatio();
                                                    return cs_left / cs_right;
                                                }()) +
                                                0.01f));
        if (!is_null(graphics_) && ([&]() -> bool {
                auto cs_left = PLS_API(pls::cs::Single(require(graphics_)->GetScale()));
                auto cs_right = GetScaleRatio();
                return cs_left != cs_right;
            }())) {
            num =
                pls::cs::to_int32((pls::cs::Single((num * 100)) / (([&]() -> pls::cs::FloatEval {
                                       auto cs_left =
                                           PLS_API(pls::cs::Single(require(graphics_)->GetScale())) * 100.0f;
                                       auto cs_right = GetScaleRatio();
                                       return cs_left / cs_right;
                                   }()))));
        }
        return num;
    }
}

// M:kairo.unity.surface.SurfaceBase.CheckHitPointRect(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
bool SurfaceBase::CheckHitPointRect(pls::cs::Int32 x, pls::cs::Int32 y, pls::cs::Int32 rcx,
                                    pls::cs::Int32 rcy, pls::cs::Int32 rcw, pls::cs::Int32 rch) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.surface.SurfaceBase.CheckHitPointRect(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        kairo);
    {
        if (rcx <= x && x < rcx + rcw && rcy <= y) {
            return y < rcy + rch;
        }
        return false;
    }
}

// M:kairo.unity.surface.SurfaceBase.OnReceiveTouchEvent(kairo.unity.surface.MotionEvent)
void SurfaceBase::OnReceiveTouchEvent(pls::cs::Ref<pls::kairo::MotionEvent> evt) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.SurfaceBase.OnReceiveTouchEvent(kairo.unity.surface.MotionEvent)",
                     kairo);
    {
        {
            pls::cs::MonitorScope cs_monitor_21(OnReceiveTouchEvent_lock1);
            {
                require(SurfaceBase::onReceiveTouchEvent_tmp())->Copy(this, evt);
                SurfaceBase::OnReceiveTouchEvent_2(SurfaceBase::onReceiveTouchEvent_tmp());
            }
        }
    }
}

// M:kairo.unity.surface.SurfaceBase.OnReceiveTouchEvent(kairo.unity.surface.SurfaceBase.MotionEventRecord)
void SurfaceBase::OnReceiveTouchEvent_2(pls::cs::Ref<SurfaceBase_MotionEventRecord> evt) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.surface.SurfaceBase.OnReceiveTouchEvent(kairo.unity.surface.SurfaceBase.MotionEventRecord)",
        kairo);
    {
        {
            pls::cs::MonitorScope cs_monitor_17(OnReceiveTouchEvent_lock2);
            {
                if (lock_) {
                    if (delayNum_ >= delay_.length()) {
                        pls::cs::Array<pls::cs::Ref<SurfaceBase_MotionEventRecord>> array =
                            pls::cs::Array<pls::cs::Ref<SurfaceBase_MotionEventRecord>>::make(
                                pls::cs::Int32(delay_.length()) + 1);
                        PLS_API(kl_lang::JSystem::Arraycopy(pls::cs::box(delay_), 0, pls::cs::box(array), 0,
                                                            delay_.length()));
                        {
                            auto cs_target = array;
                            auto cs_index = pls::cs::Int32(array.length()) - 1;
                            auto cs_value = SurfaceBase_MotionEventRecord::create();
                            cs_target.set_Item(cs_index, cs_value);
                        }
                        delay_ = array;
                    }
                    require(delay_.get_Item(delayNum_))->CopyMotionEventRecord(this, evt);
                    ++delayNum_;
                    return;
                }
                {
                    if (require(start_)->IsEmpty()) {
                        require(start_)->CopyMotionEventRecord(this, evt);
                    }
                    require(last_)->CopyMotionEventRecord(this, evt);
                    if (multiTouchEnable_) {
                        pls::cs::Int32 action = require(evt)->GetAction();
                        if (action == 3 || action == 4) {
                            {
                                auto cs_target = pinchPointer_[0];
                                auto cs_index = 2;
                                auto cs_value = (([&]() {
                                    auto cs_target = pinchPointer_[1];
                                    auto cs_index = 2;
                                    auto cs_value = -1;
                                    cs_target.set_Item(cs_index, cs_value);
                                    return cs_value;
                                }()));
                                cs_target.set_Item(cs_index, cs_value);
                            }
                            pinchDistance_ = 0;
                            return;
                        }
                        {
                            pls::cs::Int32 num = -1;
                            if (pinchPointer_[0][2] != -1 && pinchPointer_[1][2] != -1) {
                                auto cs_left_6 = pinchPointer_[1][0];
                                auto cs_right_6 = pinchPointer_[0][0];
                                pls::cs::Int32 num2 = cs_left_6 - cs_right_6;
                                auto cs_left_7 = pinchPointer_[1][1];
                                auto cs_right_7 = pinchPointer_[0][1];
                                pls::cs::Int32 num3 = cs_left_7 - cs_right_7;
                                num = pls::cs::to_int32(
                                    PLS_API(kl_lang::JMath::Sqrt(num2 * num2 + num3 * num3)));
                            }
                            {
                                auto cs_target = pinchPointer_[0];
                                auto cs_index = 2;
                                auto cs_value = (([&]() {
                                    auto cs_target = pinchPointer_[1];
                                    auto cs_index = 2;
                                    auto cs_value = -1;
                                    cs_target.set_Item(cs_index, cs_value);
                                    return cs_value;
                                }()));
                                cs_target.set_Item(cs_index, cs_value);
                            }
                            pls::cs::Int32 pointerCount = require(evt)->GetPointerCount();
                            for (pls::cs::Int32 i = 0; i < pointerCount; ++i) {
                                pls::cs::Int32 pointerId = require(evt)->GetPointerId(i);
                                if (pointerId < 2 && (pointerId != 0 || (action & 6) != 6) &&
                                    (pointerId != 1 || (action & 0x106) != 262)) {
                                    {
                                        auto cs_target = pinchPointer_[i];
                                        auto cs_index = 0;
                                        auto cs_value = pls::cs::to_int32(require(evt)->GetX(i));
                                        cs_target.set_Item(cs_index, cs_value);
                                    }
                                    {
                                        auto cs_target = pinchPointer_[i];
                                        auto cs_index = 1;
                                        auto cs_value = ([&]() -> pls::cs::Int32 {
                                            auto cs_left = pls::cs::to_int32(require(evt)->GetY(i));
                                            auto cs_right =
                                                (require(evt)->IsMousePointer() ? pls::cs::Int32(0)
                                                                                : GetTouchOffset());
                                            return cs_left + cs_right;
                                        }());
                                        cs_target.set_Item(cs_index, cs_value);
                                    }
                                    pinchPointer_[i][2] = pointerId;
                                }
                            }
                            pls::cs::Int32 num4 = -1;
                            if (pinchPointer_[0][2] != -1 && pinchPointer_[1][2] != -1) {
                                auto cs_left_8 = pinchPointer_[1][0];
                                auto cs_right_8 = pinchPointer_[0][0];
                                pls::cs::Int32 num5 = cs_left_8 - cs_right_8;
                                auto cs_left_9 = pinchPointer_[1][1];
                                auto cs_right_9 = pinchPointer_[0][1];
                                pls::cs::Int32 num6 = cs_left_9 - cs_right_9;
                                num4 = pls::cs::to_int32(
                                    PLS_API(kl_lang::JMath::Sqrt(num5 * num5 + num6 * num6)));
                            }
                            if (num == -1 && num4 != -1) {
                                pinchStartPoint_[0][0] = pinchPointer_[0][0];
                                pinchStartPoint_[0][1] = pinchPointer_[0][1];
                                pinchStartPoint_[1][0] = pinchPointer_[1][0];
                                pinchStartPoint_[1][1] = pinchPointer_[1][1];
                                pinchStart_ = true;
                            }
                            if (num == -1 || num4 == -1) {
                                pinchDistance_ = 0;
                            } else {
                                pinchDistance_ = pinchDistance_ + (num4 - num);
                            }
                        }
                    }
                }
            }
        }
    }
}

// M:kairo.unity.surface.SurfaceBase.OnKeyDown(System.Int32)
void SurfaceBase::OnKeyDown(pls::cs::Int32 key) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.OnKeyDown(System.Int32)", kairo);
    {
    }
}

// M:kairo.unity.surface.SurfaceBase.OnKeyUp(System.Int32)
void SurfaceBase::OnKeyUp(pls::cs::Int32 key) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.OnKeyUp(System.Int32)", kairo);
    {
    }
}

// M:kairo.unity.surface.SurfaceBase.OnKeyDown(System.Int32,kairo.unity.ui.KeyEvent)
void SurfaceBase::OnKeyDown(pls::cs::Int32 keyCode, pls::cs::Ref<pls::kairo::KeyEvent> evt) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.SurfaceBase.OnKeyDown(System.Int32,kairo.unity.ui.KeyEvent)",
                     kairo);
    {
    }
}

// M:kairo.unity.surface.SurfaceBase.OnKeyUp(System.Int32,kairo.unity.ui.KeyEvent)
void SurfaceBase::OnKeyUp(pls::cs::Int32 keyCode, pls::cs::Ref<pls::kairo::KeyEvent> evt) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.SurfaceBase.OnKeyUp(System.Int32,kairo.unity.ui.KeyEvent)",
                     kairo);
    {
    }
}

// M:kairo.unity.surface.SurfaceBase.GetTouchOffset
pls::cs::Int32 SurfaceBase::GetTouchOffset() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.GetTouchOffset", kairo);
    {
        pls::cs::Ref<pls::kairo::Canvas> instance = PLS_API(pls::kairo::Canvas::GetInstance());
        pls::cs::Int32 num = pls::cs::to_int32(
            (([&]() -> pls::cs::FloatEval {
                 auto cs_left = ([&]() -> pls::cs::FloatEval {
                                    auto cs_left = pls::cs::Single(touchOffset_);
                                    auto cs_right = pls::kairo::DebugInput::get_dpi();
                                    return cs_left * cs_right;
                                }()) /
                                320.0f;
                 auto cs_right = PLS_API(pls::cs::Single(
                     require(PLS_API(pls::kairo::IApplication::GetCurrentApp()))->GetResolutionScaleRatio()));
                 return cs_left * cs_right;
             }()) /
             100.0f));
        if (!PLS_API(require(instance)->IsFullscreen()) &&
            PLS_API(require(instance)->GetStatusBarPosition()) == 0) {
            num -= PLS_API(require(instance)->GetStatusBarHeight());
        }
        return num;
    }
}

// M:kairo.unity.surface.SurfaceBase.CanRegistComponent
bool SurfaceBase::CanRegistComponent() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.CanRegistComponent", kairo);
    {
        return true;
    }
}
} // namespace kairo::unity::surface
}
