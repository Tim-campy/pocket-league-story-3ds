// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_66dbad5679f8ab87.hpp"
#include "portable_generated_type_a465028bea3432a3.hpp"
#include "portable_generated_type_f59223d2c773f078.hpp"
namespace pls::generated {

void cs_a465028bea3432a3::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_03197f755fcefa4b,visitor);pls::cs::trace_value(cs_99f3f6ad5516299e,visitor);}

void cs_a465028bea3432a3::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_03197f755fcefa4b);pls::cs::release_value(cs_99f3f6ad5516299e);}

std::int32_t cs_a465028bea3432a3::GetHashCode() {return cs_26468f4a2c9b3470(std::static_pointer_cast<cs_a465028bea3432a3>(shared_from_this()));}

bool cs_a465028bea3432a3::Equals(pls::cs::Ref<pls::cs::Object> const& v_obj) {return cs_9f8cfce81641ea7a(std::static_pointer_cast<cs_a465028bea3432a3>(shared_from_this()),v_obj);}

void cs_init_a465028bea3432a3(){static pls::cs::TypeInitState state;state.run("java.util.JCalendar",[](){

});}

// M:java.util.JCalendar.#ctor
pls::cs::Ref<cs_a465028bea3432a3> cs_d176e2e695c74782() { cs_init_a465028bea3432a3();
{ auto cs_this = pls::cs::make_ref<cs_a465028bea3432a3>(); cs_d176e2e695c74782_init(cs_this); return cs_this; }
}

void cs_d176e2e695c74782_init(pls::cs::Ref<cs_a465028bea3432a3> cs_this) {
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JCalendar.#ctor",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/java/util/JCalendar.cs:M:java.util.JCalendar.#ctor:1246",([&]() -> pls::cs::Ref<cs_66dbad5679f8ab87> { return cs_f437b6bb4cf7b2a6(); }())); pls::generated::cs_require(cs_target)->cs_03197f755fcefa4b = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_f59223d2c773f078> { return cs_0ccfddc5d383b7b6(); }()); pls::generated::cs_require(cs_target)->cs_99f3f6ad5516299e = cs_value; return cs_value; }());
}
}
}

// M:java.util.JCalendar.Equals(System.Object)
bool cs_9f8cfce81641ea7a(pls::cs::Ref<cs_a465028bea3432a3> cs_this,pls::cs::Ref<pls::cs::Object> v_obj) { cs_init_a465028bea3432a3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JCalendar.Equals(System.Object)",kairo);
{
if (pls::generated::cs_is<pls::cs::Ref<cs_a465028bea3432a3>>(pls::cs::box(v_obj))) {
return ([&]() -> bool { auto cs_left = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_a465028bea3432a3>>((pls::cs::unbox<pls::cs::Ref<cs_a465028bea3432a3>>(v_obj))); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1e354cc0ba1a9ce0(cs_receiver); }()); auto cs_right = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_a465028bea3432a3>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1e354cc0ba1a9ce0(cs_receiver); }()); return (cs_left == cs_right); }());
}
return false;
}
}
}
}

// M:java.util.JCalendar.Get(System.Int32)
std::int32_t cs_8d8ff05768cced2b(pls::cs::Ref<cs_a465028bea3432a3> cs_this,std::int32_t v_field) { cs_init_a465028bea3432a3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JCalendar.Get(System.Int32)",kairo);
{
pls::cs::Ref<pls::cs::TimeZoneInfo> v_timeZoneInfo_2266 = ([&]() -> pls::cs::Ref<pls::cs::TimeZoneInfo> { auto cs_receiver = static_cast<pls::cs::Ref<cs_f59223d2c773f078>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_99f3f6ad5516299e; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_48f0684537101017(cs_receiver); }());
pls::cs::DateTime v_dateTime_2322 = ([&]() { auto cs_arg0 = ([&]() -> std::int64_t { auto cs_left = (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::DateTime { auto cs_receiver = ([&]() -> pls::cs::DateTime { auto cs_receiver = static_cast<pls::cs::Ref<cs_66dbad5679f8ab87>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_03197f755fcefa4b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d6f2aad1fde7cbfd(cs_receiver); }()); return cs_receiver.ToUniversalTime(); }());})).get_Ticks(); auto cs_right = (pls::generated::cs_require(v_timeZoneInfo_2266)->get_BaseUtcOffset()).get_Ticks(); return pls::cs::add_i64(cs_left,cs_right); }()); auto cs_arg1 = static_cast<pls::cs::DateTimeKind>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull))); return pls::cs::DateTime(cs_arg0,cs_arg1); }());
switch (v_field) {
case 1:
{
return (v_dateTime_2322).get_Year();
}
case 2:
{
return ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_right = (([&]() -> std::int32_t { auto cs_left = (v_dateTime_2322).get_Month(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); return pls::cs::add_i32(cs_left,cs_right); }());
}
case 5:
{
return (v_dateTime_2322).get_Day();
}
case 7:
{
return pls::cs::cast_integral<std::int32_t>((([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = (([&]() -> std::int32_t { auto cs_left = (v_dateTime_2322).get_DayOfWeek(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left - cs_right); }())); return (cs_left + cs_right); }())));
}
case 9:
{
if (([&]() -> bool { auto cs_left = (v_dateTime_2322).get_Hour(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return (cs_left < cs_right); }())) {
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
}
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));
}
case 10:
{
return ([&]() -> std::int32_t { auto cs_left = (v_dateTime_2322).get_Hour(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return pls::cs::mod_i32(cs_left,cs_right); }());
}
case 11:
{
return (v_dateTime_2322).get_Hour();
}
case 12:
{
return (v_dateTime_2322).get_Minute();
}
case 13:
{
return (v_dateTime_2322).get_Second();
}
case 14:
{
return (v_dateTime_2322).get_Millisecond();
}
case 6:
{
return (v_dateTime_2322).get_DayOfYear();
}
default:
{
throw pls::cs::NotSupportedException();
}
}
}
}
}
}

// M:java.util.JCalendar.GetHashCode
std::int32_t cs_26468f4a2c9b3470(pls::cs::Ref<cs_a465028bea3432a3> cs_this) { cs_init_a465028bea3432a3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JCalendar.GetHashCode",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(std::static_pointer_cast<pls::cs::Object>(cs_this));return pls::generated::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}
}
}
}

// M:java.util.JCalendar.GetInstance
pls::cs::Ref<cs_a465028bea3432a3> cs_23a91b30234d4879() { cs_init_a465028bea3432a3();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JCalendar.GetInstance",kairo);
{
return pls::source_allocations::completed("new_object","src/KairoLibrary/java/util/JCalendar.cs:M:java.util.JCalendar.GetInstance:1449",([&]() -> pls::cs::Ref<cs_a465028bea3432a3> { return cs_d176e2e695c74782(); }()));
}
}
}

// M:java.util.JCalendar.GetTimeInMillis
std::int64_t cs_1e354cc0ba1a9ce0(pls::cs::Ref<cs_a465028bea3432a3> cs_this) { cs_init_a465028bea3432a3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JCalendar.GetTimeInMillis",kairo);
{
return ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_66dbad5679f8ab87>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_03197f755fcefa4b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f91743457814379a(cs_receiver); }());
}
}
}
}

// M:java.util.JCalendar.SetTime(java.util.JDate)
void cs_e2c62bcb22f058c9(pls::cs::Ref<cs_a465028bea3432a3> cs_this,pls::cs::Ref<cs_66dbad5679f8ab87> v_date) { cs_init_a465028bea3432a3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JCalendar.SetTime(java.util.JDate)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_date; pls::generated::cs_require(cs_target)->cs_03197f755fcefa4b = cs_value; return cs_value; }());
}
}
}
}

// M:java.util.JCalendar.SetTimeInMillis(System.Int64)
void cs_ab403c0b96bfdb59(pls::cs::Ref<cs_a465028bea3432a3> cs_this,std::int64_t v_millis) { cs_init_a465028bea3432a3();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JCalendar.SetTimeInMillis(System.Int64)",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_66dbad5679f8ab87>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_03197f755fcefa4b; }())); std::int64_t cs_arg0 = v_millis; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d5b7c3d10f4ecec3(cs_receiver,cs_arg0); }());
}
}
}
}
}
