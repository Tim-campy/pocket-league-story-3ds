// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_27b8baf7307cff9f.hpp"
namespace pls::game {

void cs_27b8baf7307cff9f::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::ExceptionObject::trace_edges(visitor);}

void cs_27b8baf7307cff9f::release_edges(){pls::cs::ExceptionObject::release_edges();}

void cs_init_27b8baf7307cff9f(){static pls::cs::TypeInitState state;state.run("kairo.unity.ui.UIException",[](){

});}

// M:kairo.unity.ui.UIException.GetStatus
std::int32_t cs_31cf637794688433(pls::cs::Ref<cs_27b8baf7307cff9f> cs_this) { cs_init_27b8baf7307cff9f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.UIException.GetStatus",kairo);
{
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
}
}
}
}
}
