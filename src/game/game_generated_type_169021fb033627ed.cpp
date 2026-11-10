// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_169021fb033627ed.hpp"
#include "game_generated_type_1815a6964debf82a.hpp"
#include "game_generated_type_2ffa6f51468590ea.hpp"
#include "game_generated_type_75707aa3f1629c85.hpp"
#include "game_generated_type_8f8054b388e3f93e.hpp"
#include "game_generated_type_b08d770c239489bf.hpp"
#include "game_generated_type_b68aa9c3dd5cf14c.hpp"
#include "generated/portable_generated_type_1ff3292665c8e0c4.hpp"
#include "generated/portable_generated_type_5098bfda9cf65745.hpp"
#include "generated/portable_generated_type_51222df74ac70bab.hpp"
#include "generated/portable_generated_type_72d9658ed61145d6.hpp"
#include "generated/portable_generated_type_7de6788b61a5af56.hpp"
#include "generated/portable_generated_type_e7a5499b363ef51b.hpp"
#include "generated/portable_generated_type_ea324a0bbfe717fe.hpp"
#include "generated/portable_generated_type_f8b20a4d1d9d695f.hpp"
#include "generated/portable_generated_type_51222df74ac70bab_templates.hpp"
namespace pls::game {

void cs_169021fb033627ed::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_b08d770c239489bf::trace_edges(visitor);pls::cs::trace_value(cs_7aa6f2bebc901340,visitor);pls::cs::trace_value(cs_e5cc068ac3534a8a,visitor);pls::cs::trace_value(cs_27142d60f3e22cb6,visitor);pls::cs::trace_value(cs_873e4779b0d7795e,visitor);pls::cs::trace_value(cs_034010affce9cfb9,visitor);pls::cs::trace_value(cs_1574974c1857cd04,visitor);pls::cs::trace_value(cs_1568f168ecdeb107,visitor);pls::cs::trace_value(cs_1b1ce6676390e3c6,visitor);pls::cs::trace_value(cs_4120c353f39753d8,visitor);pls::cs::trace_value(cs_d502e9c14d15584d,visitor);pls::cs::trace_value(cs_c1a3d1d998bc54ed,visitor);pls::cs::trace_value(cs_ea0fbe8c5a94a9a4,visitor);pls::cs::trace_value(cs_cfb5eba4ca24814d,visitor);pls::cs::trace_value(cs_67eaa5d1fcf2cc61,visitor);pls::cs::trace_value(cs_00df58f41a3c9037,visitor);pls::cs::trace_value(cs_d39eda07e08589e3,visitor);pls::cs::trace_value(cs_6447513a93ba11e1,visitor);pls::cs::trace_value(cs_c04f802dc97b0211,visitor);pls::cs::trace_value(cs_f8584e3ce1eada9e,visitor);pls::cs::trace_value(cs_2caf9b1ae732acaf,visitor);pls::cs::trace_value(cs_7263bb08df0836b2,visitor);pls::cs::trace_value(cs_442de9da7557944d,visitor);}

void cs_169021fb033627ed::release_edges(){cs_b08d770c239489bf::release_edges();pls::cs::release_value(cs_7aa6f2bebc901340);pls::cs::release_value(cs_e5cc068ac3534a8a);pls::cs::release_value(cs_27142d60f3e22cb6);pls::cs::release_value(cs_873e4779b0d7795e);pls::cs::release_value(cs_034010affce9cfb9);pls::cs::release_value(cs_1574974c1857cd04);pls::cs::release_value(cs_1568f168ecdeb107);pls::cs::release_value(cs_1b1ce6676390e3c6);pls::cs::release_value(cs_4120c353f39753d8);pls::cs::release_value(cs_d502e9c14d15584d);pls::cs::release_value(cs_c1a3d1d998bc54ed);pls::cs::release_value(cs_ea0fbe8c5a94a9a4);pls::cs::release_value(cs_cfb5eba4ca24814d);pls::cs::release_value(cs_67eaa5d1fcf2cc61);pls::cs::release_value(cs_00df58f41a3c9037);pls::cs::release_value(cs_d39eda07e08589e3);pls::cs::release_value(cs_6447513a93ba11e1);pls::cs::release_value(cs_c04f802dc97b0211);pls::cs::release_value(cs_f8584e3ce1eada9e);pls::cs::release_value(cs_2caf9b1ae732acaf);pls::cs::release_value(cs_7263bb08df0836b2);pls::cs::release_value(cs_442de9da7557944d);}

static pls::cs::Ref<cs_2ffa6f51468590ea> cs_992ff561c0e6aaeb_value{};

void cs_init_169021fb033627ed(){static pls::cs::TypeInitState state;state.run("data.TeamData",[](){

});}

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_992ff561c0e6aaeb(){cs_init_169021fb033627ed();return cs_992ff561c0e6aaeb_value;}

// M:data.TeamData.#ctor
pls::cs::Ref<cs_169021fb033627ed> cs_db8a7eae181558d7() { cs_init_169021fb033627ed();
{ auto cs_this = pls::cs::make_ref<cs_169021fb033627ed>(); cs_db8a7eae181558d7_init(cs_this); return cs_this; }
}

void cs_db8a7eae181558d7_init(pls::cs::Ref<cs_169021fb033627ed> cs_this) {
([&]() { cs_0c4b303cde7d7a27_init(std::static_pointer_cast<cs_b08d770c239489bf>(cs_this)); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TeamData.#ctor",game);
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); cs_992ff561c0e6aaeb() = cs_value; return cs_value; }());
}
}
}

// M:data.TeamData.#ctor(System.String)
pls::cs::Ref<cs_169021fb033627ed> cs_d3708c7ee2884e7d(pls::cs::String v_src) { cs_init_169021fb033627ed();
{ auto cs_this = pls::cs::make_ref<cs_169021fb033627ed>(); cs_d3708c7ee2884e7d_init(cs_this,v_src); return cs_this; }
}

void cs_d3708c7ee2884e7d_init(pls::cs::Ref<cs_169021fb033627ed> cs_this,pls::cs::String v_src) {
([&]() { cs_0c4b303cde7d7a27_init(std::static_pointer_cast<cs_b08d770c239489bf>(cs_this)); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TeamData.#ctor(System.String)",game);
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); cs_992ff561c0e6aaeb() = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_169021fb033627ed>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_32b9375081dbeb02(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_169021fb033627ed>>(cs_this); pls::cs::String cs_arg0 = v_src; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_da3f05135aea10c6(cs_receiver,cs_arg0); }());
}
}
}

// M:data.TeamData.AddTeamEva(System.Int32)
void cs_28b3e7b1b8b25387(pls::cs::Ref<cs_169021fb033627ed> cs_this,std::int32_t v_addEva) { cs_init_169021fb033627ed();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TeamData.AddTeamEva(System.Int32)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4120c353f39753d8; }()); auto cs_right = v_addEva; return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); return cs_c821e1f1992a1342(cs_arg0,cs_arg1,cs_arg2); }()); pls::game::cs_require(cs_target)->cs_4120c353f39753d8 = cs_value; return cs_value; }());
pls::cs::Ref<cs_75707aa3f1629c85> v_instance_5367 = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }());
std::int32_t v_rankIndex_5409 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(v_instance_5367); std::int32_t cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4120c353f39753d8; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_bce3118a67c25ebe(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = v_rankIndex_5409; auto cs_right = ([&]() { auto cs_receiver = v_instance_5367; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2dc5ac072cd26231; }()); return (cs_left > cs_right); }())) {
([&]() { auto cs_target = v_instance_5367; auto cs_value = v_rankIndex_5409; pls::game::cs_require(cs_target)->cs_2dc5ac072cd26231 = cs_value; return cs_value; }());
}
}
}
}
}

// M:data.TeamData.Deserialize(java.io.InputStream)
void cs_8758aeee74c0e7c3(pls::cs::Ref<cs_169021fb033627ed> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_169021fb033627ed();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TeamData.Deserialize(java.io.InputStream)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_7aa6f2bebc901340 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_e5cc068ac3534a8a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int16_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1368899db48b4fc9(cs_arg0); }());})); pls::game::cs_require(cs_target)->cs_1574974c1857cd04 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int16_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1368899db48b4fc9(cs_arg0); }());})); pls::game::cs_require(cs_target)->cs_4120c353f39753d8 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int16_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1368899db48b4fc9(cs_arg0); }());})); pls::game::cs_require(cs_target)->cs_d39eda07e08589e3 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int16_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1368899db48b4fc9(cs_arg0); }());})); pls::game::cs_require(cs_target)->cs_6447513a93ba11e1 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int16_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1368899db48b4fc9(cs_arg0); }());})); pls::game::cs_require(cs_target)->cs_c04f802dc97b0211 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_77b7447583c10f78 = cs_value; return cs_value; }());
for (std::int32_t v_i_4823 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_4823; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f8584e3ce1eada9e; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_4823; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_4823 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f8584e3ce1eada9e; }()); auto cs_index = v_i_4823; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
for (std::int32_t v_j_4933 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_4933; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7263bb08df0836b2; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_4933; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_4933 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7263bb08df0836b2; }()); auto cs_index = v_j_4933; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}
}

// M:data.TeamData.GetHomeStadiumName
pls::cs::String cs_c30fd7846a0f0ca1(pls::cs::Ref<cs_169021fb033627ed> cs_this) { cs_init_169021fb033627ed();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TeamData.GetHomeStadiumName",game);
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_18df8a841fecdd70; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }());})) {
return pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/data/TeamData.cs:M:data.TeamData.GetHomeStadiumName:5141",([&]() { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5cc068ac3534a8a; }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_034010affce9cfb9; }()); return pls::cs::String::concat(cs_left,cs_right); }()));
}
return pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/data/TeamData.cs:M:data.TeamData.GetHomeStadiumName:5182",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/data/TeamData.cs:M:data.TeamData.GetHomeStadiumName:5182",([&]() { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5cc068ac3534a8a; }()); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0020" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_034010affce9cfb9; }()); return pls::cs::String::concat(cs_left,cs_right); }()));
}
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_034010affce9cfb9; }());
}
}
}
}

// M:data.TeamData.Init
void cs_32b9375081dbeb02(pls::cs::Ref<cs_169021fb033627ed> cs_this) { cs_init_169021fb033627ed();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TeamData.Init",game);
{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7263bb08df0836b2; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left != cs_right; }())) {
for (std::int32_t v_i_1220 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1220; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7263bb08df0836b2; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1220; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1220 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7263bb08df0836b2; }()); auto cs_index = v_i_1220; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_442de9da7557944d; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left != cs_right; }())) {
for (std::int32_t v_j_1345 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_1345; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_442de9da7557944d; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_1345; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_1345 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_442de9da7557944d; }()); auto cs_index = v_j_1345; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}
}
}

// M:data.TeamData.Load(System.String)
void cs_da3f05135aea10c6(pls::cs::Ref<cs_169021fb033627ed> cs_this,pls::cs::String v_src) { cs_init_169021fb033627ed();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TeamData.Load(System.String)",game);
{
std::int32_t v_num_1476 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
pls::cs::Array<pls::cs::String> v_array_1497 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_src; pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0009" u"",1);return cs_literal;}()); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1497; auto cs_index = ([&]() { auto cs_old = v_num_1476; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1476 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_18df8a841fecdd70 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_1497; auto cs_index = ([&]() { auto cs_old = v_num_1476; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1476 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_7aa6f2bebc901340 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_1497; auto cs_index = ([&]() { auto cs_old = v_num_1476; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1476 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_e5cc068ac3534a8a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1497; auto cs_index = ([&]() { auto cs_old = v_num_1476; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1476 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_27142d60f3e22cb6 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1497; auto cs_index = ([&]() { auto cs_old = v_num_1476; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1476 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_873e4779b0d7795e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_1497; auto cs_index = ([&]() { auto cs_old = v_num_1476; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1476 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_034010affce9cfb9 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1497; auto cs_index = ([&]() { auto cs_old = v_num_1476; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1476 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_1574974c1857cd04 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1497; auto cs_index = ([&]() { auto cs_old = v_num_1476; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1476 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_1568f168ecdeb107 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1497; auto cs_index = ([&]() { auto cs_old = v_num_1476; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1476 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_1b1ce6676390e3c6 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1497; auto cs_index = ([&]() { auto cs_old = v_num_1476; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1476 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_4120c353f39753d8 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::int32_t> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1497; auto cs_index = ([&]() { auto cs_old = v_num_1476; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1476 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0026" u"",1);return cs_literal;}()); return pls::generated::cs_deba8d22dc04f33a(cs_arg0,cs_arg1); }());}); pls::game::cs_require(cs_target)->cs_d502e9c14d15584d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1497; auto cs_index = ([&]() { auto cs_old = v_num_1476; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1476 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_ea0fbe8c5a94a9a4 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1497; auto cs_index = ([&]() { auto cs_old = v_num_1476; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1476 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_cfb5eba4ca24814d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1497; auto cs_index = ([&]() { auto cs_old = v_num_1476; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1476 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_67eaa5d1fcf2cc61 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1497; auto cs_index = ([&]() { auto cs_old = v_num_1476; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1476 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_00df58f41a3c9037 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1497; auto cs_index = ([&]() { auto cs_old = v_num_1476; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1476 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_d39eda07e08589e3 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1497; auto cs_index = ([&]() { auto cs_old = v_num_1476; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1476 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_6447513a93ba11e1 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1497; auto cs_index = ([&]() { auto cs_old = v_num_1476; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1476 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_c04f802dc97b0211 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_array","src/Assembly-CSharp/data/TeamData.cs:M:data.TeamData.Load(System.String):2381",pls::cs::Array<pls::cs::String>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)))); pls::game::cs_require(cs_target)->cs_f8584e3ce1eada9e = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f8584e3ce1eada9e; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() { auto cs_array = v_array_1497; auto cs_index = ([&]() { auto cs_old = v_num_1476; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1476 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f8584e3ce1eada9e; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() { auto cs_array = v_array_1497; auto cs_index = ([&]() { auto cs_old = v_num_1476; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1476 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::int32_t> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_1497; auto cs_index = ([&]() { auto cs_old = v_num_1476; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_1476 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0026" u"",1);return cs_literal;}()); return pls::generated::cs_deba8d22dc04f33a(cs_arg0,cs_arg1); }());}); pls::game::cs_require(cs_target)->cs_2caf9b1ae732acaf = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_169021fb033627ed>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5850db6e1f3dd4fe(cs_receiver); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_array","src/Assembly-CSharp/data/TeamData.cs:M:data.TeamData.Load(System.String):2570",pls::cs::Array<std::int32_t>::make((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f8584e3ce1eada9e; }())).length())); pls::game::cs_require(cs_target)->cs_7263bb08df0836b2 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_array","src/Assembly-CSharp/data/TeamData.cs:M:data.TeamData.Load(System.String):2619",pls::cs::Array<std::int32_t>::make((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f8584e3ce1eada9e; }())).length())); pls::game::cs_require(cs_target)->cs_442de9da7557944d = cs_value; return cs_value; }());
std::int32_t v_num2_2655 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (std::int32_t v_i_2677 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2677; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f8584e3ce1eada9e; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2677; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2677 = cs_new; return cs_old; }())) {
if ((!(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f8584e3ce1eada9e; }()); auto cs_index = v_i_2677; return cs_array.get_Item(cs_index); }()); auto cs_arg1 = pls::cs::String(u""); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }());})))) {
([&]() { auto cs_old = v_num2_2655; auto cs_new = pls::cs::add_i32(cs_old,1); v_num2_2655 = cs_new; return cs_old; }());
}
}
if ((([&]() -> bool { auto cs_left = v_num2_2655; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_442de9da7557944d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_442de9da7557944d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_442de9da7557944d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else if ((([&]() -> bool { auto cs_left = v_num2_2655; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_442de9da7557944d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x50ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_442de9da7557944d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_442de9da7557944d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); return pls::cs::add_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}
}

// M:data.TeamData.NewGame
void cs_3e629bca006b1a29(pls::cs::Ref<cs_169021fb033627ed> cs_this) { cs_init_169021fb033627ed();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TeamData.NewGame",game);
{

}
}
}
}

// M:data.TeamData.Serialize(java.io.OutputStream)
void cs_dbc8b1e682acfdab(pls::cs::Ref<cs_169021fb033627ed> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_169021fb033627ed();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TeamData.Serialize(java.io.OutputStream)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::String cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7aa6f2bebc901340; }()); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::String cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5cc068ac3534a8a; }()); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int16_t cs_arg1 = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1574974c1857cd04; }())); pls::generated::cs_74e8efcd697e2e61(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int16_t cs_arg1 = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4120c353f39753d8; }())); pls::generated::cs_74e8efcd697e2e61(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int16_t cs_arg1 = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d39eda07e08589e3; }())); pls::generated::cs_74e8efcd697e2e61(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int16_t cs_arg1 = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6447513a93ba11e1; }())); pls::generated::cs_74e8efcd697e2e61(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int16_t cs_arg1 = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c04f802dc97b0211; }())); pls::generated::cs_74e8efcd697e2e61(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_77b7447583c10f78; }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
for (std::int32_t v_i_4210 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_4210; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f8584e3ce1eada9e; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_4210; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_4210 = cs_new; return cs_old; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::String cs_arg1 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f8584e3ce1eada9e; }()); auto cs_index = v_i_4210; return cs_array.get_Item(cs_index); }()); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());});
}
for (std::int32_t v_j_4316 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_4316; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7263bb08df0836b2; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_4316; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_4316 = cs_new; return cs_old; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7263bb08df0836b2; }()); auto cs_index = v_j_4316; return cs_array.get_Item(cs_index); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
}
}
}
}
}

// M:data.TeamData.SetScore(System.Int32,System.Boolean)
void cs_41ff22a9db46ad0a(pls::cs::Ref<cs_169021fb033627ed> cs_this,std::int32_t v_getScore,bool v_isUserTeam) { cs_init_169021fb033627ed();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TeamData.SetScore(System.Int32,System.Boolean)",game);
{
pls::cs::Ref<cs_75707aa3f1629c85> v_instance_3427 = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }());
if (v_isUserTeam) {

} else {
for (std::int32_t v_i_3505 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3505; auto cs_right = v_getScore; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3505; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3505 = cs_new; return cs_old; }())) {
std::int32_t v_num_3544 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num2_3561 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); return cs_fd17a5b5e4e50b65(cs_arg0); }());
for (std::int32_t v_j_3603 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_3603; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_442de9da7557944d; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_3603; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_3603 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = v_num2_3561; auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_442de9da7557944d; }()); auto cs_index = v_j_3603; return cs_array.get_Item(cs_index); }()); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = v_j_3603; v_num_3544 = cs_value; return cs_value; }());
break;
}
}
([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7263bb08df0836b2; }()); auto cs_index = v_num_3544; auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
}
}
}
}
}
}

// M:data.TeamData.SetScoreRanking(data.LeagueData,java.util.Vector,java.util.Vector)
void cs_59664e8fb47e57ec(pls::cs::Ref<cs_b68aa9c3dd5cf14c> v_league_data,pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_out_ary1,pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_out_ary2) { cs_init_169021fb033627ed();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TeamData.SetScoreRanking(data.LeagueData,java.util.Vector,java.util.Vector)",game);
{
pls::cs::Ref<cs_75707aa3f1629c85> v_instance_5666 = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }());
for (std::int32_t v_i_5713 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_5713; auto cs_right = (([&]() { auto cs_receiver = v_league_data; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec89f9453fa3b914; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_5713; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_5713 = cs_new; return cs_old; }())) {
std::int32_t v_num_5774 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_league_data; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec89f9453fa3b914; }()); auto cs_index = v_i_5713; return cs_array.get_Item(cs_index); }());
if (([&]() -> bool { auto cs_left = v_num_5774; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
continue;
}
pls::cs::Ref<cs_169021fb033627ed> v_teamData_5866 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_992ff561c0e6aaeb(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cdf688e3d780655b; }()); auto cs_index = v_num_5774; return cs_array.get_Item(cs_index); }());
for (std::int32_t v_j_5910 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_5910; auto cs_right = (([&]() { auto cs_receiver = v_teamData_5866; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7263bb08df0836b2; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_5910; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_5910 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_teamData_5866; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7263bb08df0836b2; }()); auto cs_index = v_j_5910; return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_out_ary1); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_teamData_5866; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f8584e3ce1eada9e; }()); auto cs_index = v_j_5910; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_out_ary2); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(pls::source_allocations::completed("new_array","src/Assembly-CSharp/data/TeamData.cs:M:data.TeamData.SetScoreRanking(data.LeagueData,java.util.Vector,java.util.Vector):6082",([&](){auto cs_initial_array_257=pls::cs::Array<std::int32_t>::make(3);cs_initial_array_257.at(0)=([&]() { auto cs_array = ([&]() { auto cs_receiver = v_teamData_5866; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7263bb08df0836b2; }()); auto cs_index = v_j_5910; return cs_array.get_Item(cs_index); }());cs_initial_array_257.at(1)=v_num_5774;cs_initial_array_257.at(2)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));return cs_initial_array_257;}()))); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());});
}
}
}
for (std::int32_t v_k_6193 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_6193; auto cs_right = ([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_out_ary2); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_6193; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_6193 = cs_new; return cs_old; }())) {
for (std::int32_t v_num2_6248 = ([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_out_ary2); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num2_6248; auto cs_right = v_k_6193; return (cs_left > cs_right); }()); ([&]() { auto cs_old = v_num2_6248; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num2_6248 = cs_new; return cs_old; }())) {
pls::cs::Array<std::int32_t> v_array_6311 = pls::cs::unbox<pls::cs::Array<std::int32_t>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_out_ary2); std::int32_t cs_arg0 = v_k_6193; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}));
pls::cs::Array<std::int32_t> v_array2_6360 = pls::cs::unbox<pls::cs::Array<std::int32_t>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_out_ary2); std::int32_t cs_arg0 = v_num2_6248; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}));
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array2_6360; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array_6311; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return (cs_left > cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_out_ary2); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_array2_6360); std::int32_t cs_arg1 = v_k_6193; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_221133265c339075(cs_receiver,cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_out_ary2); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_array_6311); std::int32_t cs_arg1 = v_num2_6248; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_221133265c339075(cs_receiver,cs_arg0,cs_arg1); }());});
pls::cs::String v_obj_6535 = pls::cs::unbox<pls::cs::String>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_out_ary1); std::int32_t cs_arg0 = v_k_6193; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}));
pls::cs::String v_obj2_6585 = pls::cs::unbox<pls::cs::String>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_out_ary1); std::int32_t cs_arg0 = v_num2_6248; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}));
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_out_ary1); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_obj2_6585); std::int32_t cs_arg1 = v_k_6193; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_221133265c339075(cs_receiver,cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_out_ary1); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_obj_6535); std::int32_t cs_arg1 = v_num2_6248; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_221133265c339075(cs_receiver,cs_arg0,cs_arg1); }());});
}
}
}
for (std::int32_t v_l_6734 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_6734; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = v_instance_5666; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fccc65aa1d91c84; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_6734; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_6734 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_8f8054b388e3f93e> v_playerData_6803 = pls::cs::unbox<pls::cs::Ref<cs_8f8054b388e3f93e>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = v_instance_5666; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fccc65aa1d91c84; }())); std::int32_t cs_arg0 = v_l_6734; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}));
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_playerData_6803; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e270d7cf887694c0; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
std::int32_t v_num3_6920 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num3_6920 = cs_value; return cs_value; }()); ([&]() -> bool { auto cs_left = v_num3_6920; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_out_ary2); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num3_6920; auto cs_new = pls::cs::add_i32(cs_old,1); v_num3_6920 = cs_new; return cs_old; }())) {
pls::cs::Array<std::int32_t> v_array3_6998 = pls::cs::unbox<pls::cs::Array<std::int32_t>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_out_ary2); std::int32_t cs_arg0 = v_num3_6920; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}));
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_playerData_6803; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e270d7cf887694c0; }()); auto cs_right = ([&]() { auto cs_array = v_array3_6998; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return (cs_left >= cs_right); }())) {
break;
}
}
if (((([&]() -> bool { auto cs_left = v_num3_6920; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()) && ([&]() -> bool { auto cs_left = v_num3_6920; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_out_ary1); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = v_num3_6920; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_out_ary2); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); return (cs_left <= cs_right); }()))) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_out_ary1); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_receiver = v_playerData_6803; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fd3d0f4b83ccd11a; }())); std::int32_t cs_arg1 = v_num3_6920; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_b9d1ea00d1f689ef(cs_receiver,cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_out_ary2); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(pls::source_allocations::completed("new_array","src/Assembly-CSharp/data/TeamData.cs:M:data.TeamData.SetScoreRanking(data.LeagueData,java.util.Vector,java.util.Vector):7274",([&](){auto cs_initial_array_258=pls::cs::Array<std::int32_t>::make(3);cs_initial_array_258.at(0)=([&]() { auto cs_receiver = v_playerData_6803; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e270d7cf887694c0; }());cs_initial_array_258.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_initial_array_258.at(2)=([&]() { auto cs_receiver = v_playerData_6803; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_18df8a841fecdd70; }());return cs_initial_array_258;}()))); std::int32_t cs_arg1 = v_num3_6920; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_b9d1ea00d1f689ef(cs_receiver,cs_arg0,cs_arg1); }());});
}
}
}
}
}
}

// M:data.TeamData.SetWarParamPhysical
void cs_5850db6e1f3dd4fe(pls::cs::Ref<cs_169021fb033627ed> cs_this) { cs_init_169021fb033627ed();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TeamData.SetWarParamPhysical",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_array","src/Assembly-CSharp/data/TeamData.cs:M:data.TeamData.SetWarParamPhysical:3046",pls::cs::Array<std::int32_t>::make((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d502e9c14d15584d; }())).length())); pls::game::cs_require(cs_target)->cs_c1a3d1d998bc54ed = cs_value; return cs_value; }());
std::int32_t v_num_3087 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (std::int32_t v_i_3108 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3108; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d502e9c14d15584d; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3108; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3108 = cs_new; return cs_old; }())) {
([&]() { auto cs_old = v_num_3087; auto cs_rhs = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d502e9c14d15584d; }()); auto cs_index = v_i_3108; return cs_array.get_Item(cs_index); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num_3087 = cs_value; return cs_value; }());
}
for (std::int32_t v_j_3203 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_3203; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d502e9c14d15584d; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_3203; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_3203 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c1a3d1d998bc54ed; }()); auto cs_index = v_j_3203; auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4120c353f39753d8; }()); auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d502e9c14d15584d; }())).length(); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d502e9c14d15584d; }()); auto cs_index = v_j_3203; return cs_array.get_Item(cs_index); }()); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_num_3087; return pls::cs::div_i32(cs_left,cs_right); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}
}
}
