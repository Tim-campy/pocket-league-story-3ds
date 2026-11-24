// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.surface.TouchComponent.hpp"
#include "kairo.unity.surface.TouchEvent.hpp"
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace kairo::unity::surface {

void TouchEvent::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(pinchPointBegin_, visitor);
    pls::cs::trace_value(pinchPointNow_, visitor);
    pls::cs::trace_value(component, visitor);
}

static PLS_NOINLINE void cs_init_757516ce190cf813_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.surface.TouchEvent", flag, []() {

    });
}

void TouchEvent::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_757516ce190cf813_slow(flag);
}

void TouchEvent::create_init(pls::cs::Ref<TouchEvent> self) {
    TouchEvent::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.TouchEvent.#ctor", kairo);
    {
        self->Init();
    }
}

// M:kairo.unity.surface.TouchEvent.#ctor
pls::cs::Ref<TouchEvent> TouchEvent::create() {
    TouchEvent::ensure_initialized();
    auto self = pls::cs::make_ref<TouchEvent>();
    TouchEvent::create_init(self);
    return self;
}

// M:kairo.unity.surface.TouchEvent.Init
void TouchEvent::Init() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.TouchEvent.Init", kairo);
    {
        component = pls::cs::Ref<TouchComponent>{};
        type = 0;
        x = 0;
        y = 0;
        dx = 0;
        dy = 0;
        speedX = 0.0f;
        speedY = 0.0f;
        pinch = 0;
        if ([&]() {
                auto cs_left = pls::cs::box(pinchPointBegin_);
                auto cs_right = pls::cs::box(IntArray2{});
                return cs_left != cs_right;
            }()) {
            for (pls::cs::Int32 i = 0; i < pls::cs::Int32(pinchPointBegin_.length()); ++i) {
                for (pls::cs::Int32 j = 0; j < pls::cs::Int32(pinchPointBegin_[i].length()); ++j) {
                    pinchPointBegin_[i][j] = 0;
                }
            }
        }
        if ([&]() {
                auto cs_left = pls::cs::box(pinchPointNow_);
                auto cs_right = pls::cs::box(IntArray2{});
                return cs_left != cs_right;
            }()) {
            for (pls::cs::Int32 k = 0; k < pls::cs::Int32(pinchPointNow_.length()); ++k) {
                for (pls::cs::Int32 l = 0; l < pls::cs::Int32(pinchPointNow_[k].length()); ++l) {
                    pinchPointNow_[k][l] = 0;
                }
            }
        }
    }
}

// M:kairo.unity.surface.TouchEvent.ToString
pls::cs::String TouchEvent::ToString() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.TouchEvent.ToString", kairo);
    {
        if (is_null(component)) {
            return ([&]() -> pls::cs::String {
                auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return concat_objects2(pls::cs::box(this), pls::cs::box(literal(u":component=")));
                });
                if (!cs_left.is_null())
                    return cs_left;
                return literal(u"");
            }());
        }
        pls::cs::String text = literal(u"");
        if (type == 0) {
            text = literal(u"TYPE_DOWN");
        } else if (type == 1) {
            text = literal(u"TYPE_UP");
        } else if (type == 2) {
            text = literal(u"TYPE_ENTER");
        } else if (type == 3) {
            text = literal(u"TYPE_LEAVE");
        } else if (type == 4) {
            text = literal(u"TYPE_MOVE");
        } else if (type == 5) {
            text = literal(u"TYPE_CLICK");
        } else if (type == 6) {
            text = literal(u"TYPE_LOST");
        } else if (type == 7) {
            text = literal(u"TYPE_DRAG");
        } else if (type == 8) {
            text = literal(u"TYPE_GRID_DRAG");
        } else if (type == 9) {
            text = literal(u"TYPE_CELL_DRAG");
        } else if (type == 10) {
            text = literal(u"TYPE_CANCEL");
        } else if (type == 13) {
            text = literal(u"TYPE_ON");
        } else {
            text = pls::cs::String::concat(pls::cs::String::concat(literal(u"NONE["), integer_string(type)),
                                           literal(u"]"));
        }
        return pls::cs::String::concat(
            pls::cs::String::concat(
                pls::cs::String::concat(
                    pls::cs::String::concat(
                        pls::cs::String::concat(pls::cs::String::concat(literal(u"TouchEvent:"), text),
                                                literal(u" (")),
                        integer_string(require(component)->id)),
                    literal(u",")),
                integer_string(require(component)->value)),
            literal(u")"));
    }
}

// M:kairo.unity.surface.TouchEvent.IsPositive(System.Int32)
bool TouchEvent::IsPositive(pls::cs::Int32 type) {
    TouchEvent::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.TouchEvent.IsPositive(System.Int32)", kairo);
    {
        switch (type) {
        case 0:
        case 2:
        case 4:
        case 7:
        case 8:
        case 9: {
            return true;
        }
        default: {
            return false;
        }
        }
    }
}

// M:kairo.unity.surface.TouchEvent.IsPositive
bool TouchEvent::IsPositive() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.TouchEvent.IsPositive", kairo);
    {
        return TouchEvent::IsPositive(type);
    }
}

// M:kairo.unity.surface.TouchEvent.GetHashCode
std::int32_t TouchEvent::GetHashCode() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.TouchEvent.GetHashCode", kairo);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() {
                auto cs_receiver = pls::cs::box(pls::cs::static_pointer_cast<pls::cs::Object>(this));
                return require(cs_receiver)->pls::cs::Object::GetHashCode();
            }());
        });
    }
}
} // namespace kairo::unity::surface
}
