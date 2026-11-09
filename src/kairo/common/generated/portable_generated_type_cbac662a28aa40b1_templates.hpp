// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_type_cbac662a28aa40b1.hpp"
namespace pls::generated {

// M:java.util.JTool.MakeArray``1(System.Int32[])
template<typename T_T>
T_T cs_e958ba3e955da10a(pls::cs::Array<std::int32_t> v_counts) { cs_init_cbac662a28aa40b1();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JTool.MakeArray\u0060\u00601(System.Int32[])",kairo);
{
if (([&]() -> bool { auto cs_left = (v_counts).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
return T_T{};
}
pls::cs::Ref<pls::cs::RuntimeType> v_typeFromHandle_191 = pls::cs::runtime_type_of<T_T>();
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::RuntimeType> { auto cs_receiver = pls::generated::cs_require(v_typeFromHandle_191)->get_Assembly(); auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::generated::cs_require(v_typeFromHandle_191)->get_FullName(); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = (pls::generated::cs_require(v_typeFromHandle_191)->get_FullName()).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::generated::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }());}); return pls::generated::cs_require(cs_receiver)->GetType(cs_arg0); }());}); v_typeFromHandle_191 = cs_value; return cs_value; }());
return pls::cs::unbox<T_T>(pls::cs::box(([&]() -> pls::cs::Ref<pls::cs::ArrayBase> { pls::cs::Ref<pls::cs::RuntimeType> cs_arg0 = v_typeFromHandle_191; pls::cs::Array<std::int32_t> cs_arg1 = v_counts; std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_c751cd2e64c3775f(cs_arg0,cs_arg1,cs_arg2); }())));
}
}
}
}
