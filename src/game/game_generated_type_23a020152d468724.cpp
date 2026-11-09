// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_23a020152d468724.hpp"
#include "game_generated_type_cd97eee87b3216c4.hpp"
namespace pls::game {

void cs_23a020152d468724::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_cd97eee87b3216c4::trace_edges(visitor);pls::cs::trace_value(cs_0e62fcf0f027f737,visitor);}

void cs_23a020152d468724::release_edges(){cs_cd97eee87b3216c4::release_edges();pls::cs::release_value(cs_0e62fcf0f027f737);}

pls::cs::String cs_23a020152d468724::ToString() {return cs_959efe4557f9babf(std::static_pointer_cast<cs_23a020152d468724>(shared_from_this()));}

void cs_init_23a020152d468724(){static pls::cs::TypeInitState state;state.run("kairo.unity.util.NotPermitException",[](){

});}

// M:kairo.unity.util.NotPermitException.ToString
pls::cs::String cs_959efe4557f9babf(pls::cs::Ref<cs_23a020152d468724> cs_this) { cs_init_23a020152d468724();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.NotPermitException.ToString",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(pls::game::cs_require(std::static_pointer_cast<cs_cd97eee87b3216c4>(cs_this))->get_InnerException()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = pls::game::cs_require(std::static_pointer_cast<cs_cd97eee87b3216c4>(cs_this))->get_InnerException(); return pls::game::cs_require(cs_receiver)->ToString(); }());});
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = std::static_pointer_cast<cs_cd97eee87b3216c4>(cs_this); return pls::game::cs_require(cs_receiver)->ToString(); }());});
}
}
}
}
}
