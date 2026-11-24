// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace java::lang::StringEx {

void ensure_initialized();

char16_t CharAt(pls::cs::String str, pls::cs::Int32 index);

bool EqualsIgnoreCase(pls::cs::String str, pls::cs::String anotherString);

pls::cs::Array<std::uint8_t> GetBytes(pls::cs::String str);

pls::cs::Int32 IndexOf(pls::cs::String str, pls::cs::Int32 ch);

pls::cs::Int32 Length(pls::cs::String str);

bool StartsWith(pls::cs::String str, pls::cs::String prefix, pls::cs::Int32 toffset);

pls::cs::String SubstringJ(pls::cs::String str, pls::cs::Int32 beginIndex, pls::cs::Int32 endIndex);

pls::cs::String SubstringJ(pls::cs::String str, pls::cs::Int32 beginIndex);

pls::cs::String ToLowerCase(pls::cs::String str);
} // namespace java::lang::StringEx
}
