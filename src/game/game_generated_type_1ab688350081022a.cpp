// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_1ab688350081022a.hpp"
#include "game_generated_type_fd683372658feff4.hpp"
#include "generated/portable_generated_type_5098bfda9cf65745.hpp"
#include "generated/portable_generated_type_ea324a0bbfe717fe.hpp"
#include "generated/portable_generated_type_fb60578b3098a284.hpp"
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
