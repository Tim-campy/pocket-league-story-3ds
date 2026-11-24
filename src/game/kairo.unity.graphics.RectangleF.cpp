// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.graphics.RectangleF.hpp"

namespace pls::game {
namespace kairo::unity::graphics {

void RectangleF::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
}

bool RectangleF::Equals(pls::cs::Ref<pls::cs::Object> const& obj) {
    return RectangleF::Equals(pls::cs::static_pointer_cast<RectangleF>(shared_from_this()), obj);
}

static PLS_NOINLINE void cs_init_f1dd8f2aa583774c_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.graphics.RectangleF", flag, []() {

    });
}

void RectangleF::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_f1dd8f2aa583774c_slow(flag);
}

void RectangleF::create_init(pls::cs::Ref<RectangleF> self) {
    RectangleF::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.graphics.RectangleF.#ctor", kairo);
    {
    }
}

// M:kairo.unity.graphics.RectangleF.#ctor
pls::cs::Ref<RectangleF> RectangleF::create() {
    RectangleF::ensure_initialized();
    auto self = pls::cs::make_ref<RectangleF>();
    RectangleF::create_init(self);
    return self;
}

// M:kairo.unity.graphics.RectangleF.Set(System.Single,System.Single,System.Single,System.Single)
void RectangleF::Set(pls::cs::Single left, pls::cs::Single top, pls::cs::Single right,
                     pls::cs::Single bottom) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.graphics.RectangleF.Set(System.Single,System.Single,System.Single,System.Single)",
        kairo);
    {
        this->left = left;
        this->top = top;
        this->right = right;
        this->bottom = bottom;
    }
}

// M:kairo.unity.graphics.RectangleF.Set(kairo.unity.graphics.RectangleF)
void RectangleF::Set(pls::cs::Ref<RectangleF> rc) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.graphics.RectangleF.Set(kairo.unity.graphics.RectangleF)",
                     kairo);
    {
        left = require(rc)->left;
        top = require(rc)->top;
        right = require(rc)->right;
        bottom = require(rc)->bottom;
    }
}

// M:kairo.unity.graphics.RectangleF.Width
pls::cs::Single RectangleF::Width() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.graphics.RectangleF.Width", kairo);
    {
        return right - left;
    }
}

// M:kairo.unity.graphics.RectangleF.Height
pls::cs::Single RectangleF::Height() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.graphics.RectangleF.Height", kairo);
    {
        return bottom - top;
    }
}

// M:kairo.unity.graphics.RectangleF.Equals(System.Object)
bool RectangleF::Equals(pls::cs::Ref<RectangleF> self, pls::cs::Ref<pls::cs::Object> obj) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.graphics.RectangleF.Equals(System.Object)", kairo);
    {
        if (!is_null(obj) && is_instance<pls::cs::Ref<RectangleF>>(pls::cs::box(obj))) {
            pls::cs::Ref<RectangleF> rectangleF = pls::cs::unbox<pls::cs::Ref<RectangleF>>(obj);
            if (self->left == require(rectangleF)->left && self->top == require(rectangleF)->top &&
                self->right == require(rectangleF)->right) {
                return self->bottom == require(rectangleF)->bottom;
            }
            return false;
        }
        return pls::cs::box(self) == pls::cs::box(obj);
    }
}

// M:kairo.unity.graphics.RectangleF.GetHashCode
std::int32_t RectangleF::GetHashCode() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.graphics.RectangleF.GetHashCode", kairo);
    {
        return PLS_API(([&]() {
            auto cs_receiver = pls::cs::box(pls::cs::static_pointer_cast<pls::cs::Object>(this));
            return require(cs_receiver)->pls::cs::Object::GetHashCode();
        }()));
    }
}
} // namespace kairo::unity::graphics
}
