// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/java.lang.JInteger.hpp"
#include "java.lang.JInteger.hpp"

namespace kl_lang = pls::generated::java::lang;

namespace pls::game {
namespace java::lang::JInteger {

// M:java.lang.JInteger.ToHexString(System.Int32)
pls::cs::String ToHexString(pls::cs::Int32 i) {
    kl_lang::JInteger::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JInteger.ToHexString(System.Int32)", kairo);
    {
        return PLS_API(([&]() {
            auto cs_value = i;
            return pls::cs::convert_to_string_base(cs_value, 16);
        }()));
    }
}

// M:java.lang.JInteger.ParseInt(System.String,System.Int32)
pls::cs::Int32 ParseInt(pls::cs::String s, pls::cs::Int32 radix) {
    kl_lang::JInteger::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JInteger.ParseInt(System.String,System.Int32)", kairo);
    {
        if (radix == 16) {
            return PLS_API(([&]() {
                auto cs_value = s;
                return pls::cs::int32_parse_hex_number(cs_value, false);
            }()));
        }
        return PLS_API(pls::cs::int32_parse(s));
    }
}
} // namespace java::lang::JInteger
}
