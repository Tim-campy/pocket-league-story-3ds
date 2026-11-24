// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::util::Log {

pls::cs::Ref<LogListener>& listener_();

pls::cs::String Error(pls::cs::String text, pls::cs::Ref<pls::cs::ExceptionObject> t);
} // namespace kairo::unity::util::Log
}
