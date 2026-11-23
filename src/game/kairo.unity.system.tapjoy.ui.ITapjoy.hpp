// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::system::tapjoy::ui {

struct ITapjoy {virtual ~ITapjoy()=default;
static bool source_reference_assignable(const std::type_info&target){return target==typeid(ITapjoy)||target==typeid(pls::cs::Object);}
virtual void CallBalance()=0;
};
} // namespace kairo::unity::system::tapjoy::ui
}
