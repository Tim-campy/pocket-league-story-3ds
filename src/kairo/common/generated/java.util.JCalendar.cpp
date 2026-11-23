// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "java.util.JCalendar.hpp"
#include "java.util.JDate.hpp"
#include "java.util.JTimeZone.hpp"
namespace pls::generated {
namespace java::util {

void JCalendar::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(date_,visitor);pls::cs::trace_value(timezone_,visitor);}

bool JCalendar::Equals(pls::cs::Ref<pls::cs::Object> const& obj) {return JCalendar::Equals(pls::cs::static_pointer_cast<JCalendar>(shared_from_this()),obj);}

static PLS_NOINLINE void cs_init_a465028bea3432a3_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("java.util.JCalendar",flag,[](){

});}

void JCalendar::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_a465028bea3432a3_slow(flag);}

void JCalendar::create_init(pls::cs::Ref<JCalendar> self) {
JCalendar::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JCalendar.#ctor",kairo);
{
self->date_ = JDate::create();
self->timezone_ = JTimeZone::GetDefault();
}

}

pls::cs::Int32 JCalendar::GetHashCode(pls::cs::Ref<JCalendar> self) { return require(self)->JCalendar::GetHashCode(); }

// M:java.util.JCalendar.#ctor
pls::cs::Ref<JCalendar> JCalendar::create() {
JCalendar::ensure_initialized();
 auto self = pls::cs::make_ref<JCalendar>(); JCalendar::create_init(self); return self; 
}

// M:java.util.JCalendar.GetInstance
pls::cs::Ref<JCalendar> JCalendar::GetInstance() {
JCalendar::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JCalendar.GetInstance",kairo);
{
return JCalendar::create();
}

}

// M:java.util.JCalendar.Equals(System.Object)
bool JCalendar::Equals(pls::cs::Ref<JCalendar> self,pls::cs::Ref<pls::cs::Object> obj) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JCalendar.Equals(System.Object)",kairo);
{
if (is_instance<pls::cs::Ref<JCalendar>>(pls::cs::box(obj))) {
{auto cs_left_3 = require((pls::cs::unbox<pls::cs::Ref<JCalendar>>(obj)))->GetTimeInMillis(); auto cs_right_3 = self->GetTimeInMillis();
return cs_left_3 == cs_right_3;}
}
return false;
}

}

// M:java.util.JCalendar.GetHashCode
std::int32_t JCalendar::GetHashCode() {PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JCalendar.GetHashCode",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(pls::cs::static_pointer_cast<pls::cs::Object>(this));return require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}
}

// M:java.util.JCalendar.Get(System.Int32)
pls::cs::Int32 JCalendar::Get(pls::cs::Int32 field) {PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JCalendar.Get(System.Int32)",kairo);
{
pls::cs::Ref<pls::cs::TimeZoneInfo> timeZoneInfo = require(timezone_)->GetTimeZoneInfo();
auto cs_arg0_2 = ([&]() -> pls::cs::Int64 { auto cs_left_2 = pls::cs::Int64(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::DateTime { auto cs_receiver_2 = require(date_)->GetDateTime(); return cs_receiver_2.ToUniversalTime(); }());}).get_Ticks()); auto cs_right_2 = require(timeZoneInfo)->get_BaseUtcOffset().get_Ticks(); return cs_left_2 + cs_right_2; }()); auto cs_arg1_2 = static_cast<pls::cs::DateTimeKind>(2) /* DateTimeKind.Local */;
pls::cs::DateTime dateTime = pls::cs::DateTime(cs_arg0_2,cs_arg1_2);
switch (field) {
case 1:
{
return dateTime.get_Year();
}
case 2:
{
return 0 + (pls::cs::Int32(dateTime.get_Month()) - 1);
}
case 5:
{
return dateTime.get_Day();
}
case 7:
{
return pls::cs::cast_integral<pls::cs::Int32>((1 + ((dateTime.get_DayOfWeek() - 0))));
}
case 9:
{
if (dateTime.get_Hour() < 12) {
return 0;
}
return 1;
}
case 10:
{
return pls::cs::Int32(dateTime.get_Hour()) % 12;
}
case 11:
{
return dateTime.get_Hour();
}
case 12:
{
return dateTime.get_Minute();
}
case 13:
{
return dateTime.get_Second();
}
case 14:
{
return dateTime.get_Millisecond();
}
case 6:
{
return dateTime.get_DayOfYear();
}
default:
{
throw pls::cs::NotSupportedException();
}
}
}
}

// M:java.util.JCalendar.SetTime(java.util.JDate)
void JCalendar::SetTime(pls::cs::Ref<JDate> date) {PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JCalendar.SetTime(java.util.JDate)",kairo);
{
date_ = date;
}
}

// M:java.util.JCalendar.SetTimeInMillis(System.Int64)
void JCalendar::SetTimeInMillis(pls::cs::Int64 millis) {PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JCalendar.SetTimeInMillis(System.Int64)",kairo);
{
require(date_)->SetTime(millis);
}
}

// M:java.util.JCalendar.GetTimeInMillis
pls::cs::Int64 JCalendar::GetTimeInMillis() {PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JCalendar.GetTimeInMillis",kairo);
{
return require(date_)->GetTime();
}
}
} // namespace java::util
}
