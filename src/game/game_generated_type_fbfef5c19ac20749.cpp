// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_fbfef5c19ac20749.hpp"
namespace pls::game {

void cs_fbfef5c19ac20749::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::trace_value(cs_d610593762120cde,visitor);pls::cs::trace_value(cs_ede9b012c16594d4,visitor);pls::cs::trace_value(cs_11096a2934652136,visitor);pls::cs::trace_value(cs_aed8d166cc394ada,visitor);pls::cs::trace_value(cs_a44884f8becb8e1b,visitor);pls::cs::trace_value(cs_0915461b6b8b6552,visitor);}

void cs_fbfef5c19ac20749::release_edges(){pls::cs::release_value(cs_d610593762120cde);pls::cs::release_value(cs_ede9b012c16594d4);pls::cs::release_value(cs_11096a2934652136);pls::cs::release_value(cs_aed8d166cc394ada);pls::cs::release_value(cs_a44884f8becb8e1b);pls::cs::release_value(cs_0915461b6b8b6552);}

void cs_init_fbfef5c19ac20749(){static pls::cs::TypeInitState state;state.run("kairo.unity.ui.Image.TextRenderTask",[](){

});}

// M:kairo.unity.ui.Image.TextRenderTask.#ctor(System.String,System.Single,System.Single,System.Int32,System.Int32,kairo.unity.ui.Font)
cs_fbfef5c19ac20749 cs_990cc4ea487d53f7(pls::cs::String v_text,float v_x,float v_y,std::int32_t v_anchor,std::int32_t v_color,pls::cs::Ref<pls::kairo::Font> v_font) { cs_init_fbfef5c19ac20749();
{ cs_fbfef5c19ac20749 cs_this{}; cs_990cc4ea487d53f7_init(&cs_this,v_text,v_x,v_y,v_anchor,v_color,v_font);return cs_this;}
}

void cs_990cc4ea487d53f7_init(cs_fbfef5c19ac20749* cs_this,pls::cs::String v_text,float v_x,float v_y,std::int32_t v_anchor,std::int32_t v_color,pls::cs::Ref<pls::kairo::Font> v_font) {
{
([&]() { auto cs_target = cs_this; auto cs_value = v_text; pls::game::cs_require(cs_target)->cs_d610593762120cde = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_x; pls::game::cs_require(cs_target)->cs_ede9b012c16594d4 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_y; pls::game::cs_require(cs_target)->cs_11096a2934652136 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_anchor; pls::game::cs_require(cs_target)->cs_aed8d166cc394ada = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_color; pls::game::cs_require(cs_target)->cs_a44884f8becb8e1b = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_font; pls::game::cs_require(cs_target)->cs_0915461b6b8b6552 = cs_value; return cs_value; }());
}
}
}
