// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/kairo.unity.util.FastVector_1.hpp"
#include "kairo.unity.surface.TouchOption.hpp"
#include "generated/kairo.unity.util.FastVector_1_templates.hpp"

namespace kl_util = pls::generated::kairo::unity::util;

using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace kairo::unity::surface {

void TouchOption::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(dragCell, visitor);
    pls::cs::trace_value(args, visitor);
    pls::cs::trace_value(margin, visitor);
    pls::cs::trace_value(extendValues, visitor);
    pls::cs::trace_value(keys, visitor);
    pls::cs::trace_value(keysBuf_, visitor);
}

static pls::cs::Ref<kl_util::FastVector_2<pls::cs::Ref<TouchOption>>> TouchOption_buffer_storage{};

static PLS_NOINLINE void cs_init_6517d63c01870958_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(TouchOption_buffer_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.surface.TouchOption", flag, []() {
        TouchOption_buffer_storage =
            pls::cs::evaluate_type_initializer_field("F:kairo.unity.surface.TouchOption.buffer", [&]() {
                return kl_util::FastVector_2_create<pls::cs::Ref<TouchOption>>();
            });
    });
}

void TouchOption::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_6517d63c01870958_slow(flag);
}

pls::cs::Ref<kl_util::FastVector_2<pls::cs::Ref<TouchOption>>>& TouchOption::buffer() {
    TouchOption::ensure_initialized();
    return TouchOption_buffer_storage;
}

void TouchOption::create_init(pls::cs::Ref<TouchOption> self) {
    TouchOption::ensure_initialized();
    self->keysBuf_ = IntArray::make(1);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.TouchOption.#ctor", kairo);
    {
        self->Init();
    }
}

void TouchOption::create_init(pls::cs::Ref<TouchOption> self, pls::cs::Ref<TouchOption> copy) {
    TouchOption::ensure_initialized();
    self->keysBuf_ = IntArray::make(1);
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.TouchOption.#ctor(kairo.unity.surface.TouchOption)", kairo);
    {
        self->Init();
        self->flag = require(copy)->flag;
        self->dragGridW = require(copy)->dragGridW;
        self->dragGridH = require(copy)->dragGridH;
        self->collisionBits = require(copy)->collisionBits;
        self->Lock = true;
        if ([&]() {
                auto cs_left = pls::cs::box(require(copy)->dragCell);
                auto cs_right = pls::cs::box(IntArray{});
                return cs_left != cs_right;
            }()) {
            self->dragCell = IntArray::make(require(copy)->dragCell.length());
            PLS_API(([&]() {
                auto cs_source = require(copy)->dragCell;
                auto cs_dest = self->dragCell;
                auto cs_count = self->dragCell.length();
                IntArray::copy(cs_source, 0, cs_dest, 0, cs_count);
            }()));
        }
        if ([&]() {
                auto cs_left = pls::cs::box(require(copy)->args);
                auto cs_right = pls::cs::box(IntArray{});
                return cs_left != cs_right;
            }()) {
            self->args = IntArray::make(require(copy)->args.length());
            PLS_API(([&]() {
                auto cs_source = require(copy)->args;
                auto cs_dest = self->args;
                auto cs_count = self->args.length();
                IntArray::copy(cs_source, 0, cs_dest, 0, cs_count);
            }()));
        }
        if ([&]() {
                auto cs_left = pls::cs::box(require(copy)->margin);
                auto cs_right = pls::cs::box(IntArray{});
                return cs_left != cs_right;
            }()) {
            self->margin = IntArray::make(require(copy)->margin.length());
            PLS_API(([&]() {
                auto cs_source = require(copy)->margin;
                auto cs_dest = self->margin;
                auto cs_count = self->margin.length();
                IntArray::copy(cs_source, 0, cs_dest, 0, cs_count);
            }()));
        }
        if ([&]() {
                auto cs_left = pls::cs::box(require(copy)->extendValues);
                auto cs_right = pls::cs::box(IntArray{});
                return cs_left != cs_right;
            }()) {
            self->extendValues = IntArray::make(require(copy)->extendValues.length());
            PLS_API(([&]() {
                auto cs_source = require(copy)->extendValues;
                auto cs_dest = self->extendValues;
                auto cs_count = self->extendValues.length();
                IntArray::copy(cs_source, 0, cs_dest, 0, cs_count);
            }()));
        }
        if ([&]() {
                auto cs_left = pls::cs::box(require(copy)->keys);
                auto cs_right = pls::cs::box(IntArray{});
                return cs_left != cs_right;
            }()) {
            self->keys = IntArray::make(require(copy)->keys.length());
            PLS_API(([&]() {
                auto cs_source = require(copy)->keys;
                auto cs_dest = self->keys;
                auto cs_count = self->keys.length();
                IntArray::copy(cs_source, 0, cs_dest, 0, cs_count);
            }()));
        }
    }
}

// M:kairo.unity.surface.TouchOption.#ctor
pls::cs::Ref<TouchOption> TouchOption::create() {
    TouchOption::ensure_initialized();
    auto self = pls::cs::make_ref<TouchOption>();
    TouchOption::create_init(self);
    return self;
}

// M:kairo.unity.surface.TouchOption.#ctor(kairo.unity.surface.TouchOption)
pls::cs::Ref<TouchOption> TouchOption::create(pls::cs::Ref<TouchOption> copy) {
    TouchOption::ensure_initialized();
    auto self = pls::cs::make_ref<TouchOption>();
    TouchOption::create_init(self, copy);
    return self;
}

// M:kairo.unity.surface.TouchOption.Init
void TouchOption::Init() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.TouchOption.Init", kairo);
    {
        flag = 0;
        dragGridW = 0.0f;
        dragGridH = 0.0f;
        dragCell = IntArray{};
        args = IntArray{};
        margin = IntArray{};
        collisionBits = 0;
        extendValues = IntArray{};
        keys = IntArray{};
        Lock = false;
        hasCount = 0;
    }
}

// M:kairo.unity.surface.TouchOption.Create
pls::cs::Ref<TouchOption> TouchOption::Create() {
    TouchOption::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.TouchOption.Create", kairo);
    {
        pls::cs::Ref<TouchOption> touchOption = pls::cs::Ref<TouchOption>{};
        for (pls::cs::Int32 i = 0; i < PLS_API(require(TouchOption::buffer())->Size()); ++i) {
            if (!require(PLS_API(require(TouchOption::buffer())->ElementAt(i)))->Lock) {
                touchOption = PLS_API(require(TouchOption::buffer())->ElementAt(i));
                require(touchOption)->Init();
                break;
            }
        }
        if (is_null(touchOption)) {
            PLS_API(([&]() -> void {
                auto cs_receiver = TouchOption::buffer();
                pls::cs::Ref<TouchOption> cs_arg0 = ([&]() {
                    auto cs_value = TouchOption::create();
                    touchOption = cs_value;
                    return cs_value;
                }());
                require(cs_receiver)->Add(cs_arg0);
            }()));
        }
        require(touchOption)->Lock = true;
        return touchOption;
    }
}

// M:kairo.unity.surface.TouchOption.Create(System.Int32[])
pls::cs::Ref<TouchOption> TouchOption::Create(IntArray args) {
    TouchOption::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.TouchOption.Create(System.Int32[])", kairo);
    {
        pls::cs::Ref<TouchOption> touchOption = TouchOption::Create();
        require(touchOption)->args = args;
        return touchOption;
    }
}

// M:kairo.unity.surface.TouchOption.Create(System.Int32)
pls::cs::Ref<TouchOption> TouchOption::CreateInt(pls::cs::Int32 flag) {
    TouchOption::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.TouchOption.Create(System.Int32)", kairo);
    {
        pls::cs::Ref<TouchOption> touchOption = TouchOption::Create();
        require(touchOption)->flag = flag;
        return touchOption;
    }
}

// M:kairo.unity.surface.TouchOption.Drag(System.Int32,System.Int32)
pls::cs::Ref<TouchOption> TouchOption::Drag(pls::cs::Int32 gridX, pls::cs::Int32 gridY) {
    TouchOption::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.TouchOption.Drag(System.Int32,System.Int32)",
                     kairo);
    {
        return TouchOption::Drag(gridX, gridY, 0);
    }
}

// M:kairo.unity.surface.TouchOption.Drag(System.Int32,System.Int32,System.Int32)
pls::cs::Ref<TouchOption> TouchOption::Drag(pls::cs::Int32 gridX, pls::cs::Int32 gridY, pls::cs::Int32 flag) {
    TouchOption::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.surface.TouchOption.Drag(System.Int32,System.Int32,System.Int32)", kairo);
    {
        pls::cs::Ref<TouchOption> touchOption = TouchOption::Create();
        require(touchOption)->dragGridW = gridX;
        require(touchOption)->dragGridH = gridY;
        require(touchOption)->flag = flag;
        return touchOption;
    }
}

// M:kairo.unity.surface.TouchOption.Drag(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Ref<TouchOption> TouchOption::Drag(pls::cs::Int32 x, pls::cs::Int32 y, pls::cs::Int32 w,
                                            pls::cs::Int32 h, pls::cs::Int32 xcells, pls::cs::Int32 ycells) {
    TouchOption::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.surface.TouchOption.Drag(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        kairo);
    {
        return TouchOption::Drag(x, y, w, h, xcells, ycells, 0);
    }
}

// M:kairo.unity.surface.TouchOption.Drag(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Ref<TouchOption> TouchOption::Drag(pls::cs::Int32 x, pls::cs::Int32 y, pls::cs::Int32 w,
                                            pls::cs::Int32 h, pls::cs::Int32 xcells, pls::cs::Int32 ycells,
                                            pls::cs::Int32 flag) {
    TouchOption::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.surface.TouchOption.Drag(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        kairo);
    {
        pls::cs::Ref<TouchOption> touchOption = TouchOption::Create();
        {
            auto cs_target = touchOption;
            auto cs_value = IntArray::from({x, y, w, h, xcells, ycells});
            require(cs_target)->dragCell = cs_value;
        }
        require(touchOption)->flag = flag;
        return touchOption;
    }
}

// M:kairo.unity.surface.TouchOption.Flag(System.Int32)
pls::cs::Ref<TouchOption> TouchOption::Flag(pls::cs::Int32 flag) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.TouchOption.Flag(System.Int32)", kairo);
    {
        this->flag = flag;
        return this;
    }
}

// M:kairo.unity.surface.TouchOption.Margin(System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Ref<TouchOption> TouchOption::Margin(pls::cs::Int32 left, pls::cs::Int32 right, pls::cs::Int32 top,
                                              pls::cs::Int32 bottom) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.surface.TouchOption.Margin(System.Int32,System.Int32,System.Int32,System.Int32)",
        kairo);
    {
        margin = IntArray::from({left, right, top, bottom});
        return this;
    }
}

// M:kairo.unity.surface.TouchOption.ExtendValues(System.Int32)
pls::cs::Ref<TouchOption> TouchOption::ExtendValues(pls::cs::Int32 value) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.surface.TouchOption.ExtendValues(System.Int32)", kairo);
    {
        extendValues = IntArray::from({value});
        return this;
    }
}
} // namespace kairo::unity::surface
}
