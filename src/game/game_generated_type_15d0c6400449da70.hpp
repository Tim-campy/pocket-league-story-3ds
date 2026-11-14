// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_500cf5d961e2c3a4.hpp"
namespace pls::game {

struct cs_15d0c6400449da70 : pls::kairo::MonoBehaviour, cs_500cf5d961e2c3a4 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_15d0c6400449da70)||target==typeid(pls::kairo::MonoBehaviour)||pls::kairo::MonoBehaviour::source_reference_assignable(target)||target==typeid(cs_500cf5d961e2c3a4);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_a0d307e27d51aaf6")return "M:system.tapjoy.ui.Tapjoy.CallBalance";return pls::kairo::MonoBehaviour::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.tapjoy.ui.Tapjoy";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_1a5feededa92c1b2{};
pls::cs::String cs_5bc9b2df362024ae{};
pls::cs::Ref<cs_f8053a3d49df91b7> cs_9defed681d96cc9c{};
bool cs_d362654ae6de3a0d{};
bool cs_7eef6a8482a8d635{};
bool cs_c8dbb157db9fb45c{};
std::int32_t cs_5c5946093936fbb3{};
bool cs_e58caa6febbceffa{};
std::int32_t cs_4bf3528912e8c804{};
virtual void cs_virtual_a0d307e27d51aaf6();
};

void cs_init_15d0c6400449da70();

pls::cs::Ref<cs_15d0c6400449da70>& cs_11c677d992410d89();

pls::cs::Ref<cs_15d0c6400449da70> cs_5b5371f22489a240(pls::cs::String v_key,pls::cs::String v_offerwallName,bool v_log);

void cs_5b5371f22489a240_init(pls::cs::Ref<cs_15d0c6400449da70> cs_this,pls::cs::String v_key,pls::cs::String v_offerwallName,bool v_log);

void cs_fb7f8e8a914f6223(pls::cs::Ref<cs_15d0c6400449da70> cs_this,std::int32_t v_add);

void cs_8793f32da1f89166(pls::cs::Ref<cs_15d0c6400449da70> cs_this);

std::int32_t cs_d5c9c1b2a1b2b835(pls::cs::Ref<cs_15d0c6400449da70> cs_this);

pls::cs::Ref<cs_15d0c6400449da70> cs_0d528e1ef98e7412();

std::int32_t cs_9a09b45425139eed(pls::cs::Ref<cs_15d0c6400449da70> cs_this);

void cs_210845d7cf3cf398(pls::cs::Ref<cs_15d0c6400449da70> cs_this);

void cs_da0ffa209848b288(pls::cs::Ref<cs_15d0c6400449da70> cs_this);

void cs_a4556f0291f3c16b(pls::cs::Ref<cs_15d0c6400449da70> cs_this,pls::cs::String v_s);

void cs_df368bf0f0331728(pls::cs::Ref<cs_15d0c6400449da70> cs_this);

bool cs_775389b720c542d7(pls::cs::Ref<cs_15d0c6400449da70> cs_this);

void cs_e5be24181ef4d4c5(pls::cs::Ref<cs_15d0c6400449da70> cs_this);

void cs_a483fff7ac30a075(pls::cs::Ref<cs_15d0c6400449da70> cs_this,std::int32_t v_sub);
}
