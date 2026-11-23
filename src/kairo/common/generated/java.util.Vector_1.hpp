// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "java.util.IVector.hpp"
#include "portable_generated_forward.hpp"
namespace pls::generated {
namespace java::util {

template<typename T_T>
struct Vector_2 : pls::cs::Object, IVector {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(pls::cs::Object,
    {"Equals", "M:java.util.Vector`1.Equals(System.Object)"},
    {"ToString", "M:java.util.Vector`1.ToString"},
    {"M:java.util.IVector.get_List", "M:java.util.Vector`1.get_List"});
PLS_MANAGED_CLASS((std::string("java.util.Vector`1[")+pls::cs::managed_type_name_traits<T_T>::name()+"]"), Vector_2, pls::cs::Object, IVector)
pls::cs::List<pls::cs::Ref<pls::cs::Object>> list_{};
bool Equals(pls::cs::Ref<pls::cs::Object> const& obj) override;
pls::cs::String ToString() override;
pls::cs::List<pls::cs::Ref<pls::cs::Object>> get_List() override;
void Add_1(T_T obj) { return Vector_2_Add(this,obj); }
void AddElement(T_T obj) { return Vector_2_AddElement(this,obj); }
void Clear() { return Vector_2_Clear(this); }
T_T ElementAt(pls::cs::Int32 index) { return Vector_2_ElementAt(this,index); }
T_T FirstElement() { return Vector_2_FirstElement(this); }
pls::cs::Int32 IndexOf_1(T_T elem) { return Vector_2_IndexOf(this,elem); }
void InsertElementAt(T_T obj,pls::cs::Int32 index) { return Vector_2_InsertElementAt(this,obj,index); }
void RemoveAllElements() { return Vector_2_RemoveAllElements(this); }
bool RemoveElement(T_T obj) { return Vector_2_RemoveElement(this,obj); }
void RemoveElementAt(pls::cs::Int32 index) { return Vector_2_RemoveElementAt(this,index); }
void SetElementAt(T_T obj,pls::cs::Int32 index) { return Vector_2_SetElementAt(this,obj,index); }
pls::cs::Int32 Size() { return Vector_2_Size(this); }
};

template<typename T_T>
pls::cs::Ref<Vector_2<T_T>> Vector_2_create();

template<typename T_T>
void Vector_2_create_init(pls::cs::Ref<Vector_2<T_T>> self);

template<typename T_T>
void Vector_2_Add(pls::cs::Ref<Vector_2<T_T>> self,T_T obj);

template<typename T_T>
void Vector_2_AddElement(pls::cs::Ref<Vector_2<T_T>> self,T_T obj);

template<typename T_T>
void Vector_2_Clear(pls::cs::Ref<Vector_2<T_T>> self);

template<typename T_T>
T_T Vector_2_ElementAt(pls::cs::Ref<Vector_2<T_T>> self,pls::cs::Int32 index);

template<typename T_T>
bool Vector_2_Equals(pls::cs::Ref<Vector_2<T_T>> self,pls::cs::Ref<pls::cs::Object> obj);

template<typename T_T>
T_T Vector_2_FirstElement(pls::cs::Ref<Vector_2<T_T>> self);

template<typename T_T>
pls::cs::List<pls::cs::Ref<pls::cs::Object>> Vector_2_get_List(pls::cs::Ref<Vector_2<T_T>> self);

template<typename T_T>
pls::cs::Int32 Vector_2_IndexOf(pls::cs::Ref<Vector_2<T_T>> self,T_T elem);

template<typename T_T>
void Vector_2_InsertElementAt(pls::cs::Ref<Vector_2<T_T>> self,T_T obj,pls::cs::Int32 index);

template<typename T_T>
bool Vector_2_op_Equality(pls::cs::Ref<Vector_2<T_T>> a,pls::cs::Ref<Vector> b);

template<typename T_T>
bool Vector_2_op_Inequality(pls::cs::Ref<Vector_2<T_T>> a,pls::cs::Ref<Vector> b);

template<typename T_T>
void Vector_2_RemoveAllElements(pls::cs::Ref<Vector_2<T_T>> self);

template<typename T_T>
bool Vector_2_RemoveElement(pls::cs::Ref<Vector_2<T_T>> self,T_T obj);

template<typename T_T>
void Vector_2_RemoveElementAt(pls::cs::Ref<Vector_2<T_T>> self,pls::cs::Int32 index);

template<typename T_T>
void Vector_2_SetElementAt(pls::cs::Ref<Vector_2<T_T>> self,T_T obj,pls::cs::Int32 index);

template<typename T_T>
pls::cs::Int32 Vector_2_Size(pls::cs::Ref<Vector_2<T_T>> self);

template<typename T_T>
pls::cs::String Vector_2_ToString(pls::cs::Ref<Vector_2<T_T>> self);
} // namespace java::util
}
