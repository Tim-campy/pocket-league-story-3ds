// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_bf56843843fb840d.hpp"
#include "generated/portable_generated_type_52158c8b20364c2b.hpp"
namespace pls::game {

void cs_bf56843843fb840d::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::trace_value(cs_85aa6688644f1732,visitor);pls::cs::trace_value(cs_0e1d8386a566c122,visitor);pls::cs::trace_value(cs_061de919f485a022,visitor);}

void cs_bf56843843fb840d::release_edges(){pls::cs::release_value(cs_85aa6688644f1732);pls::cs::release_value(cs_0e1d8386a566c122);pls::cs::release_value(cs_061de919f485a022);}

void cs_init_bf56843843fb840d(){static pls::cs::TypeInitState state;state.run("kairo.unity.ui.ResourceManager.JarCache",[](){

});}

// M:kairo.unity.ui.ResourceManager.JarCache.#ctor(System.Int32,System.Int32,kairo.unity.util.JarInflater)
cs_bf56843843fb840d cs_b9f0cc63a3a1e0ed(std::int32_t v_rsId,std::int32_t v_rcId,pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jar) { cs_init_bf56843843fb840d();
{ cs_bf56843843fb840d cs_this{}; cs_b9f0cc63a3a1e0ed_init(&cs_this,v_rsId,v_rcId,v_jar);return cs_this;}
}

void cs_b9f0cc63a3a1e0ed_init(cs_bf56843843fb840d* cs_this,std::int32_t v_rsId,std::int32_t v_rcId,pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jar) {
{
([&]() { auto cs_target = cs_this; auto cs_value = v_rsId; pls::game::cs_require(cs_target)->cs_85aa6688644f1732 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_rcId; pls::game::cs_require(cs_target)->cs_0e1d8386a566c122 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_jar; pls::game::cs_require(cs_target)->cs_061de919f485a022 = cs_value; return cs_value; }());
}
}
}
