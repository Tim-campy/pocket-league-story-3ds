// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_0286a0dbe9da0b33.hpp"
#include "game_generated_type_1406fd70a8ee6f2f.hpp"
#include "game_generated_type_52158c8b20364c2b.hpp"
#include "game_generated_type_68277163e843ed70.hpp"
#include "game_generated_type_72d9658ed61145d6.hpp"
#include "game_generated_type_9487cb83e3a46e0a.hpp"
#include "game_generated_type_98f0a1bec2084c3c.hpp"
#include "game_generated_type_acb158b492b43017.hpp"
#include "game_generated_type_d86010513034d6a0.hpp"
#include "generated/portable_generated_type_1ff3292665c8e0c4.hpp"
#include "generated/portable_generated_type_52158c8b20364c2b.hpp"
#include "generated/portable_generated_type_72d9658ed61145d6.hpp"
#include "generated/portable_generated_type_83a7bc36395d16bd.hpp"
#include "generated/portable_generated_type_9487cb83e3a46e0a.hpp"
#include "generated/portable_generated_type_98f0a1bec2084c3c.hpp"
#include "generated/portable_generated_type_ab1b1085a7ab32b9.hpp"
#include "generated/portable_generated_type_acb158b492b43017.hpp"
#include "generated/portable_generated_type_c0fae45144034cf9.hpp"
#include "generated/portable_generated_type_e7d772862db62924.hpp"
namespace pls::game {

static pls::cs::String cs_885e46a8a2b95893_value{};

static pls::cs::String cs_9d62cf693893d256_value{};

static pls::cs::String cs_8da583a8425c5117_value{};

static std::int32_t cs_237ab1e79f07965b_value{};

static pls::cs::String cs_2fd3deed1e409352_value{};

static pls::cs::Array<pls::cs::Array<pls::cs::String>> cs_aefbaa4ea6f5261a_value{};

pls::cs::String& cs_885e46a8a2b95893(){pls::generated::cs_init_72d9658ed61145d6();return cs_885e46a8a2b95893_value;}

pls::cs::String& cs_9d62cf693893d256(){pls::generated::cs_init_72d9658ed61145d6();return cs_9d62cf693893d256_value;}

pls::cs::String& cs_8da583a8425c5117(){pls::generated::cs_init_72d9658ed61145d6();return cs_8da583a8425c5117_value;}

std::int32_t& cs_237ab1e79f07965b(){pls::generated::cs_init_72d9658ed61145d6();return cs_237ab1e79f07965b_value;}

pls::cs::String& cs_2fd3deed1e409352(){pls::generated::cs_init_72d9658ed61145d6();return cs_2fd3deed1e409352_value;}

pls::cs::Array<pls::cs::Array<pls::cs::String>>& cs_aefbaa4ea6f5261a(){pls::generated::cs_init_72d9658ed61145d6();return cs_aefbaa4ea6f5261a_value;}

// M:kairo.unity.util.Language.ClearSoftLabelTable
void cs_3d765e32623626a4() { pls::generated::cs_init_72d9658ed61145d6();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.ClearSoftLabelTable",kairo);
{
([&]() { auto cs_value = pls::cs::Array<pls::cs::Array<pls::cs::String>>{}; pls::generated::cs_6393581f8e4c2247() = cs_value; return cs_value; }());
}
}
}

// M:kairo.unity.util.Language.ClearTextTable
void cs_5185b14a34385754() { pls::generated::cs_init_72d9658ed61145d6();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.ClearTextTable",kairo);
{
([&]() { auto cs_value = pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::String>>>{}; pls::generated::cs_560940226681a6a6() = cs_value; return cs_value; }());
}
}
}

// M:kairo.unity.util.Language.English
bool cs_dea1d8116ed5aaf1() { pls::generated::cs_init_72d9658ed61145d6();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.English",kairo);
{
return ([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { return pls::generated::cs_f2f74213ca1ea9bc(); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }());
}
}
}

// M:kairo.unity.util.Language.GetCustomLanguagePackLocation
pls::cs::String cs_f2f2f095a1f4f83c() { pls::generated::cs_init_72d9658ed61145d6();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.GetCustomLanguagePackLocation",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x005f" u"\x006c" u"\x006f" u"\x0063" u"\x0061" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"",23);return cs_literal;}()); pls::cs::String cs_arg1 = pls::cs::String{}; return pls::kairo::PlayerPrefs::GetString(cs_arg0,cs_arg1); }());});
}
}
}

// M:kairo.unity.util.Language.GetLanguageCode
pls::cs::String cs_154f0344cd538956() { pls::generated::cs_init_72d9658ed61145d6();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.GetLanguageCode",kairo);
{
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }());})) {
return ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006a" u"\x0061" u"\x002d" u"\x004a" u"\x0050" u"",5);return cs_literal;}());
}
return cs_9d62cf693893d256_value;
}
}
}

// M:kairo.unity.util.Language.GetLanguagePackFile
pls::cs::String cs_9f46a4d7d50765c3() { pls::generated::cs_init_72d9658ed61145d6();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.GetLanguagePackFile",kairo);
{
return cs_8da583a8425c5117_value;
}
}
}

// M:kairo.unity.util.Language.GetLanguagePackInfo(System.Byte[])
pls::cs::Ref<cs_d86010513034d6a0> cs_70bf143fda522859(pls::cs::Array<std::uint8_t> v_data) { pls::generated::cs_init_72d9658ed61145d6();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.GetLanguagePackInfo(System.Byte[])",kairo);
{try{
pls::cs::Ref<cs_d86010513034d6a0> v_languagePackInfo_62722 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.GetLanguagePackInfo(System.Byte[]):62741",([&]() -> pls::cs::Ref<cs_d86010513034d6a0> { return cs_73cc6ce27c640033(); }()));
if (([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }())) {
throw pls::cs::ReturnFlow<pls::cs::Ref<cs_d86010513034d6a0>>{v_languagePackInfo_62722};
}
{pls::cs::Ref<pls::cs::MemoryStream> v_stream_62848=pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.GetLanguagePackInfo(System.Byte[]):62857",([&]() { auto cs_arg0 = v_data; return pls::cs::make_ref<pls::cs::MemoryStream>(cs_arg0); }()));pls::cs::run_finally([&](){{
{pls::cs::Ref<pls::cs::RuntimeStreamReader> v_streamReader_62910=pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.GetLanguagePackInfo(System.Byte[]):62925",([&]() { auto cs_arg0 = v_stream_62848; auto cs_arg1 = pls::cs::RuntimeEncoding::get_UTF8(); return pls::cs::make_ref<pls::cs::RuntimeStreamReader>(cs_arg0,cs_arg1); }()));pls::cs::run_finally([&](){{
while (true) {
pls::cs::String v_text_63010 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = v_streamReader_62910; return pls::game::cs_require(cs_receiver)->ReadLine(); }());});
if (([&]() { auto cs_left = pls::cs::box(v_text_63010); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
break;
}
std::int32_t v_num_63106 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_text_63010; auto cs_arg1 = char16_t(44); return pls::game::cs_index_char1(cs_arg0,cs_arg1); }());});
if (([&]() -> bool { auto cs_left = v_num_63106; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
break;
}
pls::cs::String v_text2_63195 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_text_63010; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = v_num_63106; return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }());});
pls::cs::String v_text3_63240 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_text_63010; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num_63106; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::game::cs_substring1(cs_arg0,cs_arg1); }());});
pls::cs::Ref<pls::cs::RegexMatch> v_match_63285 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::RegexMatch> { auto cs_arg0 = v_text2_63195; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005e" u"\x005c" u"\x0073" u"\x002a" u"\x0022" u"\x0028" u"\x002e" u"\x002a" u"\x0029" u"\x0022" u"\x005c" u"\x0073" u"\x002a" u"\x0024" u"",14);return cs_literal;}()); return pls::cs::RuntimeRegex::Match(cs_arg0,cs_arg1); }());});
if (pls::game::cs_require(v_match_63285)->get_Success()) {
([&]() { auto cs_value = pls::game::cs_require(([&](){auto cs_receiver=pls::game::cs_require(v_match_63285)->get_Groups();auto cs_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));return pls::game::cs_require(cs_receiver)->get_Item(cs_index);}()))->get_Value(); v_text2_63195 = cs_value; return cs_value; }());
}
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_text2_63195; return pls::cs::string_trim(cs_arg0); }());}); return pls::cs::culture_to_lower(cs_arg0); }());}); v_text2_63195 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::RegexMatch> { auto cs_arg0 = v_text3_63240; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005e" u"\x005c" u"\x0073" u"\x002a" u"\x0022" u"\x0028" u"\x002e" u"\x002a" u"\x0029" u"\x0022" u"\x005c" u"\x0073" u"\x002a" u"\x0024" u"",14);return cs_literal;}()); return pls::cs::RuntimeRegex::Match(cs_arg0,cs_arg1); }());}); v_match_63285 = cs_value; return cs_value; }());
if (pls::game::cs_require(v_match_63285)->get_Success()) {
([&]() { auto cs_value = pls::game::cs_require(([&](){auto cs_receiver=pls::game::cs_require(v_match_63285)->get_Groups();auto cs_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));return pls::game::cs_require(cs_receiver)->get_Item(cs_index);}()))->get_Value(); v_text3_63240 = cs_value; return cs_value; }());
}
if ((!(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_text2_63195; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0040" u"",1);return cs_literal;}()); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }());})))) {
break;
}
{auto cs_switch_value_63657=v_text2_63195;std::int32_t cs_switch_index_63657=-1;if(cs_switch_value_63657==([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0040" u"\x0074" u"\x0069" u"\x0074" u"\x006c" u"\x0065" u"",6);return cs_literal;}()))cs_switch_index_63657=0;if(cs_switch_value_63657==([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0040" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"",9);return cs_literal;}()))cs_switch_index_63657=1;if(cs_switch_value_63657==([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0040" u"\x0073" u"\x0063" u"\x0061" u"\x006c" u"\x0065" u"",6);return cs_literal;}()))cs_switch_index_63657=2;if(cs_switch_value_63657==([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0040" u"\x0061" u"\x0070" u"\x0070" u"\x006c" u"\x0069" u"",6);return cs_literal;}()))cs_switch_index_63657=3;if(cs_switch_value_63657==([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0040" u"\x0076" u"\x0065" u"\x0072" u"\x0073" u"\x0069" u"\x006f" u"\x006e" u"",8);return cs_literal;}()))cs_switch_index_63657=4;if(cs_switch_value_63657==([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0040" u"\x0061" u"\x0075" u"\x0074" u"\x0068" u"\x006f" u"\x0072" u"",7);return cs_literal;}()))cs_switch_index_63657=5;switch(cs_switch_index_63657){
case 0:
{
([&]() { auto cs_target = v_languagePackInfo_62722; auto cs_value = v_text3_63240; pls::game::cs_require(cs_target)->cs_5a7be69e432288e7 = cs_value; return cs_value; }());
break;
}
case 1:
{
([&]() { auto cs_target = v_languagePackInfo_62722; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_text3_63240; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005b" u"\x005e" u"\x0061" u"\x002d" u"\x007a" u"\x0041" u"\x002d" u"\x005a" u"\x005c" u"\x002d" u"\x005d" u"",11);return cs_literal;}()); auto cs_arg2 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"",0);return cs_literal;}()); return pls::cs::RuntimeRegex::Replace(cs_arg0,cs_arg1,cs_arg2); }());}); pls::game::cs_require(cs_target)->cs_559ce244f31c7bdd = cs_value; return cs_value; }());
break;
}
case 2:
{
([&]() { auto cs_target = v_languagePackInfo_62722; auto cs_value = v_text3_63240; pls::game::cs_require(cs_target)->cs_ab5676da2e5daeda = cs_value; return cs_value; }());
break;
}
case 3:
{
([&]() { auto cs_target = v_languagePackInfo_62722; auto cs_value = v_text3_63240; pls::game::cs_require(cs_target)->cs_9bdb4dbfef785f37 = cs_value; return cs_value; }());
break;
}
case 4:
{
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::RegexMatch> { auto cs_arg0 = v_text3_63240; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0028" u"\x005b" u"\x0030" u"\x002d" u"\x0039" u"\x002e" u"\x005d" u"\x002b" u"\x0029" u"",9);return cs_literal;}()); return pls::cs::RuntimeRegex::Match(cs_arg0,cs_arg1); }());}); v_match_63285 = cs_value; return cs_value; }());
if (pls::game::cs_require(v_match_63285)->get_Success()) {
([&]() { auto cs_target = v_languagePackInfo_62722; auto cs_value = pls::game::cs_require(([&](){auto cs_receiver=pls::game::cs_require(v_match_63285)->get_Groups();auto cs_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));return pls::game::cs_require(cs_receiver)->get_Item(cs_index);}()))->get_Value(); pls::game::cs_require(cs_target)->cs_48810e5f53569359 = cs_value; return cs_value; }());
}
break;
}
case 5:
{
([&]() { auto cs_target = v_languagePackInfo_62722; auto cs_value = v_text3_63240; pls::game::cs_require(cs_target)->cs_9cd046221a0a73b2 = cs_value; return cs_value; }());
break;
}
}}
}
}},[&](){if(v_streamReader_62910){pls::game::cs_require(v_streamReader_62910)->Dispose();}});}
}},[&](){if(v_stream_62848){pls::game::cs_require(v_stream_62848)->Dispose();}});}
pls::cs::String v_title_64312 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = v_languagePackInfo_62722; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_559ce244f31c7bdd; }()); return cs_3b656a07e9770826(cs_arg0); }());
if (([&]() { auto cs_left = pls::cs::box(v_title_64312); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = v_languagePackInfo_62722; auto cs_value = v_title_64312; pls::game::cs_require(cs_target)->cs_5a7be69e432288e7 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = v_languagePackInfo_62722; auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x004b" u"\x0061" u"\x0069" u"\x0072" u"\x006f" u"\x0073" u"\x006f" u"\x0066" u"\x0074" u"",9);return cs_literal;}()); pls::game::cs_require(cs_target)->cs_9cd046221a0a73b2 = cs_value; return cs_value; }());
throw pls::cs::ReturnFlow<pls::cs::Ref<cs_d86010513034d6a0>>{v_languagePackInfo_62722};
}catch(const pls::cs::ReturnFlow<pls::cs::Ref<cs_d86010513034d6a0>>& cs_return){return cs_return.value;}return pls::cs::invalid_return_flow<pls::cs::Ref<cs_d86010513034d6a0>>();}
}
}

// M:kairo.unity.util.Language.GetSystemLanguagePackFiles
pls::cs::Array<pls::cs::Array<pls::cs::String>> cs_2d156cd0932d3318() { pls::generated::cs_init_72d9658ed61145d6();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.GetSystemLanguagePackFiles",kairo);
{
return cs_aefbaa4ea6f5261a_value;
}
}
}

// M:kairo.unity.util.Language.GetTitle(System.String)
pls::cs::String cs_3b656a07e9770826(pls::cs::String v_code) { pls::generated::cs_init_72d9658ed61145d6();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.GetTitle(System.String)",kairo);
{
pls::cs::String v_result_67100 = pls::cs::String{};
if (([&]() { auto cs_left = pls::cs::box(v_code); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_code; return pls::cs::culture_to_lower(cs_arg0); }());}); v_code = cs_value; return cs_value; }());
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_code; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005e" u"\x006a" u"\x0061" u"",3);return cs_literal;}()); return pls::cs::RuntimeRegex::IsMatch(cs_arg0,cs_arg1); }());})) {
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x65e5" u"\x672c" u"\x8a9e" u"",3);return cs_literal;}()); v_result_67100 = cs_value; return cs_value; }());
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_code; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005e" u"\x0065" u"\x006e" u"\x0028" u"\x002d" u"\x0075" u"\x0073" u"\x0029" u"\x003f" u"\x0024" u"",10);return cs_literal;}()); return pls::cs::RuntimeRegex::IsMatch(cs_arg0,cs_arg1); }());})) {
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0045" u"\x006e" u"\x0067" u"\x006c" u"\x0069" u"\x0073" u"\x0068" u"",7);return cs_literal;}()); v_result_67100 = cs_value; return cs_value; }());
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_code; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005e" u"\x007a" u"\x0068" u"\x0028" u"\x002d" u"\x0063" u"\x006e" u"\x007c" u"\x002d" u"\x0073" u"\x0067" u"\x0029" u"",12);return cs_literal;}()); return pls::cs::RuntimeRegex::IsMatch(cs_arg0,cs_arg1); }());})) {
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x4e2d" u"\x6587" u"\x0028" u"\x7b80" u"\x4f53" u"\x0029" u"",6);return cs_literal;}()); v_result_67100 = cs_value; return cs_value; }());
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_code; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005e" u"\x007a" u"\x0068" u"\x0028" u"\x002d" u"\x0074" u"\x0077" u"\x007c" u"\x002d" u"\x0068" u"\x006b" u"\x007c" u"\x002d" u"\x006d" u"\x006f" u"\x0029" u"\x003f" u"",17);return cs_literal;}()); return pls::cs::RuntimeRegex::IsMatch(cs_arg0,cs_arg1); }());})) {
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x4e2d" u"\x6587" u"\x0028" u"\x7e41" u"\x9ad4" u"\x0029" u"",6);return cs_literal;}()); v_result_67100 = cs_value; return cs_value; }());
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_code; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005e" u"\x006b" u"\x006f" u"",3);return cs_literal;}()); return pls::cs::RuntimeRegex::IsMatch(cs_arg0,cs_arg1); }());})) {
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\xd55c" u"\xad6d" u"\xc5b4" u"",3);return cs_literal;}()); v_result_67100 = cs_value; return cs_value; }());
}
return v_result_67100;
}
}
}

// M:kairo.unity.util.Language.Init
void cs_a56548cef82c6906() { pls::generated::cs_init_72d9658ed61145d6();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.Init",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(cs_aefbaa4ea6f5261a_value); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<pls::cs::String>>{}); return cs_left == cs_right; }())) {
pls::cs::String v_filename_25734 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x002e" u"\x0064" u"\x0061" u"\x0074" u"",12);return cs_literal;}());
pls::cs::List<pls::cs::Array<pls::cs::String>> v_list_25780 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.Init:25787",pls::cs::List<pls::cs::Array<pls::cs::String>>::make());
if (([&]() -> bool { auto cs_left = pls::generated::cs_0dc92919b1751224(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
if (([&]() -> bool { return cs_dea1d8116ed5aaf1(); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = v_list_25780; auto cs_arg0 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.Init:25888",([&](){auto cs_initial_array_766=pls::cs::Array<pls::cs::String>::make(3);cs_initial_array_766.at(0)=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0045" u"\x006e" u"\x0067" u"\x006c" u"\x0069" u"\x0073" u"\x0068" u"",7);return cs_literal;}());cs_initial_array_766.at(1)=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"",0);return cs_literal;}());cs_initial_array_766.at(2)=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0065" u"\x006e" u"\x002d" u"\x0055" u"\x0053" u"",5);return cs_literal;}());return cs_initial_array_766;}())); cs_receiver.Add(cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = v_list_25780; auto cs_arg0 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.Init:25946",([&](){auto cs_initial_array_767=pls::cs::Array<pls::cs::String>::make(3);cs_initial_array_767.at(0)=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x65e5" u"\x672c" u"\x8a9e" u"",3);return cs_literal;}());cs_initial_array_767.at(1)=pls::generated::cs_3fb70c2eded7c9ff();cs_initial_array_767.at(2)=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"",0);return cs_literal;}());return cs_initial_array_767;}())); cs_receiver.Add(cs_arg0); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = v_list_25780; auto cs_arg0 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.Init:26031",([&](){auto cs_initial_array_768=pls::cs::Array<pls::cs::String>::make(3);cs_initial_array_768.at(0)=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x65e5" u"\x672c" u"\x8a9e" u"",3);return cs_literal;}());cs_initial_array_768.at(1)=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"",0);return cs_literal;}());cs_initial_array_768.at(2)=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006a" u"\x0061" u"\x002d" u"\x004a" u"\x0050" u"",5);return cs_literal;}());return cs_initial_array_768;}())); cs_receiver.Add(cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = v_list_25780; auto cs_arg0 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.Init:26085",([&](){auto cs_initial_array_769=pls::cs::Array<pls::cs::String>::make(3);cs_initial_array_769.at(0)=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0045" u"\x006e" u"\x0067" u"\x006c" u"\x0069" u"\x0073" u"\x0068" u"",7);return cs_literal;}());cs_initial_array_769.at(1)=pls::generated::cs_01c4bf6216ab6adc();cs_initial_array_769.at(2)=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"",0);return cs_literal;}());return cs_initial_array_769;}())); cs_receiver.Add(cs_arg0); }());});
}
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = v_list_25780; auto cs_arg0 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.Init:26176",([&](){auto cs_initial_array_770=pls::cs::Array<pls::cs::String>::make(3);cs_initial_array_770.at(0)=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0045" u"\x006e" u"\x0067" u"\x006c" u"\x0069" u"\x0073" u"\x0068" u"",7);return cs_literal;}());cs_initial_array_770.at(1)=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"",0);return cs_literal;}());cs_initial_array_770.at(2)=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0065" u"\x006e" u"\x002d" u"\x0055" u"\x0053" u"",5);return cs_literal;}());return cs_initial_array_770;}())); cs_receiver.Add(cs_arg0); }());});
}
pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jarInflater_26241 = pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>{};
pls::cs::run_finally([&]() -> void { try {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); pls::cs::String cs_arg1 = v_filename_25734; return pls::kairo::Storage::Exists(cs_arg0,cs_arg1); }());})) {
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.Init:26340",([&]() -> pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> { pls::cs::Array<std::uint8_t> cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = v_filename_25734; return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }());}); return pls::generated::cs_9eb68b9f4334471a(cs_arg0); }())); v_jarInflater_26241 = cs_value; return cs_value; }());
pls::cs::Array<pls::cs::String> v_files_26406 = ([&]() -> pls::cs::Array<pls::cs::String> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jarInflater_26241); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_13b4a0fe102f7702(cs_receiver); }());
{ auto cs_each771 = v_files_26406; for (std::int32_t cs_i771=0; cs_i771<cs_each771.length(); ++cs_i771) { pls::cs::String v_text_26444 = cs_each771.get_Item(cs_i771); {
try {
pls::cs::Ref<cs_d86010513034d6a0> v_languagePackInfo_26528 = ([&]() -> pls::cs::Ref<cs_d86010513034d6a0> { pls::cs::Array<std::uint8_t> cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jarInflater_26241); pls::cs::String cs_arg0 = v_text_26444; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_344d0f488664be89(cs_receiver,cs_arg0); }());}); return cs_70bf143fda522859(cs_arg0); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = v_list_25780; auto cs_arg0 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.Init:26612",([&](){auto cs_initial_array_772=pls::cs::Array<pls::cs::String>::make(3);cs_initial_array_772.at(0)=([&]() { auto cs_receiver = v_languagePackInfo_26528; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5a7be69e432288e7; }());cs_initial_array_772.at(1)=v_text_26444;cs_initial_array_772.at(2)=([&]() { auto cs_receiver = v_languagePackInfo_26528; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_559ce244f31c7bdd; }());return cs_initial_array_772;}())); cs_receiver.Add(cs_arg0); }());});
} catch(const pls::cs::Exception& cs_caught_773) {auto cs_exception_773=pls::cs::capture_exception(cs_caught_773);
if(pls::cs::exception_is(cs_exception_773,"System.Exception")) {{

}}
else {throw;} }
} } }
}
} catch(const pls::cs::Exception& cs_caught_774) {auto cs_exception_774=pls::cs::capture_exception(cs_caught_774);
if(pls::cs::exception_is(cs_exception_774,"System.Exception")) {{

}}
else {throw;} } }, [&]() {
if ((([&]() { auto cs_left = pls::cs::box(pls::cs::box((v_jarInflater_26241))); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()))) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>((v_jarInflater_26241)); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_22ec1e3c74812f59(cs_receiver); }());});
}
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>{}; v_jarInflater_26241 = cs_value; return cs_value; }());
});
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::Array<pls::cs::String>> { auto cs_receiver = v_list_25780; return cs_receiver.ToArray(); }());}); cs_aefbaa4ea6f5261a_value = cs_value; return cs_value; }());
}
if ((([&]() -> bool { auto cs_left = pls::generated::cs_593dc05baccea7cd(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()) && pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"",14);return cs_literal;}()); return pls::kairo::PlayerPrefs::HasKey(cs_arg0); }());}))) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"",14);return cs_literal;}()); pls::kairo::PlayerPrefs::DeleteKey(cs_arg0); }());});
if (pls::generated::cs_4cc76a7a43706693()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0050" u"\x006c" u"\x0061" u"\x0079" u"\x0065" u"\x0072" u"\x0050" u"\x0072" u"\x0065" u"\x0066" u"\x0073" u"\x002e" u"\x0044" u"\x0065" u"\x006c" u"\x0065" u"\x0074" u"\x0065" u"\x004b" u"\x0065" u"\x0079" u"\x0028" u"\x0050" u"\x0052" u"\x0045" u"\x0046" u"\x005f" u"\x004c" u"\x0041" u"\x004e" u"\x0047" u"\x005f" u"\x0050" u"\x0041" u"\x0043" u"\x004b" u"\x0029" u"",37);return cs_literal;}()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());});
}
}
if (((!(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"",14);return cs_literal;}()); return pls::kairo::PlayerPrefs::HasKey(cs_arg0); }());}))) && ([&]() -> bool { auto cs_left = pls::generated::cs_0dc92919b1751224(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()))) {
pls::cs::Ref<pls::generated::cs_c0fae45144034cf9> v_jLocale_27234 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::generated::cs_c0fae45144034cf9> { return pls::generated::cs_7faa6468ee6a5cd1(); }());});
pls::cs::String v_text2_27277 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_c0fae45144034cf9>>(v_jLocale_27234); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_af0690d8cc2a7c96(cs_receiver); }());}); return pls::cs::culture_to_lower(cs_arg0); }());});
pls::cs::String v_text3_27329 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_c0fae45144034cf9>>(v_jLocale_27234); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_9731cae4f8bdbaf7(cs_receiver); }());}); return pls::cs::culture_to_lower(cs_arg0); }());});
if (([&]() -> bool { auto cs_left = v_text2_27277; auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x007a" u"\x0068" u"",2);return cs_literal;}()); return (cs_left == cs_right); }())) {
if (([&]() -> bool { auto cs_left = v_text3_27329; auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0073" u"\x0067" u"",2);return cs_literal;}()); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0063" u"\x0068" u"",2);return cs_literal;}()); v_text3_27329 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_text3_27329; auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0068" u"\x006b" u"",2);return cs_literal;}()); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0074" u"\x0077" u"",2);return cs_literal;}()); v_text3_27329 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_text3_27329; auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006d" u"\x006f" u"",2);return cs_literal;}()); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0074" u"\x0077" u"",2);return cs_literal;}()); v_text3_27329 = cs_value; return cs_value; }());
}
}
pls::cs::Array<pls::cs::String> v_array_27591 = pls::cs::Array<pls::cs::String>{};
pls::cs::Array<pls::cs::String> v_array2_27618 = pls::cs::Array<pls::cs::String>{};
pls::cs::Array<pls::cs::Array<pls::cs::String>> v_array3_27648 = cs_aefbaa4ea6f5261a_value;
{ auto cs_each775 = v_array3_27648; for (std::int32_t cs_i775=0; cs_i775<cs_each775.length(); ++cs_i775) { pls::cs::Array<pls::cs::String> v_array4_27683 = cs_each775.get_Item(cs_i775); {
pls::cs::String v_text4_27737 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = v_array4_27683; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::culture_to_lower(cs_arg0); }());});
if (([&]() -> bool { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.Init:27775",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.Init:27775",([&]() { auto cs_left = v_text2_27277; auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002d" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = v_text3_27329; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = v_text4_27737; return (cs_left == cs_right); }())) {
([&]() { auto cs_value = v_array4_27683; v_array_27591 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_text2_27277; auto cs_right = ([&]() { auto cs_array = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=v_text4_27737;auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(45);return pls::cs::string_split(cs_text,cs_separators);}());}); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = v_array4_27683; v_array2_27618 = cs_value; return cs_value; }());
}
} } }
if (([&]() -> bool { auto cs_left = pls::generated::cs_593dc05baccea7cd(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
if (pls::generated::cs_4cc76a7a43706693()) {
if (([&]() { auto cs_left = pls::cs::box(v_array_27591); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left == cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0062" u"\x0065" u"\x0073" u"\x0074" u"\x004c" u"\x0061" u"\x006e" u"\x0067" u"\x0050" u"\x0061" u"\x0063" u"\x006b" u"\x0020" u"\x003d" u"\x003d" u"\x0020" u"\x006e" u"\x0075" u"\x006c" u"\x006c" u"",20);return cs_literal;}()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.Init:28106",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0062" u"\x0065" u"\x0073" u"\x0074" u"\x004c" u"\x0061" u"\x006e" u"\x0067" u"\x0050" u"\x0061" u"\x0063" u"\x006b" u"\x005b" u"\x0031" u"\x005d" u"",15);return cs_literal;}()); auto cs_right = ([&]() { auto cs_array = v_array_27591; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());});
}
if (([&]() { auto cs_left = pls::cs::box(v_array2_27618); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left == cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006d" u"\x0061" u"\x0074" u"\x0063" u"\x0068" u"\x004c" u"\x0061" u"\x006e" u"\x0067" u"\x0050" u"\x0061" u"\x0063" u"\x006b" u"\x0020" u"\x003d" u"\x003d" u"\x0020" u"\x006e" u"\x0075" u"\x006c" u"\x006c" u"",21);return cs_literal;}()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.Init:28264",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006d" u"\x0061" u"\x0074" u"\x0063" u"\x0068" u"\x004c" u"\x0061" u"\x006e" u"\x0067" u"\x0050" u"\x0061" u"\x0063" u"\x006b" u"\x005b" u"\x0031" u"\x005d" u"",16);return cs_literal;}()); auto cs_right = ([&]() { auto cs_array = v_array2_27618; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());});
}
}
if ((((([&]() { auto cs_left = pls::cs::box(v_array_27591); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left == cs_right; }()) || pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_array = v_array_27591; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"",0);return cs_literal;}()); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }());}))) && ((([&]() { auto cs_left = pls::cs::box(v_array2_27618); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left == cs_right; }()) || pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_array = v_array2_27618; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"",0);return cs_literal;}()); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }());}))))) {
([&]() { auto cs_value = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.Init:28426",([&](){auto cs_initial_array_776=pls::cs::Array<pls::cs::String>::make(3);cs_initial_array_776.at(0)=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x65e5" u"\x672c" u"\x8a9e" u"",3);return cs_literal;}());cs_initial_array_776.at(1)=pls::generated::cs_3fb70c2eded7c9ff();cs_initial_array_776.at(2)=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"",0);return cs_literal;}());return cs_initial_array_776;}())); v_array_27591 = cs_value; return cs_value; }());
}
}
if (([&]() { auto cs_left = pls::cs::box(v_array_27591); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left != cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"",14);return cs_literal;}()); pls::cs::String cs_arg1 = ([&]() { auto cs_array = v_array_27591; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); pls::kairo::PlayerPrefs::SetString(cs_arg0,cs_arg1); }());});
} else if (([&]() { auto cs_left = pls::cs::box(v_array2_27618); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left != cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"",14);return cs_literal;}()); pls::cs::String cs_arg1 = ([&]() { auto cs_array = v_array2_27618; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); pls::kairo::PlayerPrefs::SetString(cs_arg0,cs_arg1); }());});
}
}
pls::cs::Array<std::uint8_t> v_array5_28688 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x005f" u"\x0066" u"\x006f" u"\x0072" u"\x006d" u"\x0061" u"\x0074" u"\x002e" u"\x0074" u"\x0078" u"\x0074" u"",24);return cs_literal;}()); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }());});
if (([&]() { auto cs_left = pls::cs::box(v_array5_28688); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left != cs_right; }())) {
pls::cs::String v_text5_28788 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Array<std::uint8_t> cs_arg0 = v_array5_28688; return pls::generated::cs_5d8e9e8201c04369(cs_arg0); }());});
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.Init:28849",pls::cs::Dictionary<pls::cs::String,pls::cs::Ref<pls::generated::cs_98f0a1bec2084c3c>>::make()); pls::generated::cs_2c85f04bd0d708d9() = cs_value; return cs_value; }());
{ auto cs_each777 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=v_text5_28788;auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(10);return pls::cs::string_split(cs_text,cs_separators);}());}); for (std::int32_t cs_i777=0; cs_i777<cs_each777.length(); ++cs_i777) { pls::cs::String v_recoveredLangFormatLine_28895 = cs_each777.get_Item(cs_i777); {
pls::cs::Array<pls::cs::String> v_array6_28977 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=v_recoveredLangFormatLine_28895;auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(44);return pls::cs::string_split(cs_text,cs_separators);}());});
pls::cs::Ref<pls::generated::cs_98f0a1bec2084c3c> v_langPackFormat_29042 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.Init:29059",([&]() -> pls::cs::Ref<pls::generated::cs_98f0a1bec2084c3c> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array6_28977; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); char16_t cs_arg1 = pls::cs::cast_integral<char16_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array6_28977; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::int32_parse(cs_arg0); }());})); char16_t cs_arg2 = pls::cs::cast_integral<char16_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array6_28977; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::int32_parse(cs_arg0); }());})); return cs_0df98a8eddce17f9(cs_arg0,cs_arg1,cs_arg2); }()));
([&]() { auto cs_target = pls::generated::cs_2c85f04bd0d708d9(); auto cs_index = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = v_langPackFormat_29042; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a0cee6b194388bb1; }()); return pls::cs::culture_to_lower(cs_arg0); }());}); auto cs_value = v_langPackFormat_29042; cs_target.set_Item(cs_index,cs_value); return cs_value; }());
} } }
if ((!(([&]() -> bool { pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"",14);return cs_literal;}()); pls::cs::String cs_arg1 = pls::cs::String{}; return pls::kairo::PlayerPrefs::GetString(cs_arg0,cs_arg1); }());}); pls::cs::Array<std::uint8_t> cs_arg1 = pls::cs::Array<std::uint8_t>{}; bool cs_arg2 = false; return cs_1acec610f93846f1(cs_arg0,cs_arg1,cs_arg2); }())))) {
([&]() -> bool { pls::cs::String cs_arg0 = pls::cs::String{}; auto cs_arg1 = pls::cs::Array<std::uint8_t>{}; auto cs_arg2 = true; return cs_1acec610f93846f1(cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
}
}

// M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[])
void cs_f93cc86620424e6c(pls::cs::Array<std::uint8_t> v_data) { pls::generated::cs_init_72d9658ed61145d6();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[])",kairo);
{
std::int32_t v_recoveredPdbConstInt32_46651 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jarInflater_46694 = pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>{};
pls::cs::Array<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>> v_array_46734 = pls::generated::cs_fe1686f2bdf4b397();
pls::cs::Array<pls::cs::String> v_array2_46772 = pls::generated::cs_74c39fff0f46ab52();
pls::cs::String v_text_46809 = cs_885e46a8a2b95893_value;
pls::cs::String v_text2_46843 = cs_9d62cf693893d256_value;
pls::cs::String v_text3_46876 = cs_2fd3deed1e409352_value;
std::int32_t v_num_46907 = cs_237ab1e79f07965b_value;
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0065" u"\x006e" u"\x002d" u"\x0055" u"\x0053" u"",5);return cs_literal;}()); cs_9d62cf693893d256_value = cs_value; return cs_value; }());
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x004b" u"\x0061" u"\x0069" u"\x0072" u"\x006f" u"\x0073" u"\x006f" u"\x0066" u"\x0074" u"",9);return cs_literal;}()); cs_885e46a8a2b95893_value = cs_value; return cs_value; }());
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0045" u"\x006e" u"\x0067" u"\x006c" u"\x0069" u"\x0073" u"\x0068" u"",7);return cs_literal;}()); cs_2fd3deed1e409352_value = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); cs_237ab1e79f07965b_value = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = pls::generated::cs_0dc92919b1751224(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006a" u"\x0061" u"\x002d" u"\x004a" u"\x0050" u"",5);return cs_literal;}()); cs_9d62cf693893d256_value = cs_value; return cs_value; }());
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x65e5" u"\x672c" u"\x8a9e" u"",3);return cs_literal;}()); cs_2fd3deed1e409352_value = cs_value; return cs_value; }());
} else if ((([&]() -> bool { auto cs_left = pls::generated::cs_0dc92919b1751224(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()) && pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }());}))) {
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006a" u"\x0061" u"\x002d" u"\x004a" u"\x0050" u"",5);return cs_literal;}()); cs_9d62cf693893d256_value = cs_value; return cs_value; }());
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x65e5" u"\x672c" u"\x8a9e" u"",3);return cs_literal;}()); cs_2fd3deed1e409352_value = cs_value; return cs_value; }());
}
pls::cs::run_finally([&]() -> void { try {
pls::cs::Dictionary<pls::cs::String,pls::cs::List<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>>> v_dictionary_47315 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):47328",pls::cs::Dictionary<pls::cs::String,pls::cs::List<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>>>::make());
if (([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }())) {
([&]() { auto cs_value = pls::cs::Array<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>>{}; pls::generated::cs_fe1686f2bdf4b397() = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::Array<pls::cs::String>{}; pls::generated::cs_74c39fff0f46ab52() = cs_value; return cs_value; }());
} else {
pls::cs::Array<std::uint8_t> v_array3_47497 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x005f" u"\x0074" u"\x0065" u"\x006d" u"\x0070" u"\x006c" u"\x0061" u"\x0074" u"\x0065" u"\x005f" u"\x0065" u"\x006e" u"\x002e" u"\x0074" u"\x0078" u"\x0074" u"",29);return cs_literal;}()); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }());});
if (([&]() { auto cs_left = pls::cs::box(v_array3_47497); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }())) {
throw pls::cs::Exception();
}
pls::cs::String v_text4_47643 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Array<std::uint8_t> cs_arg0 = v_array3_47497; return pls::generated::cs_5d8e9e8201c04369(cs_arg0); }());});
([&]() { auto cs_value = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):47705",pls::cs::Array<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)))); pls::generated::cs_fe1686f2bdf4b397() = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::Array<pls::cs::String>{}; pls::generated::cs_74c39fff0f46ab52() = cs_value; return cs_value; }());
pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> v_langPackRecord_47778 = pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>{};
std::int32_t v_num2_47810 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
while (([&]() -> bool { auto cs_left = v_num2_47810; auto cs_right = (v_text4_47643).length(); return (cs_left < cs_right); }())) {
std::int32_t v_num3_47870 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_text4_47643; auto cs_arg1 = char16_t(44); auto cs_arg2 = v_num2_47810; return pls::game::cs_index_char2(cs_arg0,cs_arg1,cs_arg2); }());});
std::int32_t v_num4_47913 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_text4_47643; auto cs_arg1 = char16_t(44); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num3_47870; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::game::cs_index_char2(cs_arg0,cs_arg1,cs_arg2); }());});
std::int32_t v_num5_47960 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_text4_47643; auto cs_arg1 = char16_t(44); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num4_47913; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::game::cs_index_char2(cs_arg0,cs_arg1,cs_arg2); }());});
std::int32_t v_num6_48007 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_text4_47643; auto cs_arg1 = char16_t(10); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num5_47960; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::game::cs_index_char2(cs_arg0,cs_arg1,cs_arg2); }());});
if (([&]() -> bool { auto cs_left = v_num6_48007; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = (v_text4_47643).length(); v_num6_48007 = cs_value; return cs_value; }());
}
pls::cs::String v_text5_48124 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_text4_47643; auto cs_arg1 = v_num2_47810; auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num3_47870; auto cs_right = v_num2_47810; return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }());}); return pls::cs::string_trim(cs_arg0); }());});
pls::cs::String v_file_48188 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_text4_47643; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num3_47870; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num4_47913; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_num3_47870; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }());}); return pls::cs::culture_to_lower(cs_arg0); }());});
pls::cs::String v_text6_48264 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_text4_47643; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num4_47913; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num5_47960; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_num4_47913; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }());}); return pls::cs::string_trim(cs_arg0); }());});
pls::cs::String v_text7_48338 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_text4_47643; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num5_47960; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num6_48007; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_num5_47960; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }());});
if (([&]() -> bool { auto cs_left = (v_text5_48124).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):48452",([&]() -> pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> { std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_text5_48124; return pls::cs::int32_parse(cs_arg0); }());}); pls::cs::String cs_arg1 = v_file_48188; pls::cs::String cs_arg2 = v_text7_48338; return cs_3b2d98b947053d2a(cs_arg0,cs_arg1,cs_arg2); }())); v_langPackRecord_47778 = cs_value; return cs_value; }());
{ auto cs_each782 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=v_text6_48264;auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(38);return pls::cs::string_split(cs_text,cs_separators);}());}); for (std::int32_t cs_i782=0; cs_i782<cs_each782.length(); ++cs_i782) { pls::cs::String v_positionText_48510 = cs_each782.get_Item(cs_i782); {
pls::cs::Array<pls::cs::String> v_array5_48586 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=v_positionText_48510;auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(45);return pls::cs::string_split(cs_text,cs_separators);}());});
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>>(v_langPackRecord_47778); std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array5_48586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::int32_parse(cs_arg0); }());}); std::int32_t cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_array = v_array5_48586; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::int32_parse(cs_arg0); }());}); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ef461dafc6d09069(cs_receiver,cs_arg0,cs_arg1); }());
} } }
while (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_langPackRecord_47778; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c85df0bf60809784; }()); auto cs_right = (pls::generated::cs_fe1686f2bdf4b397()).length(); return (cs_left >= cs_right); }())) {
pls::cs::Array<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>> v_destinationArray_48803 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):48822",pls::cs::Array<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>>::make(([&]() -> std::int32_t { auto cs_left = (pls::generated::cs_fe1686f2bdf4b397()).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x200ull)); return pls::cs::add_i32(cs_left,cs_right); }())));
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_arg0 = pls::cs::array_cast(pls::cs::box(pls::generated::cs_fe1686f2bdf4b397())); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::array_cast(pls::cs::box(v_destinationArray_48803)); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg4 = (pls::generated::cs_fe1686f2bdf4b397()).length(); pls::cs::array_copy(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());});
([&]() { auto cs_value = v_destinationArray_48803; pls::generated::cs_fe1686f2bdf4b397() = cs_value; return cs_value; }());
}
([&]() { auto cs_target = pls::generated::cs_fe1686f2bdf4b397(); auto cs_index = ([&]() { auto cs_receiver = v_langPackRecord_47778; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c85df0bf60809784; }()); auto cs_value = v_langPackRecord_47778;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::cs::List<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>> v_value_49103 = pls::cs::List<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>>{};
if ((!(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_dictionary=v_dictionary_47315;auto cs_key=([&]() { auto cs_receiver = v_langPackRecord_47778; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_05293b75838ad9b4; }());return cs_dictionary.TryGetValue(cs_key,v_value_49103);}());})))) {
([&]() { auto cs_target = v_dictionary_47315; auto cs_index = ([&]() { auto cs_receiver = v_langPackRecord_47778; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_05293b75838ad9b4; }()); auto cs_value = (([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):49238",pls::cs::List<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>>::make()); v_value_49103 = cs_value; return cs_value; }())); cs_target.set_Item(cs_index,cs_value); return cs_value; }());
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = v_value_49103; auto cs_arg0 = v_langPackRecord_47778; cs_receiver.Add(cs_arg0); }());});
} else {
if (([&]() { auto cs_left = pls::cs::box(v_langPackRecord_47778); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = v_langPackRecord_47778; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eacffaa0f8c3f949; }()); auto cs_arg0 = v_text7_48338; cs_receiver.Add(cs_arg0); }());});
}
}
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num6_48007; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); v_num2_47810 = cs_value; return cs_value; }());
}
std::int32_t v_num7_49477 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
{
pls::cs::String v_text8_49507 = pls::cs::String{};
{pls::cs::Ref<pls::cs::MemoryStream> v_stream_49546=pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):49555",([&]() { auto cs_arg0 = v_data; return pls::cs::make_ref<pls::cs::MemoryStream>(cs_arg0); }()));pls::cs::run_finally([&](){{
{pls::cs::Ref<pls::cs::RuntimeStreamReader> v_streamReader_49612=pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):49627",([&]() { auto cs_arg0 = v_stream_49546; auto cs_arg1 = pls::cs::RuntimeEncoding::get_UTF8(); return pls::cs::make_ref<pls::cs::RuntimeStreamReader>(cs_arg0,cs_arg1); }()));pls::cs::run_finally([&](){{
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = v_streamReader_49612; return pls::game::cs_require(cs_receiver)->ReadToEnd(); }());}); v_text8_49507 = cs_value; return cs_value; }());
}},[&](){if(v_streamReader_49612){pls::game::cs_require(v_streamReader_49612)->Dispose();}});}
}},[&](){if(v_stream_49546){pls::game::cs_require(v_stream_49546)->Dispose();}});}
pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):49737",pls::cs::List<pls::cs::Array<pls::cs::String>>::make());
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>{}; v_langPackRecord_47778 = cs_value; return cs_value; }());
pls::cs::String v_text9_49799 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"",0);return cs_literal;}());
pls::cs::String v_text10_49823 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"",0);return cs_literal;}());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num2_47810 = cs_value; return cs_value; }());
while (([&]() -> bool { auto cs_left = v_num2_47810; auto cs_right = (v_text8_49507).length(); return (cs_left < cs_right); }())) {
std::int32_t v_num8_49901 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_text8_49507; auto cs_arg1 = char16_t(44); auto cs_arg2 = v_num2_47810; return pls::game::cs_index_char2(cs_arg0,cs_arg1,cs_arg2); }());});
std::int32_t v_num9_49944 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_text8_49507; auto cs_arg1 = char16_t(10); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num8_49901; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::game::cs_index_char2(cs_arg0,cs_arg1,cs_arg2); }());});
if (([&]() -> bool { auto cs_left = v_num9_49944; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = (v_text8_49507).length(); v_num9_49944 = cs_value; return cs_value; }());
}
std::int32_t v_num10_50058 = v_num9_49944;
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_text8_49507; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num9_49944; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(13)); return (cs_left == cs_right); }())) {
([&]() { auto cs_old = v_num9_49944; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num9_49944 = cs_new; return cs_old; }());
}
pls::cs::String v_text11_50151 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_text8_49507; auto cs_arg1 = v_num2_47810; auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num8_49901; auto cs_right = v_num2_47810; return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }());});
pls::cs::String v_text12_50209 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_text8_49507; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num8_49901; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num9_49944; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_num8_49901; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }());});
if ((pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_text11_50151; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0022" u"",1);return cs_literal;}()); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }());}) && pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_text11_50151; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0022" u"",1);return cs_literal;}()); return pls::cs::culture_ends_with(cs_arg0,cs_arg1); }());}))) {
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_text11_50151; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = (v_text11_50151).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }());}); v_text11_50151 = cs_value; return cs_value; }());
}
if ((pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_text12_50209; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0022" u"",1);return cs_literal;}()); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }());}) && pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_text12_50209; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0022" u"",1);return cs_literal;}()); return pls::cs::culture_ends_with(cs_arg0,cs_arg1); }());}))) {
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_text12_50209; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = (v_text12_50209).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }());}); v_text12_50209 = cs_value; return cs_value; }());
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_text11_50151; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0040" u"",1);return cs_literal;}()); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }());})) {
if (([&]() -> bool { auto cs_left = v_text11_50151; auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0040" u"\x0061" u"\x0075" u"\x0074" u"\x0068" u"\x006f" u"\x0072" u"",7);return cs_literal;}()); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = v_text12_50209; cs_885e46a8a2b95893_value = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_text11_50151; auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0040" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"",9);return cs_literal;}()); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_text12_50209; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005b" u"\x005e" u"\x0061" u"\x002d" u"\x007a" u"\x0041" u"\x002d" u"\x005a" u"\x005c" u"\x002d" u"\x005d" u"",11);return cs_literal;}()); auto cs_arg2 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"",0);return cs_literal;}()); return pls::cs::RuntimeRegex::Replace(cs_arg0,cs_arg1,cs_arg2); }());}); cs_9d62cf693893d256_value = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_text11_50151; auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0040" u"\x0074" u"\x0069" u"\x0074" u"\x006c" u"\x0065" u"",6);return cs_literal;}()); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = v_text12_50209; cs_2fd3deed1e409352_value = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_text11_50151; auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0040" u"\x0073" u"\x0063" u"\x0061" u"\x006c" u"\x0065" u"",6);return cs_literal;}()); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); cs_237ab1e79f07965b_value = cs_value; return cs_value; }());
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_text12_50209; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0025" u"",1);return cs_literal;}()); return pls::cs::culture_ends_with(cs_arg0,cs_arg1); }());})) {
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_text12_50209; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = (v_text12_50209).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }());}); v_text12_50209 = cs_value; return cs_value; }());
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=v_text12_50209;auto cs_argument=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0061" u"\x0075" u"\x0074" u"\x006f" u"",4);return cs_literal;}());cs_receiver.length();return pls::cs::culture_equals_ignore_case(cs_receiver,cs_argument);}());})) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); cs_237ab1e79f07965b_value = cs_value; return cs_value; }());
} else {
std::int32_t v_result_51201 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=v_text12_50209;return pls::cs::int32_try_parse(cs_text,v_result_51201);}());})) {
([&]() { auto cs_value = v_result_51201; cs_237ab1e79f07965b_value = cs_value; return cs_value; }());
}
}
}
if (([&]() -> bool { auto cs_left = v_text11_50151; auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0040" u"\x0061" u"\x0070" u"\x0070" u"\x006c" u"\x0069" u"",6);return cs_literal;}()); return (cs_left == cs_right); }())) {
pls::cs::Ref<pls::cs::RegexMatch> v_match_51390 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::RegexMatch> { auto cs_arg0 = v_text12_50209; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0028" u"\x005b" u"\x0030" u"\x002d" u"\x0039" u"\x005d" u"\x002b" u"\x0029" u"",8);return cs_literal;}()); return pls::cs::RuntimeRegex::Match(cs_arg0,cs_arg1); }());});
if (pls::game::cs_require(v_match_51390)->get_Success()) {
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = pls::game::cs_require(([&](){auto cs_receiver=pls::game::cs_require(v_match_51390)->get_Groups();auto cs_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));return pls::game::cs_require(cs_receiver)->get_Item(cs_index);}()))->get_Value(); return pls::cs::int32_parse(cs_arg0); }());}); v_num7_49477 = cs_value; return cs_value; }());
}
}
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_text11_50151; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0023" u"",1);return cs_literal;}()); return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }());})) {
std::int32_t v_result2_51603 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_text11_50151; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::game::cs_substring1(cs_arg0,cs_arg1); }());});return pls::cs::int32_try_parse(cs_text,v_result2_51603);}());})) {
([&]() { auto cs_value = ([&]() { auto cs_array = pls::generated::cs_fe1686f2bdf4b397(); auto cs_index = v_result2_51603; return cs_array.get_Item(cs_index); }()); v_langPackRecord_47778 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_langPackRecord_47778); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::cs::Ref<pls::cs::RegexMatch> v_match2_51797 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::RegexMatch> { auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_langPackRecord_47778; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eacffaa0f8c3f949; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005e" u"\x003c" u"\x0070" u"\x006f" u"\x003d" u"\x005b" u"\x005e" u"\x003e" u"\x005d" u"\x002b" u"\x003e" u"",11);return cs_literal;}()); return pls::cs::RuntimeRegex::Match(cs_arg0,cs_arg1); }());});
([&]() { auto cs_value = ((((!(pls::game::cs_require(v_match2_51797)->get_Success()))) ? ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"",0);return cs_literal;}()) : pls::game::cs_require(v_match2_51797)->get_Value())); v_text9_49799 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::RegexMatch> { auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_langPackRecord_47778; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eacffaa0f8c3f949; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x003c" u"\x002f" u"\x0070" u"\x006f" u"\x003e" u"\x0024" u"",6);return cs_literal;}()); return pls::cs::RuntimeRegex::Match(cs_arg0,cs_arg1); }());}); v_match2_51797 = cs_value; return cs_value; }());
([&]() { auto cs_value = ((((!(pls::game::cs_require(v_match2_51797)->get_Success()))) ? ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"",0);return cs_literal;}()) : pls::game::cs_require(v_match2_51797)->get_Value())); v_text10_49823 = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = v_langPackRecord_47778; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da40773ef2f3923c; }()); auto cs_arg0 = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):52071",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):52071",([&]() { auto cs_left = v_text9_49799; auto cs_right = v_text12_50209; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = v_text10_49823; return pls::cs::String::concat(cs_left,cs_right); }())); cs_receiver.Add(cs_arg0); }());});
}
}
} else if (([&]() -> bool { auto cs_left = (v_text11_50151).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
if (([&]() { auto cs_left = pls::cs::box(v_langPackRecord_47778); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = v_langPackRecord_47778; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da40773ef2f3923c; }()); auto cs_arg0 = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):52241",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):52241",([&]() { auto cs_left = v_text9_49799; auto cs_right = v_text12_50209; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = v_text10_49823; return pls::cs::String::concat(cs_left,cs_right); }())); cs_receiver.Add(cs_arg0); }());});
}
}
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num10_50058; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); v_num2_47810 = cs_value; return cs_value; }());
}
}
if (([&]() -> bool { auto cs_left = v_num7_49477; auto cs_right = pls::generated::cs_efcdf5d0d7b2cdc2(); return (cs_left != cs_right); }())) {
throw pls::cs::Exception(([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0054" u"\x0068" u"\x0065" u"\x0020" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x0020" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x0073" u"\x0020" u"\x0066" u"\x006f" u"\x0072" u"\x0020" u"\x0064" u"\x0069" u"\x0066" u"\x0066" u"\x0065" u"\x0072" u"\x0065" u"\x006e" u"\x0074" u"\x0020" u"\x0061" u"\x0070" u"\x0070" u"\x006c" u"\x0069" u"\x0063" u"\x0061" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"\x0073" u"\x002e" u"",46);return cs_literal;}()).utf8());
}
if ((([&]() { auto cs_left = pls::cs::box(cs_9d62cf693893d256_value); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = (cs_9d62cf693893d256_value).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
pls::cs::Array<pls::cs::String> v_array6_52524 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=cs_9d62cf693893d256_value;auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(45);return pls::cs::string_split(cs_text,cs_separators);}());});
if (([&]() -> bool { auto cs_left = (v_array6_52524).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):52620",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):52620",([&]() { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = v_array6_52524; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::culture_to_lower(cs_arg0); }());}); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002d" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = v_array6_52524; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::culture_to_upper(cs_arg0); }());}); return pls::cs::String::concat(cs_left,cs_right); }())); cs_9d62cf693893d256_value = cs_value; return cs_value; }());
}
}
if (([&]() -> bool { auto cs_left = (cs_2fd3deed1e409352_value).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = cs_9d62cf693893d256_value; cs_2fd3deed1e409352_value = cs_value; return cs_value; }());
}
([&]() { auto cs_value = pls::cs::Array<pls::cs::String>{}; pls::generated::cs_74c39fff0f46ab52() = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(cs_9d62cf693893d256_value); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::cs::Array<pls::cs::String> v_array7_52857 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=cs_9d62cf693893d256_value;auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(45);return pls::cs::string_split(cs_text,cs_separators);}());});
pls::cs::List<pls::cs::String> v_list2_52911 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):52919",pls::cs::List<pls::cs::String>::make());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = v_list2_52911; auto cs_arg0 = cs_9d62cf693893d256_value; cs_receiver.Add(cs_arg0); }());});
if (([&]() -> bool { auto cs_left = cs_9d62cf693893d256_value; auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x007a" u"\x0068" u"\x002d" u"\x0053" u"\x0047" u"",5);return cs_literal;}()); return (cs_left == cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = v_list2_52911; auto cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x007a" u"\x0068" u"\x002d" u"\x0043" u"\x004e" u"",5);return cs_literal;}()); cs_receiver.Add(cs_arg0); }());});
}
if (([&]() -> bool { auto cs_left = cs_9d62cf693893d256_value; auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x007a" u"\x0068" u"\x002d" u"\x0048" u"\x004b" u"",5);return cs_literal;}()); return (cs_left == cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = v_list2_52911; auto cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x007a" u"\x0068" u"\x002d" u"\x0054" u"\x0057" u"",5);return cs_literal;}()); cs_receiver.Add(cs_arg0); }());});
}
if (([&]() -> bool { auto cs_left = cs_9d62cf693893d256_value; auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x007a" u"\x0068" u"\x002d" u"\x004d" u"\x004f" u"",5);return cs_literal;}()); return (cs_left == cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = v_list2_52911; auto cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x007a" u"\x0068" u"\x002d" u"\x0054" u"\x0057" u"",5);return cs_literal;}()); cs_receiver.Add(cs_arg0); }());});
}
if (([&]() -> bool { auto cs_left = (v_array7_52857).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left >= cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = v_list2_52911; auto cs_arg0 = ([&]() { auto cs_array = v_array7_52857; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); cs_receiver.Add(cs_arg0); }());});
}
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { auto cs_receiver = v_list2_52911; return cs_receiver.ToArray(); }());}); pls::generated::cs_74c39fff0f46ab52() = cs_value; return cs_value; }());
}
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):53354",pls::cs::Dictionary<pls::cs::String,pls::cs::Array<pls::cs::List<pls::generated::cs_acb158b492b43017>>>::make()); pls::generated::cs_d82354f7d4cc6e5c() = cs_value; return cs_value; }());
{auto cs_list_enum785=(v_dictionary_47315).GetEnumerator();struct cs_list_scope785{decltype(cs_list_enum785)&e;~cs_list_scope785(){e.Dispose();}} cs_scope785{cs_list_enum785};while(cs_list_enum785.MoveNext()){ pls::cs::KeyValuePair<pls::cs::String,pls::cs::List<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>>> v_item_53409=cs_list_enum785.get_Current();{
std::int32_t v_num11_53498 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
{auto cs_list_enum786=((v_item_53409).get_Value()).GetEnumerator();struct cs_list_scope786{decltype(cs_list_enum786)&e;~cs_list_scope786(){e.Dispose();}} cs_scope786{cs_list_enum786};while(cs_list_enum786.MoveNext()){ pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> v_item2_53515=cs_list_enum786.get_Current();{
{auto cs_list_enum787=(([&]() { auto cs_receiver = v_item2_53515; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_11bb01ff7e196717; }())).GetEnumerator();struct cs_list_scope787{decltype(cs_list_enum787)&e;~cs_list_scope787(){e.Dispose();}} cs_scope787{cs_list_enum787};while(cs_list_enum787.MoveNext()){ pls::generated::cs_ab1b1085a7ab32b9 v_position_53575=cs_list_enum787.get_Current();{
if (([&]() -> bool { auto cs_left = v_num11_53498; auto cs_right = (v_position_53575).cs_1bd11544863adf53; return (cs_left < cs_right); }())) {
([&]() { auto cs_value = (v_position_53575).cs_1bd11544863adf53; v_num11_53498 = cs_value; return cs_value; }());
}
}}}
}}}
([&]() { auto cs_old = v_num11_53498; auto cs_new = pls::cs::add_i32(cs_old,1); v_num11_53498 = cs_new; return cs_old; }());
pls::cs::Array<pls::cs::List<pls::generated::cs_acb158b492b43017>> v_array8_53779 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):53788",pls::cs::Array<pls::cs::List<pls::generated::cs_acb158b492b43017>>::make(v_num11_53498));
{auto cs_list_enum788=((v_item_53409).get_Value()).GetEnumerator();struct cs_list_scope788{decltype(cs_list_enum788)&e;~cs_list_scope788(){e.Dispose();}} cs_scope788{cs_list_enum788};while(cs_list_enum788.MoveNext()){ pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> v_item3_53827=cs_list_enum788.get_Current();{
{auto cs_list_enum789=(([&]() { auto cs_receiver = v_item3_53827; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_11bb01ff7e196717; }())).GetEnumerator();struct cs_list_scope789{decltype(cs_list_enum789)&e;~cs_list_scope789(){e.Dispose();}} cs_scope789{cs_list_enum789};while(cs_list_enum789.MoveNext()){ pls::generated::cs_ab1b1085a7ab32b9 v_position2_53887=cs_list_enum789.get_Current();{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = v_array8_53779; auto cs_index = (v_position2_53887).cs_1bd11544863adf53; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_target = v_array8_53779; auto cs_index = (v_position2_53887).cs_1bd11544863adf53; auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):54032",pls::cs::List<pls::generated::cs_acb158b492b43017>::make());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ([&]() { auto cs_array = v_array8_53779; auto cs_index = (v_position2_53887).cs_1bd11544863adf53; return cs_array.get_Item(cs_index); }()); auto cs_arg0 = ([&]() -> pls::generated::cs_acb158b492b43017 { std::int32_t cs_arg0 = (v_position2_53887).cs_1bd11544863adf53; std::int32_t cs_arg1 = (v_position2_53887).cs_2525b3344f53d974; pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> cs_arg2 = v_item3_53827; return cs_aeb4d46bb60fe1d6(cs_arg0,cs_arg1,cs_arg2); }()); cs_receiver.Add(cs_arg0); }());});
}}}
}}}
pls::cs::Array<pls::cs::List<pls::generated::cs_acb158b492b43017>> v_array9_54214 = v_array8_53779;
{ auto cs_each790 = v_array9_54214; for (std::int32_t cs_i790=0; cs_i790<cs_each790.length(); ++cs_i790) { pls::cs::List<pls::generated::cs_acb158b492b43017> v_list3_54237 = cs_each790.get_Item(cs_i790); {
if (([&]() { auto cs_left = pls::cs::box(v_list3_54237); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
continue;
}
for (std::int32_t v_j_54370 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_54370; auto cs_right = ([&]() -> std::int32_t { auto cs_left = (v_list3_54237).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_54370; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_54370 = cs_new; return cs_old; }())) {
for (std::int32_t v_num12_54429 = ([&]() -> std::int32_t { auto cs_left = (v_list3_54237).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num12_54429; auto cs_right = v_j_54370; return (cs_left > cs_right); }()); ([&]() { auto cs_old = v_num12_54429; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num12_54429 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = (([&]() { auto cs_array = v_list3_54237; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num12_54429; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())).cs_018ea348c0cf88c0; auto cs_right = (([&]() { auto cs_array = v_list3_54237; auto cs_index = v_num12_54429; return cs_array.get_Item(cs_index); }())).cs_018ea348c0cf88c0; return (cs_left > cs_right); }())) {
pls::generated::cs_acb158b492b43017 v_value2_54582 = ([&]() { auto cs_array = v_list3_54237; auto cs_index = v_num12_54429; return cs_array.get_Item(cs_index); }());
([&]() { auto cs_target = v_list3_54237; auto cs_index = v_num12_54429; auto cs_value = ([&]() { auto cs_array = v_list3_54237; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num12_54429; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()); cs_target.set_Item(cs_index,cs_value); return cs_value; }());
([&]() { auto cs_target = v_list3_54237; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num12_54429; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_value = v_value2_54582; cs_target.set_Item(cs_index,cs_value); return cs_value; }());
}
}
}
} } }
([&]() { auto cs_target = pls::generated::cs_d82354f7d4cc6e5c(); auto cs_index = (v_item_53409).get_Key(); auto cs_value = v_array8_53779; cs_target.set_Item(cs_index,cs_value); return cs_value; }());
}}}
pls::cs::List<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>> v_value3_54797 = pls::cs::List<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>>{};
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_dictionary=v_dictionary_47315;auto cs_key=([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006c" u"\x0069" u"\x0062" u"\x002e" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"",12);return cs_literal;}());return cs_dictionary.TryGetValue(cs_key,v_value3_54797);}());})) {
pls::cs::Array<std::uint8_t> v_array10_54893 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x005f" u"\x0074" u"\x0065" u"\x006d" u"\x0070" u"\x006c" u"\x0061" u"\x0074" u"\x0065" u"\x005f" u"\x006a" u"\x0061" u"\x002e" u"\x0074" u"\x0078" u"\x0074" u"",29);return cs_literal;}()); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }());});
if (([&]() { auto cs_left = pls::cs::box(v_array10_54893); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }())) {
throw pls::cs::Exception();
}
pls::cs::String v_text13_55046 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Array<std::uint8_t> cs_arg0 = v_array10_54893; return pls::generated::cs_5d8e9e8201c04369(cs_arg0); }());});
pls::cs::Dictionary<pls::cs::String,pls::cs::List<std::int32_t>> v_dictionary2_55122 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):55136",pls::cs::Dictionary<pls::cs::String,pls::cs::List<std::int32_t>>::make());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num2_47810 = cs_value; return cs_value; }());
while (([&]() -> bool { auto cs_left = v_num2_47810; auto cs_right = (v_text13_55046).length(); return (cs_left < cs_right); }())) {
std::int32_t v_num13_55243 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_text13_55046; auto cs_arg1 = char16_t(44); auto cs_arg2 = v_num2_47810; return pls::game::cs_index_char2(cs_arg0,cs_arg1,cs_arg2); }());});
std::int32_t v_num14_55289 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_text13_55046; auto cs_arg1 = char16_t(44); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num13_55243; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::game::cs_index_char2(cs_arg0,cs_arg1,cs_arg2); }());});
std::int32_t v_num15_55340 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_text13_55046; auto cs_arg1 = char16_t(44); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num14_55289; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::game::cs_index_char2(cs_arg0,cs_arg1,cs_arg2); }());});
std::int32_t v_num16_55391 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_text13_55046; auto cs_arg1 = char16_t(10); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num15_55340; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::game::cs_index_char2(cs_arg0,cs_arg1,cs_arg2); }());});
if (([&]() -> bool { auto cs_left = v_num16_55391; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = (v_text13_55046).length(); v_num16_55391 = cs_value; return cs_value; }());
}
pls::cs::String v_text14_55519 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_text13_55046; auto cs_arg1 = v_num2_47810; auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num13_55243; auto cs_right = v_num2_47810; return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }());}); return pls::cs::string_trim(cs_arg0); }());});
pls::cs::String v_text15_55587 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_text13_55046; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num13_55243; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num14_55289; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_num13_55243; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }());}); return pls::cs::culture_to_lower(cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_text13_55046; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num14_55289; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num15_55340; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_num14_55289; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }());}); return pls::cs::string_trim(cs_arg0); }());});
pls::cs::String v_key_55734 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_text13_55046; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num15_55340; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num16_55391; auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_num15_55340; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }());});
if ((([&]() -> bool { auto cs_left = v_text15_55587; auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006c" u"\x0069" u"\x0062" u"\x002e" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"",12);return cs_literal;}()); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = (v_text14_55519).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
pls::cs::List<std::int32_t> v_value4_55875 = pls::cs::List<std::int32_t>{};
if ((!(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_dictionary=v_dictionary2_55122;auto cs_key=v_key_55734;return cs_dictionary.TryGetValue(cs_key,v_value4_55875);}());})))) {
([&]() { auto cs_target = v_dictionary2_55122; auto cs_index = v_key_55734; auto cs_value = (([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):55986",pls::cs::List<std::int32_t>::make()); v_value4_55875 = cs_value; return cs_value; }())); cs_target.set_Item(cs_index,cs_value); return cs_value; }());
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = v_value4_55875; auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_text14_55519; return pls::cs::int32_parse(cs_arg0); }());}); cs_receiver.Add(cs_arg0); }());});
}
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num16_55391; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); v_num2_47810 = cs_value; return cs_value; }());
}
pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::String>>> v_array11_56114 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):56124",([&](){auto cs_initial_array_791=pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::String>>>::make(2);cs_initial_array_791.at(0)=pls::generated::cs_e7e31338a40ebcb2();cs_initial_array_791.at(1)=pls::generated::cs_d135969453118803();return cs_initial_array_791;}()));
for (std::int32_t v_k_56211 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_56211; auto cs_right = (v_array11_56114).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_56211; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_56211 = cs_new; return cs_old; }())) {
for (std::int32_t v_l_56267 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_56267; auto cs_right = (([&]() { auto cs_array = v_array11_56114; auto cs_index = v_k_56211; return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_56267; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_56267 = cs_new; return cs_old; }())) {
pls::cs::String v_text16_56326 = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array11_56114; auto cs_index = v_k_56211; return cs_array.get_Item(cs_index); }()); auto cs_index = v_l_56267; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }());
std::int32_t v_num17_56365 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
pls::cs::List<std::int32_t> v_value5_56395 = pls::cs::List<std::int32_t>{};
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_dictionary=v_dictionary2_55122;auto cs_key=([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array11_56114; auto cs_index = v_k_56211; return cs_array.get_Item(cs_index); }()); auto cs_index = v_l_56267; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());return cs_dictionary.TryGetValue(cs_key,v_value5_56395);}());})) {
{auto cs_list_enum792=(v_value5_56395).GetEnumerator();struct cs_list_scope792{decltype(cs_list_enum792)&e;~cs_list_scope792(){e.Dispose();}} cs_scope792{cs_list_enum792};while(cs_list_enum792.MoveNext()){ std::int32_t v_item4_56489=cs_list_enum792.get_Current();{
for (std::int32_t v_m_56549 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_m_56549; auto cs_right = (v_value3_54797).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_m_56549; auto cs_new = pls::cs::add_i32(cs_old,1); v_m_56549 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_array = v_value3_54797; auto cs_index = v_m_56549; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c85df0bf60809784; }()); auto cs_right = v_item4_56489; return (cs_left == cs_right); }())) {
([&]() { auto cs_value = v_m_56549; v_num17_56365 = cs_value; return cs_value; }());
break;
}
}
if (([&]() -> bool { auto cs_left = v_num17_56365; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
break;
}
}}}
} else {
for (std::int32_t v_num18_56840 = ([&]() -> std::int32_t { auto cs_left = (v_value3_54797).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num18_56840; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num18_56840; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num18_56840 = cs_new; return cs_old; }())) {
pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> v_langPackRecord2_56923 = ([&]() { auto cs_array = v_value3_54797; auto cs_index = v_num18_56840; return cs_array.get_Item(cs_index); }());
if (((([&]() -> bool { auto cs_left = (([&]() { auto cs_array = ([&]() { auto cs_receiver = v_langPackRecord2_56923; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eacffaa0f8c3f949; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())).length(); auto cs_right = (v_text16_56326).length(); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_langPackRecord2_56923; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eacffaa0f8c3f949; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_text16_56326; return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = v_langPackRecord2_56923; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da40773ef2f3923c; }())).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
([&]() { auto cs_value = v_num18_56840; v_num17_56365 = cs_value; return cs_value; }());
break;
}
}
}
if (([&]() -> bool { auto cs_left = v_num17_56365; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> v_langPackRecord3_57236 = ([&]() { auto cs_array = v_value3_54797; auto cs_index = v_num17_56365; return cs_array.get_Item(cs_index); }());
if (([&]() -> bool { auto cs_left = (([&]() { auto cs_array = ([&]() { auto cs_array = v_array11_56114; auto cs_index = v_k_56211; return cs_array.get_Item(cs_index); }()); auto cs_index = v_l_56267; return cs_array.get_Item(cs_index); }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left <= cs_right); }())) {
pls::cs::Array<pls::cs::String> v_array12_57339 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):57349",pls::cs::Array<pls::cs::String>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull))));
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_arg0 = pls::cs::array_cast(pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_array = v_array11_56114; auto cs_index = v_k_56211; return cs_array.get_Item(cs_index); }()); auto cs_index = v_l_56267; return cs_array.get_Item(cs_index); }()))); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = pls::cs::array_cast(pls::cs::box(v_array12_57339)); auto cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::cs::array_copy(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());});
([&]() { auto cs_target = ([&]() { auto cs_array = v_array11_56114; auto cs_index = v_k_56211; return cs_array.get_Item(cs_index); }()); auto cs_index = v_l_56267; auto cs_value = v_array12_57339;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
if (([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = v_langPackRecord3_57236; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da40773ef2f3923c; }())).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array11_56114; auto cs_index = v_k_56211; return cs_array.get_Item(cs_index); }()); auto cs_index = v_l_56267; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"",0);return cs_literal;}());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_array = v_array11_56114; auto cs_index = v_k_56211; return cs_array.get_Item(cs_index); }()); auto cs_index = v_l_56267; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_langPackRecord3_57236; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da40773ef2f3923c; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
if (([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = v_langPackRecord3_57236; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_11bb01ff7e196717; }())).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = v_langPackRecord3_57236; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_11bb01ff7e196717; }()); auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_receiver.RemoveAt(cs_arg0); }());});
}
if (([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = v_langPackRecord3_57236; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_11bb01ff7e196717; }())).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = v_value3_54797; auto cs_arg0 = v_num17_56365; cs_receiver.RemoveAt(cs_arg0); }());});
}
}
}
}
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::String>>> { pls::cs::Array<pls::cs::Array<pls::cs::String>> cs_arg0 = pls::generated::cs_e7e31338a40ebcb2(); return pls::generated::cs_79b14a50dd86de7d(cs_arg0); }());}); pls::generated::cs_a41430b838321192() = cs_value; return cs_value; }());
}
}
pls::cs::Array<pls::cs::String> v_array13_57999 = pls::cs::Array<pls::cs::String>{};
pls::cs::Array<pls::cs::Array<pls::cs::String>> v_array14_58030 = pls::cs::Array<pls::cs::Array<pls::cs::String>>{};
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):58064",([&]() -> pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> { pls::cs::Array<std::uint8_t> cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0078" u"\x006c" u"\x0073" u"\x002e" u"\x0064" u"\x0061" u"\x0074" u"",7);return cs_literal;}()); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }());}); return pls::generated::cs_9eb68b9f4334471a(cs_arg0); }())); v_jarInflater_46694 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jarInflater_46694); pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0073" u"\x006f" u"\x0066" u"\x0074" u"\x006b" u"\x0065" u"\x0079" u"\x002e" u"\x0074" u"\x0078" u"\x0074" u"",11);return cs_literal;}()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3c7d820c198e8591(cs_receiver,cs_arg0); }())) {
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_arg0 = v_jarInflater_46694; pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0073" u"\x006f" u"\x0066" u"\x0074" u"\x006b" u"\x0065" u"\x0079" u"\x002e" u"\x0074" u"\x0078" u"\x0074" u"",11);return cs_literal;}()); return pls::generated::cs_aa767d3dce39dc9d(cs_arg0,cs_arg1); }());}); v_array13_57999 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_array13_57999); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left != cs_right; }())) {
([&]() { auto cs_value = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):58284",pls::cs::Array<pls::cs::Array<pls::cs::String>>::make((v_array13_57999).length())); v_array14_58030 = cs_value; return cs_value; }());
for (std::int32_t v_n_58329 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_n_58329; auto cs_right = (v_array14_58030).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_n_58329; auto cs_new = pls::cs::add_i32(cs_old,1); v_n_58329 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array14_58030; auto cs_index = v_n_58329; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array13_57999; auto cs_index = v_n_58329; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0009" u"",1);return cs_literal;}()); bool cs_arg2 = false; bool cs_arg3 = false; bool cs_arg4 = false; return pls::generated::cs_0f7a7a73dac52ca4(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() -> void { pls::cs::Array<pls::cs::Array<pls::cs::String>> cs_arg0 = v_array14_58030; cs_45076861cf1dc76f(cs_arg0); }());
}
}
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jarInflater_46694); pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0074" u"\x0065" u"\x0078" u"\x0074" u"\x002e" u"\x0074" u"\x0078" u"\x0074" u"",8);return cs_literal;}()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3c7d820c198e8591(cs_receiver,cs_arg0); }())) {
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_arg0 = v_jarInflater_46694; pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0074" u"\x0065" u"\x0078" u"\x0074" u"\x002e" u"\x0074" u"\x0078" u"\x0074" u"",8);return cs_literal;}()); return pls::generated::cs_aa767d3dce39dc9d(cs_arg0,cs_arg1); }());}); v_array13_57999 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_array13_57999); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left != cs_right; }())) {
([&]() { auto cs_value = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):58663",pls::cs::Array<pls::cs::Array<pls::cs::String>>::make((v_array13_57999).length())); v_array14_58030 = cs_value; return cs_value; }());
for (std::int32_t v_num19_58708 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num19_58708; auto cs_right = (v_array14_58030).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num19_58708; auto cs_new = pls::cs::add_i32(cs_old,1); v_num19_58708 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array13_57999; auto cs_index = v_num19_58708; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array13_57999; auto cs_index = v_num19_58708; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005c" u"\x006e" u"",2);return cs_literal;}()); pls::cs::String cs_arg2 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x000a" u"",1);return cs_literal;}()); return pls::generated::cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array14_58030; auto cs_index = v_num19_58708; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array13_57999; auto cs_index = v_num19_58708; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0009" u"",1);return cs_literal;}()); bool cs_arg2 = false; bool cs_arg3 = false; bool cs_arg4 = false; return pls::generated::cs_0f7a7a73dac52ca4(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() -> void { pls::cs::Array<pls::cs::Array<pls::cs::String>> cs_arg0 = v_array14_58030; cs_4200a27cfd6b898d(cs_arg0); }());
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jarInflater_46694); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_22ec1e3c74812f59(cs_receiver); }());});
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>{}; v_jarInflater_46694 = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); pls::kairo::Font::SetScale(cs_arg0); }());});
if (([&]() { auto cs_left = pls::cs::box(pls::generated::cs_fe1686f2bdf4b397()); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>>{}); return cs_left != cs_right; }())) {
if ((([&]() -> bool { auto cs_left = cs_237ab1e79f07965b_value; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()) && pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = v_dictionary_47315; auto cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0074" u"\x0065" u"\x0078" u"\x0074" u"",4);return cs_literal;}()); return cs_receiver.ContainsKey(cs_arg0); }());}))) {
pls::cs::List<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>> v_list5_59192 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):59200",pls::cs::List<pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a>>::make());
{auto cs_list_enum793=(([&]() { auto cs_array = v_dictionary_47315; auto cs_index = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0074" u"\x0065" u"\x0078" u"\x0074" u"",4);return cs_literal;}()); return cs_array.get_Item(cs_index); }())).GetEnumerator();struct cs_list_scope793{decltype(cs_list_enum793)&e;~cs_list_scope793(){e.Dispose();}} cs_scope793{cs_list_enum793};while(cs_list_enum793.MoveNext()){ pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> v_item5_59233=cs_list_enum793.get_Current();{
if (((((([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = v_item5_59233; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eacffaa0f8c3f949; }())).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = v_item5_59233; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da40773ef2f3923c; }())).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = v_item5_59233; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da40773ef2f3923c; }())).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull)); auto cs_right = (([&]() { auto cs_array = ([&]() { auto cs_receiver = v_item5_59233; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eacffaa0f8c3f949; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())).length(); return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = (([&]() { auto cs_array = ([&]() { auto cs_receiver = v_item5_59233; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eacffaa0f8c3f949; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xc8ull)); return (cs_left < cs_right); }()))) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = v_list5_59192; auto cs_arg0 = v_item5_59233; cs_receiver.Add(cs_arg0); }());});
}
}}}
std::int32_t v_num20_59489 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num21_59509 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num22_59529 = ([&]() -> std::int32_t { auto cs_left = (v_list5_59192).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); return pls::cs::div_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = v_num22_59529; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); v_num22_59529 = cs_value; return cs_value; }());
}
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_237ab1e79f07965b_value = cs_value; return cs_value; }());
pls::cs::Ref<pls::kairo::Font> v_font_59657 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[]):59664",([&]() -> pls::cs::Ref<pls::kairo::Font> { return pls::cs::make_ref<pls::kairo::Font>(); }()));
while (([&]() -> bool { auto cs_left = v_num20_59489; auto cs_right = (v_list5_59192).get_Count(); return (cs_left < cs_right); }())) {
pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> v_langPackRecord4_59752 = ([&]() { auto cs_array = v_list5_59192; auto cs_index = v_num20_59489; return cs_array.get_Item(cs_index); }());
([&]() { auto cs_old = cs_237ab1e79f07965b_value; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_59657); pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_langPackRecord4_59752; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eacffaa0f8c3f949; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->StringWidth(cs_arg0); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_59657); pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_langPackRecord4_59752; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_da40773ef2f3923c; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->StringWidth(cs_arg0); }());}); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); cs_237ab1e79f07965b_value = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num20_59489; auto cs_rhs = v_num22_59529; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num20_59489 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num21_59509; auto cs_new = pls::cs::add_i32(cs_old,1); v_num21_59509 = cs_new; return cs_old; }());
}
if (([&]() -> bool { auto cs_left = v_num21_59509; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); cs_237ab1e79f07965b_value = cs_value; return cs_value; }());
} else {
([&]() { auto cs_old = cs_237ab1e79f07965b_value; auto cs_rhs = v_num21_59509; auto cs_value = pls::cs::div_i32(cs_old,cs_rhs); cs_237ab1e79f07965b_value = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = cs_237ab1e79f07965b_value; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); cs_237ab1e79f07965b_value = cs_value; return cs_value; }());
}
}
if (([&]() -> bool { auto cs_left = cs_237ab1e79f07965b_value; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); cs_237ab1e79f07965b_value = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = cs_237ab1e79f07965b_value; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return (cs_left != cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { std::int32_t cs_arg0 = cs_237ab1e79f07965b_value; pls::kairo::Font::SetScale(cs_arg0); }());});
}
}
} catch(const pls::cs::Exception& cs_caught_794) {auto cs_exception_794=pls::cs::capture_exception(cs_caught_794);
if(pls::cs::exception_is(cs_exception_794,"System.Exception")) {auto v_ex_60322=cs_exception_794;{
([&]() { auto cs_value = v_array_46734; pls::generated::cs_fe1686f2bdf4b397() = cs_value; return cs_value; }());
([&]() { auto cs_value = v_array2_46772; pls::generated::cs_74c39fff0f46ab52() = cs_value; return cs_value; }());
([&]() { auto cs_value = v_text_46809; cs_885e46a8a2b95893_value = cs_value; return cs_value; }());
([&]() { auto cs_value = v_text2_46843; cs_9d62cf693893d256_value = cs_value; return cs_value; }());
([&]() { auto cs_value = v_text3_46876; cs_2fd3deed1e409352_value = cs_value; return cs_value; }());
([&]() { auto cs_value = v_num_46907; cs_237ab1e79f07965b_value = cs_value; return cs_value; }());
pls::cs::throw_exception(v_ex_60322);
}}
else {throw;} } }, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_jarInflater_46694); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jarInflater_46694); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_22ec1e3c74812f59(cs_receiver); }());});
}
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>{}; v_jarInflater_46694 = cs_value; return cs_value; }());
});
}
}
}

// M:kairo.unity.util.Language.LT(System.String,System.String)
pls::cs::String cs_334563e946ad4962(pls::cs::String v_text,pls::cs::String v_arg) { pls::generated::cs_init_72d9658ed61145d6();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.LT(System.String,System.String)",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text; auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }());}); pls::cs::String cs_arg1 = v_arg; return pls::generated::cs_abfabf5a341e90ae(cs_arg0,cs_arg1); }());});
}
}
}

// M:kairo.unity.util.Language.SetLanguagePack(System.String,System.Byte[],System.Boolean)
bool cs_1acec610f93846f1(pls::cs::String v_file,pls::cs::Array<std::uint8_t> v_data,bool v_save) { pls::generated::cs_init_72d9658ed61145d6();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.SetLanguagePack(System.String,System.Byte[],System.Boolean)",kairo);
{try{
if (pls::generated::cs_b0827224162a4f93()) {
if (([&]() { auto cs_left = pls::cs::box(v_file); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0053" u"\x0065" u"\x0074" u"\x004c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x0050" u"\x0061" u"\x0063" u"\x006b" u"\x005b" u"\x0028" u"\x006e" u"\x0075" u"\x006c" u"\x006c" u"\x0029" u"\x005d" u"",23);return cs_literal;}()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.SetLanguagePack(System.String,System.Byte[],System.Boolean):42874",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.SetLanguagePack(System.String,System.Byte[],System.Boolean):42874",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0053" u"\x0065" u"\x0074" u"\x004c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x0050" u"\x0061" u"\x0063" u"\x006b" u"\x005b" u"",16);return cs_literal;}()); auto cs_right = v_file; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005d" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());});
}
}
if (([&]() { auto cs_left = pls::cs::box(v_file); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::generated::cs_a73b188b45467dba() = cs_value; return cs_value; }());
if (([&]() -> bool { return cs_dea1d8116ed5aaf1(); }())) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_file; auto cs_arg1 = pls::generated::cs_3fb70c2eded7c9ff(); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }());})) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::generated::cs_a73b188b45467dba() = cs_value; return cs_value; }());
([&]() -> void { cs_3d765e32623626a4(); }());
([&]() -> void { cs_5185b14a34385754(); }());
}
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }());})) {
if ((pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_file; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"",0);return cs_literal;}()); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }());}) || pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_file; auto cs_arg1 = pls::generated::cs_3fb70c2eded7c9ff(); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }());}))) {
([&]() -> void { cs_3d765e32623626a4(); }());
([&]() -> void { cs_5185b14a34385754(); }());
} else {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::generated::cs_a73b188b45467dba() = cs_value; return cs_value; }());
}
}
}
if ((([&]() { auto cs_left = pls::cs::box(v_file); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ((pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_file; auto cs_arg1 = pls::generated::cs_3fb70c2eded7c9ff(); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }());}) || pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_file; auto cs_arg1 = pls::generated::cs_01c4bf6216ab6adc(); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }());}))))) {
if (v_save) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"",14);return cs_literal;}()); pls::cs::String cs_arg1 = v_file; pls::kairo::PlayerPrefs::SetString(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::kairo::PlayerPrefs::Save(); }());});
}
([&]() { auto cs_value = v_file; cs_8da583a8425c5117_value = cs_value; return cs_value; }());
pls::cs::String v_id_43586 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0055" u"\x0041" u"\x002d" u"\x0033" u"\x0035" u"\x0032" u"\x0032" u"\x0038" u"\x0038" u"\x0037" u"\x0037" u"\x002d" u"\x0031" u"\x0038" u"",14);return cs_literal;}());
([&]() -> void { bool cs_arg0 = true; pls::cs::String cs_arg1 = v_id_43586; auto cs_arg2 = pls::source_allocations::completed("params_array","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.SetLanguagePack(System.String,System.Byte[],System.Boolean):43613",pls::cs::Array<pls::cs::String>::make(1)); cs_arg2.at(0) = v_file; cs_d56fc27939b907e9(cs_arg0,cs_arg1,cs_arg2); }());
if (v_save) {
if (pls::generated::cs_4cc76a7a43706693()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0044" u"\x0069" u"\x0073" u"\x0070" u"\x0061" u"\x0074" u"\x0063" u"\x0068" u"\x0050" u"\x0061" u"\x0067" u"\x0065" u"\x0056" u"\x0069" u"\x0065" u"\x0077" u"\x005b" u"\x0053" u"\x0065" u"\x0074" u"\x004c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x0050" u"\x0061" u"\x0063" u"\x006b" u"\x0020" u"\x0020" u"\x0020" u"\x0020" u"\x004d" u"\x0075" u"\x006c" u"\x0074" u"\x0069" u"\x0054" u"\x0079" u"\x0070" u"\x0065" u"\x005d" u"",46);return cs_literal;}()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());});
}
([&]() -> void { cs_9d34ee3db26afc7b(); }());
}
throw pls::cs::ReturnFlow<bool>{true};
}
bool v_flag_43862 = ((([&]() { auto cs_left = pls::cs::box(v_file); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = (v_file).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) && (!(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_file; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005e" u"\x005b" u"\x0061" u"\x002d" u"\x007a" u"\x0041" u"\x002d" u"\x005a" u"\x0030" u"\x002d" u"\x0039" u"\x005f" u"\x005c" u"\x002d" u"\x005d" u"\x002b" u"\x005c" u"\x002e" u"\x0063" u"\x0073" u"\x0076" u"\x0024" u"",22);return cs_literal;}()); return pls::cs::RuntimeRegex::IsMatch(cs_arg0,cs_arg1); }());}))));
if (pls::generated::cs_4cc76a7a43706693()) {
if (([&]() { auto cs_left = pls::cs::box(v_file); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.SetLanguagePack(System.String,System.Byte[],System.Boolean):44022",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.SetLanguagePack(System.String,System.Byte[],System.Boolean):44022",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0053" u"\x0065" u"\x0074" u"\x004c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x0050" u"\x0061" u"\x0063" u"\x006b" u"\x005b" u"\x0028" u"\x006e" u"\x0075" u"\x006c" u"\x006c" u"\x0029" u"\x005d" u"\x0020" u"\x0020" u"\x0020" u"\x0020" u"\x0063" u"\x0075" u"\x0073" u"\x0074" u"\x006f" u"\x006d" u"\x0028" u"",34);return cs_literal;}()); auto cs_right = pls::cs::String(v_flag_43862?u"True":u"False"); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0029" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.SetLanguagePack(System.String,System.Byte[],System.Boolean):44109",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.SetLanguagePack(System.String,System.Byte[],System.Boolean):44109",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.SetLanguagePack(System.String,System.Byte[],System.Boolean):44109",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.SetLanguagePack(System.String,System.Byte[],System.Boolean):44109",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0053" u"\x0065" u"\x0074" u"\x004c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x0050" u"\x0061" u"\x0063" u"\x006b" u"\x005b" u"",16);return cs_literal;}()); auto cs_right = v_file; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005d" u"\x0020" u"\x0020" u"\x0020" u"\x0020" u"\x0063" u"\x0075" u"\x0073" u"\x0074" u"\x006f" u"\x006d" u"\x0028" u"",12);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = pls::cs::String(v_flag_43862?u"True":u"False"); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0029" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());});
}
}
pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jarInflater_44193 = pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>{};
pls::cs::run_finally([&]() {try {
if (((([&]() { auto cs_left = pls::cs::box(v_file); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_left = (v_file).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) && ([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }()))) {
if ((!(v_flag_43862))) {
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.SetLanguagePack(System.String,System.Byte[],System.Boolean):44331",([&]() -> pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> { pls::cs::Array<std::uint8_t> cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x002e" u"\x0064" u"\x0061" u"\x0074" u"",12);return cs_literal;}()); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }());}); return pls::generated::cs_9eb68b9f4334471a(cs_arg0); }())); v_jarInflater_44193 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jarInflater_44193); pls::cs::String cs_arg0 = v_file; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_344d0f488664be89(cs_receiver,cs_arg0); }());}); v_data = cs_value; return cs_value; }());
} else {
if ((!(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005f" u"\x0063" u"\x0075" u"\x0073" u"\x0074" u"\x006f" u"\x006d" u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x002e" u"\x0063" u"\x0073" u"\x0076" u"",21);return cs_literal;}()); return pls::kairo::Storage::Exists(cs_arg0,cs_arg1); }());})))) {
throw pls::cs::ReturnFlow<bool>{false};
}
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005f" u"\x0063" u"\x0075" u"\x0073" u"\x0074" u"\x006f" u"\x006d" u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x002e" u"\x0063" u"\x0073" u"\x0076" u"",21);return cs_literal;}()); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }());}); v_data = cs_value; return cs_value; }());
}
}
([&]() -> void { pls::cs::Array<std::uint8_t> cs_arg0 = v_data; cs_f93cc86620424e6c(cs_arg0); }());
if ((!(v_flag_43862))) {
pls::cs::String v_title_44680 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = cs_9d62cf693893d256_value; return cs_3b656a07e9770826(cs_arg0); }());
if (([&]() { auto cs_left = pls::cs::box(v_title_44680); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_value = v_title_44680; cs_2fd3deed1e409352_value = cs_value; return cs_value; }());
}
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x004b" u"\x0061" u"\x0069" u"\x0072" u"\x006f" u"\x0073" u"\x006f" u"\x0066" u"\x0074" u"",9);return cs_literal;}()); cs_885e46a8a2b95893_value = cs_value; return cs_value; }());
}
if (v_save) {
if (v_flag_43862) {
if (([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x005f" u"\x006c" u"\x006f" u"\x0063" u"\x0061" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"",23);return cs_literal;}()); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"",0);return cs_literal;}()); return pls::kairo::PlayerPrefs::GetString(cs_arg0,cs_arg1); }());}); auto cs_right = v_file; return (cs_left != cs_right); }())) {
pls::cs::Ref<cs_0286a0dbe9da0b33> v_dialog_44959 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.SetLanguagePack(System.String,System.Byte[],System.Boolean):44968",([&]() -> pls::cs::Ref<cs_0286a0dbe9da0b33> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x004d" u"\x0065" u"\x0073" u"\x0073" u"\x0061" u"\x0067" u"\x0065" u"",7);return cs_literal;}()); return cs_63545d46c6887c12(cs_arg0,cs_arg1); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_44959); pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0044" u"\x0061" u"\x0074" u"\x0061" u"\x0020" u"\x0064" u"\x006f" u"\x0077" u"\x006e" u"\x006c" u"\x006f" u"\x0061" u"\x0064" u"\x0065" u"\x0064" u"\x002e" u"\x000a" u"\x0055" u"\x0070" u"\x006c" u"\x006f" u"\x0061" u"\x0064" u"\x0020" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x0020" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x0020" u"\x0061" u"\x006e" u"\x0064" u"\x0020" u"\x0063" u"\x0072" u"\x0065" u"\x0061" u"\x0074" u"\x006f" u"\x0072" u"\x0027" u"\x0073" u"\x0020" u"\x006e" u"\x0061" u"\x006d" u"\x0065" u"\x0020" u"\x0074" u"\x006f" u"\x0020" u"\x004b" u"\x0061" u"\x0069" u"\x0072" u"\x006f" u"\x0073" u"\x006f" u"\x0066" u"\x0074" u"\x0020" u"\x0066" u"\x006f" u"\x0072" u"\x0020" u"\x0073" u"\x0068" u"\x0061" u"\x0072" u"\x0069" u"\x006e" u"\x0067" u"\x003f" u"\x000a" u"\x004e" u"\x006f" u"\x0020" u"\x0070" u"\x0065" u"\x0072" u"\x0073" u"\x006f" u"\x006e" u"\x0061" u"\x006c" u"\x0020" u"\x0064" u"\x0061" u"\x0074" u"\x0061" u"\x0020" u"\x0077" u"\x0069" u"\x006c" u"\x006c" u"\x0020" u"\x0062" u"\x0065" u"\x0020" u"\x0073" u"\x0065" u"\x006e" u"\x0074" u"\x002e" u"",113);return cs_literal;}()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d53653cbf2469429(cs_receiver,cs_arg0); }());
std::int32_t v_num_45147 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_44959); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1727d3688d4d03e6(cs_receiver); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x005f" u"\x0073" u"\x0065" u"\x006e" u"\x0064" u"",19);return cs_literal;}()); std::int32_t cs_arg1 = ((([&]() -> bool { auto cs_left = v_num_45147; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }())) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); pls::kairo::PlayerPrefs::SetInt(cs_arg0,cs_arg1); }());});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x005f" u"\x006c" u"\x006f" u"\x0063" u"\x0061" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"",23);return cs_literal;}()); pls::cs::String cs_arg1 = v_file; pls::kairo::PlayerPrefs::SetString(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005f" u"\x0063" u"\x0075" u"\x0073" u"\x0074" u"\x006f" u"\x006d" u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x002e" u"\x0063" u"\x0073" u"\x0076" u"",21);return cs_literal;}()); pls::cs::Array<std::uint8_t> cs_arg3 = v_data; pls::kairo::Storage::Write(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"",14);return cs_literal;}()); pls::cs::String cs_arg1 = v_file; pls::kairo::PlayerPrefs::SetString(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::kairo::PlayerPrefs::Save(); }());});
}
bool v_num2_45469 = (v_flag_43862 && ([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005f" u"\x006c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x005f" u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x005f" u"\x0073" u"\x0065" u"\x006e" u"\x0064" u"",19);return cs_literal;}()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::PlayerPrefs::GetInt(cs_arg0,cs_arg1); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()));
pls::cs::String v_id2_45546 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0055" u"\x0041" u"\x002d" u"\x0033" u"\x0035" u"\x0032" u"\x0032" u"\x0038" u"\x0038" u"\x0037" u"\x0037" u"\x002d" u"\x0031" u"\x0038" u"",14);return cs_literal;}());
if (v_num2_45469) {
([&]() -> void { bool cs_arg0 = true; pls::cs::String cs_arg1 = v_id2_45546; auto cs_arg2 = pls::source_allocations::completed("params_array","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.SetLanguagePack(System.String,System.Byte[],System.Boolean):45595",pls::cs::Array<pls::cs::String>::make(3)); cs_arg2.at(0) = cs_9d62cf693893d256_value; cs_arg2.at(1) = cs_885e46a8a2b95893_value; cs_arg2.at(2) = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_file; return cs_4eef7fc5ca116b40(cs_arg0); }()); cs_d56fc27939b907e9(cs_arg0,cs_arg1,cs_arg2); }());
} else {
([&]() -> void { bool cs_arg0 = true; pls::cs::String cs_arg1 = v_id2_45546; auto cs_arg2 = pls::source_allocations::completed("params_array","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.SetLanguagePack(System.String,System.Byte[],System.Boolean):45721",pls::cs::Array<pls::cs::String>::make(1)); cs_arg2.at(0) = cs_9d62cf693893d256_value; cs_d56fc27939b907e9(cs_arg0,cs_arg1,cs_arg2); }());
}
if (v_save) {
if (pls::generated::cs_4cc76a7a43706693()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0044" u"\x0069" u"\x0073" u"\x0070" u"\x0061" u"\x0074" u"\x0063" u"\x0068" u"\x0050" u"\x0061" u"\x0067" u"\x0065" u"\x0056" u"\x0069" u"\x0065" u"\x0077" u"\x005b" u"\x0053" u"\x0065" u"\x0074" u"\x004c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x0050" u"\x0061" u"\x0063" u"\x006b" u"\x005d" u"",33);return cs_literal;}()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());});
}
([&]() -> void { cs_9d34ee3db26afc7b(); }());
}
([&]() { auto cs_value = v_file; cs_8da583a8425c5117_value = cs_value; return cs_value; }());
} catch(const pls::cs::Exception& cs_caught_778) {auto cs_exception_778=pls::cs::capture_exception(cs_caught_778);
if(pls::cs::exception_is(cs_exception_778,"System.Exception")) {auto v_ex_45983=cs_exception_778;{
if (pls::generated::cs_4cc76a7a43706693()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_ex_45983; return pls::generated::cs_b686603f380b2527(cs_arg0); }());});
}
if (v_flag_43862) {
pls::cs::String v_text_46088 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::game::cs_require(v_ex_45983)->get_Message(); return pls::cs::string_trim(cs_arg0); }());});
if (([&]() -> bool { auto cs_left = (v_text_46088).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0041" u"\x006e" u"\x0020" u"\x0065" u"\x0072" u"\x0072" u"\x006f" u"\x0072" u"\x0020" u"\x0068" u"\x0061" u"\x0073" u"\x0020" u"\x006f" u"\x0063" u"\x0063" u"\x0075" u"\x0072" u"\x0072" u"\x0065" u"\x0064" u"\x002e" u"",22);return cs_literal;}()); v_text_46088 = cs_value; return cs_value; }());
}
pls::cs::Ref<cs_0286a0dbe9da0b33> v_dialog2_46206 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.SetLanguagePack(System.String,System.Byte[],System.Boolean):46216",([&]() -> pls::cs::Ref<cs_0286a0dbe9da0b33> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0045" u"\x0072" u"\x0072" u"\x006f" u"\x0072" u"",5);return cs_literal;}()); return cs_63545d46c6887c12(cs_arg0,cs_arg1); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog2_46206); pls::cs::String cs_arg0 = v_text_46088; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d53653cbf2469429(cs_receiver,cs_arg0); }());
([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog2_46206); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1727d3688d4d03e6(cs_receiver); }());
}
throw pls::cs::ReturnFlow<bool>{false};
}}
else {throw;} }}, [&]() {
if ((([&]() { auto cs_left = pls::cs::box(pls::cs::box((v_jarInflater_44193))); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()))) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>((v_jarInflater_44193)); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_22ec1e3c74812f59(cs_receiver); }());});
}
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>{}; v_jarInflater_44193 = cs_value; return cs_value; }());
});
throw pls::cs::ReturnFlow<bool>{true};
}catch(const pls::cs::ReturnFlow<bool>& cs_return){return cs_return.value;}return pls::cs::invalid_return_flow<bool>();}
}
}

// M:kairo.unity.util.Language.SetSoftLabelTable(System.String[][])
void cs_45076861cf1dc76f(pls::cs::Array<pls::cs::Array<pls::cs::String>> v_softlabelTable) { pls::generated::cs_init_72d9658ed61145d6();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.SetSoftLabelTable(System.String[][])",kairo);
{
([&]() { auto cs_value = v_softlabelTable; pls::generated::cs_6393581f8e4c2247() = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(pls::generated::cs_6393581f8e4c2247()); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<pls::cs::String>>{}); return cs_left == cs_right; }())) {
return;
}
for (std::int32_t v_i_30471 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_30471; auto cs_right = (pls::generated::cs_6393581f8e4c2247()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_30471; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_30471 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = pls::generated::cs_6393581f8e4c2247(); auto cs_index = v_i_30471; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_array = pls::generated::cs_6393581f8e4c2247(); auto cs_index = v_i_30471; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005c" u"",1);return cs_literal;}()); pls::cs::String cs_arg2 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x00a5" u"",1);return cs_literal;}()); return pls::generated::cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_array = pls::generated::cs_6393581f8e4c2247(); auto cs_index = v_i_30471; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_array = pls::generated::cs_6393581f8e4c2247(); auto cs_index = v_i_30471; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005c" u"",1);return cs_literal;}()); pls::cs::String cs_arg2 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x00a5" u"",1);return cs_literal;}()); return pls::generated::cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}

// M:kairo.unity.util.Language.SetTextTable(System.String[][])
void cs_4200a27cfd6b898d(pls::cs::Array<pls::cs::Array<pls::cs::String>> v_textTable) { pls::generated::cs_init_72d9658ed61145d6();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.SetTextTable(System.String[][])",kairo);
{
([&]() { auto cs_value = pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::String>>>{}; pls::generated::cs_560940226681a6a6() = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_textTable); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<pls::cs::String>>{}); return cs_left == cs_right; }())) {
return;
}
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::String>>> { pls::cs::Array<pls::cs::Array<pls::cs::String>> cs_arg0 = v_textTable; return pls::generated::cs_79b14a50dd86de7d(cs_arg0); }());}); pls::generated::cs_560940226681a6a6() = cs_value; return cs_value; }());
}
}
}
}
