// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
#include "portable_generated_type_ea324a0bbfe717fe.hpp"
namespace pls::generated {

struct cs_fb60578b3098a284 : cs_ea324a0bbfe717fe {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_fb60578b3098a284)||target==typeid(cs_ea324a0bbfe717fe)||cs_ea324a0bbfe717fe::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_0d912191800a0b86")return "M:java.io.ByteArrayOutputStream.Close";if(slot=="ToString")return "M:java.io.ByteArrayOutputStream.ToString";return cs_ea324a0bbfe717fe::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "java.io.ByteArrayOutputStream";}
std::string managed_type_name()const override{return source_managed_type_name();}
virtual void cs_virtual_0d912191800a0b86();
virtual pls::cs::String ToString();
};

void cs_init_fb60578b3098a284();

pls::cs::Ref<cs_fb60578b3098a284> cs_10f86e0fa81e1b57();

void cs_10f86e0fa81e1b57_init(pls::cs::Ref<cs_fb60578b3098a284> cs_this);

void cs_939f1d17e9442852(pls::cs::Ref<cs_fb60578b3098a284> cs_this);

pls::cs::Array<std::uint8_t> cs_c875afd29ab2966c(pls::cs::Ref<cs_fb60578b3098a284> cs_this);

pls::cs::String cs_576830aae6220bdb(pls::cs::Ref<cs_fb60578b3098a284> cs_this);
}
