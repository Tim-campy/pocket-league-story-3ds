#include "managed_string_ops.hpp"
namespace pls::cs {
namespace {
#include "mono_decimal_digit_ranges.inc"
bool historical_digit(char16_t c)noexcept{for(const auto&range:DecimalDigitRanges)if(c>=range[0]&&c<=range[1])return true;return false;}
bool trim_space(char16_t c)noexcept {
    if(c==u' '||(c>=9&&c<=13)||c==0x85||c==0xa0||c==0x1680||c==0x2028||c==0x2029||c==0x202f||c==0x205f||c==0x3000)return true;
    if(runtime_profile==RuntimeProfile::UnityMono265)return (c>=0x2000&&c<=0x200b)||c==0xfeff;
    return c>=0x2000&&c<=0x200a;
}
template<class Predicate>String trim_with(const String& value,Predicate contains){
    const auto& text=value.code_units();std::size_t start=0,end=text.size();
    while(start<end&&contains(text[start]))++start;
    while(end>start&&contains(text[end-1]))--end;
    if(start==0&&end==text.size())return value;
    return String(text.substr(start,end-start));
}
}
String string_trim(const String& value){return trim_with(value,trim_space);}
String string_trim(const String& value,const Array<char16_t>& characters){
    if(characters.is_null()||characters.length()==0)return string_trim(value);
    return trim_with(value,[&](char16_t c){for(std::int32_t i=0;i<characters.length();++i)if(characters[i]==c)return true;return false;});
}
String format_i32_hex(std::int32_t value,std::int32_t width,bool uppercase){
    if(width<0||width>99)throw FormatException();
    const char16_t* digits=uppercase?u"0123456789ABCDEF":u"0123456789abcdef";
    auto bits=static_cast<std::uint32_t>(value);std::u16string text;
    do{text.push_back(digits[bits&15u]);bits>>=4u;}while(bits);
    while(text.size()<static_cast<std::size_t>(width))text.push_back(u'0');
    std::reverse(text.begin(),text.end());return String(std::move(text));
}
std::int32_t int32_parse_hex_number(const String& value){
    if(value.is_null())throw ArgumentNullException();
    const auto& text=value.code_units();std::size_t pos=0;
    auto white=[](char16_t c){if(c==u' '||(c>=9&&c<=13))return true;
        return runtime_profile==RuntimeProfile::UnityMono265&&(c==0x85||c==0xa0||c==0x1680||(c>=0x2000&&c<=0x200b)||c==0x2028||c==0x2029||c==0x202f||c==0x205f||c==0x3000);};
    while(pos<text.size()&&white(text[pos]))++pos;
    bool digit_found=false,overflow=false;std::uint32_t bits=0;
    for(;pos<text.size();++pos){auto c=text[pos];std::uint32_t digit;
        if((c>=u'0'&&c<=u'9')||(runtime_profile==RuntimeProfile::UnityMono265&&historical_digit(c)))digit=c-u'0';else if(c>=u'a'&&c<=u'f')digit=c-u'a'+10u;else if(c>=u'A'&&c<=u'F')digit=c-u'A'+10u;else break;
        digit_found=true;if(bits>(UINT32_MAX-digit)/16u)overflow=true;
        if(overflow&&runtime_profile==RuntimeProfile::UnityMono265)throw OverflowException();
        if(!overflow)bits=bits*16u+digit;
    }
    while(pos<text.size()&&white(text[pos]))++pos;
    if(runtime_profile==RuntimeProfile::UnityMono265){if(pos<text.size()&&text[pos]==0)pos=text.size();}
    else while(pos<text.size()&&text[pos]==0)++pos;
    if(!digit_found||pos!=text.size())throw FormatException();
    if(overflow)throw OverflowException();return cast_integral<std::int32_t>(bits);
}
String string_replace(const String& value,char16_t old_value,char16_t replacement){
    const auto& text=value.code_units();if(old_value==replacement||text.find(old_value)==std::u16string::npos)return value;
    auto result=text;std::replace(result.begin(),result.end(),old_value,replacement);return String(std::move(result));
}
String string_replace(const String& value,const String& old_value,const String& replacement){
    const auto& text=value.code_units();
    if(old_value.is_null())throw ArgumentNullException();const auto& old=old_value.code_units();if(old.empty())throw ArgumentException();
    if(text.empty())return value;
    if(old.size()==1&&!replacement.is_null()&&replacement.length()==1)return string_replace(value,old[0],replacement.at(0));
    auto position=text.find(old);if(position==std::u16string::npos)return value;
    const std::u16string empty;const auto& to=replacement.is_null()?empty:replacement.code_units();std::u16string result;std::size_t start=0;
    do{
        if(result.size()+position-start+to.size()>static_cast<std::size_t>(INT32_MAX))throw OutOfMemoryException();
        result.append(text,start,position-start);result+=to;start=position+old.size();position=text.find(old,start);
    }while(position!=std::u16string::npos);
    if(result.size()+text.size()-start>static_cast<std::size_t>(INT32_MAX))throw OutOfMemoryException();
    result.append(text,start,text.size()-start);return String(std::move(result));
}
Array<String> string_split(const String& value,const Array<char16_t>& separators){
    const auto& text=value.code_units();const bool use_white=separators.is_null()||separators.length()==0;
    auto matches=[&](char16_t c){if(use_white)return trim_space(c);for(std::int32_t i=0;i<separators.length();++i)if(separators[i]==c)return true;return false;};
    std::vector<String>parts;std::size_t start=0;
    for(std::size_t i=0;i<text.size();++i)if(matches(text[i])){parts.emplace_back(text.substr(start,i-start));start=i+1;}
    if(parts.empty())return Array<String>::from({value});
    parts.emplace_back(text.substr(start));if(parts.size()>static_cast<std::size_t>(INT32_MAX))throw OutOfMemoryException();
    auto result=Array<String>::make(static_cast<std::int32_t>(parts.size()));for(std::int32_t i=0;i<result.length();++i)result[i]=std::move(parts[static_cast<std::size_t>(i)]);return result;
}
}
