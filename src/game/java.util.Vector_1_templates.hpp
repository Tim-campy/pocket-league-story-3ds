// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "generated/java.util.Vector_1.hpp"
#include "java.util.Vector_1.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace pls::game {
namespace java::util::Vector {

// M:java.util.Vector`1.Contains(`0)
template<typename T_T> bool Contains(pls::cs::Ref<generated::java::util::Vector_2<T_T>> self, T_T elem) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.Vector\u00601.Contains(\u00600)", kairo);
    {
        return pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return self->list_.Contains(pls::cs::box(elem)); });
    }
}
} // namespace java::util::Vector
}
