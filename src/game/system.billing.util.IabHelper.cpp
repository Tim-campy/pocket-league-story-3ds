// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "system.billing.util.IabHelper.hpp"
namespace pls::game {
namespace system::billing::util {

void IabHelper::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);}

static PLS_NOINLINE void cs_init_758f7068d68847ba_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("system.billing.util.IabHelper",flag,[](){

});}

void IabHelper::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_758f7068d68847ba_slow(flag);}

void IabHelper::create_init(pls::cs::Ref<IabHelper> self) {
IabHelper::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.IabHelper.#ctor",game);
{}

}

// M:system.billing.util.IabHelper.#ctor
pls::cs::Ref<IabHelper> IabHelper::create() {
IabHelper::ensure_initialized();
 auto self = pls::cs::make_ref<IabHelper>(); IabHelper::create_init(self); return self; 
}
} // namespace system::billing::util
}
