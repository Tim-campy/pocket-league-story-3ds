// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_bcccbac2bf72843d.hpp"
#include "generated/portable_generated_type_ead0ac0906403160.hpp"
namespace pls::game {

void cs_init_bcccbac2bf72843d(){static pls::cs::TypeInitState state;state.run("kairo.unity.m3d4.util3d.FastMath",[](){

});}

// M:kairo.unity.m3d4.util3d.FastMath.Cos(System.Single)
float cs_82e90932e565633e(float v_a) { cs_init_bcccbac2bf72843d();
{
return static_cast<float>(([&]() -> double { auto cs_arg0 = ([&]() -> double { double cs_arg0 = static_cast<double>(v_a); return pls::generated::cs_562cc36bcf840cbd(cs_arg0); }()); return std::cos(cs_arg0); }()));
}
}

// M:kairo.unity.m3d4.util3d.FastMath.Sin(System.Single)
float cs_87ef3d6d0d364edc(float v_a) { cs_init_bcccbac2bf72843d();
{
return static_cast<float>(([&]() -> double { auto cs_arg0 = ([&]() -> double { double cs_arg0 = static_cast<double>(v_a); return pls::generated::cs_562cc36bcf840cbd(cs_arg0); }()); return std::sin(cs_arg0); }()));
}
}
}
