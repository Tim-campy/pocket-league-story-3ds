// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_1ab688350081022a.hpp"
#include "game_generated_type_52158c8b20364c2b.hpp"
#include "game_generated_type_a0cf9aef6a251bfd.hpp"
#include "game_generated_type_b489b0d33bb37bb8.hpp"
#include "game_generated_type_fd683372658feff4.hpp"
#include "generated/portable_generated_type_18054fa8aeee43c7.hpp"
#include "generated/portable_generated_type_1ff3292665c8e0c4.hpp"
#include "generated/portable_generated_type_3af9088680f95fb3.hpp"
#include "generated/portable_generated_type_5098bfda9cf65745.hpp"
#include "generated/portable_generated_type_51222df74ac70bab.hpp"
#include "generated/portable_generated_type_52158c8b20364c2b.hpp"
#include "generated/portable_generated_type_582a926e9c7748a6.hpp"
#include "generated/portable_generated_type_72d9658ed61145d6.hpp"
#include "generated/portable_generated_type_7de6788b61a5af56.hpp"
#include "generated/portable_generated_type_83a7bc36395d16bd.hpp"
#include "generated/portable_generated_type_86e62a3c0e632a0f.hpp"
#include "generated/portable_generated_type_a0cf9aef6a251bfd.hpp"
#include "generated/portable_generated_type_e7d772862db62924.hpp"
#include "generated/portable_generated_type_ea324a0bbfe717fe.hpp"
#include "generated/portable_generated_type_f8b20a4d1d9d695f.hpp"
#include "generated/portable_generated_type_fb60578b3098a284.hpp"
#include "generated/portable_generated_type_51222df74ac70bab_templates.hpp"
namespace pls::game {

void cs_1ab688350081022a::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_fa8eb5510dacdd09,visitor);pls::cs::trace_value(cs_02dbac76cf838af6,visitor);pls::cs::trace_value(cs_f51be28da9a279d7,visitor);pls::cs::trace_value(cs_107cdef48659996d,visitor);}

void cs_1ab688350081022a::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_fa8eb5510dacdd09);pls::cs::release_value(cs_02dbac76cf838af6);pls::cs::release_value(cs_f51be28da9a279d7);pls::cs::release_value(cs_107cdef48659996d);}

static pls::cs::Ref<cs_1ab688350081022a> cs_eb626cd1b0f88bfd_value{};

void cs_init_1ab688350081022a(){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(cs_eb626cd1b0f88bfd_value,visitor);});static pls::cs::TypeInitState state;state.run("kairo.unity.system.lineup.ui.LineupManager",[](){

});}

pls::cs::Ref<cs_1ab688350081022a>& cs_eb626cd1b0f88bfd(){cs_init_1ab688350081022a();return cs_eb626cd1b0f88bfd_value;}

// M:kairo.unity.system.lineup.ui.LineupManager.#ctor
pls::cs::Ref<cs_1ab688350081022a> cs_c91e4943a0e046f2() { cs_init_1ab688350081022a();
{ auto cs_this = pls::cs::make_ref<cs_1ab688350081022a>(); cs_c91e4943a0e046f2_init(cs_this); return cs_this; }
}

void cs_c91e4943a0e046f2_init(pls::cs::Ref<cs_1ab688350081022a> cs_this) {
cs_this->cs_02dbac76cf838af6 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupManager.cs:M:kairo.unity.system.lineup.ui.LineupManager.#ctor:343",pls::cs::Array<pls::cs::Ref<cs_fd683372658feff4>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))));
cs_this->cs_f51be28da9a279d7 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupManager.cs:M:kairo.unity.system.lineup.ui.LineupManager.#ctor:392",pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))));
cs_this->cs_107cdef48659996d = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupManager.cs:M:kairo.unity.system.lineup.ui.LineupManager.#ctor:445",pls::cs::Array<pls::cs::Ref<cs_fd683372658feff4>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))));
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupManager.#ctor",kairo);
{

}
}
}

// M:kairo.unity.system.lineup.ui.LineupManager.CheckShowableLineup
bool cs_e8395e9d72ce688b(pls::cs::Ref<cs_1ab688350081022a> cs_this) { cs_init_1ab688350081022a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupManager.CheckShowableLineup",kairo);
{
return ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_107cdef48659996d; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }());
}
}
}
}

// M:kairo.unity.system.lineup.ui.LineupManager.ExistPreferences(System.String)
bool cs_8792fac7b186047a(pls::cs::String v_key) { cs_init_1ab688350081022a();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupManager.ExistPreferences(System.String)",kairo);
{try{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());});
([&]() { auto cs_value = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupManager.cs:M:kairo.unity.system.lineup.ui.LineupManager.ExistPreferences(System.String):9905",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006c" u"\x0069" u"\x006e" u"\x0065" u"\x0075" u"\x0070" u"\x002f" u"",7);return cs_literal;}()); auto cs_right = v_key; return pls::cs::String::concat(cs_left,cs_right); }())); v_key = cs_value; return cs_value; }());
pls::cs::Ref<pls::kairo::Storage> v_storage_9933 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::Storage> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); bool cs_arg1 = true; return pls::kairo::Storage::Open(cs_arg0,cs_arg1); }());});
pls::cs::run_finally([&]() {{
throw pls::cs::ReturnFlow<bool>{pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Storage>>(v_storage_9933); pls::cs::String cs_arg0 = v_key; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Exists(cs_arg0); }());})};
}}, [&]() {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Storage>>(v_storage_9933); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Close(); }());});
});
}catch(const pls::cs::ReturnFlow<bool>& cs_return){return cs_return.value;}return pls::cs::invalid_return_flow<bool>();}
}
}

// M:kairo.unity.system.lineup.ui.LineupManager.GetPreferences(System.String)
pls::cs::Array<std::uint8_t> cs_da3162f01de6e1eb(pls::cs::String v_key) { cs_init_1ab688350081022a();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupManager.GetPreferences(System.String)",kairo);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());});
([&]() { auto cs_value = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupManager.cs:M:kairo.unity.system.lineup.ui.LineupManager.GetPreferences(System.String):9748",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006c" u"\x0069" u"\x006e" u"\x0065" u"\x0075" u"\x0070" u"\x002f" u"",7);return cs_literal;}()); auto cs_right = v_key; return pls::cs::String::concat(cs_left,cs_right); }())); v_key = cs_value; return cs_value; }());
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); bool cs_arg1 = true; pls::cs::String cs_arg2 = v_key; return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }());});
}
}
}

// M:kairo.unity.system.lineup.ui.LineupManager.GetShowableLineups
pls::cs::Array<pls::cs::Ref<cs_fd683372658feff4>> cs_39cb7b83aa99de82(pls::cs::Ref<cs_1ab688350081022a> cs_this) { cs_init_1ab688350081022a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupManager.GetShowableLineups",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_107cdef48659996d; }());
}
}
}
}

// M:kairo.unity.system.lineup.ui.LineupManager.LoadLineupList(System.Byte[])
void cs_843876287e794125(pls::cs::Ref<cs_1ab688350081022a> cs_this,pls::cs::Array<std::uint8_t> v_data) { cs_init_1ab688350081022a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupManager.LoadLineupList(System.Byte[])",kairo);
{
try {
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Array<std::uint8_t> cs_arg0 = v_data; return pls::generated::cs_76473a48703be5ba(cs_arg0); }());}); v_data = cs_value; return cs_value; }());
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_vector_1692 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupManager.cs:M:kairo.unity.system.lineup.ui.LineupManager.LoadLineupList(System.Byte[]):1701",([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }()));
pls::cs::Array<pls::cs::String> v_array_1728 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Array<std::uint8_t> cs_arg0 = v_data; pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0055" u"\x0054" u"\x0046" u"\x002d" u"\x0038" u"",5);return cs_literal;}()); return pls::generated::cs_0b9238a3df4985af(cs_arg0,cs_arg1); }());}); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x000a" u"",1);return cs_literal;}()); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());});
pls::cs::Array<pls::cs::Array<pls::cs::Ref<cs_fd683372658feff4>>> v_array2_1807 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupManager.cs:M:kairo.unity.system.lineup.ui.LineupManager.LoadLineupList(System.Byte[]):1816",pls::cs::Array<pls::cs::Array<pls::cs::Ref<cs_fd683372658feff4>>>::make((v_array_1728).length()));
for (std::int32_t v_i_1861 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1861; auto cs_right = (v_array_1728).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1861; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1861 = cs_new; return cs_old; }())) {
pls::cs::Array<pls::cs::String> v_array3_1911 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1728; auto cs_index = v_i_1861; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0009" u"",1);return cs_literal;}()); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());});
std::int32_t v_gameId_1963 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array3_1911; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());});
pls::cs::Array<pls::cs::Ref<cs_fd683372658feff4>> v_array4_2020 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupManager.cs:M:kairo.unity.system.lineup.ui.LineupManager.LoadLineupList(System.Byte[]):2029",pls::cs::Array<pls::cs::Ref<cs_fd683372658feff4>>::make(([&]() -> std::int32_t { auto cs_left = (v_array3_1911).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())));
for (std::int32_t v_j_2078 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); ([&]() -> bool { auto cs_left = v_j_2078; auto cs_right = (v_array3_1911).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_2078; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_2078 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_fd683372658feff4> v_lineupData_2133 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupManager.cs:M:kairo.unity.system.lineup.ui.LineupManager.LoadLineupList(System.Byte[]):2146",([&]() -> pls::cs::Ref<cs_fd683372658feff4> { return cs_2d5c5c827d878352(); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_fd683372658feff4>>(v_lineupData_2133); std::int32_t cs_arg0 = v_gameId_1963; pls::cs::String cs_arg1 = ([&]() { auto cs_array = v_array3_1911; auto cs_index = v_j_2078; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_fec409ca1beaaa06(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_receiver = v_lineupData_2133; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7033e8b866a8dda2; }()); auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0068" u"\x0074" u"\x0074" u"\x0070" u"\x003a" u"\x002f" u"\x002f" u"",7);return cs_literal;}()); return pls::cs::culture_index_of(cs_arg0,cs_arg1); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = v_lineupData_2133; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa8eb5510dacdd09; }()); pls::cs::String cs_arg1 = ([&]() { auto cs_receiver = v_lineupData_2133; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7033e8b866a8dda2; }()); return pls::generated::cs_abfabf5a341e90ae(cs_arg0,cs_arg1); }());}); pls::game::cs_require(cs_target)->cs_7033e8b866a8dda2 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_fd683372658feff4>>(v_lineupData_2133); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e9b3c6f1fee9d739(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() { auto cs_target = v_array4_2020; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_j_2078; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_value = v_lineupData_2133;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
([&]() { auto cs_target = v_array2_1807; auto cs_index = v_i_1861; auto cs_value = v_array4_2020;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
for (std::int32_t v_num_2490 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { return pls::generated::cs_f2f74213ca1ea9bc(); }());}); ([&]() -> bool { auto cs_left = v_num_2490; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_2490; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_2490 = cs_new; return cs_old; }())) {
for (std::int32_t v_k_2549 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_2549; auto cs_right = (v_array2_1807).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_2549; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_2549 = cs_new; return cs_old; }())) {
if (((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = v_array2_1807; auto cs_index = v_k_2549; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<cs_fd683372658feff4>>{}); return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = v_num_2490; auto cs_right = (([&]() { auto cs_array = v_array2_1807; auto cs_index = v_k_2549; return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }())) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_array = v_array2_1807; auto cs_index = v_k_2549; return cs_array.get_Item(cs_index); }()); auto cs_index = v_num_2490; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()))) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_1692); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_array = v_array2_1807; auto cs_index = v_k_2549; return cs_array.get_Item(cs_index); }()); auto cs_index = v_num_2490; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());});
}
}
if (([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_1692); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
break;
}
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupManager.cs:M:kairo.unity.system.lineup.ui.LineupManager.LoadLineupList(System.Byte[]):2812",pls::cs::Array<pls::cs::Ref<cs_fd683372658feff4>>::make(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_1692); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}))); pls::game::cs_require(cs_target)->cs_02dbac76cf838af6 = cs_value; return cs_value; }());
for (std::int32_t v_l_2856 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_2856; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_2856; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_2856 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }()); auto cs_index = v_l_2856; auto cs_value = pls::cs::unbox<pls::cs::Ref<cs_fd683372658feff4>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_1692); std::int32_t cs_arg0 = v_l_2856; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
} catch(const pls::cs::Exception& cs_caught_922) {auto cs_exception_922=pls::cs::capture_exception(cs_caught_922);
if(pls::cs::exception_is(cs_exception_922,"System.Exception")) {auto v_t_2973=cs_exception_922;{
if (pls::generated::cs_4cc76a7a43706693()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t_2973; return pls::generated::cs_b686603f380b2527(cs_arg0); }());});
}
}}
else {throw;} }
}
}
}
}

// M:kairo.unity.system.lineup.ui.LineupManager.PutPreferences(System.String,System.Byte[])
void cs_c8bf4745da1fd956(pls::cs::String v_key,pls::cs::Array<std::uint8_t> v_data) { cs_init_1ab688350081022a();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupManager.PutPreferences(System.String,System.Byte[])",kairo);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());});
([&]() { auto cs_value = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupManager.cs:M:kairo.unity.system.lineup.ui.LineupManager.PutPreferences(System.String,System.Byte[]):9536",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006c" u"\x0069" u"\x006e" u"\x0065" u"\x0075" u"\x0070" u"\x002f" u"",7);return cs_literal;}()); auto cs_right = v_key; return pls::cs::String::concat(cs_left,cs_right); }())); v_key = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }())) {
([&]() { auto cs_value = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupManager.cs:M:kairo.unity.system.lineup.ui.LineupManager.PutPreferences(System.String,System.Byte[]):9590",pls::cs::Array<std::uint8_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)))); v_data = cs_value; return cs_value; }());
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); bool cs_arg1 = true; pls::cs::String cs_arg2 = v_key; pls::cs::Array<std::uint8_t> cs_arg3 = v_data; pls::kairo::Storage::Write(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());});
}
}
}

// M:kairo.unity.system.lineup.ui.LineupManager.Start(System.Int32)
void cs_aff45949a4a776ab(pls::cs::Ref<cs_1ab688350081022a> cs_this,std::int32_t v_num) { cs_init_1ab688350081022a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupManager.Start(System.Int32)",kairo);
{try{
pls::cs::Ref<cs_b489b0d33bb37bb8> v_instance_3100 = ([&]() -> pls::cs::Ref<cs_b489b0d33bb37bb8> { return cs_3eff1227bb0de063(); }());
pls::cs::String v_text_3146 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());})); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetPackageName(); }());});
std::int32_t v_num2_3207 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_text_3146; auto cs_arg1 = char16_t(46); return pls::game::cs_last_index_char1(cs_arg0,cs_arg1); }());});
if (([&]() -> bool { auto cs_left = v_num2_3207; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text_3146; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num2_3207; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::generated::cs_51d6c186b8b049a1(cs_arg0,cs_arg1); }()); v_text_3146 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupManager.cs:M:kairo.unity.system.lineup.ui.LineupManager.Start(System.Int32):3323",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupManager.cs:M:kairo.unity.system.lineup.ui.LineupManager.Start(System.Int32):3323",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006d" u"\x0061" u"\x0072" u"\x006b" u"\x0065" u"\x0074" u"\x003a" u"\x002f" u"\x002f" u"\x0064" u"\x0065" u"\x0074" u"\x0061" u"\x0069" u"\x006c" u"\x0073" u"\x003f" u"\x0069" u"\x0064" u"\x003d" u"\x003c" u"\x0030" u"\x003e" u"\x0026" u"\x0072" u"\x0065" u"\x0066" u"\x0065" u"\x0072" u"\x0072" u"\x0065" u"\x0072" u"\x003d" u"\x0075" u"\x0074" u"\x006d" u"\x005f" u"\x0073" u"\x006f" u"\x0075" u"\x0072" u"\x0063" u"\x0065" u"\x0025" u"\x0033" u"\x0044" u"\x0061" u"\x0070" u"\x0070" u"\x006c" u"\x0069" u"\x0025" u"\x0032" u"\x0036" u"\x0075" u"\x0074" u"\x006d" u"\x005f" u"\x006d" u"\x0065" u"\x0064" u"\x0069" u"\x0075" u"\x006d" u"\x0025" u"\x0033" u"\x0044" u"\x0068" u"\x006f" u"\x0075" u"\x0073" u"\x0065" u"\x005f" u"\x0061" u"\x0064" u"\x0025" u"\x0032" u"\x0036" u"\x0075" u"\x0074" u"\x006d" u"\x005f" u"\x0063" u"\x006f" u"\x006e" u"\x0074" u"\x0065" u"\x006e" u"\x0074" u"\x0025" u"\x0033" u"\x0044" u"",92);return cs_literal;}()); auto cs_right = v_text_3146; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005f" u"\x0074" u"\x0069" u"\x0074" u"\x006c" u"\x0065" u"\x0025" u"\x0032" u"\x0036" u"\x0075" u"\x0074" u"\x006d" u"\x005f" u"\x0063" u"\x0061" u"\x006d" u"\x0070" u"\x0061" u"\x0069" u"\x0067" u"\x006e" u"\x0025" u"\x0033" u"\x0044" u"\x0062" u"\x0061" u"\x006e" u"\x006e" u"\x0065" u"\x0072" u"",30);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); pls::game::cs_require(cs_target)->cs_fa8eb5510dacdd09 = cs_value; return cs_value; }());
pls::cs::String v_key_3471 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0075" u"\x0070" u"\x0064" u"\x0061" u"\x0074" u"\x0065" u"\x002e" u"\x0074" u"\x0078" u"\x0074" u"",10);return cs_literal;}());
pls::cs::String v_key2_3501 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006c" u"\x0069" u"\x0073" u"\x0074" u"\x002e" u"\x0062" u"\x0069" u"\x006e" u"",8);return cs_literal;}());
pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jarInflater_3535 = pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>{};
pls::cs::run_finally([&]() {try {
pls::cs::Array<std::uint8_t> v_array_3578 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006c" u"\x0069" u"\x006e" u"\x0065" u"\x0075" u"\x0070" u"\x002e" u"\x0064" u"\x0061" u"\x0074" u"",10);return cs_literal;}()); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }());});
if (([&]() { auto cs_left = pls::cs::box(pls::cs::box(v_array_3578)); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupManager.cs:M:kairo.unity.system.lineup.ui.LineupManager.Start(System.Int32):3675",([&]() -> pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> { pls::cs::Array<std::uint8_t> cs_arg0 = v_array_3578; return pls::generated::cs_9eb68b9f4334471a(cs_arg0); }())); v_jarInflater_3535 = cs_value; return cs_value; }());
pls::cs::String v_time_3710 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"",0);return cs_literal;}());
try {
pls::cs::Array<std::uint8_t> v_preferences_3747 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::String cs_arg0 = v_key_3471; return cs_da3162f01de6e1eb(cs_arg0); }());
if (([&]() { auto cs_left = pls::cs::box(v_preferences_3747); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left != cs_right; }())) {
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Array<std::uint8_t> cs_arg0 = v_preferences_3747; return pls::generated::cs_0062608f682073ef(cs_arg0); }());}); v_time_3710 = cs_value; return cs_value; }());
}
} catch(const pls::cs::Exception& cs_caught_916) {auto cs_exception_916=pls::cs::capture_exception(cs_caught_916);
if(pls::cs::exception_is(cs_exception_916,"System.Exception")) {auto v_t_3881=cs_exception_916;{
if (pls::generated::cs_4cc76a7a43706693()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t_3881; return pls::generated::cs_b686603f380b2527(cs_arg0); }());});
}
}}
else {throw;} }
try {
pls::cs::Array<pls::cs::Array<std::uint8_t>> v_array2_3991 = ([&]() -> pls::cs::Array<pls::cs::Array<std::uint8_t>> { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_instance_3100); pls::cs::String cs_arg0 = v_time_3710; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_8f0a63baa42add5b(cs_receiver,cs_arg0); }());
if (([&]() { auto cs_left = pls::cs::box(v_array2_3991); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<std::uint8_t>>{}); return cs_left != cs_right; }())) {
([&]() -> void { pls::cs::String cs_arg0 = v_key2_3501; pls::cs::Array<std::uint8_t> cs_arg1 = ([&]() { auto cs_array = v_array2_3991; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); cs_c8bf4745da1fd956(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::String cs_arg0 = v_key_3471; pls::cs::Array<std::uint8_t> cs_arg1 = ([&]() { auto cs_array = v_array2_3991; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); cs_c8bf4745da1fd956(cs_arg0,cs_arg1); }());
}
} catch(const pls::cs::Exception& cs_caught_917) {auto cs_exception_917=pls::cs::capture_exception(cs_caught_917);
if(pls::cs::exception_is(cs_exception_917,"System.Exception")) {auto v_t2_4166=cs_exception_917;{
if (pls::generated::cs_4cc76a7a43706693()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t2_4166; return pls::generated::cs_b686603f380b2527(cs_arg0); }());});
}
}}
else {throw;} }
pls::cs::Array<std::uint8_t> v_array3_4261 = pls::cs::Array<std::uint8_t>{};
try {
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::String cs_arg0 = v_key2_3501; return cs_da3162f01de6e1eb(cs_arg0); }()); v_array3_4261 = cs_value; return cs_value; }());
} catch(const pls::cs::Exception& cs_caught_918) {auto cs_exception_918=pls::cs::capture_exception(cs_caught_918);
if(pls::cs::exception_is(cs_exception_918,"System.Exception")) {auto v_t3_4342=cs_exception_918;{
if (pls::generated::cs_4cc76a7a43706693()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t3_4342; return pls::generated::cs_b686603f380b2527(cs_arg0); }());});
}
}}
else {throw;} }
if (([&]() { auto cs_left = pls::cs::box(v_array3_4261); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }())) {
try {
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jarInflater_3535); pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006c" u"\x0069" u"\x0073" u"\x0074" u"\x002e" u"\x0062" u"\x0069" u"\x006e" u"",8);return cs_literal;}()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_344d0f488664be89(cs_receiver,cs_arg0); }());}); v_array3_4261 = cs_value; return cs_value; }());
} catch(const pls::cs::Exception& cs_caught_919) {auto cs_exception_919=pls::cs::capture_exception(cs_caught_919);
if(pls::cs::exception_is(cs_exception_919,"System.Exception")) {auto v_t4_4538=cs_exception_919;{
if (pls::generated::cs_4cc76a7a43706693()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t4_4538; return pls::generated::cs_b686603f380b2527(cs_arg0); }());});
}
}}
else {throw;} }
}
if (([&]() { auto cs_left = pls::cs::box(v_array3_4261); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }())) {
throw pls::cs::ReturnFlow<void>{};
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_1ab688350081022a>>(cs_this); pls::cs::Array<std::uint8_t> cs_arg0 = v_array3_4261; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_843876287e794125(cs_receiver,cs_arg0); }());
std::int32_t v_num3_4719 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (std::int32_t v_i_4742 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_4742; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_4742; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_4742 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = v_num3_4719; auto cs_right = ([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }()); auto cs_index = v_i_4742; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_468796fb9827f5e6; }()); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }()); auto cs_index = v_i_4742; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_468796fb9827f5e6; }()); v_num3_4719 = cs_value; return cs_value; }());
}
}
std::int32_t v_num4_4889 = ([&]() -> std::int32_t { auto cs_left = v_num3_4719; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = v_num4_4889; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f51be28da9a279d7; }())).length(); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f51be28da9a279d7; }())).length(); v_num4_4889 = cs_value; return cs_value; }());
}
pls::cs::Array<std::int32_t> v_dst_4993 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupManager.cs:M:kairo.unity.system.lineup.ui.LineupManager.Start(System.Int32):4999",pls::cs::Array<std::int32_t>::make(v_num4_4889));
if (([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f51be28da9a279d7; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f51be28da9a279d7; }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(v_dst_4993); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f51be28da9a279d7; }())).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());});
}
([&]() { auto cs_target = cs_this; auto cs_value = v_dst_4993; pls::game::cs_require(cs_target)->cs_f51be28da9a279d7 = cs_value; return cs_value; }());
pls::cs::Array<std::int32_t> v_array4_5156 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupManager.cs:M:kairo.unity.system.lineup.ui.LineupManager.Start(System.Int32):5165",pls::cs::Array<std::int32_t>::make((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }())).length()));
for (std::int32_t v_j_5207 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_5207; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_5207; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_5207 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_fd683372658feff4> v_lineupData_5265 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }()); auto cs_index = v_j_5207; return cs_array.get_Item(cs_index); }());
([&]() { auto cs_target = v_array4_5156; auto cs_index = v_j_5207; auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_fd683372658feff4>>(v_lineupData_5265); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e9b3c6f1fee9d739(cs_receiver); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f51be28da9a279d7; }()); auto cs_index = ([&]() { auto cs_receiver = v_lineupData_5265; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_468796fb9827f5e6; }()); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_fd683372658feff4>>(v_lineupData_5265); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_fa298d824c1e3b8d(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
([&]() { auto cs_target = v_array4_5156; auto cs_index = v_j_5207; auto cs_old = cs_target.at(cs_index); auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x989680ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_lineupData_5265; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_468796fb9827f5e6; }()); auto cs_right = pls::generated::cs_efcdf5d0d7b2cdc2(); return (cs_left == cs_right); }()) && (!(pls::generated::cs_3420b9de46d631e2())))) {
([&]() { auto cs_target = v_array4_5156; auto cs_index = v_j_5207; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
pls::cs::Ref<pls::generated::cs_a0cf9aef6a251bfd> v_jRandom_5576 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupManager.cs:M:kairo.unity.system.lineup.ui.LineupManager.Start(System.Int32):5586",([&]() -> pls::cs::Ref<pls::generated::cs_a0cf9aef6a251bfd> { return pls::generated::cs_783c2dc4bd688739(); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a0cf9aef6a251bfd>>(v_jRandom_5576); std::int64_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());}); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_dea619e5d7523aa2(cs_receiver,cs_arg0); }());
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_vector_5662 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupManager.cs:M:kairo.unity.system.lineup.ui.LineupManager.Start(System.Int32):5671",([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }()));
while (([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_5662); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); auto cs_right = v_num; return (cs_left < cs_right); }())) {
pls::cs::Ref<cs_fd683372658feff4> v_lineupData2_5739 = pls::cs::Ref<cs_fd683372658feff4>{};
std::int32_t v_num5_5768 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (std::int32_t v_k_5792 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_5792; auto cs_right = (v_array4_5156).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_5792; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_5792 = cs_new; return cs_old; }())) {
([&]() { auto cs_old = v_num5_5768; auto cs_rhs = ([&]() { auto cs_array = v_array4_5156; auto cs_index = v_k_5792; return cs_array.get_Item(cs_index); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num5_5768 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num5_5768; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
break;
}
std::int32_t v_num6_5918 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a0cf9aef6a251bfd>>(v_jRandom_5576); std::int32_t cs_arg0 = v_num5_5768; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c4444115878f5069(cs_receiver,cs_arg0); }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); v_num2_3207 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num5_5768 = cs_value; return cs_value; }());
for (std::int32_t v_l_5993 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_5993; auto cs_right = (v_array4_5156).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_5993; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_5993 = cs_new; return cs_old; }())) {
([&]() { auto cs_old = v_num5_5768; auto cs_rhs = ([&]() { auto cs_array = v_array4_5156; auto cs_index = v_l_5993; return cs_array.get_Item(cs_index); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num5_5768 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num6_5918; auto cs_right = v_num5_5768; return (cs_left < cs_right); }())) {
([&]() { auto cs_value = v_l_5993; v_num2_3207 = cs_value; return cs_value; }());
break;
}
}
if (([&]() -> bool { auto cs_left = v_num2_3207; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
break;
}
([&]() { auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }()); auto cs_index = v_num2_3207; return cs_array.get_Item(cs_index); }()); v_lineupData2_5739 = cs_value; return cs_value; }());
try {
pls::cs::String v_fileName_6248 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_fd683372658feff4>>(v_lineupData2_5739); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_84f73b20077879d7(cs_receiver); }());
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jarInflater_3535); pls::cs::String cs_arg0 = v_fileName_6248; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3c7d820c198e8591(cs_receiver,cs_arg0); }())) {
([&]() { auto cs_target = v_lineupData2_5739; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::Image> { pls::cs::Array<std::uint8_t> cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jarInflater_3535); pls::cs::String cs_arg0 = v_fileName_6248; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_344d0f488664be89(cs_receiver,cs_arg0); }());}); auto cs_arg1 = static_cast<pls::kairo::Image::Format>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); auto cs_arg2 = static_cast<pls::kairo::Image::Filter>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); return pls::kairo::Image::Load(cs_arg0,cs_arg1,cs_arg2); }());}); pls::game::cs_require(cs_target)->cs_de2327fcc8b4451b = cs_value; return cs_value; }());
} else if (([&]() -> bool { pls::cs::String cs_arg0 = v_fileName_6248; return cs_8792fac7b186047a(cs_arg0); }())) {
([&]() { auto cs_target = v_lineupData2_5739; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::Image> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::String cs_arg0 = v_fileName_6248; return cs_da3162f01de6e1eb(cs_arg0); }()); auto cs_arg1 = static_cast<pls::kairo::Image::Format>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); auto cs_arg2 = static_cast<pls::kairo::Image::Filter>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); return pls::kairo::Image::Load(cs_arg0,cs_arg1,cs_arg2); }());}); pls::game::cs_require(cs_target)->cs_de2327fcc8b4451b = cs_value; return cs_value; }());
} else {
pls::cs::Array<pls::cs::Array<std::uint8_t>> v_array5_6572 = ([&]() -> pls::cs::Array<pls::cs::Array<std::uint8_t>> { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_instance_3100); pls::cs::String cs_arg0 = v_fileName_6248; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_867838439237eaa5(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = (v_array5_6572).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() -> void { pls::cs::String cs_arg0 = v_fileName_6248; pls::cs::Array<std::uint8_t> cs_arg1 = ([&]() { auto cs_array = v_array5_6572; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); cs_c8bf4745da1fd956(cs_arg0,cs_arg1); }());
([&]() { auto cs_target = v_lineupData2_5739; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::Image> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() { auto cs_array = v_array5_6572; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_arg1 = static_cast<pls::kairo::Image::Format>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); auto cs_arg2 = static_cast<pls::kairo::Image::Filter>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull))); return pls::kairo::Image::Load(cs_arg0,cs_arg1,cs_arg2); }());}); pls::game::cs_require(cs_target)->cs_de2327fcc8b4451b = cs_value; return cs_value; }());
}
}
} catch(const pls::cs::Exception& cs_caught_920) {auto cs_exception_920=pls::cs::capture_exception(cs_caught_920);
if(pls::cs::exception_is(cs_exception_920,"System.Exception")) {auto v_t5_6792=cs_exception_920;{
if (pls::generated::cs_4cc76a7a43706693()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t5_6792; return pls::generated::cs_b686603f380b2527(cs_arg0); }());});
}
}}
else {throw;} }
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_lineupData2_5739; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de2327fcc8b4451b; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_5662); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_lineupData2_5739); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());});
}
([&]() { auto cs_target = v_array4_5156; auto cs_index = v_num2_3207; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
if (([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_5662); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); auto cs_right = v_num; return (cs_left < cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_1ab688350081022a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_04c28d155861f704(cs_receiver); }());
throw pls::cs::ReturnFlow<void>{};
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupManager.cs:M:kairo.unity.system.lineup.ui.LineupManager.Start(System.Int32):7093",pls::cs::Array<pls::cs::Ref<cs_fd683372658feff4>>::make(v_num)); pls::game::cs_require(cs_target)->cs_107cdef48659996d = cs_value; return cs_value; }());
for (std::int32_t v_m_7127 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_m_7127; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_107cdef48659996d; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_m_7127; auto cs_new = pls::cs::add_i32(cs_old,1); v_m_7127 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_107cdef48659996d; }()); auto cs_index = v_m_7127; auto cs_value = pls::cs::unbox<pls::cs::Ref<cs_fd683372658feff4>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_5662); std::int32_t cs_arg0 = v_m_7127; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
std::int32_t v_gameId__7235 = ([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_107cdef48659996d; }()); auto cs_index = v_m_7127; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_468796fb9827f5e6; }());
if (([&]() -> bool { auto cs_left = v_gameId__7235; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f51be28da9a279d7; }())).length(); return (cs_left < cs_right); }())) {
([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f51be28da9a279d7; }()); auto cs_index = v_gameId__7235; auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
}
}
}
} catch(const pls::cs::Exception& cs_caught_921) {auto cs_exception_921=pls::cs::capture_exception(cs_caught_921);
if(pls::cs::exception_is(cs_exception_921,"System.Exception")) {auto v_t6_7372=cs_exception_921;{
if (pls::generated::cs_4cc76a7a43706693()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t6_7372; return pls::generated::cs_b686603f380b2527(cs_arg0); }());});
}
}}
else {throw;} }}, [&]() {
if (([&]() { auto cs_left = pls::cs::box(pls::cs::box(v_jarInflater_3535)); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jarInflater_3535); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_22ec1e3c74812f59(cs_receiver); }());});
}
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>{}; v_jarInflater_3535 = cs_value; return cs_value; }());
});
}catch(const pls::cs::ReturnFlow<void>& cs_return){return;}}
}
}
}

// M:kairo.unity.system.lineup.ui.LineupManager.UnloadImage
void cs_04c28d155861f704(pls::cs::Ref<cs_1ab688350081022a> cs_this) { cs_init_1ab688350081022a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupManager.UnloadImage",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<cs_fd683372658feff4>>{}); return cs_left == cs_right; }())) {
return;
}
for (std::int32_t v_i_7656 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_7656; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_7656; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_7656 = cs_new; return cs_old; }())) {
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }()); auto cs_index = v_i_7656; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }()); auto cs_index = v_i_7656; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de2327fcc8b4451b; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()))) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(([&]() { auto cs_receiver = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }()); auto cs_index = v_i_7656; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de2327fcc8b4451b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Dispose(); }());});
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02dbac76cf838af6; }()); auto cs_index = v_i_7656; return cs_array.get_Item(cs_index); }()); auto cs_value = pls::cs::Ref<pls::kairo::Image>{}; pls::game::cs_require(cs_target)->cs_de2327fcc8b4451b = cs_value; return cs_value; }());
}
}
}
}
}
}

// M:kairo.unity.system.lineup.ui.LineupManager.Write
pls::cs::Array<std::uint8_t> cs_cb1becc75b26486d(pls::cs::Ref<cs_1ab688350081022a> cs_this) { cs_init_1ab688350081022a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupManager.Write",kairo);
{try{
pls::cs::Ref<pls::generated::cs_fb60578b3098a284> v_byteArrayOutputStream_1131 = pls::cs::Ref<pls::generated::cs_fb60578b3098a284>{};
pls::cs::run_finally([&]() {{
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupManager.cs:M:kairo.unity.system.lineup.ui.LineupManager.Write:1201",([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }())); v_byteArrayOutputStream_1131 = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_1131; std::int16_t cs_arg1 = pls::cs::cast_integral<std::int16_t>((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f51be28da9a279d7; }())).length()); pls::generated::cs_74e8efcd697e2e61(cs_arg0,cs_arg1); }());});
for (std::int32_t v_i_1319 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1319; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f51be28da9a279d7; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1319; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1319 = cs_new; return cs_old; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_1131; std::uint8_t cs_arg1 = pls::cs::cast_integral<std::uint8_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f51be28da9a279d7; }()); auto cs_index = v_i_1319; return cs_array.get_Item(cs_index); }())); pls::generated::cs_c43b9bbf725f702e(cs_arg0,cs_arg1); }());});
}
throw pls::cs::ReturnFlow<pls::cs::Array<std::uint8_t>>{pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_1131); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());})};
}}, [&]() {
([&]() -> void { auto cs_conditional = v_byteArrayOutputStream_1131; if(!cs_conditional)return; ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(cs_conditional); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }()); }());
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_fb60578b3098a284>{}; v_byteArrayOutputStream_1131 = cs_value; return cs_value; }());
});
}catch(const pls::cs::ReturnFlow<pls::cs::Array<std::uint8_t>>& cs_return){return cs_return.value;}return pls::cs::invalid_return_flow<pls::cs::Array<std::uint8_t>>();}
}
}
}
}
