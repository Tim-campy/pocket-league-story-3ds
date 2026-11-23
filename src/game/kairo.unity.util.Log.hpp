// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::util::Log {

pls::cs::Ref<LogListener>& listener_();

pls::cs::String Error(pls::cs::String text,pls::cs::Ref<pls::cs::ExceptionObject> t);
} // namespace kairo::unity::util::Log
}
