// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_18d5b680efad7752.hpp"
#include "game_generated_type_77de402a688eeb9d.hpp"
#include "game_generated_type_89c0d586cfe20341.hpp"
namespace pls::game {

void cs_18d5b680efad7752::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_437ffc21e8449636,visitor);pls::cs::trace_value(cs_fda18c2ca470418e,visitor);pls::cs::trace_value(cs_79a73cb588797b93,visitor);}

void cs_18d5b680efad7752::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_437ffc21e8449636);pls::cs::release_value(cs_fda18c2ca470418e);pls::cs::release_value(cs_79a73cb588797b93);}

void cs_init_18d5b680efad7752(){static pls::cs::TypeInitState state;state.run("kairo.unity.io.Http.HttpThread",[](){

});}

// M:kairo.unity.io.Http.HttpThread.#ctor
pls::cs::Ref<cs_18d5b680efad7752> cs_b1fabebdabf8d17c() { cs_init_18d5b680efad7752();
{ auto cs_this = pls::cs::make_ref<cs_18d5b680efad7752>(); cs_b1fabebdabf8d17c_init(cs_this); return cs_this; }
}

void cs_b1fabebdabf8d17c_init(pls::cs::Ref<cs_18d5b680efad7752> cs_this) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.Http.HttpThread.#ctor",kairo);
{}
}
}
}
