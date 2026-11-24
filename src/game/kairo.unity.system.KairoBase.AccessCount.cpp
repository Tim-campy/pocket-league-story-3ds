// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.system.KairoBase.AccessCount.hpp"

namespace pls::game {
namespace kairo::unity::system {

void KairoBase_AccessCount::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(name_, visitor);
}

static PLS_NOINLINE void cs_init_7f70540c4f85d74f_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.system.KairoBase.AccessCount", flag, []() {

    });
}

void KairoBase_AccessCount::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_7f70540c4f85d74f_slow(flag);
}

void KairoBase_AccessCount::create_init(pls::cs::Ref<KairoBase_AccessCount> self, pls::cs::String name,
                                        pls::cs::Int64 value) {
    KairoBase_AccessCount::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.system.KairoBase.AccessCount.#ctor(System.String,System.Int64)", kairo);
    {
        self->name_ = name;
        self->value_ = value;
    }
}

// M:kairo.unity.system.KairoBase.AccessCount.#ctor(System.String,System.Int64)
pls::cs::Ref<KairoBase_AccessCount> KairoBase_AccessCount::create(pls::cs::String name,
                                                                  pls::cs::Int64 value) {
    KairoBase_AccessCount::ensure_initialized();
    auto self = pls::cs::make_ref<KairoBase_AccessCount>();
    KairoBase_AccessCount::create_init(self, name, value);
    return self;
}

// M:kairo.unity.system.KairoBase.AccessCount.ToString
pls::cs::String KairoBase_AccessCount::ToString() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.system.KairoBase.AccessCount.ToString", kairo);
    {
        return pls::cs::String::concat(
            pls::cs::String::concat(
                name_,
                (((value_ >= pls::cs::cast_integral<pls::cs::Int64>(0))) ? literal(u"+") : literal(u""))),
            integer_string(value_));
    }
}

// M:kairo.unity.system.KairoBase.AccessCount.GetHashCode
std::int32_t KairoBase_AccessCount::GetHashCode() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.system.KairoBase.AccessCount.GetHashCode", kairo);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() {
                auto cs_receiver = pls::cs::box(pls::cs::static_pointer_cast<pls::cs::Object>(this));
                return require(cs_receiver)->pls::cs::Object::GetHashCode();
            }());
        });
    }
}
} // namespace kairo::unity::system
}
