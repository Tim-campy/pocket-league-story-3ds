// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "generated/portable_generated_type_bd164c3c94a49e2a.hpp"
namespace pls::game {

struct cs_91b71e223c6a5085 : pls::generated::cs_bd164c3c94a49e2a {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_91b71e223c6a5085)||target==typeid(pls::generated::cs_bd164c3c94a49e2a)||pls::generated::cs_bd164c3c94a49e2a::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::generated::cs_bd164c3c94a49e2a::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.util.SecureByteArray";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Array<std::uint8_t> cs_b80b91ae07d6fc6c{};
pls::cs::Array<std::uint8_t> cs_19f4d4bf8904a68d{};
pls::cs::Array<std::uint8_t> cs_c5d0d0adcc5f397f{};
std::int32_t cs_e3c1a6fbdae10a0b{};
};

void cs_init_91b71e223c6a5085();

pls::cs::Ref<cs_91b71e223c6a5085> cs_541b6d91fef6dae9(pls::cs::Array<std::uint8_t> v_ary);

void cs_541b6d91fef6dae9_init(pls::cs::Ref<cs_91b71e223c6a5085> cs_this,pls::cs::Array<std::uint8_t> v_ary);

std::uint8_t cs_645fbfa34482238c(pls::cs::Ref<cs_91b71e223c6a5085> cs_this,std::uint8_t v_value);

void cs_1a4b5882de95a07e(pls::cs::Ref<cs_91b71e223c6a5085> cs_this,pls::cs::Array<std::uint8_t> v_from,pls::cs::Array<std::uint8_t> v_to);

pls::cs::Array<std::uint8_t> cs_1c987cdcc36f7bac(pls::cs::Ref<cs_91b71e223c6a5085> cs_this);

pls::cs::Ref<cs_91b71e223c6a5085> cs_c9412b840f7da0bf(pls::cs::Ref<cs_91b71e223c6a5085> cs_this,pls::cs::Array<std::uint8_t> v_ary);

pls::cs::Array<std::uint8_t> cs_fe020e7913ef1e99(pls::cs::Ref<cs_91b71e223c6a5085> v_ary);

pls::cs::Ref<cs_91b71e223c6a5085> cs_afd97ff1c93f8bf4(pls::cs::Array<std::uint8_t> v_ary);
}
