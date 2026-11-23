// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/kairo.unity.util.Language.LangPackRecord.hpp"
#include "generated/kairo.unity.util.Language.Position.hpp"
#include "kairo.unity.util.Language.LangPackRecord.hpp"
#include "kairo.unity.util.Language.Position.hpp"

namespace kl_util = pls::generated::kairo::unity::util;

namespace pls::game {
namespace kairo::unity::util::Language_LangPackRecord {

static PLS_NOINLINE void cs_init_9487cb83e3a46e0a_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("kairo.unity.util.Language.LangPackRecord",flag,[](){

});}

void ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_9487cb83e3a46e0a_slow(flag);}

void create_init(pls::cs::Ref<kl_util::Language_LangPackRecord> self,pls::cs::Int32 id,pls::cs::String file,pls::cs::String text) {
Language_LangPackRecord::ensure_initialized();
self->Positions = pls::cs::List<kl_util::Language_Position>::make();
self->From = pls::cs::List<pls::cs::String>::make();
self->To = pls::cs::List<pls::cs::String>::make();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.LangPackRecord.#ctor(System.Int32,System.String,System.String)",kairo);
{
self->Id = id;
self->File = file;
pls::diagnostic::api_call([&]() -> decltype(auto) {return self->From.Add(text);});
}

}

// M:kairo.unity.util.Language.LangPackRecord.#ctor(System.Int32,System.String,System.String)
pls::cs::Ref<kl_util::Language_LangPackRecord> create(pls::cs::Int32 id,pls::cs::String file,pls::cs::String text) {
Language_LangPackRecord::ensure_initialized();
 auto self = pls::cs::make_ref<kl_util::Language_LangPackRecord>(); Language_LangPackRecord::create_init(self,id,file,text); return self; 
}

// M:kairo.unity.util.Language.LangPackRecord.AddPosition(System.Int32,System.Int32)
void AddPosition(pls::cs::Ref<kl_util::Language_LangPackRecord> self,pls::cs::Int32 line,pls::cs::Int32 segment) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.LangPackRecord.AddPosition(System.Int32,System.Int32)",kairo);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = self->Positions; auto cs_arg0 = Language_Position::create(line, segment); cs_receiver.Add(cs_arg0); }());});
}

}
} // namespace kairo::unity::util::Language_LangPackRecord
}
