// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "java.lang.JRuntime.hpp"
namespace pls::generated {
namespace java::lang {

void JRuntime::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);}
static pls::cs::Ref<JRuntime> JRuntime_instance_storage{};

static PLS_NOINLINE void cs_init_42d69496680e17fc_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(JRuntime_instance_storage,visitor);});static pls::cs::TypeInitState state;state.run("java.lang.JRuntime",flag,[](){

});}

void JRuntime::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_42d69496680e17fc_slow(flag);}

pls::cs::Ref<JRuntime>& JRuntime::instance(){JRuntime::ensure_initialized();return JRuntime_instance_storage;}

void JRuntime::create_init(pls::cs::Ref<JRuntime> self) {
JRuntime::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JRuntime.#ctor",kairo);
{}

}

// M:java.lang.JRuntime.#ctor
pls::cs::Ref<JRuntime> JRuntime::create() {
JRuntime::ensure_initialized();
 auto self = pls::cs::make_ref<JRuntime>(); JRuntime::create_init(self); return self; 
}

// M:java.lang.JRuntime.GetRuntime
pls::cs::Ref<JRuntime> JRuntime::GetRuntime() {
JRuntime::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JRuntime.GetRuntime",kairo);
{
if (is_null(JRuntime::instance())) {
JRuntime::instance() = JRuntime::create();
}
return JRuntime::instance();
}

}

// M:java.lang.JRuntime.Gc
void JRuntime::Gc() {PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JRuntime.Gc",kairo);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::gc_collect(0);});
}
}
} // namespace java::lang
}
