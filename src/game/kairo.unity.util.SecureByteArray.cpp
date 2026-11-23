// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/java.lang.JSystem.hpp"
#include "generated/java.util.JRandom.hpp"
#include "generated/kairo.unity.util.SecureNumber.hpp"
#include "kairo.unity.util.SecureByteArray.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using ByteArray = pls::cs::Array<std::uint8_t>;

namespace pls::game {
namespace kairo::unity::util {

void SecureByteArray::trace_edges(const pls::cs::EdgeVisitor&visitor)const {kl_unity_util::SecureNumber::trace_edges(visitor);pls::cs::trace_value(original_,visitor);pls::cs::trace_value(value_,visitor);pls::cs::trace_value(buffer_,visitor);}

static PLS_NOINLINE void cs_init_91b71e223c6a5085_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("kairo.unity.util.SecureByteArray",flag,[](){

});}

void SecureByteArray::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_91b71e223c6a5085_slow(flag);}

void SecureByteArray::create_init(pls::cs::Ref<SecureByteArray> self,ByteArray ary) {
SecureByteArray::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureByteArray.#ctor(System.Byte[])",kairo);
{
self->Set(ary);
}

}

// M:kairo.unity.util.SecureByteArray.#ctor(System.Byte[])
pls::cs::Ref<SecureByteArray> SecureByteArray::create(ByteArray ary) {
SecureByteArray::ensure_initialized();
 auto self = pls::cs::make_ref<SecureByteArray>(); SecureByteArray::create_init(self,ary); return self; 
}

// M:kairo.unity.util.SecureByteArray.Set(System.Byte[])
pls::cs::Ref<SecureByteArray> SecureByteArray::Set(ByteArray ary) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureByteArray.Set(System.Byte[])",kairo);
{
kl_unity_util::SecureNumber::ensure_initialized();

if (is_null(kl_unity_util::SecureNumber::random_())) {
{ auto cs_value = kl_java_util::JRandom::create(); kl_unity_util::SecureNumber::random_() = cs_value; }
}
bitmask_ = pls::cs::cast_integral<pls::cs::Int64>(pls::cs::Int32(0x22) | pls::diagnostic::api_call([&]() -> decltype(auto) {return require(kl_unity_util::SecureNumber::random_())->NextInt();}));
original_ = ary;
value_ = ByteArray::make(ary.length());
Generate(original_, value_);
length = value_.length();
return this;

}
}

// M:kairo.unity.util.SecureByteArray.Get
ByteArray SecureByteArray::Get() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureByteArray.Get",kairo);
{
kl_unity_util::SecureNumber::ensure_initialized();

if (([&]() { auto cs_left = pls::cs::box(buffer_); auto cs_right = pls::cs::box(ByteArray{}); return cs_left == cs_right; }()) || (buffer_.length() != value_.length())) {
buffer_ = ByteArray::make(value_.length());
}
Generate(value_, buffer_);
for (pls::cs::Int32 i = 0; i < buffer_.length(); ++i) {
if ([&]() -> bool { auto cs_left = pls::cs::cast_integral<pls::cs::Int32>(buffer_[i]); auto cs_right = pls::cs::cast_integral<pls::cs::Int32>(original_[i]); return cs_left != cs_right; }()) {
kl_unity_util::SecureNumber::hacking_()++;
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::Arraycopy(pls::cs::box(buffer_), 0, pls::cs::box(original_), 0, buffer_.length());});
break;
}
}
return buffer_;

}
}

// M:kairo.unity.util.SecureByteArray.ToArray
ByteArray SecureByteArray::ToArray() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureByteArray.ToArray",kairo);
{
return Get();
}
}

// M:kairo.unity.util.SecureByteArray.Generate(System.Byte[],System.Byte[])
void SecureByteArray::Generate(ByteArray from,ByteArray to) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureByteArray.Generate(System.Byte[],System.Byte[])",kairo);
{
for (pls::cs::Int32 i = 0; i < from.length(); ++i) {
to[i] = Generate(from[i]);
}
}
}

// M:kairo.unity.util.SecureByteArray.Generate(System.Byte)
std::uint8_t SecureByteArray::Generate(std::uint8_t value) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureByteArray.Generate(System.Byte)",kairo);
{
return pls::cs::cast_integral<std::uint8_t>(((~(pls::cs::Int64(value) | ~pls::cs::Int64(bitmask_)) | (pls::cs::Int64(value) & ~pls::cs::Int64(bitmask_)))));
}
}

// M:kairo.unity.util.SecureByteArray.ValueOf(System.Byte[])
pls::cs::Ref<SecureByteArray> SecureByteArray::ValueOf(ByteArray ary) {
SecureByteArray::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureByteArray.ValueOf(System.Byte[])",kairo);
{
if ([&]() { auto cs_left = pls::cs::box(ary); auto cs_right = pls::cs::box(ByteArray{}); return cs_left == cs_right; }()) {
return pls::cs::Ref<SecureByteArray>{};
}
return SecureByteArray::create(ary);
}

}

// M:kairo.unity.util.SecureByteArray.ToArray(kairo.unity.util.SecureByteArray)
ByteArray SecureByteArray::ToArray(pls::cs::Ref<SecureByteArray> ary) {
SecureByteArray::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureByteArray.ToArray(kairo.unity.util.SecureByteArray)",kairo);
{
if (is_null(ary)) {
return ByteArray{};
}
return require(ary)->Get();
}

}
} // namespace kairo::unity::util
}
