// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_b08d770c239489bf.hpp"
namespace pls::game {

struct cs_169021fb033627ed : cs_b08d770c239489bf {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_169021fb033627ed)||target==typeid(cs_b08d770c239489bf)||cs_b08d770c239489bf::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return cs_b08d770c239489bf::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "data.TeamData";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_7aa6f2bebc901340{};
pls::cs::String cs_e5cc068ac3534a8a{};
std::int32_t cs_27142d60f3e22cb6{};
std::int32_t cs_873e4779b0d7795e{};
pls::cs::String cs_034010affce9cfb9{};
std::int32_t cs_1574974c1857cd04{};
std::int32_t cs_1568f168ecdeb107{};
std::int32_t cs_1b1ce6676390e3c6{};
std::int32_t cs_4120c353f39753d8{};
pls::cs::Array<std::int32_t> cs_d502e9c14d15584d{};
pls::cs::Array<std::int32_t> cs_c1a3d1d998bc54ed{};
std::int32_t cs_ea0fbe8c5a94a9a4{};
std::int32_t cs_cfb5eba4ca24814d{};
std::int32_t cs_67eaa5d1fcf2cc61{};
std::int32_t cs_00df58f41a3c9037{};
std::int32_t cs_d39eda07e08589e3{};
std::int32_t cs_6447513a93ba11e1{};
std::int32_t cs_c04f802dc97b0211{};
pls::cs::Array<pls::cs::String> cs_f8584e3ce1eada9e{};
pls::cs::Array<std::int32_t> cs_2caf9b1ae732acaf{};
pls::cs::Array<std::int32_t> cs_7263bb08df0836b2{};
pls::cs::Array<std::int32_t> cs_442de9da7557944d{};
};

void cs_init_169021fb033627ed();

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_992ff561c0e6aaeb();

pls::cs::Ref<cs_169021fb033627ed> cs_db8a7eae181558d7();

void cs_db8a7eae181558d7_init(pls::cs::Ref<cs_169021fb033627ed> cs_this);

pls::cs::Ref<cs_169021fb033627ed> cs_d3708c7ee2884e7d(pls::cs::String v_src);

void cs_d3708c7ee2884e7d_init(pls::cs::Ref<cs_169021fb033627ed> cs_this,pls::cs::String v_src);

void cs_28b3e7b1b8b25387(pls::cs::Ref<cs_169021fb033627ed> cs_this,std::int32_t v_addEva);

void cs_8758aeee74c0e7c3(pls::cs::Ref<cs_169021fb033627ed> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);

pls::cs::String cs_c30fd7846a0f0ca1(pls::cs::Ref<cs_169021fb033627ed> cs_this);

void cs_32b9375081dbeb02(pls::cs::Ref<cs_169021fb033627ed> cs_this);

void cs_da3f05135aea10c6(pls::cs::Ref<cs_169021fb033627ed> cs_this,pls::cs::String v_src);

void cs_3e629bca006b1a29(pls::cs::Ref<cs_169021fb033627ed> cs_this);

void cs_dbc8b1e682acfdab(pls::cs::Ref<cs_169021fb033627ed> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);

void cs_41ff22a9db46ad0a(pls::cs::Ref<cs_169021fb033627ed> cs_this,std::int32_t v_getScore,bool v_isUserTeam);

void cs_59664e8fb47e57ec(pls::cs::Ref<cs_b68aa9c3dd5cf14c> v_league_data,pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_out_ary1,pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_out_ary2);

void cs_5850db6e1f3dd4fe(pls::cs::Ref<cs_169021fb033627ed> cs_this);
}
