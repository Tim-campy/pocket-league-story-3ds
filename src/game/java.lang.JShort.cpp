// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.lang.JShort.hpp"

namespace pls::game {
namespace java::lang {

void JShort::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
}

bool JShort::Equals(pls::cs::Ref<pls::cs::Object> const& obj) {
    return JShort::Equals(pls::cs::static_pointer_cast<JShort>(shared_from_this()), obj);
}

static PLS_NOINLINE void cs_init_ec7e2b4042d2be7d_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("java.lang.JShort", flag, []() {

    });
}

void JShort::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_ec7e2b4042d2be7d_slow(flag);
}

void JShort::create_init(pls::cs::Ref<JShort> self, std::int16_t value) {
    JShort::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JShort.#ctor(System.Int16)", kairo);
    {
        self->value_ = value;
    }
}

// M:java.lang.JShort.#ctor(System.Int16)
pls::cs::Ref<JShort> JShort::create(std::int16_t value) {
    JShort::ensure_initialized();
    auto self = pls::cs::make_ref<JShort>();
    JShort::create_init(self, value);
    return self;
}

// M:java.lang.JShort.ShortValue
std::int16_t JShort::ShortValue() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JShort.ShortValue", kairo);
    {
        return value_;
    }
}

// M:java.lang.JShort.ToString
pls::cs::String JShort::ToString() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JShort.ToString", kairo);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) { return integer_string(value_); });
    }
}

// M:java.lang.JShort.Equals(System.Object)
bool JShort::Equals(pls::cs::Ref<JShort> self, pls::cs::Ref<pls::cs::Object> obj) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JShort.Equals(System.Object)", kairo);
    {
        if (is_instance<pls::cs::Ref<JShort>>(pls::cs::box(obj))) {
            {
                auto cs_left_317 = pls::cs::cast_integral<pls::cs::Int32>(self->value_);
                auto cs_right_317 = pls::cs::cast_integral<pls::cs::Int32>(
                    require((pls::cs::unbox<pls::cs::Ref<JShort>>(obj)))->value_);
                return cs_left_317 == cs_right_317;
            }
        }
        return pls::cs::box(self) == pls::cs::box(obj);
    }
}

// M:java.lang.JShort.GetHashCode
std::int32_t JShort::GetHashCode() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JShort.GetHashCode", kairo);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) { return value_hash(value_); });
    }
}
} // namespace java::lang
}
