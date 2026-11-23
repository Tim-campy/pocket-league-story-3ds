// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/java.lang.JInteger.hpp"
#include "java.lang.JInteger.hpp"

namespace kl_lang = pls::generated::java::lang;

namespace pls::game {
namespace java::lang::JInteger {

// M:java.lang.JInteger.ToHexString(System.Int32)
pls::cs::String ToHexString(pls::cs::Int32 i) {
kl_lang::JInteger::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JInteger.ToHexString(System.Int32)",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_value=i;return pls::cs::convert_to_string_base(cs_value,16);}());});
}

}

// M:java.lang.JInteger.ParseInt(System.String,System.Int32)
pls::cs::Int32 ParseInt(pls::cs::String s,pls::cs::Int32 radix) {
kl_lang::JInteger::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JInteger.ParseInt(System.String,System.Int32)",kairo);
{
if (radix == 16) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_value=s;return pls::cs::int32_parse_hex_number(cs_value,false);}());});
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::int32_parse(s);});
}

}
} // namespace java::lang::JInteger
}
