// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_91b71e223c6a5085.hpp"
#include "generated/portable_generated_type_a0cf9aef6a251bfd.hpp"
#include "generated/portable_generated_type_bd164c3c94a49e2a.hpp"
namespace pls::game {

void cs_91b71e223c6a5085::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::generated::cs_bd164c3c94a49e2a::trace_edges(visitor);pls::cs::trace_value(cs_b80b91ae07d6fc6c,visitor);pls::cs::trace_value(cs_19f4d4bf8904a68d,visitor);pls::cs::trace_value(cs_c5d0d0adcc5f397f,visitor);pls::cs::trace_value(cs_e3c1a6fbdae10a0b,visitor);}

void cs_91b71e223c6a5085::release_edges(){pls::generated::cs_bd164c3c94a49e2a::release_edges();pls::cs::release_value(cs_b80b91ae07d6fc6c);pls::cs::release_value(cs_19f4d4bf8904a68d);pls::cs::release_value(cs_c5d0d0adcc5f397f);pls::cs::release_value(cs_e3c1a6fbdae10a0b);}

void cs_init_91b71e223c6a5085(){static pls::cs::TypeInitState state;state.run("kairo.unity.util.SecureByteArray",[](){

});}

// M:kairo.unity.util.SecureByteArray.#ctor(System.Byte[])
pls::cs::Ref<cs_91b71e223c6a5085> cs_541b6d91fef6dae9(pls::cs::Array<std::uint8_t> v_ary) { cs_init_91b71e223c6a5085();
{ auto cs_this = pls::cs::make_ref<cs_91b71e223c6a5085>(); cs_541b6d91fef6dae9_init(cs_this,v_ary); return cs_this; }
}

void cs_541b6d91fef6dae9_init(pls::cs::Ref<cs_91b71e223c6a5085> cs_this,pls::cs::Array<std::uint8_t> v_ary) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureByteArray.#ctor(System.Byte[])",kairo);
{
([&]() -> pls::cs::Ref<cs_91b71e223c6a5085> { auto cs_receiver = static_cast<pls::cs::Ref<cs_91b71e223c6a5085>>(cs_this); pls::cs::Array<std::uint8_t> cs_arg0 = v_ary; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c9412b840f7da0bf(cs_receiver,cs_arg0); }());
}
}
}

// M:kairo.unity.util.SecureByteArray.Generate(System.Byte)
std::uint8_t cs_645fbfa34482238c(pls::cs::Ref<cs_91b71e223c6a5085> cs_this,std::uint8_t v_value) { cs_init_91b71e223c6a5085();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureByteArray.Generate(System.Byte)",kairo);
{
return pls::cs::cast_integral<std::uint8_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(~((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_value); auto cs_right = pls::cs::cast_integral<std::int64_t>(~(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7e5e9d5195f577e0; }()))); return (cs_left | cs_right); }())))); auto cs_right = (([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_value); auto cs_right = pls::cs::cast_integral<std::int64_t>(~(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7e5e9d5195f577e0; }()))); return (cs_left & cs_right); }())); return (cs_left | cs_right); }())));
}
}
}
}

// M:kairo.unity.util.SecureByteArray.Generate(System.Byte[],System.Byte[])
void cs_1a4b5882de95a07e(pls::cs::Ref<cs_91b71e223c6a5085> cs_this,pls::cs::Array<std::uint8_t> v_from,pls::cs::Array<std::uint8_t> v_to) { cs_init_91b71e223c6a5085();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureByteArray.Generate(System.Byte[],System.Byte[])",kairo);
{
for (std::int32_t v_i_1510 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1510; auto cs_right = (v_from).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1510; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1510 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_to; auto cs_index = v_i_1510; auto cs_value = ([&]() -> std::uint8_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_91b71e223c6a5085>>(cs_this); std::uint8_t cs_arg0 = ([&]() { auto cs_array = v_from; auto cs_index = v_i_1510; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_645fbfa34482238c(cs_receiver,cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}
}

// M:kairo.unity.util.SecureByteArray.Set(System.Byte[])
pls::cs::Ref<cs_91b71e223c6a5085> cs_c9412b840f7da0bf(pls::cs::Ref<cs_91b71e223c6a5085> cs_this,pls::cs::Array<std::uint8_t> v_ary) { cs_init_91b71e223c6a5085();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureByteArray.Set(System.Byte[])",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(pls::generated::cs_1e58df81cbed8f35()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/SecureByteArray.cs:M:kairo.unity.util.SecureByteArray.Set(System.Byte[]):789",([&]() -> pls::cs::Ref<pls::generated::cs_a0cf9aef6a251bfd> { return pls::generated::cs_783c2dc4bd688739(); }())); pls::generated::cs_1e58df81cbed8f35() = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int64_t>(([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x22ull)); auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a0cf9aef6a251bfd>>(pls::generated::cs_1e58df81cbed8f35()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_1811bb4f9e389c4b(cs_receiver); }());}); return (cs_left | cs_right); }())); pls::game::cs_require(cs_target)->cs_7e5e9d5195f577e0 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_ary; pls::game::cs_require(cs_target)->cs_b80b91ae07d6fc6c = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/SecureByteArray.cs:M:kairo.unity.util.SecureByteArray.Set(System.Byte[]):894",pls::cs::Array<std::uint8_t>::make((v_ary).length())); pls::game::cs_require(cs_target)->cs_19f4d4bf8904a68d = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_91b71e223c6a5085>>(cs_this); pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b80b91ae07d6fc6c; }()); pls::cs::Array<std::uint8_t> cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_19f4d4bf8904a68d; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1a4b5882de95a07e(cs_receiver,cs_arg0,cs_arg1); }());
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_19f4d4bf8904a68d; }())).length(); pls::game::cs_require(cs_target)->cs_e3c1a6fbdae10a0b = cs_value; return cs_value; }());
return cs_this;
}
}
}
}

// M:kairo.unity.util.SecureByteArray.ValueOf(System.Byte[])
pls::cs::Ref<cs_91b71e223c6a5085> cs_afd97ff1c93f8bf4(pls::cs::Array<std::uint8_t> v_ary) { cs_init_91b71e223c6a5085();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureByteArray.ValueOf(System.Byte[])",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(v_ary); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }())) {
return pls::cs::Ref<cs_91b71e223c6a5085>{};
}
return pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/SecureByteArray.cs:M:kairo.unity.util.SecureByteArray.ValueOf(System.Byte[]):2076",([&]() -> pls::cs::Ref<cs_91b71e223c6a5085> { pls::cs::Array<std::uint8_t> cs_arg0 = v_ary; return cs_541b6d91fef6dae9(cs_arg0); }()));
}
}
}
}
