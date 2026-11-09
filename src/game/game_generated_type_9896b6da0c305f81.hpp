// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_9896b6da0c305f81 {void trace_edges(const pls::cs::EdgeVisitor&)const;void release_edges();
pls::cs::Ref<cs_96c54d9323f24f8e> cs_7009afdd236d49cc{};
float cs_2d6d88bceda5ea1c{};
float cs_43d3fd031666ba13{};
pls::cs::Ref<pls::kairo::Offscreen> cs_f2b81922ca17726a{};
};

void cs_init_9896b6da0c305f81();

cs_9896b6da0c305f81 cs_1e2003e0b356c215(pls::cs::Ref<cs_96c54d9323f24f8e> v_balloon,float v_x,float v_y,pls::cs::Ref<pls::kairo::Offscreen> v_offscreen);

void cs_1e2003e0b356c215_init(cs_9896b6da0c305f81* cs_this,pls::cs::Ref<cs_96c54d9323f24f8e> v_balloon,float v_x,float v_y,pls::cs::Ref<pls::kairo::Offscreen> v_offscreen);
}
