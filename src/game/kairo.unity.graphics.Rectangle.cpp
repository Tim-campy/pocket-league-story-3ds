// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.graphics.Rectangle.hpp"

namespace pls::game {
namespace kairo::unity::graphics {

void Rectangle::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
}

bool Rectangle::Equals(pls::cs::Ref<pls::cs::Object> const& obj) {
    return Rectangle::Equals(pls::cs::static_pointer_cast<Rectangle>(shared_from_this()), obj);
}

static PLS_NOINLINE void cs_init_9f5a071d05c1d020_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.graphics.Rectangle", flag, []() {

    });
}

void Rectangle::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_9f5a071d05c1d020_slow(flag);
}

// M:kairo.unity.graphics.Rectangle.Equals(System.Object)
bool Rectangle::Equals(pls::cs::Ref<Rectangle> self, pls::cs::Ref<pls::cs::Object> obj) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.graphics.Rectangle.Equals(System.Object)", kairo);
    {
        if (!is_null(obj) && is_instance<pls::cs::Ref<Rectangle>>(pls::cs::box(obj))) {
            pls::cs::Ref<Rectangle> rectangle = pls::cs::unbox<pls::cs::Ref<Rectangle>>(obj);
            if (self->left == require(rectangle)->left && self->top == require(rectangle)->top &&
                self->right == require(rectangle)->right) {
                return self->bottom == require(rectangle)->bottom;
            }
            return false;
        }
        return pls::cs::box(self) == pls::cs::box(obj);
    }
}

// M:kairo.unity.graphics.Rectangle.GetHashCode
std::int32_t Rectangle::GetHashCode() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.graphics.Rectangle.GetHashCode", kairo);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() {
                auto cs_receiver = pls::cs::box(pls::cs::static_pointer_cast<pls::cs::Object>(this));
                return require(cs_receiver)->pls::cs::Object::GetHashCode();
            }());
        });
    }
}
} // namespace kairo::unity::graphics
}
