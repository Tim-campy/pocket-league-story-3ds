// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.lang.StringEx.hpp"
#include "java.util.JRandom.hpp"
#include "kairo.unity.util.SecureNumber.hpp"
#include "kairo.unity.util.SecureString.hpp"
using ByteArray = pls::cs::Array<std::uint8_t>;

namespace pls::generated {
namespace kairo::unity::util {

void SecureString::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    SecureNumber::trace_edges(visitor);
    pls::cs::trace_value(original__SecureString, visitor);
    pls::cs::trace_value(value__SecureString, visitor);
    pls::cs::trace_value(buffer_, visitor);
}

bool SecureString::Equals(pls::cs::Ref<pls::cs::Object> const& obj) {
    return SecureString::Equals(pls::cs::static_pointer_cast<SecureString>(shared_from_this()), obj);
}

static PLS_NOINLINE void cs_init_bb652fbb61000386_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.util.SecureString", flag, []() {

    });
}

void SecureString::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_bb652fbb61000386_slow(flag);
}

void SecureString::create_2_init(pls::cs::Ref<SecureString> self, pls::cs::Ref<SecureString> src) {
    SecureString::ensure_initialized();
    SecureNumber::create_init(pls::cs::static_pointer_cast<SecureNumber>(self));
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureString.#ctor(kairo.unity.util.SecureString)",
                     kairo);
    {
        self->Set(require(src)->Get());
    }
}

void SecureString::create_init(pls::cs::Ref<SecureString> self, pls::cs::String value) {
    SecureString::ensure_initialized();
    SecureNumber::create_init(pls::cs::static_pointer_cast<SecureNumber>(self));
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureString.#ctor(System.String)", kairo);
    {
        self->Set(value);
    }
}

pls::cs::Int32 SecureString::GetHashCode(pls::cs::Ref<SecureString> self) {
    return require(self)->SecureString::GetHashCode();
}

pls::cs::String SecureString::ToString(pls::cs::Ref<SecureString> self) {
    return require(self)->SecureString::ToString();
}

// M:kairo.unity.util.SecureString.op_Implicit(kairo.unity.util.SecureString)~System.String
pls::cs::String SecureString::op_Implicit(pls::cs::Ref<SecureString> s) {
    SecureString::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.util.SecureString.op_Implicit(kairo.unity.util.SecureString)~System.String", kairo);
    {
        return ([&]() -> pls::cs::String {
            auto cs_conditional = s;
            if (!cs_conditional)
                return pls::cs::String{};
            return ([&]() -> pls::cs::String {
                auto cs_receiver = static_cast<pls::cs::Ref<SecureString>>(cs_conditional);
                if (!cs_receiver)
                    throw pls::cs::NullReferenceException();
                return cs_receiver->ToString();
            }());
        }());
    }
}

// M:kairo.unity.util.SecureString.op_Implicit(System.String)~kairo.unity.util.SecureString
pls::cs::Ref<SecureString> SecureString::op_ImplicitString(pls::cs::String s) {
    SecureString::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.util.SecureString.op_Implicit(System.String)~kairo.unity.util.SecureString", kairo);
    {
        if (is_null(s)) {
            return pls::cs::Ref<SecureString>{};
        }
        return SecureString::create(s);
    }
}

// M:kairo.unity.util.SecureString.op_Addition(kairo.unity.util.SecureString,System.String)
pls::cs::Ref<SecureString> SecureString::op_Addition(pls::cs::Ref<SecureString> z, pls::cs::String w) {
    SecureString::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.util.SecureString.op_Addition(kairo.unity.util.SecureString,System.String)", kairo);
    {
        return SecureString::create(PLS_API(pls::cs::String::concat(([&]() {
                                                                        auto cs_value = z;
                                                                        return SecureString::op_Implicit(
                                                                            cs_value);
                                                                    }()),
                                                                    w)));
    }
}

// M:kairo.unity.util.SecureString.#ctor(System.String)
pls::cs::Ref<SecureString> SecureString::create(pls::cs::String value) {
    SecureString::ensure_initialized();
    auto self = pls::cs::make_ref<SecureString>();
    SecureString::create_init(self, value);
    return self;
}

// M:kairo.unity.util.SecureString.#ctor(kairo.unity.util.SecureString)
pls::cs::Ref<SecureString> SecureString::create_2(pls::cs::Ref<SecureString> src) {
    SecureString::ensure_initialized();
    auto self = pls::cs::make_ref<SecureString>();
    SecureString::create_2_init(self, src);
    return self;
}

// M:kairo.unity.util.SecureString.Set(System.String)
pls::cs::Ref<SecureString> SecureString::Set(pls::cs::String value) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureString.Set(System.String)", kairo);
    {
        SecureNumber::ensure_initialized();

        if (is_null(SecureNumber::random_())) {
            SecureNumber::random_() = java::util::JRandom::create();
        }
        bitmask_ = pls::cs::cast_integral<pls::cs::Int64>(0x22 | require(SecureNumber::random_())->NextInt());
        original__SecureString = value;
        value__SecureString = PLS_API(to_chars(original__SecureString));
        Generate(value__SecureString, value__SecureString);
        hashCode_ = 0;
        for (pls::cs::Int32 i = 0; i < value__SecureString.length(); ++i) {
            hashCode_ = (hashCode_ ^ value__SecureString[i]);
        }
        return this;
    }
}

// M:kairo.unity.util.SecureString.Get
pls::cs::String SecureString::Get() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureString.Get", kairo);
    {
        SecureNumber::ensure_initialized();

        if (([&]() {
                auto cs_left = pls::cs::box(buffer_);
                auto cs_right = pls::cs::box(pls::cs::Array<char16_t>{});
                return cs_left == cs_right;
            }()) ||
            (buffer_.length() != value__SecureString.length())) {
            buffer_ = pls::cs::Array<char16_t>::make(value__SecureString.length());
        }
        Generate(value__SecureString, buffer_);
        pls::cs::String text = string_from_chars(buffer_);
        if (!PLS_API(string_equals(text, original__SecureString))) {
            ++SecureNumber::hacking_();
            original__SecureString = text;
        }
        return text;
    }
}

// M:kairo.unity.util.SecureString.Generate(System.Char[],System.Char[])
void SecureString::Generate(pls::cs::Array<char16_t> from, pls::cs::Array<char16_t> to) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureString.Generate(System.Char[],System.Char[])",
                     kairo);
    {
        for (pls::cs::Int32 i = 0; i < from.length(); ++i) {
            to[i] = Generate(from[i]);
        }
    }
}

// M:kairo.unity.util.SecureString.Generate(System.Char)
char16_t SecureString::Generate(char16_t value) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureString.Generate(System.Char)", kairo);
    {
        return pls::cs::cast_integral<char16_t>(
            ((~(pls::cs::Int64(value) | ~bitmask_) | (pls::cs::Int64(value) & ~bitmask_))));
    }
}

// M:kairo.unity.util.SecureString.ToString
pls::cs::String SecureString::ToString() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureString.ToString", kairo);
    {
        return Get();
    }
}

// M:kairo.unity.util.SecureString.Arraycopy(kairo.unity.util.SecureString[],System.Int32,kairo.unity.util.SecureString[],System.Int32,System.Int32)
void SecureString::Arraycopy(pls::cs::Array<pls::cs::Ref<SecureString>> srcArray, pls::cs::Int32 srcIndex,
                             pls::cs::Array<pls::cs::Ref<SecureString>> dstArray, pls::cs::Int32 dstIndex,
                             pls::cs::Int32 length) {
    SecureString::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.util.SecureString.Arraycopy(kairo.unity.util.SecureString[],System.Int32,kairo.unity.util.SecureString[],System.Int32,System.Int32)",
        kairo);
    {
        for (pls::cs::Int32 i = 0; i < length; ++i) {
            if (is_null(srcArray.get_Item(srcIndex + i))) {
                dstArray.set_Item(dstIndex + i, pls::cs::Ref<SecureString>{});
            } else {
                dstArray.set_Item(dstIndex + i, SecureString::create_2(srcArray.get_Item(srcIndex + i)));
            }
        }
    }
}

// M:kairo.unity.util.SecureString.Length
pls::cs::Int32 SecureString::Length() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureString.Length", kairo);
    {
        return value__SecureString.length();
    }
}

// M:kairo.unity.util.SecureString.GetBytes
ByteArray SecureString::GetBytes() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureString.GetBytes", kairo);
    {
        return java::lang::StringEx::GetBytes(Get());
    }
}

// M:kairo.unity.util.SecureString.Equals(System.String)
bool SecureString::Equals_2(pls::cs::String anObject) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureString.Equals(System.String)", kairo);
    {
        return PLS_API(string_equals(Get(), anObject));
    }
}

// M:kairo.unity.util.SecureString.Equals(kairo.unity.util.SecureString)
bool SecureString::EqualsSecureString(pls::cs::Ref<SecureString> anObject) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureString.Equals(kairo.unity.util.SecureString)",
                     kairo);
    {
        return PLS_API(([&]() -> bool {
            auto cs_arg0 = Get();
            auto cs_arg1 = require(anObject)->Get();
            return string_equals(cs_arg0, cs_arg1);
        }()));
    }
}

// M:kairo.unity.util.SecureString.StartsWith(System.String)
bool SecureString::StartsWith(pls::cs::String prefix) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureString.StartsWith(System.String)", kairo);
    {
        return PLS_API(pls::cs::culture_starts_with(Get(), prefix));
    }
}

// M:kairo.unity.util.SecureString.EndsWith(System.String)
bool SecureString::EndsWith(pls::cs::String suffix) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureString.EndsWith(System.String)", kairo);
    {
        return PLS_API(pls::cs::culture_ends_with(Get(), suffix));
    }
}

// M:kairo.unity.util.SecureString.IndexOf(System.Int32)
pls::cs::Int32 SecureString::IndexOf(pls::cs::Int32 ch) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureString.IndexOf(System.Int32)", kairo);
    {
        return java::lang::StringEx::IndexOf(Get(), ch);
    }
}

// M:kairo.unity.util.SecureString.ValueOf(System.String)
pls::cs::Ref<SecureString> SecureString::ValueOf(pls::cs::String str) {
    SecureString::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureString.ValueOf(System.String)", kairo);
    {
        if (is_null(str)) {
            return pls::cs::Ref<SecureString>{};
        }
        return SecureString::create(str);
    }
}

// M:kairo.unity.util.SecureString.ToString(kairo.unity.util.SecureString)
pls::cs::String SecureString::ToStringSecureStringStatic(pls::cs::Ref<SecureString> str) {
    SecureString::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.SecureString.ToString(kairo.unity.util.SecureString)", kairo);
    {
        return ([&]() -> pls::cs::String {
            auto cs_conditional = str;
            if (!cs_conditional)
                return pls::cs::String{};
            return ([&]() -> pls::cs::String {
                auto cs_receiver = static_cast<pls::cs::Ref<SecureString>>(cs_conditional);
                if (!cs_receiver)
                    throw pls::cs::NullReferenceException();
                return cs_receiver->ToString();
            }());
        }());
    }
}

// M:kairo.unity.util.SecureString.Equals(System.Object)
bool SecureString::Equals(pls::cs::Ref<SecureString> self, pls::cs::Ref<pls::cs::Object> obj) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureString.Equals(System.Object)", kairo);
    {
        if (!is_null(obj) && is_instance<pls::cs::Ref<SecureString>>(pls::cs::box(obj))) {
            return PLS_API(([&]() -> bool {
                auto cs_arg0 = self->Get();
                auto cs_arg1 = require((pls::cs::unbox<pls::cs::Ref<SecureString>>(obj)))->Get();
                return string_equals(cs_arg0, cs_arg1);
            }()));
        }
        return pls::cs::box(self) == pls::cs::box(obj);
    }
}

// M:kairo.unity.util.SecureString.GetHashCode
std::int32_t SecureString::GetHashCode() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureString.GetHashCode", kairo);
    {
        return hashCode_;
    }
}
} // namespace kairo::unity::util
}
