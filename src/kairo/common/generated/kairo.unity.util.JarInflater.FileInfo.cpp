// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "kairo.unity.util.JarInflater.FileInfo.hpp"
namespace pls::generated {
namespace kairo::unity::util {

void JarInflater_FileInfo::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(Name,visitor);}

static PLS_NOINLINE void cs_init_bfe2a01361163e7a_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("kairo.unity.util.JarInflater.FileInfo",flag,[](){

});}

void JarInflater_FileInfo::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_bfe2a01361163e7a_slow(flag);}

void JarInflater_FileInfo::create_init(pls::cs::Ref<JarInflater_FileInfo> self) {
JarInflater_FileInfo::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.JarInflater.FileInfo.#ctor",kairo);
{}

}

// M:kairo.unity.util.JarInflater.FileInfo.#ctor
pls::cs::Ref<JarInflater_FileInfo> JarInflater_FileInfo::create() {
JarInflater_FileInfo::ensure_initialized();
 auto self = pls::cs::make_ref<JarInflater_FileInfo>(); JarInflater_FileInfo::create_init(self); return self; 
}
} // namespace kairo::unity::util
}
