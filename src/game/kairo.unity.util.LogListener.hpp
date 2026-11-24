// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::util {

struct LogListener {
    virtual ~LogListener() = default;

    static bool source_reference_assignable(const std::type_info& target) {
        return target == typeid(LogListener) || target == typeid(pls::cs::Object);
    }

    virtual void OnRecvLog(pls::cs::String log) = 0;
};
} // namespace kairo::unity::util
}
