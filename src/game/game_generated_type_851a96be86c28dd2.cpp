// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_851a96be86c28dd2.hpp"
#include "generated/portable_generated_type_1ff3292665c8e0c4.hpp"
#include "generated/portable_generated_type_72d9658ed61145d6.hpp"
#include "generated/portable_generated_type_86e62a3c0e632a0f.hpp"
namespace pls::game {

static bool cs_66520490d812bf5b_value{};

static pls::cs::Array<pls::cs::Array<pls::cs::String>> cs_99f86cd66d5ccef0_value{};

void cs_init_851a96be86c28dd2(){static pls::cs::TypeInitState state;state.run("system.KairoText",[](){
cs_99f86cd66d5ccef0_value = pls::cs::evaluate_type_initializer_field("F:system.KairoText.TRANSLATE_TABLE",[&](){return pls::cs::Array<pls::cs::Array<pls::cs::String>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));});

});}

bool& cs_66520490d812bf5b(){cs_init_851a96be86c28dd2();return cs_66520490d812bf5b_value;}

pls::cs::Array<pls::cs::Array<pls::cs::String>>& cs_99f86cd66d5ccef0(){cs_init_851a96be86c28dd2();return cs_99f86cd66d5ccef0_value;}

// M:system.KairoText.LT(System.String,System.Int32)
pls::cs::String cs_62153521fbb1f7f8(pls::cs::String v_text,std::int32_t v_arg) { cs_init_851a96be86c28dd2();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.KairoText.LT(System.String,System.Int32)",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text; return cs_f54ac89fce23e89b(cs_arg0); }()); pls::cs::String cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { std::int32_t cs_arg0 = v_arg; return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());}); return pls::generated::cs_abfabf5a341e90ae(cs_arg0,cs_arg1); }());});
}
}
}

// M:system.KairoText.LT(System.String,System.String)
pls::cs::String cs_f026ffcc06857429(pls::cs::String v_text,pls::cs::String v_arg) { cs_init_851a96be86c28dd2();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.KairoText.LT(System.String,System.String)",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text; return cs_f54ac89fce23e89b(cs_arg0); }()); pls::cs::String cs_arg1 = v_arg; return pls::generated::cs_abfabf5a341e90ae(cs_arg0,cs_arg1); }());});
}
}
}

// M:system.KairoText.LT(System.String)
pls::cs::String cs_f54ac89fce23e89b(pls::cs::String v_text) { cs_init_851a96be86c28dd2();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.KairoText.LT(System.String)",game);
{
pls::cs::String v_text2_261 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text; auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }());});
if (([&]() -> bool { auto cs_left = v_text2_261; auto cs_right = v_text; return (cs_left != cs_right); }())) {
return v_text2_261;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }());})) {
return v_text;
}
if ((!(cs_66520490d812bf5b()))) {
for (std::int32_t v_i_454 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_454; auto cs_right = (cs_99f86cd66d5ccef0()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_454; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_454 = cs_new; return cs_old; }())) {
for (std::int32_t v_j_514 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_514; auto cs_right = (([&]() { auto cs_array = cs_99f86cd66d5ccef0(); auto cs_index = v_i_454; return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_514; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_514 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = cs_99f86cd66d5ccef0(); auto cs_index = v_i_454; return cs_array.get_Item(cs_index); }()); auto cs_index = v_j_514; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_99f86cd66d5ccef0(); auto cs_index = v_i_454; return cs_array.get_Item(cs_index); }()); auto cs_index = v_j_514; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x000a" u"",1)); pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"",4)); return pls::generated::cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
([&]() { auto cs_value = true; cs_66520490d812bf5b() = cs_value; return cs_value; }());
}
pls::cs::String v_value_714 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x000a" u"",1)); pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"",4)); return pls::generated::cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }());});
std::int32_t v_num_769 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));
for (std::int32_t v_k_790 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_790; auto cs_right = (cs_99f86cd66d5ccef0()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_790; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_790 = cs_new; return cs_old; }())) {
if ((([&]() -> bool { auto cs_left = v_num_769; auto cs_right = (([&]() { auto cs_array = cs_99f86cd66d5ccef0(); auto cs_index = v_k_790; return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }()) && pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_99f86cd66d5ccef0(); auto cs_index = v_k_790; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_arg1 = v_value_714; return pls::game::cs_string_equals(cs_arg0,cs_arg1); }());}))) {
return ([&]() { auto cs_array = ([&]() { auto cs_array = cs_99f86cd66d5ccef0(); auto cs_index = v_k_790; return cs_array.get_Item(cs_index); }()); auto cs_index = v_num_769; return cs_array.get_Item(cs_index); }());
}
}
return v_text;
}
}
}
}
