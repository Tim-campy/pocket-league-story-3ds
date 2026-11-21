// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_f8053a3d49df91b7.hpp"
namespace pls::game {

void cs_f8053a3d49df91b7::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);}

static PLS_NOINLINE void cs_init_f8053a3d49df91b7_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("TJPlacement",flag,[](){

});}

void cs_init_f8053a3d49df91b7(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_f8053a3d49df91b7_slow(flag);}

// M:TJPlacement.#ctor
pls::cs::Ref<cs_f8053a3d49df91b7> cs_ed3f157af0fe9b57() { cs_init_f8053a3d49df91b7();
{ auto cs_this = pls::cs::make_ref<cs_f8053a3d49df91b7>(); cs_ed3f157af0fe9b57_init(cs_this); return cs_this; }
}

void cs_ed3f157af0fe9b57_init(pls::cs::Ref<cs_f8053a3d49df91b7> cs_this) {
cs_init_f8053a3d49df91b7();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:TJPlacement.#ctor",game);
{}
}
}
}
