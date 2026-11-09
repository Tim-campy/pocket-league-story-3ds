// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {

struct cs_ea324a0bbfe717fe : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_ea324a0bbfe717fe)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_0d912191800a0b86")return "M:java.io.OutputStream.Close";if(slot=="cs_virtual_2adf924bd0d7d65a")return "M:java.io.OutputStream.Flush";if(slot=="cs_virtual_a2a7e1a6575cae4c")return "M:java.io.OutputStream.Write(System.Int32)";if(slot=="cs_virtual_109456b2dd9e2d77")return "M:java.io.OutputStream.Write(System.Byte[])";if(slot=="cs_virtual_eeffa75bcd0cd73d")return "M:java.io.OutputStream.Write(System.Byte[],System.Int32,System.Int32)";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "java.io.OutputStream";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<pls::cs::Stream> cs_f48613bc1c6327b8{};
virtual void cs_virtual_0d912191800a0b86();
virtual void cs_virtual_2adf924bd0d7d65a();
virtual void cs_virtual_a2a7e1a6575cae4c(std::int32_t v_b);
virtual void cs_virtual_109456b2dd9e2d77(pls::cs::Array<std::uint8_t> v_b);
virtual void cs_virtual_eeffa75bcd0cd73d(pls::cs::Array<std::uint8_t> v_b,std::int32_t v_offset,std::int32_t v_len);
};

void cs_init_ea324a0bbfe717fe();

pls::cs::Ref<cs_ea324a0bbfe717fe> cs_60f0f6dd217b8877();

void cs_60f0f6dd217b8877_init(pls::cs::Ref<cs_ea324a0bbfe717fe> cs_this);

void cs_0d912191800a0b86(pls::cs::Ref<cs_ea324a0bbfe717fe> cs_this);

void cs_2adf924bd0d7d65a(pls::cs::Ref<cs_ea324a0bbfe717fe> cs_this);

void cs_eeffa75bcd0cd73d(pls::cs::Ref<cs_ea324a0bbfe717fe> cs_this,pls::cs::Array<std::uint8_t> v_b,std::int32_t v_offset,std::int32_t v_len);

void cs_109456b2dd9e2d77(pls::cs::Ref<cs_ea324a0bbfe717fe> cs_this,pls::cs::Array<std::uint8_t> v_b);

void cs_a2a7e1a6575cae4c(pls::cs::Ref<cs_ea324a0bbfe717fe> cs_this,std::int32_t v_b);
}
