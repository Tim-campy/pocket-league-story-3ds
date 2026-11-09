// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_f59223d2c773f078.hpp"
namespace pls::generated {

void cs_f59223d2c773f078::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_05e71bcde75517db,visitor);pls::cs::trace_value(cs_0350607f8ec43af6,visitor);pls::cs::trace_value(cs_59055747f3e8f843,visitor);}

void cs_f59223d2c773f078::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_05e71bcde75517db);pls::cs::release_value(cs_0350607f8ec43af6);pls::cs::release_value(cs_59055747f3e8f843);}

void cs_init_f59223d2c773f078(){static pls::cs::TypeInitState state;state.run("java.util.JTimeZone",[](){

});}

// M:java.util.JTimeZone.#ctor(System.String)
pls::cs::Ref<cs_f59223d2c773f078> cs_bcb3a1c31d9b5d23(pls::cs::String v_id) { cs_init_f59223d2c773f078();
{ auto cs_this = pls::cs::make_ref<cs_f59223d2c773f078>(); cs_bcb3a1c31d9b5d23_init(cs_this,v_id); return cs_this; }
}

void cs_bcb3a1c31d9b5d23_init(pls::cs::Ref<cs_f59223d2c773f078> cs_this,pls::cs::String v_id) {
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JTimeZone.#ctor(System.String)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_id; pls::generated::cs_require(cs_target)->cs_05e71bcde75517db = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int64_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_05e71bcde75517db; }()); return pls::kairo::native_timezone_raw_offset(cs_arg0); }());})); pls::generated::cs_require(cs_target)->cs_0350607f8ec43af6 = cs_value; return cs_value; }());
std::int32_t v_milliseconds_270 = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0350607f8ec43af6; }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull))); return pls::cs::mod_i64(cs_left,cs_right); }())));
([&]() { auto cs_target = cs_this; auto cs_old = pls::generated::cs_require(cs_target)->cs_0350607f8ec43af6; auto cs_rhs = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x3e8ull)); auto cs_value = pls::cs::div_i64(cs_old,cs_rhs); pls::generated::cs_require(cs_target)->cs_0350607f8ec43af6 = cs_value; return cs_value; }());
std::int32_t v_seconds_342 = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0350607f8ec43af6; }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull))); return pls::cs::mod_i64(cs_left,cs_right); }())));
([&]() { auto cs_target = cs_this; auto cs_old = pls::generated::cs_require(cs_target)->cs_0350607f8ec43af6; auto cs_rhs = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x3cull)); auto cs_value = pls::cs::div_i64(cs_old,cs_rhs); pls::generated::cs_require(cs_target)->cs_0350607f8ec43af6 = cs_value; return cs_value; }());
std::int32_t v_minutes_405 = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0350607f8ec43af6; }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull))); return pls::cs::mod_i64(cs_left,cs_right); }())));
([&]() { auto cs_target = cs_this; auto cs_old = pls::generated::cs_require(cs_target)->cs_0350607f8ec43af6; auto cs_rhs = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x3cull)); auto cs_value = pls::cs::div_i64(cs_old,cs_rhs); pls::generated::cs_require(cs_target)->cs_0350607f8ec43af6 = cs_value; return cs_value; }());
std::int32_t v_hours_468 = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0350607f8ec43af6; }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull))); return pls::cs::mod_i64(cs_left,cs_right); }())));
([&]() { auto cs_target = cs_this; auto cs_old = pls::generated::cs_require(cs_target)->cs_0350607f8ec43af6; auto cs_rhs = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x18ull)); auto cs_value = pls::cs::div_i64(cs_old,cs_rhs); pls::generated::cs_require(cs_target)->cs_0350607f8ec43af6 = cs_value; return cs_value; }());
std::int32_t v_days_529 = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0350607f8ec43af6; }()));
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::TimeZoneInfo> { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_05e71bcde75517db; }()); auto cs_arg1 = ([&]() { auto cs_arg0 = v_days_529; auto cs_arg1 = v_hours_468; auto cs_arg2 = v_minutes_405; auto cs_arg3 = v_seconds_342; auto cs_arg4 = v_milliseconds_270; return pls::cs::TimeSpan(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()); auto cs_arg2 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_05e71bcde75517db; }()); auto cs_arg3 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_05e71bcde75517db; }()); return pls::cs::TimeZoneInfo::CreateCustomTimeZone(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());}); pls::generated::cs_require(cs_target)->cs_59055747f3e8f843 = cs_value; return cs_value; }());
}
}
}

// M:java.util.JTimeZone.GetDefault
pls::cs::Ref<cs_f59223d2c773f078> cs_0ccfddc5d383b7b6() { cs_init_f59223d2c773f078();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JTimeZone.GetDefault",kairo);
{
return ([&]() -> pls::cs::Ref<cs_f59223d2c773f078> { pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { return pls::kairo::native_timezone_id(); }());}); return cs_bcb3a1c31d9b5d23(cs_arg0); }());
}
}
}

// M:java.util.JTimeZone.GetTimeZoneInfo
pls::cs::Ref<pls::cs::TimeZoneInfo> cs_48f0684537101017(pls::cs::Ref<cs_f59223d2c773f078> cs_this) { cs_init_f59223d2c773f078();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JTimeZone.GetTimeZoneInfo",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_59055747f3e8f843; }());
}
}
}
}
}
