// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_bcccbac2bf72843d.hpp"
#include "game_generated_type_e9cc65282df10bc8.hpp"
namespace pls::game {

void cs_init_e9cc65282df10bc8(){static pls::cs::TypeInitState state;state.run("kairo.unity.graph.Graph",[](){

});}

// M:kairo.unity.graph.Graph.Easing(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
std::int32_t cs_20d8b864ba249ba5(std::int32_t v_v0,std::int32_t v_v1,std::int32_t v_length,std::int32_t v_frame,std::int32_t v_edging) { cs_init_e9cc65282df10bc8();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.graph.Graph.Easing(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",kairo);
{
if (([&]() -> bool { auto cs_left = v_frame; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
return v_v0;
}
if (([&]() -> bool { auto cs_left = v_frame; auto cs_right = v_length; return (cs_left >= cs_right); }())) {
return v_v1;
}
float v_num_1744 = static_cast<float>(([&]() -> double { auto cs_left = static_cast<double>(static_cast<float>(v_frame)); auto cs_right = static_cast<double>(static_cast<float>(v_length)); return (cs_left / cs_right); }()));
float v_num2_1789 = static_cast<float>(([&]() -> float { float cs_arg0 = static_cast<float>(([&]() -> double { auto cs_left = static_cast<double>(([&]() -> double { auto cs_left = static_cast<double>(([&]() -> double { auto cs_left = static_cast<double>(pls::game::cs_f32(0x40490fdbu)); auto cs_right = static_cast<double>(v_num_1744); return (cs_left * cs_right); }())); auto cs_right = static_cast<double>(pls::game::cs_f32(0x43340000u)); return (cs_left * cs_right); }())); auto cs_right = static_cast<double>(pls::game::cs_f32(0x40490fdbu)); return (cs_left / cs_right); }())); return cs_87ef3d6d0d364edc(cs_arg0); }()));
std::int32_t v_num3_1863 = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(static_cast<float>(v_v0)); auto cs_right = static_cast<double>(([&]() -> double { auto cs_left = static_cast<double>(static_cast<float>((([&]() -> std::int32_t { auto cs_left = v_v1; auto cs_right = v_v0; return pls::cs::sub_i32(cs_left,cs_right); }())))); auto cs_right = static_cast<double>((([&]() -> double { auto cs_left = static_cast<double>(v_num_1744); auto cs_right = static_cast<double>(([&]() -> double { auto cs_left = static_cast<double>(([&]() -> double { auto cs_left = static_cast<double>(static_cast<float>(v_edging)); auto cs_right = static_cast<double>(pls::game::cs_f32(0x439d1463u)); return (cs_left / cs_right); }())); auto cs_right = static_cast<double>(v_num2_1789); return (cs_left * cs_right); }())); return (cs_left + cs_right); }()))); return (cs_left * cs_right); }())); return (cs_left + cs_right); }())));
if (([&]() -> bool { auto cs_left = v_v0; auto cs_right = v_v1; return (cs_left < cs_right); }())) {
if (([&]() -> bool { auto cs_left = v_num3_1863; auto cs_right = v_v0; return (cs_left < cs_right); }())) {
([&]() { auto cs_value = v_v0; v_num3_1863 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num3_1863; auto cs_right = v_v1; return (cs_left > cs_right); }())) {
([&]() { auto cs_value = v_v1; v_num3_1863 = cs_value; return cs_value; }());
}
} else {
if (([&]() -> bool { auto cs_left = v_num3_1863; auto cs_right = v_v0; return (cs_left > cs_right); }())) {
([&]() { auto cs_value = v_v0; v_num3_1863 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num3_1863; auto cs_right = v_v1; return (cs_left < cs_right); }())) {
([&]() { auto cs_value = v_v1; v_num3_1863 = cs_value; return cs_value; }());
}
}
return v_num3_1863;
}
}
}
}
