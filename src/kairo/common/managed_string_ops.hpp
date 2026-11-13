#pragma once
#include "semantic_runtime.hpp"
namespace pls::cs {
inline bool string_is_null_or_empty(const String& value){return value.is_null()||value.length()==0;}
String string_insert(const String& source,std::int32_t index,const String& value);
String string_trim(const String& value);
String string_trim(const String& value,const Array<char16_t>& characters);
// Proven standard Int32 X/x formatting subset: minimum precision 0..99.
String format_i32_hex(std::int32_t value,std::int32_t width,bool uppercase);
String string_remove(const String& value,std::int32_t start);
String string_remove(const String& value,std::int32_t start,std::int32_t count);
std::int32_t int32_parse_hex_number(const String& value,bool allow_spaces=true);
// Int32.TryParse(s, NumberStyles.HexNumber, CultureInfo.InvariantCulture, out r):
// Mono returns false with r=0 for null, format and overflow failures.
bool int32_try_parse_hex_number(const String& value,std::int32_t& result);
// MD5.Create().ComputeHash(byte[]): RFC 1321 digest, 16 bytes; null throws ArgumentNullException.
Array<std::uint8_t> md5_compute_hash(const Array<std::uint8_t>& buffer);
float single_parse_legacy(const String& value);
String string_replace(const String& value,const String& old_value,const String& replacement);
String string_replace(const String& value,char16_t old_value,char16_t replacement);
Array<String> string_split(const String& value,const Array<char16_t>& separators);
}
