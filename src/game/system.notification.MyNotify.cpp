// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "kairo.unity.system.notification.ui.NotifyManager.hpp"
#include "system.notification.MyNotify.hpp"
namespace pls::game {
namespace system::notification {

void MyNotify::trace_edges(const pls::cs::EdgeVisitor&visitor)const {NotifyManager::trace_edges(visitor);}

static PLS_NOINLINE void cs_init_23ed5cbd0e3922f3_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("system.notification.MyNotify",flag,[](){

});}

void MyNotify::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_23ed5cbd0e3922f3_slow(flag);}

void MyNotify::create_init(pls::cs::Ref<MyNotify> self) {
MyNotify::ensure_initialized();
NotifyManager::create_init(pls::cs::static_pointer_cast<NotifyManager>(self));
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.notification.MyNotify.#ctor",game);
{

}

}

// M:system.notification.MyNotify.#ctor
pls::cs::Ref<MyNotify> MyNotify::create() {
MyNotify::ensure_initialized();
 auto self = pls::cs::make_ref<MyNotify>(); MyNotify::create_init(self); return self; 
}

// M:system.notification.MyNotify.GetInstance
pls::cs::Ref<MyNotify> MyNotify::GetInstance() {
MyNotify::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.notification.MyNotify.GetInstance",game);
{
NotifyManager::ensure_initialized();

if (is_null(NotifyManager::instance_())) {
NotifyManager::instance_() = MyNotify::create();
}
return pls::cs::unbox<pls::cs::Ref<MyNotify>>(pls::cs::box(NotifyManager::instance_()));

}

}

// M:system.notification.MyNotify.OnNotify
void MyNotify::OnNotify() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.notification.MyNotify.OnNotify",game);
{

}
}

// M:system.notification.MyNotify.OnReceiveValue
void MyNotify::OnReceiveValue() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.notification.MyNotify.OnReceiveValue",game);
{
return;
}
}
} // namespace system::notification
}
