// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.lang.JInteger.hpp"

namespace pls::generated {
namespace java::lang {

void JInteger::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
}

bool JInteger::Equals(pls::cs::Ref<pls::cs::Object> const& obj) {
    return JInteger::Equals(pls::cs::static_pointer_cast<JInteger>(shared_from_this()), obj);
}

static PLS_NOINLINE void cs_init_7de6788b61a5af56_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("java.lang.JInteger", flag, []() {

    });
}

void JInteger::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_7de6788b61a5af56_slow(flag);
}

void JInteger::create_init(pls::cs::Ref<JInteger> self, pls::cs::Int32 value) {
    JInteger::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JInteger.#ctor(System.Int32)", kairo);
    {
        self->value_ = value;
    }
}

pls::cs::Int32 JInteger::GetHashCode(pls::cs::Ref<JInteger> self) {
    return require(self)->JInteger::GetHashCode();
}

pls::cs::String JInteger::ToString(pls::cs::Ref<JInteger> self) {
    return require(self)->JInteger::ToString();
}

// M:java.lang.JInteger.op_Implicit(java.lang.JInteger)~System.Int32
pls::cs::Int32 JInteger::op_Implicit(pls::cs::Ref<JInteger> s) {
    JInteger::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JInteger.op_Implicit(java.lang.JInteger)~System.Int32",
                     kairo);
    {
        return require(s)->IntValue();
    }
}

// M:java.lang.JInteger.#ctor(System.Int32)
pls::cs::Ref<JInteger> JInteger::create(pls::cs::Int32 value) {
    JInteger::ensure_initialized();
    auto self = pls::cs::make_ref<JInteger>();
    JInteger::create_init(self, value);
    return self;
}

// M:java.lang.JInteger.IntValue
pls::cs::Int32 JInteger::IntValue() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JInteger.IntValue", kairo);
    {
        return value_;
    }
}

// M:java.lang.JInteger.ValueOf(System.String)
pls::cs::Ref<JInteger> JInteger::ValueOf(pls::cs::String s) {
    JInteger::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JInteger.ValueOf(System.String)", kairo);
    {
        return JInteger::create(JInteger::ParseInt(s));
    }
}

// M:java.lang.JInteger.ToString
pls::cs::String JInteger::ToString() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JInteger.ToString", kairo);
    {
        return PLS_API(integer_string(value_));
    }
}

// M:java.lang.JInteger.ParseInt(System.String)
pls::cs::Int32 JInteger::ParseInt(pls::cs::String s) {
    JInteger::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JInteger.ParseInt(System.String)", kairo);
    {
        return PLS_API(pls::cs::int32_parse(s));
    }
}

// M:java.lang.JInteger.Equals(System.Object)
bool JInteger::Equals(pls::cs::Ref<JInteger> self, pls::cs::Ref<pls::cs::Object> obj) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JInteger.Equals(System.Object)", kairo);
    {
        if (is_instance<pls::cs::Ref<JInteger>>(pls::cs::box(obj))) {
            {
                auto cs_left_1 = self->value_;
                auto cs_right_1 = require((pls::cs::unbox<pls::cs::Ref<JInteger>>(obj)))->value_;
                return cs_left_1 == cs_right_1;
            }
        }
        return pls::cs::box(self) == pls::cs::box(obj);
    }
}

// M:java.lang.JInteger.GetHashCode
std::int32_t JInteger::GetHashCode() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JInteger.GetHashCode", kairo);
    {
        return PLS_API(value_hash(value_));
    }
}
} // namespace java::lang
}
