// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_2e79f4f38b707be7.hpp"
#include "game_generated_type_68277163e843ed70.hpp"
namespace pls::game {

void cs_init_2e79f4f38b707be7(){static pls::cs::TypeInitState state;state.run("analytics.AnalyticsTracker",[](){

});}

// M:analytics.AnalyticsTracker.DispatchPageView
void cs_ff6aeae8eb9c621a() { cs_init_2e79f4f38b707be7();
{

}
}

// M:analytics.AnalyticsTracker.TrackPageView(System.Boolean,System.String[])
void cs_9fc47ec3093254f0(bool v_packageName,pls::cs::Array<pls::cs::String> v_p) { cs_init_2e79f4f38b707be7();
{
([&]() -> void { bool cs_arg0 = v_packageName; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0055" u"\x0041" u"\x002d" u"\x0033" u"\x0035" u"\x0032" u"\x0032" u"\x0038" u"\x0038" u"\x0037" u"\x0037" u"\x002d" u"\x0032" u"",13)); pls::cs::Array<pls::cs::String> cs_arg2 = v_p; cs_2efe36383f878d36(cs_arg0,cs_arg1,cs_arg2); }());
}
}

// M:analytics.AnalyticsTracker.TrackPageViewId(System.Boolean,System.String,System.String[])
void cs_2efe36383f878d36(bool v_packageName,pls::cs::String v_id,pls::cs::Array<pls::cs::String> v_p) { cs_init_2e79f4f38b707be7();
{
pls::cs::String v_text_374 = pls::cs::String(u"");
for (std::int32_t v_i_407 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_407; auto cs_right = (v_p).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_407; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_407 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = v_i_407; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_old = v_text_374; auto cs_rhs = pls::cs::String(std::u16string(u"\x002f" u"",1)); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text_374 = cs_value; return cs_value; }());
}
([&]() { auto cs_old = v_text_374; auto cs_rhs = ([&]() { auto cs_array = v_p; auto cs_index = v_i_407; return cs_array.get_Item(cs_index); }()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text_374 = cs_value; return cs_value; }());
}
([&]() -> void { bool cs_arg0 = v_packageName; pls::cs::String cs_arg1 = v_id; auto cs_arg2 = pls::cs::Array<pls::cs::String>::make(1); cs_arg2.at(0) = v_text_374; cs_d56fc27939b907e9(cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
