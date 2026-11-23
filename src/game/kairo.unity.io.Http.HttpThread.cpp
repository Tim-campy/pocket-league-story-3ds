// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "java.lang.JThread.hpp"
#include "kairo.unity.io.Http.HttpThread.hpp"
#include "kairo.unity.io.HttpObject.hpp"
namespace pls::game {
namespace kairo::unity::io {

void Http_HttpThread::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(thread_,visitor);pls::cs::trace_value(http_,visitor);}

static PLS_NOINLINE void cs_init_18d5b680efad7752_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("kairo.unity.io.Http.HttpThread",flag,[](){

});}

void Http_HttpThread::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_18d5b680efad7752_slow(flag);}

void Http_HttpThread::create_init(pls::cs::Ref<Http_HttpThread> self) {
Http_HttpThread::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.Http.HttpThread.#ctor",kairo);
{}

}

// M:kairo.unity.io.Http.HttpThread.#ctor
pls::cs::Ref<Http_HttpThread> Http_HttpThread::create() {
Http_HttpThread::ensure_initialized();
 auto self = pls::cs::make_ref<Http_HttpThread>(); Http_HttpThread::create_init(self); return self; 
}
} // namespace kairo::unity::io
}
