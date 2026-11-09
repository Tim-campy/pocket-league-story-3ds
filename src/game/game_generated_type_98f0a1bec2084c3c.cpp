// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_98f0a1bec2084c3c.hpp"
#include "generated/portable_generated_type_98f0a1bec2084c3c.hpp"
namespace pls::game {

void cs_init_98f0a1bec2084c3c(){static pls::cs::TypeInitState state;state.run("kairo.unity.util.Language.LangPackFormat",[](){

});}

// M:kairo.unity.util.Language.LangPackFormat.#ctor(System.String,System.Char,System.Char)
pls::cs::Ref<pls::generated::cs_98f0a1bec2084c3c> cs_0df98a8eddce17f9(pls::cs::String v_file,char16_t v_lineCode,char16_t v_segCode) { cs_init_98f0a1bec2084c3c();
{ auto cs_this = pls::cs::make_ref<pls::generated::cs_98f0a1bec2084c3c>(); cs_0df98a8eddce17f9_init(cs_this,v_file,v_lineCode,v_segCode); return cs_this; }
}

void cs_0df98a8eddce17f9_init(pls::cs::Ref<pls::generated::cs_98f0a1bec2084c3c> cs_this,pls::cs::String v_file,char16_t v_lineCode,char16_t v_segCode) {
cs_this->cs_96513160b9f9c6b8 = char16_t(10);
cs_this->cs_37e0eb7044938cba = char16_t(9);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_file; pls::game::cs_require(cs_target)->cs_a0cee6b194388bb1 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_lineCode; pls::game::cs_require(cs_target)->cs_96513160b9f9c6b8 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_segCode; pls::game::cs_require(cs_target)->cs_37e0eb7044938cba = cs_value; return cs_value; }());
}
}
}
