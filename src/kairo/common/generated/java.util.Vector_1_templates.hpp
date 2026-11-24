// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "java.util.IVector.hpp"
#include "java.util.Vector.hpp"
#include "java.util.Vector_1.hpp"

namespace pls::generated {
namespace java::util {

// M:java.util.Vector`1.#ctor
template<typename T_T> pls::cs::Ref<Vector_2<T_T>> Vector_2_create() {
    auto self = pls::cs::make_ref<Vector_2<T_T>>();
    util::Vector_2_create_init(self);
    return self;
}

template<typename T_T> void Vector_2_create_init(pls::cs::Ref<Vector_2<T_T>> self) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.Vector\u00601.#ctor", kairo);
    {
        self->list_ = pls::cs::List<pls::cs::Ref<pls::cs::Object>>::make();
    }
}

// M:java.util.Vector`1.Add(`0)
template<typename T_T> void Vector_2_Add(pls::cs::Ref<Vector_2<T_T>> self, T_T obj) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.Vector\u00601.Add(\u00600)", kairo);
    {
        util::Vector_2_AddElement(self, obj);
    }
}

// M:java.util.Vector`1.AddElement(`0)
template<typename T_T> void Vector_2_AddElement(pls::cs::Ref<Vector_2<T_T>> self, T_T obj) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.Vector\u00601.AddElement(\u00600)", kairo);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) { return self->list_.Add(pls::cs::box(obj)); });
    }
}

// M:java.util.Vector`1.Clear
template<typename T_T> void Vector_2_Clear(pls::cs::Ref<Vector_2<T_T>> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.Vector\u00601.Clear", kairo);
    {
        util::Vector_2_RemoveAllElements(self);
    }
}

// M:java.util.Vector`1.ElementAt(System.Int32)
template<typename T_T> T_T Vector_2_ElementAt(pls::cs::Ref<Vector_2<T_T>> self, pls::cs::Int32 index) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.Vector\u00601.ElementAt(System.Int32)", kairo);
    {
        return pls::cs::unbox<T_T>(self->list_.get_Item(index));
    }
}

// M:java.util.Vector`1.Equals(System.Object)
template<typename T_T>
bool Vector_2_Equals(pls::cs::Ref<Vector_2<T_T>> self, pls::cs::Ref<pls::cs::Object> obj) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.Vector\u00601.Equals(System.Object)", kairo);
    {
        if (is_instance<pls::cs::Ref<IVector>>(pls::cs::box(obj))) {
            {
                auto cs_left_6 = pls::cs::box(self->list_);
                auto cs_right_6 =
                    pls::cs::box(require((pls::cs::unbox<pls::cs::Ref<IVector>>(obj)))->get_List());
                return cs_left_6 == cs_right_6;
            }
        }
        return pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() {
                auto cs_receiver = pls::cs::box(pls::cs::static_pointer_cast<pls::cs::Object>(self));
                auto cs_argument = obj;
                return require(cs_receiver)->pls::cs::Object::Equals(cs_argument);
            }());
        });
    }
}

// M:java.util.Vector`1.FirstElement
template<typename T_T> T_T Vector_2_FirstElement(pls::cs::Ref<Vector_2<T_T>> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.Vector\u00601.FirstElement", kairo);
    {
        return pls::cs::unbox<T_T>(self->list_.get_Item(0));
    }
}

// M:java.util.Vector`1.get_List
template<typename T_T>
pls::cs::List<pls::cs::Ref<pls::cs::Object>> Vector_2_get_List(pls::cs::Ref<Vector_2<T_T>> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.Vector\u00601.get_List", kairo);
    {
        return self->list_;
    }
}

// M:java.util.Vector`1.IndexOf(`0)
template<typename T_T> pls::cs::Int32 Vector_2_IndexOf(pls::cs::Ref<Vector_2<T_T>> self, T_T elem) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.Vector\u00601.IndexOf(\u00600)", kairo);
    {
        return pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return self->list_.IndexOf(pls::cs::box(elem)); });
    }
}

// M:java.util.Vector`1.InsertElementAt(`0,System.Int32)
template<typename T_T>
void Vector_2_InsertElementAt(pls::cs::Ref<Vector_2<T_T>> self, T_T obj, pls::cs::Int32 index) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.Vector\u00601.InsertElementAt(\u00600,System.Int32)",
                     kairo);
    {
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return self->list_.Insert(index, pls::cs::box(obj)); });
    }
}

// M:java.util.Vector`1.op_Equality(java.util.Vector{`0},java.util.Vector)
template<typename T_T> bool Vector_2_op_Equality(pls::cs::Ref<Vector_2<T_T>> a, pls::cs::Ref<Vector> b) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:java.util.Vector\u00601.op_Equality(java.util.Vector{\u00600},java.util.Vector)",
                     kairo);
    {
        if (!is_null(pls::cs::box(a)) && !is_null(pls::cs::box(b))) {
            return pls::cs::box(require(a)->list_) == pls::cs::box(require(b)->list_);
        }
        return pls::cs::box(pls::cs::box(a)) == pls::cs::box(b);
    }
}

// M:java.util.Vector`1.op_Inequality(java.util.Vector{`0},java.util.Vector)
template<typename T_T> bool Vector_2_op_Inequality(pls::cs::Ref<Vector_2<T_T>> a, pls::cs::Ref<Vector> b) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:java.util.Vector\u00601.op_Inequality(java.util.Vector{\u00600},java.util.Vector)",
                     kairo);
    {
        return !(([&]() {
            pls::cs::Ref<Vector_2<T_T>> cs_left = a;
            pls::cs::Ref<Vector> cs_right = b;
            return util::Vector_2_op_Equality(cs_left, cs_right);
        }()));
    }
}

// M:java.util.Vector`1.RemoveAllElements
template<typename T_T> void Vector_2_RemoveAllElements(pls::cs::Ref<Vector_2<T_T>> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.Vector\u00601.RemoveAllElements", kairo);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) { return self->list_.Clear(); });
    }
}

// M:java.util.Vector`1.RemoveElement(`0)
template<typename T_T> bool Vector_2_RemoveElement(pls::cs::Ref<Vector_2<T_T>> self, T_T obj) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.Vector\u00601.RemoveElement(\u00600)", kairo);
    {
        pls::cs::Int32 num = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return self->list_.IndexOf(pls::cs::box(obj)); });
        if (num == -1) {
            return false;
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) { return self->list_.RemoveAt(num); });
        return true;
    }
}

// M:java.util.Vector`1.RemoveElementAt(System.Int32)
template<typename T_T> void Vector_2_RemoveElementAt(pls::cs::Ref<Vector_2<T_T>> self, pls::cs::Int32 index) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.Vector\u00601.RemoveElementAt(System.Int32)", kairo);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) { return self->list_.RemoveAt(index); });
    }
}

// M:java.util.Vector`1.SetElementAt(`0,System.Int32)
template<typename T_T>
void Vector_2_SetElementAt(pls::cs::Ref<Vector_2<T_T>> self, T_T obj, pls::cs::Int32 index) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.Vector\u00601.SetElementAt(\u00600,System.Int32)", kairo);
    {
        {
            auto cs_target = self->list_;
            auto cs_index = index;
            auto cs_value = pls::cs::box(obj);
            cs_target.set_Item(cs_index, cs_value);
        }
    }
}

// M:java.util.Vector`1.Size
template<typename T_T> pls::cs::Int32 Vector_2_Size(pls::cs::Ref<Vector_2<T_T>> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.Vector\u00601.Size", kairo);
    {
        return self->list_.get_Count();
    }
}

// M:java.util.Vector`1.ToString
template<typename T_T> pls::cs::String Vector_2_ToString(pls::cs::Ref<Vector_2<T_T>> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.Vector\u00601.ToString", kairo);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() {
                auto cs_value = pls::cs::box(self->list_);
                return require(cs_value)->ToString();
            }());
        });
    }
}

template<typename T_T> inline void Vector_2<T_T>::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(list_, visitor);
}

template<typename T_T> inline pls::cs::String Vector_2<T_T>::ToString() {
    return util::Vector_2_ToString(pls::cs::static_pointer_cast<Vector_2<T_T>>(shared_from_this()));
}

template<typename T_T> inline pls::cs::List<pls::cs::Ref<pls::cs::Object>> Vector_2<T_T>::get_List() {
    return util::Vector_2_get_List(pls::cs::static_pointer_cast<Vector_2<T_T>>(shared_from_this()));
}

template<typename T_T> inline bool Vector_2<T_T>::Equals(pls::cs::Ref<pls::cs::Object> const& obj) {
    return util::Vector_2_Equals(pls::cs::static_pointer_cast<Vector_2<T_T>>(shared_from_this()), obj);
}
} // namespace java::util
}
