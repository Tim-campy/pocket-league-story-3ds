// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace kairo::unity::util::StringUtil {

void ensure_initialized();

pls::cs::String Escape(pls::cs::String text);

pls::cs::String FormatString(pls::cs::String value, pls::cs::Int32 len, char16_t padding, bool left);

pls::cs::String FormatString(pls::cs::String value, pls::cs::Int32 len, char16_t padding);

pls::cs::String FormatString(pls::cs::String value, pls::cs::Int32 len);

pls::cs::String GetCode(pls::cs::Array<std::uint8_t> bytes);

pls::cs::String GetString(pls::cs::Array<std::uint8_t> bytes);

pls::cs::Array<pls::cs::String> LoadStringArrayInputStreamBool(pls::cs::Ref<java::io::InputStream> stream,
                                                               bool zeroSkip);

pls::cs::Array<pls::cs::String> LoadStringArray(pls::cs::Ref<JarInflater> jar, pls::cs::String fileName,
                                                bool zeroSkip);

pls::cs::Array<pls::cs::String> LoadStringArray(pls::cs::Ref<JarInflater> jar, pls::cs::String fileName);

pls::cs::String Replace(pls::cs::String value, pls::cs::String oldStr, pls::cs::String newStr);

pls::cs::String Replace(pls::cs::String value, pls::cs::String args);

pls::cs::Array<pls::cs::String> Split(pls::cs::String text, pls::cs::String sep, bool trim,
                                      bool excludeZeroLength, bool escape);

pls::cs::Array<pls::cs::String> Split(pls::cs::String value, pls::cs::String sep);

pls::cs::Array<pls::cs::Int32> SplitIntegers(pls::cs::String src, pls::cs::String sep);
} // namespace kairo::unity::util::StringUtil
}
