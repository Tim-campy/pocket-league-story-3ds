// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "java.lang.JFloat.hpp"
namespace pls::game {
namespace java::lang::JFloat {

static PLS_NOINLINE void cs_init_0ca2ef5bfa869b6b_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("java.lang.JFloat",flag,[](){

});}

void ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_0ca2ef5bfa869b6b_slow(flag);}

// M:java.lang.JFloat.ParseFloat(System.String)
pls::cs::Single ParseFloat(pls::cs::String s) {
JFloat::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JFloat.ParseFloat(System.String)",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_parse_single(s);});
}

}
} // namespace java::lang::JFloat
}
