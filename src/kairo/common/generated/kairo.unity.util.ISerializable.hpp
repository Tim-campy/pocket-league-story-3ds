// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace kairo::unity::util {

struct ISerializable {
    virtual ~ISerializable() = default;

    static bool source_reference_assignable(const std::type_info& target) {
        return target == typeid(ISerializable) || target == typeid(pls::cs::Object);
    }

    virtual void Serialize(pls::cs::Ref<java::io::OutputStream> stream) = 0;
    virtual void Deserialize(pls::cs::Ref<java::io::InputStream> stream) = 0;
};
} // namespace kairo::unity::util
}
