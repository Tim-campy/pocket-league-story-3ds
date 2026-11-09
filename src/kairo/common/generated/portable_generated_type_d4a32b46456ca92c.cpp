// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_d4a32b46456ca92c.hpp"
namespace pls::generated {

void cs_init_d4a32b46456ca92c(){static pls::cs::TypeInitState state;state.run("kairo.unity.util.Base64",[](){

});}

// M:kairo.unity.util.Base64.Decode(System.String)
pls::cs::Array<std::uint8_t> cs_45659d3497c243a5(pls::cs::String v_str) { cs_init_d4a32b46456ca92c();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Base64.Decode(System.String)",kairo);
{
try {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_str; return pls::cs::convert_from_base64_string(cs_arg0); }());});
} catch(const pls::cs::Exception& cs_caught_500) {auto cs_exception_500=pls::cs::capture_exception(cs_caught_500);
if(pls::cs::exception_is(cs_exception_500,"System.Exception")) {{
return pls::cs::Array<std::uint8_t>{};
}}
else {throw;} }
}
}
}

// M:kairo.unity.util.Base64.Encode(System.Byte[])
pls::cs::String cs_7f8edd4d76f97c06(pls::cs::Array<std::uint8_t> v_bytes) { cs_init_d4a32b46456ca92c();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Base64.Encode(System.Byte[])",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_bytes; return pls::cs::convert_to_base64_string(cs_arg0); }());});
}
}
}
}
