// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_9d34b362d90540bb.hpp"
namespace pls::game {

void cs_9d34b362d90540bb::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);}

static PLS_NOINLINE void cs_init_9d34b362d90540bb_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("main.AppData.stringErrorCode",flag,[](){

});}

void cs_init_9d34b362d90540bb(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_9d34b362d90540bb_slow(flag);}

// M:main.AppData.stringErrorCode.#ctor
pls::cs::Ref<cs_9d34b362d90540bb> cs_d1b85d888761ab9c() { cs_init_9d34b362d90540bb();
{ auto cs_this = pls::cs::make_ref<cs_9d34b362d90540bb>(); cs_d1b85d888761ab9c_init(cs_this); return cs_this; }
}

void cs_d1b85d888761ab9c_init(pls::cs::Ref<cs_9d34b362d90540bb> cs_this) {
cs_init_9d34b362d90540bb();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.AppData.stringErrorCode.#ctor",game);
{}
}
}
}
