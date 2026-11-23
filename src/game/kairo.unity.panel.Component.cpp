// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "kairo.unity.panel.Component.hpp"
namespace pls::game {
namespace kairo::unity::panel {

void Component::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);}

static PLS_NOINLINE void cs_init_5ad2213598dfcd5d_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("kairo.unity.panel.Component",flag,[](){

});}

void Component::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_5ad2213598dfcd5d_slow(flag);}

void Component::create_init(pls::cs::Ref<Component> self) {
Component::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.Component.#ctor",kairo);
{}

}

// M:kairo.unity.panel.Component.#ctor
pls::cs::Ref<Component> Component::create() {
Component::ensure_initialized();
 auto self = pls::cs::make_ref<Component>(); Component::create_init(self); return self; 
}
} // namespace kairo::unity::panel
}
