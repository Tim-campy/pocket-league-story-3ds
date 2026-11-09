// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_130519c307b90f46.hpp"
#include "game_generated_type_70c4092da329e972.hpp"
namespace pls::game {

void cs_70c4092da329e972::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_dd489d151d299036,visitor);pls::cs::trace_value(cs_d06132c0c6e80bc6,visitor);pls::cs::trace_value(cs_aacdf84efc9d168d,visitor);}

void cs_70c4092da329e972::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_dd489d151d299036);pls::cs::release_value(cs_d06132c0c6e80bc6);pls::cs::release_value(cs_aacdf84efc9d168d);}

void cs_init_70c4092da329e972(){static pls::cs::TypeInitState state;state.run("kairo.unity.analytics.AnalyticsTracker.AnalyticsData",[](){

});}

// M:kairo.unity.analytics.AnalyticsTracker.AnalyticsData.#ctor
pls::cs::Ref<cs_70c4092da329e972> cs_d18c126e68c3c396() { cs_init_70c4092da329e972();
{ auto cs_this = pls::cs::make_ref<cs_70c4092da329e972>(); cs_d18c126e68c3c396_init(cs_this); return cs_this; }
}

void cs_d18c126e68c3c396_init(pls::cs::Ref<cs_70c4092da329e972> cs_this) {
{

}
}

// M:kairo.unity.analytics.AnalyticsTracker.AnalyticsData.#ctor(System.String)
pls::cs::Ref<cs_70c4092da329e972> cs_626981c8ca17bde5(pls::cs::String v_url) { cs_init_70c4092da329e972();
{ auto cs_this = pls::cs::make_ref<cs_70c4092da329e972>(); cs_626981c8ca17bde5_init(cs_this,v_url); return cs_this; }
}

void cs_626981c8ca17bde5_init(pls::cs::Ref<cs_70c4092da329e972> cs_this,pls::cs::String v_url) {
{
([&]() { auto cs_target = cs_this; auto cs_value = v_url; pls::game::cs_require(cs_target)->cs_dd489d151d299036 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_d06132c0c6e80bc6 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int64_t { return cs_e285ad46e15aa69f(); }()); pls::game::cs_require(cs_target)->cs_aacdf84efc9d168d = cs_value; return cs_value; }());
}
}
}
