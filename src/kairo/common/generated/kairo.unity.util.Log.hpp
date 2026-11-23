// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {
namespace kairo::unity::util::Log {

void ensure_initialized();

pls::cs::String& lastLog_();

void DebugLog(pls::cs::String text);

pls::cs::String GetThrowableLog(pls::cs::String text,pls::cs::Ref<pls::cs::ExceptionObject> t);

pls::cs::String GetThrowableName(pls::cs::Ref<pls::cs::ExceptionObject> t);

pls::cs::String Info(pls::cs::Ref<pls::cs::ExceptionObject> t);

pls::cs::String Info(pls::cs::String text,pls::cs::Ref<pls::cs::ExceptionObject> t);
} // namespace kairo::unity::util::Log
}
