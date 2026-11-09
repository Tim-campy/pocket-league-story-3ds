// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_type_3af9088680f95fb3.hpp"
#include "portable_generated_type_67cd241ab51652f1.hpp"
namespace pls::generated {

// M:kairo.unity.util.FastVector`1.#ctor
template<typename T_T>
pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_f349692afe9e225e() { auto cs_this = pls::cs::make_ref<cs_67cd241ab51652f1<T_T>>(); cs_f349692afe9e225e_init(cs_this); return cs_this; }

template<typename T_T>
void cs_f349692afe9e225e_init(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this) {
cs_this->cs_f025835c3cf7842a = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));
{

}
}

// M:kairo.unity.util.FastVector`1.Add(`0)
template<typename T_T>
void cs_7969ffc067486ca6(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this,T_T v_obj) { if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_67cd241ab51652f1<T_T>>>(cs_this); T_T cs_arg0 = v_obj; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b6a40aa7b6cac314(cs_receiver,cs_arg0); }());
}
}

// M:kairo.unity.util.FastVector`1.AddElement(`0)
template<typename T_T>
void cs_b6a40aa7b6cac314(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this,T_T v_obj) { if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_965b7a32b9c12921; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c59f41a6c3bb514a; }()); return (cs_left > cs_right); }())) {
pls::cs::Array<T_T> v_dst_750 = pls::cs::Array<T_T>::make(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c59f41a6c3bb514a; }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f025835c3cf7842a; }()); return pls::cs::add_i32(cs_left,cs_right); }()));
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c59f41a6c3bb514a; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(v_dst_750); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c59f41a6c3bb514a; }()); cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
([&]() { auto cs_target = cs_this; auto cs_value = v_dst_750; pls::generated::cs_require(cs_target)->cs_6d298c7f8339f4aa = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }())).length(); pls::generated::cs_require(cs_target)->cs_c59f41a6c3bb514a = cs_value; return cs_value; }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_965b7a32b9c12921; }()); auto cs_value = v_obj;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = cs_this; auto cs_old = pls::generated::cs_require(cs_target)->cs_965b7a32b9c12921; auto cs_new = pls::cs::add_i32(cs_old,1); pls::generated::cs_require(cs_target)->cs_965b7a32b9c12921 = cs_new; return cs_old; }());
}
}

// M:kairo.unity.util.FastVector`1.Contains(`0)
template<typename T_T>
bool cs_c08c9d3910849f27(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this,T_T v_elem) { if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_i_1479 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1479; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_965b7a32b9c12921; }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1479; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1479 = cs_new; return cs_old; }())) {
if ((([&]() { auto cs_left = pls::cs::box(pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }()); auto cs_index = v_i_1479; return cs_array.get_Item(cs_index); }()))); auto cs_right = pls::cs::box(pls::cs::box(v_elem)); return cs_left == cs_right; }()) || (((pls::cs::box(v_elem) != pls::cs::Ref<pls::cs::Object>{}) && ([&]() { auto cs_receiver = pls::cs::box(v_elem); auto cs_argument = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }()); auto cs_index = v_i_1479; return cs_array.get_Item(cs_index); }())); return pls::generated::cs_require(cs_receiver)->Equals(cs_argument); }()))))) {
return true;
}
}
return false;
}
}

// M:kairo.unity.util.FastVector`1.ElementAt(System.Int32)
template<typename T_T>
T_T cs_4b357a5c06369f9d(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this,std::int32_t v_index) { if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }()); auto cs_index = v_index; return cs_array.get_Item(cs_index); }());
}
}

// M:kairo.unity.util.FastVector`1.FirstElement
template<typename T_T>
T_T cs_656627fbbe890703(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this) { if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
}
}

// M:kairo.unity.util.FastVector`1.GetHashCode
template<typename T_T>
std::int32_t cs_eb30533b1cca1f84(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this) { if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&](){auto cs_receiver=pls::cs::box(std::static_pointer_cast<pls::cs::Object>(cs_this));return pls::generated::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());
}
}

// M:kairo.unity.util.FastVector`1.IndexOf(`0)
template<typename T_T>
std::int32_t cs_5149fb87b013384f(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this,T_T v_elem) { if(!cs_this)throw pls::cs::NullReferenceException();
{
for (std::int32_t v_i_1713 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1713; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_965b7a32b9c12921; }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1713; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1713 = cs_new; return cs_old; }())) {
if ((([&]() { auto cs_left = pls::cs::box(pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }()); auto cs_index = v_i_1713; return cs_array.get_Item(cs_index); }()))); auto cs_right = pls::cs::box(pls::cs::box(v_elem)); return cs_left == cs_right; }()) || (((pls::cs::box(v_elem) != pls::cs::Ref<pls::cs::Object>{}) && ([&]() { auto cs_receiver = pls::cs::box(v_elem); auto cs_argument = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }()); auto cs_index = v_i_1713; return cs_array.get_Item(cs_index); }())); return pls::generated::cs_require(cs_receiver)->Equals(cs_argument); }()))))) {
return v_i_1713;
}
}
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
}
}

// M:kairo.unity.util.FastVector`1.InsertElementAt(`0,System.Int32)
template<typename T_T>
void cs_58bd30f4afc5bccd(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this,T_T v_obj,std::int32_t v_index) { if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_965b7a32b9c12921; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c59f41a6c3bb514a; }()); return (cs_left > cs_right); }())) {
pls::cs::Array<T_T> v_dst_3382 = pls::cs::Array<T_T>::make(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c59f41a6c3bb514a; }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f025835c3cf7842a; }()); return pls::cs::add_i32(cs_left,cs_right); }()));
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c59f41a6c3bb514a; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(v_dst_3382); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c59f41a6c3bb514a; }()); cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
([&]() { auto cs_target = cs_this; auto cs_value = v_dst_3382; pls::generated::cs_require(cs_target)->cs_6d298c7f8339f4aa = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }())).length(); pls::generated::cs_require(cs_target)->cs_c59f41a6c3bb514a = cs_value; return cs_value; }());
}
for (std::int32_t v_num_3592 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_965b7a32b9c12921; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_3592; auto cs_right = v_index; return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_3592; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_3592 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num_3592; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }()); auto cs_index = v_num_3592; return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }()); auto cs_index = v_index; auto cs_value = v_obj;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = cs_this; auto cs_old = pls::generated::cs_require(cs_target)->cs_965b7a32b9c12921; auto cs_new = pls::cs::add_i32(cs_old,1); pls::generated::cs_require(cs_target)->cs_965b7a32b9c12921 = cs_new; return cs_old; }());
}
}

// M:kairo.unity.util.FastVector`1.LastElement
template<typename T_T>
T_T cs_35a9e1dd2dec15e2(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this) { if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_965b7a32b9c12921; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }());
}
}

// M:kairo.unity.util.FastVector`1.RemoveAllElements
template<typename T_T>
void cs_8d9a155f846a51f0(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this) { if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }())); auto cs_right = pls::cs::box(pls::cs::Array<T_T>{}); return cs_left != cs_right; }())) {
for (std::int32_t v_i_4689 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_4689; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_4689; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_4689 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }()); auto cs_index = v_i_4689; auto cs_value = T_T{};cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<T_T>{}; pls::generated::cs_require(cs_target)->cs_6d298c7f8339f4aa = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::generated::cs_require(cs_target)->cs_965b7a32b9c12921 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::generated::cs_require(cs_target)->cs_c59f41a6c3bb514a = cs_value; return cs_value; }());
}
}

// M:kairo.unity.util.FastVector`1.RemoveAllElementsKeep
template<typename T_T>
void cs_8e64ae9ae7382110(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this) { if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::generated::cs_require(cs_target)->cs_965b7a32b9c12921 = cs_value; return cs_value; }());
}
}

// M:kairo.unity.util.FastVector`1.RemoveElement(`0)
template<typename T_T>
bool cs_dcec283a3ce35483(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this,T_T v_obj) { if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_4426 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_67cd241ab51652f1<T_T>>>(cs_this); T_T cs_arg0 = v_obj; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5149fb87b013384f(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = v_num_4426; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
return false;
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_67cd241ab51652f1<T_T>>>(cs_this); std::int32_t cs_arg0 = v_num_4426; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_cc1549d9ed88f4a6(cs_receiver,cs_arg0); }());
return true;
}
}

// M:kairo.unity.util.FastVector`1.RemoveElementAt(System.Int32)
template<typename T_T>
void cs_cc1549d9ed88f4a6(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this,std::int32_t v_index) { if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }()); auto cs_index = v_index; auto cs_value = T_T{};cs_target.set_Item(cs_index,cs_value);return cs_value;}());
for (std::int32_t v_i_5118 = ([&]() -> std::int32_t { auto cs_left = v_index; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_i_5118; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_965b7a32b9c12921; }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_5118; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_5118 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_i_5118; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }()); auto cs_index = v_i_5118; return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = cs_this; auto cs_old = pls::generated::cs_require(cs_target)->cs_965b7a32b9c12921; auto cs_new = pls::cs::sub_i32(cs_old,1); pls::generated::cs_require(cs_target)->cs_965b7a32b9c12921 = cs_new; return cs_old; }());
}
}

// M:kairo.unity.util.FastVector`1.Size
template<typename T_T>
std::int32_t cs_66a816fe45ab90e7(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this) { if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_965b7a32b9c12921; }());
}
}

// M:kairo.unity.util.FastVector`1.ToString
template<typename T_T>
pls::cs::String cs_31d9db7cf8a97aa7(pls::cs::Ref<cs_67cd241ab51652f1<T_T>> cs_this) { if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_left = ([&]() { auto cs_left = ([&](){auto cs_receiver = std::static_pointer_cast<pls::cs::Object>(cs_this);return pls::generated::cs_require(cs_receiver)->pls::cs::Object::ToString();}()); auto cs_right = pls::cs::String(std::u16string(u"\x003a" u"\x0073" u"\x0069" u"\x007a" u"\x0065" u"\x003d" u"",6)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::generated::cs_integer_string(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c59f41a6c3bb514a; }())); return pls::cs::String::concat(cs_left,cs_right); }());
}
}

template<typename T_T>
inline void cs_67cd241ab51652f1<T_T>::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_f025835c3cf7842a,visitor);pls::cs::trace_value(cs_965b7a32b9c12921,visitor);pls::cs::trace_value(cs_6d298c7f8339f4aa,visitor);pls::cs::trace_value(cs_c59f41a6c3bb514a,visitor);}

template<typename T_T>
inline void cs_67cd241ab51652f1<T_T>::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_f025835c3cf7842a);pls::cs::release_value(cs_965b7a32b9c12921);pls::cs::release_value(cs_6d298c7f8339f4aa);pls::cs::release_value(cs_c59f41a6c3bb514a);}

template<typename T_T>
inline pls::cs::String cs_67cd241ab51652f1<T_T>::ToString() {return cs_31d9db7cf8a97aa7(std::static_pointer_cast<cs_67cd241ab51652f1<T_T>>(shared_from_this()));}

template<typename T_T>
inline std::int32_t cs_67cd241ab51652f1<T_T>::GetHashCode() {return cs_eb30533b1cca1f84(std::static_pointer_cast<cs_67cd241ab51652f1<T_T>>(shared_from_this()));}
}
