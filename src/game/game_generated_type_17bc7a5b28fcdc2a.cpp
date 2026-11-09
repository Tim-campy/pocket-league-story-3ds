// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_17bc7a5b28fcdc2a.hpp"
#include "game_generated_type_5ad2213598dfcd5d.hpp"
#include "generated/portable_generated_type_72d9658ed61145d6.hpp"
namespace pls::game {

void cs_17bc7a5b28fcdc2a::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_5ad2213598dfcd5d::trace_edges(visitor);pls::cs::trace_value(cs_ba2d5e888232cb91,visitor);}

void cs_17bc7a5b28fcdc2a::release_edges(){cs_5ad2213598dfcd5d::release_edges();pls::cs::release_value(cs_ba2d5e888232cb91);}

void cs_init_17bc7a5b28fcdc2a(){static pls::cs::TypeInitState state;state.run("kairo.unity.panel.Button",[](){

});}

// M:kairo.unity.panel.Button.#ctor(System.String)
pls::cs::Ref<cs_17bc7a5b28fcdc2a> cs_9474c24dbd210b11(pls::cs::String v_text) { cs_init_17bc7a5b28fcdc2a();
{ auto cs_this = pls::cs::make_ref<cs_17bc7a5b28fcdc2a>(); cs_9474c24dbd210b11_init(cs_this,v_text); return cs_this; }
}

void cs_9474c24dbd210b11_init(pls::cs::Ref<cs_17bc7a5b28fcdc2a> cs_this,pls::cs::String v_text) {
([&]() { cs_123805c6bd81d455_init(std::static_pointer_cast<cs_5ad2213598dfcd5d>(cs_this)); }());
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.Button.#ctor(System.String)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text; auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }());}); return pls::generated::cs_d772a2b798b74044(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_ba2d5e888232cb91 = cs_value; return cs_value; }());
}
}
}

// M:kairo.unity.panel.Button.GetWidth
std::int32_t cs_0acae95f4bbbd7a0(pls::cs::Ref<cs_17bc7a5b28fcdc2a> cs_this) { cs_init_17bc7a5b28fcdc2a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.Button.GetWidth",kairo);
{
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull));
}
}
}
}

// M:kairo.unity.panel.Button.SetLocation(System.Int32,System.Int32)
void cs_f70438774efbbba8(pls::cs::Ref<cs_17bc7a5b28fcdc2a> cs_this,std::int32_t v_x,std::int32_t v_y) { cs_init_17bc7a5b28fcdc2a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.Button.SetLocation(System.Int32,System.Int32)",kairo);
{

}
}
}
}
}
