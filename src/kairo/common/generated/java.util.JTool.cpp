// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "java.util.JTool.hpp"
#include "java.util.JTool_templates.hpp"
using ByteArray = pls::cs::Array<std::uint8_t>;
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::generated {
namespace java::util::JTool {

static PLS_NOINLINE void cs_init_cbac662a28aa40b1_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("java.util.JTool",flag,[](){

});}

void ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_cbac662a28aa40b1_slow(flag);}

// Concrete compile receipt: M:java.util.JTool.MakeArray``1(System.Int32[]) [byte[][]]
template pls::cs::Array<ByteArray> MakeArray<pls::cs::Array<ByteArray>>(IntArray);

// M:java.util.JTool.MakeArrayRecursive(System.Type,System.Int32[],System.Int32)
pls::cs::Ref<pls::cs::ArrayBase> MakeArrayRecursive(pls::cs::Ref<pls::cs::RuntimeType> type,IntArray counts,pls::cs::Int32 index) {
JTool::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JTool.MakeArrayRecursive(System.Type,System.Int32[],System.Int32)",kairo);
{
pls::cs::Ref<pls::cs::ArrayBase> array = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::runtime_create_array(type, counts[index]);});
if (index + 1 >= counts.length()) {
return array;
}
type = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::RuntimeType> { auto cs_receiver = require(type)->get_Assembly(); auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = require(type)->get_FullName(); auto cs_arg1 = 0; auto cs_arg2 = pls::cs::Int32(require(type)->get_FullName().length()) - 2; return substring2(cs_arg0,cs_arg1,cs_arg2); }());}); return require(cs_receiver)->GetType(cs_arg0); }());});
if (is_null(type)) {
return array;
}
for (pls::cs::Int32 i = 0; i < require(array)->get_Length(); ++i) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::runtime_array_set_value(array, pls::cs::box(JTool::MakeArrayRecursive(type, counts, index + 1)), i);});
}
return array;
}

}
} // namespace java::util::JTool
}
