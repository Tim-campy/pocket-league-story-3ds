#pragma once
#include "managed_encoding.hpp"
#include <array>
#include <random>
namespace pls::cs {
// Only the measured Guid.NewGuid()/ToString() API is exposed. Random identifiers
// are platform values; tests compare format/version/uniqueness, not a fixed ID.
struct Guid {
    std::array<std::uint8_t,16> bytes{};
    static Guid NewGuid(){
        std::random_device random;Guid value;
        for(auto& byte:value.bytes)byte=static_cast<std::uint8_t>(random());
        value.bytes[6]=static_cast<std::uint8_t>((value.bytes[6]&15u)|64u);
        value.bytes[8]=static_cast<std::uint8_t>((value.bytes[8]&63u)|128u);
        return value;
    }
    String ToString()const{
        constexpr char16_t hex[]=u"0123456789abcdef";std::u16string text;text.reserve(36);
        for(std::size_t index=0;index<bytes.size();++index){if(index==4||index==6||index==8||index==10)text.push_back(u'-');text.push_back(hex[bytes[index]>>4]);text.push_back(hex[bytes[index]&15]);}
        return String(std::move(text));
    }
};
// Historical Mono EscapeDataString uses RFC 2396 marks, the managed UTF-8
// fallback, uppercase escapes and a 32766-code-unit limit (Uri.cs).
inline String uri_escape_data_string(const String& value){
    if(value.is_null())throw ArgumentNullException();
    if(value.length()>32766)throw UriFormatException();
    auto bytes=RuntimeEncoding::get_UTF8()->GetBytes(value);std::u16string text;
    constexpr char16_t hex[]=u"0123456789ABCDEF";
    for(std::int32_t index=0;index<bytes.length();++index){
        auto byte=bytes.at(index);
        if((byte>='a'&&byte<='z')||(byte>='A'&&byte<='Z')||(byte>='0'&&byte<='9')||byte=='_'||byte=='~'||byte=='!'||byte=='\''||byte=='('||byte==')'||byte=='*'||byte=='-'||byte=='.')text.push_back(static_cast<char16_t>(byte));
        else{text.push_back(u'%');text.push_back(hex[byte>>4]);text.push_back(hex[byte&15]);}
    }
    return String(std::move(text));
}
}
