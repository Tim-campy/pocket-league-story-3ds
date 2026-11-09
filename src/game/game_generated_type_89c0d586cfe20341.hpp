// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_89c0d586cfe20341 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_89c0d586cfe20341)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="Equals")return "M:java.lang.JThread.Equals(System.Object)";if(slot=="GetHashCode")return "M:java.lang.JThread.GetHashCode";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "java.lang.JThread";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<pls::cs::Thread> cs_a54a7772b0af70eb{};
std::int32_t cs_6480f04c9d401dc1{};
virtual bool Equals(pls::cs::Ref<pls::cs::Object> const& v_obj);
virtual std::int32_t GetHashCode();
};

void cs_init_89c0d586cfe20341();

pls::cs::List<pls::cs::Ref<cs_89c0d586cfe20341>>& cs_110a219403a49c59();

pls::cs::Ref<cs_89c0d586cfe20341> cs_f8a8e5cab3297e6d();

void cs_f8a8e5cab3297e6d_init(pls::cs::Ref<cs_89c0d586cfe20341> cs_this);

pls::cs::Ref<cs_89c0d586cfe20341> cs_bab91f84bee2e3d9(pls::cs::Ref<cs_4c145fe8f008af05> v_target);

void cs_bab91f84bee2e3d9_init(pls::cs::Ref<cs_89c0d586cfe20341> cs_this,pls::cs::Ref<cs_4c145fe8f008af05> v_target);

pls::cs::Ref<cs_89c0d586cfe20341> cs_6ac8ad3def9eea9e(pls::cs::Delegate<void()> v_start);

void cs_6ac8ad3def9eea9e_init(pls::cs::Ref<cs_89c0d586cfe20341> cs_this,pls::cs::Delegate<void()> v_start);

pls::cs::Ref<cs_89c0d586cfe20341> cs_c84940406f4f068f();

bool cs_4b78e5289d2c84c2(pls::cs::Ref<cs_89c0d586cfe20341> cs_this,pls::cs::Ref<pls::cs::Object> v_obj);

std::int32_t cs_d33c547c634b2bdf(pls::cs::Ref<cs_89c0d586cfe20341> cs_this);

bool cs_f0878a49dfa6a661(pls::cs::Ref<cs_89c0d586cfe20341> v_obj1,pls::cs::Ref<cs_89c0d586cfe20341> v_obj2);

bool cs_dfac0766ed9ac2a3(pls::cs::Ref<cs_89c0d586cfe20341> v_obj1,pls::cs::Ref<cs_89c0d586cfe20341> v_obj2);

void cs_26244a61d0d2e16c(std::int64_t v_millis);

void cs_b9636031b790b537(pls::cs::Ref<cs_89c0d586cfe20341> cs_this);

void cs_012506043193cb2a();
}
