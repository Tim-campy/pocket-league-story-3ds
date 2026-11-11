// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_4c00a0e0c6e6e2e5.hpp"
#include "game_generated_type_5ad2213598dfcd5d.hpp"
#include "generated/portable_generated_type_72d9658ed61145d6.hpp"
namespace pls::game {

void cs_4c00a0e0c6e6e2e5::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_5ad2213598dfcd5d::trace_edges(visitor);pls::cs::trace_value(cs_c02206d24c9889b2,visitor);}

void cs_4c00a0e0c6e6e2e5::release_edges(){cs_5ad2213598dfcd5d::release_edges();pls::cs::release_value(cs_c02206d24c9889b2);}

void cs_init_4c00a0e0c6e6e2e5(){static pls::cs::TypeInitState state;state.run("kairo.unity.panel.Label",[](){

});}

// M:kairo.unity.panel.Label.#ctor(System.String)
pls::cs::Ref<cs_4c00a0e0c6e6e2e5> cs_80617835aa0d7a16(pls::cs::String v_text) { cs_init_4c00a0e0c6e6e2e5();
{ auto cs_this = pls::cs::make_ref<cs_4c00a0e0c6e6e2e5>(); cs_80617835aa0d7a16_init(cs_this,v_text); return cs_this; }
}

void cs_80617835aa0d7a16_init(pls::cs::Ref<cs_4c00a0e0c6e6e2e5> cs_this,pls::cs::String v_text) {
([&]() { cs_123805c6bd81d455_init(pls::cs::static_pointer_cast<cs_5ad2213598dfcd5d>(cs_this)); }());
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.Label.#ctor(System.String)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text; auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }());}); pls::game::cs_require(cs_target)->cs_c02206d24c9889b2 = cs_value; return cs_value; }());
}
}
}

// M:kairo.unity.panel.Label.GetHeight
std::int32_t cs_19774412e61c6647(pls::cs::Ref<cs_4c00a0e0c6e6e2e5> cs_this) { cs_init_4c00a0e0c6e6e2e5();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.Label.GetHeight",kairo);
{
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull));
}
}
}
}

// M:kairo.unity.panel.Label.GetWidth
std::int32_t cs_12272e051762a684(pls::cs::Ref<cs_4c00a0e0c6e6e2e5> cs_this) { cs_init_4c00a0e0c6e6e2e5();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.Label.GetWidth",kairo);
{
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull));
}
}
}
}

// M:kairo.unity.panel.Label.SetLocation(System.Int32,System.Int32)
void cs_e4a038175824c8ee(pls::cs::Ref<cs_4c00a0e0c6e6e2e5> cs_this,std::int32_t v_x,std::int32_t v_y) { cs_init_4c00a0e0c6e6e2e5();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.Label.SetLocation(System.Int32,System.Int32)",kairo);
{

}
}
}
}
}
