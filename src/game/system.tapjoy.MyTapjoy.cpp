// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "TJPlacement.hpp"
#include "kairo.unity.system.tapjoy.ui.ITapjoy.hpp"
#include "system.tapjoy.MyTapjoy.hpp"
#include "system.tapjoy.ui.Tapjoy.hpp"
namespace pls::game {
namespace system::tapjoy {

void MyTapjoy::trace_edges(const pls::cs::EdgeVisitor&visitor)const {Tapjoy::trace_edges(visitor);}

static PLS_NOINLINE void cs_init_a47fef2fb9013301_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("system.tapjoy.MyTapjoy",flag,[](){

});}

void MyTapjoy::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_a47fef2fb9013301_slow(flag);}

void MyTapjoy::create_init(pls::cs::Ref<MyTapjoy> self) {
MyTapjoy::ensure_initialized();
Tapjoy::create_init(pls::cs::static_pointer_cast<Tapjoy>(self), pls::cs::String(u""), literal(u"GetFreeTicket"), true);
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.tapjoy.MyTapjoy.#ctor",game);
{

}

}

// M:system.tapjoy.MyTapjoy.#ctor
pls::cs::Ref<MyTapjoy> MyTapjoy::create() {
MyTapjoy::ensure_initialized();
 auto self = pls::cs::make_ref<MyTapjoy>(); MyTapjoy::create_init(self); return self; 
}

// M:system.tapjoy.MyTapjoy.GetInstance
pls::cs::Ref<MyTapjoy> MyTapjoy::GetInstance() {
MyTapjoy::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.tapjoy.MyTapjoy.GetInstance",game);
{
Tapjoy::ensure_initialized();

if (is_null(Tapjoy::instance_())) {
Tapjoy::instance_() = MyTapjoy::create();
}
return pls::cs::unbox<pls::cs::Ref<MyTapjoy>>(pls::cs::box(Tapjoy::instance_()));

}

}
} // namespace system::tapjoy
}
