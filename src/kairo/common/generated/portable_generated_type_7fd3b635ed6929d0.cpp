// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_7fd3b635ed6929d0.hpp"
#include "portable_generated_type_bd164c3c94a49e2a.hpp"
namespace pls::generated {

void cs_7fd3b635ed6929d0::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_bd164c3c94a49e2a::trace_edges(visitor);}

void cs_7fd3b635ed6929d0::release_edges(){cs_bd164c3c94a49e2a::release_edges();}

std::int32_t cs_7fd3b635ed6929d0::GetHashCode() {return cs_f1365e1209ff8d97(pls::cs::static_pointer_cast<cs_7fd3b635ed6929d0>(shared_from_this()));}

bool cs_7fd3b635ed6929d0::Equals(pls::cs::Ref<pls::cs::Object> const& v_obj) {return cs_286beec6ddeed9d7(pls::cs::static_pointer_cast<cs_7fd3b635ed6929d0>(shared_from_this()),v_obj);}

void cs_init_7fd3b635ed6929d0(){static pls::cs::TypeInitState state;state.run("kairo.unity.util.SecureInt",[](){

});}

// M:kairo.unity.util.SecureInt.#ctor
pls::cs::Ref<cs_7fd3b635ed6929d0> cs_26fc017eba499603() { cs_init_7fd3b635ed6929d0();
{ auto cs_this = pls::cs::make_ref<cs_7fd3b635ed6929d0>(); cs_26fc017eba499603_init(cs_this); return cs_this; }
}

void cs_26fc017eba499603_init(pls::cs::Ref<cs_7fd3b635ed6929d0> cs_this) {
([&]() { cs_a55d2b3f0d930c1e_init(pls::cs::static_pointer_cast<cs_bd164c3c94a49e2a>(cs_this)); }());
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureInt.#ctor",kairo);
{

}
}
}

// M:kairo.unity.util.SecureInt.#ctor(kairo.unity.util.SecureInt)
pls::cs::Ref<cs_7fd3b635ed6929d0> cs_112e7bd8029af781(pls::cs::Ref<cs_7fd3b635ed6929d0> v_src) { cs_init_7fd3b635ed6929d0();
{ auto cs_this = pls::cs::make_ref<cs_7fd3b635ed6929d0>(); cs_112e7bd8029af781_init(cs_this,v_src); return cs_this; }
}

void cs_112e7bd8029af781_init(pls::cs::Ref<cs_7fd3b635ed6929d0> cs_this,pls::cs::Ref<cs_7fd3b635ed6929d0> v_src) {
([&]() { cs_a55d2b3f0d930c1e_init(pls::cs::static_pointer_cast<cs_bd164c3c94a49e2a>(cs_this)); }());
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureInt.#ctor(kairo.unity.util.SecureInt)",kairo);
{
([&]() -> pls::cs::Ref<cs_bd164c3c94a49e2a> { auto cs_receiver = static_cast<pls::cs::Ref<cs_bd164c3c94a49e2a>>(cs_this); std::int64_t cs_arg0 = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_bd164c3c94a49e2a>>(v_src); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_229565c5769360dd(cs_receiver); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_322ad21e82d893d1(cs_receiver,cs_arg0); }());
}
}
}

// M:kairo.unity.util.SecureInt.#ctor(System.Int32)
pls::cs::Ref<cs_7fd3b635ed6929d0> cs_891849d99054b970(std::int32_t v_value) { cs_init_7fd3b635ed6929d0();
{ auto cs_this = pls::cs::make_ref<cs_7fd3b635ed6929d0>(); cs_891849d99054b970_init(cs_this,v_value); return cs_this; }
}

void cs_891849d99054b970_init(pls::cs::Ref<cs_7fd3b635ed6929d0> cs_this,std::int32_t v_value) {
([&]() { std::int64_t cs_arg0 = pls::cs::cast_integral<std::int64_t>(v_value); cs_6a8c2e7be2327b6f_init(pls::cs::static_pointer_cast<cs_bd164c3c94a49e2a>(cs_this),cs_arg0); }());
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureInt.#ctor(System.Int32)",kairo);
{

}
}
}

// M:kairo.unity.util.SecureInt.Array(System.Int32)
pls::cs::Array<pls::cs::Ref<cs_7fd3b635ed6929d0>> cs_5d4aff714c1aa3f1(std::int32_t v_n) { cs_init_7fd3b635ed6929d0();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureInt.Array(System.Int32)",kairo);
{
pls::cs::Array<pls::cs::Ref<cs_7fd3b635ed6929d0>> v_array_1301 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/SecureInt.cs:M:kairo.unity.util.SecureInt.Array(System.Int32):1309",pls::cs::Array<pls::cs::Ref<cs_7fd3b635ed6929d0>>::make(v_n));
for (std::int32_t v_i_1339 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1339; auto cs_right = (v_array_1301).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1339; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1339 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array_1301; auto cs_index = v_i_1339; auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/SecureInt.cs:M:kairo.unity.util.SecureInt.Array(System.Int32):1389",([&]() -> pls::cs::Ref<cs_7fd3b635ed6929d0> { return cs_26fc017eba499603(); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
return v_array_1301;
}
}
}

// M:kairo.unity.util.SecureInt.Equals(System.Object)
bool cs_286beec6ddeed9d7(pls::cs::Ref<cs_7fd3b635ed6929d0> cs_this,pls::cs::Ref<pls::cs::Object> v_obj) { cs_init_7fd3b635ed6929d0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureInt.Equals(System.Object)",kairo);
{
if (pls::generated::cs_is<pls::cs::Ref<cs_7fd3b635ed6929d0>>(pls::cs::box(v_obj))) {
return ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_7fd3b635ed6929d0>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_59fd81cb225539c6(cs_receiver); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_7fd3b635ed6929d0>>((pls::cs::unbox<pls::cs::Ref<cs_7fd3b635ed6929d0>>(v_obj))); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_59fd81cb225539c6(cs_receiver); }()); return (cs_left == cs_right); }());
}
return ([&]() { auto cs_left = pls::cs::box(cs_this); auto cs_right = pls::cs::box(v_obj); return cs_left == cs_right; }());
}
}
}
}

// M:kairo.unity.util.SecureInt.Get
std::int32_t cs_59fd81cb225539c6(pls::cs::Ref<cs_7fd3b635ed6929d0> cs_this) { cs_init_7fd3b635ed6929d0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureInt.Get",kairo);
{
return pls::cs::cast_integral<std::int32_t>(([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_bd164c3c94a49e2a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_229565c5769360dd(cs_receiver); }()));
}
}
}
}

// M:kairo.unity.util.SecureInt.GetHashCode
std::int32_t cs_f1365e1209ff8d97(pls::cs::Ref<cs_7fd3b635ed6929d0> cs_this) { cs_init_7fd3b635ed6929d0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureInt.GetHashCode",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_79a097054602f289; }()); return pls::generated::cs_value_hash(cs_arg0); }());});
}
}
}
}

// M:kairo.unity.util.SecureInt.op_Implicit(kairo.unity.util.SecureInt)~System.Int32
std::int32_t cs_d940a557e2a81257(pls::cs::Ref<cs_7fd3b635ed6929d0> v_s) { cs_init_7fd3b635ed6929d0();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureInt.op_Implicit(kairo.unity.util.SecureInt)~System.Int32",kairo);
{
return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_7fd3b635ed6929d0>>(v_s); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_59fd81cb225539c6(cs_receiver); }());
}
}
}

// M:kairo.unity.util.SecureInt.op_Implicit(System.Int32)~kairo.unity.util.SecureInt
pls::cs::Ref<cs_7fd3b635ed6929d0> cs_9aee68341f2c87b1(std::int32_t v_s) { cs_init_7fd3b635ed6929d0();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureInt.op_Implicit(System.Int32)~kairo.unity.util.SecureInt",kairo);
{
return pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/SecureInt.cs:M:kairo.unity.util.SecureInt.op_Implicit(System.Int32)~kairo.unity.util.SecureInt:233",([&]() -> pls::cs::Ref<cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = v_s; return cs_891849d99054b970(cs_arg0); }()));
}
}
}

// M:kairo.unity.util.SecureInt.Set(System.Int32)
pls::cs::Ref<cs_7fd3b635ed6929d0> cs_f863ec11d99c7a7d(pls::cs::Ref<cs_7fd3b635ed6929d0> cs_this,std::int32_t v_value) { cs_init_7fd3b635ed6929d0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureInt.Set(System.Int32)",kairo);
{
([&]() -> pls::cs::Ref<cs_bd164c3c94a49e2a> { auto cs_receiver = static_cast<pls::cs::Ref<cs_bd164c3c94a49e2a>>(cs_this); std::int64_t cs_arg0 = pls::cs::cast_integral<std::int64_t>(v_value); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_322ad21e82d893d1(cs_receiver,cs_arg0); }());
return cs_this;
}
}
}
}
}
