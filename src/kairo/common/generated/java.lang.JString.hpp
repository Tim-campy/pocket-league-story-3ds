// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace java::lang::JString {

void ensure_initialized();

pls::cs::Array<pls::cs::Array<std::uint16_t>>& SJIS_UNICODE();

pls::cs::String GetSJIS(pls::cs::Array<std::uint8_t> sjis_bytes, pls::cs::Int32 offset,
                        pls::cs::Int32 length);

std::uint16_t GetUnicode(std::uint16_t sjis);

pls::cs::String New(pls::cs::Array<std::uint8_t> bytes, pls::cs::String enc);

pls::cs::String New(pls::cs::Array<std::uint8_t> bytes);

pls::cs::String NewString(pls::cs::String value);

pls::cs::String ValueOf(char16_t c);

pls::cs::String ValueOfInt(pls::cs::Int32 i);

pls::cs::String ValueOfLong(pls::cs::Int64 l);

pls::cs::String ValueOfObject(pls::cs::Ref<pls::cs::Object> obj);
} // namespace java::lang::JString
}
