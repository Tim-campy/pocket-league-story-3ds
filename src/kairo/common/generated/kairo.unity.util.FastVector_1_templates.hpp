// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "java.lang.JSystem.hpp"
#include "kairo.unity.util.FastVector_1.hpp"
namespace pls::generated {
namespace kairo::unity::util {

// M:kairo.unity.util.FastVector`1.#ctor
template<typename T_T>
pls::cs::Ref<FastVector_2<T_T>> FastVector_2_create() { auto self = pls::cs::make_ref<FastVector_2<T_T>>(); util::FastVector_2_create_init(self); return self; }

template<typename T_T>
void FastVector_2_create_init(pls::cs::Ref<FastVector_2<T_T>> self) {
self->capacityIncrement = 2;
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.FastVector\u00601.#ctor",kairo);
{

}

}

// M:kairo.unity.util.FastVector`1.Add(`0)
template<typename T_T>
void FastVector_2_Add(pls::cs::Ref<FastVector_2<T_T>> self,T_T obj) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.FastVector\u00601.Add(\u00600)",kairo);
{
util::FastVector_2_AddElement(self, obj);
}

}

// M:kairo.unity.util.FastVector`1.AddElement(`0)
template<typename T_T>
void FastVector_2_AddElement(pls::cs::Ref<FastVector_2<T_T>> self,T_T obj) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.FastVector\u00601.AddElement(\u00600)",kairo);
{
if (self->elementCount + 1 > self->bufSize_) {
pls::cs::Array<T_T> dst = pls::cs::Array<T_T>::make(self->bufSize_ + self->capacityIncrement);
if (self->bufSize_ > 0) {
java::lang::JSystem::Arraycopy(pls::cs::box(self->elementData), 0, pls::cs::box(dst), 0, self->bufSize_);
}
self->elementData = dst;
self->bufSize_ = self->elementData.length();
}
self->elementData.set_Item(self->elementCount, obj);
++self->elementCount;
}

}

// M:kairo.unity.util.FastVector`1.Contains(`0)
template<typename T_T>
bool FastVector_2_Contains(pls::cs::Ref<FastVector_2<T_T>> self,T_T elem) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.FastVector\u00601.Contains(\u00600)",kairo);
{
for (pls::cs::Int32 i = 0; i < self->elementCount; ++i) {
if (pls::cs::box(pls::cs::box(self->elementData.get_Item(i))) == pls::cs::box(pls::cs::box(elem)) || ((pls::cs::box(elem) != pls::cs::Ref<pls::cs::Object>{}) && pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() { auto cs_receiver = pls::cs::box(elem); auto cs_argument = pls::cs::box(self->elementData.get_Item(i)); return require(cs_receiver)->Equals(cs_argument); }());}))) {
return true;
}
}
return false;
}

}

// M:kairo.unity.util.FastVector`1.ElementAt(System.Int32)
template<typename T_T>
T_T FastVector_2_ElementAt(pls::cs::Ref<FastVector_2<T_T>> self,pls::cs::Int32 index) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.FastVector\u00601.ElementAt(System.Int32)",kairo);
{
return self->elementData.get_Item(index);
}

}

// M:kairo.unity.util.FastVector`1.FirstElement
template<typename T_T>
T_T FastVector_2_FirstElement(pls::cs::Ref<FastVector_2<T_T>> self) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.FastVector\u00601.FirstElement",kairo);
{
return self->elementData.get_Item(0);
}

}

// M:kairo.unity.util.FastVector`1.GetHashCode
template<typename T_T>
pls::cs::Int32 FastVector_2_GetHashCode(pls::cs::Ref<FastVector_2<T_T>> self) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.FastVector\u00601.GetHashCode",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(pls::cs::static_pointer_cast<pls::cs::Object>(self));return require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}

}

// M:kairo.unity.util.FastVector`1.IndexOf(`0)
template<typename T_T>
pls::cs::Int32 FastVector_2_IndexOf(pls::cs::Ref<FastVector_2<T_T>> self,T_T elem) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.FastVector\u00601.IndexOf(\u00600)",kairo);
{
for (pls::cs::Int32 i = 0; i < self->elementCount; ++i) {
if (pls::cs::box(pls::cs::box(self->elementData.get_Item(i))) == pls::cs::box(pls::cs::box(elem)) || ((pls::cs::box(elem) != pls::cs::Ref<pls::cs::Object>{}) && pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() { auto cs_receiver = pls::cs::box(elem); auto cs_argument = pls::cs::box(self->elementData.get_Item(i)); return require(cs_receiver)->Equals(cs_argument); }());}))) {
return i;
}
}
return -1;
}

}

// M:kairo.unity.util.FastVector`1.InsertElementAt(`0,System.Int32)
template<typename T_T>
void FastVector_2_InsertElementAt(pls::cs::Ref<FastVector_2<T_T>> self,T_T obj,pls::cs::Int32 index) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.FastVector\u00601.InsertElementAt(\u00600,System.Int32)",kairo);
{
if (self->elementCount + 1 > self->bufSize_) {
pls::cs::Array<T_T> dst = pls::cs::Array<T_T>::make(self->bufSize_ + self->capacityIncrement);
if (self->bufSize_ > 0) {
java::lang::JSystem::Arraycopy(pls::cs::box(self->elementData), 0, pls::cs::box(dst), 0, self->bufSize_);
}
self->elementData = dst;
self->bufSize_ = self->elementData.length();
}
for (pls::cs::Int32 num = self->elementCount - 1; num >= index; --num) {
self->elementData.set_Item(num + 1, self->elementData.get_Item(num));
}
self->elementData.set_Item(index, obj);
++self->elementCount;
}

}

// M:kairo.unity.util.FastVector`1.LastElement
template<typename T_T>
T_T FastVector_2_LastElement(pls::cs::Ref<FastVector_2<T_T>> self) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.FastVector\u00601.LastElement",kairo);
{
return self->elementData.get_Item(self->elementCount - 1);
}

}

// M:kairo.unity.util.FastVector`1.RemoveAllElements
template<typename T_T>
void FastVector_2_RemoveAllElements(pls::cs::Ref<FastVector_2<T_T>> self) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.FastVector\u00601.RemoveAllElements",kairo);
{
if ([&]() { auto cs_left = pls::cs::box(self->elementData); auto cs_right = pls::cs::box(pls::cs::Array<T_T>{}); return cs_left != cs_right; }()) {
for (pls::cs::Int32 i = 0; i < self->elementData.length(); ++i) {
self->elementData.set_Item(i, T_T{});
}
self->elementData = pls::cs::Array<T_T>{};
}
self->elementCount = 0;
self->bufSize_ = 0;
}

}

// M:kairo.unity.util.FastVector`1.RemoveAllElementsKeep
template<typename T_T>
void FastVector_2_RemoveAllElementsKeep(pls::cs::Ref<FastVector_2<T_T>> self) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.FastVector\u00601.RemoveAllElementsKeep",kairo);
{
self->elementCount = 0;
}

}

// M:kairo.unity.util.FastVector`1.RemoveElement(`0)
template<typename T_T>
bool FastVector_2_RemoveElement(pls::cs::Ref<FastVector_2<T_T>> self,T_T obj) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.FastVector\u00601.RemoveElement(\u00600)",kairo);
{
pls::cs::Int32 num = util::FastVector_2_IndexOf(self, obj);
if (num == -1) {
return false;
}
util::FastVector_2_RemoveElementAt(self, num);
return true;
}

}

// M:kairo.unity.util.FastVector`1.RemoveElementAt(System.Int32)
template<typename T_T>
void FastVector_2_RemoveElementAt(pls::cs::Ref<FastVector_2<T_T>> self,pls::cs::Int32 index) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.FastVector\u00601.RemoveElementAt(System.Int32)",kairo);
{
self->elementData.set_Item(index, T_T{});
for (pls::cs::Int32 i = index + 1; i < self->elementCount; ++i) {
self->elementData.set_Item(i - 1, self->elementData.get_Item(i));
}
--self->elementCount;
}

}

// M:kairo.unity.util.FastVector`1.Size
template<typename T_T>
pls::cs::Int32 FastVector_2_Size(pls::cs::Ref<FastVector_2<T_T>> self) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.FastVector\u00601.Size",kairo);
{
return self->elementCount;
}

}

// M:kairo.unity.util.FastVector`1.ToString
template<typename T_T>
pls::cs::String FastVector_2_ToString(pls::cs::Ref<FastVector_2<T_T>> self) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.FastVector\u00601.ToString",kairo);
{
{auto cs_left_9 = pls::cs::String::concat(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver_9 = pls::cs::static_pointer_cast<pls::cs::Object>(self);return require(cs_receiver_9)->pls::cs::Object::ToString();}());}), literal(u":size=")); auto cs_right_9 = integer_string(self->bufSize_);
return pls::cs::String::concat(cs_left_9,cs_right_9);}
}

}

template<typename T_T>
inline void FastVector_2<T_T>::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(elementData,visitor);}

template<typename T_T>
inline pls::cs::String FastVector_2<T_T>::ToString() {return util::FastVector_2_ToString(pls::cs::static_pointer_cast<FastVector_2<T_T>>(shared_from_this()));}

template<typename T_T>
inline std::int32_t FastVector_2<T_T>::GetHashCode() {return util::FastVector_2_GetHashCode(pls::cs::static_pointer_cast<FastVector_2<T_T>>(shared_from_this()));}
} // namespace kairo::unity::util
}
