// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_acb158b492b43017.hpp"
#include "generated/portable_generated_type_9487cb83e3a46e0a.hpp"
#include "generated/portable_generated_type_acb158b492b43017.hpp"
namespace pls::game {

void cs_init_acb158b492b43017(){static pls::cs::TypeInitState state;state.run("kairo.unity.util.Language.RecordPosition",[](){

});}

// M:kairo.unity.util.Language.RecordPosition.#ctor(System.Int32,System.Int32,kairo.unity.util.Language.LangPackRecord)
pls::generated::cs_acb158b492b43017 cs_aeb4d46bb60fe1d6(std::int32_t v_line,std::int32_t v_segment,pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> v_record) { cs_init_acb158b492b43017();
{ pls::generated::cs_acb158b492b43017 cs_this{}; cs_aeb4d46bb60fe1d6_init(&cs_this,v_line,v_segment,v_record);return cs_this;}
}

void cs_aeb4d46bb60fe1d6_init(pls::generated::cs_acb158b492b43017* cs_this,std::int32_t v_line,std::int32_t v_segment,pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> v_record) {
{
([&]() { auto cs_target = cs_this; auto cs_value = v_line; pls::game::cs_require(cs_target)->cs_06609f2ab38c958b = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_segment; pls::game::cs_require(cs_target)->cs_018ea348c0cf88c0 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_record; pls::game::cs_require(cs_target)->cs_5043ee31a67ae639 = cs_value; return cs_value; }());
}
}
}
