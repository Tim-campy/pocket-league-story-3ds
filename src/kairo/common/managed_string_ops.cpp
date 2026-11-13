#include "managed_string_ops.hpp"
#include <charconv>
namespace pls::cs {
float single_parse_legacy(const String& value){
    if(value.is_null())throw ArgumentNullException();
    if(runtime_profile!=RuntimeProfile::UnityMono265)throw NotSupportedException("Single parser implements only the historical Mono profile");
    auto text=value.code_units();auto end=text.find(char16_t(0));if(end!=std::u16string::npos)text.resize(end);
    auto white=[](char16_t c){return c==32||(c>=9&&c<=13)||c==0x85||c==0xa0||c==0x1680||(c>=0x2000&&c<=0x200b)||c==0x2028||c==0x2029||c==0x202f||c==0x205f||c==0x3000;};
    std::size_t first=0,last=text.size();while(first<last&&white(text[first]))++first;while(last>first&&white(text[last-1]))--last;
    auto token=text.substr(first,last-first);
    if(token==u"NaN")return bit_copy<float>(std::uint32_t(0xffc00000));
    if(token==u"Infinity")return std::numeric_limits<float>::infinity();if(token==u"-Infinity")return -std::numeric_limits<float>::infinity();
    std::string number;bool fraction=false,exponent=false;for(auto c:token){if(c==u','&&!fraction&&!exponent)continue;if(c>127)throw FormatException();if(c==u'.')fraction=true;if(c==u'e'||c==u'E')exponent=true;number.push_back(static_cast<char>(c));}
    if(!number.empty()&&number.front()=='+')number.erase(0,1);if(number.empty())throw FormatException();
    // from_chars is locale-independent. Explicit grammar excludes its special
    // inf/nan tokens and preserves historical thousands/NUL behavior above.
    bool digit=false,point_seen=false,exp_seen=false,exp_digit=false;
    for(std::size_t i=0;i<number.size();++i){char c=number[i];if(c>='0'&&c<='9'){if(exp_seen)exp_digit=true;else digit=true;continue;}if(c=='-'&&i==0)continue;if((c=='+'||c=='-')&&i>0&&(number[i-1]=='e'||number[i-1]=='E'))continue;if(c=='.'&&!point_seen&&!exp_seen){point_seen=true;continue;}if((c=='e'||c=='E')&&digit&&!exp_seen){exp_seen=true;continue;}throw FormatException();}
    if(!digit||(exp_seen&&!exp_digit))throw FormatException();
    double parsed=0;const auto result=std::from_chars(number.data(),number.data()+number.size(),parsed);
    if(result.ptr!=number.data()+number.size())throw FormatException();
    if(result.ec==std::errc::result_out_of_range){
        auto ep=number.find_first_of("eE");std::int64_t power=0;
        if(ep!=std::string::npos){std::size_t pos=ep+1;bool minus=number[pos]=='-';if(number[pos]=='+'||minus)++pos;for(;pos<number.size();++pos)power=std::min<std::int64_t>(1000000,power*10+(number[pos]-'0'));if(minus)power=-power;}
        const auto stop=ep==std::string::npos?number.size():ep;auto dot=number.find('.');if(dot==std::string::npos||dot>stop)dot=stop;
        std::size_t significant=number[0]=='-'?1:0;while(significant<stop&&(number[significant]=='0'||number[significant]=='.'))++significant;
        power+=static_cast<std::int64_t>(dot)-static_cast<std::int64_t>(significant)-(significant<dot?1:0);
        if(power<0)return number[0]=='-'?-0.0f:0.0f;throw OverflowException();
    }
    if(result.ec!=std::errc{})throw FormatException();
    // Single.Parse in this core checks only the positive edge before casting.
    // The asymmetry and double-rounding are confirmed by the SDK oracle.
    if(parsed-static_cast<double>(std::numeric_limits<float>::max())>3.6147112457961776e29&&!std::isinf(parsed))throw OverflowException();
    return static_cast<float>(parsed);
}
String string_remove(const String& value,std::int32_t start){
    const auto& text=value.code_units();if(start<0||static_cast<std::size_t>(start)>=text.size())throw ArgumentOutOfRangeException();
    return String(text.substr(0,static_cast<std::size_t>(start)));
}
String string_remove(const String& value,std::int32_t start,std::int32_t count){
    const auto& text=value.code_units();if(start<0||count<0||static_cast<std::size_t>(start)>text.size()||static_cast<std::size_t>(count)>text.size()-static_cast<std::size_t>(start))throw ArgumentOutOfRangeException();
    if(count==0)return value;auto result=text;result.erase(static_cast<std::size_t>(start),static_cast<std::size_t>(count));return String(std::move(result));
}
String string_insert(const String& source,std::int32_t index,const String& value){
    const auto& text=source.code_units();if(value.is_null())throw ArgumentNullException();
    if(index<0||static_cast<std::size_t>(index)>text.size())throw ArgumentOutOfRangeException();
    if(value.length()==0)return source;if(text.empty())return value;
    if(static_cast<std::size_t>(value.length())>static_cast<std::size_t>(INT32_MAX)-text.size())throw OutOfMemoryException();
    auto result=text;result.insert(static_cast<std::size_t>(index),value.code_units());return String(std::move(result));
}
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
std::int32_t int32_parse_hex_number(const String& value,bool allow_spaces){
    if(value.is_null())throw ArgumentNullException();
    const auto& text=value.code_units();std::size_t pos=0;
    auto white=[](char16_t c){if(c==u' '||(c>=9&&c<=13))return true;
        return runtime_profile==RuntimeProfile::UnityMono265&&(c==0x85||c==0xa0||c==0x1680||(c>=0x2000&&c<=0x200b)||c==0x2028||c==0x2029||c==0x202f||c==0x205f||c==0x3000);};
    if(allow_spaces)while(pos<text.size()&&white(text[pos]))++pos;
    bool digit_found=false,overflow=false;std::uint32_t bits=0;
    for(;pos<text.size();++pos){auto c=text[pos];std::uint32_t digit;
        if((c>=u'0'&&c<=u'9')||(runtime_profile==RuntimeProfile::UnityMono265&&historical_digit(c)))digit=c-u'0';else if(c>=u'a'&&c<=u'f')digit=c-u'a'+10u;else if(c>=u'A'&&c<=u'F')digit=c-u'A'+10u;else break;
        digit_found=true;if(bits>(UINT32_MAX-digit)/16u)overflow=true;
        if(overflow&&runtime_profile==RuntimeProfile::UnityMono265)throw OverflowException();
        if(!overflow)bits=bits*16u+digit;
    }
    if(allow_spaces)while(pos<text.size()&&white(text[pos]))++pos;
    if(runtime_profile==RuntimeProfile::UnityMono265){if(pos<text.size()&&text[pos]==0)pos=text.size();}
    else while(pos<text.size()&&text[pos]==0)++pos;
    if(!digit_found||pos!=text.size())throw FormatException();
    if(overflow)throw OverflowException();return cast_integral<std::int32_t>(bits);
}
bool int32_try_parse_hex_number(const String& value,std::int32_t& result){
    result=0;if(value.is_null())return false;
    try{result=int32_parse_hex_number(value,true);return true;}catch(const FormatException&){return false;}catch(const OverflowException&){return false;}
}
namespace {
std::uint32_t md5_rotate(std::uint32_t value,unsigned bits){return (value<<bits)|(value>>(32u-bits));}
}
Array<std::uint8_t> md5_compute_hash(const Array<std::uint8_t>& buffer){
    if(buffer.is_null())throw ArgumentNullException();
    static const std::uint32_t k[64]={
        0xd76aa478u,0xe8c7b756u,0x242070dbu,0xc1bdceeeu,0xf57c0fafu,0x4787c62au,0xa8304613u,0xfd469501u,
        0x698098d8u,0x8b44f7afu,0xffff5bb1u,0x895cd7beu,0x6b901122u,0xfd987193u,0xa679438eu,0x49b40821u,
        0xf61e2562u,0xc040b340u,0x265e5a51u,0xe9b6c7aau,0xd62f105du,0x02441453u,0xd8a1e681u,0xe7d3fbc8u,
        0x21e1cde6u,0xc33707d6u,0xf4d50d87u,0x455a14edu,0xa9e3e905u,0xfcefa3f8u,0x676f02d9u,0x8d2a4c8au,
        0xfffa3942u,0x8771f681u,0x6d9d6122u,0xfde5380cu,0xa4beea44u,0x4bdecfa9u,0xf6bb4b60u,0xbebfbc70u,
        0x289b7ec6u,0xeaa127fau,0xd4ef3085u,0x04881d05u,0xd9d4d039u,0xe6db99e5u,0x1fa27cf8u,0xc4ac5665u,
        0xf4292244u,0x432aff97u,0xab9423a7u,0xfc93a039u,0x655b59c3u,0x8f0ccc92u,0xffeff47du,0x85845dd1u,
        0x6fa87e4fu,0xfe2ce6e0u,0xa3014314u,0x4e0811a1u,0xf7537e82u,0xbd3af235u,0x2ad7d2bbu,0xeb86d391u};
    static const unsigned shift[64]={7,12,17,22,7,12,17,22,7,12,17,22,7,12,17,22,5,9,14,20,5,9,14,20,5,9,14,20,5,9,14,20,
        4,11,16,23,4,11,16,23,4,11,16,23,4,11,16,23,6,10,15,21,6,10,15,21,6,10,15,21,6,10,15,21};
    const auto length=static_cast<std::uint64_t>(buffer.length());
    std::vector<std::uint8_t> data(static_cast<std::size_t>(length));
    for(std::int32_t i=0;i<buffer.length();++i)data[static_cast<std::size_t>(i)]=buffer.at(i);
    data.push_back(0x80u);while(data.size()%64u!=56u)data.push_back(0);
    const auto bits=length*8u;for(unsigned i=0;i<8;++i)data.push_back(static_cast<std::uint8_t>(bits>>(8u*i)));
    std::uint32_t h[4]={0x67452301u,0xefcdab89u,0x98badcfeu,0x10325476u};
    for(std::size_t block=0;block<data.size();block+=64){
        std::uint32_t w[16];
        for(unsigned i=0;i<16;++i)w[i]=std::uint32_t(data[block+4*i])|std::uint32_t(data[block+4*i+1])<<8|std::uint32_t(data[block+4*i+2])<<16|std::uint32_t(data[block+4*i+3])<<24;
        std::uint32_t a=h[0],b=h[1],c=h[2],d=h[3];
        for(unsigned i=0;i<64;++i){
            std::uint32_t f;unsigned g;
            if(i<16){f=(b&c)|(~b&d);g=i;}
            else if(i<32){f=(d&b)|(~d&c);g=(5*i+1)%16;}
            else if(i<48){f=b^c^d;g=(3*i+5)%16;}
            else{f=c^(b|~d);g=(7*i)%16;}
            const auto next=d;d=c;c=b;b=b+md5_rotate(a+f+k[i]+w[g],shift[i]);a=next;
        }
        h[0]+=a;h[1]+=b;h[2]+=c;h[3]+=d;
    }
    auto result=Array<std::uint8_t>::make(16);
    for(std::int32_t i=0;i<16;++i)result.at(i)=static_cast<std::uint8_t>(h[i/4]>>(8*(i%4)));
    return result;
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
    GcRootProvider roots([&](const EdgeVisitor&v){for(const auto&part:parts)trace_value(part,v);});
    for(std::size_t i=0;i<text.size();++i)if(matches(text[i])){parts.emplace_back(text.substr(start,i-start));start=i+1;}
    if(parts.empty())return Array<String>::from({value});
    parts.emplace_back(text.substr(start));if(parts.size()>static_cast<std::size_t>(INT32_MAX))throw OutOfMemoryException();
    auto result=Array<String>::make(static_cast<std::int32_t>(parts.size()));for(std::int32_t i=0;i<result.length();++i)result[i]=std::move(parts[static_cast<std::size_t>(i)]);return result;
}
}
