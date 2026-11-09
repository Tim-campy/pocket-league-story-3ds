#pragma once
#include "semantic_runtime.hpp"
namespace pls::cs {
inline bool string_is_null_or_empty(const String& value){return value.is_null()||value.length()==0;}
String string_insert(const String& source,std::int32_t index,const String& value);
String string_trim(const String& value);
String string_trim(const String& value,const Array<char16_t>& characters);
// Proven standard Int32 X/x formatting subset: minimum precision 0..99.
String format_i32_hex(std::int32_t value,std::int32_t width,bool uppercase);
std::int32_t int32_parse_hex_number(const String& value);
String string_replace(const String& value,const String& old_value,const String& replacement);
String string_replace(const String& value,char16_t old_value,char16_t replacement);
Array<String> string_split(const String& value,const Array<char16_t>& separators);
}
