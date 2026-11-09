// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {

struct cs_922b87749168eb15 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_922b87749168eb15)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.util.Compressor+Node";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<cs_922b87749168eb15> cs_51d08ca6eed04eda{};
pls::cs::Ref<cs_922b87749168eb15> cs_8e6817a8d663aa67{};
pls::cs::Ref<cs_922b87749168eb15> cs_0d73049ca9cd4bf6{};
std::int32_t cs_5b846f0fd1fb1aa0{};
std::int32_t cs_57d6fb57c6af0de7{};
};

void cs_init_922b87749168eb15();

pls::cs::Ref<cs_922b87749168eb15> cs_25fc81be857429d9();

void cs_25fc81be857429d9_init(pls::cs::Ref<cs_922b87749168eb15> cs_this);

pls::cs::Ref<cs_922b87749168eb15> cs_87ec71db506764c9(pls::cs::Ref<cs_922b87749168eb15> v_parent,pls::cs::Ref<cs_922b87749168eb15> v_left,pls::cs::Ref<cs_922b87749168eb15> v_right,std::int32_t v_weight,std::int32_t v_value);

void cs_87ec71db506764c9_init(pls::cs::Ref<cs_922b87749168eb15> cs_this,pls::cs::Ref<cs_922b87749168eb15> v_parent,pls::cs::Ref<cs_922b87749168eb15> v_left,pls::cs::Ref<cs_922b87749168eb15> v_right,std::int32_t v_weight,std::int32_t v_value);
}
