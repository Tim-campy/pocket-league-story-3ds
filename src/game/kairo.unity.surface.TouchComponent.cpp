// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "kairo.unity.surface.TouchOption.hpp"
#include "kairo.unity.util.BitUtil.hpp"

namespace pls::game {
namespace kairo::unity::surface {

void TouchComponent::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(surface_, visitor);
    pls::cs::trace_value(option, visitor);
}

static PLS_NOINLINE void cs_init_3a3d09f9e75a32d2_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.surface.TouchComponent", flag, []() {

    });
}

void TouchComponent::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_3a3d09f9e75a32d2_slow(flag);
}

void TouchComponent::create_init(pls::cs::Ref<TouchComponent> self) {
    TouchComponent::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.TouchComponent.#ctor", kairo);
    {
        self->Init();
    }
}

void TouchComponent::create_init(pls::cs::Ref<TouchComponent> self, pls::cs::Ref<TouchComponent> copy) {
    TouchComponent::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.TouchComponent.#ctor(kairo.unity.surface.TouchComponent)", kairo);
    {
        self->Init();
        self->paintX = require(copy)->paintX;
        self->paintY = require(copy)->paintY;
        self->surface_ = require(copy)->surface_;
        self->id = require(copy)->id;
        self->x = require(copy)->x;
        self->y = require(copy)->y;
        self->width = require(copy)->width;
        self->height = require(copy)->height;
        self->value = require(copy)->value;
        if (!is_null(require(copy)->option)) {
            self->option = TouchOption::create(require(copy)->option);
        }
        self->paintFrame = require(copy)->paintFrame;
        self->isLock = true;
    }
}

// M:kairo.unity.surface.TouchComponent.#ctor
pls::cs::Ref<TouchComponent> TouchComponent::create() {
    TouchComponent::ensure_initialized();
    auto self = pls::cs::make_ref<TouchComponent>();
    TouchComponent::create_init(self);
    return self;
}

// M:kairo.unity.surface.TouchComponent.#ctor(kairo.unity.surface.TouchComponent)
pls::cs::Ref<TouchComponent> TouchComponent::create(pls::cs::Ref<TouchComponent> copy) {
    TouchComponent::ensure_initialized();
    auto self = pls::cs::make_ref<TouchComponent>();
    TouchComponent::create_init(self, copy);
    return self;
}

// M:kairo.unity.surface.TouchComponent.Init
void TouchComponent::Init() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.TouchComponent.Init", kairo);
    {
        paintY = 2147483647 /* Int32.MaxValue */;
        paintX = paintY;
        surface_ = pls::cs::Ref<SurfaceBase>{};
        id = -1;
        x = 0;
        y = 0;
        width = 0;
        height = 0;
        value = 0;
        option = pls::cs::Ref<TouchOption>{};
        paintFrame = 0;
        isLock = false;
        hasCount = 0;
    }
}

// M:kairo.unity.surface.TouchComponent.SetPaint(System.Int32,System.Int32)
void TouchComponent::SetPaint(pls::cs::Int32 x, pls::cs::Int32 y) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.TouchComponent.SetPaint(System.Int32,System.Int32)", kairo);
    {
        paintX = x;
        paintY = y;
    }
}

// M:kairo.unity.surface.TouchComponent.SetPaint(System.Int32,System.Int32,System.Int32)
void TouchComponent::SetPaint(pls::cs::Int32 x, pls::cs::Int32 y, pls::cs::Int32 frame) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.TouchComponent.SetPaint(System.Int32,System.Int32,System.Int32)",
                     kairo);
    {
        paintX = x;
        paintY = y;
        paintFrame = frame;
    }
}

// M:kairo.unity.surface.TouchComponent.GetKey
pls::cs::Int64 TouchComponent::GetKey() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.TouchComponent.GetKey", kairo);
    {
        return TouchComponent::GetKey(id, value);
    }
}

// M:kairo.unity.surface.TouchComponent.GetKey(System.Int32,System.Int32)
pls::cs::Int64 TouchComponent::GetKey(pls::cs::Int32 id, pls::cs::Int32 value) {
    TouchComponent::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.TouchComponent.GetKey(System.Int32,System.Int32)",
                     kairo);
    {
        return util::BitUtil::Join(id, value);
    }
}

// M:kairo.unity.surface.TouchComponent.GetId(System.Int64)
pls::cs::Int32 TouchComponent::GetId(pls::cs::Int64 key) {
    TouchComponent::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.TouchComponent.GetId(System.Int64)", kairo);
    {
        return util::BitUtil::Split(key)[0];
    }
}

// M:kairo.unity.surface.TouchComponent.Check(System.Int32)
bool TouchComponent::Check(pls::cs::Int32 bit) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.TouchComponent.Check(System.Int32)", kairo);
    {
        pls::cs::Int32 num = 0;
        if (!is_null(option)) {
            num = require(option)->flag;
        }
        return (num & bit) != 0;
    }
}

// M:kairo.unity.surface.TouchComponent.GetPriority
pls::cs::Int32 TouchComponent::GetPriority() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.TouchComponent.GetPriority", kairo);
    {
        pls::cs::Int32 result = 1;
        if (hasCount > 0) {
            result = -10;
        }
        if (!is_null(option)) {
            if ((require(option)->flag & 2) != 0) {
                result = 0;
            }
            if ((require(option)->flag & 4) != 0) {
                result = 2;
            }
            if ((require(option)->flag & 8) != 0) {
                result = 3;
            }
        }
        return result;
    }
}
} // namespace kairo::unity::surface
}
