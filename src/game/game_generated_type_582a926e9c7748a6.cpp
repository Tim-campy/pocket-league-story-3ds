// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_582a926e9c7748a6.hpp"
#include "generated/portable_generated_type_582a926e9c7748a6.hpp"
namespace pls::game {

// M:java.lang.StringEx.GetBytes(System.String,System.String)
pls::cs::Array<std::uint8_t> cs_4b8369e9a5f65090(pls::cs::String v_str,pls::cs::String v_enc) { pls::generated::cs_init_582a926e9c7748a6();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.StringEx.GetBytes(System.String,System.String)",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::RuntimeEncoding> { auto cs_arg0 = v_enc; return pls::cs::RuntimeEncoding::GetEncoding(cs_arg0); }());}); auto cs_arg0 = v_str; return pls::game::cs_require(cs_receiver)->GetBytes(cs_arg0); }());});
}
}
}
}
