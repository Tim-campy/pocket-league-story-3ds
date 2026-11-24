// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace UnityEngine::Purchasing {

struct IExtensionProvider {
    virtual ~IExtensionProvider() = default;

    static bool source_reference_assignable(const std::type_info& target) {
        return target == typeid(IExtensionProvider) || target == typeid(pls::cs::Object);
    }
};
} // namespace UnityEngine::Purchasing
}
