#pragma once
#include "../../runtime/numeric_types.hpp"
#include "semantic_runtime.hpp"
namespace pls::cs {
// Selected managed numeric culture, configured before workers, like the
// existing integer_number_format. Only Mono265 default G formatting is admitted;
// the modern .NET profile is explicitly unsupported by this component.
struct FloatingNumberFormat {
    String decimal_separator=String(u"."),positive_sign=String(u"+"),negative_sign=String(u"-");
    String nan=String(u"NaN"),positive_infinity=String(u"Infinity"),negative_infinity=String(u"-Infinity");
};
inline FloatingNumberFormat floating_number_format;
String floating_to_string(float,const FloatingNumberFormat& =floating_number_format);
String floating_to_string(double,const FloatingNumberFormat& =floating_number_format);
// Readable numeric types: a float value formats as float (a FloatEval narrows first).
inline String floating_to_string(Single value,const FloatingNumberFormat& format=floating_number_format){return floating_to_string(value.value,format);}
inline String floating_to_string(FloatEval value,const FloatingNumberFormat& format=floating_number_format){return floating_to_string(static_cast<float>(value),format);}
inline String floating_to_string(Double value,const FloatingNumberFormat& format=floating_number_format){return floating_to_string(value.value,format);}
}
