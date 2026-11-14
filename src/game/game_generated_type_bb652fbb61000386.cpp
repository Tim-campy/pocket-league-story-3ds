// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_bb652fbb61000386.hpp"
#include "generated/portable_generated_type_bb652fbb61000386.hpp"
namespace pls::game {

// M:kairo.unity.util.SecureString.op_Addition(System.String,kairo.unity.util.SecureString)
pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_fa16f7a682ab8343(pls::cs::String v_z,pls::cs::Ref<pls::generated::cs_bb652fbb61000386> v_w) { pls::generated::cs_init_bb652fbb61000386();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureString.op_Addition(System.String,kairo.unity.util.SecureString)",kairo);
{
return pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/SecureString.cs:M:kairo.unity.util.SecureString.op_Addition(System.String,kairo.unity.util.SecureString):744",([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = pls::source_allocations::completed("concat_call","src/KairoLibrary/kairo/unity/util/SecureString.cs:M:kairo.unity.util.SecureString.op_Addition(System.String,kairo.unity.util.SecureString):761",pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_z; auto cs_arg1 = ([&]() { auto cs_value = v_w; return pls::generated::cs_f1e3fe1dceee44d7(cs_value); }()); return pls::cs::String::concat(cs_arg0,cs_arg1); }());})); return pls::generated::cs_ede7ead54c734d4c(cs_arg0); }()));
}
}
}
}
