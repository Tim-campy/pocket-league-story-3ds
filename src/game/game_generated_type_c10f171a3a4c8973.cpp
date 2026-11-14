// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_c10f171a3a4c8973.hpp"
namespace pls::game {

void cs_c10f171a3a4c8973::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::ExceptionObject::trace_edges(visitor);}

void cs_c10f171a3a4c8973::release_edges(){pls::cs::ExceptionObject::release_edges();}

void cs_init_c10f171a3a4c8973(){static pls::cs::TypeInitState state;state.run("kairo.unity.system.payment.IllegalPurchaseException",[](){

});}

// M:kairo.unity.system.payment.IllegalPurchaseException.#ctor
pls::cs::Ref<cs_c10f171a3a4c8973> cs_4541939614682a87() { cs_init_c10f171a3a4c8973();
{ auto cs_this = pls::cs::make_ref<cs_c10f171a3a4c8973>(); cs_4541939614682a87_init(cs_this); return cs_this; }
}

void cs_4541939614682a87_init(pls::cs::Ref<cs_c10f171a3a4c8973> cs_this) {
([&](){ cs_this->source_ctor("System.Exception");}());
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.payment.IllegalPurchaseException.#ctor",kairo);
{}
}
}
}
