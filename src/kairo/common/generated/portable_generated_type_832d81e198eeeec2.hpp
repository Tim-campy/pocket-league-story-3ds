// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
#include "portable_generated_type_ea324a0bbfe717fe.hpp"
namespace pls::generated {

struct cs_832d81e198eeeec2 : cs_ea324a0bbfe717fe {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_832d81e198eeeec2)||target==typeid(cs_ea324a0bbfe717fe)||cs_ea324a0bbfe717fe::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_0d912191800a0b86")return "M:kairo.unity.io.ByteListOutputStream.Close";if(slot=="cs_virtual_eeffa75bcd0cd73d")return "M:kairo.unity.io.ByteListOutputStream.Write(System.Byte[],System.Int32,System.Int32)";if(slot=="cs_virtual_109456b2dd9e2d77")return "M:kairo.unity.io.ByteListOutputStream.Write(System.Byte[])";if(slot=="cs_virtual_a2a7e1a6575cae4c")return "M:kairo.unity.io.ByteListOutputStream.Write(System.Int32)";if(slot=="cs_virtual_2adf924bd0d7d65a")return "M:kairo.unity.io.ByteListOutputStream.Flush";return cs_ea324a0bbfe717fe::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.io.ByteListOutputStream";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Array<pls::cs::Array<std::uint8_t>> cs_dc88a962e561cf72{};
std::int32_t cs_96bf466f63c1692d{};
std::int32_t cs_565b1ab091133717{};
std::int32_t cs_bd6a014dfd6a30e7{};
virtual void cs_virtual_0d912191800a0b86();
virtual void cs_virtual_eeffa75bcd0cd73d(pls::cs::Array<std::uint8_t> v_b,std::int32_t v_off,std::int32_t v_len);
virtual void cs_virtual_109456b2dd9e2d77(pls::cs::Array<std::uint8_t> v_b);
virtual void cs_virtual_a2a7e1a6575cae4c(std::int32_t v_b);
virtual void cs_virtual_2adf924bd0d7d65a();
};

void cs_init_832d81e198eeeec2();

void cs_2c474068bf2bc8ac(pls::cs::Ref<cs_832d81e198eeeec2> cs_this);

void cs_9a08c52e842b2bca(pls::cs::Ref<cs_832d81e198eeeec2> cs_this,std::int32_t v_listNum);

pls::cs::Ref<cs_832d81e198eeeec2> cs_62c87c20be2abf48();

void cs_62c87c20be2abf48_init(pls::cs::Ref<cs_832d81e198eeeec2> cs_this);

void cs_ee6ef7b3c5c52f4e(pls::cs::Ref<cs_832d81e198eeeec2> cs_this);

void cs_5e27bc3565f1a832(pls::cs::Ref<cs_832d81e198eeeec2> cs_this);

std::int32_t cs_de90486df5eaa436(pls::cs::Ref<cs_832d81e198eeeec2> cs_this);

pls::cs::Array<std::uint8_t> cs_03248748e929fa37(pls::cs::Ref<cs_832d81e198eeeec2> cs_this,std::int32_t v_index,std::int32_t v_length,pls::cs::Array<std::uint8_t> v_dst);

pls::cs::Array<std::uint8_t> cs_a98d1e0db662120b(pls::cs::Ref<cs_832d81e198eeeec2> cs_this,std::int32_t v_index,std::int32_t v_length);

void cs_049fbfd8c1e94864(pls::cs::Ref<cs_832d81e198eeeec2> cs_this,pls::cs::Array<std::uint8_t> v_b,std::int32_t v_off,std::int32_t v_len);

void cs_43cbea7ccad9d4d6(pls::cs::Ref<cs_832d81e198eeeec2> cs_this,pls::cs::Array<std::uint8_t> v_b);

void cs_f1d0001066598458(pls::cs::Ref<cs_832d81e198eeeec2> cs_this,std::int32_t v_b);
}
