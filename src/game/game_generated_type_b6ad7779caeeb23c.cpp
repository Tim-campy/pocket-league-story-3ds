// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_91b71e223c6a5085.hpp"
#include "game_generated_type_b489b0d33bb37bb8.hpp"
#include "game_generated_type_b6ad7779caeeb23c.hpp"
#include "game_generated_type_f65ba01749ba9d34.hpp"
#include "generated/portable_generated_type_1feb9ce0db5130ce.hpp"
#include "generated/portable_generated_type_5098bfda9cf65745.hpp"
#include "generated/portable_generated_type_51222df74ac70bab.hpp"
#include "generated/portable_generated_type_582a926e9c7748a6.hpp"
#include "generated/portable_generated_type_7de6788b61a5af56.hpp"
#include "generated/portable_generated_type_7fd3b635ed6929d0.hpp"
#include "generated/portable_generated_type_86e62a3c0e632a0f.hpp"
#include "generated/portable_generated_type_bb652fbb61000386.hpp"
#include "generated/portable_generated_type_ea324a0bbfe717fe.hpp"
#include "generated/portable_generated_type_f8b20a4d1d9d695f.hpp"
#include "generated/portable_generated_type_51222df74ac70bab_templates.hpp"
namespace pls::game {

void cs_b6ad7779caeeb23c::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_a401daa035e0faf4,visitor);pls::cs::trace_value(cs_db21a4a60995105d,visitor);pls::cs::trace_value(cs_9ae60e1c180bff03,visitor);pls::cs::trace_value(cs_de4cdc41e3b9a730,visitor);pls::cs::trace_value(cs_775a9b4739b7acd4,visitor);pls::cs::trace_value(cs_c6b39a5b64ca017b,visitor);}

void cs_b6ad7779caeeb23c::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_a401daa035e0faf4);pls::cs::release_value(cs_db21a4a60995105d);pls::cs::release_value(cs_9ae60e1c180bff03);pls::cs::release_value(cs_de4cdc41e3b9a730);pls::cs::release_value(cs_775a9b4739b7acd4);pls::cs::release_value(cs_c6b39a5b64ca017b);}

std::int32_t cs_b6ad7779caeeb23c::GetHashCode() {return cs_02a7dd0b0ae9540d(pls::cs::static_pointer_cast<cs_b6ad7779caeeb23c>(shared_from_this()));}

void cs_init_b6ad7779caeeb23c(){static pls::cs::TypeInitState state;state.run("kairo.unity.system.GameDataRecord",[](){

});}

// M:kairo.unity.system.GameDataRecord.#ctor
pls::cs::Ref<cs_b6ad7779caeeb23c> cs_90ee7811a5836c91() { cs_init_b6ad7779caeeb23c();
{ auto cs_this = pls::cs::make_ref<cs_b6ad7779caeeb23c>(); cs_90ee7811a5836c91_init(cs_this); return cs_this; }
}

void cs_90ee7811a5836c91_init(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this) {
([&]() { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); bool cs_arg2 = true; cs_2c9eb5964aff96b8_init(pls::cs::static_pointer_cast<cs_b6ad7779caeeb23c>(cs_this),cs_arg0,cs_arg1,cs_arg2); }());
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.#ctor",kairo);
{

}
}
}

// M:kairo.unity.system.GameDataRecord.#ctor(System.Int32,System.Boolean)
pls::cs::Ref<cs_b6ad7779caeeb23c> cs_a5fcfa14b1e244ef(std::int32_t v_number,bool v_insert) { cs_init_b6ad7779caeeb23c();
{ auto cs_this = pls::cs::make_ref<cs_b6ad7779caeeb23c>(); cs_a5fcfa14b1e244ef_init(cs_this,v_number,v_insert); return cs_this; }
}

void cs_a5fcfa14b1e244ef_init(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this,std::int32_t v_number,bool v_insert) {
([&]() { std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(([&]() -> pls::cs::Ref<cs_b489b0d33bb37bb8> { return cs_3eff1227bb0de063(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_047c3ab4bcca9557(cs_receiver); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); std::int32_t cs_arg1 = v_number; bool cs_arg2 = v_insert; cs_2c9eb5964aff96b8_init(pls::cs::static_pointer_cast<cs_b6ad7779caeeb23c>(cs_this),cs_arg0,cs_arg1,cs_arg2); }());
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.#ctor(System.Int32,System.Boolean)",kairo);
{

}
}
}

// M:kairo.unity.system.GameDataRecord.#ctor(System.Int32,System.Int32,System.Boolean)
pls::cs::Ref<cs_b6ad7779caeeb23c> cs_2c9eb5964aff96b8(std::int32_t v_friendId,std::int32_t v_number,bool v_insert) { cs_init_b6ad7779caeeb23c();
{ auto cs_this = pls::cs::make_ref<cs_b6ad7779caeeb23c>(); cs_2c9eb5964aff96b8_init(cs_this,v_friendId,v_number,v_insert); return cs_this; }
}

void cs_2c9eb5964aff96b8_init(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this,std::int32_t v_friendId,std::int32_t v_number,bool v_insert) {
cs_this->cs_a401daa035e0faf4 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/system/GameDataRecord.cs:M:kairo.unity.system.GameDataRecord.#ctor(System.Int32,System.Int32,System.Boolean):1642",([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }()));
cs_this->cs_db21a4a60995105d = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/system/GameDataRecord.cs:M:kairo.unity.system.GameDataRecord.#ctor(System.Int32,System.Int32,System.Boolean):1693",([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }()));
cs_this->cs_9ae60e1c180bff03 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/system/GameDataRecord.cs:M:kairo.unity.system.GameDataRecord.#ctor(System.Int32,System.Int32,System.Boolean):1742",([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { return pls::generated::cs_26fc017eba499603(); }()));
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.#ctor(System.Int32,System.Int32,System.Boolean)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/system/GameDataRecord.cs:M:kairo.unity.system.GameDataRecord.#ctor(System.Int32,System.Int32,System.Boolean):2130",([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return pls::generated::cs_891849d99054b970(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_a401daa035e0faf4 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/system/GameDataRecord.cs:M:kairo.unity.system.GameDataRecord.#ctor(System.Int32,System.Int32,System.Boolean):2164",([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = v_friendId; return pls::generated::cs_891849d99054b970(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_db21a4a60995105d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/system/GameDataRecord.cs:M:kairo.unity.system.GameDataRecord.#ctor(System.Int32,System.Int32,System.Boolean):2202",([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = v_number; return pls::generated::cs_891849d99054b970(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_9ae60e1c180bff03 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/system/GameDataRecord.cs:M:kairo.unity.system.GameDataRecord.#ctor(System.Int32,System.Int32,System.Boolean):2239",([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }())); pls::game::cs_require(cs_target)->cs_de4cdc41e3b9a730 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_775a9b4739b7acd4 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_insert; pls::game::cs_require(cs_target)->cs_c6b39a5b64ca017b = cs_value; return cs_value; }());
}
}
}

// M:kairo.unity.system.GameDataRecord.Acquire(System.String,System.Byte[])
void cs_88b2f71bcc6dfbb4(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this,pls::cs::String v_name,pls::cs::Array<std::uint8_t> v_data) { cs_init_b6ad7779caeeb23c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.Acquire(System.String,System.Byte[])",kairo);
{
for (std::int32_t v_i_3536 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3536; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de4cdc41e3b9a730; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3536; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3536 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_f65ba01749ba9d34> v_data2_3583 = pls::cs::unbox<pls::cs::Ref<cs_f65ba01749ba9d34>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de4cdc41e3b9a730; }())); std::int32_t cs_arg0 = v_i_3536; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}));
if (((!(([&]() { auto cs_receiver = v_data2_3583; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b485e3aec4989e77; }()))) && pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_name; auto cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = v_data2_3583; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ac47dab08454a832; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }());}); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }());}))) {
([&]() { auto cs_target = v_data2_3583; auto cs_value = ([&]() -> pls::cs::Ref<cs_91b71e223c6a5085> { pls::cs::Array<std::uint8_t> cs_arg0 = v_data; return cs_afd97ff1c93f8bf4(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_e3cc350442bf2617 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_data2_3583; auto cs_value = true; pls::game::cs_require(cs_target)->cs_abeb2739082898db = cs_value; return cs_value; }());
break;
}
}
}
}
}
}

// M:kairo.unity.system.GameDataRecord.Add(System.String,System.Byte[])
void cs_e33b1dbd8b024056(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this,pls::cs::String v_name,pls::cs::Array<std::uint8_t> v_data) { cs_init_b6ad7779caeeb23c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.Add(System.String,System.Byte[])",kairo);
{
for (std::int32_t v_i_3175 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3175; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de4cdc41e3b9a730; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3175; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3175 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_f65ba01749ba9d34> v_data2_3222 = pls::cs::unbox<pls::cs::Ref<cs_f65ba01749ba9d34>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de4cdc41e3b9a730; }())); std::int32_t cs_arg0 = v_i_3175; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}));
if ((([&]() { auto cs_receiver = v_data2_3222; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b485e3aec4989e77; }()) && pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_name; auto cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = v_data2_3222; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ac47dab08454a832; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }());}); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }());}))) {
([&]() { auto cs_target = v_data2_3222; auto cs_value = ([&]() -> pls::cs::Ref<cs_91b71e223c6a5085> { pls::cs::Array<std::uint8_t> cs_arg0 = v_data; return cs_afd97ff1c93f8bf4(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_e3cc350442bf2617 = cs_value; return cs_value; }());
return;
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de4cdc41e3b9a730; }())); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/system/GameDataRecord.cs:M:kairo.unity.system.GameDataRecord.Add(System.String,System.Byte[]):3436",([&]() -> pls::cs::Ref<cs_f65ba01749ba9d34> { pls::cs::String cs_arg0 = v_name; pls::cs::Array<std::uint8_t> cs_arg1 = v_data; bool cs_arg2 = true; return cs_e166ffa7af3293c0(cs_arg0,cs_arg1,cs_arg2); }()))); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());});
}
}
}
}

// M:kairo.unity.system.GameDataRecord.Add(System.String,System.Int64)
void cs_4b07aac51b58d37f(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this,pls::cs::String v_name,std::int64_t v_value) { cs_init_b6ad7779caeeb23c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.Add(System.String,System.Int64)",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b6ad7779caeeb23c>>(cs_this); pls::cs::String cs_arg0 = v_name; pls::cs::Array<std::uint8_t> cs_arg1 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { std::int64_t cs_arg0 = v_value; return pls::generated::cs_45bf8972ccfd60d6(cs_arg0); }());}); return pls::generated::cs_a8e45b955b78e04d(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e33b1dbd8b024056(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
}

// M:kairo.unity.system.GameDataRecord.Add(System.String,System.String)
void cs_1c90a1b23419daad(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this,pls::cs::String v_name,pls::cs::String v_value) { cs_init_b6ad7779caeeb23c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.Add(System.String,System.String)",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b6ad7779caeeb23c>>(cs_this); pls::cs::String cs_arg0 = v_name; pls::cs::Array<std::uint8_t> cs_arg1 = ((([&]() { auto cs_left = pls::cs::box(v_value); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) ? pls::cs::Array<std::uint8_t>{} : ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::String cs_arg0 = v_value; return pls::generated::cs_a8e45b955b78e04d(cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e33b1dbd8b024056(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
}

// M:kairo.unity.system.GameDataRecord.Add(System.String)
void cs_ae95295deef710ce(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this,pls::cs::String v_name) { cs_init_b6ad7779caeeb23c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.Add(System.String)",kairo);
{
for (std::int32_t v_i_2660 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2660; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de4cdc41e3b9a730; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2660; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2660 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_f65ba01749ba9d34> v_data_2707 = pls::cs::unbox<pls::cs::Ref<cs_f65ba01749ba9d34>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de4cdc41e3b9a730; }())); std::int32_t cs_arg0 = v_i_2660; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}));
if (((!(([&]() { auto cs_receiver = v_data_2707; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b485e3aec4989e77; }()))) && pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_name; auto cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = v_data_2707; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ac47dab08454a832; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }());}); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }());}))) {
return;
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de4cdc41e3b9a730; }())); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/system/GameDataRecord.cs:M:kairo.unity.system.GameDataRecord.Add(System.String):2868",([&]() -> pls::cs::Ref<cs_f65ba01749ba9d34> { pls::cs::String cs_arg0 = v_name; pls::cs::Array<std::uint8_t> cs_arg1 = pls::cs::Array<std::uint8_t>{}; bool cs_arg2 = false; return cs_e166ffa7af3293c0(cs_arg0,cs_arg1,cs_arg2); }()))); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());});
}
}
}
}

// M:kairo.unity.system.GameDataRecord.Clone
pls::cs::Ref<cs_b6ad7779caeeb23c> cs_b00e39372198ba93(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this) { cs_init_b6ad7779caeeb23c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.Clone",kairo);
{
pls::cs::Ref<cs_b6ad7779caeeb23c> v_gameDataRecord_9327 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/system/GameDataRecord.cs:M:kairo.unity.system.GameDataRecord.Clone:9344",([&]() -> pls::cs::Ref<cs_b6ad7779caeeb23c> { std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_db21a4a60995105d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }());}); std::int32_t cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9ae60e1c180bff03; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }());}); bool cs_arg2 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c6b39a5b64ca017b; }()); return cs_2c9eb5964aff96b8(cs_arg0,cs_arg1,cs_arg2); }()));
([&]() { auto cs_target = v_gameDataRecord_9327; auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/system/GameDataRecord.cs:M:kairo.unity.system.GameDataRecord.Clone:9435",([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a401daa035e0faf4; }()); return pls::generated::cs_112e7bd8029af781(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_a401daa035e0faf4 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_gameDataRecord_9327; auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/system/GameDataRecord.cs:M:kairo.unity.system.GameDataRecord.Clone:9488",([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }())); pls::game::cs_require(cs_target)->cs_de4cdc41e3b9a730 = cs_value; return cs_value; }());
for (std::int32_t v_i_9514 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_9514; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de4cdc41e3b9a730; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_9514; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_9514 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_f65ba01749ba9d34> v_data_9561 = pls::cs::unbox<pls::cs::Ref<cs_f65ba01749ba9d34>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de4cdc41e3b9a730; }())); std::int32_t cs_arg0 = v_i_9514; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}));
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = v_gameDataRecord_9327; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de4cdc41e3b9a730; }())); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() -> pls::cs::Ref<cs_f65ba01749ba9d34> { auto cs_receiver = static_cast<pls::cs::Ref<cs_f65ba01749ba9d34>>(v_data_9561); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_23754ab97f073ec8(cs_receiver); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());});
}
return v_gameDataRecord_9327;
}
}
}
}

// M:kairo.unity.system.GameDataRecord.Copy(System.Boolean)
pls::cs::Ref<cs_b6ad7779caeeb23c> cs_3d477e91fe6d5e5e(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this,bool v_to_set) { cs_init_b6ad7779caeeb23c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.Copy(System.Boolean)",kairo);
{
pls::cs::Ref<cs_b6ad7779caeeb23c> v_gameDataRecord_7912 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/system/GameDataRecord.cs:M:kairo.unity.system.GameDataRecord.Copy(System.Boolean):7929",([&]() -> pls::cs::Ref<cs_b6ad7779caeeb23c> { std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_db21a4a60995105d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }());}); std::int32_t cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9ae60e1c180bff03; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }());}); bool cs_arg2 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c6b39a5b64ca017b; }()); return cs_2c9eb5964aff96b8(cs_arg0,cs_arg1,cs_arg2); }()));
([&]() { auto cs_target = v_gameDataRecord_7912; auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/system/GameDataRecord.cs:M:kairo.unity.system.GameDataRecord.Copy(System.Boolean):8022",([&]() -> pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> { pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_db21a4a60995105d; }()); return pls::generated::cs_112e7bd8029af781(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_db21a4a60995105d = cs_value; return cs_value; }());
for (std::int32_t v_i_8060 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_8060; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de4cdc41e3b9a730; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_8060; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_8060 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_f65ba01749ba9d34> v_data_8107 = pls::cs::unbox<pls::cs::Ref<cs_f65ba01749ba9d34>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de4cdc41e3b9a730; }())); std::int32_t cs_arg0 = v_i_8060; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}));
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_data_8107; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b485e3aec4989e77; }()); auto cs_right = v_to_set; return (cs_left == cs_right); }()) && (((!(v_to_set)) || ([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_bb652fbb61000386>>(([&]() { auto cs_receiver = v_data_8107; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ac47dab08454a832; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2eull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_9f636226b66780dc(cs_receiver,cs_arg0); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()))))) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = v_gameDataRecord_7912; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de4cdc41e3b9a730; }())); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() -> pls::cs::Ref<cs_f65ba01749ba9d34> { auto cs_receiver = static_cast<pls::cs::Ref<cs_f65ba01749ba9d34>>(v_data_8107); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_23754ab97f073ec8(cs_receiver); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());});
}
}
return v_gameDataRecord_7912;
}
}
}
}

// M:kairo.unity.system.GameDataRecord.GetData(System.String)
pls::cs::Array<std::uint8_t> cs_ba240a218e1d699e(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this,pls::cs::String v_name) { cs_init_b6ad7779caeeb23c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.GetData(System.String)",kairo);
{
for (std::int32_t v_i_6655 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_6655; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de4cdc41e3b9a730; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_6655; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_6655 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_f65ba01749ba9d34> v_data_6702 = pls::cs::unbox<pls::cs::Ref<cs_f65ba01749ba9d34>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de4cdc41e3b9a730; }())); std::int32_t cs_arg0 = v_i_6655; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}));
if ((((!(([&]() { auto cs_receiver = v_data_6702; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b485e3aec4989e77; }()))) && pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_name; auto cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = v_data_6702; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ac47dab08454a832; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }());}); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }());})) && ([&]() { auto cs_receiver = v_data_6702; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_abeb2739082898db; }()))) {
return ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<cs_91b71e223c6a5085> cs_arg0 = ([&]() { auto cs_receiver = v_data_6702; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e3cc350442bf2617; }()); return cs_fe020e7913ef1e99(cs_arg0); }());
}
}
for (std::int32_t v_j_6907 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_6907; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de4cdc41e3b9a730; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_6907; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_6907 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_f65ba01749ba9d34> v_data2_6954 = pls::cs::unbox<pls::cs::Ref<cs_f65ba01749ba9d34>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de4cdc41e3b9a730; }())); std::int32_t cs_arg0 = v_j_6907; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}));
if ((([&]() { auto cs_receiver = v_data2_6954; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b485e3aec4989e77; }()) && pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_name; auto cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = v_data2_6954; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ac47dab08454a832; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }());}); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }());}))) {
return ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<cs_91b71e223c6a5085> cs_arg0 = ([&]() { auto cs_receiver = v_data2_6954; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e3cc350442bf2617; }()); return cs_fe020e7913ef1e99(cs_arg0); }());
}
}
return pls::cs::Array<std::uint8_t>{};
}
}
}
}

// M:kairo.unity.system.GameDataRecord.GetFriendId
std::int32_t cs_4c82a6900ba11d6b(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this) { cs_init_b6ad7779caeeb23c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.GetFriendId",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_db21a4a60995105d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }());});
}
}
}
}

// M:kairo.unity.system.GameDataRecord.GetHashCode
std::int32_t cs_02a7dd0b0ae9540d(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this) { cs_init_b6ad7779caeeb23c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.GetHashCode",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(pls::cs::static_pointer_cast<pls::cs::Object>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}
}
}
}

// M:kairo.unity.system.GameDataRecord.GetNumber
std::int32_t cs_ef9be39d8956d084(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this) { cs_init_b6ad7779caeeb23c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.GetNumber",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9ae60e1c180bff03; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }());});
}
}
}
}

// M:kairo.unity.system.GameDataRecord.GetString(System.String)
pls::cs::String cs_25f8eaa78d9b4e98(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this,pls::cs::String v_name) { cs_init_b6ad7779caeeb23c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.GetString(System.String)",kairo);
{
pls::cs::Array<std::uint8_t> v_data_6486 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_b6ad7779caeeb23c>>(cs_this); pls::cs::String cs_arg0 = v_name; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ba240a218e1d699e(cs_receiver,cs_arg0); }());
if (([&]() { auto cs_left = pls::cs::box(v_data_6486); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }())) {
return pls::cs::String{};
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = pls::cs::RuntimeEncoding::get_UTF8(); auto cs_arg0 = v_data_6486; return pls::game::cs_require(cs_receiver)->GetString(cs_arg0); }());});
}
}
}
}

// M:kairo.unity.system.GameDataRecord.GetValue(System.String)
std::int64_t cs_db199ac474798a83(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this,pls::cs::String v_name) { cs_init_b6ad7779caeeb23c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.GetValue(System.String)",kairo);
{
pls::cs::Array<std::uint8_t> v_data_6291 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_b6ad7779caeeb23c>>(cs_this); pls::cs::String cs_arg0 = v_name; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ba240a218e1d699e(cs_receiver,cs_arg0); }());
if (([&]() { auto cs_left = pls::cs::box(v_data_6291); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }())) {
return pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x8000000000000000ull));
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = pls::cs::RuntimeEncoding::get_UTF8(); auto cs_arg0 = v_data_6291; return pls::game::cs_require(cs_receiver)->GetString(cs_arg0); }());}); return pls::generated::cs_fbdffc982daddb52(cs_arg0); }());});
}
}
}
}

// M:kairo.unity.system.GameDataRecord.Pack(java.io.OutputStream)
void cs_962a524c84eef9ee(pls::cs::Ref<cs_b6ad7779caeeb23c> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_b6ad7779caeeb23c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.Pack(java.io.OutputStream)",kairo);
{
pls::cs::Ref<cs_b489b0d33bb37bb8> v_instance_7206 = ([&]() -> pls::cs::Ref<cs_b489b0d33bb37bb8> { return cs_3eff1227bb0de063(); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a401daa035e0faf4; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }());}); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_db21a4a60995105d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }());}); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9ae60e1c180bff03; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_59fd81cb225539c6(cs_receiver); }());}); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de4cdc41e3b9a730; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
for (std::int32_t v_i_7430 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_7430; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de4cdc41e3b9a730; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_7430; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_7430 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_f65ba01749ba9d34> v_data_7477 = pls::cs::unbox<pls::cs::Ref<cs_f65ba01749ba9d34>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de4cdc41e3b9a730; }())); std::int32_t cs_arg0 = v_i_7430; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}));
pls::cs::String v_text_7524 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = v_data_7477; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ac47dab08454a832; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }());});
pls::cs::Array<std::uint8_t> v_array_7577 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_instance_7206); pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0074" u"\x005f" u"\x0067" u"\x0061" u"\x006d" u"\x0065" u"\x0064" u"\x0061" u"\x0074" u"\x0061" u"",10);return cs_literal;}()); pls::cs::String cs_arg1 = v_text_7524; pls::cs::Array<std::uint8_t> cs_arg2 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<cs_91b71e223c6a5085> cs_arg0 = ([&]() { auto cs_receiver = v_data_7477; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e3cc350442bf2617; }()); return cs_fe020e7913ef1e99(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_04eca12bba16344c(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::String cs_arg1 = v_text_7524; pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ((([&]() { auto cs_left = pls::cs::box(v_array_7577); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }())) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)) : (v_array_7577).length()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
if (([&]() { auto cs_left = pls::cs::box(v_array_7577); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left != cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::Array<std::uint8_t> cs_arg1 = v_array_7577; pls::generated::cs_242552fbbe53e929(cs_arg0,cs_arg1); }());});
}
}
}
}
}
}
}
