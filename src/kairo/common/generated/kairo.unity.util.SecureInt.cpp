// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "kairo.unity.util.SecureInt.hpp"
#include "kairo.unity.util.SecureNumber.hpp"
namespace pls::generated {
namespace kairo::unity::util {

void SecureInt::trace_edges(const pls::cs::EdgeVisitor&visitor)const {SecureNumber::trace_edges(visitor);}

bool SecureInt::Equals(pls::cs::Ref<pls::cs::Object> const& obj) {return SecureInt::Equals(pls::cs::static_pointer_cast<SecureInt>(shared_from_this()),obj);}

static PLS_NOINLINE void cs_init_7fd3b635ed6929d0_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("kairo.unity.util.SecureInt",flag,[](){

});}

void SecureInt::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_7fd3b635ed6929d0_slow(flag);}

void SecureInt::create_init(pls::cs::Ref<SecureInt> self) {
SecureInt::ensure_initialized();
SecureNumber::create_init(pls::cs::static_pointer_cast<SecureNumber>(self));
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureInt.#ctor",kairo);
{

}

}

void SecureInt::create_2_init(pls::cs::Ref<SecureInt> self,pls::cs::Ref<SecureInt> src) {
SecureInt::ensure_initialized();
SecureNumber::create_init(pls::cs::static_pointer_cast<SecureNumber>(self));
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureInt.#ctor(kairo.unity.util.SecureInt)",kairo);
{
self->SetLong(require(src)->GetLong());
}

}

void SecureInt::create_init(pls::cs::Ref<SecureInt> self,pls::cs::Int32 value) {
SecureInt::ensure_initialized();
SecureNumber::create_init(pls::cs::static_pointer_cast<SecureNumber>(self), pls::cs::cast_integral<pls::cs::Int64>(value));
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureInt.#ctor(System.Int32)",kairo);
{

}

}

pls::cs::Int32 SecureInt::GetHashCode(pls::cs::Ref<SecureInt> self) { return require(self)->SecureInt::GetHashCode(); }

// M:kairo.unity.util.SecureInt.op_Implicit(kairo.unity.util.SecureInt)~System.Int32
pls::cs::Int32 SecureInt::op_Implicit(pls::cs::Ref<SecureInt> s) {
SecureInt::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureInt.op_Implicit(kairo.unity.util.SecureInt)~System.Int32",kairo);
{
return require(s)->Get();
}

}

// M:kairo.unity.util.SecureInt.op_Implicit(System.Int32)~kairo.unity.util.SecureInt
pls::cs::Ref<SecureInt> SecureInt::op_ImplicitInt(pls::cs::Int32 s) {
SecureInt::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureInt.op_Implicit(System.Int32)~kairo.unity.util.SecureInt",kairo);
{
return SecureInt::create(s);
}

}

// M:kairo.unity.util.SecureInt.#ctor
pls::cs::Ref<SecureInt> SecureInt::create() {
SecureInt::ensure_initialized();
 auto self = pls::cs::make_ref<SecureInt>(); SecureInt::create_init(self); return self; 
}

// M:kairo.unity.util.SecureInt.#ctor(System.Int32)
pls::cs::Ref<SecureInt> SecureInt::create(pls::cs::Int32 value) {
SecureInt::ensure_initialized();
 auto self = pls::cs::make_ref<SecureInt>(); SecureInt::create_init(self,value); return self; 
}

// M:kairo.unity.util.SecureInt.#ctor(kairo.unity.util.SecureInt)
pls::cs::Ref<SecureInt> SecureInt::create_2(pls::cs::Ref<SecureInt> src) {
SecureInt::ensure_initialized();
 auto self = pls::cs::make_ref<SecureInt>(); SecureInt::create_2_init(self,src); return self; 
}

// M:kairo.unity.util.SecureInt.Set(System.Int32)
pls::cs::Ref<SecureInt> SecureInt::Set(pls::cs::Int32 value) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureInt.Set(System.Int32)",kairo);
{
SetLong(pls::cs::cast_integral<pls::cs::Int64>(value));
return this;
}
}

// M:kairo.unity.util.SecureInt.Get
pls::cs::Int32 SecureInt::Get() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureInt.Get",kairo);
{
return pls::cs::to_int32(GetLong());
}
}

// M:kairo.unity.util.SecureInt.Array(System.Int32)
pls::cs::Array<pls::cs::Ref<SecureInt>> SecureInt::Array(pls::cs::Int32 n) {
SecureInt::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureInt.Array(System.Int32)",kairo);
{
pls::cs::Array<pls::cs::Ref<SecureInt>> array = pls::cs::Array<pls::cs::Ref<SecureInt>>::make(n);
for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
array.set_Item(i, SecureInt::create());
}
return array;
}

}

// M:kairo.unity.util.SecureInt.Equals(System.Object)
bool SecureInt::Equals(pls::cs::Ref<SecureInt> self,pls::cs::Ref<pls::cs::Object> obj) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureInt.Equals(System.Object)",kairo);
{
if (is_instance<pls::cs::Ref<SecureInt>>(pls::cs::box(obj))) {
{auto cs_left_14 = self->Get(); auto cs_right_14 = require((pls::cs::unbox<pls::cs::Ref<SecureInt>>(obj)))->Get();
return cs_left_14 == cs_right_14;}
}
return pls::cs::box(self) == pls::cs::box(obj);
}

}

// M:kairo.unity.util.SecureInt.GetHashCode
std::int32_t SecureInt::GetHashCode() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureInt.GetHashCode",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return value_hash(value_);});
}
}
} // namespace kairo::unity::util
}
