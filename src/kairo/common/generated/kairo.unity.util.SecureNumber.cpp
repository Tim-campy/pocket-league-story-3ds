// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.lang.JString.hpp"
#include "java.util.JRandom.hpp"
#include "kairo.unity.util.SecureNumber.hpp"

namespace pls::generated {
namespace kairo::unity::util {

void SecureNumber::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
}

static pls::cs::Int64 SecureNumber_hacking__storage{};

static pls::cs::Ref<java::util::JRandom> SecureNumber_random__storage{};

static PLS_NOINLINE void cs_init_bd164c3c94a49e2a_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(SecureNumber_hacking__storage, visitor);
        pls::cs::trace_value(SecureNumber_random__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.util.SecureNumber", flag, []() {

    });
}

void SecureNumber::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_bd164c3c94a49e2a_slow(flag);
}

pls::cs::Int64& SecureNumber::hacking_() {
    SecureNumber::ensure_initialized();
    return SecureNumber_hacking__storage;
}

pls::cs::Ref<java::util::JRandom>& SecureNumber::random_() {
    SecureNumber::ensure_initialized();
    return SecureNumber_random__storage;
}

pls::cs::Int32 SecureNumber::GetHashCode(pls::cs::Ref<SecureNumber> self) {
    return require(self)->SecureNumber::GetHashCode();
}

pls::cs::String SecureNumber::ToString(pls::cs::Ref<SecureNumber> self) {
    return require(self)->SecureNumber::ToString();
}

// M:kairo.unity.util.SecureNumber.#ctor
void SecureNumber::create_init(pls::cs::Ref<SecureNumber> self) {
    SecureNumber::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureNumber.#ctor", kairo);
    {
    }
}

// M:kairo.unity.util.SecureNumber.#ctor(System.Int64)
void SecureNumber::create_init(pls::cs::Ref<SecureNumber> self, pls::cs::Int64 value) {
    SecureNumber::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureNumber.#ctor(System.Int64)", kairo);
    {
        self->SetLong(value);
    }
}

// M:kairo.unity.util.SecureNumber.SetLong(System.Int64)
pls::cs::Ref<SecureNumber> SecureNumber::SetLong(pls::cs::Int64 value) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureNumber.SetLong(System.Int64)", kairo);
    {
        if (is_null(SecureNumber::random_())) {
            SecureNumber::random_() = java::util::JRandom::create();
        }
        bitmask_ = pls::cs::cast_integral<pls::cs::Int64>(0x22 | require(SecureNumber::random_())->NextInt());
        original_ = value;
        value_ = SecureNumber::Generate(value);
        return this;
    }
}

// M:kairo.unity.util.SecureNumber.GetLong
pls::cs::Int64 SecureNumber::GetLong() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureNumber.GetLong", kairo);
    {
        pls::cs::Int64 num = SecureNumber::Generate(value_);
        if (num != original_) {
            ++SecureNumber::hacking_();
            original_ = num;
        }
        return num;
    }
}

// M:kairo.unity.util.SecureNumber.Generate(System.Int64)
pls::cs::Int64 SecureNumber::Generate(pls::cs::Int64 value) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureNumber.Generate(System.Int64)", kairo);
    {
        return (~(value | ~bitmask_) | (value & ~bitmask_));
    }
}

// M:kairo.unity.util.SecureNumber.ToString
pls::cs::String SecureNumber::ToString() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureNumber.ToString", kairo);
    {
        return java::lang::JString::ValueOfLong(GetLong());
    }
}

// M:kairo.unity.util.SecureNumber.GetHashCode
std::int32_t SecureNumber::GetHashCode() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureNumber.GetHashCode", kairo);
    {
        return PLS_API(([&]() {
            auto cs_receiver = pls::cs::box(pls::cs::static_pointer_cast<pls::cs::Object>(this));
            return require(cs_receiver)->pls::cs::Object::GetHashCode();
        }()));
    }
}
} // namespace kairo::unity::util
}
