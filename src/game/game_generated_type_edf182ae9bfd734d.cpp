// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_edf182ae9bfd734d.hpp"
#include "generated/portable_generated_type_edf182ae9bfd734d.hpp"
namespace pls::game {

static pls::cs::Array<std::int64_t> cs_6e88f492355c58fb_value{};

pls::cs::Array<std::int64_t>& cs_6e88f492355c58fb(){pls::generated::cs_init_edf182ae9bfd734d();return cs_6e88f492355c58fb_value;}

// M:kairo.unity.io.AssetReader.SetSecurity(System.Int64[],System.Boolean)
void cs_815bf8a38e0fb5d2(pls::cs::Array<std::int64_t> v_crcTable,bool v_encrypt) { pls::generated::cs_init_edf182ae9bfd734d();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.AssetReader.SetSecurity(System.Int64[],System.Boolean)",kairo);
{
([&]() { auto cs_value = v_crcTable; cs_6e88f492355c58fb() = cs_value; return cs_value; }());
([&]() { auto cs_value = v_encrypt; pls::generated::cs_8491f3974fd931ce() = cs_value; return cs_value; }());
}
}
}
}
