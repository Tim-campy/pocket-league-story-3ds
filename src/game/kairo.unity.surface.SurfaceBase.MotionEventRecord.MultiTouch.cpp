// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.hpp"

namespace pls::game {
namespace kairo::unity::surface {

void SurfaceBase_MotionEventRecord_MultiTouch::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(event_, visitor);
}

static PLS_NOINLINE void cs_init_e373231f616cd1ed_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch", flag, []() {

    });
}

void SurfaceBase_MotionEventRecord_MultiTouch::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_e373231f616cd1ed_slow(flag);
}

void SurfaceBase_MotionEventRecord_MultiTouch::create_init(
    pls::cs::Ref<SurfaceBase_MotionEventRecord_MultiTouch> self) {
    SurfaceBase_MotionEventRecord_MultiTouch::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.#ctor",
                     kairo);
    {
    }
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.#ctor
pls::cs::Ref<SurfaceBase_MotionEventRecord_MultiTouch> SurfaceBase_MotionEventRecord_MultiTouch::create() {
    SurfaceBase_MotionEventRecord_MultiTouch::ensure_initialized();
    auto self = pls::cs::make_ref<SurfaceBase_MotionEventRecord_MultiTouch>();
    SurfaceBase_MotionEventRecord_MultiTouch::create_init(self);
    return self;
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.Set(kairo.unity.surface.MotionEvent)
void SurfaceBase_MotionEventRecord_MultiTouch::Set(pls::cs::Ref<pls::kairo::MotionEvent> evt) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.Set(kairo.unity.surface.MotionEvent)",
        kairo);
    {
        event_ = evt;
    }
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetPointerCount
pls::cs::Int32 SurfaceBase_MotionEventRecord_MultiTouch::GetPointerCount() {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetPointerCount", kairo);
    {
        return pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(event_)->GetPointerCount(); });
    }
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetPointerId(System.Int32)
pls::cs::Int32 SurfaceBase_MotionEventRecord_MultiTouch::GetPointerId(pls::cs::Int32 index) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetPointerId(System.Int32)", kairo);
    {
        return pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(event_)->GetPointerId(index); });
    }
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetX(System.Int32)
pls::cs::Single SurfaceBase_MotionEventRecord_MultiTouch::GetX(pls::cs::Int32 index) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetX(System.Int32)",
                     kairo);
    {
        try {
            return pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::cs::Single(require(event_)->GetX(index)); });
        } catch (const pls::cs::Exception& cs_caught_22) {
            pls::cs::capture_exception(cs_caught_22);
            {
                return 0.0f;
            }
        }
    }
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetY(System.Int32)
pls::cs::Single SurfaceBase_MotionEventRecord_MultiTouch::GetY(pls::cs::Int32 index) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetY(System.Int32)",
                     kairo);
    {
        try {
            return pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::cs::Single(require(event_)->GetY(index)); });
        } catch (const pls::cs::Exception& cs_caught_23) {
            pls::cs::capture_exception(cs_caught_23);
            {
                return 0.0f;
            }
        }
    }
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetDeltaX(System.Int32)
pls::cs::Single SurfaceBase_MotionEventRecord_MultiTouch::GetDeltaX(pls::cs::Int32 index) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetDeltaX(System.Int32)",
                     kairo);
    {
        try {
            return pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::cs::Single(require(event_)->GetDeltaX(index)); });
        } catch (const pls::cs::Exception& cs_caught_24) {
            pls::cs::capture_exception(cs_caught_24);
            {
                return 0.0f;
            }
        }
    }
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetDeltaY(System.Int32)
pls::cs::Single SurfaceBase_MotionEventRecord_MultiTouch::GetDeltaY(pls::cs::Int32 index) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetDeltaY(System.Int32)",
                     kairo);
    {
        try {
            return pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::cs::Single(require(event_)->GetDeltaY(index)); });
        } catch (const pls::cs::Exception& cs_caught_25) {
            pls::cs::capture_exception(cs_caught_25);
            {
                return 0.0f;
            }
        }
    }
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetDeltaTime(System.Int32)
pls::cs::Single SurfaceBase_MotionEventRecord_MultiTouch::GetDeltaTime(pls::cs::Int32 index) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetDeltaTime(System.Int32)", kairo);
    {
        try {
            return pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::cs::Single(require(event_)->GetDeltaTime(index)); });
        } catch (const pls::cs::Exception& cs_caught_26) {
            pls::cs::capture_exception(cs_caught_26);
            {
                return 0.0f;
            }
        }
    }
}
} // namespace kairo::unity::surface
}
