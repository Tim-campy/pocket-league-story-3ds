// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_0db347231f2257f9.hpp"
#include "game_generated_type_169021fb033627ed.hpp"
#include "game_generated_type_1815a6964debf82a.hpp"
#include "game_generated_type_2ffa6f51468590ea.hpp"
#include "game_generated_type_3e5b0d35ae6be8e7.hpp"
#include "game_generated_type_75707aa3f1629c85.hpp"
#include "game_generated_type_80d72c9d6f5bfcfe.hpp"
#include "game_generated_type_b08d770c239489bf.hpp"
#include "generated/portable_generated_type_1ff3292665c8e0c4.hpp"
#include "generated/portable_generated_type_5098bfda9cf65745.hpp"
#include "generated/portable_generated_type_7de6788b61a5af56.hpp"
#include "generated/portable_generated_type_e7a5499b363ef51b.hpp"
#include "generated/portable_generated_type_ea324a0bbfe717fe.hpp"
#include "generated/portable_generated_type_f3ea616d36334b95.hpp"
namespace pls::game {

void cs_3e5b0d35ae6be8e7::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_b08d770c239489bf::trace_edges(visitor);pls::cs::trace_value(cs_f1b327651f0899b5,visitor);pls::cs::trace_value(cs_c8ca8dae848e69f6,visitor);pls::cs::trace_value(cs_5e9de6f24f784276,visitor);pls::cs::trace_value(cs_36cdf92c74be85ab,visitor);pls::cs::trace_value(cs_929b31914cc9d4d1,visitor);pls::cs::trace_value(cs_d2669b7382570bf6,visitor);pls::cs::trace_value(cs_cff39f10c9c2eca7,visitor);pls::cs::trace_value(cs_5dde9bb1cba675f5,visitor);pls::cs::trace_value(cs_38f3ae5b9c217a11,visitor);pls::cs::trace_value(cs_18b907f7fd77e179,visitor);pls::cs::trace_value(cs_70bca42ebe755ebc,visitor);pls::cs::trace_value(cs_95066d7f3372b794,visitor);pls::cs::trace_value(cs_e78d2b9cd5330285,visitor);pls::cs::trace_value(cs_2521f4dfc072d880,visitor);pls::cs::trace_value(cs_1aba20d7d9aaa7eb,visitor);}

void cs_3e5b0d35ae6be8e7::release_edges(){cs_b08d770c239489bf::release_edges();pls::cs::release_value(cs_f1b327651f0899b5);pls::cs::release_value(cs_c8ca8dae848e69f6);pls::cs::release_value(cs_5e9de6f24f784276);pls::cs::release_value(cs_36cdf92c74be85ab);pls::cs::release_value(cs_929b31914cc9d4d1);pls::cs::release_value(cs_d2669b7382570bf6);pls::cs::release_value(cs_cff39f10c9c2eca7);pls::cs::release_value(cs_5dde9bb1cba675f5);pls::cs::release_value(cs_38f3ae5b9c217a11);pls::cs::release_value(cs_18b907f7fd77e179);pls::cs::release_value(cs_70bca42ebe755ebc);pls::cs::release_value(cs_95066d7f3372b794);pls::cs::release_value(cs_e78d2b9cd5330285);pls::cs::release_value(cs_2521f4dfc072d880);pls::cs::release_value(cs_1aba20d7d9aaa7eb);}

static pls::cs::Ref<cs_2ffa6f51468590ea> cs_aa7300d19ef69635_value{};

static pls::cs::Ref<cs_75707aa3f1629c85> cs_d3587b5029c65d71_value{};

void cs_init_3e5b0d35ae6be8e7(){static pls::cs::TypeInitState state;state.run("data.QuestMatchData",[](){

});}

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_aa7300d19ef69635(){cs_init_3e5b0d35ae6be8e7();return cs_aa7300d19ef69635_value;}

pls::cs::Ref<cs_75707aa3f1629c85>& cs_d3587b5029c65d71(){cs_init_3e5b0d35ae6be8e7();return cs_d3587b5029c65d71_value;}

// M:data.QuestMatchData.#ctor
pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_a056d04434609023() { cs_init_3e5b0d35ae6be8e7();
{ auto cs_this = pls::cs::make_ref<cs_3e5b0d35ae6be8e7>(); cs_a056d04434609023_init(cs_this); return cs_this; }
}

void cs_a056d04434609023_init(pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_this) {
([&]() { cs_0c4b303cde7d7a27_init(std::static_pointer_cast<cs_b08d770c239489bf>(cs_this)); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.#ctor",game);
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); cs_aa7300d19ef69635() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }()); cs_d3587b5029c65d71() = cs_value; return cs_value; }());
}
}
}

// M:data.QuestMatchData.#ctor(System.String)
pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_7b161ff63c119bd9(pls::cs::String v_src) { cs_init_3e5b0d35ae6be8e7();
{ auto cs_this = pls::cs::make_ref<cs_3e5b0d35ae6be8e7>(); cs_7b161ff63c119bd9_init(cs_this,v_src); return cs_this; }
}

void cs_7b161ff63c119bd9_init(pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_this,pls::cs::String v_src) {
([&]() { cs_0c4b303cde7d7a27_init(std::static_pointer_cast<cs_b08d770c239489bf>(cs_this)); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.#ctor(System.String)",game);
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); cs_aa7300d19ef69635() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }()); cs_d3587b5029c65d71() = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3e5b0d35ae6be8e7>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_de49accdb8a103a6(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3e5b0d35ae6be8e7>>(cs_this); pls::cs::String cs_arg0 = v_src; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_97235e10b5d74318(cs_receiver,cs_arg0); }());
}
}
}

// M:data.QuestMatchData.ChangeState(System.Int32)
void cs_5a4aaafd12bca5e1(pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_this,std::int32_t v_next_state) { cs_init_3e5b0d35ae6be8e7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.ChangeState(System.Int32)",game);
{
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e78d2b9cd5330285; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = v_next_state; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_1aba20d7d9aaa7eb = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = v_next_state; pls::game::cs_require(cs_target)->cs_e78d2b9cd5330285 = cs_value; return cs_value; }());
}
}
}
}

// M:data.QuestMatchData.Deserialize(java.io.InputStream)
void cs_20e7e655ba517213(pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_3e5b0d35ae6be8e7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.Deserialize(java.io.InputStream)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int16_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1368899db48b4fc9(cs_arg0); }());})); pls::game::cs_require(cs_target)->cs_e78d2b9cd5330285 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int16_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1368899db48b4fc9(cs_arg0); }());})); pls::game::cs_require(cs_target)->cs_2521f4dfc072d880 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_5cff189cd1a7d066(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_1aba20d7d9aaa7eb = cs_value; return cs_value; }());
std::int32_t v_num_3065 = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int16_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1368899db48b4fc9(cs_arg0); }());}));
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>::make(v_num_3065); pls::game::cs_require(cs_target)->cs_5e9de6f24f784276 = cs_value; return cs_value; }());
for (std::int32_t v_i_3144 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3144; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e9de6f24f784276; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3144; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3144 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e9de6f24f784276; }()); auto cs_index = v_i_3144; auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int16_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1368899db48b4fc9(cs_arg0); }());}));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}
}

// M:data.QuestMatchData.Init
void cs_de49accdb8a103a6(pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_this) { cs_init_3e5b0d35ae6be8e7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.Init",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_e78d2b9cd5330285 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_2521f4dfc072d880 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_1aba20d7d9aaa7eb = cs_value; return cs_value; }());
}
}
}
}

// M:data.QuestMatchData.IsExistNew
bool cs_c50d7ca1d87f3b65() { cs_init_3e5b0d35ae6be8e7();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.IsExistNew",game);
{
pls::cs::Ref<cs_2ffa6f51468590ea> v_instance_5377 = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }());
for (std::int32_t v_i_5423 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_5423; auto cs_right = (([&]() { auto cs_receiver = v_instance_5377; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2ede7cf6ebbf051e; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_5423; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_5423 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_3e5b0d35ae6be8e7>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_instance_5377; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2ede7cf6ebbf051e; }()); auto cs_index = v_i_5423; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_154b83d04671fdc3(cs_receiver); }())) {
return true;
}
}
return false;
}
}
}

// M:data.QuestMatchData.IsNew
bool cs_154b83d04671fdc3(pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_this) { cs_init_3e5b0d35ae6be8e7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.IsNew",game);
{
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1aba20d7d9aaa7eb; }())) {
return true;
}
return false;
}
}
}
}

// M:data.QuestMatchData.IsVictoryMatch
bool cs_fc3bd3f1d3984fff() { cs_init_3e5b0d35ae6be8e7();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.IsVictoryMatch",game);
{
std::int32_t v_matchInfoJoin_4903 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_d3587b5029c65d71()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4bac9bbba1448d3d(cs_receiver); }());
if (([&]() -> bool { auto cs_left = v_matchInfoJoin_4903; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left != cs_right); }())) {
return false;
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_d3587b5029c65d71(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ac2c11d2c655e0b6; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
return false;
}
pls::cs::Ref<cs_3e5b0d35ae6be8e7> v_questMatchData_5082 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_aa7300d19ef69635(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2ede7cf6ebbf051e; }()); auto cs_index = ([&]() { auto cs_receiver = cs_d3587b5029c65d71(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_21458ae50b84b853; }()); return cs_array.get_Item(cs_index); }());
if (([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = v_questMatchData_5082; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e9de6f24f784276; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
return false;
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_d3587b5029c65d71(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_104ce126d7d7af35; }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = v_questMatchData_5082; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e9de6f24f784276; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left == cs_right); }())) {
return true;
}
return false;
}
}
}

// M:data.QuestMatchData.IsVictoryQuestMatch
bool cs_1eef7ef9679480f1() { cs_init_3e5b0d35ae6be8e7();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.IsVictoryQuestMatch",game);
{
std::int32_t v_matchInfoJoin_4459 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(cs_d3587b5029c65d71()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4bac9bbba1448d3d(cs_receiver); }());
if (([&]() -> bool { auto cs_left = v_matchInfoJoin_4459; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left != cs_right); }())) {
return false;
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_d3587b5029c65d71(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ac2c11d2c655e0b6; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
return false;
}
pls::cs::Ref<cs_3e5b0d35ae6be8e7> v_questMatchData_4638 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_aa7300d19ef69635(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2ede7cf6ebbf051e; }()); auto cs_index = ([&]() { auto cs_receiver = cs_d3587b5029c65d71(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_21458ae50b84b853; }()); return cs_array.get_Item(cs_index); }());
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_d3587b5029c65d71(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_104ce126d7d7af35; }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = v_questMatchData_4638; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e9de6f24f784276; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_d3587b5029c65d71(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_58530a52dc525520; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1dc6ad81a01b35ba; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_d3587b5029c65d71(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_58530a52dc525520; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1dc6ad81a01b35ba; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return (cs_left > cs_right); }()))) {
return true;
}
return false;
}
}
}

// M:data.QuestMatchData.Load(System.String)
void cs_97235e10b5d74318(pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_this,pls::cs::String v_src) { cs_init_3e5b0d35ae6be8e7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.Load(System.String)",game);
{
std::int32_t v_num_1692 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
pls::cs::Array<pls::cs::String> v_array_1713 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_src; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0009" u"",1)); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1713; auto cs_index = ([&]() { auto cs_old = v_num_1692; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1692 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_18df8a841fecdd70 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_1713; auto cs_index = ([&]() { auto cs_old = v_num_1692; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1692 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_f1b327651f0899b5 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1713; auto cs_index = ([&]() { auto cs_old = v_num_1692; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1692 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_c8ca8dae848e69f6 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::int32_t> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1713; auto cs_index = ([&]() { auto cs_old = v_num_1692; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1692 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x002c" u"",1)); return pls::generated::cs_deba8d22dc04f33a(cs_arg0,cs_arg1); }());}); pls::game::cs_require(cs_target)->cs_5e9de6f24f784276 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1713; auto cs_index = ([&]() { auto cs_old = v_num_1692; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1692 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_36cdf92c74be85ab = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1713; auto cs_index = ([&]() { auto cs_old = v_num_1692; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1692 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return cs_8cff19a3e40ed58e(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_929b31914cc9d4d1 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1713; auto cs_index = ([&]() { auto cs_old = v_num_1692; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1692 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return cs_8cff19a3e40ed58e(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_d2669b7382570bf6 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1713; auto cs_index = ([&]() { auto cs_old = v_num_1692; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1692 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_cff39f10c9c2eca7 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1713; auto cs_index = ([&]() { auto cs_old = v_num_1692; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1692 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_5dde9bb1cba675f5 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1713; auto cs_index = ([&]() { auto cs_old = v_num_1692; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1692 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_38f3ae5b9c217a11 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1713; auto cs_index = ([&]() { auto cs_old = v_num_1692; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1692 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_18b907f7fd77e179 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1713; auto cs_index = ([&]() { auto cs_old = v_num_1692; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1692 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_70bca42ebe755ebc = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_1713; auto cs_index = ([&]() { auto cs_old = v_num_1692; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1692 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_95066d7f3372b794 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1713; auto cs_index = ([&]() { auto cs_old = v_num_1692; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1692 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_77b7447583c10f78 = cs_value; return cs_value; }());
}
}
}
}

// M:data.QuestMatchData.NewGame
void cs_3020aea10affd438(pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_this) { cs_init_3e5b0d35ae6be8e7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.NewGame",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_e78d2b9cd5330285 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_2521f4dfc072d880 = cs_value; return cs_value; }());
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_77b7447583c10f78; }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::generated::cs_0bb436a75579d50a(cs_arg0,cs_arg1); }());})) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3e5b0d35ae6be8e7>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5a4aaafd12bca5e1(cs_receiver,cs_arg0); }());
}
}
}
}
}

// M:data.QuestMatchData.RegistQuestMatch(System.Int32)
void cs_f2bced4a67604269(std::int32_t v_qmId) { cs_init_3e5b0d35ae6be8e7();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.RegistQuestMatch(System.Int32)",game);
{
pls::cs::Ref<cs_75707aa3f1629c85> v_instance_4129 = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(v_instance_4129); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_313c3fd3015ad9ce(cs_receiver,cs_arg0); }());
([&]() { auto cs_target = v_instance_4129; auto cs_value = v_qmId; pls::game::cs_require(cs_target)->cs_21458ae50b84b853 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_instance_4129; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_104ce126d7d7af35 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_instance_4129; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_ac2c11d2c655e0b6 = cs_value; return cs_value; }());
}
}
}

// M:data.QuestMatchData.RemoveNew
void cs_4e1bd93141342ec7() { cs_init_3e5b0d35ae6be8e7();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.RemoveNew",game);
{
pls::cs::Ref<cs_2ffa6f51468590ea> v_instance_5611 = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }());
for (std::int32_t v_i_5657 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_5657; auto cs_right = (([&]() { auto cs_receiver = v_instance_5611; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2ede7cf6ebbf051e; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_5657; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_5657 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_instance_5611; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2ede7cf6ebbf051e; }()); auto cs_index = v_i_5657; return cs_array.get_Item(cs_index); }()); auto cs_value = false; pls::game::cs_require(cs_target)->cs_1aba20d7d9aaa7eb = cs_value; return cs_value; }());
}
}
}
}

// M:data.QuestMatchData.Serialize(java.io.OutputStream)
void cs_4503351df0f1771f(pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_3e5b0d35ae6be8e7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.Serialize(java.io.OutputStream)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int16_t cs_arg1 = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e78d2b9cd5330285; }())); pls::generated::cs_74e8efcd697e2e61(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int16_t cs_arg1 = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2521f4dfc072d880; }())); pls::generated::cs_74e8efcd697e2e61(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; bool cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1aba20d7d9aaa7eb; }()); pls::generated::cs_7c02733ae541274e(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int16_t cs_arg1 = pls::cs::cast_integral<std::int16_t>((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e9de6f24f784276; }())).length()); pls::generated::cs_74e8efcd697e2e61(cs_arg0,cs_arg1); }());});
for (std::int32_t v_i_2776 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2776; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e9de6f24f784276; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2776; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2776 = cs_new; return cs_old; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int16_t cs_arg1 = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e9de6f24f784276; }()); auto cs_index = v_i_2776; return cs_array.get_Item(cs_index); }())); pls::generated::cs_74e8efcd697e2e61(cs_arg0,cs_arg1); }());});
}
}
}
}
}

// M:data.QuestMatchData.SetGenericData
void cs_b1766168030788ef(pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_this) { cs_init_3e5b0d35ae6be8e7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.SetGenericData",game);
{
std::int32_t v_num_3429 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (std::int32_t v_i_3450 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3450; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e9de6f24f784276; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3450; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3450 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_169021fb033627ed> v_teamData_3504 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_aa7300d19ef69635(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cdf688e3d780655b; }()); auto cs_index = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e9de6f24f784276; }()); auto cs_index = v_i_3450; return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }());
([&]() { auto cs_old = v_num_3429; auto cs_rhs = ([&]() { auto cs_receiver = v_teamData_3504; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4120c353f39753d8; }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num_3429 = cs_value; return cs_value; }());
}
float v_num2_3595 = ([&]() -> float { float cs_arg0 = static_cast<float>((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e9de6f24f784276; }())).length()); float cs_arg1 = pls::game::cs_f32(0x3f800000u); float cs_arg2 = pls::game::cs_f32(0x41200000u); float cs_arg3 = pls::game::cs_f32(0x3f800000u); float cs_arg4 = pls::game::cs_f32(0x40a00000u); bool cs_arg5 = true; return cs_85c9153b9c99cccf(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
float v_num3_3676 = ([&]() -> float { float cs_arg0 = static_cast<float>((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e9de6f24f784276; }())).length()); float cs_arg1 = pls::game::cs_f32(0x3f800000u); float cs_arg2 = pls::game::cs_f32(0x41200000u); float cs_arg3 = pls::game::cs_f32(0x3f800000u); float cs_arg4 = pls::game::cs_f32(0x40000000u); bool cs_arg5 = true; return cs_85c9153b9c99cccf(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
std::int32_t v_x_3755 = pls::cs::conv_i32((([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = v_num_3429; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e9de6f24f784276; }())).length(); return pls::cs::div_i32(cs_left,cs_right); }()))); auto cs_right = v_num2_3595; return (cs_left * cs_right); }())));
std::int32_t v_x2_3815 = pls::cs::conv_i32((([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = v_num_3429; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e9de6f24f784276; }())).length(); return pls::cs::div_i32(cs_left,cs_right); }()))); auto cs_right = v_num3_3676; return (cs_left * cs_right); }())));
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = v_x_3755; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7d0ull)); bool cs_arg5 = false; return cs_c2e72dbaa2066493(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }()); pls::game::cs_require(cs_target)->cs_38f3ae5b9c217a11 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_38f3ae5b9c217a11; }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_38f3ae5b9c217a11; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return pls::cs::mod_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return cs_2b137f19947b1086(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_38f3ae5b9c217a11 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = v_x2_3815; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x514ull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); bool cs_arg5 = true; return cs_c2e72dbaa2066493(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }()); pls::game::cs_require(cs_target)->cs_70bca42ebe755ebc = cs_value; return cs_value; }());
}
}
}
}

// M:data.QuestMatchData.SetGetTrophy(System.Int32)
void cs_16726aeca8c62ab0(pls::cs::Ref<cs_3e5b0d35ae6be8e7> cs_this,std::int32_t v_trophy) { cs_init_3e5b0d35ae6be8e7();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.SetGetTrophy(System.Int32)",game);
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2521f4dfc072d880; }()); auto cs_right = v_trophy; return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = v_trophy; pls::game::cs_require(cs_target)->cs_2521f4dfc072d880 = cs_value; return cs_value; }());
}
}
}
}
}
}
