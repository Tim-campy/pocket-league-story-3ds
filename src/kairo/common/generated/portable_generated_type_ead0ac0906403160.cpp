// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_ead0ac0906403160.hpp"
namespace pls::generated {

void cs_init_ead0ac0906403160(){static pls::cs::TypeInitState state;state.run("java.lang.JMath",[](){

});}

// M:java.lang.JMath.Abs(System.Int32)
std::int32_t cs_2913a1bf47038615(std::int32_t v_a) { cs_init_ead0ac0906403160();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JMath.Abs(System.Int32)",kairo);
{
if (([&]() -> bool { auto cs_left = v_a; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
return pls::cs::neg_i32(v_a);
}
return v_a;
}
}
}

// M:java.lang.JMath.Abs(System.Int64)
std::int64_t cs_6e4be89b36f8db0c(std::int64_t v_a) { cs_init_ead0ac0906403160();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JMath.Abs(System.Int64)",kairo);
{
if (([&]() -> bool { auto cs_left = v_a; auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); return (cs_left < cs_right); }())) {
return pls::cs::neg_i64(v_a);
}
return v_a;
}
}
}

// M:java.lang.JMath.Abs(System.Single)
float cs_918aee83eb36fe79(float v_a) { cs_init_ead0ac0906403160();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JMath.Abs(System.Single)",kairo);
{
if ((!((([&]() -> bool { auto cs_left = static_cast<double>(v_a); auto cs_right = static_cast<double>(pls::generated::cs_f32(0x00000000u)); return (cs_left >= cs_right); }()))))) {
return static_cast<float>((-((v_a))));
}
return static_cast<float>(v_a);
}
}
}

// M:java.lang.JMath.Cos(System.Double)
double cs_3e87ea623e33347e(double v_a) { cs_init_ead0ac0906403160();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JMath.Cos(System.Double)",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> double { auto cs_arg0 = v_a; return std::cos(cs_arg0); }());});
}
}
}

// M:java.lang.JMath.Sin(System.Double)
double cs_458102b5e16b47b0(double v_a) { cs_init_ead0ac0906403160();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JMath.Sin(System.Double)",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> double { auto cs_arg0 = v_a; return std::sin(cs_arg0); }());});
}
}
}

// M:java.lang.JMath.Sqrt(System.Double)
double cs_6d9bf6060a3effca(double v_a) { cs_init_ead0ac0906403160();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JMath.Sqrt(System.Double)",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> double { auto cs_arg0 = v_a; return std::sqrt(cs_arg0); }());});
}
}
}

// M:java.lang.JMath.ToRadians(System.Double)
double cs_562cc36bcf840cbd(double v_angdeg) { cs_init_ead0ac0906403160();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JMath.ToRadians(System.Double)",kairo);
{
return ([&]() -> double { auto cs_left = ([&]() -> double { auto cs_left = v_angdeg; auto cs_right = pls::generated::cs_f64(0x400921fb54442d18ull); return (cs_left * cs_right); }()); auto cs_right = pls::generated::cs_f64(0x4066800000000000ull); return (cs_left / cs_right); }());
}
}
}
}
