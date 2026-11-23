// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "java.lang.JRuntime.hpp"
#include "java.lang.JSystem.hpp"
#include "java.util.JDate.hpp"
namespace pls::generated {
namespace java::lang::JSystem {

static PLS_NOINLINE void cs_init_3af9088680f95fb3_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("java.lang.JSystem",flag,[](){

});}

void ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_3af9088680f95fb3_slow(flag);}

// M:java.lang.JSystem.Arraycopy(System.Object,System.Int32,System.Object,System.Int32,System.Int32)
void Arraycopy(pls::cs::Ref<pls::cs::Object> src,pls::cs::Int32 src_position,pls::cs::Ref<pls::cs::Object> dst,pls::cs::Int32 dst_position,pls::cs::Int32 length) {
JSystem::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JSystem.Arraycopy(System.Object,System.Int32,System.Object,System.Int32,System.Int32)",kairo);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_arg0 = pls::cs::array_cast(src); auto cs_arg1 = src_position; auto cs_arg2 = pls::cs::array_cast(dst); auto cs_arg3 = dst_position; auto cs_arg4 = length; pls::cs::array_copy(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());});
}

}

// M:java.lang.JSystem.CurrentTimeMillis
pls::cs::Int64 CurrentTimeMillis() {
JSystem::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JSystem.CurrentTimeMillis",kairo);
{
util::JDate::ensure_initialized();

return pls::cs::to_int64((([&]() -> pls::cs::TimeSpan { auto cs_left = pls::cs::DateTime::get_UtcNow(); auto cs_right = util::JDate::UNIX_TIME(); return cs_left - cs_right; }())).get_TotalMilliseconds());

}

}

// M:java.lang.JSystem.Gc
void Gc() {
JSystem::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JSystem.Gc",kairo);
{
require(JRuntime::GetRuntime())->Gc();
}

}
} // namespace java::lang::JSystem
}
