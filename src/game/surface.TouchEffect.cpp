// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/java.lang.JSystem.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "surface.TouchEffect.hpp"

namespace kl_lang = pls::generated::java::lang;

using FloatArray = pls::cs::Array<pls::cs::Single>;

namespace pls::game {
namespace surface {

void TouchEffect::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(surface_, visitor);
    pls::cs::trace_value(arg_, visitor);
}

static PLS_NOINLINE void cs_init_9b21b86f0d2914e0_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("surface.TouchEffect", flag, []() {

    });
}

void TouchEffect::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_9b21b86f0d2914e0_slow(flag);
}

void TouchEffect::create_init(pls::cs::Ref<TouchEffect> self) {
    TouchEffect::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.TouchEffect.#ctor", game);
    {
    }
}

// M:surface.TouchEffect.#ctor
pls::cs::Ref<TouchEffect> TouchEffect::create() {
    TouchEffect::ensure_initialized();
    auto self = pls::cs::make_ref<TouchEffect>();
    TouchEffect::create_init(self);
    return self;
}

// M:surface.TouchEffect.Init(kairo.unity.surface.SurfaceBase,System.Int32,System.Single,System.Single,kairo.unity.surface.TouchComponent)
void TouchEffect::Init(pls::cs::Ref<kairo::unity::surface::SurfaceBase> surface, pls::cs::Int32 id,
                       pls::cs::Single x, pls::cs::Single y,
                       pls::cs::Ref<kairo::unity::surface::TouchComponent> component) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.TouchEffect.Init(kairo.unity.surface.SurfaceBase,System.Int32,System.Single,System.Single,kairo.unity.surface.TouchComponent)",
        game);
    {
        Init(surface, id, x, y, component, pls::cs::Ref<pls::cs::Object>{});
    }
}

// M:surface.TouchEffect.Init(kairo.unity.surface.SurfaceBase,System.Int32,System.Single,System.Single,kairo.unity.surface.TouchComponent,System.Object)
void TouchEffect::Init(pls::cs::Ref<kairo::unity::surface::SurfaceBase> surface, pls::cs::Int32 id,
                       pls::cs::Single x, pls::cs::Single y,
                       pls::cs::Ref<kairo::unity::surface::TouchComponent> component,
                       pls::cs::Ref<pls::cs::Object> arg) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:surface.TouchEffect.Init(kairo.unity.surface.SurfaceBase,System.Int32,System.Single,System.Single,kairo.unity.surface.TouchComponent,System.Object)",
        game);
    {
        surface_ = surface;
        id_ = id;
        x_ = x;
        y_ = y;
        lastFrameTime_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_lang::JSystem::CurrentTimeMillis(); });
        time_ = lastFrameTime_;
        arg_ = arg;
        key_ = 0ll;
        if (!is_null(component)) {
            key_ = require(component)->GetKey();
        }
        vy_ = 0.0f;
        vx_ = vy_;
        ay_ = 0.0f;
        ax_ = ay_;
    }
}

// M:surface.TouchEffect.Frame
bool TouchEffect::Frame() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.TouchEffect.Frame", game);
    {
        pls::cs::Int32 num = 8;
        pls::cs::Int32 num2 = pls::cs::to_int32((([&]() -> pls::cs::Int64 {
                                  auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                      return kl_lang::JSystem::CurrentTimeMillis();
                                  });
                                  auto cs_right = time_;
                                  return cs_left - cs_right;
                              }()))) /
                              50;
        if (num2 >= num) {
            return true;
        }
        pls::cs::Double num3 = vx_;
        pls::cs::Double num4 = vy_;
        pls::cs::Double num5 = pls::cs::Double((([&]() -> pls::cs::Int64 {
                                   auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_lang::JSystem::CurrentTimeMillis();
                                   });
                                   auto cs_right = lastFrameTime_;
                                   return cs_left - cs_right;
                               }()))) /
                               1000.0;
        x_ = x_ + pls::cs::Single((pls::cs::Double(vx_) * num5));
        y_ = y_ + pls::cs::Single((pls::cs::Double(vy_) * num5));
        vx_ = vx_ + pls::cs::Single((pls::cs::Double(ax_) * num5));
        vy_ = vy_ + pls::cs::Single((pls::cs::Double(ay_) * num5));
        if ((num3 >= 0.0 && vx_ < 0.0f) || (vx_ >= 0.0f && num3 < 0.0)) {
            vx_ = 0.0f;
        }
        if ((num4 >= 0.0 && vy_ < 0.0f) || (vy_ >= 0.0f && num4 < 0.0)) {
            vx_ = 0.0f;
        }
        lastFrameTime_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_lang::JSystem::CurrentTimeMillis(); });
        return false;
    }
}

// M:surface.TouchEffect.Draw(kairo.unity.ui.Graphics)
void TouchEffect::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:surface.TouchEffect.Draw(kairo.unity.ui.Graphics)", game);
    {
        pls::cs::Single num = require(surface_)->GetScaleRatio() / 100.0f;
        pls::cs::Int32 num2 = pls::cs::to_int32((([&]() -> pls::cs::Int64 {
                                  auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                      return kl_lang::JSystem::CurrentTimeMillis();
                                  });
                                  auto cs_right = time_;
                                  return cs_left - cs_right;
                              }()))) /
                              50;
        if (id_ == 0) {
            pls::cs::Array<pls::cs::Ref<pls::cs::Object>> array =
                pls::cs::unbox<pls::cs::Array<pls::cs::Ref<pls::cs::Object>>>(arg_);
            pls::cs::Ref<pls::kairo::Image> image =
                pls::cs::unbox<pls::cs::Ref<pls::kairo::Image>>(array.get_Item(0));
            FloatArray array2 = pls::cs::unbox<FloatArray>(array.get_Item(1));
            pls::cs::Int32 num3 = 160 - 18 * num2;
            if (num3 <= 0) {
                return;
            }
            pls::cs::Single num4 = 2.5f * pls::cs::Single(num2) * num;
            pls::cs::Single num5 = 2.5f * pls::cs::Single(num2) * num;
            pls::cs::Single dx = ([&]() -> pls::cs::FloatEval {
                                     auto cs_left = pls::cs::Single(require(surface_)->GetX());
                                     auto cs_right = x_ * num;
                                     return cs_left + cs_right;
                                 }()) -
                                 num4 / 2.0f;
            pls::cs::Single dy = ([&]() -> pls::cs::FloatEval {
                                     auto cs_left = pls::cs::Single(require(surface_)->GetY());
                                     auto cs_right = y_ * num;
                                     return cs_left + cs_right;
                                 }()) -
                                 num5 / 2.0f;
            pls::cs::Single num6 = array2[0] * num;
            pls::cs::Single num7 = array2[1] * num;
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(g)->SetRenderMode(1, num3, 255 - num3); });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::Int32 cs_arg5 = pls::cs::to_int32((array2[2] + 0.5f));
                    pls::cs::Int32 cs_arg6 = pls::cs::to_int32((array2[3] + 0.5f));
                    pls::cs::Int32 cs_arg7 = pls::cs::to_int32((array2[4] + 0.5f));
                    pls::cs::Int32 cs_arg8 = pls::cs::to_int32((array2[5] + 0.5f));
                    require(g)->DrawScaledImage(image, dx, dy, num6 + num4, num7 + num5, cs_arg5, cs_arg6,
                                                cs_arg7, cs_arg8);
                }());
            });
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(g)->SetRenderMode(0, 255, 0); });
        } else if (id_ == 1) {

        } else if (id_ == 2) {

        } else if (id_ == 3) {
        }
    }
}
} // namespace surface
}
