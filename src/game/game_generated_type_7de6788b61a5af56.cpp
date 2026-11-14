// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_7de6788b61a5af56.hpp"
#include "generated/portable_generated_type_7de6788b61a5af56.hpp"
namespace pls::game {

// M:java.lang.JInteger.ParseInt(System.String,System.Int32)
std::int32_t cs_a097ed679be03337(pls::cs::String v_s,std::int32_t v_radix) { pls::generated::cs_init_7de6788b61a5af56();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JInteger.ParseInt(System.String,System.Int32)",kairo);
{
if (([&]() -> bool { auto cs_left = v_radix; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return (cs_left == cs_right); }())) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_value=v_s;return pls::cs::int32_parse_hex_number(cs_value,false);}());});
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_s; return pls::cs::int32_parse(cs_arg0); }());});
}
}
}

// M:java.lang.JInteger.ToHexString(System.Int32)
pls::cs::String cs_4f16d65e85f49d6f(std::int32_t v_i) { pls::generated::cs_init_7de6788b61a5af56();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JInteger.ToHexString(System.Int32)",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_value=v_i;return pls::cs::convert_to_string_base(cs_value,16);}());});
}
}
}
}
