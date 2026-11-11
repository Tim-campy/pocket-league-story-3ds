// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_type_51222df74ac70bab.hpp"
#include "portable_generated_type_a0dc211eb3feb56d.hpp"
#include "portable_generated_type_f8b20a4d1d9d695f.hpp"
namespace pls::generated {

// M:java.util.Vector`1.#ctor
template<typename T_T>
pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_946b70ecd88b233a() { auto cs_this = pls::cs::make_ref<cs_51222df74ac70bab<T_T>>(); cs_946b70ecd88b233a_init(cs_this); return cs_this; }

template<typename T_T>
void cs_946b70ecd88b233a_init(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this) {
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.Vector\u00601.#ctor",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/java/util/Vector`1.cs:M:java.util.Vector`1.#ctor:855",pls::cs::List<pls::cs::Ref<pls::cs::Object>>::make()); pls::generated::cs_require(cs_target)->cs_056e387f40164bd6 = cs_value; return cs_value; }());
}
}
}

// M:java.util.Vector`1.Add(`0)
template<typename T_T>
void cs_56f64dc33bbaf552(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this,T_T v_obj) { if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.Vector\u00601.Add(\u00600)",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_51222df74ac70bab<T_T>>>(cs_this); T_T cs_arg0 = v_obj; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());
}
}
}

// M:java.util.Vector`1.AddElement(`0)
template<typename T_T>
void cs_84f04a1c6da0e1ea(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this,T_T v_obj) { if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.Vector\u00601.AddElement(\u00600)",kairo);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_056e387f40164bd6; }()); auto cs_arg0 = pls::source_allocations::completed("generic_boxing_conversion","src/KairoLibrary/java/util/Vector`1.cs:M:java.util.Vector`1.AddElement(`0):1136",pls::cs::box(v_obj)); cs_receiver.Add(cs_arg0); }());});
}
}
}

// M:java.util.Vector`1.Clear
template<typename T_T>
void cs_ccc6918433418e24(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this) { if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.Vector\u00601.Clear",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_51222df74ac70bab<T_T>>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_54587d7da8ff8dbc(cs_receiver); }());
}
}
}

// M:java.util.Vector`1.ElementAt(System.Int32)
template<typename T_T>
T_T cs_46529d25e14daec6(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this,std::int32_t v_index) { if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.Vector\u00601.ElementAt(System.Int32)",kairo);
{
return pls::cs::unbox<T_T>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_056e387f40164bd6; }()); auto cs_index = v_index; return cs_array.get_Item(cs_index); }()));
}
}
}

// M:java.util.Vector`1.Equals(System.Object)
template<typename T_T>
bool cs_5456805d05dd254d(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this,pls::cs::Ref<pls::cs::Object> v_obj) { if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.Vector\u00601.Equals(System.Object)",kairo);
{
if (pls::generated::cs_is<pls::cs::Ref<cs_a0dc211eb3feb56d>>(pls::cs::box(v_obj))) {
return ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_056e387f40164bd6; }())); auto cs_right = pls::cs::box(([&]() -> pls::cs::List<pls::cs::Ref<pls::cs::Object>> { auto cs_receiver = (pls::cs::unbox<pls::cs::Ref<cs_a0dc211eb3feb56d>>(v_obj)); return pls::generated::cs_require(cs_receiver)->cs_virtual_60122bb6c899278e(); }())); return cs_left == cs_right; }());
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() { auto cs_receiver = pls::cs::box(pls::cs::static_pointer_cast<pls::cs::Object>(cs_this)); auto cs_argument = v_obj; return pls::generated::cs_require(cs_receiver)->pls::cs::Object::Equals(cs_argument); }());});
}
}
}

// M:java.util.Vector`1.FirstElement
template<typename T_T>
T_T cs_0d26c45ae3c275d4(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this) { if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.Vector\u00601.FirstElement",kairo);
{
return pls::cs::unbox<T_T>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_056e387f40164bd6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()));
}
}
}

// M:java.util.Vector`1.get_List
template<typename T_T>
pls::cs::List<pls::cs::Ref<pls::cs::Object>> cs_aacded9f4fa90723(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this) { if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.Vector\u00601.get_List",kairo);
{ return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_056e387f40164bd6; }()); }
}
}

// M:java.util.Vector`1.IndexOf(`0)
template<typename T_T>
std::int32_t cs_3a643b1c499c91f2(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this,T_T v_elem) { if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.Vector\u00601.IndexOf(\u00600)",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_056e387f40164bd6; }()); auto cs_arg0 = pls::source_allocations::completed("generic_boxing_conversion","src/KairoLibrary/java/util/Vector`1.cs:M:java.util.Vector`1.IndexOf(`0):2056",pls::cs::box(v_elem)); return cs_receiver.IndexOf(cs_arg0); }());});
}
}
}

// M:java.util.Vector`1.InsertElementAt(`0,System.Int32)
template<typename T_T>
void cs_b9d1ea00d1f689ef(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this,T_T v_obj,std::int32_t v_index) { if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.Vector\u00601.InsertElementAt(\u00600,System.Int32)",kairo);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_056e387f40164bd6; }()); auto cs_arg0 = v_index; auto cs_arg1 = pls::source_allocations::completed("generic_boxing_conversion","src/KairoLibrary/java/util/Vector`1.cs:M:java.util.Vector`1.InsertElementAt(`0,System.Int32):2230",pls::cs::box(v_obj)); cs_receiver.Insert(cs_arg0,cs_arg1); }());});
}
}
}

// M:java.util.Vector`1.op_Equality(java.util.Vector{`0},java.util.Vector)
template<typename T_T>
bool cs_391891c911ef6b0a(pls::cs::Ref<cs_51222df74ac70bab<T_T>> v_a,pls::cs::Ref<cs_f8b20a4d1d9d695f> v_b) {PLS_METHOD_SCOPE("KairoLibrary","M:java.util.Vector\u00601.op_Equality(java.util.Vector{\u00600},java.util.Vector)",kairo);
{
if ((([&]() { auto cs_left = pls::cs::box(pls::cs::box(v_a)); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() { auto cs_left = pls::cs::box(pls::cs::box(v_b)); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()))) {
return ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_a; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_056e387f40164bd6; }())); auto cs_right = pls::cs::box(([&]() { auto cs_receiver = v_b; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_056e387f40164bd6; }())); return cs_left == cs_right; }());
}
return ([&]() { auto cs_left = pls::cs::box(pls::cs::box(v_a)); auto cs_right = pls::cs::box(v_b); return cs_left == cs_right; }());
}
}

// M:java.util.Vector`1.op_Inequality(java.util.Vector{`0},java.util.Vector)
template<typename T_T>
bool cs_9739d0439e7c2868(pls::cs::Ref<cs_51222df74ac70bab<T_T>> v_a,pls::cs::Ref<cs_f8b20a4d1d9d695f> v_b) {PLS_METHOD_SCOPE("KairoLibrary","M:java.util.Vector\u00601.op_Inequality(java.util.Vector{\u00600},java.util.Vector)",kairo);
{
return (!((([&]() { pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_left = v_a; pls::cs::Ref<cs_f8b20a4d1d9d695f> cs_right = v_b; return cs_391891c911ef6b0a(cs_left,cs_right); }()))));
}
}

// M:java.util.Vector`1.RemoveAllElements
template<typename T_T>
void cs_54587d7da8ff8dbc(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this) { if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.Vector\u00601.RemoveAllElements",kairo);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_056e387f40164bd6; }()); cs_receiver.Clear(); }());});
}
}
}

// M:java.util.Vector`1.RemoveElement(`0)
template<typename T_T>
bool cs_f00b3f34dd8da63e(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this,T_T v_obj) { if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.Vector\u00601.RemoveElement(\u00600)",kairo);
{
std::int32_t v_num_2774 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_056e387f40164bd6; }()); auto cs_arg0 = pls::source_allocations::completed("generic_boxing_conversion","src/KairoLibrary/java/util/Vector`1.cs:M:java.util.Vector`1.RemoveElement(`0):2794",pls::cs::box(v_obj)); return cs_receiver.IndexOf(cs_arg0); }());});
if (([&]() -> bool { auto cs_left = v_num_2774; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
return false;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_056e387f40164bd6; }()); auto cs_arg0 = v_num_2774; cs_receiver.RemoveAt(cs_arg0); }());});
return true;
}
}
}

// M:java.util.Vector`1.RemoveElementAt(System.Int32)
template<typename T_T>
void cs_8327bff35061e212(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this,std::int32_t v_index) { if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.Vector\u00601.RemoveElementAt(System.Int32)",kairo);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_056e387f40164bd6; }()); auto cs_arg0 = v_index; cs_receiver.RemoveAt(cs_arg0); }());});
}
}
}

// M:java.util.Vector`1.SetElementAt(`0,System.Int32)
template<typename T_T>
void cs_221133265c339075(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this,T_T v_obj,std::int32_t v_index) { if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.Vector\u00601.SetElementAt(\u00600,System.Int32)",kairo);
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_056e387f40164bd6; }()); auto cs_index = v_index; auto cs_value = pls::source_allocations::completed("generic_boxing_conversion","src/KairoLibrary/java/util/Vector`1.cs:M:java.util.Vector`1.SetElementAt(`0,System.Int32):3176",pls::cs::box(v_obj)); cs_target.set_Item(cs_index,cs_value); return cs_value; }());
}
}
}

// M:java.util.Vector`1.Size
template<typename T_T>
std::int32_t cs_c55367423dbb79a1(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this) { if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.Vector\u00601.Size",kairo);
{
return (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_056e387f40164bd6; }())).get_Count();
}
}
}

// M:java.util.Vector`1.ToString
template<typename T_T>
pls::cs::String cs_43bff43663390cb7(pls::cs::Ref<cs_51222df74ac70bab<T_T>> cs_this) { if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.Vector\u00601.ToString",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_value=pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_056e387f40164bd6; }()));return pls::generated::cs_require(cs_value)->ToString();}());});
}
}
}

template<typename T_T>
inline void cs_51222df74ac70bab<T_T>::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_056e387f40164bd6,visitor);}

template<typename T_T>
inline void cs_51222df74ac70bab<T_T>::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_056e387f40164bd6);}

template<typename T_T>
inline pls::cs::String cs_51222df74ac70bab<T_T>::ToString() {return cs_43bff43663390cb7(pls::cs::static_pointer_cast<cs_51222df74ac70bab<T_T>>(shared_from_this()));}

template<typename T_T>
inline pls::cs::List<pls::cs::Ref<pls::cs::Object>> cs_51222df74ac70bab<T_T>::cs_virtual_60122bb6c899278e() {return cs_aacded9f4fa90723(pls::cs::static_pointer_cast<cs_51222df74ac70bab<T_T>>(shared_from_this()));}

template<typename T_T>
inline bool cs_51222df74ac70bab<T_T>::Equals(pls::cs::Ref<pls::cs::Object> const& v_obj) {return cs_5456805d05dd254d(pls::cs::static_pointer_cast<cs_51222df74ac70bab<T_T>>(shared_from_this()),v_obj);}
}
