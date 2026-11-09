// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_5ac9304f9db0671e.hpp"
namespace pls::game {

void cs_5ac9304f9db0671e::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_a629158f3074ad89,visitor);pls::cs::trace_value(cs_577d4cc58848f157,visitor);}

void cs_5ac9304f9db0671e::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_a629158f3074ad89);pls::cs::release_value(cs_577d4cc58848f157);}

void cs_init_5ac9304f9db0671e(){static pls::cs::TypeInitState state;state.run("kairo.unity.ui.Seb.WorkValue",[](){

});}

// M:kairo.unity.ui.Seb.WorkValue.#ctor
pls::cs::Ref<cs_5ac9304f9db0671e> cs_77ef879cc829cd6c() { cs_init_5ac9304f9db0671e();
{ auto cs_this = pls::cs::make_ref<cs_5ac9304f9db0671e>(); cs_77ef879cc829cd6c_init(cs_this); return cs_this; }
}

void cs_77ef879cc829cd6c_init(pls::cs::Ref<cs_5ac9304f9db0671e> cs_this) {
{}
}
}
