// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.lang.StringEx.hpp"
using ByteArray = pls::cs::Array<std::uint8_t>;

namespace pls::generated {
namespace java::lang::StringEx {

static PLS_NOINLINE void cs_init_582a926e9c7748a6_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("java.lang.StringEx", flag, []() {

    });
}

void ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_582a926e9c7748a6_slow(flag);
}

// M:java.lang.StringEx.CharAt(System.String,System.Int32)
char16_t CharAt(pls::cs::String str, pls::cs::Int32 index) {
    StringEx::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.StringEx.CharAt(System.String,System.Int32)", kairo);
    {
        return str.at(index);
    }
}

// M:java.lang.StringEx.EqualsIgnoreCase(System.String,System.String)
bool EqualsIgnoreCase(pls::cs::String str, pls::cs::String anotherString) {
    StringEx::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.StringEx.EqualsIgnoreCase(System.String,System.String)",
                     kairo);
    {
        if (str.length() != anotherString.length()) {
            return false;
        }
        return PLS_API(([&]() {
            auto cs_receiver = str;
            auto cs_argument = anotherString;
            cs_receiver.length();
            return pls::cs::culture_equals_ignore_case(cs_receiver, cs_argument);
        }()));
    }
}

// M:java.lang.StringEx.GetBytes(System.String)
ByteArray GetBytes(pls::cs::String str) {
    StringEx::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.StringEx.GetBytes(System.String)", kairo);
    {
        return PLS_API(require(pls::cs::RuntimeEncoding::get_UTF8())->GetBytes(str));
    }
}

// M:java.lang.StringEx.IndexOf(System.String,System.Int32)
pls::cs::Int32 IndexOf(pls::cs::String str, pls::cs::Int32 ch) {
    StringEx::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.StringEx.IndexOf(System.String,System.Int32)", kairo);
    {
        return PLS_API(index_char1(str, pls::cs::cast_integral<char16_t>(ch)));
    }
}

// M:java.lang.StringEx.Length(System.String)
pls::cs::Int32 Length(pls::cs::String str) {
    StringEx::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.StringEx.Length(System.String)", kairo);
    {
        return str.length();
    }
}

// M:java.lang.StringEx.StartsWith(System.String,System.String,System.Int32)
bool StartsWith(pls::cs::String str, pls::cs::String prefix, pls::cs::Int32 toffset) {
    StringEx::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:java.lang.StringEx.StartsWith(System.String,System.String,System.Int32)", kairo);
    {
        for (pls::cs::Int32 i = 0; i < prefix.length(); ++i) {
            if (i + toffset >= str.length() || ([&]() -> bool {
                    auto cs_left = pls::cs::cast_integral<pls::cs::Int32>(str.at(i + toffset));
                    auto cs_right = pls::cs::cast_integral<pls::cs::Int32>(prefix.at(i));
                    return cs_left != cs_right;
                }())) {
                return false;
            }
        }
        return true;
    }
}

// M:java.lang.StringEx.ToLowerCase(System.String)
pls::cs::String ToLowerCase(pls::cs::String str) {
    StringEx::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.StringEx.ToLowerCase(System.String)", kairo);
    {
        return PLS_API(pls::cs::culture_to_lower(str));
    }
}

// M:java.lang.StringEx.SubstringJ(System.String,System.Int32,System.Int32)
pls::cs::String SubstringJ(pls::cs::String str, pls::cs::Int32 beginIndex, pls::cs::Int32 endIndex) {
    StringEx::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:java.lang.StringEx.SubstringJ(System.String,System.Int32,System.Int32)", kairo);
    {
        return PLS_API(substring2(str, beginIndex, endIndex - beginIndex));
    }
}

// M:java.lang.StringEx.SubstringJ(System.String,System.Int32)
pls::cs::String SubstringJ(pls::cs::String str, pls::cs::Int32 beginIndex) {
    StringEx::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.StringEx.SubstringJ(System.String,System.Int32)", kairo);
    {
        return PLS_API(substring1(str, beginIndex));
    }
}
} // namespace java::lang::StringEx
}
