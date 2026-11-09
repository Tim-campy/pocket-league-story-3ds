// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
#include "portable_generated_type_a0dc211eb3feb56d.hpp"
namespace pls::generated {

template<typename T_T>
struct cs_51222df74ac70bab : pls::cs::Object, cs_a0dc211eb3feb56d {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_51222df74ac70bab)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target)||target==typeid(cs_a0dc211eb3feb56d);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="Equals")return "M:java.util.Vector`1.Equals(System.Object)";if(slot=="ToString")return "M:java.util.Vector`1.ToString";if(slot=="cs_virtual_60122bb6c899278e")return "M:java.util.Vector`1.get_List";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return std::string("java.util.Vector`1[")+pls::cs::managed_type_name_traits<T_T>::name()+"]";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::List<pls::cs::Ref<pls::cs::Object>> cs_056e387f40164bd6{};
virtual bool Equals(pls::cs::Ref<pls::cs::Object> const& v_obj);
virtual pls::cs::String ToString();
virtual pls::cs::List<pls::cs::Ref<pls::cs::Object>> cs_virtual_60122bb6c899278e();
};

template<typename T_T>
pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_946b70ecd88b233a();

template<typename T_T>
void cs_946b70ecd88b233a_init(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this);

template<typename T_T>
void cs_56f64dc33bbaf552(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this,T_T v_obj);

template<typename T_T>
void cs_84f04a1c6da0e1ea(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this,T_T v_obj);

template<typename T_T>
void cs_ccc6918433418e24(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this);

template<typename T_T>
T_T cs_46529d25e14daec6(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this,std::int32_t v_index);

template<typename T_T>
bool cs_5456805d05dd254d(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this,pls::cs::Ref<pls::cs::Object> v_obj);

template<typename T_T>
T_T cs_0d26c45ae3c275d4(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this);

template<typename T_T>
pls::cs::List<pls::cs::Ref<pls::cs::Object>> cs_aacded9f4fa90723(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this);

template<typename T_T>
std::int32_t cs_3a643b1c499c91f2(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this,T_T v_elem);

template<typename T_T>
void cs_b9d1ea00d1f689ef(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this,T_T v_obj,std::int32_t v_index);

template<typename T_T>
bool cs_391891c911ef6b0a(pls::cs::Ref<cs_51222df74ac70bab<T_T>> v_a,pls::cs::Ref<cs_f8b20a4d1d9d695f> v_b);

template<typename T_T>
bool cs_9739d0439e7c2868(pls::cs::Ref<cs_51222df74ac70bab<T_T>> v_a,pls::cs::Ref<cs_f8b20a4d1d9d695f> v_b);

template<typename T_T>
void cs_54587d7da8ff8dbc(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this);

template<typename T_T>
bool cs_f00b3f34dd8da63e(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this,T_T v_obj);

template<typename T_T>
void cs_8327bff35061e212(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this,std::int32_t v_index);

template<typename T_T>
void cs_221133265c339075(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this,T_T v_obj,std::int32_t v_index);

template<typename T_T>
std::int32_t cs_c55367423dbb79a1(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this);

template<typename T_T>
pls::cs::String cs_43bff43663390cb7(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this);
}
