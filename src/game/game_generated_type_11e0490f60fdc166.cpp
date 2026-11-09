// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_11e0490f60fdc166.hpp"
#include "game_generated_type_18d5b680efad7752.hpp"
#include "game_generated_type_77de402a688eeb9d.hpp"
#include "game_generated_type_89c0d586cfe20341.hpp"
#include "game_generated_type_ed8eabc614ddcf9e.hpp"
#include "generated/portable_generated_type_e7d772862db62924.hpp"
namespace pls::game {

static bool cs_ba8d1e73ebddc909_value{};

static pls::cs::Ref<cs_77de402a688eeb9d> cs_c51cfc9dfddab106_value{};

static pls::cs::List<pls::cs::Ref<cs_18d5b680efad7752>> cs_f7651e4f416e5e3a_value{};

static pls::cs::Ref<pls::cs::Object> cs_4033fa251a2d7de3_value{};

void cs_init_11e0490f60fdc166(){static pls::cs::TypeInitState state;state.run("kairo.unity.io.Http",[](){
cs_c51cfc9dfddab106_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.io.Http.http_",[&](){return ([&]() -> pls::cs::Ref<cs_77de402a688eeb9d> { auto cs_arg0 = false; return cs_e751bd24448f57f3(cs_arg0); }());});
cs_4033fa251a2d7de3_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.io.Http.lock_",[&](){return pls::cs::make_ref<pls::cs::Object>();});
cs_f7651e4f416e5e3a_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.io.Http.httpThreads_",[&](){return pls::cs::List<pls::cs::Ref<cs_18d5b680efad7752>>::make();});

});}

bool& cs_ba8d1e73ebddc909(){cs_init_11e0490f60fdc166();return cs_ba8d1e73ebddc909_value;}

pls::cs::Ref<cs_77de402a688eeb9d>& cs_c51cfc9dfddab106(){cs_init_11e0490f60fdc166();return cs_c51cfc9dfddab106_value;}

pls::cs::List<pls::cs::Ref<cs_18d5b680efad7752>>& cs_f7651e4f416e5e3a(){cs_init_11e0490f60fdc166();return cs_f7651e4f416e5e3a_value;}

pls::cs::Ref<pls::cs::Object>& cs_4033fa251a2d7de3(){cs_init_11e0490f60fdc166();return cs_4033fa251a2d7de3_value;}

// M:kairo.unity.io.Http.Connect(System.String,System.Byte[],System.Boolean,System.Boolean)
pls::cs::Array<pls::cs::Array<std::uint8_t>> cs_54dec6a9b058dafd(pls::cs::String v_url,pls::cs::Array<std::uint8_t> v_send,bool v_check,bool v_split) { cs_init_11e0490f60fdc166();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.Http.Connect(System.String,System.Byte[],System.Boolean,System.Boolean)",kairo);
{try{
pls::cs::Ref<cs_18d5b680efad7752> v_httpThread_870 = ([&]() -> pls::cs::Ref<cs_18d5b680efad7752> { return cs_c97cedff510ba4db(); }());
pls::cs::run_finally([&]() {{
if ((pls::generated::cs_b0827224162a4f93() && pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());})); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckUiThread(); }());}))) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0055" u"\x0049" u"\x30b9" u"\x30ec" u"\x30c3" u"\x30c9" u"\x3067" u"\x901a" u"\x4fe1" u"\x304c" u"\x884c" u"\x308f" u"\x308c" u"\x307e" u"\x3057" u"\x305f" u"\x3002" u"\x000a" u"\x0069" u"\x004f" u"\x0053" u"\x7248" u"\x3067" u"\x306f" u"\x30d5" u"\x30ea" u"\x30fc" u"\x30ba" u"\x3057" u"\x307e" u"\x3059" u"\x3002" u"\x000a" u"",33)); auto cs_right = v_url; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_4d9093772b7b2178(cs_arg0,cs_arg1); }());});
}
throw pls::cs::ReturnFlow<pls::cs::Array<pls::cs::Array<std::uint8_t>>>{([&]() -> pls::cs::Array<pls::cs::Array<std::uint8_t>> { auto cs_receiver = static_cast<pls::cs::Ref<cs_77de402a688eeb9d>>(([&]() { auto cs_receiver = v_httpThread_870; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fda18c2ca470418e; }())); pls::cs::String cs_arg0 = v_url; pls::cs::Array<std::uint8_t> cs_arg1 = v_send; bool cs_arg2 = v_check; bool cs_arg3 = v_split; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_996b0c2cdd719ab2(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }())};
}}, [&]() {
{pls::cs::MonitorScope cs_monitor_344(cs_4033fa251a2d7de3());{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = cs_f7651e4f416e5e3a(); auto cs_arg0 = v_httpThread_870; return cs_receiver.Remove(cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = cs_f7651e4f416e5e3a(); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = v_httpThread_870; cs_receiver.Insert(cs_arg0,cs_arg1); }());});
}}
([&]() { auto cs_target = v_httpThread_870; auto cs_value = false; pls::game::cs_require(cs_target)->cs_79a73cb588797b93 = cs_value; return cs_value; }());
});
}catch(const pls::cs::ReturnFlow<pls::cs::Array<pls::cs::Array<std::uint8_t>>>& cs_return){return cs_return.value;}return pls::cs::invalid_return_flow<pls::cs::Array<pls::cs::Array<std::uint8_t>>>();}
}
}

// M:kairo.unity.io.Http.Connect(System.String,System.Byte[],System.Boolean)
pls::cs::Array<std::uint8_t> cs_97ad906b29abf8fb(pls::cs::String v_url,pls::cs::Array<std::uint8_t> v_send,bool v_check) { cs_init_11e0490f60fdc166();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.Http.Connect(System.String,System.Byte[],System.Boolean)",kairo);
{
return ([&]() { auto cs_array = ([&]() -> pls::cs::Array<pls::cs::Array<std::uint8_t>> { pls::cs::String cs_arg0 = v_url; pls::cs::Array<std::uint8_t> cs_arg1 = v_send; bool cs_arg2 = v_check; bool cs_arg3 = false; return cs_54dec6a9b058dafd(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
}
}
}

// M:kairo.unity.io.Http.get_IsRetryEnable
bool cs_a18d6f92033697cb() { cs_init_11e0490f60fdc166();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.Http.get_IsRetryEnable",kairo);
{return cs_ba8d1e73ebddc909();}
}
}

// M:kairo.unity.io.Http.GetErrorCode
std::int32_t cs_3c5e64aab4be4dca() { cs_init_11e0490f60fdc166();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.Http.GetErrorCode",kairo);
{
pls::cs::Ref<cs_18d5b680efad7752> v_http_1595 = ([&]() -> pls::cs::Ref<cs_18d5b680efad7752> { return cs_424a1f3830f8b281(); }());
if (([&]() { auto cs_left = pls::cs::box(v_http_1595); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
}
return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_77de402a688eeb9d>>(([&]() { auto cs_receiver = v_http_1595; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fda18c2ca470418e; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_bc4c613a89384b31(cs_receiver); }());
}
}
}

// M:kairo.unity.io.Http.GetErrorText
pls::cs::String cs_11f71ced6c57f274() { cs_init_11e0490f60fdc166();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.Http.GetErrorText",kairo);
{
pls::cs::Ref<cs_18d5b680efad7752> v_http_1756 = ([&]() -> pls::cs::Ref<cs_18d5b680efad7752> { return cs_424a1f3830f8b281(); }());
if (([&]() { auto cs_left = pls::cs::box(v_http_1756); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return pls::cs::String(std::u16string(u"",0));
}
return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_77de402a688eeb9d>>(([&]() { auto cs_receiver = v_http_1756; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fda18c2ca470418e; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_a267b8503432886a(cs_receiver); }());
}
}
}

// M:kairo.unity.io.Http.GetErrorUrl
pls::cs::String cs_9ec572c71522df31() { cs_init_11e0490f60fdc166();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.Http.GetErrorUrl",kairo);
{
pls::cs::Ref<cs_18d5b680efad7752> v_http_2081 = ([&]() -> pls::cs::Ref<cs_18d5b680efad7752> { return cs_424a1f3830f8b281(); }());
if (([&]() { auto cs_left = pls::cs::box(v_http_2081); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return pls::cs::String(std::u16string(u"",0));
}
return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_77de402a688eeb9d>>(([&]() { auto cs_receiver = v_http_2081; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fda18c2ca470418e; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_cab4479c3676c376(cs_receiver); }());
}
}
}

// M:kairo.unity.io.Http.GetHttp
pls::cs::Ref<cs_18d5b680efad7752> cs_424a1f3830f8b281() { cs_init_11e0490f60fdc166();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.Http.GetHttp",kairo);
{
if (([&]() -> bool { auto cs_left = (cs_f7651e4f416e5e3a()).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
return pls::cs::Ref<cs_18d5b680efad7752>{};
}
pls::cs::Ref<cs_89c0d586cfe20341> v_jThread_3858 = ([&]() -> pls::cs::Ref<cs_89c0d586cfe20341> { return cs_c84940406f4f068f(); }());
{pls::cs::MonitorScope cs_monitor_388(cs_4033fa251a2d7de3());{
for (std::int32_t v_i_3927 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3927; auto cs_right = (cs_f7651e4f416e5e3a()).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3927; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3927 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_18d5b680efad7752> v_httpThread_3985 = ([&]() { auto cs_array = cs_f7651e4f416e5e3a(); auto cs_index = v_i_3927; return cs_array.get_Item(cs_index); }());
if (([&]() { pls::cs::Ref<cs_89c0d586cfe20341> cs_left = ([&]() { auto cs_receiver = v_httpThread_3985; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_437ffc21e8449636; }()); pls::cs::Ref<cs_89c0d586cfe20341> cs_right = v_jThread_3858; return cs_f0878a49dfa6a661(cs_left,cs_right); }())) {
return v_httpThread_3985;
}
}
for (std::int32_t v_j_4113 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_4113; auto cs_right = (cs_f7651e4f416e5e3a()).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_4113; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_4113 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_18d5b680efad7752> v_httpThread2_4171 = ([&]() { auto cs_array = cs_f7651e4f416e5e3a(); auto cs_index = v_j_4113; return cs_array.get_Item(cs_index); }());
if ((!(([&]() { auto cs_receiver = v_httpThread2_4171; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_79a73cb588797b93; }())))) {
return v_httpThread2_4171;
}
}
return ([&]() { auto cs_array = cs_f7651e4f416e5e3a(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
}}
}
}
}

// M:kairo.unity.io.Http.MakeHttp
pls::cs::Ref<cs_18d5b680efad7752> cs_c97cedff510ba4db() { cs_init_11e0490f60fdc166();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.Http.MakeHttp",kairo);
{
pls::cs::Ref<cs_89c0d586cfe20341> v_jThread_2720 = ([&]() -> pls::cs::Ref<cs_89c0d586cfe20341> { return cs_c84940406f4f068f(); }());
{pls::cs::MonitorScope cs_monitor_345(cs_4033fa251a2d7de3());{
pls::cs::Ref<cs_18d5b680efad7752> v_httpThread_2791 = pls::cs::Ref<cs_18d5b680efad7752>{};
for (std::int32_t v_i_2823 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2823; auto cs_right = (cs_f7651e4f416e5e3a()).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2823; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2823 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_18d5b680efad7752> v_httpThread2_2881 = ([&]() { auto cs_array = cs_f7651e4f416e5e3a(); auto cs_index = v_i_2823; return cs_array.get_Item(cs_index); }());
if ((!((([&]() { pls::cs::Ref<cs_89c0d586cfe20341> cs_left = ([&]() { auto cs_receiver = v_httpThread2_2881; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_437ffc21e8449636; }()); pls::cs::Ref<cs_89c0d586cfe20341> cs_right = v_jThread_2720; return cs_dfac0766ed9ac2a3(cs_left,cs_right); }()))))) {
if (([&]() -> bool { auto cs_left = v_i_2823; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = cs_f7651e4f416e5e3a(); auto cs_arg0 = v_i_2823; cs_receiver.RemoveAt(cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = cs_f7651e4f416e5e3a(); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = v_httpThread2_2881; cs_receiver.Insert(cs_arg0,cs_arg1); }());});
}
([&]() { auto cs_value = v_httpThread2_2881; v_httpThread_2791 = cs_value; return cs_value; }());
break;
}
}
if (([&]() { auto cs_left = pls::cs::box(v_httpThread_2791); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_18d5b680efad7752> { return cs_b1fabebdabf8d17c(); }()); v_httpThread_2791 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_httpThread_2791; auto cs_value = ([&]() -> pls::cs::Ref<cs_77de402a688eeb9d> { bool cs_arg0 = ([&]() -> bool { return cs_a18d6f92033697cb(); }()); return cs_e751bd24448f57f3(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_fda18c2ca470418e = cs_value; return cs_value; }());
([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_httpThread_2791; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fda18c2ca470418e; }()); auto cs_rhs = ([&]() -> bool { return cs_a18d6f92033697cb(); }()); auto cs_value = cs_rhs; cs_2756d68ee4aaa074(static_cast<pls::cs::Ref<cs_77de402a688eeb9d>>(cs_receiver),cs_value); return cs_value; }());
([&]() { auto cs_target = v_httpThread_2791; auto cs_value = v_jThread_2720; pls::game::cs_require(cs_target)->cs_437ffc21e8449636 = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = cs_f7651e4f416e5e3a(); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg1 = v_httpThread_2791; cs_receiver.Insert(cs_arg0,cs_arg1); }());});
if (([&]() -> bool { auto cs_left = (cs_f7651e4f416e5e3a()).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); return (cs_left > cs_right); }())) {
for (std::int32_t v_num_3442 = ([&]() -> std::int32_t { auto cs_left = (cs_f7651e4f416e5e3a()).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_3442; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_3442; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_3442 = cs_new; return cs_old; }())) {
if ((!(([&]() { auto cs_receiver = ([&]() { auto cs_array = cs_f7651e4f416e5e3a(); auto cs_index = v_num_3442; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_79a73cb588797b93; }())))) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = cs_f7651e4f416e5e3a(); auto cs_arg0 = v_num_3442; cs_receiver.RemoveAt(cs_arg0); }());});
break;
}
}
}
}
([&]() { auto cs_target = v_httpThread_2791; auto cs_value = ([&]() -> pls::cs::Ref<cs_77de402a688eeb9d> { bool cs_arg0 = ([&]() -> bool { return cs_a18d6f92033697cb(); }()); return cs_e751bd24448f57f3(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_fda18c2ca470418e = cs_value; return cs_value; }());
([&]() { auto cs_target = v_httpThread_2791; auto cs_value = true; pls::game::cs_require(cs_target)->cs_79a73cb588797b93 = cs_value; return cs_value; }());
return v_httpThread_2791;
}}
}
}
}

// M:kairo.unity.io.Http.PopErrorText
pls::cs::String cs_42eaa879561f279c() { cs_init_11e0490f60fdc166();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.Http.PopErrorText",kairo);
{
pls::cs::Ref<cs_18d5b680efad7752> v_http_2400 = ([&]() -> pls::cs::Ref<cs_18d5b680efad7752> { return cs_424a1f3830f8b281(); }());
if (([&]() { auto cs_left = pls::cs::box(v_http_2400); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return pls::cs::String(std::u16string(u"",0));
}
return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_77de402a688eeb9d>>(([&]() { auto cs_receiver = v_http_2400; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fda18c2ca470418e; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_0c1c941d76211aca(cs_receiver); }());
}
}
}
}
