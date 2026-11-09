// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_072159abb3229c71.hpp"
#include "generated/portable_generated_type_3c64e1d398f2e00f.hpp"
namespace pls::game {

static pls::cs::Array<std::int32_t> cs_4acead6a6573de00_value{};

static pls::cs::Array<float> cs_82d7da65e609f808_value{};

static pls::cs::Array<pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f>> cs_170e7b174acb7163_value{};

static pls::cs::Array<float> cs_03b4a07e67f87347_value{};

static pls::cs::Array<float> cs_c3805c7c55133d78_value{};

static pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> cs_36de48daf18a5564_value{};

static pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> cs_8c57e81f204d52a5_value{};

void cs_init_072159abb3229c71(){static pls::cs::TypeInitState state;state.run("kairo.unity.math.KairoMath",[](){
cs_4acead6a6573de00_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.math.KairoMath.checkHitLine_tmp",[&](){return pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)));});
cs_82d7da65e609f808_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.math.KairoMath.checkHitLineF_tmp",[&](){return pls::cs::Array<float>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)));});
cs_c3805c7c55133d78_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.math.KairoMath.transPoint_tmp1",[&](){return pls::cs::Array<float>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)));});
cs_36de48daf18a5564_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.math.KairoMath.transPoint_tmp2",[&](){return ([&]() -> pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> { float cs_arg0 = pls::game::cs_f32(0x00000000u); float cs_arg1 = pls::game::cs_f32(0x00000000u); float cs_arg2 = pls::game::cs_f32(0x00000000u); return pls::generated::cs_4df100a3a5400345(cs_arg0,cs_arg1,cs_arg2); }());});
cs_8c57e81f204d52a5_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.math.KairoMath.transPoint_tmp3",[&](){return ([&]() -> pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> { return pls::generated::cs_f0250768de698879(); }());});
cs_170e7b174acb7163_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.math.KairoMath.getNormalVector_tmp",[&](){return ([&](){auto cs_initial_array_370=pls::cs::Array<pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f>>::make(2);cs_initial_array_370.at(0)=([&]() -> pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> { return pls::generated::cs_f0250768de698879(); }());cs_initial_array_370.at(1)=([&]() -> pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> { return pls::generated::cs_f0250768de698879(); }());return cs_initial_array_370;}());});
cs_03b4a07e67f87347_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.math.KairoMath.getNormalVector2D_tmp",[&](){return pls::cs::Array<float>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)));});

});}

pls::cs::Array<std::int32_t>& cs_4acead6a6573de00(){cs_init_072159abb3229c71();return cs_4acead6a6573de00_value;}

pls::cs::Array<float>& cs_82d7da65e609f808(){cs_init_072159abb3229c71();return cs_82d7da65e609f808_value;}

pls::cs::Array<pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f>>& cs_170e7b174acb7163(){cs_init_072159abb3229c71();return cs_170e7b174acb7163_value;}

pls::cs::Array<float>& cs_03b4a07e67f87347(){cs_init_072159abb3229c71();return cs_03b4a07e67f87347_value;}

pls::cs::Array<float>& cs_c3805c7c55133d78(){cs_init_072159abb3229c71();return cs_c3805c7c55133d78_value;}

pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f>& cs_36de48daf18a5564(){cs_init_072159abb3229c71();return cs_36de48daf18a5564_value;}

pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f>& cs_8c57e81f204d52a5(){cs_init_072159abb3229c71();return cs_8c57e81f204d52a5_value;}

// M:kairo.unity.math.KairoMath.CheckHitRect(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
bool cs_f686cb5113bffa4f(float v_x1,float v_y1,float v_w1,float v_h1,float v_x2,float v_y2,float v_w2,float v_h2) { cs_init_072159abb3229c71();
{
if (((([&]() -> bool { auto cs_left = v_x1; auto cs_right = ([&]() -> float { auto cs_left = v_x2; auto cs_right = v_w2; return (cs_left + cs_right); }()); return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_y1; auto cs_right = ([&]() -> float { auto cs_left = v_y2; auto cs_right = v_h2; return (cs_left + cs_right); }()); return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() -> float { auto cs_left = v_x1; auto cs_right = v_w1; return (cs_left + cs_right); }()); auto cs_right = v_x2; return (cs_left >= cs_right); }()))) {
return ([&]() -> bool { auto cs_left = ([&]() -> float { auto cs_left = v_y1; auto cs_right = v_h1; return (cs_left + cs_right); }()); auto cs_right = v_y2; return (cs_left >= cs_right); }());
}
return false;
}
}

// M:kairo.unity.math.KairoMath.Pow(System.Int32,System.Int32)
std::int32_t cs_7681d78b1e4df50b(std::int32_t v_x,std::int32_t v_y) { cs_init_072159abb3229c71();
{
std::int32_t v_num_15748 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));
if (([&]() -> bool { auto cs_left = v_y; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = v_x; v_num_15748 = cs_value; return cs_value; }());
}
for (std::int32_t v_i_15806 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); ([&]() -> bool { auto cs_left = v_i_15806; auto cs_right = v_y; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_15806; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_15806 = cs_new; return cs_old; }())) {
([&]() { auto cs_old = v_num_15748; auto cs_rhs = v_x; auto cs_value = pls::cs::mul_i32(cs_old,cs_rhs); v_num_15748 = cs_value; return cs_value; }());
}
return v_num_15748;
}
}
}
