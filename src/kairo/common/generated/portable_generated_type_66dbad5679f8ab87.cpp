// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_66dbad5679f8ab87.hpp"
namespace pls::generated {

void cs_66dbad5679f8ab87::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_672aeddf6395a59c,visitor);}

void cs_66dbad5679f8ab87::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_672aeddf6395a59c);}

std::int32_t cs_66dbad5679f8ab87::GetHashCode() {return cs_bc050b58fd51f9b2(std::static_pointer_cast<cs_66dbad5679f8ab87>(shared_from_this()));}

bool cs_66dbad5679f8ab87::Equals(pls::cs::Ref<pls::cs::Object> const& v_obj) {return cs_8682e14f5d0030c8(std::static_pointer_cast<cs_66dbad5679f8ab87>(shared_from_this()),v_obj);}

static pls::cs::DateTime cs_fa93015d6ad485b9_value{};

void cs_init_66dbad5679f8ab87(){static pls::cs::TypeInitState state;state.run("java.util.JDate",[](){
cs_fa93015d6ad485b9_value = pls::cs::evaluate_type_initializer_field("F:java.util.JDate.UNIX_TIME",[&](){return ([&]() { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7b2ull)); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg6 = static_cast<pls::cs::DateTimeKind>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull))); return pls::cs::DateTime(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());});

});}

pls::cs::DateTime& cs_fa93015d6ad485b9(){cs_init_66dbad5679f8ab87();return cs_fa93015d6ad485b9_value;}

// M:java.util.JDate.#ctor
pls::cs::Ref<cs_66dbad5679f8ab87> cs_f437b6bb4cf7b2a6() { cs_init_66dbad5679f8ab87();
{ auto cs_this = pls::cs::make_ref<cs_66dbad5679f8ab87>(); cs_f437b6bb4cf7b2a6_init(cs_this); return cs_this; }
}

void cs_f437b6bb4cf7b2a6_init(pls::cs::Ref<cs_66dbad5679f8ab87> cs_this) {
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JDate.#ctor",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::DateTime::get_UtcNow(); pls::generated::cs_require(cs_target)->cs_672aeddf6395a59c = cs_value; return cs_value; }());
}
}
}

// M:java.util.JDate.#ctor(System.Int64)
pls::cs::Ref<cs_66dbad5679f8ab87> cs_bbcadd583a6daacb(std::int64_t v_date) { cs_init_66dbad5679f8ab87();
{ auto cs_this = pls::cs::make_ref<cs_66dbad5679f8ab87>(); cs_bbcadd583a6daacb_init(cs_this,v_date); return cs_this; }
}

void cs_bbcadd583a6daacb_init(pls::cs::Ref<cs_66dbad5679f8ab87> cs_this,std::int64_t v_date) {
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JDate.#ctor(System.Int64)",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_66dbad5679f8ab87>>(cs_this); std::int64_t cs_arg0 = v_date; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d5b7c3d10f4ecec3(cs_receiver,cs_arg0); }());
}
}
}

// M:java.util.JDate.Equals(System.Object)
bool cs_8682e14f5d0030c8(pls::cs::Ref<cs_66dbad5679f8ab87> cs_this,pls::cs::Ref<pls::cs::Object> v_obj) { cs_init_66dbad5679f8ab87();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JDate.Equals(System.Object)",kairo);
{
if (pls::generated::cs_is<pls::cs::Ref<cs_66dbad5679f8ab87>>(pls::cs::box(v_obj))) {
return ([&]() -> bool { auto cs_left = pls::cs::conv_i64(((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_672aeddf6395a59c; }())).get_TimeOfDay()).get_TotalMilliseconds()); auto cs_right = pls::cs::conv_i64(((([&]() { auto cs_receiver = (pls::cs::unbox<pls::cs::Ref<cs_66dbad5679f8ab87>>(v_obj)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_672aeddf6395a59c; }())).get_TimeOfDay()).get_TotalMilliseconds()); return (cs_left == cs_right); }());
}
return false;
}
}
}
}

// M:java.util.JDate.GetDateTime
pls::cs::DateTime cs_d6f2aad1fde7cbfd(pls::cs::Ref<cs_66dbad5679f8ab87> cs_this) { cs_init_66dbad5679f8ab87();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JDate.GetDateTime",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_672aeddf6395a59c; }());
}
}
}
}

// M:java.util.JDate.GetHashCode
std::int32_t cs_bc050b58fd51f9b2(pls::cs::Ref<cs_66dbad5679f8ab87> cs_this) { cs_init_66dbad5679f8ab87();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JDate.GetHashCode",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(std::static_pointer_cast<pls::cs::Object>(cs_this));return pls::generated::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}
}
}
}

// M:java.util.JDate.GetTime
std::int64_t cs_f91743457814379a(pls::cs::Ref<cs_66dbad5679f8ab87> cs_this) { cs_init_66dbad5679f8ab87();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JDate.GetTime",kairo);
{
return pls::cs::conv_i64(((([&]() -> pls::cs::TimeSpan { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_672aeddf6395a59c; }()); auto cs_right = cs_fa93015d6ad485b9(); return (cs_left - cs_right); }()))).get_TotalMilliseconds());
}
}
}
}

// M:java.util.JDate.SetTime(System.Int64)
void cs_d5b7c3d10f4ecec3(pls::cs::Ref<cs_66dbad5679f8ab87> cs_this,std::int64_t v_time) { cs_init_66dbad5679f8ab87();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JDate.SetTime(System.Int64)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_arg0 = (cs_fa93015d6ad485b9()).get_Year(); auto cs_arg1 = (cs_fa93015d6ad485b9()).get_Month(); auto cs_arg2 = (cs_fa93015d6ad485b9()).get_Day(); auto cs_arg3 = (cs_fa93015d6ad485b9()).get_Hour(); auto cs_arg4 = (cs_fa93015d6ad485b9()).get_Minute(); auto cs_arg5 = (cs_fa93015d6ad485b9()).get_Second(); auto cs_arg6 = (cs_fa93015d6ad485b9()).get_Kind(); return pls::cs::DateTime(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }()); pls::generated::cs_require(cs_target)->cs_672aeddf6395a59c = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::DateTime { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_672aeddf6395a59c; }()); auto cs_arg0 = static_cast<double>(v_time); return cs_receiver.AddMilliseconds(cs_arg0); }());}); pls::generated::cs_require(cs_target)->cs_672aeddf6395a59c = cs_value; return cs_value; }());
}
}
}
}
}
