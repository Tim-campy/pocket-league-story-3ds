// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace java::util {

struct IVector {
    virtual ~IVector() = default;

    static bool source_reference_assignable(const std::type_info& target) {
        return target == typeid(IVector) || target == typeid(pls::cs::Object);
    }

    virtual pls::cs::List<pls::cs::Ref<pls::cs::Object>> get_List() = 0;
};
} // namespace java::util
}
