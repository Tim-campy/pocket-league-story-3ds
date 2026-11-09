// Default-G subset adapted from Mono System.NumberFormatter (MIT/X11).
// Copyright (C) 2004 Novell, Inc.; (C) 2008 Mainsoft Co.
// Authors: Kazuki Oikawa, Eyal Alaluf. Full permission notice: THIRD_PARTY.md.
#include "managed_float_format.hpp"
namespace pls::cs {
namespace {
#include "mono_number_tables.inc"
constexpr std::uint64_t ten_power(unsigned n){std::uint64_t value=1;while(n--)value*=10;return value;}
String render(std::string digits,int point,int precision,bool negative,const FloatingNumberFormat&format){
    std::u16string out;if(negative)out+=format.negative_sign.code_units();
    auto append=[&](const std::string&text){for(char c:text)out.push_back(static_cast<char16_t>(c));};
    if(point>precision||point<=-4){
        out.push_back(static_cast<char16_t>(digits[0]));
        if(digits.size()>1){out+=format.decimal_separator.code_units();append(digits.substr(1));}
        out.push_back(u'E');const auto exponent=point-1;
        out+=(exponent<0?format.negative_sign:format.positive_sign).code_units();
        auto number=std::to_string(exponent<0?-exponent:exponent);if(number.size()<2)out.push_back(u'0');append(number);
    }else if(point<=0){out+=u"0";out+=format.decimal_separator.code_units();out.append(static_cast<std::size_t>(-point),u'0');append(digits);}
    else if(static_cast<std::size_t>(point)>=digits.size()){append(digits);out.append(static_cast<std::size_t>(point)-digits.size(),u'0');}
    else{append(digits.substr(0,static_cast<std::size_t>(point)));out+=format.decimal_separator.code_units();append(digits.substr(static_cast<std::size_t>(point)));}
    return String(std::move(out));
}
String historical(double value,int precision,const FloatingNumberFormat&format){
    auto bits=bit_copy<std::uint64_t>(value);const bool negative=(bits>>63)!=0;bits&=0x7fffffffffffffffull;
    if(bits==0)return String(u"0");
    auto exponent=static_cast<unsigned>(bits>>52);std::uint64_t mantissa=bits&0xfffffffffffffull;
    if(exponent==0x7ff)return mantissa?format.nan:negative?format.negative_infinity:format.positive_infinity;
    int adjust=0;
    if(exponent==0){exponent=1;int scale=1;for(unsigned i=18;i>0;--i)if(mantissa>=ten_power(i)){scale=static_cast<int>(i)+1;break;}
        if(scale<15){adjust=scale-15;mantissa*=ten_power(static_cast<unsigned>(-adjust));}
    }else{mantissa=(mantissa+0x10000000000000ull)*10;adjust=-1;}
    const auto low=static_cast<std::uint64_t>(static_cast<std::uint32_t>(mantissa)),high=mantissa>>32;
    const auto table=mono_mantissa_bits[exponent],table_high=table>>32,table_low=static_cast<std::uint64_t>(static_cast<std::uint32_t>(table));
    // Mono's unchecked UInt64 intermediate intentionally wraps.
    auto middle=high*table_low+low*table_high+((low*table_low)>>32);
    auto result=high*table_high+(middle>>32);
    while(result<10000000000000000ull){middle=(middle&0xffffffffull)*10;result=result*10+(middle>>32);--adjust;}
    if(middle&0x80000000ull)++result;
    int order=17,point=mono_tens_exponent[exponent]+adjust+order;
    const auto divisor=ten_power(static_cast<unsigned>(order-precision));result=(result+(divisor>>1))/divisor;order=precision;
    if(result>=ten_power(static_cast<unsigned>(order))){++order;++point;}
    auto digits=std::to_string(result);while(digits.size()>1&&digits.back()=='0')digits.pop_back();
    return render(std::move(digits),point,precision,negative,format);
}
}
String floating_to_string(float value,const FloatingNumberFormat&format){if(runtime_profile!=RuntimeProfile::UnityMono265)throw NotSupportedException("Floating formatting is admitted for UnityMono265 only");return historical(static_cast<double>(value),7,format);}
String floating_to_string(double value,const FloatingNumberFormat&format){if(runtime_profile!=RuntimeProfile::UnityMono265)throw NotSupportedException("Floating formatting is admitted for UnityMono265 only");return historical(value,15,format);}
}
