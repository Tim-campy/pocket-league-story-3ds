// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_57e2b41d1ee1c149.hpp"
#include "game_generated_type_5841296a01607078.hpp"
#include "game_generated_type_9896b6da0c305f81.hpp"
#include "game_generated_type_fbfef5c19ac20749.hpp"
namespace pls::game {

void cs_57e2b41d1ee1c149::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_927abfca5c112b44,visitor);pls::cs::trace_value(cs_0eb66d6a46162d0d,visitor);pls::cs::trace_value(cs_5484e79983101cbd,visitor);}

void cs_57e2b41d1ee1c149::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_927abfca5c112b44);pls::cs::release_value(cs_0eb66d6a46162d0d);pls::cs::release_value(cs_5484e79983101cbd);}

void cs_init_57e2b41d1ee1c149(){static pls::cs::TypeInitState state;state.run("PlsPortGeneratedBootstrap.Source.ImageTaskState",[](){

});}

// M:PlsPortGeneratedBootstrap.Source.ImageTaskState.#ctor
pls::cs::Ref<cs_57e2b41d1ee1c149> cs_c80013d97cddb420() { cs_init_57e2b41d1ee1c149();
{ auto cs_this = pls::cs::make_ref<cs_57e2b41d1ee1c149>(); cs_c80013d97cddb420_init(cs_this); return cs_this; }
}

void cs_c80013d97cddb420_init(pls::cs::Ref<cs_57e2b41d1ee1c149> cs_this) {
{}
}
}
