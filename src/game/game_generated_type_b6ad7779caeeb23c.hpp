// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_b6ad7779caeeb23c : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_b6ad7779caeeb23c)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="ToString")return "M:kairo.unity.system.GameDataRecord.ToString";if(slot=="GetHashCode")return "M:kairo.unity.system.GameDataRecord.GetHashCode";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.system.GameDataRecord";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> cs_a401daa035e0faf4{};
pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> cs_db21a4a60995105d{};
pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> cs_9ae60e1c180bff03{};
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_de4cdc41e3b9a730{};
bool cs_775a9b4739b7acd4{};
bool cs_c6b39a5b64ca017b{};
virtual pls::cs::String ToString();
virtual std::int32_t GetHashCode();
};

void cs_init_b6ad7779caeeb23c();

pls::cs::Ref<cs_b6ad7779caeeb23c> cs_90ee7811a5836c91();

void cs_90ee7811a5836c91_init(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this);

pls::cs::Ref<cs_b6ad7779caeeb23c> cs_a5fcfa14b1e244ef(std::int32_t v_number,bool v_insert);

void cs_a5fcfa14b1e244ef_init(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this,std::int32_t v_number,bool v_insert);

pls::cs::Ref<cs_b6ad7779caeeb23c> cs_2c9eb5964aff96b8(std::int32_t v_friendId,std::int32_t v_number,bool v_insert);

void cs_2c9eb5964aff96b8_init(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this,std::int32_t v_friendId,std::int32_t v_number,bool v_insert);

void cs_88b2f71bcc6dfbb4(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this,pls::cs::String v_name,pls::cs::Array<std::uint8_t> v_data);

void cs_e33b1dbd8b024056(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this,pls::cs::String v_name,pls::cs::Array<std::uint8_t> v_data);

void cs_4b07aac51b58d37f(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this,pls::cs::String v_name,std::int64_t v_value);

void cs_1c90a1b23419daad(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this,pls::cs::String v_name,pls::cs::String v_value);

void cs_ae95295deef710ce(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this,pls::cs::String v_name);

pls::cs::Ref<cs_b6ad7779caeeb23c> cs_b00e39372198ba93(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this);

pls::cs::Ref<cs_b6ad7779caeeb23c> cs_3d477e91fe6d5e5e(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this,bool v_to_set);

pls::cs::Array<std::uint8_t> cs_ba240a218e1d699e(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this,pls::cs::String v_name);

std::int32_t cs_4c82a6900ba11d6b(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this);

std::int32_t cs_02a7dd0b0ae9540d(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this);

std::int32_t cs_ef9be39d8956d084(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this);

pls::cs::String cs_25f8eaa78d9b4e98(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this,pls::cs::String v_name);

std::int64_t cs_db199ac474798a83(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this,pls::cs::String v_name);

void cs_962a524c84eef9ee(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);

pls::cs::String cs_27ff635ad5111b5f(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this);
}
