// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_8a422f6f9c1bd55e.hpp"
namespace pls::game {

void cs_8a422f6f9c1bd55e::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);}

void cs_8a422f6f9c1bd55e::release_edges(){pls::cs::Object::release_edges();}

void cs_init_8a422f6f9c1bd55e(){static pls::cs::TypeInitState state;state.run("BuildInfos.BuildInfo",[](){

});}

// M:BuildInfos.BuildInfo.#ctor
pls::cs::Ref<cs_8a422f6f9c1bd55e> cs_ddcc638d2dde3014() { cs_init_8a422f6f9c1bd55e();
{ auto cs_this = pls::cs::make_ref<cs_8a422f6f9c1bd55e>(); cs_ddcc638d2dde3014_init(cs_this); return cs_this; }
}

void cs_ddcc638d2dde3014_init(pls::cs::Ref<cs_8a422f6f9c1bd55e> cs_this) {
cs_init_8a422f6f9c1bd55e();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:BuildInfos.BuildInfo.#ctor",game);
{}
}
}
}
