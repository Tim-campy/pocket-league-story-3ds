// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_3af9088680f95fb3.hpp"
#include "portable_generated_type_3b41638e424b9ee0.hpp"
#include "portable_generated_type_5098bfda9cf65745.hpp"
#include "portable_generated_type_52158c8b20364c2b.hpp"
#include "portable_generated_type_72d9658ed61145d6.hpp"
#include "portable_generated_type_83a7bc36395d16bd.hpp"
#include "portable_generated_type_86e62a3c0e632a0f.hpp"
#include "portable_generated_type_8d93189702e4084b.hpp"
#include "portable_generated_type_bfe2a01361163e7a.hpp"
#include "portable_generated_type_e7a5499b363ef51b.hpp"
#include "portable_generated_type_e7d772862db62924.hpp"
#include "portable_generated_type_ea324a0bbfe717fe.hpp"
#include "portable_generated_type_edf182ae9bfd734d.hpp"
#include "portable_generated_type_fb60578b3098a284.hpp"
namespace pls::generated {

void cs_52158c8b20364c2b::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_6f69af47bcfae216,visitor);pls::cs::trace_value(cs_8f27992211ad5e96,visitor);pls::cs::trace_value(cs_578ed5fb729c9567,visitor);}

void cs_52158c8b20364c2b::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_6f69af47bcfae216);pls::cs::release_value(cs_8f27992211ad5e96);pls::cs::release_value(cs_578ed5fb729c9567);}

void cs_init_52158c8b20364c2b(){static pls::cs::TypeInitState state;state.run("kairo.unity.util.JarInflater",[](){

});}

// M:kairo.unity.util.JarInflater._load(java.io.InputStream)
void cs_e488b26211313625(pls::cs::Ref<cs_52158c8b20364c2b> cs_this,pls::cs::Ref<cs_e7a5499b363ef51b> v_stream) { cs_init_52158c8b20364c2b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.JarInflater._load(java.io.InputStream)",kairo);
{
([&]() -> std::int32_t { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_3715f8f52a079812(cs_arg0); }());
std::int32_t v_size_1888 = ([&]() -> std::int32_t { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_3715f8f52a079812(cs_arg0); }());
std::int32_t v_num_1930 = ([&]() -> std::int32_t { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_3715f8f52a079812(cs_arg0); }());
pls::cs::Array<pls::cs::String> v_array_1976 = pls::cs::Array<pls::cs::String>::make(v_num_1930);
pls::cs::Array<std::int32_t> v_array2_2010 = pls::cs::Array<std::int32_t>::make(v_num_1930);
pls::cs::Array<std::int32_t> v_array3_2042 = pls::cs::Array<std::int32_t>::make(v_num_1930);
pls::cs::Array<std::uint8_t> v_array4_2075 = pls::cs::Array<std::uint8_t>::make(v_num_1930);
for (std::int32_t v_i_2111 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2111; auto cs_right = v_num_1930; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2111; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2111 = cs_new; return cs_old; }())) {
pls::cs::Array<std::uint8_t> v_bytes_2148 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; std::int32_t cs_arg1 = ([&]() -> std::int32_t { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_3715f8f52a079812(cs_arg0); }()); return cs_d2d344ef3c486f90(cs_arg0,cs_arg1); }());
([&]() { auto cs_target = v_array_1976; auto cs_index = v_i_2111; auto cs_value = ([&]() -> pls::cs::String { pls::cs::Array<std::uint8_t> cs_arg0 = v_bytes_2148; return cs_0062608f682073ef(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
for (std::int32_t v_j_2261 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_2261; auto cs_right = v_num_1930; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_2261; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_2261 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array2_2010; auto cs_index = v_j_2261; auto cs_value = ([&]() -> std::int32_t { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_3715f8f52a079812(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
for (std::int32_t v_k_2348 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_2348; auto cs_right = v_num_1930; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_2348; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_2348 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array3_2042; auto cs_index = v_k_2348; auto cs_value = ([&]() -> std::int32_t { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_3715f8f52a079812(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; std::int32_t cs_arg1 = (v_array4_2075).length(); return cs_d2d344ef3c486f90(cs_arg0,cs_arg1); }()); v_array4_2075 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Dictionary<pls::cs::String,pls::cs::Ref<cs_bfe2a01361163e7a>>::make(); pls::generated::cs_require(cs_target)->cs_6f69af47bcfae216 = cs_value; return cs_value; }());
for (std::int32_t v_l_2535 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_2535; auto cs_right = (v_array_1976).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_2535; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_2535 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_bfe2a01361163e7a> v_fileInfo_2583 = ([&]() -> pls::cs::Ref<cs_bfe2a01361163e7a> { return cs_b704c7698ceaf8f6(); }());
([&]() { auto cs_target = v_fileInfo_2583; auto cs_value = ([&]() { auto cs_array = v_array_1976; auto cs_index = v_l_2535; return cs_array.get_Item(cs_index); }()); pls::generated::cs_require(cs_target)->cs_638e5d654c077b59 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_fileInfo_2583; auto cs_value = ([&]() { auto cs_array = v_array2_2010; auto cs_index = v_l_2535; return cs_array.get_Item(cs_index); }()); pls::generated::cs_require(cs_target)->cs_6ec368f1de920152 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_fileInfo_2583; auto cs_value = ([&]() { auto cs_array = v_array3_2042; auto cs_index = v_l_2535; return cs_array.get_Item(cs_index); }()); pls::generated::cs_require(cs_target)->cs_45a972d6cedcd20a = cs_value; return cs_value; }());
([&]() { auto cs_target = v_fileInfo_2583; auto cs_value = ([&]() { auto cs_array = v_array4_2075; auto cs_index = v_l_2535; return cs_array.get_Item(cs_index); }()); pls::generated::cs_require(cs_target)->cs_83fbaf866783c8ce = cs_value; return cs_value; }());
pls::cs::String v_key_2746 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = v_array_1976; auto cs_index = v_l_2535; return cs_array.get_Item(cs_index); }()); return pls::cs::culture_to_lower(cs_arg0); }());});
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6f69af47bcfae216; }()); auto cs_index = v_key_2746; auto cs_value = v_fileInfo_2583; cs_target.set_Item(cs_index,cs_value); return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; std::int32_t cs_arg1 = v_size_1888; return cs_d2d344ef3c486f90(cs_arg0,cs_arg1); }()); pls::generated::cs_require(cs_target)->cs_8f27992211ad5e96 = cs_value; return cs_value; }());
}
}
}
}

// M:kairo.unity.util.JarInflater._search(System.String)
pls::cs::Ref<cs_bfe2a01361163e7a> cs_642a65c689c877cf(pls::cs::Ref<cs_52158c8b20364c2b> cs_this,pls::cs::String v_name) { cs_init_52158c8b20364c2b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.JarInflater._search(System.String)",kairo);
{
if ((([&]() { auto cs_left = pls::cs::box(v_name); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6f69af47bcfae216; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()))) {
return pls::cs::Ref<cs_bfe2a01361163e7a>{};
}
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_52158c8b20364c2b>>(cs_this); pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_name; return pls::cs::string_trim(cs_arg0); }());}); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_cfa0bd9ae3912c7e(cs_receiver,cs_arg0); }()); return pls::cs::culture_to_lower(cs_arg0); }());}); v_name = cs_value; return cs_value; }());
pls::cs::Array<pls::cs::String> v_accessFilesList_6160 = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_name; return cs_2abb7e234674bdd0(cs_arg0); }());
for (std::int32_t v_i_6228 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_6228; auto cs_right = (v_accessFilesList_6160).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_6228; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_6228 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_bfe2a01361163e7a> v_value_6286 = pls::cs::Ref<cs_bfe2a01361163e7a>{};
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_dictionary=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6f69af47bcfae216; }());auto cs_key=pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = v_accessFilesList_6160; auto cs_index = v_i_6228; return cs_array.get_Item(cs_index); }()); return pls::cs::culture_to_lower(cs_arg0); }());});return cs_dictionary.TryGetValue(cs_key,v_value_6286);}());})) {
return v_value_6286;
}
}
return pls::cs::Ref<cs_bfe2a01361163e7a>{};
}
}
}
}

// M:kairo.unity.util.JarInflater.#ctor(System.Byte[])
pls::cs::Ref<cs_52158c8b20364c2b> cs_9eb68b9f4334471a(pls::cs::Array<std::uint8_t> v_data) { cs_init_52158c8b20364c2b();
{ auto cs_this = pls::cs::make_ref<cs_52158c8b20364c2b>(); cs_9eb68b9f4334471a_init(cs_this,v_data); return cs_this; }
}

void cs_9eb68b9f4334471a_init(pls::cs::Ref<cs_52158c8b20364c2b> cs_this,pls::cs::Array<std::uint8_t> v_data) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.JarInflater.#ctor(System.Byte[])",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }())) {
throw pls::cs::NullReferenceException();
}
pls::cs::Ref<cs_3b41638e424b9ee0> v_byteArrayInputStream_620 = pls::cs::Ref<cs_3b41638e424b9ee0>{};
pls::cs::run_finally([&]() -> void { {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = v_data; return cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_620 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_52158c8b20364c2b>>(cs_this); pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_620; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e488b26211313625(cs_receiver,cs_arg0); }());
} }, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_byteArrayInputStream_620); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
try {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(v_byteArrayInputStream_620); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
} catch(const pls::cs::Exception& cs_caught_503) {auto cs_exception_503=pls::cs::capture_exception(cs_caught_503);
if(pls::cs::exception_is(cs_exception_503,"System.Exception")) {{

}}
else {throw;} }
}
([&]() { auto cs_value = pls::cs::Ref<cs_3b41638e424b9ee0>{}; v_byteArrayInputStream_620 = cs_value; return cs_value; }());
});
}
}
}

// M:kairo.unity.util.JarInflater.Close
void cs_22ec1e3c74812f59(pls::cs::Ref<cs_52158c8b20364c2b> cs_this) { cs_init_52158c8b20364c2b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.JarInflater.Close",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::uint8_t>{}; pls::generated::cs_require(cs_target)->cs_8f27992211ad5e96 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::String{}; pls::generated::cs_require(cs_target)->cs_578ed5fb729c9567 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6f69af47bcfae216; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6f69af47bcfae216; }()); cs_receiver.Clear(); }());});
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Dictionary<pls::cs::String,pls::cs::Ref<cs_bfe2a01361163e7a>>{}; pls::generated::cs_require(cs_target)->cs_6f69af47bcfae216 = cs_value; return cs_value; }());
}
}
}
}

// M:kairo.unity.util.JarInflater.ConvertExtension(System.String)
pls::cs::String cs_cfa0bd9ae3912c7e(pls::cs::Ref<cs_52158c8b20364c2b> cs_this,pls::cs::String v_file) { cs_init_52158c8b20364c2b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.JarInflater.ConvertExtension(System.String)",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(v_file); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return v_file;
}
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_file; return cs_56a96842a5446791(cs_arg0); }()); v_file = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_578ed5fb729c9567; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::cs::String v_text_7203 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_file; return pls::cs::RuntimePath::GetExtension(cs_arg0); }());}); return pls::cs::culture_to_lower(cs_arg0); }());});
pls::cs::String v_text2_7256 = v_text_7203;
if ((([&]() -> bool { auto cs_left = v_text_7203; auto cs_right = pls::cs::String(std::u16string(u"\x002e" u"\x0069" u"\x006e" u"\x0066" u"",4)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = v_text_7203; auto cs_right = pls::cs::String(std::u16string(u"\x002e" u"\x0069" u"\x006e" u"\x0069" u"",4)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = pls::cs::String(std::u16string(u"\x002e" u"\x0074" u"\x0078" u"\x0074" u"",4)); v_text_7203 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_text_7203; auto cs_right = v_text2_7256; return (cs_left != cs_right); }())) {
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_file; auto cs_arg1 = v_text_7203; return pls::cs::RuntimePath::ChangeExtension(cs_arg0,cs_arg1); }());}); v_file = cs_value; return cs_value; }());
}
}
return v_file;
}
}
}
}

// M:kairo.unity.util.JarInflater.GetData(System.String)
pls::cs::Array<std::uint8_t> cs_344d0f488664be89(pls::cs::Ref<cs_52158c8b20364c2b> cs_this,pls::cs::String v_name) { cs_init_52158c8b20364c2b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.JarInflater.GetData(System.String)",kairo);
{try{
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_52158c8b20364c2b>>(cs_this); pls::cs::String cs_arg0 = v_name; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_cfa0bd9ae3912c7e(cs_receiver,cs_arg0); }()); v_name = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_578ed5fb729c9567; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::cs::Array<std::uint8_t> v_array_4845 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = ([&]() { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_578ed5fb729c9567; }()); auto cs_right = v_name; return pls::cs::String::concat(cs_left,cs_right); }()); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }());});
if (([&]() { auto cs_left = pls::cs::box(v_array_4845); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left != cs_right; }())) {
throw pls::cs::ReturnFlow<pls::cs::Array<std::uint8_t>>{v_array_4845};
}
}
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_52158c8b20364c2b>>(cs_this); pls::cs::String cs_arg0 = v_name; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_95ade8baca7a8831(cs_receiver,cs_arg0); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
if (cs_4cc76a7a43706693()) {
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x004a" u"\x0061" u"\x0072" u"\x0049" u"\x006e" u"\x0066" u"\x006c" u"\x0061" u"\x0074" u"\x0065" u"\x0072" u"\x002e" u"\x0067" u"\x0065" u"\x0074" u"\x0044" u"\x0061" u"\x0074" u"\x0061" u"\x003a" u"\x0020" u"\x005b" u"",22)); auto cs_right = v_name; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x005d" u"\x304c" u"\x898b" u"\x3064" u"\x304b" u"\x308a" u"\x307e" u"\x305b" u"\x3093" u"",9)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
throw pls::cs::ReturnFlow<pls::cs::Array<std::uint8_t>>{pls::cs::Array<std::uint8_t>{}};
}
pls::cs::Ref<cs_e7a5499b363ef51b> v_inputStream_5126 = ([&]() -> pls::cs::Ref<cs_e7a5499b363ef51b> { auto cs_receiver = static_cast<pls::cs::Ref<cs_52158c8b20364c2b>>(cs_this); pls::cs::String cs_arg0 = v_name; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f410f19385e7fe89(cs_receiver,cs_arg0); }());
if (([&]() { auto cs_left = pls::cs::box(v_inputStream_5126); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
throw pls::cs::ReturnFlow<pls::cs::Array<std::uint8_t>>{pls::cs::Array<std::uint8_t>{}};
}
pls::cs::Ref<cs_fb60578b3098a284> v_byteArrayOutputStream_5242 = ([&]() -> pls::cs::Ref<cs_fb60578b3098a284> { return cs_10f86e0fa81e1b57(); }());
pls::cs::Array<std::uint8_t> v_array2_5305 = pls::cs::Array<std::uint8_t>{};
pls::cs::Array<std::uint8_t> v_array3_5330 = pls::cs::Array<std::uint8_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400ull)));
std::int32_t v_len_5362 = std::int32_t{};
pls::cs::run_finally([&]() {{
while (([&]() -> bool { auto cs_left = (([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(v_inputStream_5126); pls::cs::Array<std::uint8_t> cs_arg0 = v_array3_5330; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_e3637c1f0ab57ef5(cs_arg0); }()); v_len_5362 = cs_value; return cs_value; }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(v_byteArrayOutputStream_5242); pls::cs::Array<std::uint8_t> cs_arg0 = v_array3_5330; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = v_len_5362; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_eeffa75bcd0cd73d(cs_arg0,cs_arg1,cs_arg2); }());
}
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_fb60578b3098a284>>(v_byteArrayOutputStream_5242); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c875afd29ab2966c(cs_receiver); }()); v_array2_5305 = cs_value; return cs_value; }());
}}, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_byteArrayOutputStream_5242); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
try {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_fb60578b3098a284>>(v_byteArrayOutputStream_5242); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
} catch(const pls::cs::Exception& cs_caught_504) {auto cs_exception_504=pls::cs::capture_exception(cs_caught_504);
if(pls::cs::exception_is(cs_exception_504,"System.Exception")) {{

}}
else {throw;} }
}
([&]() { auto cs_value = pls::cs::Ref<cs_fb60578b3098a284>{}; v_byteArrayOutputStream_5242 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_inputStream_5126); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
try {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(v_inputStream_5126); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
} catch(const pls::cs::Exception& cs_caught_505) {auto cs_exception_505=pls::cs::capture_exception(cs_caught_505);
if(pls::cs::exception_is(cs_exception_505,"System.Exception")) {{

}}
else {throw;} }
}
([&]() { auto cs_value = pls::cs::Ref<cs_e7a5499b363ef51b>{}; v_inputStream_5126 = cs_value; return cs_value; }());
});
throw pls::cs::ReturnFlow<pls::cs::Array<std::uint8_t>>{v_array2_5305};
}catch(const pls::cs::ReturnFlow<pls::cs::Array<std::uint8_t>>& cs_return){return cs_return.value;}return pls::cs::invalid_return_flow<pls::cs::Array<std::uint8_t>>();}
}
}
}

// M:kairo.unity.util.JarInflater.GetInputStream(System.String)
pls::cs::Ref<cs_e7a5499b363ef51b> cs_f410f19385e7fe89(pls::cs::Ref<cs_52158c8b20364c2b> cs_this,pls::cs::String v_name) { cs_init_52158c8b20364c2b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.JarInflater.GetInputStream(System.String)",kairo);
{try{
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_52158c8b20364c2b>>(cs_this); pls::cs::String cs_arg0 = v_name; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_cfa0bd9ae3912c7e(cs_receiver,cs_arg0); }()); v_name = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_578ed5fb729c9567; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::cs::Ref<cs_e7a5499b363ef51b> v_resourceAsStream_3128 = ([&]() -> pls::cs::Ref<cs_e7a5499b363ef51b> { auto cs_receiver = static_cast<pls::cs::Ref<cs_52158c8b20364c2b>>(cs_this); pls::cs::String cs_arg0 = ([&]() { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_578ed5fb729c9567; }()); auto cs_right = v_name; return pls::cs::String::concat(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c147457aef6fbe27(cs_receiver,cs_arg0); }());
if (([&]() { auto cs_left = pls::cs::box(v_resourceAsStream_3128); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
throw pls::cs::ReturnFlow<pls::cs::Ref<cs_e7a5499b363ef51b>>{v_resourceAsStream_3128};
}
}
pls::cs::Ref<cs_bfe2a01361163e7a> v_fileInfo_3280 = ([&]() -> pls::cs::Ref<cs_bfe2a01361163e7a> { auto cs_receiver = static_cast<pls::cs::Ref<cs_52158c8b20364c2b>>(cs_this); pls::cs::String cs_arg0 = v_name; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_642a65c689c877cf(cs_receiver,cs_arg0); }());
if (([&]() { auto cs_left = pls::cs::box(v_fileInfo_3280); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
throw pls::cs::ReturnFlow<pls::cs::Ref<cs_e7a5499b363ef51b>>{pls::cs::Ref<cs_e7a5499b363ef51b>{}};
}
pls::cs::Array<std::uint8_t> v_array_3368 = pls::cs::Array<std::uint8_t>{};
pls::cs::Ref<cs_8d93189702e4084b> v_dataInputStream_3401 = pls::cs::Ref<cs_8d93189702e4084b>{};
pls::cs::run_finally([&]() {{
std::int32_t v_num_3445 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8f27992211ad5e96; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_fileInfo_3280; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6ec368f1de920152; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); auto cs_right = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8f27992211ad5e96; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_fileInfo_3280; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6ec368f1de920152; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); return (cs_left | cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8f27992211ad5e96; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_fileInfo_3280; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6ec368f1de920152; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::shl_i32(cs_left,cs_right); }())); return (cs_left | cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8f27992211ad5e96; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_fileInfo_3280; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6ec368f1de920152; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); return (cs_left & cs_right); }())); return (cs_left | cs_right); }());
pls::cs::Array<std::uint8_t> v_array2_3636 = pls::cs::Array<std::uint8_t>::make(v_num_3445);
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8f27992211ad5e96; }())); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_fileInfo_3280; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6ec368f1de920152; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::add_i32(cs_left,cs_right); }()); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(v_array2_3636); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = v_num_3445; cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
if ((([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_receiver = v_fileInfo_3280; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_83fbaf866783c8ce; }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_fileInfo_3280; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_45a972d6cedcd20a; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
throw pls::cs::Exception(pls::cs::String(std::u16string(u"\x004a" u"\x0061" u"\x0072" u"\x0049" u"\x006e" u"\x0066" u"\x006c" u"\x0061" u"\x0074" u"\x0065" u"\x0072" u"\x002e" u"\x0067" u"\x0065" u"\x0074" u"\x0049" u"\x006e" u"\x0070" u"\x0075" u"\x0074" u"\x0053" u"\x0074" u"\x0072" u"\x0065" u"\x0061" u"\x006d" u"\x0028" u"\x0029" u"\x0020" u"\x5727" u"\x7e2e" u"\x306b" u"\x306f" u"\x5bfe" u"\x5fdc" u"\x3057" u"\x3066" u"\x3044" u"\x307e" u"\x305b" u"\x3093" u"",41)).utf8());
}
([&]() { auto cs_value = v_array2_3636; v_array_3368 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::String cs_arg0 = v_name; pls::cs::Array<std::uint8_t> cs_arg1 = v_array_3368; return cs_25d47473f7a22197(cs_arg0,cs_arg1); }()); v_array_3368 = cs_value; return cs_value; }());
throw pls::cs::ReturnFlow<pls::cs::Ref<cs_e7a5499b363ef51b>>{([&]() -> pls::cs::Ref<cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = v_array_3368; return cs_c3a84083a67ee263(cs_arg0); }())};
}}, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_dataInputStream_3401); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
try {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8d93189702e4084b>>(v_dataInputStream_3401); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
} catch(const pls::cs::Exception& cs_caught_511) {auto cs_exception_511=pls::cs::capture_exception(cs_caught_511);
if(pls::cs::exception_is(cs_exception_511,"System.Exception")) {{

}}
else {throw;} }
}
([&]() { auto cs_value = pls::cs::Ref<cs_8d93189702e4084b>{}; v_dataInputStream_3401 = cs_value; return cs_value; }());
});
}catch(const pls::cs::ReturnFlow<pls::cs::Ref<cs_e7a5499b363ef51b>>& cs_return){return cs_return.value;}return pls::cs::invalid_return_flow<pls::cs::Ref<cs_e7a5499b363ef51b>>();}
}
}
}

// M:kairo.unity.util.JarInflater.GetResourceAsStream(System.String)
pls::cs::Ref<cs_e7a5499b363ef51b> cs_c147457aef6fbe27(pls::cs::Ref<cs_52158c8b20364c2b> cs_this,pls::cs::String v_file) { cs_init_52158c8b20364c2b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.JarInflater.GetResourceAsStream(System.String)",kairo);
{
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_52158c8b20364c2b>>(cs_this); pls::cs::String cs_arg0 = v_file; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_cfa0bd9ae3912c7e(cs_receiver,cs_arg0); }()); v_file = cs_value; return cs_value; }());
try {
if (([&]() -> bool { pls::cs::String cs_arg0 = v_file; return cs_0932d38228a45953(cs_arg0); }())) {
return ([&]() -> pls::cs::Ref<cs_e7a5499b363ef51b> { pls::cs::String cs_arg0 = v_file; return cs_3b653770361acb31(cs_arg0); }());
}
([&]() { auto cs_old = v_file; auto cs_rhs = pls::cs::String(std::u16string(u"\x002e" u"\x0062" u"\x0079" u"\x0074" u"\x0065" u"\x0073" u"",6)); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_file = cs_value; return cs_value; }());
if (([&]() -> bool { pls::cs::String cs_arg0 = v_file; return cs_0932d38228a45953(cs_arg0); }())) {
return ([&]() -> pls::cs::Ref<cs_e7a5499b363ef51b> { pls::cs::String cs_arg0 = v_file; return cs_3b653770361acb31(cs_arg0); }());
}
} catch(const pls::cs::Exception& cs_caught_512) {auto cs_exception_512=pls::cs::capture_exception(cs_caught_512);
if(pls::cs::exception_is(cs_exception_512,"System.Exception")) {{

}}
else {throw;} }
return pls::cs::Ref<cs_e7a5499b363ef51b>{};
}
}
}
}

// M:kairo.unity.util.JarInflater.GetSize(System.String)
std::int64_t cs_95ade8baca7a8831(pls::cs::Ref<cs_52158c8b20364c2b> cs_this,pls::cs::String v_name) { cs_init_52158c8b20364c2b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.JarInflater.GetSize(System.String)",kairo);
{
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_52158c8b20364c2b>>(cs_this); pls::cs::String cs_arg0 = v_name; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_cfa0bd9ae3912c7e(cs_receiver,cs_arg0); }()); v_name = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_578ed5fb729c9567; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::cs::Array<std::uint8_t> v_array_4295 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = ([&]() { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_578ed5fb729c9567; }()); auto cs_right = v_name; return pls::cs::String::concat(cs_left,cs_right); }()); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }());});
if (([&]() { auto cs_left = pls::cs::box(v_array_4295); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left != cs_right; }())) {
return pls::cs::cast_integral<std::int64_t>((v_array_4295).length());
}
}
pls::cs::Ref<cs_bfe2a01361163e7a> v_fileInfo_4424 = ([&]() -> pls::cs::Ref<cs_bfe2a01361163e7a> { auto cs_receiver = static_cast<pls::cs::Ref<cs_52158c8b20364c2b>>(cs_this); pls::cs::String cs_arg0 = v_name; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_642a65c689c877cf(cs_receiver,cs_arg0); }());
if (([&]() { auto cs_left = pls::cs::box(v_fileInfo_4424); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return pls::cs::cast_integral<std::int64_t>(std::uint64_t(0xffffffffffffffffull));
}
return pls::cs::cast_integral<std::int64_t>(([&]() { auto cs_receiver = v_fileInfo_4424; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_45a972d6cedcd20a; }()));
}
}
}
}
}
