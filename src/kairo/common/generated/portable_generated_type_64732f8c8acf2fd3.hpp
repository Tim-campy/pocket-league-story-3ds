// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {

struct cs_64732f8c8acf2fd3 : pls::cs::ExceptionObject {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_64732f8c8acf2fd3)||target==typeid(pls::cs::ExceptionObject)||pls::cs::ExceptionObject::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::ExceptionObject::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "java.io.EOFException";}
std::string managed_type_name()const override{return source_managed_type_name();}
};

void cs_init_64732f8c8acf2fd3();

pls::cs::Ref<cs_64732f8c8acf2fd3> cs_a8c0bbab413528f7(pls::cs::String v_s);

void cs_a8c0bbab413528f7_init(pls::cs::Ref<cs_64732f8c8acf2fd3> cs_this,pls::cs::String v_s);
}
