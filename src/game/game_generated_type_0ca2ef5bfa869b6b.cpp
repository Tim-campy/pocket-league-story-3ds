// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_0ca2ef5bfa869b6b.hpp"
namespace pls::game {

static PLS_NOINLINE void cs_init_0ca2ef5bfa869b6b_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("java.lang.JFloat",flag,[](){

});}

void cs_init_0ca2ef5bfa869b6b(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_0ca2ef5bfa869b6b_slow(flag);}

// M:java.lang.JFloat.ParseFloat(System.String)
float cs_128bfc9b6545e4ca(pls::cs::String v_s) { cs_init_0ca2ef5bfa869b6b();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JFloat.ParseFloat(System.String)",kairo);
{
return static_cast<float>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> float { auto cs_arg0 = v_s; return pls::cs::culture_parse_single(cs_arg0); }());}));
}
}
}
}
