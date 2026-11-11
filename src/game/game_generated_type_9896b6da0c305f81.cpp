// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_96c54d9323f24f8e.hpp"
#include "game_generated_type_9896b6da0c305f81.hpp"
namespace pls::game {

void cs_9896b6da0c305f81::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::trace_value(cs_7009afdd236d49cc,visitor);pls::cs::trace_value(cs_2d6d88bceda5ea1c,visitor);pls::cs::trace_value(cs_43d3fd031666ba13,visitor);pls::cs::trace_value(cs_f2b81922ca17726a,visitor);}

void cs_9896b6da0c305f81::release_edges(){pls::cs::release_value(cs_7009afdd236d49cc);pls::cs::release_value(cs_2d6d88bceda5ea1c);pls::cs::release_value(cs_43d3fd031666ba13);pls::cs::release_value(cs_f2b81922ca17726a);}

void cs_init_9896b6da0c305f81(){static pls::cs::TypeInitState state;state.run("kairo.unity.ui.Image.BalloonRenderTask",[](){

});}

// M:kairo.unity.ui.Image.BalloonRenderTask.#ctor(kairo.unity.ui.Balloon,System.Single,System.Single,kairo.unity.graphics.Offscreen)
cs_9896b6da0c305f81 cs_1e2003e0b356c215(pls::cs::Ref<cs_96c54d9323f24f8e> v_balloon,float v_x,float v_y,pls::cs::Ref<pls::kairo::Offscreen> v_offscreen) { cs_init_9896b6da0c305f81();
{ cs_9896b6da0c305f81 cs_this{}; cs_1e2003e0b356c215_init(&cs_this,v_balloon,v_x,v_y,v_offscreen);return cs_this;}
}

void cs_1e2003e0b356c215_init(cs_9896b6da0c305f81* cs_this,pls::cs::Ref<cs_96c54d9323f24f8e> v_balloon,float v_x,float v_y,pls::cs::Ref<pls::kairo::Offscreen> v_offscreen) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Image.BalloonRenderTask.#ctor(kairo.unity.ui.Balloon,System.Single,System.Single,kairo.unity.graphics.Offscreen)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/ui/Image.cs:M:kairo.unity.ui.Image.BalloonRenderTask.#ctor(kairo.unity.ui.Balloon,System.Single,System.Single,kairo.unity.graphics.Offscreen):1157",([&]() -> pls::cs::Ref<cs_96c54d9323f24f8e> { pls::cs::Ref<cs_96c54d9323f24f8e> cs_arg0 = v_balloon; return cs_188280dcda94b686(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_7009afdd236d49cc = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = static_cast<float>(v_x); pls::game::cs_require(cs_target)->cs_2d6d88bceda5ea1c = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = static_cast<float>(v_y); pls::game::cs_require(cs_target)->cs_43d3fd031666ba13 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_offscreen; pls::game::cs_require(cs_target)->cs_f2b81922ca17726a = cs_value; return cs_value; }());
}
}
}
}
