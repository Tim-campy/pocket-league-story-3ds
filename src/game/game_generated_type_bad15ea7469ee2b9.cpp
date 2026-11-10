// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_0286a0dbe9da0b33.hpp"
#include "game_generated_type_23a020152d468724.hpp"
#include "game_generated_type_2e79f4f38b707be7.hpp"
#include "game_generated_type_2ffa6f51468590ea.hpp"
#include "game_generated_type_3ee77977aa791047.hpp"
#include "game_generated_type_6485f92c2f04639f.hpp"
#include "game_generated_type_72d9658ed61145d6.hpp"
#include "game_generated_type_7eb0a1119bc141dc.hpp"
#include "game_generated_type_bad15ea7469ee2b9.hpp"
#include "game_generated_type_cd97eee87b3216c4.hpp"
#include "generated/portable_generated_type_1ff3292665c8e0c4.hpp"
#include "generated/portable_generated_type_52158c8b20364c2b.hpp"
#include "generated/portable_generated_type_582a926e9c7748a6.hpp"
#include "generated/portable_generated_type_72d9658ed61145d6.hpp"
#include "generated/portable_generated_type_83a7bc36395d16bd.hpp"
#include "generated/portable_generated_type_8c57b816bbc8fd6e.hpp"
#include "generated/portable_generated_type_e7d772862db62924.hpp"
namespace pls::game {

void cs_bad15ea7469ee2b9::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::kairo::IApplication::trace_edges(visitor);}

void cs_bad15ea7469ee2b9::release_edges(){pls::kairo::IApplication::release_edges();}

pls::cs::Ref<pls::kairo::FormManagerBase> cs_bad15ea7469ee2b9::GetFormManager() {return cs_a8d7ff329d533cce(std::static_pointer_cast<cs_bad15ea7469ee2b9>(shared_from_this()));}

void cs_bad15ea7469ee2b9::OnCreate() {cs_fe479bb5365005e6(std::static_pointer_cast<cs_bad15ea7469ee2b9>(shared_from_this()));}

void cs_bad15ea7469ee2b9::OnDestroy() {cs_436207ec3f57c2d7(std::static_pointer_cast<cs_bad15ea7469ee2b9>(shared_from_this()));}

void cs_bad15ea7469ee2b9::OnDraw() {cs_ac69d759d513a4d5(std::static_pointer_cast<cs_bad15ea7469ee2b9>(shared_from_this()));}

void cs_bad15ea7469ee2b9::OnResume() {cs_fb26c3c912586adf(std::static_pointer_cast<cs_bad15ea7469ee2b9>(shared_from_this()));}

void cs_bad15ea7469ee2b9::OnSuspend() {cs_48b06d9d94c6401b(std::static_pointer_cast<cs_bad15ea7469ee2b9>(shared_from_this()));}

void cs_bad15ea7469ee2b9::OnUpdate() {cs_0b355334e1fce7ed(std::static_pointer_cast<cs_bad15ea7469ee2b9>(shared_from_this()));}

static pls::cs::Ref<pls::kairo::SoundBase> cs_18a692dfac4d8961_value{};

static std::int32_t cs_18491103f721bd96_value{};

void cs_init_bad15ea7469ee2b9(){static pls::cs::TypeInitState state;state.run("main.Main",[](){

});}

pls::cs::Ref<pls::kairo::SoundBase>& cs_18a692dfac4d8961(){cs_init_bad15ea7469ee2b9();return cs_18a692dfac4d8961_value;}

std::int32_t& cs_18491103f721bd96(){cs_init_bad15ea7469ee2b9();return cs_18491103f721bd96_value;}

// M:main.Main.#ctor
pls::cs::Ref<cs_bad15ea7469ee2b9> cs_7703d612ae2455fc() { cs_init_bad15ea7469ee2b9();
{ auto cs_this = pls::cs::make_ref<cs_bad15ea7469ee2b9>(); cs_7703d612ae2455fc_init(cs_this); return cs_this; }
}

void cs_7703d612ae2455fc_init(pls::cs::Ref<cs_bad15ea7469ee2b9> cs_this) {
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.Main.#ctor",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(cs_this); pls::cs::Ref<pls::kairo::IApplication> cs_arg0 = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->source_Init(cs_arg0); }());});
}
}
}

// M:main.Main.GetFormManager
pls::cs::Ref<pls::kairo::FormManagerBase> cs_a8d7ff329d533cce(pls::cs::Ref<cs_bad15ea7469ee2b9> cs_this) { cs_init_bad15ea7469ee2b9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.Main.GetFormManager",game);
{
return ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
}
}
}
}

// M:main.Main.GetInstance
pls::cs::Ref<cs_bad15ea7469ee2b9> cs_29da291d171721a6() { cs_init_bad15ea7469ee2b9();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.Main.GetInstance",game);
{
return pls::cs::unbox<pls::cs::Ref<cs_bad15ea7469ee2b9>>(pls::cs::box(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());})));
}
}
}

// M:main.Main.GetJingle
pls::cs::Ref<pls::kairo::SoundBase> cs_ab00e9e29753ed8a() { cs_init_bad15ea7469ee2b9();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.Main.GetJingle",game);
{
return cs_18a692dfac4d8961();
}
}
}

// M:main.Main.OnCreate
void cs_fe479bb5365005e6(pls::cs::Ref<cs_bad15ea7469ee2b9> cs_this) { cs_init_bad15ea7469ee2b9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.Main.OnCreate",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(std::static_pointer_cast<pls::kairo::IApplication>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->source_OnCreate(); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { return pls::generated::cs_f2f74213ca1ea9bc(); }());}); bool cs_arg1 = pls::generated::cs_4cc76a7a43706693(); pls::cs::String cs_arg2 = pls::generated::cs_1ce7e3797101a750(); pls::kairo::native_plugin_init(cs_arg0,cs_arg1,cs_arg2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x118ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetViewport(cs_arg0,cs_arg1); }());});
pls::cs::Ref<cs_2ffa6f51468590ea> v_instance_637 = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }());
pls::cs::Ref<pls::kairo::Canvas> v_instance2_696 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::Canvas> { return pls::kairo::Canvas::GetInstance(); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_696); std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }());}); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetBackground(cs_arg0); }());});
pls::cs::Ref<cs_6485f92c2f04639f> v_instance3_836 = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_696); pls::cs::Ref<pls::kairo::IApplication> cs_arg0 = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetDisplayCurrent(cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance3_836); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = ([&]() { auto cs_receiver = v_instance_637; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_54080fc05a8a4a94; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->ChangeCurrentForm(cs_arg0); }());});
pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jarInflater_979 = pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>{};
pls::cs::run_finally([&]() -> void { try {
pls::cs::Array<pls::cs::String> v_array_1024 = pls::cs::Array<pls::cs::String>{};
pls::cs::Array<pls::cs::Array<pls::cs::String>> v_array2_1053 = pls::cs::Array<pls::cs::Array<pls::cs::String>>{};
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/Main.cs:M:main.Main.OnCreate:1086",([&]() -> pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> { pls::cs::Array<std::uint8_t> cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::kairo::RecordStore::ReadRecord(cs_arg0,cs_arg1); }());}); return pls::generated::cs_9eb68b9f4334471a(cs_arg0); }())); v_jarInflater_979 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_arg0 = v_jarInflater_979; pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0073" u"\x006f" u"\x0066" u"\x0074" u"\x006b" u"\x0065" u"\x0079" u"\x002e" u"\x0074" u"\x0078" u"\x0074" u"",11);return cs_literal;}()); return pls::generated::cs_aa767d3dce39dc9d(cs_arg0,cs_arg1); }());}); v_array_1024 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_array_1024); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left != cs_right; }())) {
([&]() { auto cs_value = pls::source_allocations::completed("new_array","src/Assembly-CSharp/main/Main.cs:M:main.Main.OnCreate:1244",pls::cs::Array<pls::cs::Array<pls::cs::String>>::make((v_array_1024).length())); v_array2_1053 = cs_value; return cs_value; }());
for (std::int32_t v_i_1286 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1286; auto cs_right = (v_array2_1053).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1286; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1286 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array2_1053; auto cs_index = v_i_1286; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1024; auto cs_index = v_i_1286; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0009" u"",1);return cs_literal;}()); bool cs_arg2 = false; bool cs_arg3 = false; bool cs_arg4 = false; return pls::generated::cs_0f7a7a73dac52ca4(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() -> void { pls::cs::Array<pls::cs::Array<pls::cs::String>> cs_arg0 = v_array2_1053; cs_45076861cf1dc76f(cs_arg0); }());
}
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_arg0 = v_jarInflater_979; pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0074" u"\x0065" u"\x0078" u"\x0074" u"\x002e" u"\x0074" u"\x0078" u"\x0074" u"",8);return cs_literal;}()); return pls::generated::cs_aa767d3dce39dc9d(cs_arg0,cs_arg1); }());}); v_array_1024 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_array_1024); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left != cs_right; }())) {
([&]() { auto cs_value = pls::source_allocations::completed("new_array","src/Assembly-CSharp/main/Main.cs:M:main.Main.OnCreate:1559",pls::cs::Array<pls::cs::Array<pls::cs::String>>::make((v_array_1024).length())); v_array2_1053 = cs_value; return cs_value; }());
for (std::int32_t v_j_1601 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_1601; auto cs_right = (v_array2_1053).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_1601; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_1601 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array_1024; auto cs_index = v_j_1601; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1024; auto cs_index = v_j_1601; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005c" u"\x006e" u"",2);return cs_literal;}()); pls::cs::String cs_arg2 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x000a" u"",1);return cs_literal;}()); return pls::generated::cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array2_1053; auto cs_index = v_j_1601; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1024; auto cs_index = v_j_1601; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0009" u"",1);return cs_literal;}()); bool cs_arg2 = false; bool cs_arg3 = false; bool cs_arg4 = false; return pls::generated::cs_0f7a7a73dac52ca4(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() -> void { pls::cs::Array<pls::cs::Array<pls::cs::String>> cs_arg0 = v_array2_1053; cs_4200a27cfd6b898d(cs_arg0); }());
}
} catch(const pls::cs::Exception& cs_caught_752) {auto cs_exception_752=pls::cs::capture_exception(cs_caught_752);
if(pls::cs::exception_is(cs_exception_752,"System.Exception")) {auto v_t_1835=cs_exception_752;{
if (pls::generated::cs_4cc76a7a43706693()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t_1835; return pls::generated::cs_b686603f380b2527(cs_arg0); }());});
}
}}
else {throw;} } }, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_jarInflater_979); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jarInflater_979); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_22ec1e3c74812f59(cs_receiver); }());});
}
});
}
}
}
}

// M:main.Main.OnDestroy
void cs_436207ec3f57c2d7(pls::cs::Ref<cs_bad15ea7469ee2b9> cs_this) { cs_init_bad15ea7469ee2b9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.Main.OnDestroy",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::kairo::request_host_finish(); }());});
}
}
}
}

// M:main.Main.OnDraw
void cs_ac69d759d513a4d5(pls::cs::Ref<cs_bad15ea7469ee2b9> cs_this) { cs_init_bad15ea7469ee2b9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.Main.OnDraw",game);
{
try {
pls::cs::Ref<cs_6485f92c2f04639f> v_instance_4550 = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_4550); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->OnDraw(); }());});
} catch(const pls::cs::Exception& cs_caught_753) {auto cs_exception_753=pls::cs::capture_exception(cs_caught_753);
if(pls::cs::exception_is(cs_exception_753,"System.Exception")) {auto v_t_4625=cs_exception_753;{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t_4625; return pls::generated::cs_b686603f380b2527(cs_arg0); }());});
}}
else {throw;} }
}
}
}
}

// M:main.Main.OnResume
void cs_fb26c3c912586adf(pls::cs::Ref<cs_bad15ea7469ee2b9> cs_this) { cs_init_bad15ea7469ee2b9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.Main.OnResume",game);
{

}
}
}
}

// M:main.Main.OnSuspend
void cs_48b06d9d94c6401b(pls::cs::Ref<cs_bad15ea7469ee2b9> cs_this) { cs_init_bad15ea7469ee2b9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.Main.OnSuspend",game);
{
([&]() -> void { cs_ff6aeae8eb9c621a(); }());
}
}
}
}

// M:main.Main.OnUpdate
void cs_0b355334e1fce7ed(pls::cs::Ref<cs_bad15ea7469ee2b9> cs_this) { cs_init_bad15ea7469ee2b9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.Main.OnUpdate",game);
{
pls::cs::Ref<cs_2ffa6f51468590ea> v_instance_2056 = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }());
pls::cs::Ref<pls::kairo::Canvas> v_instance2_2115 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::Canvas> { return pls::kairo::Canvas::GetInstance(); }());});
pls::cs::Ref<cs_6485f92c2f04639f> v_instance3_2179 = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
try {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6485f92c2f04639f>>(v_instance3_2179); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_dc9257b0bbd34fc9(cs_receiver,cs_arg0); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance3_2179); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Execute(); }());});
if (((([&]() { auto cs_left = pls::cs::box(cs_18a692dfac4d8961()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ((([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundBase>>(cs_18a692dfac4d8961()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetState(); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundBase>>(cs_18a692dfac4d8961()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetState(); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())))) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_old = cs_18491103f721bd96(); auto cs_new = pls::cs::sub_i32(cs_old,1); cs_18491103f721bd96() = cs_new; return cs_old; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }()))) {
([&]() -> void { pls::cs::Ref<pls::kairo::SoundBase> cs_arg0 = pls::cs::Ref<pls::kairo::SoundBase>{}; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); cs_c664e46032693c99(cs_arg0,cs_arg1); }());
}
if (pls::generated::cs_534ddf5c958564fa()) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6485f92c2f04639f>>(v_instance3_2179); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x78ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_dc9257b0bbd34fc9(cs_receiver,cs_arg0); }());
}
if ((pls::generated::cs_3020341c80294797() && pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_2115); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyState(cs_arg0); }());}))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6485f92c2f04639f>>(v_instance3_2179); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x190ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_dc9257b0bbd34fc9(cs_receiver,cs_arg0); }());
}
if ((pls::generated::cs_a0d04541596b7678() && pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_2115); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyState(cs_arg0); }());}))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6485f92c2f04639f>>(v_instance3_2179); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_dc9257b0bbd34fc9(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = cs_rhs; pls::kairo::QualitySettings::set_vSyncCount(cs_value); return cs_value; }());
([&]() { auto cs_rhs = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_6485f92c2f04639f>>(v_instance3_2179); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_db89980015f74cec(cs_receiver); }()); auto cs_value = cs_rhs; pls::kairo::UnityApplication::set_targetFrameRate(cs_value); return cs_value; }());
} catch(const pls::cs::Exception& cs_caught_754) {auto cs_exception_754=pls::cs::capture_exception(cs_caught_754);
if(std::dynamic_pointer_cast<cs_23a020152d468724>(cs_exception_754)) {auto v_ex_2818=std::dynamic_pointer_cast<cs_23a020152d468724>(cs_exception_754);{
pls::cs::Ref<cs_0286a0dbe9da0b33> v_dialog_2858 = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/Main.cs:M:main.Main.OnUpdate:2867",([&]() -> pls::cs::Ref<cs_0286a0dbe9da0b33> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x78ba" u"\x8a8d" u"",2);return cs_literal;}()); return cs_63545d46c6887c12(cs_arg0,cs_arg1); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_2858); pls::cs::String cs_arg0 = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/Main.cs:M:main.Main.OnUpdate:2907",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/Main.cs:M:main.Main.OnUpdate:2907",([&]() { auto cs_left = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x8d77" u"\x52d5" u"\x3067" u"\x304d" u"\x307e" u"\x305b" u"\x3093" u"\x3002" u"",8);return cs_literal;}()); pls::cs::String cs_arg1 = pls::cs::String(u""); return cs_334563e946ad4962(cs_arg0,cs_arg1); }()); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"",4);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([&]() -> pls::cs::String { auto cs_receiver = v_ex_2818; return cs_1b62bb3466e191a0(static_cast<pls::cs::Ref<cs_cd97eee87b3216c4>>(cs_receiver)); }()); return pls::cs::String::concat(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d53653cbf2469429(cs_receiver,cs_arg0); }());
([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_2858); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1727d3688d4d03e6(cs_receiver); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance3_2179); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->RemoveAllForms(); }());});
if (([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance3_2179); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFormsNum(); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Terminate(); }());});
}
}}
else if(pls::cs::exception_is(cs_exception_754,"System.Exception")) {auto v_ex2_3109=cs_exception_754;{
if (pls::generated::cs_4cc76a7a43706693()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_ex2_3109; return pls::generated::cs_b686603f380b2527(cs_arg0); }());});
}
bool v_flag_3193 = false;
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_instance_2056; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e66073c32cd8559; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
pls::cs::Ref<cs_0286a0dbe9da0b33> v_dialog2_3257 = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/Main.cs:M:main.Main.OnUpdate:3267",([&]() -> pls::cs::Ref<cs_0286a0dbe9da0b33> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\xff74" u"\xff97" u"\xff70" u"",3);return cs_literal;}()); return cs_63545d46c6887c12(cs_arg0,cs_arg1); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog2_3257); pls::cs::String cs_arg0 = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/Main.cs:M:main.Main.OnUpdate:3310",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x30a8" u"\x30e9" u"\x30fc" u"\x304c" u"\x767a" u"\x751f" u"\x3057" u"\x307e" u"\x3057" u"\x305f" u"\x3002" u"",11);return cs_literal;}()); auto cs_right = (((pls::generated::cs_b0827224162a4f93()) ? ((pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/Main.cs:M:main.Main.OnUpdate:3346",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x000a" u"",1);return cs_literal;}()); auto cs_right = pls::game::cs_object_string(pls::cs::box(v_ex2_3109)); return pls::cs::String::concat(cs_left,cs_right); }())))) : (pls::cs::String(u"")))); return pls::cs::String::concat(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d53653cbf2469429(cs_receiver,cs_arg0); }());
([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog2_3257); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1727d3688d4d03e6(cs_receiver); }());
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_2115); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetKeypadState(); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x800ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = true; v_flag_3193 = cs_value; return cs_value; }());
}
} else {
pls::cs::String v_text_3518 = pls::cs::String(u"");
for (std::int32_t v_i_3553 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3553; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance3_2179); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFormsNum(); }());}); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3553; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3553 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = pls::source_allocations::completed("concat_call","src/Assembly-CSharp/main/Main.cs:M:main.Main.OnUpdate:3614",pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::box(v_text_3518); auto cs_arg1 = pls::cs::box(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance3_2179); std::int32_t cs_arg0 = v_i_3553; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetForm(cs_arg0); }());})); auto cs_arg2 = pls::cs::box(([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x000a" u"",1);return cs_literal;}())); return pls::game::cs_concat_objects3(cs_arg0,cs_arg1,cs_arg2); }());})); v_text_3518 = cs_value; return cs_value; }());
}
pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/Main.cs:M:main.Main.OnUpdate:3675",([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_instance_2056; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/Main.cs:M:main.Main.OnUpdate:3705",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/Main.cs:M:main.Main.OnUpdate:3705",([&]() { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = v_ex2_3109; return pls::game::cs_require(cs_receiver)->ToString(); }());}); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x003a" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = v_text_3518; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }()));
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_instance_2056; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400ull)); return (cs_left > cs_right); }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_instance_2056; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_instance_2056; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_instance_2056; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::generated::cs_51d6c186b8b049a1(cs_arg0,cs_arg1); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
try {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(v_instance_2056); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_38f421ed8909306b(cs_receiver); }());
} catch(const pls::cs::Exception& cs_caught_755) {auto cs_exception_755=pls::cs::capture_exception(cs_caught_755);
if(pls::cs::exception_is(cs_exception_755,"System.Exception")) {{

}}
else {throw;} }
pls::cs::Ref<cs_0286a0dbe9da0b33> v_dialog3_4020 = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/Main.cs:M:main.Main.OnUpdate:4030",([&]() -> pls::cs::Ref<cs_0286a0dbe9da0b33> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\xff74" u"\xff97" u"\xff70" u"",3);return cs_literal;}()); return cs_63545d46c6887c12(cs_arg0,cs_arg1); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog3_4020); pls::cs::String cs_arg0 = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/Main.cs:M:main.Main.OnUpdate:4073",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x30a8" u"\x30e9" u"\x30fc" u"\x304c" u"\x767a" u"\x751f" u"\x3057" u"\x307e" u"\x3057" u"\x305f" u"\x3002" u"",11);return cs_literal;}()); auto cs_right = (((pls::generated::cs_b0827224162a4f93()) ? ((pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/main/Main.cs:M:main.Main.OnUpdate:4109",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x000a" u"",1);return cs_literal;}()); auto cs_right = pls::game::cs_object_string(pls::cs::box(v_ex2_3109)); return pls::cs::String::concat(cs_left,cs_right); }())))) : (pls::cs::String(u"")))); return pls::cs::String::concat(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d53653cbf2469429(cs_receiver,cs_arg0); }());
([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog3_4020); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1727d3688d4d03e6(cs_receiver); }());
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_2115); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetKeypadState(); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x800ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = true; v_flag_3193 = cs_value; return cs_value; }());
}
}
if (v_flag_3193) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance3_2179); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->RemoveAllForms(); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance3_2179); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/Main.cs:M:main.Main.OnUpdate:4327",([&]() -> pls::cs::Ref<cs_7eb0a1119bc141dc> { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_ex2_3109; return cs_122d27bb8b75d40b(cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Push(cs_arg0); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance3_2179); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->RemoveAllForms(); }());});
}
if (([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance3_2179); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFormsNum(); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Terminate(); }());});
}
}}
else {throw;} }
}
}
}
}

// M:main.Main.SetJingle(kairo.unity.ui.SoundBase,System.Int32)
void cs_c664e46032693c99(pls::cs::Ref<pls::kairo::SoundBase> v_sound,std::int32_t v_wait) { cs_init_bad15ea7469ee2b9();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.Main.SetJingle(kairo.unity.ui.SoundBase,System.Int32)",game);
{
pls::cs::Ref<cs_2ffa6f51468590ea> v_instance_4952 = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }());
pls::cs::Ref<pls::kairo::SoundPlayer> v_instance2_5001 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::SoundPlayer> { return pls::kairo::SoundPlayer::GetInstance(); }());});
([&]() { auto cs_value = v_sound; cs_18a692dfac4d8961() = cs_value; return cs_value; }());
([&]() { auto cs_value = v_wait; cs_18491103f721bd96() = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(cs_18a692dfac4d8961()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundPlayer>>(v_instance2_5001); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_instance_4952; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x33ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetVolume(cs_arg0,cs_arg1); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundPlayer>>(v_instance2_5001); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetVolume(cs_arg0,cs_arg1); }());});
}
}
}
}

pls::cs::Ref<pls::kairo::IApplication> create_application(){return cs_7703d612ae2455fc();}
}
