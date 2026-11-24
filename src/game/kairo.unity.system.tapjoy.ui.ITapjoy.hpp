// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::system::tapjoy::ui {

struct ITapjoy {
    virtual ~ITapjoy() = default;

    static bool source_reference_assignable(const std::type_info& target) {
        return target == typeid(ITapjoy) || target == typeid(pls::cs::Object);
    }

    virtual void CallBalance() = 0;
};
} // namespace kairo::unity::system::tapjoy::ui
}
