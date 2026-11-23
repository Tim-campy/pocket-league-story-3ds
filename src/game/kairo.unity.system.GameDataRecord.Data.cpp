// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/kairo.unity.util.SecureString.hpp"
#include "kairo.unity.system.GameDataRecord.Data.hpp"
#include "kairo.unity.util.SecureByteArray.hpp"

namespace kl_util = pls::generated::kairo::unity::util;

using ByteArray = pls::cs::Array<std::uint8_t>;

namespace pls::game {
namespace kairo::unity::system {

void GameDataRecord_Data::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(name_,visitor);pls::cs::trace_value(value_,visitor);}

static PLS_NOINLINE void cs_init_f65ba01749ba9d34_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("kairo.unity.system.GameDataRecord.Data",flag,[](){

});}

void GameDataRecord_Data::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_f65ba01749ba9d34_slow(flag);}

void GameDataRecord_Data::create_init(pls::cs::Ref<GameDataRecord_Data> self,pls::cs::String name,ByteArray value,bool toset) {
GameDataRecord_Data::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.Data.#ctor(System.String,System.Byte[],System.Boolean)",kairo);
{
self->name_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::SecureString::ValueOf(name);});
self->value_ = util::SecureByteArray::ValueOf(value);
self->toset_ = toset;
}

}

// M:kairo.unity.system.GameDataRecord.Data.#ctor(System.String,System.Byte[],System.Boolean)
pls::cs::Ref<GameDataRecord_Data> GameDataRecord_Data::create(pls::cs::String name,ByteArray value,bool toset) {
GameDataRecord_Data::ensure_initialized();
 auto self = pls::cs::make_ref<GameDataRecord_Data>(); GameDataRecord_Data::create_init(self,name,value,toset); return self; 
}

// M:kairo.unity.system.GameDataRecord.Data.Clone
pls::cs::Ref<GameDataRecord_Data> GameDataRecord_Data::Clone() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.Data.Clone",kairo);
{
{auto cs_init_312=([&]() -> pls::cs::Ref<GameDataRecord_Data> { pls::cs::String cs_arg0_312 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::SecureString::ToStringSecureStringStatic(name_);}); ByteArray cs_arg1_312 = util::SecureByteArray::ToArray(value_); bool cs_arg2_312 = toset_; return GameDataRecord_Data::create(cs_arg0_312, cs_arg1_312, cs_arg2_312); }());cs_init_312->acquired_=acquired_;
return cs_init_312;}
}
}
} // namespace kairo::unity::system
}
