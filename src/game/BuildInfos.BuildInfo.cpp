// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "BuildInfos.BuildInfo.hpp"
namespace pls::game {
namespace BuildInfos {

void BuildInfo::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);}

static PLS_NOINLINE void cs_init_8a422f6f9c1bd55e_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("BuildInfos.BuildInfo",flag,[](){

});}

void BuildInfo::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_8a422f6f9c1bd55e_slow(flag);}

void BuildInfo::create_init(pls::cs::Ref<BuildInfo> self) {
BuildInfo::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:BuildInfos.BuildInfo.#ctor",game);
{}

}

// M:BuildInfos.BuildInfo.#ctor
pls::cs::Ref<BuildInfo> BuildInfo::create() {
BuildInfo::ensure_initialized();
 auto self = pls::cs::make_ref<BuildInfo>(); BuildInfo::create_init(self); return self; 
}
} // namespace BuildInfos
}
