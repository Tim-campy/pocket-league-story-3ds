// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_582a926e9c7748a6.hpp"
#include "portable_generated_type_a0cf9aef6a251bfd.hpp"
#include "portable_generated_type_bb652fbb61000386.hpp"
#include "portable_generated_type_bd164c3c94a49e2a.hpp"
namespace pls::generated {

void cs_bb652fbb61000386::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_bd164c3c94a49e2a::trace_edges(visitor);pls::cs::trace_value(cs_3a4ab2d19bbedee8,visitor);pls::cs::trace_value(cs_23af4da78e1ad81f,visitor);pls::cs::trace_value(cs_3af0cc4416bce0e0,visitor);pls::cs::trace_value(cs_fe44ec569b4e9ab5,visitor);}

void cs_bb652fbb61000386::release_edges(){cs_bd164c3c94a49e2a::release_edges();pls::cs::release_value(cs_3a4ab2d19bbedee8);pls::cs::release_value(cs_23af4da78e1ad81f);pls::cs::release_value(cs_3af0cc4416bce0e0);pls::cs::release_value(cs_fe44ec569b4e9ab5);}

std::int32_t cs_bb652fbb61000386::GetHashCode() {return cs_0a77e2bc4ebc201e(std::static_pointer_cast<cs_bb652fbb61000386>(shared_from_this()));}

bool cs_bb652fbb61000386::Equals(pls::cs::Ref<pls::cs::Object> const& v_obj) {return cs_145a142f07908920(std::static_pointer_cast<cs_bb652fbb61000386>(shared_from_this()),v_obj);}

pls::cs::String cs_bb652fbb61000386::ToString() {return cs_f93784de5b5888a8(std::static_pointer_cast<cs_bb652fbb61000386>(shared_from_this()));}

void cs_init_bb652fbb61000386(){static pls::cs::TypeInitState state;state.run("kairo.unity.util.SecureString",[](){

});}

// M:kairo.unity.util.SecureString.#ctor(kairo.unity.util.SecureString)
pls::cs::Ref<cs_bb652fbb61000386> cs_54c6ff780bd91d97(pls::cs::Ref<cs_bb652fbb61000386> v_src) { cs_init_bb652fbb61000386();
{ auto cs_this = pls::cs::make_ref<cs_bb652fbb61000386>(); cs_54c6ff780bd91d97_init(cs_this,v_src); return cs_this; }
}

void cs_54c6ff780bd91d97_init(pls::cs::Ref<cs_bb652fbb61000386> cs_this,pls::cs::Ref<cs_bb652fbb61000386> v_src) {
([&]() { cs_a55d2b3f0d930c1e_init(std::static_pointer_cast<cs_bd164c3c94a49e2a>(cs_this)); }());
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureString.#ctor(kairo.unity.util.SecureString)",kairo);
{
([&]() -> pls::cs::Ref<cs_bb652fbb61000386> { auto cs_receiver = static_cast<pls::cs::Ref<cs_bb652fbb61000386>>(cs_this); pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_bb652fbb61000386>>(v_src); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6dd0b8d6220bd2b3(cs_receiver); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_fc11351e7d5d875d(cs_receiver,cs_arg0); }());
}
}
}

// M:kairo.unity.util.SecureString.#ctor(System.String)
pls::cs::Ref<cs_bb652fbb61000386> cs_ede7ead54c734d4c(pls::cs::String v_value) { cs_init_bb652fbb61000386();
{ auto cs_this = pls::cs::make_ref<cs_bb652fbb61000386>(); cs_ede7ead54c734d4c_init(cs_this,v_value); return cs_this; }
}

void cs_ede7ead54c734d4c_init(pls::cs::Ref<cs_bb652fbb61000386> cs_this,pls::cs::String v_value) {
([&]() { cs_a55d2b3f0d930c1e_init(std::static_pointer_cast<cs_bd164c3c94a49e2a>(cs_this)); }());
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureString.#ctor(System.String)",kairo);
{
([&]() -> pls::cs::Ref<cs_bb652fbb61000386> { auto cs_receiver = static_cast<pls::cs::Ref<cs_bb652fbb61000386>>(cs_this); pls::cs::String cs_arg0 = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_fc11351e7d5d875d(cs_receiver,cs_arg0); }());
}
}
}

// M:kairo.unity.util.SecureString.Arraycopy(kairo.unity.util.SecureString[],System.Int32,kairo.unity.util.SecureString[],System.Int32,System.Int32)
void cs_d3ffac04a047de61(pls::cs::Array<pls::cs::Ref<cs_bb652fbb61000386>> v_srcArray,std::int32_t v_srcIndex,pls::cs::Array<pls::cs::Ref<cs_bb652fbb61000386>> v_dstArray,std::int32_t v_dstIndex,std::int32_t v_length) { cs_init_bb652fbb61000386();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureString.Arraycopy(kairo.unity.util.SecureString[],System.Int32,kairo.unity.util.SecureString[],System.Int32,System.Int32)",kairo);
{
for (std::int32_t v_i_3523 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3523; auto cs_right = v_length; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3523; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3523 = cs_new; return cs_old; }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = v_srcArray; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_srcIndex; auto cs_right = v_i_3523; return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_target = v_dstArray; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_dstIndex; auto cs_right = v_i_3523; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::Ref<cs_bb652fbb61000386>{};cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else {
([&]() { auto cs_target = v_dstArray; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_dstIndex; auto cs_right = v_i_3523; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/SecureString.cs:M:kairo.unity.util.SecureString.Arraycopy(kairo.unity.util.SecureString[],System.Int32,kairo.unity.util.SecureString[],System.Int32,System.Int32):3685",([&]() -> pls::cs::Ref<cs_bb652fbb61000386> { pls::cs::Ref<cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_array = v_srcArray; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_srcIndex; auto cs_right = v_i_3523; return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()); return cs_54c6ff780bd91d97(cs_arg0); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}
}

// M:kairo.unity.util.SecureString.EndsWith(System.String)
bool cs_8ebcc441a59bda9a(pls::cs::Ref<cs_bb652fbb61000386> cs_this,pls::cs::String v_suffix) { cs_init_bb652fbb61000386();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureString.EndsWith(System.String)",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_bb652fbb61000386>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6dd0b8d6220bd2b3(cs_receiver); }()); auto cs_arg1 = v_suffix; return pls::cs::culture_ends_with(cs_arg0,cs_arg1); }());});
}
}
}
}

// M:kairo.unity.util.SecureString.Equals(kairo.unity.util.SecureString)
bool cs_77a6541b4422f624(pls::cs::Ref<cs_bb652fbb61000386> cs_this,pls::cs::Ref<cs_bb652fbb61000386> v_anObject) { cs_init_bb652fbb61000386();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureString.Equals(kairo.unity.util.SecureString)",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_bb652fbb61000386>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6dd0b8d6220bd2b3(cs_receiver); }()); auto cs_arg1 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_bb652fbb61000386>>(v_anObject); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6dd0b8d6220bd2b3(cs_receiver); }()); return pls::generated::cs_string_equals(cs_arg0,cs_arg1); }());});
}
}
}
}

// M:kairo.unity.util.SecureString.Equals(System.Object)
bool cs_145a142f07908920(pls::cs::Ref<cs_bb652fbb61000386> cs_this,pls::cs::Ref<pls::cs::Object> v_obj) { cs_init_bb652fbb61000386();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureString.Equals(System.Object)",kairo);
{
if ((([&]() { auto cs_left = pls::cs::box(v_obj); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && pls::generated::cs_is<pls::cs::Ref<cs_bb652fbb61000386>>(pls::cs::box(v_obj)))) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_bb652fbb61000386>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6dd0b8d6220bd2b3(cs_receiver); }()); auto cs_arg1 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_bb652fbb61000386>>((pls::cs::unbox<pls::cs::Ref<cs_bb652fbb61000386>>(v_obj))); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6dd0b8d6220bd2b3(cs_receiver); }()); return pls::generated::cs_string_equals(cs_arg0,cs_arg1); }());});
}
return ([&]() { auto cs_left = pls::cs::box(cs_this); auto cs_right = pls::cs::box(v_obj); return cs_left == cs_right; }());
}
}
}
}

// M:kairo.unity.util.SecureString.Equals(System.String)
bool cs_6dfda3f794a136b1(pls::cs::Ref<cs_bb652fbb61000386> cs_this,pls::cs::String v_anObject) { cs_init_bb652fbb61000386();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureString.Equals(System.String)",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_bb652fbb61000386>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6dd0b8d6220bd2b3(cs_receiver); }()); auto cs_arg1 = v_anObject; return pls::generated::cs_string_equals(cs_arg0,cs_arg1); }());});
}
}
}
}

// M:kairo.unity.util.SecureString.Generate(System.Char)
char16_t cs_abc0bea20e9163ed(pls::cs::Ref<cs_bb652fbb61000386> cs_this,char16_t v_value) { cs_init_bb652fbb61000386();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureString.Generate(System.Char)",kairo);
{
return pls::cs::cast_integral<char16_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(~((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_value); auto cs_right = pls::cs::cast_integral<std::int64_t>(~(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7e5e9d5195f577e0; }()))); return (cs_left | cs_right); }())))); auto cs_right = (([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_value); auto cs_right = pls::cs::cast_integral<std::int64_t>(~(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7e5e9d5195f577e0; }()))); return (cs_left & cs_right); }())); return (cs_left | cs_right); }())));
}
}
}
}

// M:kairo.unity.util.SecureString.Generate(System.Char[],System.Char[])
void cs_f91a0cd22df6e95f(pls::cs::Ref<cs_bb652fbb61000386> cs_this,pls::cs::Array<char16_t> v_from,pls::cs::Array<char16_t> v_to) { cs_init_bb652fbb61000386();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureString.Generate(System.Char[],System.Char[])",kairo);
{
for (std::int32_t v_i_2625 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2625; auto cs_right = (v_from).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2625; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2625 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_to; auto cs_index = v_i_2625; auto cs_value = ([&]() -> char16_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_bb652fbb61000386>>(cs_this); char16_t cs_arg0 = ([&]() { auto cs_array = v_from; auto cs_index = v_i_2625; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_abc0bea20e9163ed(cs_receiver,cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}
}

// M:kairo.unity.util.SecureString.Get
pls::cs::String cs_6dd0b8d6220bd2b3(pls::cs::Ref<cs_bb652fbb61000386> cs_this) { cs_init_bb652fbb61000386();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureString.Get",kairo);
{
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3af0cc4416bce0e0; }())); auto cs_right = pls::cs::box(pls::cs::Array<char16_t>{}); return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3af0cc4416bce0e0; }())).length(); auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_23af4da78e1ad81f; }())).length(); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/SecureString.cs:M:kairo.unity.util.SecureString.Get:2349",pls::cs::Array<char16_t>::make((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_23af4da78e1ad81f; }())).length())); pls::generated::cs_require(cs_target)->cs_3af0cc4416bce0e0 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_bb652fbb61000386>>(cs_this); pls::cs::Array<char16_t> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_23af4da78e1ad81f; }()); pls::cs::Array<char16_t> cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3af0cc4416bce0e0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_f91a0cd22df6e95f(cs_receiver,cs_arg0,cs_arg1); }());
pls::cs::String v_text_2419 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/SecureString.cs:M:kairo.unity.util.SecureString.Get:2426",pls::generated::cs_string_from_chars(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3af0cc4416bce0e0; }())));
if ((!(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_text_2419; auto cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3a4ab2d19bbedee8; }()); return pls::generated::cs_string_equals(cs_arg0,cs_arg1); }());})))) {
([&]() { auto cs_old = cs_a55a986dcce0645f(); auto cs_new = pls::cs::add_i64(cs_old,1); cs_a55a986dcce0645f() = cs_new; return cs_old; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_text_2419; pls::generated::cs_require(cs_target)->cs_3a4ab2d19bbedee8 = cs_value; return cs_value; }());
}
return v_text_2419;
}
}
}
}

// M:kairo.unity.util.SecureString.GetBytes
pls::cs::Array<std::uint8_t> cs_14b03fdc4ae8f84c(pls::cs::Ref<cs_bb652fbb61000386> cs_this) { cs_init_bb652fbb61000386();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureString.GetBytes",kairo);
{
return ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_bb652fbb61000386>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6dd0b8d6220bd2b3(cs_receiver); }()); return cs_a8e45b955b78e04d(cs_arg0); }());
}
}
}
}

// M:kairo.unity.util.SecureString.GetHashCode
std::int32_t cs_0a77e2bc4ebc201e(pls::cs::Ref<cs_bb652fbb61000386> cs_this) { cs_init_bb652fbb61000386();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureString.GetHashCode",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fe44ec569b4e9ab5; }());
}
}
}
}

// M:kairo.unity.util.SecureString.IndexOf(System.Int32)
std::int32_t cs_9f636226b66780dc(pls::cs::Ref<cs_bb652fbb61000386> cs_this,std::int32_t v_ch) { cs_init_bb652fbb61000386();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureString.IndexOf(System.Int32)",kairo);
{
return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_bb652fbb61000386>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6dd0b8d6220bd2b3(cs_receiver); }()); std::int32_t cs_arg1 = v_ch; return cs_54a151f146e7cda1(cs_arg0,cs_arg1); }());
}
}
}
}

// M:kairo.unity.util.SecureString.Length
std::int32_t cs_4b9659319b202661(pls::cs::Ref<cs_bb652fbb61000386> cs_this) { cs_init_bb652fbb61000386();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureString.Length",kairo);
{
return (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_23af4da78e1ad81f; }())).length();
}
}
}
}

// M:kairo.unity.util.SecureString.op_Addition(kairo.unity.util.SecureString,System.String)
pls::cs::Ref<cs_bb652fbb61000386> cs_ac62509f5a77f0ac(pls::cs::Ref<cs_bb652fbb61000386> v_z,pls::cs::String v_w) { cs_init_bb652fbb61000386();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureString.op_Addition(kairo.unity.util.SecureString,System.String)",kairo);
{
return pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/SecureString.cs:M:kairo.unity.util.SecureString.op_Addition(kairo.unity.util.SecureString,System.String):620",([&]() -> pls::cs::Ref<cs_bb652fbb61000386> { pls::cs::String cs_arg0 = pls::source_allocations::completed("concat_call","src/KairoLibrary/kairo/unity/util/SecureString.cs:M:kairo.unity.util.SecureString.op_Addition(kairo.unity.util.SecureString,System.String):637",pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_value = v_z; return cs_f1e3fe1dceee44d7(cs_value); }()); auto cs_arg1 = v_w; return pls::cs::String::concat(cs_arg0,cs_arg1); }());})); return cs_ede7ead54c734d4c(cs_arg0); }()));
}
}
}

// M:kairo.unity.util.SecureString.op_Implicit(kairo.unity.util.SecureString)~System.String
pls::cs::String cs_f1e3fe1dceee44d7(pls::cs::Ref<cs_bb652fbb61000386> v_s) { cs_init_bb652fbb61000386();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureString.op_Implicit(kairo.unity.util.SecureString)~System.String",kairo);
{
return ([&]() -> pls::cs::String { auto cs_conditional = v_s; if(!cs_conditional)return pls::cs::String{}; return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_bb652fbb61000386>>(cs_conditional); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->ToString(); }()); }());
}
}
}

// M:kairo.unity.util.SecureString.op_Implicit(System.String)~kairo.unity.util.SecureString
pls::cs::Ref<cs_bb652fbb61000386> cs_7047562b1e051211(pls::cs::String v_s) { cs_init_bb652fbb61000386();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureString.op_Implicit(System.String)~kairo.unity.util.SecureString",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(v_s); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return pls::cs::Ref<cs_bb652fbb61000386>{};
}
return pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/SecureString.cs:M:kairo.unity.util.SecureString.op_Implicit(System.String)~kairo.unity.util.SecureString:514",([&]() -> pls::cs::Ref<cs_bb652fbb61000386> { pls::cs::String cs_arg0 = v_s; return cs_ede7ead54c734d4c(cs_arg0); }()));
}
}
}

// M:kairo.unity.util.SecureString.Set(System.String)
pls::cs::Ref<cs_bb652fbb61000386> cs_fc11351e7d5d875d(pls::cs::Ref<cs_bb652fbb61000386> cs_this,pls::cs::String v_value) { cs_init_bb652fbb61000386();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureString.Set(System.String)",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(cs_1e58df81cbed8f35()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/SecureString.cs:M:kairo.unity.util.SecureString.Set(System.String):1870",([&]() -> pls::cs::Ref<cs_a0cf9aef6a251bfd> { return cs_783c2dc4bd688739(); }())); cs_1e58df81cbed8f35() = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int64_t>(([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x22ull)); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_a0cf9aef6a251bfd>>(cs_1e58df81cbed8f35()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1811bb4f9e389c4b(cs_receiver); }()); return (cs_left | cs_right); }())); pls::generated::cs_require(cs_target)->cs_7e5e9d5195f577e0 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_value; pls::generated::cs_require(cs_target)->cs_3a4ab2d19bbedee8 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<char16_t> { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3a4ab2d19bbedee8; }()); return pls::generated::cs_to_chars(cs_arg0); }());}); pls::generated::cs_require(cs_target)->cs_23af4da78e1ad81f = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_bb652fbb61000386>>(cs_this); pls::cs::Array<char16_t> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_23af4da78e1ad81f; }()); pls::cs::Array<char16_t> cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_23af4da78e1ad81f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_f91a0cd22df6e95f(cs_receiver,cs_arg0,cs_arg1); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::generated::cs_require(cs_target)->cs_fe44ec569b4e9ab5 = cs_value; return cs_value; }());
for (std::int32_t v_i_2061 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2061; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_23af4da78e1ad81f; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2061; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2061 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = cs_this; auto cs_old = pls::generated::cs_require(cs_target)->cs_fe44ec569b4e9ab5; auto cs_rhs = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_23af4da78e1ad81f; }()); auto cs_index = v_i_2061; return cs_array.get_Item(cs_index); }()); auto cs_value = (cs_old ^ cs_rhs); pls::generated::cs_require(cs_target)->cs_fe44ec569b4e9ab5 = cs_value; return cs_value; }());
}
return cs_this;
}
}
}
}

// M:kairo.unity.util.SecureString.StartsWith(System.String)
bool cs_eaf1659172f4a34c(pls::cs::Ref<cs_bb652fbb61000386> cs_this,pls::cs::String v_prefix) { cs_init_bb652fbb61000386();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureString.StartsWith(System.String)",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_bb652fbb61000386>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6dd0b8d6220bd2b3(cs_receiver); }()); auto cs_arg1 = v_prefix; return pls::cs::culture_starts_with(cs_arg0,cs_arg1); }());});
}
}
}
}

// M:kairo.unity.util.SecureString.ToString
pls::cs::String cs_f93784de5b5888a8(pls::cs::Ref<cs_bb652fbb61000386> cs_this) { cs_init_bb652fbb61000386();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureString.ToString",kairo);
{
return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_bb652fbb61000386>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6dd0b8d6220bd2b3(cs_receiver); }());
}
}
}
}

// M:kairo.unity.util.SecureString.ToString(kairo.unity.util.SecureString)
pls::cs::String cs_1192c1f2378de3bb(pls::cs::Ref<cs_bb652fbb61000386> v_str) { cs_init_bb652fbb61000386();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureString.ToString(kairo.unity.util.SecureString)",kairo);
{
return ([&]() -> pls::cs::String { auto cs_conditional = v_str; if(!cs_conditional)return pls::cs::String{}; return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_bb652fbb61000386>>(cs_conditional); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->ToString(); }()); }());
}
}
}

// M:kairo.unity.util.SecureString.ValueOf(System.String)
pls::cs::Ref<cs_bb652fbb61000386> cs_376859ff51e2fc37(pls::cs::String v_str) { cs_init_bb652fbb61000386();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureString.ValueOf(System.String)",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(v_str); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return pls::cs::Ref<cs_bb652fbb61000386>{};
}
return pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/SecureString.cs:M:kairo.unity.util.SecureString.ValueOf(System.String):7524",([&]() -> pls::cs::Ref<cs_bb652fbb61000386> { pls::cs::String cs_arg0 = v_str; return cs_ede7ead54c734d4c(cs_arg0); }()));
}
}
}
}
