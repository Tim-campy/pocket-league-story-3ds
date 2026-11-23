// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "java.util.JTool.hpp"
namespace pls::generated {
namespace java::util::JTool {

// M:java.util.JTool.MakeArray``1(System.Int32[])
template<typename T_T>
T_T MakeArray(pls::cs::Array<pls::cs::Int32> counts) {
JTool::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JTool.MakeArray\u0060\u00601(System.Int32[])",kairo);
{
if (counts.length() == 0) {
return T_T{};
}
pls::cs::Ref<pls::cs::RuntimeType> typeFromHandle = pls::cs::runtime_type_of<T_T>();
typeFromHandle = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::RuntimeType> { auto cs_receiver = require(typeFromHandle)->get_Assembly(); auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = require(typeFromHandle)->get_FullName(); auto cs_arg1 = 0; auto cs_arg2 = pls::cs::Int32(require(typeFromHandle)->get_FullName().length()) - 2; return substring2(cs_arg0,cs_arg1,cs_arg2); }());}); return require(cs_receiver)->GetType(cs_arg0); }());});
return pls::cs::unbox<T_T>(pls::cs::box(JTool::MakeArrayRecursive(typeFromHandle, counts, 0)));
}

}
} // namespace java::util::JTool
}
