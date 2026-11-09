// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_cbac662a28aa40b1.hpp"
#include "portable_generated_type_cbac662a28aa40b1_templates.hpp"
namespace pls::generated {

void cs_init_cbac662a28aa40b1(){static pls::cs::TypeInitState state;state.run("java.util.JTool",[](){

});}

// Concrete compile receipt: M:java.util.JTool.MakeArray``1(System.Int32[]) [int]
template pls::cs::Array<pls::cs::Array<std::uint8_t>> cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::uint8_t>>>(pls::cs::Array<std::int32_t>);

// M:java.util.JTool.MakeArrayRecursive(System.Type,System.Int32[],System.Int32)
pls::cs::Ref<pls::cs::ArrayBase> cs_c751cd2e64c3775f(pls::cs::Ref<pls::cs::RuntimeType> v_type,pls::cs::Array<std::int32_t> v_counts,std::int32_t v_index) { cs_init_cbac662a28aa40b1();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JTool.MakeArrayRecursive(System.Type,System.Int32[],System.Int32)",kairo);
{
pls::cs::Ref<pls::cs::ArrayBase> v_array_510 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::ArrayBase> { auto cs_arg0 = v_type; auto cs_arg1 = ([&]() { auto cs_array = v_counts; auto cs_index = v_index; return cs_array.get_Item(cs_index); }()); return pls::cs::runtime_create_array(cs_arg0,cs_arg1); }());});
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_index; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = (v_counts).length(); return (cs_left >= cs_right); }())) {
return v_array_510;
}
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::RuntimeType> { auto cs_receiver = pls::generated::cs_require(v_type)->get_Assembly(); auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::generated::cs_require(v_type)->get_FullName(); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = (pls::generated::cs_require(v_type)->get_FullName()).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::generated::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }());}); return pls::generated::cs_require(cs_receiver)->GetType(cs_arg0); }());}); v_type = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_type); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return v_array_510;
}
for (std::int32_t v_i_772 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_772; auto cs_right = pls::generated::cs_require(v_array_510)->get_Length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_772; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_772 = cs_new; return cs_old; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_arg0 = v_array_510; auto cs_arg1 = pls::cs::box(([&]() -> pls::cs::Ref<pls::cs::ArrayBase> { pls::cs::Ref<pls::cs::RuntimeType> cs_arg0 = v_type; pls::cs::Array<std::int32_t> cs_arg1 = v_counts; std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_index; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_c751cd2e64c3775f(cs_arg0,cs_arg1,cs_arg2); }())); auto cs_arg2 = v_i_772; pls::cs::runtime_array_set_value(cs_arg0,cs_arg1,cs_arg2); }());});
}
return v_array_510;
}
}
}
}
