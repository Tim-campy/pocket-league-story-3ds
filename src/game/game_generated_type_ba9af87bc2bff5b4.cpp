// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_169021fb033627ed.hpp"
#include "game_generated_type_1815a6964debf82a.hpp"
#include "game_generated_type_2ffa6f51468590ea.hpp"
#include "game_generated_type_75707aa3f1629c85.hpp"
#include "game_generated_type_80d72c9d6f5bfcfe.hpp"
#include "game_generated_type_8f8054b388e3f93e.hpp"
#include "game_generated_type_b08d770c239489bf.hpp"
#include "game_generated_type_ba9af87bc2bff5b4.hpp"
#include "game_generated_type_ec7bde62b3c2b35f.hpp"
#include "generated/portable_generated_type_1ff3292665c8e0c4.hpp"
#include "generated/portable_generated_type_5098bfda9cf65745.hpp"
#include "generated/portable_generated_type_51222df74ac70bab.hpp"
#include "generated/portable_generated_type_7de6788b61a5af56.hpp"
#include "generated/portable_generated_type_e7a5499b363ef51b.hpp"
#include "generated/portable_generated_type_ea324a0bbfe717fe.hpp"
#include "generated/portable_generated_type_f3ea616d36334b95.hpp"
#include "generated/portable_generated_type_f8b20a4d1d9d695f.hpp"
#include "generated/portable_generated_type_51222df74ac70bab_templates.hpp"
namespace pls::game {

void cs_ba9af87bc2bff5b4::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_b08d770c239489bf::trace_edges(visitor);pls::cs::trace_value(cs_e0082101d02f7a1e,visitor);pls::cs::trace_value(cs_a1746db03a0761a5,visitor);pls::cs::trace_value(cs_725b440d871f73d3,visitor);pls::cs::trace_value(cs_c9b2c05b7631a756,visitor);pls::cs::trace_value(cs_da6b8bb24e47c737,visitor);pls::cs::trace_value(cs_e4db1f2c4f3263ea,visitor);pls::cs::trace_value(cs_746e84f8240a6c37,visitor);pls::cs::trace_value(cs_0cec29b10881eeac,visitor);pls::cs::trace_value(cs_c9595733f1699408,visitor);pls::cs::trace_value(cs_3460609829d5d73e,visitor);}

void cs_ba9af87bc2bff5b4::release_edges(){cs_b08d770c239489bf::release_edges();pls::cs::release_value(cs_e0082101d02f7a1e);pls::cs::release_value(cs_a1746db03a0761a5);pls::cs::release_value(cs_725b440d871f73d3);pls::cs::release_value(cs_c9b2c05b7631a756);pls::cs::release_value(cs_da6b8bb24e47c737);pls::cs::release_value(cs_e4db1f2c4f3263ea);pls::cs::release_value(cs_746e84f8240a6c37);pls::cs::release_value(cs_0cec29b10881eeac);pls::cs::release_value(cs_c9595733f1699408);pls::cs::release_value(cs_3460609829d5d73e);}

static pls::cs::Ref<cs_2ffa6f51468590ea> cs_46408dee54eeea3b_value{};

static pls::cs::Ref<cs_75707aa3f1629c85> cs_547c06a2de8b7b8f_value{};

void cs_init_ba9af87bc2bff5b4(){static pls::cs::TypeInitState state;state.run("data.TradeData",[](){

});}

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_46408dee54eeea3b(){cs_init_ba9af87bc2bff5b4();return cs_46408dee54eeea3b_value;}

pls::cs::Ref<cs_75707aa3f1629c85>& cs_547c06a2de8b7b8f(){cs_init_ba9af87bc2bff5b4();return cs_547c06a2de8b7b8f_value;}

// M:data.TradeData.#ctor
pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_a791cb158e08c2da() { cs_init_ba9af87bc2bff5b4();
{ auto cs_this = pls::cs::make_ref<cs_ba9af87bc2bff5b4>(); cs_a791cb158e08c2da_init(cs_this); return cs_this; }
}

void cs_a791cb158e08c2da_init(pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_this) {
([&]() { cs_0c4b303cde7d7a27_init(std::static_pointer_cast<cs_b08d770c239489bf>(cs_this)); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TradeData.#ctor",game);
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); cs_46408dee54eeea3b() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }()); cs_547c06a2de8b7b8f() = cs_value; return cs_value; }());
}
}
}

// M:data.TradeData.#ctor(System.String)
pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_37b0bebd00841d79(pls::cs::String v_src) { cs_init_ba9af87bc2bff5b4();
{ auto cs_this = pls::cs::make_ref<cs_ba9af87bc2bff5b4>(); cs_37b0bebd00841d79_init(cs_this,v_src); return cs_this; }
}

void cs_37b0bebd00841d79_init(pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_this,pls::cs::String v_src) {
([&]() { cs_0c4b303cde7d7a27_init(std::static_pointer_cast<cs_b08d770c239489bf>(cs_this)); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TradeData.#ctor(System.String)",game);
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); cs_46408dee54eeea3b() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }()); cs_547c06a2de8b7b8f() = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ba9af87bc2bff5b4>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7c1a910cb1366647(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ba9af87bc2bff5b4>>(cs_this); pls::cs::String cs_arg0 = v_src; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1fb9f609c8294637(cs_receiver,cs_arg0); }());
}
}
}

// M:data.TradeData.ChangeState(System.Int32)
void cs_58bab8057b32b1a5(pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_this,std::int32_t v_state) { cs_init_ba9af87bc2bff5b4();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TradeData.ChangeState(System.Int32)",game);
{
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0cec29b10881eeac; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = v_state; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_3460609829d5d73e = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = v_state; pls::game::cs_require(cs_target)->cs_0cec29b10881eeac = cs_value; return cs_value; }());
}
}
}
}

// M:data.TradeData.Deserialize(java.io.InputStream)
void cs_b3e612b2e80fb56f(pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_ba9af87bc2bff5b4();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TradeData.Deserialize(java.io.InputStream)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int16_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1368899db48b4fc9(cs_arg0); }());})); pls::game::cs_require(cs_target)->cs_0cec29b10881eeac = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int16_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1368899db48b4fc9(cs_arg0); }());})); pls::game::cs_require(cs_target)->cs_c9595733f1699408 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_5cff189cd1a7d066(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_3460609829d5d73e = cs_value; return cs_value; }());
}
}
}
}

// M:data.TradeData.GetSuccessRate
std::int32_t cs_92aa0a93356acf13(pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_this) { cs_init_ba9af87bc2bff5b4();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TradeData.GetSuccessRate",game);
{
pls::cs::Ref<cs_169021fb033627ed> v_teamData_2190{};
std::int32_t v_warPotential__2241{};
std::int32_t v_fanEvaToCommonValue_2288{};
std::int32_t v_num_2355{};
std::int32_t v_num2_2452{};
std::int32_t v_num3_2484{};
{
v_teamData_2190 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cdf688e3d780655b; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
v_warPotential__2241 = ([&]() { auto cs_receiver = v_teamData_2190; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4120c353f39753d8; }());
v_fanEvaToCommonValue_2288 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_9b0e244d4c2d3746(cs_arg0); }());
v_num_2355 = ([&]() -> std::int32_t { auto cs_left = pls::cs::conv_i32((([&]() -> float { auto cs_left = (([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = pls::game::cs_f32(0x3e4ccccdu); auto cs_right = static_cast<float>(v_warPotential__2241); return (cs_left * cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = pls::game::cs_f32(0x3f4ccccdu); auto cs_right = static_cast<float>(v_fanEvaToCommonValue_2288); return (cs_left * cs_right); }()); return (cs_left + cs_right); }())); auto cs_right = pls::game::cs_f32(0x3f800000u); return (cs_left / cs_right); }()))); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return pls::cs::div_i32(cs_left,cs_right); }());
v_num2_2452 = ([&]() -> std::int32_t { auto cs_left = v_num_2355; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e0082101d02f7a1e; }()); return pls::cs::sub_i32(cs_left,cs_right); }());
v_num3_2484 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if (([&]() -> bool { auto cs_left = v_num2_2452; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }())) {
{
([&]() { auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = v_num2_2452; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5full)); bool cs_arg5 = true; return cs_c2e72dbaa2066493(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }()); v_num3_2484 = cs_value; return cs_value; }());
goto cs_label_resultExit;
}
}
if (([&]() -> bool { auto cs_left = v_num2_2452; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffecull)); return (cs_left >= cs_right); }())) {
{
([&]() { auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = v_num2_2452; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffecull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull)); bool cs_arg5 = true; return cs_c2e72dbaa2066493(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }()); v_num3_2484 = cs_value; return cs_value; }());
goto cs_label_resultExit;
}
}
{
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); v_num3_2484 = cs_value; return cs_value; }());
}
cs_label_resultExit: ;
return v_num3_2484;
}
}
}
}
}

// M:data.TradeData.Init
void cs_7c1a910cb1366647(pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_this) { cs_init_ba9af87bc2bff5b4();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TradeData.Init",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_0cec29b10881eeac = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_c9595733f1699408 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_3460609829d5d73e = cs_value; return cs_value; }());
}
}
}
}

// M:data.TradeData.IsExistNew
bool cs_b83cafd1cfaf1f72() { cs_init_ba9af87bc2bff5b4();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TradeData.IsExistNew",game);
{
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_df4d36551e4e7018(cs_receiver,cs_arg0); }())))) {
return false;
}
pls::cs::Ref<cs_2ffa6f51468590ea> v_instance_2885 = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }());
for (std::int32_t v_i_2931 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2931; auto cs_right = (([&]() { auto cs_receiver = v_instance_2885; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8f07bdb5c47c49cc; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2931; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2931 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_ba9af87bc2bff5b4>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_instance_2885; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8f07bdb5c47c49cc; }()); auto cs_index = v_i_2931; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2dbfddbab8163cdc(cs_receiver); }())) {
return true;
}
}
return false;
}
}
}

// M:data.TradeData.IsNew
bool cs_2dbfddbab8163cdc(pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_this) { cs_init_ba9af87bc2bff5b4();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TradeData.IsNew",game);
{
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3460609829d5d73e; }())) {
return true;
}
return false;
}
}
}
}

// M:data.TradeData.IsPlayerInMember
bool cs_032b60c299bc2f68(pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_this) { cs_init_ba9af87bc2bff5b4();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TradeData.IsPlayerInMember",game);
{
pls::cs::Ref<cs_8f8054b388e3f93e> v_elem_3410 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_46408dee54eeea3b(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ab1e9b1101610757; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c9b2c05b7631a756; }()); return cs_array.get_Item(cs_index); }());
std::int32_t v_num_3454 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fccc65aa1d91c84; }())); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_elem_3410); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_3a643b1c499c91f2(cs_receiver,cs_arg0); }());});
if (([&]() -> bool { auto cs_left = v_num_3454; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
return true;
}
return false;
}
}
}
}

// M:data.TradeData.Load(System.String)
void cs_1fb9f609c8294637(pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_this,pls::cs::String v_src) { cs_init_ba9af87bc2bff5b4();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TradeData.Load(System.String)",game);
{
std::int32_t v_num_964 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
pls::cs::Array<pls::cs::String> v_array_985 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_src; pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0009" u"",1);return cs_literal;}()); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_985; auto cs_index = ([&]() { auto cs_old = v_num_964; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_964 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_18df8a841fecdd70 = cs_value; return cs_value; }());
pls::cs::String v_text_1074 = ([&]() { auto cs_array = v_array_985; auto cs_index = ([&]() { auto cs_old = v_num_964; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_964 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_985; auto cs_index = ([&]() { auto cs_old = v_num_964; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_964 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_e0082101d02f7a1e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_985; auto cs_index = ([&]() { auto cs_old = v_num_964; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_964 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_a1746db03a0761a5 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_985; auto cs_index = ([&]() { auto cs_old = v_num_964; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_964 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_725b440d871f73d3 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_985; auto cs_index = ([&]() { auto cs_old = v_num_964; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_964 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_c9b2c05b7631a756 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_985; auto cs_index = ([&]() { auto cs_old = v_num_964; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_964 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return cs_8cff19a3e40ed58e(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_da6b8bb24e47c737 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_985; auto cs_index = ([&]() { auto cs_old = v_num_964; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_964 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_e4db1f2c4f3263ea = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_985; auto cs_index = ([&]() { auto cs_old = v_num_964; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_964 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_746e84f8240a6c37 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_985; auto cs_index = ([&]() { auto cs_old = v_num_964; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_964 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_77b7447583c10f78 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a1746db03a0761a5; }()); pls::game::cs_require(cs_target)->cs_c9595733f1699408 = cs_value; return cs_value; }());
}
}
}
}

// M:data.TradeData.NewGame
void cs_4b4f497baae8e8aa(pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_this) { cs_init_ba9af87bc2bff5b4();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TradeData.NewGame",game);
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0cec29b10881eeac; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {

} else {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_0cec29b10881eeac = cs_value; return cs_value; }());
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_77b7447583c10f78; }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::generated::cs_0bb436a75579d50a(cs_arg0,cs_arg1); }());})) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::game::cs_require(cs_target)->cs_0cec29b10881eeac = cs_value; return cs_value; }());
}
}
}
}
}
}

// M:data.TradeData.RemoveNew
void cs_902e7e64c237fe27() { cs_init_ba9af87bc2bff5b4();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TradeData.RemoveNew",game);
{
pls::cs::Ref<cs_2ffa6f51468590ea> v_instance_3125 = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }());
for (std::int32_t v_i_3171 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3171; auto cs_right = (([&]() { auto cs_receiver = v_instance_3125; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8f07bdb5c47c49cc; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3171; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3171 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_instance_3125; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8f07bdb5c47c49cc; }()); auto cs_index = v_i_3171; return cs_array.get_Item(cs_index); }()); auto cs_value = false; pls::game::cs_require(cs_target)->cs_3460609829d5d73e = cs_value; return cs_value; }());
}
}
}
}

// M:data.TradeData.Serialize(java.io.OutputStream)
void cs_feaa7acb9d6c4e25(pls::cs::Ref<cs_ba9af87bc2bff5b4> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_ba9af87bc2bff5b4();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TradeData.Serialize(java.io.OutputStream)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int16_t cs_arg1 = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0cec29b10881eeac; }())); pls::generated::cs_74e8efcd697e2e61(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int16_t cs_arg1 = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c9595733f1699408; }())); pls::generated::cs_74e8efcd697e2e61(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; bool cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3460609829d5d73e; }()); pls::generated::cs_7c02733ae541274e(cs_arg0,cs_arg1); }());});
}
}
}
}
}
