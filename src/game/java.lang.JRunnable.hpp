// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace java::lang {

struct JRunnable {
    virtual ~JRunnable() = default;

    static bool source_reference_assignable(const std::type_info& target) {
        return target == typeid(JRunnable) || target == typeid(pls::cs::Object);
    }

    virtual void Run() = 0;
};
} // namespace java::lang
}
