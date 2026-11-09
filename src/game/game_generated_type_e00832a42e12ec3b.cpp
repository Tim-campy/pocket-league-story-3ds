// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_1ab688350081022a.hpp"
#include "game_generated_type_e00832a42e12ec3b.hpp"
namespace pls::game {

void cs_e00832a42e12ec3b::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_1ab688350081022a::trace_edges(visitor);}

void cs_e00832a42e12ec3b::release_edges(){cs_1ab688350081022a::release_edges();}

void cs_init_e00832a42e12ec3b(){static pls::cs::TypeInitState state;state.run("system.lineup.MyLineup",[](){

});}

// M:system.lineup.MyLineup.#ctor
pls::cs::Ref<cs_e00832a42e12ec3b> cs_1da4a6941cbe6a25() { cs_init_e00832a42e12ec3b();
{ auto cs_this = pls::cs::make_ref<cs_e00832a42e12ec3b>(); cs_1da4a6941cbe6a25_init(cs_this); return cs_this; }
}

void cs_1da4a6941cbe6a25_init(pls::cs::Ref<cs_e00832a42e12ec3b> cs_this) {
([&]() { cs_c91e4943a0e046f2_init(std::static_pointer_cast<cs_1ab688350081022a>(cs_this)); }());
{

}
}

// M:system.lineup.MyLineup.GetInstance
pls::cs::Ref<cs_e00832a42e12ec3b> cs_9cfcc2afb24b5e63() { cs_init_e00832a42e12ec3b();
{
if (([&]() { auto cs_left = pls::cs::box(cs_eb626cd1b0f88bfd()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_e00832a42e12ec3b> { return cs_1da4a6941cbe6a25(); }()); cs_eb626cd1b0f88bfd() = cs_value; return cs_value; }());
}
return pls::cs::unbox<pls::cs::Ref<cs_e00832a42e12ec3b>>(pls::cs::box(cs_eb626cd1b0f88bfd()));
}
}
}
