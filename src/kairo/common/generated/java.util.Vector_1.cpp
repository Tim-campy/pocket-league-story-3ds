// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.util.IVector.hpp"
#include "java.util.Vector.hpp"
#include "java.util.Vector_1.hpp"
#include "java.util.Vector_1_templates.hpp"

namespace pls::generated {
namespace java::util {

// Concrete compile receipt: M:java.util.Vector`1.#ctor [int]
template pls::cs::Ref<Vector_2<std::int32_t>> Vector_2_create<std::int32_t>();

// Concrete compile receipt: M:java.util.Vector`1.Add(`0) [int]
template void Vector_2_Add<std::int32_t>(pls::cs::Ref<Vector_2<std::int32_t>>, std::int32_t);

// Concrete compile receipt: M:java.util.Vector`1.AddElement(`0) [int]
template void Vector_2_AddElement<std::int32_t>(pls::cs::Ref<Vector_2<std::int32_t>>, std::int32_t);

// Concrete compile receipt: M:java.util.Vector`1.Clear [int]
template void Vector_2_Clear<std::int32_t>(pls::cs::Ref<Vector_2<std::int32_t>>);

// Concrete compile receipt: M:java.util.Vector`1.ElementAt(System.Int32) [int]
template std::int32_t Vector_2_ElementAt<std::int32_t>(pls::cs::Ref<Vector_2<std::int32_t>>, pls::cs::Int32);

// Concrete compile receipt: M:java.util.Vector`1.Equals(System.Object) [int]
template bool Vector_2_Equals<std::int32_t>(pls::cs::Ref<Vector_2<std::int32_t>>,
                                            pls::cs::Ref<pls::cs::Object>);

// Concrete compile receipt: M:java.util.Vector`1.FirstElement [int]
template std::int32_t Vector_2_FirstElement<std::int32_t>(pls::cs::Ref<Vector_2<std::int32_t>>);

// Concrete compile receipt: M:java.util.Vector`1.get_List [int]
template pls::cs::List<pls::cs::Ref<pls::cs::Object>>
    Vector_2_get_List<std::int32_t>(pls::cs::Ref<Vector_2<std::int32_t>>);

// Concrete compile receipt: M:java.util.Vector`1.IndexOf(`0) [int]
template pls::cs::Int32 Vector_2_IndexOf<std::int32_t>(pls::cs::Ref<Vector_2<std::int32_t>>, std::int32_t);

// Concrete compile receipt: M:java.util.Vector`1.InsertElementAt(`0,System.Int32) [int]
template void Vector_2_InsertElementAt<std::int32_t>(pls::cs::Ref<Vector_2<std::int32_t>>, std::int32_t,
                                                     pls::cs::Int32);

// Concrete compile receipt: M:java.util.Vector`1.op_Equality(java.util.Vector{`0},java.util.Vector) [int]
template bool Vector_2_op_Equality<std::int32_t>(pls::cs::Ref<Vector_2<std::int32_t>>, pls::cs::Ref<Vector>);

// Concrete compile receipt: M:java.util.Vector`1.op_Inequality(java.util.Vector{`0},java.util.Vector) [int]
template bool Vector_2_op_Inequality<std::int32_t>(pls::cs::Ref<Vector_2<std::int32_t>>,
                                                   pls::cs::Ref<Vector>);

// Concrete compile receipt: M:java.util.Vector`1.RemoveAllElements [int]
template void Vector_2_RemoveAllElements<std::int32_t>(pls::cs::Ref<Vector_2<std::int32_t>>);

// Concrete compile receipt: M:java.util.Vector`1.RemoveElement(`0) [int]
template bool Vector_2_RemoveElement<std::int32_t>(pls::cs::Ref<Vector_2<std::int32_t>>, std::int32_t);

// Concrete compile receipt: M:java.util.Vector`1.RemoveElementAt(System.Int32) [int]
template void Vector_2_RemoveElementAt<std::int32_t>(pls::cs::Ref<Vector_2<std::int32_t>>, pls::cs::Int32);

// Concrete compile receipt: M:java.util.Vector`1.SetElementAt(`0,System.Int32) [int]
template void Vector_2_SetElementAt<std::int32_t>(pls::cs::Ref<Vector_2<std::int32_t>>, std::int32_t,
                                                  pls::cs::Int32);

// Concrete compile receipt: M:java.util.Vector`1.Size [int]
template pls::cs::Int32 Vector_2_Size<std::int32_t>(pls::cs::Ref<Vector_2<std::int32_t>>);

// Concrete compile receipt: M:java.util.Vector`1.ToString [int]
template pls::cs::String Vector_2_ToString<std::int32_t>(pls::cs::Ref<Vector_2<std::int32_t>>);
} // namespace java::util
}
