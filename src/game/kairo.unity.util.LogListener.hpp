// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::util {

struct LogListener {virtual ~LogListener()=default;
static bool source_reference_assignable(const std::type_info&target){return target==typeid(LogListener)||target==typeid(pls::cs::Object);}
virtual void OnRecvLog(pls::cs::String log)=0;
};
} // namespace kairo::unity::util
}
