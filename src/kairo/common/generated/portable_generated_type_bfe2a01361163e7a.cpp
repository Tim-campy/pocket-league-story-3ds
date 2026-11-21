// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_bfe2a01361163e7a.hpp"
namespace pls::generated {

void cs_bfe2a01361163e7a::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_638e5d654c077b59,visitor);pls::cs::trace_value(cs_6ec368f1de920152,visitor);pls::cs::trace_value(cs_45a972d6cedcd20a,visitor);pls::cs::trace_value(cs_83fbaf866783c8ce,visitor);}

static PLS_NOINLINE void cs_init_bfe2a01361163e7a_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("kairo.unity.util.JarInflater.FileInfo",flag,[](){

});}

void cs_init_bfe2a01361163e7a(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_bfe2a01361163e7a_slow(flag);}

// M:kairo.unity.util.JarInflater.FileInfo.#ctor
pls::cs::Ref<cs_bfe2a01361163e7a> cs_b704c7698ceaf8f6() { cs_init_bfe2a01361163e7a();
{ auto cs_this = pls::cs::make_ref<cs_bfe2a01361163e7a>(); cs_b704c7698ceaf8f6_init(cs_this); return cs_this; }
}

void cs_b704c7698ceaf8f6_init(pls::cs::Ref<cs_bfe2a01361163e7a> cs_this) {
cs_init_bfe2a01361163e7a();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.JarInflater.FileInfo.#ctor",kairo);
{}
}
}
}
