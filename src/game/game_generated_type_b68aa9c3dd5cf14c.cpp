// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_2ffa6f51468590ea.hpp"
#include "game_generated_type_75707aa3f1629c85.hpp"
#include "game_generated_type_80d72c9d6f5bfcfe.hpp"
#include "game_generated_type_87fb4d668ea5580b.hpp"
#include "game_generated_type_a2cea92715051fa5.hpp"
#include "game_generated_type_b08d770c239489bf.hpp"
#include "game_generated_type_b68aa9c3dd5cf14c.hpp"
#include "generated/portable_generated_type_1ff3292665c8e0c4.hpp"
#include "generated/portable_generated_type_5098bfda9cf65745.hpp"
#include "generated/portable_generated_type_7de6788b61a5af56.hpp"
#include "generated/portable_generated_type_e7a5499b363ef51b.hpp"
#include "generated/portable_generated_type_ea324a0bbfe717fe.hpp"
#include "generated/portable_generated_type_f3ea616d36334b95.hpp"
namespace pls::game {

void cs_b68aa9c3dd5cf14c::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_b08d770c239489bf::trace_edges(visitor);pls::cs::trace_value(cs_8a2ad2dcf58e1c56,visitor);pls::cs::trace_value(cs_3ca58cba0998f5c4,visitor);pls::cs::trace_value(cs_ec89f9453fa3b914,visitor);pls::cs::trace_value(cs_d3536706834ee1d4,visitor);pls::cs::trace_value(cs_f0f1aa801a3544b1,visitor);pls::cs::trace_value(cs_ba17edb1588381e4,visitor);pls::cs::trace_value(cs_228c586c44f23e7b,visitor);pls::cs::trace_value(cs_c7287f705b76c7e5,visitor);pls::cs::trace_value(cs_05783202ead7db0f,visitor);pls::cs::trace_value(cs_56029a8fed17f016,visitor);pls::cs::trace_value(cs_ef2b531031dd971a,visitor);pls::cs::trace_value(cs_d71255e00ceb695b,visitor);pls::cs::trace_value(cs_0dcb60ac6f795874,visitor);pls::cs::trace_value(cs_4805c491302e7ff4,visitor);pls::cs::trace_value(cs_7fe8a54364b3ed7a,visitor);pls::cs::trace_value(cs_b70fc72b33e477f8,visitor);pls::cs::trace_value(cs_98cc6378ce66e186,visitor);}

void cs_b68aa9c3dd5cf14c::release_edges(){cs_b08d770c239489bf::release_edges();pls::cs::release_value(cs_8a2ad2dcf58e1c56);pls::cs::release_value(cs_3ca58cba0998f5c4);pls::cs::release_value(cs_ec89f9453fa3b914);pls::cs::release_value(cs_d3536706834ee1d4);pls::cs::release_value(cs_f0f1aa801a3544b1);pls::cs::release_value(cs_ba17edb1588381e4);pls::cs::release_value(cs_228c586c44f23e7b);pls::cs::release_value(cs_c7287f705b76c7e5);pls::cs::release_value(cs_05783202ead7db0f);pls::cs::release_value(cs_56029a8fed17f016);pls::cs::release_value(cs_ef2b531031dd971a);pls::cs::release_value(cs_d71255e00ceb695b);pls::cs::release_value(cs_0dcb60ac6f795874);pls::cs::release_value(cs_4805c491302e7ff4);pls::cs::release_value(cs_7fe8a54364b3ed7a);pls::cs::release_value(cs_b70fc72b33e477f8);pls::cs::release_value(cs_98cc6378ce66e186);}

static pls::cs::Ref<cs_2ffa6f51468590ea> cs_7144ce158e1834c7_value{};

static pls::cs::Ref<cs_75707aa3f1629c85> cs_e478109e0b94893f_value{};

void cs_init_b68aa9c3dd5cf14c(){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(cs_7144ce158e1834c7_value,visitor);pls::cs::trace_value(cs_e478109e0b94893f_value,visitor);});static pls::cs::TypeInitState state;state.run("data.LeagueData",[](){

});}

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_7144ce158e1834c7(){cs_init_b68aa9c3dd5cf14c();return cs_7144ce158e1834c7_value;}

pls::cs::Ref<cs_75707aa3f1629c85>& cs_e478109e0b94893f(){cs_init_b68aa9c3dd5cf14c();return cs_e478109e0b94893f_value;}

// M:data.LeagueData.#ctor
pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_06d6211b1886aef7() { cs_init_b68aa9c3dd5cf14c();
{ auto cs_this = pls::cs::make_ref<cs_b68aa9c3dd5cf14c>(); cs_06d6211b1886aef7_init(cs_this); return cs_this; }
}

void cs_06d6211b1886aef7_init(pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_this) {
([&]() { cs_0c4b303cde7d7a27_init(pls::cs::static_pointer_cast<cs_b08d770c239489bf>(cs_this)); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.LeagueData.#ctor",game);
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); cs_7144ce158e1834c7() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }()); cs_e478109e0b94893f() = cs_value; return cs_value; }());
}
}
}

// M:data.LeagueData.#ctor(System.String)
pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_170a95790dba62b8(pls::cs::String v_src) { cs_init_b68aa9c3dd5cf14c();
{ auto cs_this = pls::cs::make_ref<cs_b68aa9c3dd5cf14c>(); cs_170a95790dba62b8_init(cs_this,v_src); return cs_this; }
}

void cs_170a95790dba62b8_init(pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_this,pls::cs::String v_src) {
([&]() { cs_0c4b303cde7d7a27_init(pls::cs::static_pointer_cast<cs_b08d770c239489bf>(cs_this)); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.LeagueData.#ctor(System.String)",game);
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); cs_7144ce158e1834c7() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }()); cs_e478109e0b94893f() = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b68aa9c3dd5cf14c>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e90807f5be2f95e5(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b68aa9c3dd5cf14c>>(cs_this); pls::cs::String cs_arg0 = v_src; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5cec393ac7491d85(cs_receiver,cs_arg0); }());
}
}
}

// M:data.LeagueData.ChangeState(System.Int32)
void cs_daf67eb310d15fc9(pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_this,std::int32_t v_state) { cs_init_b68aa9c3dd5cf14c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.LeagueData.ChangeState(System.Int32)",game);
{
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4805c491302e7ff4; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = v_state; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_98cc6378ce66e186 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = v_state; pls::game::cs_require(cs_target)->cs_4805c491302e7ff4 = cs_value; return cs_value; }());
}
}
}
}

// M:data.LeagueData.Deserialize(java.io.InputStream)
void cs_e044e6df16b473c1(pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_b68aa9c3dd5cf14c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.LeagueData.Deserialize(java.io.InputStream)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int16_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1368899db48b4fc9(cs_arg0); }());})); pls::game::cs_require(cs_target)->cs_4805c491302e7ff4 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int16_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1368899db48b4fc9(cs_arg0); }());})); pls::game::cs_require(cs_target)->cs_7fe8a54364b3ed7a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int16_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1368899db48b4fc9(cs_arg0); }());})); pls::game::cs_require(cs_target)->cs_b70fc72b33e477f8 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_5cff189cd1a7d066(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_98cc6378ce66e186 = cs_value; return cs_value; }());
for (std::int32_t v_i_2866 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2866; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec89f9453fa3b914; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2866; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2866 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec89f9453fa3b914; }()); auto cs_index = v_i_2866; auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int16_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1368899db48b4fc9(cs_arg0); }());}));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
for (std::int32_t v_j_2975 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_2975; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d3536706834ee1d4; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_2975; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_2975 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d3536706834ee1d4; }()); auto cs_index = v_j_2975; auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int16_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1368899db48b4fc9(cs_arg0); }());}));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}
}

// M:data.LeagueData.Init
void cs_e90807f5be2f95e5(pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_this) { cs_init_b68aa9c3dd5cf14c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.LeagueData.Init",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_4805c491302e7ff4 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_7fe8a54364b3ed7a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_b70fc72b33e477f8 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_98cc6378ce66e186 = cs_value; return cs_value; }());
}
}
}
}

// M:data.LeagueData.IsExistNew
bool cs_46aab73583a20c93() { cs_init_b68aa9c3dd5cf14c();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.LeagueData.IsExistNew",game);
{
pls::cs::Ref<cs_2ffa6f51468590ea> v_instance_5626 = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }());
for (std::int32_t v_i_5672 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_5672; auto cs_right = (([&]() { auto cs_receiver = v_instance_5626; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f5121936b566a729; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_5672; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_5672 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_b68aa9c3dd5cf14c>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_instance_5626; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f5121936b566a729; }()); auto cs_index = v_i_5672; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_cd0bdffe5bb16ce5(cs_receiver); }())) {
return true;
}
}
return false;
}
}
}

// M:data.LeagueData.IsLastMatch
bool cs_3470e2c07bbb25d1() { cs_init_b68aa9c3dd5cf14c();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.LeagueData.IsLastMatch",game);
{
pls::cs::Ref<cs_75707aa3f1629c85> v_instance_3605 = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }());
pls::cs::Ref<cs_b68aa9c3dd5cf14c> v_leagueData_3654 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f5121936b566a729; }()); auto cs_index = ([&]() { auto cs_receiver = v_instance_3605; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_83c641954d4bb2ff; }()); return cs_array.get_Item(cs_index); }());
std::int32_t v_testedValue_3735 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(v_instance_3605); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4bac9bbba1448d3d(cs_receiver); }());
if (([&]() -> bool { auto cs_left = v_testedValue_3735; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
return false;
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_instance_3605; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7819e5eb6a303fba; }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = v_leagueData_3654; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec89f9453fa3b914; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left == cs_right); }())) {
return true;
}
return false;
}
}
}

// M:data.LeagueData.IsNew
bool cs_cd0bdffe5bb16ce5(pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_this) { cs_init_b68aa9c3dd5cf14c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.LeagueData.IsNew",game);
{
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_98cc6378ce66e186; }())) {
return true;
}
return false;
}
}
}
}

// M:data.LeagueData.IsVictoryLeague
bool cs_4e3088b29c46ff2a() { cs_init_b68aa9c3dd5cf14c();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.LeagueData.IsVictoryLeague",game);
{
std::int32_t v_testedValue_3994 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_e478109e0b94893f()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4bac9bbba1448d3d(cs_receiver); }());
if (([&]() -> bool { auto cs_left = v_testedValue_3994; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
return false;
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_e478109e0b94893f(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ac2c11d2c655e0b6; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
return false;
}
pls::cs::Array<std::int32_t> v_leagueData_4157 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_e478109e0b94893f()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e5944417941fad9a(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_leagueData_4157; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
pls::cs::Ref<cs_b68aa9c3dd5cf14c> v_leagueData2_4241 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_7144ce158e1834c7(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f5121936b566a729; }()); auto cs_index = ([&]() { auto cs_receiver = cs_e478109e0b94893f(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_83c641954d4bb2ff; }()); return cs_array.get_Item(cs_index); }());
pls::cs::Array<std::int32_t> v_leagueData3_4308 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_e478109e0b94893f()); std::int32_t cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_e478109e0b94893f(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2f122876c5c342e7; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e5944417941fad9a(cs_receiver,cs_arg0); }());
std::int32_t v_num_4382 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = v_leagueData2_4241; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec89f9453fa3b914; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_e478109e0b94893f(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7819e5eb6a303fba; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mul_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_leagueData_4157; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_leagueData3_4308; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_num_4382; return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left > cs_right); }())) {
return true;
}
if (((([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_leagueData_4157; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_leagueData3_4308; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_e478109e0b94893f(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7819e5eb6a303fba; }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = v_leagueData2_4241; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec89f9453fa3b914; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_leagueData_4157; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_leagueData3_4308; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }()); return (cs_left >= cs_right); }()))) {
return true;
}
}
return false;
}
}
}

// M:data.LeagueData.IsVictoryMatch
bool cs_0acf753c3bc58171() { cs_init_b68aa9c3dd5cf14c();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.LeagueData.IsVictoryMatch",game);
{
std::int32_t v_testedValue_4775 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_e478109e0b94893f()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4bac9bbba1448d3d(cs_receiver); }());
if (([&]() -> bool { auto cs_left = v_testedValue_4775; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
return false;
}
pls::cs::Array<std::int32_t> v_leagueData_4874 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_e478109e0b94893f()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e5944417941fad9a(cs_receiver,cs_arg0); }());
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_leagueData_4874; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_e478109e0b94893f(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ac2c11d2c655e0b6; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
pls::cs::Ref<cs_b68aa9c3dd5cf14c> v_leagueData2_4989 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_7144ce158e1834c7(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f5121936b566a729; }()); auto cs_index = ([&]() { auto cs_receiver = cs_e478109e0b94893f(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_83c641954d4bb2ff; }()); return cs_array.get_Item(cs_index); }());
pls::cs::Array<std::int32_t> v_leagueData3_5056 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_e478109e0b94893f()); std::int32_t cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_e478109e0b94893f(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2f122876c5c342e7; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e5944417941fad9a(cs_receiver,cs_arg0); }());
std::int32_t v_num_5130 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_leagueData_4874; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_leagueData3_5056; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
std::int32_t v_num2_5176 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = v_leagueData2_4989; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec89f9453fa3b914; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_e478109e0b94893f(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7819e5eb6a303fba; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mul_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = v_num_5130; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num2_5176; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left > cs_right); }())) {
return true;
}
}
return false;
}
}
}

// M:data.LeagueData.Load(System.String)
void cs_5cec393ac7491d85(pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_this,pls::cs::String v_src) { cs_init_b68aa9c3dd5cf14c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.LeagueData.Load(System.String)",game);
{
std::int32_t v_num_1187 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
pls::cs::Array<pls::cs::String> v_array_1208 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_src; pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0009" u"",1);return cs_literal;}()); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1208; auto cs_index = ([&]() { auto cs_old = v_num_1187; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1187 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_18df8a841fecdd70 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_1208; auto cs_index = ([&]() { auto cs_old = v_num_1187; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1187 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_8a2ad2dcf58e1c56 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_1208; auto cs_index = ([&]() { auto cs_old = v_num_1187; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1187 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_3ca58cba0998f5c4 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::int32_t> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1208; auto cs_index = ([&]() { auto cs_old = v_num_1187; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1187 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002c" u"",1);return cs_literal;}()); return pls::generated::cs_deba8d22dc04f33a(cs_arg0,cs_arg1); }());}); pls::game::cs_require(cs_target)->cs_ec89f9453fa3b914 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1208; auto cs_index = ([&]() { auto cs_old = v_num_1187; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1187 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return cs_8cff19a3e40ed58e(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_f0f1aa801a3544b1 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1208; auto cs_index = ([&]() { auto cs_old = v_num_1187; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1187 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return cs_8cff19a3e40ed58e(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_ba17edb1588381e4 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1208; auto cs_index = ([&]() { auto cs_old = v_num_1187; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1187 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return cs_8cff19a3e40ed58e(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_228c586c44f23e7b = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1208; auto cs_index = ([&]() { auto cs_old = v_num_1187; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1187 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_c7287f705b76c7e5 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1208; auto cs_index = ([&]() { auto cs_old = v_num_1187; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1187 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_05783202ead7db0f = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1208; auto cs_index = ([&]() { auto cs_old = v_num_1187; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1187 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_56029a8fed17f016 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1208; auto cs_index = ([&]() { auto cs_old = v_num_1187; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1187 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_ef2b531031dd971a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1208; auto cs_index = ([&]() { auto cs_old = v_num_1187; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1187 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_d71255e00ceb695b = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_1208; auto cs_index = ([&]() { auto cs_old = v_num_1187; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1187 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_0dcb60ac6f795874 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1208; auto cs_index = ([&]() { auto cs_old = v_num_1187; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1187 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_77b7447583c10f78 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_array","src/Assembly-CSharp/data/LeagueData.cs:M:data.LeagueData.Load(System.String):1899",pls::cs::Array<std::int32_t>::make((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec89f9453fa3b914; }())).length())); pls::game::cs_require(cs_target)->cs_d3536706834ee1d4 = cs_value; return cs_value; }());
for (std::int32_t v_i_1940 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1940; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec89f9453fa3b914; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1940; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1940 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d3536706834ee1d4; }()); auto cs_index = v_i_1940; auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec89f9453fa3b914; }()); auto cs_index = v_i_1940; return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}
}

// M:data.LeagueData.NewGame
void cs_ffbc52d462f16cae(pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_this) { cs_init_b68aa9c3dd5cf14c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.LeagueData.NewGame",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_4805c491302e7ff4 = cs_value; return cs_value; }());
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_77b7447583c10f78; }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::generated::cs_0bb436a75579d50a(cs_arg0,cs_arg1); }());})) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b68aa9c3dd5cf14c>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_daf67eb310d15fc9(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_b70fc72b33e477f8 = cs_value; return cs_value; }());
}
}
}
}

// M:data.LeagueData.RegistLeague(System.Int32)
void cs_a8fcac708407fd46(std::int32_t v_leagueId) { cs_init_b68aa9c3dd5cf14c();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.LeagueData.RegistLeague(System.Int32)",game);
{
pls::cs::Ref<cs_75707aa3f1629c85> v_instance_3275 = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(v_instance_3275); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_313c3fd3015ad9ce(cs_receiver,cs_arg0); }());
([&]() { auto cs_target = v_instance_3275; auto cs_value = v_leagueId; pls::game::cs_require(cs_target)->cs_83c641954d4bb2ff = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(v_instance_3275); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_efcdc77ddc27f44d(cs_receiver); }());
([&]() { auto cs_target = v_instance_3275; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_ac2c11d2c655e0b6 = cs_value; return cs_value; }());
}
}
}

// M:data.LeagueData.RemoveNew
void cs_be783291f525eef3() { cs_init_b68aa9c3dd5cf14c();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.LeagueData.RemoveNew",game);
{
pls::cs::Ref<cs_2ffa6f51468590ea> v_instance_5868 = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }());
for (std::int32_t v_i_5914 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_5914; auto cs_right = (([&]() { auto cs_receiver = v_instance_5868; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f5121936b566a729; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_5914; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_5914 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_instance_5868; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f5121936b566a729; }()); auto cs_index = v_i_5914; return cs_array.get_Item(cs_index); }()); auto cs_value = false; pls::game::cs_require(cs_target)->cs_98cc6378ce66e186 = cs_value; return cs_value; }());
}
}
}
}

// M:data.LeagueData.Serialize(java.io.OutputStream)
void cs_d5cc43a853b66354(pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_b68aa9c3dd5cf14c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.LeagueData.Serialize(java.io.OutputStream)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int16_t cs_arg1 = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4805c491302e7ff4; }())); pls::generated::cs_74e8efcd697e2e61(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int16_t cs_arg1 = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fe8a54364b3ed7a; }())); pls::generated::cs_74e8efcd697e2e61(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int16_t cs_arg1 = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b70fc72b33e477f8; }())); pls::generated::cs_74e8efcd697e2e61(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; bool cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_98cc6378ce66e186; }()); pls::generated::cs_7c02733ae541274e(cs_arg0,cs_arg1); }());});
for (std::int32_t v_i_2403 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2403; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec89f9453fa3b914; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2403; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2403 = cs_new; return cs_old; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int16_t cs_arg1 = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec89f9453fa3b914; }()); auto cs_index = v_i_2403; return cs_array.get_Item(cs_index); }())); pls::generated::cs_74e8efcd697e2e61(cs_arg0,cs_arg1); }());});
}
for (std::int32_t v_j_2515 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_2515; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d3536706834ee1d4; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_2515; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_2515 = cs_new; return cs_old; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int16_t cs_arg1 = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d3536706834ee1d4; }()); auto cs_index = v_j_2515; return cs_array.get_Item(cs_index); }())); pls::generated::cs_74e8efcd697e2e61(cs_arg0,cs_arg1); }());});
}
}
}
}
}

// M:data.LeagueData.SetGetTrophy(System.Int32)
void cs_75a6e6e4b15cc2cf(pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_this,std::int32_t v_trophy) { cs_init_b68aa9c3dd5cf14c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.LeagueData.SetGetTrophy(System.Int32)",game);
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fe8a54364b3ed7a; }()); auto cs_right = v_trophy; return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = v_trophy; pls::game::cs_require(cs_target)->cs_7fe8a54364b3ed7a = cs_value; return cs_value; }());
}
}
}
}
}

// M:data.LeagueData.SetLeagueInfoExplain(kairo.unity.ui.TextLayout)
void cs_e6e36fb46a58d054(pls::cs::Ref<cs_b68aa9c3dd5cf14c> cs_this,pls::cs::Ref<cs_87fb4d668ea5580b> v_var_out) { cs_init_b68aa9c3dd5cf14c();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.LeagueData.SetLeagueInfoExplain(kairo.unity.ui.TextLayout)",game);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(v_var_out); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_2be5ebb4744281a0(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(v_var_out); float cs_arg0 = pls::game::cs_f32(0x43420000u); float cs_arg1 = pls::game::cs_f32(0x42000000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_33bd53255618fce1(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(v_var_out); std::int32_t cs_arg0 = cs_cbf475e9eaf085b4(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_57d9a00224068c1c(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(v_var_out); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_6c80e48b0bf350ca(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(v_var_out); pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcb60ac6f795874; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e3fe9411871b8a7e(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(v_var_out); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a0d538f5ac080fc1(cs_receiver); }());
}
}
}
}
}
