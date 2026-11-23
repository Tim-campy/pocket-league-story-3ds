// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {
namespace java::util {

struct IVector {virtual ~IVector()=default;
static bool source_reference_assignable(const std::type_info&target){return target==typeid(IVector)||target==typeid(pls::cs::Object);}
virtual pls::cs::List<pls::cs::Ref<pls::cs::Object>> get_List()=0;
};
} // namespace java::util
}
