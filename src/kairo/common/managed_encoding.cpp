#include "managed_encoding.hpp"
namespace pls::cs {
namespace {
Ref<RuntimeEncoding> encoding(RuntimeEncoding::Kind kind){return make_ref<RuntimeEncoding>(kind);}
bool high(char16_t c){return c>=0xd800&&c<=0xdbff;}
bool low(char16_t c){return c>=0xdc00&&c<=0xdfff;}
}
Ref<RuntimeEncoding> RuntimeEncoding::get_UTF8(){static auto value=encoding(Kind::Utf8);return value;}
Ref<RuntimeEncoding> RuntimeEncoding::get_Unicode(){static auto value=encoding(Kind::Utf16LE);return value;}
Ref<RuntimeEncoding> RuntimeEncoding::get_BigEndianUnicode(){static auto value=encoding(Kind::Utf16BE);return value;}
Ref<RuntimeEncoding> RuntimeEncoding::get_ASCII(){static auto value=encoding(Kind::Ascii);return value;}
Ref<RuntimeEncoding> RuntimeEncoding::GetEncoding(const String& name){
    if(name.is_null())throw ArgumentNullException();
    auto value=name.code_units();for(auto& c:value)if(c>=u'A'&&c<=u'Z')c=char16_t(c+(u'a'-u'A'));
    if(value==u"utf-8")return get_UTF8();
    if(value==u"utf8")throw ArgumentException();
    if(value==u"utf-16"||value==u"unicode")return get_Unicode();
    if(value==u"utf-16be"||value==u"unicodefffe")return get_BigEndianUnicode();
    if(value==u"us-ascii"||value==u"ascii")return get_ASCII();
    // Preserve invalid-name errors. Recognized source-reachable legacy names
    // remain explicit implementation gaps, not silently aliased to UTF-8.
    for(const auto* legacy:{u"shift_jis",u"shift-jis",u"sjis",u"ms_kanji",u"windows-31j",u"x-sjis",u"iso-2022-jp",u"jis",u"euc-jp",u"euc_jp",u"utf-32",u"utf-32be",u"iso-8859-1",u"windows-1252"})
        if(value==legacy)throw NotSupportedException("Encoding codec is not implemented: "+name.utf8());
    throw ArgumentException("Encoding name is not supported: "+name.utf8());
}
Array<std::uint8_t> RuntimeEncoding::GetBytes(const String& value)const{
    if(value.is_null())throw ArgumentNullException();
    if(kind_==Kind::Utf8)return encoding_utf8_get_bytes(value);
    std::vector<std::uint8_t> bytes;
    auto put=[&](char16_t c){if(kind_==Kind::Ascii){bytes.push_back(c<128?std::uint8_t(c):std::uint8_t('?'));return;}
        auto first=std::uint8_t(c&255),second=std::uint8_t(c>>8);if(kind_==Kind::Utf16BE)std::swap(first,second);bytes.push_back(first);bytes.push_back(second);};
    const auto& units=value.code_units();
    for(std::size_t i=0;i<units.size();++i){auto c=units[i];
        if(kind_==Kind::Ascii){put(c);continue;}
        if(runtime_profile==RuntimeProfile::UnityMono265){put(c);continue;}
        if(high(c)){if(i+1<units.size()&&low(units[i+1])){put(c);put(units[++i]);}else put(0xfffd);}
        else put(low(c)?char16_t(0xfffd):c);
    }
    if(bytes.size()>std::size_t(INT32_MAX))throw OutOfMemoryException();
    auto result=Array<std::uint8_t>::make(std::int32_t(bytes.size()));for(std::int32_t i=0;i<result.length();++i)result.at(i)=bytes[std::size_t(i)];return result;
}
String RuntimeEncoding::GetString(const Array<std::uint8_t>& value)const{
    if(value.is_null())throw ArgumentNullException();return GetString(value,0,value.length());
}
String RuntimeEncoding::GetString(const Array<std::uint8_t>& value,std::int32_t offset,std::int32_t count)const{
    if(value.is_null())throw ArgumentNullException();
    if(offset<0||count<0||std::int64_t(offset)+count>value.length())throw ArgumentOutOfRangeException();
    if(kind_==Kind::Utf8)return encoding_utf8_get_string(value,offset,count);
    std::u16string result;
    if(kind_==Kind::Ascii){for(auto i=offset;i<offset+count;++i){auto c=value.at(i);result.push_back(c<128?char16_t(c):u'?');}return String(std::move(result));}
    char16_t pending=0;
    for(std::int32_t i=0;i+1<count;i+=2){auto a=value.at(offset+i),b=value.at(offset+i+1);if(kind_==Kind::Utf16BE)std::swap(a,b);auto c=char16_t(a|(std::uint16_t(b)<<8));
        if(runtime_profile==RuntimeProfile::UnityMono265){result.push_back(c);continue;}
        if(pending){if(low(c)){result.push_back(pending);result.push_back(c);pending=0;continue;}result.push_back(0xfffd);pending=0;}
        if(high(c))pending=c;else result.push_back(low(c)?char16_t(0xfffd):c);
    }
    if(pending)result.push_back(0xfffd);if(count%2&&runtime_profile!=RuntimeProfile::UnityMono265)result.push_back(0xfffd);
    return String(std::move(result));
}
}
