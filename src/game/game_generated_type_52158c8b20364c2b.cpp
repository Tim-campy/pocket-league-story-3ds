// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_52158c8b20364c2b.hpp"
#include "generated/portable_generated_type_52158c8b20364c2b.hpp"
#include "generated/portable_generated_type_582a926e9c7748a6.hpp"
#include "generated/portable_generated_type_bfe2a01361163e7a.hpp"
#include "generated/portable_generated_type_e7a5499b363ef51b.hpp"
#include "generated/portable_generated_type_edf182ae9bfd734d.hpp"
namespace pls::game {

// M:kairo.unity.util.JarInflater.#ctor(System.String)
pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_e4e1e97aa25d4dd2(pls::cs::String v_directory) { pls::generated::cs_init_52158c8b20364c2b();
{ auto cs_this = pls::cs::make_ref<pls::generated::cs_52158c8b20364c2b>(); cs_e4e1e97aa25d4dd2_init(cs_this,v_directory); return cs_this; }
}

void cs_e4e1e97aa25d4dd2_init(pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_this,pls::cs::String v_directory) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.JarInflater.#ctor(System.String)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_directory; pls::game::cs_require(cs_target)->cs_578ed5fb729c9567 = cs_value; return cs_value; }());
if ((!(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_578ed5fb729c9567; }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x002f" u"",1)); return pls::cs::culture_ends_with(cs_arg0,cs_arg1); }());})))) {
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_578ed5fb729c9567; auto cs_rhs = pls::cs::String(std::u16string(u"\x002f" u"",1)); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_578ed5fb729c9567 = cs_value; return cs_value; }());
}
pls::cs::String v_text_1251 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_578ed5fb729c9567; }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_578ed5fb729c9567; }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }());}); auto cs_arg1 = pls::cs::String(std::u16string(u"\x002e" u"\x0064" u"\x0061" u"\x0074" u"",4)); return pls::cs::String::concat(cs_arg0,cs_arg1); }());});
pls::cs::Array<pls::cs::String> v_array_1343 = ([&](){auto cs_initial_array_375=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_375.at(0)=v_text_1251;cs_initial_array_375.at(1)=pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_578ed5fb729c9567; }()); auto cs_arg1 = v_text_1251; return pls::cs::String::concat(cs_arg0,cs_arg1); }());});return cs_initial_array_375;}());
for (std::int32_t v_i_1434 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1434; auto cs_right = (v_array_1343).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1434; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1434 = cs_new; return cs_old; }())) {try {
pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_resourceAsStream_1485 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(cs_this); pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1343; auto cs_index = v_i_1434; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c147457aef6fbe27(cs_receiver,cs_arg0); }());});
if (([&]() { auto cs_left = pls::cs::box(v_resourceAsStream_1485); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
continue;
}
pls::cs::run_finally([&]() -> void { {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(cs_this); pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_resourceAsStream_1485; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_e488b26211313625(cs_receiver,cs_arg0); }());});
throw pls::cs::BranchFlow{1425,pls::cs::BranchFlow::Kind::break_};
} }, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_resourceAsStream_1485); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_resourceAsStream_1485); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());});
}
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>{}; v_resourceAsStream_1485 = cs_value; return cs_value; }());
});
}catch(const pls::cs::BranchFlow&cs_branch){if(cs_branch.target!=1425)throw;if(cs_branch.kind==pls::cs::BranchFlow::Kind::continue_)continue;break;}}
}
}
}

// M:kairo.unity.util.JarInflater.CheckResourceAsStream(System.String)
bool cs_ac9d24f4cde3d39d(pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_this,pls::cs::String v_file) { pls::generated::cs_init_52158c8b20364c2b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.JarInflater.CheckResourceAsStream(System.String)",kairo);
{
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(cs_this); pls::cs::String cs_arg0 = v_file; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_cfa0bd9ae3912c7e(cs_receiver,cs_arg0); }());}); v_file = cs_value; return cs_value; }());
try {
return (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { pls::cs::String cs_arg0 = v_file; return pls::generated::cs_0932d38228a45953(cs_arg0); }());}) || pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { pls::cs::String cs_arg0 = ([&]() { auto cs_left = v_file; auto cs_right = pls::cs::String(std::u16string(u"\x002e" u"\x0062" u"\x0079" u"\x0074" u"\x0065" u"\x0073" u"",6)); return pls::cs::String::concat(cs_left,cs_right); }()); return pls::generated::cs_0932d38228a45953(cs_arg0); }());}));
} catch(const pls::cs::Exception& cs_caught_369) {auto cs_exception_369=pls::cs::capture_exception(cs_caught_369);
if(pls::cs::exception_is(cs_exception_369,"System.Exception")) {{

}}
else {throw;} }
return false;
}
}
}
}

// M:kairo.unity.util.JarInflater.Exist(System.String)
bool cs_3c7d820c198e8591(pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_this,pls::cs::String v_name) { pls::generated::cs_init_52158c8b20364c2b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.JarInflater.Exist(System.String)",kairo);
{
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(cs_this); pls::cs::String cs_arg0 = v_name; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_cfa0bd9ae3912c7e(cs_receiver,cs_arg0); }());}); v_name = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_578ed5fb729c9567; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(cs_this); pls::cs::String cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_578ed5fb729c9567; }()); auto cs_right = v_name; return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ac9d24f4cde3d39d(cs_receiver,cs_arg0); }());
}
return ([&]() { auto cs_left = pls::cs::box(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::generated::cs_bfe2a01361163e7a> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(cs_this); pls::cs::String cs_arg0 = v_name; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_642a65c689c877cf(cs_receiver,cs_arg0); }());})); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }());
}
}
}
}

// M:kairo.unity.util.JarInflater.GetDirectory
pls::cs::String cs_af791034e85c70f7(pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_this) { pls::generated::cs_init_52158c8b20364c2b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.JarInflater.GetDirectory",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_578ed5fb729c9567; }());
}
}
}
}

// M:kairo.unity.util.JarInflater.GetFiles
pls::cs::Array<pls::cs::String> cs_13b4a0fe102f7702(pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_this) { pls::generated::cs_init_52158c8b20364c2b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.JarInflater.GetFiles",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_578ed5fb729c9567; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
return pls::cs::Array<pls::cs::String>{};
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_dictionary=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6f69af47bcfae216; }());return cs_dictionary.KeysToArray();}());});
}
}
}
}
}
