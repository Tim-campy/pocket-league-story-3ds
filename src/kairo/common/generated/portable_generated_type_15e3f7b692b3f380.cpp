// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_15e3f7b692b3f380.hpp"
#include "portable_generated_type_67cd241ab51652f1.hpp"
#include "portable_generated_type_67cd241ab51652f1_templates.hpp"
namespace pls::generated {

void cs_15e3f7b692b3f380::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>::trace_edges(visitor);}

void cs_15e3f7b692b3f380::release_edges(){cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>::release_edges();}

void cs_init_15e3f7b692b3f380(){static pls::cs::TypeInitState state;state.run("kairo.unity.util.FastVector",[](){

});}

// M:kairo.unity.util.FastVector.#ctor
pls::cs::Ref<cs_15e3f7b692b3f380> cs_617649d3cca73756() { cs_init_15e3f7b692b3f380();
{ auto cs_this = pls::cs::make_ref<cs_15e3f7b692b3f380>(); cs_617649d3cca73756_init(cs_this); return cs_this; }
}

void cs_617649d3cca73756_init(pls::cs::Ref<cs_15e3f7b692b3f380> cs_this) {
([&]() { cs_f349692afe9e225e_init(std::static_pointer_cast<cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>>(cs_this)); }());
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.FastVector.#ctor",kairo);
{}
}
}
}
