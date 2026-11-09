// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {

template<typename T_T>
struct cs_67cd241ab51652f1 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_67cd241ab51652f1)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="GetHashCode")return "M:kairo.unity.util.FastVector`1.GetHashCode";if(slot=="ToString")return "M:kairo.unity.util.FastVector`1.ToString";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return std::string("kairo.unity.util.FastVector`1[")+pls::cs::managed_type_name_traits<T_T>::name()+"]";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_f025835c3cf7842a{};
std::int32_t cs_965b7a32b9c12921{};
pls::cs::Array<T_T> cs_6d298c7f8339f4aa{};
std::int32_t cs_c59f41a6c3bb514a{};
virtual std::int32_t GetHashCode();
virtual pls::cs::String ToString();
};

template<typename T_T>
pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_f349692afe9e225e();

template<typename T_T>
void cs_f349692afe9e225e_init(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this);

template<typename T_T>
void cs_7969ffc067486ca6(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this,T_T v_obj);

template<typename T_T>
void cs_b6a40aa7b6cac314(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this,T_T v_obj);

template<typename T_T>
bool cs_c08c9d3910849f27(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this,T_T v_elem);

template<typename T_T>
T_T cs_4b357a5c06369f9d(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this,std::int32_t v_index);

template<typename T_T>
T_T cs_656627fbbe890703(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this);

template<typename T_T>
std::int32_t cs_eb30533b1cca1f84(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this);

template<typename T_T>
std::int32_t cs_5149fb87b013384f(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this,T_T v_elem);

template<typename T_T>
void cs_58bd30f4afc5bccd(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this,T_T v_obj,std::int32_t v_index);

template<typename T_T>
T_T cs_35a9e1dd2dec15e2(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this);

template<typename T_T>
void cs_8d9a155f846a51f0(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this);

template<typename T_T>
void cs_8e64ae9ae7382110(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this);

template<typename T_T>
bool cs_dcec283a3ce35483(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this,T_T v_obj);

template<typename T_T>
void cs_cc1549d9ed88f4a6(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this,std::int32_t v_index);

template<typename T_T>
std::int32_t cs_66a816fe45ab90e7(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this);

template<typename T_T>
pls::cs::String cs_31d9db7cf8a97aa7(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this);
}
