// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_42d69496680e17fc.hpp"
namespace pls::generated {

void cs_42d69496680e17fc::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);}

void cs_42d69496680e17fc::release_edges(){pls::cs::Object::release_edges();}
static pls::cs::Ref<cs_42d69496680e17fc> cs_c1bf1420af51dac4_value{};

void cs_init_42d69496680e17fc(){static pls::cs::TypeInitState state;state.run("java.lang.JRuntime",[](){

});}

pls::cs::Ref<cs_42d69496680e17fc>& cs_c1bf1420af51dac4(){cs_init_42d69496680e17fc();return cs_c1bf1420af51dac4_value;}

// M:java.lang.JRuntime.#ctor
pls::cs::Ref<cs_42d69496680e17fc> cs_8fb57d859eee275a() { cs_init_42d69496680e17fc();
{ auto cs_this = pls::cs::make_ref<cs_42d69496680e17fc>(); cs_8fb57d859eee275a_init(cs_this); return cs_this; }
}

void cs_8fb57d859eee275a_init(pls::cs::Ref<cs_42d69496680e17fc> cs_this) {
{}
}

// M:java.lang.JRuntime.Gc
void cs_b8f5dfbc2bf26f5f(pls::cs::Ref<cs_42d69496680e17fc> cs_this) { cs_init_42d69496680e17fc();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() -> void { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::gc_collect(cs_arg0); }());
}
}
}

// M:java.lang.JRuntime.GetRuntime
pls::cs::Ref<cs_42d69496680e17fc> cs_232fa563e68dcabb() { cs_init_42d69496680e17fc();
{
if (([&]() { auto cs_left = pls::cs::box(cs_c1bf1420af51dac4()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_42d69496680e17fc> { return cs_8fb57d859eee275a(); }()); cs_c1bf1420af51dac4() = cs_value; return cs_value; }());
}
return cs_c1bf1420af51dac4();
}
}
}
