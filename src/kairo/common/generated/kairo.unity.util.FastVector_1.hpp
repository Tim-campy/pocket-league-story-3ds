// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace kairo::unity::util {

template<typename T_T> struct FastVector_2 : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(pls::cs::Object, {"GetHashCode", "M:kairo.unity.util.FastVector`1.GetHashCode"},
                       {"ToString", "M:kairo.unity.util.FastVector`1.ToString"});
    PLS_MANAGED_CLASS((std::string("kairo.unity.util.FastVector`1[") +
                       pls::cs::managed_type_name_traits<T_T>::name() + "]"),
                      FastVector_2, pls::cs::Object)
    pls::cs::Int32 capacityIncrement{};
    pls::cs::Int32 elementCount{};
    pls::cs::Array<T_T> elementData{};
    pls::cs::Int32 bufSize_{};
    std::int32_t GetHashCode() override;
    pls::cs::String ToString() override;

    void Add(T_T obj) { return FastVector_2_Add(this, obj); }

    void AddElement(T_T obj) { return FastVector_2_AddElement(this, obj); }

    bool Contains(T_T elem) { return FastVector_2_Contains(this, elem); }

    T_T ElementAt(pls::cs::Int32 index) { return FastVector_2_ElementAt(this, index); }

    T_T FirstElement() { return FastVector_2_FirstElement(this); }

    pls::cs::Int32 IndexOf_1(T_T elem) { return FastVector_2_IndexOf(this, elem); }

    void InsertElementAt(T_T obj, pls::cs::Int32 index) {
        return FastVector_2_InsertElementAt(this, obj, index);
    }

    T_T LastElement() { return FastVector_2_LastElement(this); }

    void RemoveAllElements() { return FastVector_2_RemoveAllElements(this); }

    void RemoveAllElementsKeep() { return FastVector_2_RemoveAllElementsKeep(this); }

    bool RemoveElement(T_T obj) { return FastVector_2_RemoveElement(this, obj); }

    void RemoveElementAt(pls::cs::Int32 index) { return FastVector_2_RemoveElementAt(this, index); }

    pls::cs::Int32 Size() { return FastVector_2_Size(this); }
};

template<typename T_T> pls::cs::Ref<FastVector_2<T_T>> FastVector_2_create();

template<typename T_T> void FastVector_2_create_init(pls::cs::Ref<FastVector_2<T_T>> self);

template<typename T_T> void FastVector_2_Add(pls::cs::Ref<FastVector_2<T_T>> self, T_T obj);

template<typename T_T> void FastVector_2_AddElement(pls::cs::Ref<FastVector_2<T_T>> self, T_T obj);

template<typename T_T> bool FastVector_2_Contains(pls::cs::Ref<FastVector_2<T_T>> self, T_T elem);

template<typename T_T> T_T FastVector_2_ElementAt(pls::cs::Ref<FastVector_2<T_T>> self, pls::cs::Int32 index);

template<typename T_T> T_T FastVector_2_FirstElement(pls::cs::Ref<FastVector_2<T_T>> self);

template<typename T_T> pls::cs::Int32 FastVector_2_GetHashCode(pls::cs::Ref<FastVector_2<T_T>> self);

template<typename T_T> pls::cs::Int32 FastVector_2_IndexOf(pls::cs::Ref<FastVector_2<T_T>> self, T_T elem);

template<typename T_T>
void FastVector_2_InsertElementAt(pls::cs::Ref<FastVector_2<T_T>> self, T_T obj, pls::cs::Int32 index);

template<typename T_T> T_T FastVector_2_LastElement(pls::cs::Ref<FastVector_2<T_T>> self);

template<typename T_T> void FastVector_2_RemoveAllElements(pls::cs::Ref<FastVector_2<T_T>> self);

template<typename T_T> void FastVector_2_RemoveAllElementsKeep(pls::cs::Ref<FastVector_2<T_T>> self);

template<typename T_T> bool FastVector_2_RemoveElement(pls::cs::Ref<FastVector_2<T_T>> self, T_T obj);

template<typename T_T>
void FastVector_2_RemoveElementAt(pls::cs::Ref<FastVector_2<T_T>> self, pls::cs::Int32 index);

template<typename T_T> pls::cs::Int32 FastVector_2_Size(pls::cs::Ref<FastVector_2<T_T>> self);

template<typename T_T> pls::cs::String FastVector_2_ToString(pls::cs::Ref<FastVector_2<T_T>> self);
} // namespace kairo::unity::util
}
