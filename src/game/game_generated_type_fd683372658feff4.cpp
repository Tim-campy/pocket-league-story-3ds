// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_b489b0d33bb37bb8.hpp"
#include "game_generated_type_c87dc3d2d0f9440a.hpp"
#include "game_generated_type_fd683372658feff4.hpp"
#include "generated/portable_generated_type_1ff3292665c8e0c4.hpp"
#include "generated/portable_generated_type_582a926e9c7748a6.hpp"
#include "generated/portable_generated_type_7de6788b61a5af56.hpp"
#include "generated/portable_generated_type_cbac662a28aa40b1.hpp"
#include "generated/portable_generated_type_e7d772862db62924.hpp"
#include "generated/portable_generated_type_cbac662a28aa40b1_templates.hpp"
namespace pls::game {

void cs_fd683372658feff4::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_468796fb9827f5e6,visitor);pls::cs::trace_value(cs_7b5ebddf22953059,visitor);pls::cs::trace_value(cs_7033e8b866a8dda2,visitor);pls::cs::trace_value(cs_2f097db5779cd511,visitor);pls::cs::trace_value(cs_8f7f3ca9485bb4f8,visitor);pls::cs::trace_value(cs_de1509021f22ef65,visitor);pls::cs::trace_value(cs_de2327fcc8b4451b,visitor);}

void cs_fd683372658feff4::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_468796fb9827f5e6);pls::cs::release_value(cs_7b5ebddf22953059);pls::cs::release_value(cs_7033e8b866a8dda2);pls::cs::release_value(cs_2f097db5779cd511);pls::cs::release_value(cs_8f7f3ca9485bb4f8);pls::cs::release_value(cs_de1509021f22ef65);pls::cs::release_value(cs_de2327fcc8b4451b);}

void cs_init_fd683372658feff4(){static pls::cs::TypeInitState state;state.run("kairo.unity.system.lineup.ui.LineupData",[](){

});}

// M:kairo.unity.system.lineup.ui.LineupData.#ctor
pls::cs::Ref<cs_fd683372658feff4> cs_2d5c5c827d878352() { cs_init_fd683372658feff4();
{ auto cs_this = pls::cs::make_ref<cs_fd683372658feff4>(); cs_2d5c5c827d878352_init(cs_this); return cs_this; }
}

void cs_2d5c5c827d878352_init(pls::cs::Ref<cs_fd683372658feff4> cs_this) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupData.#ctor",kairo);
{}
}
}

// M:kairo.unity.system.lineup.ui.LineupData.GetExplain
pls::cs::String cs_0ee8c20531783d1b(pls::cs::Ref<cs_fd683372658feff4> cs_this) { cs_init_fd683372658feff4();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupData.GetExplain",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7b5ebddf22953059; }());
}
}
}
}

// M:kairo.unity.system.lineup.ui.LineupData.GetFileName
pls::cs::String cs_84f73b20077879d7(pls::cs::Ref<cs_fd683372658feff4> cs_this) { cs_init_fd683372658feff4();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupData.GetFileName",kairo);
{
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2f097db5779cd511; }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
return pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupData.cs:M:kairo.unity.system.lineup.ui.LineupData.GetFileName:1260",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupData.cs:M:kairo.unity.system.lineup.ui.LineupData.GetFileName:1260",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupData.cs:M:kairo.unity.system.lineup.ui.LineupData.GetFileName:1260",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0067" u"\x006d" u"",2);return cs_literal;}()); auto cs_right = pls::game::cs_integer_string(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_468796fb9827f5e6; }())); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2f097db5779cd511; }()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002e" u"\x0070" u"\x006e" u"\x0067" u"",4);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }()));
}
return pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupData.cs:M:kairo.unity.system.lineup.ui.LineupData.GetFileName:1308",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupData.cs:M:kairo.unity.system.lineup.ui.LineupData.GetFileName:1308",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0067" u"\x006d" u"",2);return cs_literal;}()); auto cs_right = pls::game::cs_integer_string(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_468796fb9827f5e6; }())); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002e" u"\x0070" u"\x006e" u"\x0067" u"",4);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }()));
}
}
}
}

// M:kairo.unity.system.lineup.ui.LineupData.GetImage
pls::cs::Ref<pls::kairo::Image> cs_aeee5b62db0f8f41(pls::cs::Ref<cs_fd683372658feff4> cs_this) { cs_init_fd683372658feff4();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupData.GetImage",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de2327fcc8b4451b; }());
}
}
}
}

// M:kairo.unity.system.lineup.ui.LineupData.GetPriority
std::int32_t cs_fa298d824c1e3b8d(pls::cs::Ref<cs_fd683372658feff4> cs_this) { cs_init_fd683372658feff4();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupData.GetPriority",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8f7f3ca9485bb4f8; }());
}
}
}
}

// M:kairo.unity.system.lineup.ui.LineupData.GetRatio
std::int32_t cs_e9b3c6f1fee9d739(pls::cs::Ref<cs_fd683372658feff4> cs_this) { cs_init_fd683372658feff4();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupData.GetRatio",kairo);
{
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7b5ebddf22953059; }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7033e8b866a8dda2; }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
}
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_468796fb9827f5e6; }()); auto cs_right = pls::generated::cs_efcdf5d0d7b2cdc2(); return (cs_left == cs_right); }()) && (!(pls::generated::cs_3420b9de46d631e2())))) {
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
}
pls::cs::Ref<cs_b489b0d33bb37bb8> v_instance_1588 = ([&]() -> pls::cs::Ref<cs_b489b0d33bb37bb8> { return cs_3eff1227bb0de063(); }());
bool v_flag_1632 = false;
std::int32_t v_num_1653 = std::int32_t{};
pls::cs::Array<cs_c87dc3d2d0f9440a> v_appList_1670 = ([&]() -> pls::cs::Array<cs_c87dc3d2d0f9440a> { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_instance_1588); auto cs_arg0 = true; auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_7e52a7f62521b1ee(cs_receiver,cs_arg0,cs_arg1); }());
for (std::int32_t v_i_1709 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1709; auto cs_right = (v_appList_1670).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1709; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1709 = cs_new; return cs_old; }())) {
cs_c87dc3d2d0f9440a v_recoveredApp_1746 = ([&]() { auto cs_array = v_appList_1670; auto cs_index = v_i_1709; return cs_array.get_Item(cs_index); }());
if (([&]() -> bool { auto cs_left = (v_recoveredApp_1746).cs_153fdaae746575f6; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_468796fb9827f5e6; }()); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = true; v_flag_1632 = cs_value; return cs_value; }());
}
}
if ((!(v_flag_1632))) {
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
}
for (std::int32_t v_j_1865 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); ([&]() -> bool { auto cs_left = v_j_1865; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de1509021f22ef65; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_1865; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_1865 = cs_new; return cs_old; }())) {
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de1509021f22ef65; }()); auto cs_index = v_j_1865; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::generated::cs_efcdf5d0d7b2cdc2(); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de1509021f22ef65; }()); auto cs_index = v_j_1865; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()))) {
return ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de1509021f22ef65; }()); auto cs_index = v_j_1865; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }());
}
}
([&]() { auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de1509021f22ef65; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); v_num_1653 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num_1653; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num_1653 = cs_value; return cs_value; }());
}
return v_num_1653;
}
}
}
}

// M:kairo.unity.system.lineup.ui.LineupData.GetURL
pls::cs::String cs_93bf009f197e5d4a(pls::cs::Ref<cs_fd683372658feff4> cs_this) { cs_init_fd683372658feff4();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupData.GetURL",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7033e8b866a8dda2; }());
}
}
}
}

// M:kairo.unity.system.lineup.ui.LineupData.Load(System.Int32,System.String)
void cs_fec409ca1beaaa06(pls::cs::Ref<cs_fd683372658feff4> cs_this,std::int32_t v_gameId,pls::cs::String v_src) { cs_init_fd683372658feff4();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupData.Load(System.Int32,System.String)",kairo);
{
pls::cs::Array<pls::cs::String> v_array_451 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_src; pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0040" u"",1);return cs_literal;}()); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());});
([&]() { auto cs_target = cs_this; auto cs_value = v_gameId; pls::game::cs_require(cs_target)->cs_468796fb9827f5e6 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_451; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_7b5ebddf22953059 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_451; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_7033e8b866a8dda2 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_451; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_2f097db5779cd511 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_451; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_8f7f3ca9485bb4f8 = cs_value; return cs_value; }());
pls::cs::Array<pls::cs::String> v_array2_629 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_451; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0026" u"",1);return cs_literal;}()); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { pls::cs::Array<std::int32_t> cs_arg0 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupData.cs:M:kairo.unity.system.lineup.ui.LineupData.Load(System.Int32,System.String):708",([&](){auto cs_initial_array_936=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_936.at(0)=(v_array2_629).length();cs_initial_array_936.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));return cs_initial_array_936;}())); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::int32_t>>>(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_de1509021f22ef65 = cs_value; return cs_value; }());
for (std::int32_t v_i_754 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_754; auto cs_right = (v_array2_629).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_754; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_754 = cs_new; return cs_old; }())) {
pls::cs::Array<pls::cs::String> v_array3_803 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array2_629; auto cs_index = v_i_754; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002c" u"",1);return cs_literal;}()); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());});
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de1509021f22ef65; }()); auto cs_index = v_i_754; auto cs_value = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/system/lineup/ui/LineupData.cs:M:kairo.unity.system.lineup.ui.LineupData.Load(System.Int32,System.String):862",([&](){auto cs_initial_array_937=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_937.at(0)=pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array3_803; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());});cs_initial_array_937.at(1)=pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array3_803; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());});return cs_initial_array_937;}()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}
}
}
