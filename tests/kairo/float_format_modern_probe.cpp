// Non-production control experiment: reuse only decimal rendering, replacing
// the Mono decimal-digit algorithm with the standard library's shortest form.
// Including the production TU keeps this control out of the program library.
#include "../../src/kairo/common/managed_float_format.cpp"
#include <charconv>
namespace pls::cs {
template<class T>String modern_probe_value(T value,int precision,const FloatingNumberFormat&format){
    if(std::isnan(value))return format.nan;
    if(std::isinf(value))return std::signbit(value)?format.negative_infinity:format.positive_infinity;
    const bool negative=std::signbit(value);const auto positive=negative?-value:value;
    if(positive==T(0))return negative?String::concat(format.negative_sign,String(u"0")):String(u"0");
    char buffer[128];auto converted=std::to_chars(buffer,buffer+sizeof(buffer),positive,std::chars_format::scientific);
    if(converted.ec!=std::errc())throw InvalidOperationException("Probe decimal conversion failed");
    const std::string text(buffer,converted.ptr);const auto marker=text.find('e');
    std::string digits;for(std::size_t i=0;i<marker;++i)if(text[i]!='.')digits.push_back(text[i]);
    int exponent=0;const bool minus=text[marker+1]=='-';for(std::size_t i=marker+2;i<text.size();++i)exponent=exponent*10+(text[i]-'0');if(minus)exponent=-exponent;
    return render(std::move(digits),exponent+1,precision,negative,format);
}
String modern_number_probe(float value,const FloatingNumberFormat&format){return modern_probe_value(value,9,format);}
String modern_number_probe(double value,const FloatingNumberFormat&format){return modern_probe_value(value,17,format);}
}
