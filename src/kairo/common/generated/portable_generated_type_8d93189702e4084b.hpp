// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
#include "portable_generated_type_e7a5499b363ef51b.hpp"
namespace pls::generated {

struct cs_8d93189702e4084b : cs_e7a5499b363ef51b {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_8d93189702e4084b)||target==typeid(cs_e7a5499b363ef51b)||cs_e7a5499b363ef51b::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_4546aef6e4846446")return "M:java.io.DataInputStream.Close";return cs_e7a5499b363ef51b::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "java.io.DataInputStream";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<pls::cs::BinaryReader> cs_783a5dc8c7385bc4{};
virtual void cs_virtual_4546aef6e4846446();
};

void cs_init_8d93189702e4084b();

pls::cs::Ref<cs_8d93189702e4084b> cs_606370a03155bf34(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream);

void cs_606370a03155bf34_init(pls::cs::Ref<cs_8d93189702e4084b> cs_this,pls::cs::Ref<cs_e7a5499b363ef51b> v_stream);

void cs_5b229bc3548b08c7(pls::cs::Ref<cs_8d93189702e4084b> cs_this);

std::int32_t cs_d79f36f4078735fb(pls::cs::Ref<cs_8d93189702e4084b> cs_this);
}
