// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
#include "portable_generated_type_e7a5499b363ef51b.hpp"
namespace pls::generated {

struct cs_3b41638e424b9ee0 : cs_e7a5499b363ef51b {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_3b41638e424b9ee0)||target==typeid(cs_e7a5499b363ef51b)||cs_e7a5499b363ef51b::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_bb7347310506b971")return "M:java.io.ByteArrayInputStream.Available";return cs_e7a5499b363ef51b::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "java.io.ByteArrayInputStream";}
std::string managed_type_name()const override{return source_managed_type_name();}
virtual std::int32_t cs_virtual_bb7347310506b971();
};

void cs_init_3b41638e424b9ee0();

pls::cs::Ref<cs_3b41638e424b9ee0> cs_c3a84083a67ee263(pls::cs::Array<std::uint8_t> v_data);

void cs_c3a84083a67ee263_init(pls::cs::Ref<cs_3b41638e424b9ee0> cs_this,pls::cs::Array<std::uint8_t> v_data);

std::int32_t cs_67338973d6c3b7c6(pls::cs::Ref<cs_3b41638e424b9ee0> cs_this);
}
