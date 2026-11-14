// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_1ab688350081022a : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_1ab688350081022a)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.system.lineup.ui.LineupManager";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_fa8eb5510dacdd09{};
pls::cs::Array<pls::cs::Ref<cs_fd683372658feff4>> cs_02dbac76cf838af6{};
pls::cs::Array<std::int32_t> cs_f51be28da9a279d7{};
pls::cs::Array<pls::cs::Ref<cs_fd683372658feff4>> cs_107cdef48659996d{};
};

void cs_init_1ab688350081022a();

pls::cs::Ref<cs_1ab688350081022a>& cs_eb626cd1b0f88bfd();

pls::cs::Ref<cs_1ab688350081022a> cs_c91e4943a0e046f2();

void cs_c91e4943a0e046f2_init(pls::cs::Ref<cs_1ab688350081022a> cs_this);

bool cs_e8395e9d72ce688b(pls::cs::Ref<cs_1ab688350081022a> cs_this);

bool cs_8792fac7b186047a(pls::cs::String v_key);

pls::cs::Array<std::uint8_t> cs_da3162f01de6e1eb(pls::cs::String v_key);

pls::cs::Array<pls::cs::Ref<cs_fd683372658feff4>> cs_39cb7b83aa99de82(pls::cs::Ref<cs_1ab688350081022a> cs_this);

void cs_843876287e794125(pls::cs::Ref<cs_1ab688350081022a> cs_this,pls::cs::Array<std::uint8_t> v_data);

void cs_c8bf4745da1fd956(pls::cs::String v_key,pls::cs::Array<std::uint8_t> v_data);

void cs_aff45949a4a776ab(pls::cs::Ref<cs_1ab688350081022a> cs_this,std::int32_t v_num);

void cs_04c28d155861f704(pls::cs::Ref<cs_1ab688350081022a> cs_this);

pls::cs::Array<std::uint8_t> cs_cb1becc75b26486d(pls::cs::Ref<cs_1ab688350081022a> cs_this);
}
