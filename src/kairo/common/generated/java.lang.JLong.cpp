// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "java.lang.JLong.hpp"
namespace pls::generated {
namespace java::lang::JLong {

static PLS_NOINLINE void cs_init_1feb9ce0db5130ce_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("java.lang.JLong",flag,[](){

});}

void ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_1feb9ce0db5130ce_slow(flag);}

// M:java.lang.JLong.ParseLong(System.String)
pls::cs::Int64 ParseLong(pls::cs::String s) {
JLong::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JLong.ParseLong(System.String)",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::int64_parse(s);});
}

}
} // namespace java::lang::JLong
}
