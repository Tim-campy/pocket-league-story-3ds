// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_fbfef5c19ac20749 {void trace_edges(const pls::cs::EdgeVisitor&)const;void release_edges();
pls::cs::String cs_d610593762120cde{};
float cs_ede9b012c16594d4{};
float cs_11096a2934652136{};
std::int32_t cs_aed8d166cc394ada{};
std::int32_t cs_a44884f8becb8e1b{};
pls::cs::Ref<pls::kairo::Font> cs_0915461b6b8b6552{};
};

void cs_init_fbfef5c19ac20749();

cs_fbfef5c19ac20749 cs_990cc4ea487d53f7(pls::cs::String v_text,float v_x,float v_y,std::int32_t v_anchor,std::int32_t v_color,pls::cs::Ref<pls::kairo::Font> v_font);

void cs_990cc4ea487d53f7_init(cs_fbfef5c19ac20749* cs_this,pls::cs::String v_text,float v_x,float v_y,std::int32_t v_anchor,std::int32_t v_color,pls::cs::Ref<pls::kairo::Font> v_font);
}
