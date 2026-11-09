// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_924db3d974bae2af.hpp"
#include "portable_generated_type_bd164c3c94a49e2a.hpp"
namespace pls::generated {

void cs_924db3d974bae2af::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_bd164c3c94a49e2a::trace_edges(visitor);}

void cs_924db3d974bae2af::release_edges(){cs_bd164c3c94a49e2a::release_edges();}

std::int32_t cs_924db3d974bae2af::GetHashCode() {return cs_f8a6bf38dd75ef58(std::static_pointer_cast<cs_924db3d974bae2af>(shared_from_this()));}

bool cs_924db3d974bae2af::Equals(pls::cs::Ref<pls::cs::Object> const& v_obj) {return cs_682c2d787a0c6c7f(std::static_pointer_cast<cs_924db3d974bae2af>(shared_from_this()),v_obj);}

void cs_init_924db3d974bae2af(){static pls::cs::TypeInitState state;state.run("kairo.unity.util.SecureLong",[](){

});}

// M:kairo.unity.util.SecureLong.#ctor
pls::cs::Ref<cs_924db3d974bae2af> cs_74758feb8d7ec688() { cs_init_924db3d974bae2af();
{ auto cs_this = pls::cs::make_ref<cs_924db3d974bae2af>(); cs_74758feb8d7ec688_init(cs_this); return cs_this; }
}

void cs_74758feb8d7ec688_init(pls::cs::Ref<cs_924db3d974bae2af> cs_this) {
([&]() { cs_a55d2b3f0d930c1e_init(std::static_pointer_cast<cs_bd164c3c94a49e2a>(cs_this)); }());
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureLong.#ctor",kairo);
{

}
}
}

// M:kairo.unity.util.SecureLong.#ctor(System.Int64)
pls::cs::Ref<cs_924db3d974bae2af> cs_8b6e6e5ae1d900bd(std::int64_t v_value) { cs_init_924db3d974bae2af();
{ auto cs_this = pls::cs::make_ref<cs_924db3d974bae2af>(); cs_8b6e6e5ae1d900bd_init(cs_this,v_value); return cs_this; }
}

void cs_8b6e6e5ae1d900bd_init(pls::cs::Ref<cs_924db3d974bae2af> cs_this,std::int64_t v_value) {
([&]() { std::int64_t cs_arg0 = v_value; cs_6a8c2e7be2327b6f_init(std::static_pointer_cast<cs_bd164c3c94a49e2a>(cs_this),cs_arg0); }());
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureLong.#ctor(System.Int64)",kairo);
{

}
}
}

// M:kairo.unity.util.SecureLong.Array(System.Int32)
pls::cs::Array<pls::cs::Ref<cs_924db3d974bae2af>> cs_6f0c7cad5125d866(std::int32_t v_n) { cs_init_924db3d974bae2af();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureLong.Array(System.Int32)",kairo);
{
pls::cs::Array<pls::cs::Ref<cs_924db3d974bae2af>> v_array_1536 = pls::cs::Array<pls::cs::Ref<cs_924db3d974bae2af>>::make(v_n);
for (std::int32_t v_i_1575 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1575; auto cs_right = (v_array_1536).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1575; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1575 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array_1536; auto cs_index = v_i_1575; auto cs_value = ([&]() -> pls::cs::Ref<cs_924db3d974bae2af> { return cs_74758feb8d7ec688(); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
return v_array_1536;
}
}
}

// M:kairo.unity.util.SecureLong.Equals(System.Object)
bool cs_682c2d787a0c6c7f(pls::cs::Ref<cs_924db3d974bae2af> cs_this,pls::cs::Ref<pls::cs::Object> v_obj) { cs_init_924db3d974bae2af();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureLong.Equals(System.Object)",kairo);
{
if (pls::generated::cs_is<pls::cs::Ref<cs_924db3d974bae2af>>(pls::cs::box(v_obj))) {
return ([&]() -> bool { auto cs_left = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_924db3d974bae2af>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b3c751b9e91311fd(cs_receiver); }()); auto cs_right = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_924db3d974bae2af>>((pls::cs::unbox<pls::cs::Ref<cs_924db3d974bae2af>>(v_obj))); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b3c751b9e91311fd(cs_receiver); }()); return (cs_left == cs_right); }());
}
return ([&]() { auto cs_left = pls::cs::box(cs_this); auto cs_right = pls::cs::box(v_obj); return cs_left == cs_right; }());
}
}
}
}

// M:kairo.unity.util.SecureLong.Get
std::int64_t cs_b3c751b9e91311fd(pls::cs::Ref<cs_924db3d974bae2af> cs_this) { cs_init_924db3d974bae2af();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureLong.Get",kairo);
{
return ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_bd164c3c94a49e2a>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_229565c5769360dd(cs_receiver); }());
}
}
}
}

// M:kairo.unity.util.SecureLong.GetHashCode
std::int32_t cs_f8a6bf38dd75ef58(pls::cs::Ref<cs_924db3d974bae2af> cs_this) { cs_init_924db3d974bae2af();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureLong.GetHashCode",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_79a097054602f289; }()); return pls::generated::cs_value_hash(cs_arg0); }());});
}
}
}
}

// M:kairo.unity.util.SecureLong.op_Implicit(kairo.unity.util.SecureLong)~System.Int64
std::int64_t cs_b0c8f3d2fe942bf1(pls::cs::Ref<cs_924db3d974bae2af> v_s) { cs_init_924db3d974bae2af();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureLong.op_Implicit(kairo.unity.util.SecureLong)~System.Int64",kairo);
{
return ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_924db3d974bae2af>>(v_s); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b3c751b9e91311fd(cs_receiver); }());
}
}
}

// M:kairo.unity.util.SecureLong.op_Implicit(System.Int64)~kairo.unity.util.SecureLong
pls::cs::Ref<cs_924db3d974bae2af> cs_867c5dd84cdc90b1(std::int64_t v_s) { cs_init_924db3d974bae2af();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureLong.op_Implicit(System.Int64)~kairo.unity.util.SecureLong",kairo);
{
return ([&]() -> pls::cs::Ref<cs_924db3d974bae2af> { std::int64_t cs_arg0 = v_s; return cs_8b6e6e5ae1d900bd(cs_arg0); }());
}
}
}

// M:kairo.unity.util.SecureLong.Set(System.Int64)
pls::cs::Ref<cs_924db3d974bae2af> cs_1658bba34982ce50(pls::cs::Ref<cs_924db3d974bae2af> cs_this,std::int64_t v_value) { cs_init_924db3d974bae2af();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureLong.Set(System.Int64)",kairo);
{
([&]() -> pls::cs::Ref<cs_bd164c3c94a49e2a> { auto cs_receiver = static_cast<pls::cs::Ref<cs_bd164c3c94a49e2a>>(cs_this); std::int64_t cs_arg0 = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_322ad21e82d893d1(cs_receiver,cs_arg0); }());
return cs_this;
}
}
}
}
}
