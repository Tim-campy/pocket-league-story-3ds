// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.util.SecureLong.hpp"
#include "kairo.unity.util.SecureNumber.hpp"

namespace pls::generated {
namespace kairo::unity::util {

void SecureLong::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    SecureNumber::trace_edges(visitor);
}

bool SecureLong::Equals(pls::cs::Ref<pls::cs::Object> const& obj) {
    return SecureLong::Equals(pls::cs::static_pointer_cast<SecureLong>(shared_from_this()), obj);
}

static PLS_NOINLINE void cs_init_924db3d974bae2af_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.util.SecureLong", flag, []() {

    });
}

void SecureLong::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_924db3d974bae2af_slow(flag);
}

void SecureLong::create_init(pls::cs::Ref<SecureLong> self) {
    SecureLong::ensure_initialized();
    SecureNumber::create_init(pls::cs::static_pointer_cast<SecureNumber>(self));
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureLong.#ctor", kairo);
    {
    }
}

void SecureLong::create_init(pls::cs::Ref<SecureLong> self, pls::cs::Int64 value) {
    SecureLong::ensure_initialized();
    SecureNumber::create_init(pls::cs::static_pointer_cast<SecureNumber>(self), value);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureLong.#ctor(System.Int64)", kairo);
    {
    }
}

pls::cs::Int32 SecureLong::GetHashCode(pls::cs::Ref<SecureLong> self) {
    return require(self)->SecureLong::GetHashCode();
}

// M:kairo.unity.util.SecureLong.op_Implicit(kairo.unity.util.SecureLong)~System.Int64
pls::cs::Int64 SecureLong::op_Implicit(pls::cs::Ref<SecureLong> s) {
    SecureLong::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.SecureLong.op_Implicit(kairo.unity.util.SecureLong)~System.Int64",
                     kairo);
    {
        return require(s)->Get();
    }
}

// M:kairo.unity.util.SecureLong.op_Implicit(System.Int64)~kairo.unity.util.SecureLong
pls::cs::Ref<SecureLong> SecureLong::op_ImplicitLong(pls::cs::Int64 s) {
    SecureLong::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.SecureLong.op_Implicit(System.Int64)~kairo.unity.util.SecureLong",
                     kairo);
    {
        return SecureLong::create(s);
    }
}

// M:kairo.unity.util.SecureLong.#ctor
pls::cs::Ref<SecureLong> SecureLong::create() {
    SecureLong::ensure_initialized();
    auto self = pls::cs::make_ref<SecureLong>();
    SecureLong::create_init(self);
    return self;
}

// M:kairo.unity.util.SecureLong.#ctor(System.Int64)
pls::cs::Ref<SecureLong> SecureLong::create(pls::cs::Int64 value) {
    SecureLong::ensure_initialized();
    auto self = pls::cs::make_ref<SecureLong>();
    SecureLong::create_init(self, value);
    return self;
}

// M:kairo.unity.util.SecureLong.Set(System.Int64)
pls::cs::Ref<SecureLong> SecureLong::Set(pls::cs::Int64 value) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureLong.Set(System.Int64)", kairo);
    {
        SetLong(value);
        return this;
    }
}

// M:kairo.unity.util.SecureLong.Get
pls::cs::Int64 SecureLong::Get() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureLong.Get", kairo);
    {
        return GetLong();
    }
}

// M:kairo.unity.util.SecureLong.Array(System.Int32)
pls::cs::Array<pls::cs::Ref<SecureLong>> SecureLong::Array(pls::cs::Int32 n) {
    SecureLong::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureLong.Array(System.Int32)", kairo);
    {
        pls::cs::Array<pls::cs::Ref<SecureLong>> array = pls::cs::Array<pls::cs::Ref<SecureLong>>::make(n);
        for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
            array.set_Item(i, SecureLong::create());
        }
        return array;
    }
}

// M:kairo.unity.util.SecureLong.Equals(System.Object)
bool SecureLong::Equals(pls::cs::Ref<SecureLong> self, pls::cs::Ref<pls::cs::Object> obj) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureLong.Equals(System.Object)", kairo);
    {
        if (is_instance<pls::cs::Ref<SecureLong>>(pls::cs::box(obj))) {
            {
                auto cs_left_15 = self->Get();
                auto cs_right_15 = require((pls::cs::unbox<pls::cs::Ref<SecureLong>>(obj)))->Get();
                return cs_left_15 == cs_right_15;
            }
        }
        return pls::cs::box(self) == pls::cs::box(obj);
    }
}

// M:kairo.unity.util.SecureLong.GetHashCode
std::int32_t SecureLong::GetHashCode() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureLong.GetHashCode", kairo);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) { return value_hash(value_); });
    }
}
} // namespace kairo::unity::util
}
