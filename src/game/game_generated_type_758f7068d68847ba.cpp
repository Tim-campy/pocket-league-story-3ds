// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_758f7068d68847ba.hpp"
namespace pls::game {

void cs_758f7068d68847ba::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);}

static PLS_NOINLINE void cs_init_758f7068d68847ba_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("system.billing.util.IabHelper",flag,[](){

});}

void cs_init_758f7068d68847ba(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_758f7068d68847ba_slow(flag);}

// M:system.billing.util.IabHelper.#ctor
pls::cs::Ref<cs_758f7068d68847ba> cs_99bb7da72af44971() { cs_init_758f7068d68847ba();
{ auto cs_this = pls::cs::make_ref<cs_758f7068d68847ba>(); cs_99bb7da72af44971_init(cs_this); return cs_this; }
}

void cs_99bb7da72af44971_init(pls::cs::Ref<cs_758f7068d68847ba> cs_this) {
cs_init_758f7068d68847ba();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.IabHelper.#ctor",game);
{}
}
}
}
