// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_672083a5397f2913.hpp"
namespace pls::game {

void cs_672083a5397f2913::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_892fee32e48ccc2a,visitor);pls::cs::trace_value(cs_46be5d13750c48b7,visitor);pls::cs::trace_value(cs_af8004110cb79aa4,visitor);pls::cs::trace_value(cs_adf957d75456082a,visitor);pls::cs::trace_value(cs_868c2bf8c835789a,visitor);pls::cs::trace_value(cs_13421d3977fbd718,visitor);}

void cs_672083a5397f2913::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_892fee32e48ccc2a);pls::cs::release_value(cs_46be5d13750c48b7);pls::cs::release_value(cs_af8004110cb79aa4);pls::cs::release_value(cs_adf957d75456082a);pls::cs::release_value(cs_868c2bf8c835789a);pls::cs::release_value(cs_13421d3977fbd718);}

void cs_init_672083a5397f2913(){static pls::cs::TypeInitState state;state.run("kairo.unity.ui.Seb.WorkStaticValue",[](){

});}

// M:kairo.unity.ui.Seb.WorkStaticValue.#ctor
pls::cs::Ref<cs_672083a5397f2913> cs_0fb4b76eec65aa76() { cs_init_672083a5397f2913();
{ auto cs_this = pls::cs::make_ref<cs_672083a5397f2913>(); cs_0fb4b76eec65aa76_init(cs_this); return cs_this; }
}

void cs_0fb4b76eec65aa76_init(pls::cs::Ref<cs_672083a5397f2913> cs_this) {
cs_this->cs_892fee32e48ccc2a = ([&](){auto cs_initial_array_268=pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>::make(1);cs_initial_array_268.at(0)=pls::cs::Array<pls::cs::Array<std::int32_t>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));return cs_initial_array_268;}());
cs_this->cs_46be5d13750c48b7 = pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));
cs_this->cs_af8004110cb79aa4 = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)));
cs_this->cs_adf957d75456082a = pls::cs::Array<std::int16_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)));
cs_this->cs_868c2bf8c835789a = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)));
cs_this->cs_13421d3977fbd718 = pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)));
{}
}
}
