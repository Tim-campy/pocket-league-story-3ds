// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_130519c307b90f46.hpp"
#include "game_generated_type_381ecfc7910ffbab.hpp"
#include "generated/portable_generated_type_3af9088680f95fb3.hpp"
namespace pls::game {

static bool cs_0aabbac1b4cc00d9_value{};

void cs_init_130519c307b90f46(){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(cs_0aabbac1b4cc00d9_value,visitor);});static pls::cs::TypeInitState state;state.run("kairo.unity.util.ClockTime",[](){

});}

bool& cs_0aabbac1b4cc00d9(){cs_init_130519c307b90f46();return cs_0aabbac1b4cc00d9_value;}

// M:kairo.unity.util.ClockTime.Destroy
void cs_252b02044b3d6557() { cs_init_130519c307b90f46();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.ClockTime.Destroy",kairo);
{

}
}
}

// M:kairo.unity.util.ClockTime.GetTime
std::int64_t cs_e285ad46e15aa69f() { cs_init_130519c307b90f46();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.ClockTime.GetTime",kairo);
{
if ((!(cs_0aabbac1b4cc00d9_value))) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());});
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());});
}
}
}

// M:kairo.unity.util.ClockTime.SetTime(System.Int64,System.Int32)
void cs_958a7158ea6fe576(std::int64_t v_time,std::int32_t v_precision) { cs_init_130519c307b90f46();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.ClockTime.SetTime(System.Int64,System.Int32)",kairo);
{
([&]() -> void { std::int64_t cs_arg0 = v_time; std::int32_t cs_arg1 = v_precision; cs_facff58abc6dd9db(cs_arg0,cs_arg1); }());
([&]() { auto cs_value = true; cs_0aabbac1b4cc00d9_value = cs_value; return cs_value; }());
}
}
}
}
