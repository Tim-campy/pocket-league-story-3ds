// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_3af9088680f95fb3.hpp"
#include "portable_generated_type_42d69496680e17fc.hpp"
#include "portable_generated_type_66dbad5679f8ab87.hpp"
namespace pls::generated {

void cs_init_3af9088680f95fb3(){static pls::cs::TypeInitState state;state.run("java.lang.JSystem",[](){

});}

// M:java.lang.JSystem.Arraycopy(System.Object,System.Int32,System.Object,System.Int32,System.Int32)
void cs_d7f58c7ab5ff68b6(pls::cs::Ref<pls::cs::Object> v_src,std::int32_t v_src_position,pls::cs::Ref<pls::cs::Object> v_dst,std::int32_t v_dst_position,std::int32_t v_length) { cs_init_3af9088680f95fb3();
{
([&]() -> void { auto cs_arg0 = pls::cs::array_cast(v_src); auto cs_arg1 = v_src_position; auto cs_arg2 = pls::cs::array_cast(v_dst); auto cs_arg3 = v_dst_position; auto cs_arg4 = v_length; pls::cs::array_copy(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}

// M:java.lang.JSystem.CurrentTimeMillis
std::int64_t cs_55fcf3528750ae31() { cs_init_3af9088680f95fb3();
{
return pls::cs::conv_i64(((([&]() -> pls::cs::TimeSpan { auto cs_left = pls::cs::DateTime::get_UtcNow(); auto cs_right = cs_fa93015d6ad485b9(); return (cs_left - cs_right); }()))).get_TotalMilliseconds());
}
}

// M:java.lang.JSystem.Gc
void cs_ff348c05d6b0416a() { cs_init_3af9088680f95fb3();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_42d69496680e17fc>>(([&]() -> pls::cs::Ref<cs_42d69496680e17fc> { return cs_232fa563e68dcabb(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b8f5dfbc2bf26f5f(cs_receiver); }());
}
}
}
