// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "kairo.unity.system.KairoBase.KairoDummy.hpp"
#include "kairo.unity.system.KairoBase.hpp"
namespace pls::game {
namespace kairo::unity::system {

void KairoBase_KairoDummy::trace_edges(const pls::cs::EdgeVisitor&visitor)const {KairoBase::trace_edges(visitor);}

static PLS_NOINLINE void cs_init_50c5a567a6876ee3_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("kairo.unity.system.KairoBase.KairoDummy",flag,[](){

});}

void KairoBase_KairoDummy::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_50c5a567a6876ee3_slow(flag);}

void KairoBase_KairoDummy::create_init(pls::cs::Ref<KairoBase_KairoDummy> self) {
KairoBase_KairoDummy::ensure_initialized();
KairoBase::create_init(pls::cs::static_pointer_cast<KairoBase>(self));
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.KairoDummy.#ctor",kairo);
{}

}

// M:kairo.unity.system.KairoBase.KairoDummy.#ctor
pls::cs::Ref<KairoBase_KairoDummy> KairoBase_KairoDummy::create() {
KairoBase_KairoDummy::ensure_initialized();
 auto self = pls::cs::make_ref<KairoBase_KairoDummy>(); KairoBase_KairoDummy::create_init(self); return self; 
}

// M:kairo.unity.system.KairoBase.KairoDummy.Save
void KairoBase_KairoDummy::Save() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.KairoDummy.Save",kairo);
{

}
}

// M:kairo.unity.system.KairoBase.KairoDummy.SaveAll
void KairoBase_KairoDummy::SaveAll() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.KairoDummy.SaveAll",kairo);
{

}
}

// M:kairo.unity.system.KairoBase.KairoDummy.OnSaveGameBegin
void KairoBase_KairoDummy::OnSaveGameBegin() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.KairoDummy.OnSaveGameBegin",kairo);
{

}
}

// M:kairo.unity.system.KairoBase.KairoDummy.OnSaveGameEnd
void KairoBase_KairoDummy::OnSaveGameEnd() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.KairoDummy.OnSaveGameEnd",kairo);
{

}
}
} // namespace kairo::unity::system
}
