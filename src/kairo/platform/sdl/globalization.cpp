#include "globalization.hpp"
#include "../../common/managed_time.hpp"
#include <utility>
#if defined(_WIN32)
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#endif

namespace pls::kairo {
namespace {GlobalizationProvider provider;}
void install_globalization_provider(GlobalizationProvider value){if(!value.timezone_id || !value.timezone_raw_offset || !value.locale)throw cs::ArgumentException();provider=std::move(value);}
cs::String native_timezone_id(){if(!provider.timezone_id)throw cs::NotSupportedException("Native timezone provider is not installed");return provider.timezone_id();}
std::int32_t native_timezone_raw_offset(const cs::String& id){if(!provider.timezone_raw_offset)throw cs::NotSupportedException("Native timezone provider is not installed");return provider.timezone_raw_offset(id);}
cs::Array<cs::String> native_locale(){if(!provider.locale)throw cs::NotSupportedException("Native locale provider is not installed");auto value=provider.locale();if(value.is_null() || value.length()!=2 || value[0].is_null() || value[1].is_null())throw cs::InvalidOperationException("Native locale provider must return language and country");return value;}
cs::String java_legacy_language(const cs::String& language){
    if(language.is_null())throw cs::ArgumentNullException();auto value=language.code_units();
    for(auto& c:value)if(c>=u'A' && c<=u'Z')c=static_cast<char16_t>(c+32);
    if(value==u"he")value=u"iw";else if(value==u"id")value=u"in";else if(value==u"yi")value=u"ji";
    return cs::String(std::move(value));
}
} // namespace pls::kairo

namespace pls::sdl {
#if defined(_WIN32)
namespace {
cs::String utf16(const wchar_t* text){std::u16string value;for(;*text;++text)value.push_back(static_cast<char16_t>(*text));return cs::String(std::move(value));}
std::wstring wide(const cs::String& text){if(text.is_null())throw cs::ArgumentNullException();std::wstring result;for(char16_t c:text.code_units())result.push_back(static_cast<wchar_t>(c));return result;}
std::int32_t standard_offset(const DYNAMIC_TIME_ZONE_INFORMATION& info){
    // StandardBias is ignored by Win32 when no StandardDate rule is supplied.
    const std::int64_t minutes=static_cast<std::int64_t>(info.Bias)+(info.StandardDate.wMonth?info.StandardBias:0);
    const std::int64_t millis=-minutes*60000;
    if(millis<std::numeric_limits<std::int32_t>::min() || millis>std::numeric_limits<std::int32_t>::max())throw cs::InvalidTimeZoneException();
    return static_cast<std::int32_t>(millis);
}
DYNAMIC_TIME_ZONE_INFORMATION local_zone(){DYNAMIC_TIME_ZONE_INFORMATION result{};if(GetDynamicTimeZoneInformation(&result)==TIME_ZONE_ID_INVALID)throw cs::InvalidTimeZoneException("GetDynamicTimeZoneInformation failed");return result;}
cs::String timezone_id(){const auto info=local_zone();if(info.TimeZoneKeyName[0]==0)throw cs::NotSupportedException("Host timezone has no stable Windows key name");return utf16(info.TimeZoneKeyName);}
std::optional<std::int32_t> gmt_offset(const cs::String& id){
    const auto& value=id.code_units();if(value==u"UTC" || value==u"GMT" || value==u"Etc/UTC" || value==u"Etc/GMT")return 0;
    if(value.size()<5 || value.substr(0,3)!=u"GMT" || (value[3]!=u'+' && value[3]!=u'-'))return std::nullopt;
    const auto suffix=value.substr(4);int hours=0,minutes=0;
    const auto colon=suffix.find(u':');
    auto parse=[](const std::u16string& text)->std::optional<int>{if(text.empty() || text.size()>2)return std::nullopt;int result=0;for(char16_t c:text){if(c<u'0' || c>u'9')return std::nullopt;result=result*10+static_cast<int>(c-u'0');}return result;};
    if(colon!=std::u16string::npos){auto h=parse(suffix.substr(0,colon)),m=parse(suffix.substr(colon+1));if(!h || !m || suffix.size()-colon-1!=2)return std::nullopt;hours=*h;minutes=*m;}
    else if(suffix.size()<=2){auto h=parse(suffix);if(!h)return std::nullopt;hours=*h;}
    else if(suffix.size()==3 || suffix.size()==4){auto h=parse(suffix.substr(0,suffix.size()-2)),m=parse(suffix.substr(suffix.size()-2));if(!h || !m)return std::nullopt;hours=*h;minutes=*m;}
    else return std::nullopt;
    if(hours>23 || minutes>59)return std::nullopt;
    return (value[3]==u'-'?-1:1)*(hours*60+minutes)*60000;
}
std::int32_t timezone_raw_offset(const cs::String& id){
    if(id.is_null())throw cs::ArgumentNullException();
    if(auto offset=gmt_offset(id))return *offset;
    if(id.code_units().find(u'/')!=std::u16string::npos)throw cs::NotSupportedException("General IANA timezone lookup is outside the Windows host provider");
    const auto key=wide(id);
    DYNAMIC_TIME_ZONE_INFORMATION info{};
    for(DWORD index=0;;++index){const DWORD result=EnumDynamicTimeZoneInformation(index,&info);if(result==ERROR_NO_MORE_ITEMS)break;if(result!=ERROR_SUCCESS)throw cs::InvalidTimeZoneException("EnumDynamicTimeZoneInformation failed");if(key==info.TimeZoneKeyName)return standard_offset(info);}
    // java.util.TimeZone.getTimeZone falls back to GMT for unknown identifiers.
    return 0;
}
cs::String locale_field(const wchar_t* locale,LCTYPE field){const int size=GetLocaleInfoEx(locale,field,nullptr,0);if(size<=0)throw cs::SystemException("GetLocaleInfoEx size failed");std::wstring value(static_cast<std::size_t>(size),L'\0');if(GetLocaleInfoEx(locale,field,&value[0],size)==0)throw cs::SystemException("GetLocaleInfoEx failed");return utf16(value.c_str());}
cs::Array<cs::String> locale(){wchar_t name[LOCALE_NAME_MAX_LENGTH]{};if(GetUserDefaultLocaleName(name,LOCALE_NAME_MAX_LENGTH)==0)throw cs::SystemException("GetUserDefaultLocaleName failed");return cs::Array<cs::String>::from({kairo::java_legacy_language(locale_field(name,LOCALE_SISO639LANGNAME)),locale_field(name,LOCALE_SISO3166CTRYNAME)});}
}
#endif
void install_globalization_backend(){
#if defined(_WIN32)
    kairo::install_globalization_provider({timezone_id,timezone_raw_offset,locale});
#else
    throw cs::NotSupportedException("Native globalization backend has not been implemented on this host");
#endif
}
} // namespace pls::sdl
