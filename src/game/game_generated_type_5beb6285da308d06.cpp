// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_2ffa6f51468590ea.hpp"
#include "game_generated_type_5beb6285da308d06.hpp"
#include "game_generated_type_75707aa3f1629c85.hpp"
#include "game_generated_type_8f8054b388e3f93e.hpp"
#include "game_generated_type_b08d770c239489bf.hpp"
#include "generated/portable_generated_type_1ff3292665c8e0c4.hpp"
#include "generated/portable_generated_type_5098bfda9cf65745.hpp"
#include "generated/portable_generated_type_51222df74ac70bab.hpp"
#include "generated/portable_generated_type_7de6788b61a5af56.hpp"
#include "generated/portable_generated_type_cbac662a28aa40b1.hpp"
#include "generated/portable_generated_type_e7a5499b363ef51b.hpp"
#include "generated/portable_generated_type_ea324a0bbfe717fe.hpp"
#include "generated/portable_generated_type_f3ea616d36334b95.hpp"
#include "generated/portable_generated_type_f8b20a4d1d9d695f.hpp"
#include "generated/portable_generated_type_51222df74ac70bab_templates.hpp"
#include "generated/portable_generated_type_cbac662a28aa40b1_templates.hpp"
namespace pls::game {

void cs_5beb6285da308d06::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_b08d770c239489bf::trace_edges(visitor);pls::cs::trace_value(cs_060be94b316ac997,visitor);pls::cs::trace_value(cs_e6d065255a19d5e1,visitor);pls::cs::trace_value(cs_848cb46183ffce74,visitor);pls::cs::trace_value(cs_9e69bc1be9cd1463,visitor);pls::cs::trace_value(cs_2c594ae1e1e62192,visitor);}

void cs_5beb6285da308d06::release_edges(){cs_b08d770c239489bf::release_edges();pls::cs::release_value(cs_060be94b316ac997);pls::cs::release_value(cs_e6d065255a19d5e1);pls::cs::release_value(cs_848cb46183ffce74);pls::cs::release_value(cs_9e69bc1be9cd1463);pls::cs::release_value(cs_2c594ae1e1e62192);}

static pls::cs::Ref<cs_2ffa6f51468590ea> cs_babc5db4464a5cf1_value{};

static pls::cs::Ref<cs_75707aa3f1629c85> cs_9b4ff795e198ba8c_value{};

void cs_init_5beb6285da308d06(){static pls::cs::TypeInitState state;state.run("data.FormationData",[](){

});}

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_babc5db4464a5cf1(){cs_init_5beb6285da308d06();return cs_babc5db4464a5cf1_value;}

pls::cs::Ref<cs_75707aa3f1629c85>& cs_9b4ff795e198ba8c(){cs_init_5beb6285da308d06();return cs_9b4ff795e198ba8c_value;}

// M:data.FormationData.#ctor
pls::cs::Ref<cs_5beb6285da308d06> cs_1dcab3be6c5f03f1() { cs_init_5beb6285da308d06();
{ auto cs_this = pls::cs::make_ref<cs_5beb6285da308d06>(); cs_1dcab3be6c5f03f1_init(cs_this); return cs_this; }
}

void cs_1dcab3be6c5f03f1_init(pls::cs::Ref<cs_5beb6285da308d06> cs_this) {
([&]() { cs_0c4b303cde7d7a27_init(std::static_pointer_cast<cs_b08d770c239489bf>(cs_this)); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FormationData.#ctor",game);
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); cs_babc5db4464a5cf1() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }()); cs_9b4ff795e198ba8c() = cs_value; return cs_value; }());
}
}
}

// M:data.FormationData.#ctor(System.String)
pls::cs::Ref<cs_5beb6285da308d06> cs_87d76be08d9385f5(pls::cs::String v_src) { cs_init_5beb6285da308d06();
{ auto cs_this = pls::cs::make_ref<cs_5beb6285da308d06>(); cs_87d76be08d9385f5_init(cs_this,v_src); return cs_this; }
}

void cs_87d76be08d9385f5_init(pls::cs::Ref<cs_5beb6285da308d06> cs_this,pls::cs::String v_src) {
([&]() { cs_0c4b303cde7d7a27_init(std::static_pointer_cast<cs_b08d770c239489bf>(cs_this)); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FormationData.#ctor(System.String)",game);
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); cs_babc5db4464a5cf1() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }()); cs_9b4ff795e198ba8c() = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5beb6285da308d06>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_61dc1e692f8ba65d(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5beb6285da308d06>>(cs_this); pls::cs::String cs_arg0 = v_src; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_64435bca883a957d(cs_receiver,cs_arg0); }());
}
}
}

// M:data.FormationData.ChangeState(System.Int32)
void cs_44b45d582a2cd832(pls::cs::Ref<cs_5beb6285da308d06> cs_this,std::int32_t v_state) { cs_init_5beb6285da308d06();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FormationData.ChangeState(System.Int32)",game);
{
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e69bc1be9cd1463; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = v_state; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_2c594ae1e1e62192 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = v_state; pls::game::cs_require(cs_target)->cs_9e69bc1be9cd1463 = cs_value; return cs_value; }());
}
}
}
}

// M:data.FormationData.Deserialize(java.io.InputStream)
void cs_236fc3772d53f167(pls::cs::Ref<cs_5beb6285da308d06> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_5beb6285da308d06();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FormationData.Deserialize(java.io.InputStream)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int16_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1368899db48b4fc9(cs_arg0); }());})); pls::game::cs_require(cs_target)->cs_9e69bc1be9cd1463 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_5cff189cd1a7d066(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_2c594ae1e1e62192 = cs_value; return cs_value; }());
for (std::int32_t v_i_1893 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1893; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e6d065255a19d5e1; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1893; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1893 = cs_new; return cs_old; }())) {
for (std::int32_t v_j_1946 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_1946; auto cs_right = (([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e6d065255a19d5e1; }()); auto cs_index = v_i_1893; return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_1946; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_1946 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e6d065255a19d5e1; }()); auto cs_index = v_i_1893; return cs_array.get_Item(cs_index); }()); auto cs_index = v_j_1946; auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int16_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1368899db48b4fc9(cs_arg0); }());}));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}
}
}

// M:data.FormationData.Init
void cs_61dc1e692f8ba65d(pls::cs::Ref<cs_5beb6285da308d06> cs_this) { cs_init_5beb6285da308d06();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FormationData.Init",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_9e69bc1be9cd1463 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_2c594ae1e1e62192 = cs_value; return cs_value; }());
}
}
}
}

// M:data.FormationData.IsExistNew
bool cs_24bb22626fd1951a() { cs_init_5beb6285da308d06();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FormationData.IsExistNew",game);
{
pls::cs::Ref<cs_2ffa6f51468590ea> v_instance_2874 = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }());
for (std::int32_t v_i_2920 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2920; auto cs_right = (([&]() { auto cs_receiver = v_instance_2874; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_215cc6a45e18ecc6; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2920; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2920 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5beb6285da308d06>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_instance_2874; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_215cc6a45e18ecc6; }()); auto cs_index = v_i_2920; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_31c354b1fcecaeb2(cs_receiver); }())) {
return true;
}
}
return false;
}
}
}

// M:data.FormationData.IsNew
bool cs_31c354b1fcecaeb2(pls::cs::Ref<cs_5beb6285da308d06> cs_this) { cs_init_5beb6285da308d06();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FormationData.IsNew",game);
{
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c594ae1e1e62192; }())) {
return true;
}
return false;
}
}
}
}

// M:data.FormationData.Load(System.String)
void cs_64435bca883a957d(pls::cs::Ref<cs_5beb6285da308d06> cs_this,pls::cs::String v_src) { cs_init_5beb6285da308d06();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FormationData.Load(System.String)",game);
{
std::int32_t v_num_842 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
pls::cs::Array<pls::cs::String> v_array_863 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_src; pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0009" u"",1);return cs_literal;}()); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_863; auto cs_index = ([&]() { auto cs_old = v_num_842; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_842 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_18df8a841fecdd70 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_863; auto cs_index = ([&]() { auto cs_old = v_num_842; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_842 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_060be94b316ac997 = cs_value; return cs_value; }());
pls::cs::String v_src2_977 = ([&]() { auto cs_array = v_array_863; auto cs_index = ([&]() { auto cs_old = v_num_842; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_842 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }());
pls::cs::Array<std::int32_t> v_array2_1007 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::int32_t> { pls::cs::String cs_arg0 = v_src2_977; pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002c" u"",1);return cs_literal;}()); return pls::generated::cs_deba8d22dc04f33a(cs_arg0,cs_arg1); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { pls::cs::Array<std::int32_t> cs_arg0 = pls::source_allocations::completed("new_array","src/Assembly-CSharp/data/FormationData.cs:M:data.FormationData.Load(System.String):1094",pls::assets::baked_array<std::int32_t>("e5d95443310c150b59aec91278d02879a198f12dd92e81c5868d5a91dfea3c7a")); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::int32_t>>>(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_e6d065255a19d5e1 = cs_value; return cs_value; }());
for (std::int32_t v_i_1129 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1129; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e6d065255a19d5e1; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1129; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1129 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e6d065255a19d5e1; }()); auto cs_index = v_i_1129; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = ([&]() { auto cs_array = v_array2_1007; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_i_1129; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e6d065255a19d5e1; }()); auto cs_index = v_i_1129; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = ([&]() { auto cs_array = v_array2_1007; auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_i_1129; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_863; auto cs_index = ([&]() { auto cs_old = v_num_842; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_842 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_848cb46183ffce74 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_863; auto cs_index = ([&]() { auto cs_old = v_num_842; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_842 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_77b7447583c10f78 = cs_value; return cs_value; }());
}
}
}
}

// M:data.FormationData.NewGame
void cs_2552b94c33660c3f(pls::cs::Ref<cs_5beb6285da308d06> cs_this) { cs_init_5beb6285da308d06();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FormationData.NewGame",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_9e69bc1be9cd1463 = cs_value; return cs_value; }());
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_77b7447583c10f78; }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::generated::cs_0bb436a75579d50a(cs_arg0,cs_arg1); }());})) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::game::cs_require(cs_target)->cs_9e69bc1be9cd1463 = cs_value; return cs_value; }());
}
}
}
}
}

// M:data.FormationData.RemoveNew
void cs_dfb5cae2c5bb4409() { cs_init_5beb6285da308d06();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FormationData.RemoveNew",game);
{
pls::cs::Ref<cs_2ffa6f51468590ea> v_instance_3122 = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }());
for (std::int32_t v_i_3168 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3168; auto cs_right = (([&]() { auto cs_receiver = v_instance_3122; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_215cc6a45e18ecc6; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3168; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3168 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_instance_3122; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_215cc6a45e18ecc6; }()); auto cs_index = v_i_3168; return cs_array.get_Item(cs_index); }()); auto cs_value = false; pls::game::cs_require(cs_target)->cs_2c594ae1e1e62192 = cs_value; return cs_value; }());
}
}
}
}

// M:data.FormationData.Serialize(java.io.OutputStream)
void cs_746513213ef872e5(pls::cs::Ref<cs_5beb6285da308d06> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_5beb6285da308d06();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FormationData.Serialize(java.io.OutputStream)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int16_t cs_arg1 = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9e69bc1be9cd1463; }())); pls::generated::cs_74e8efcd697e2e61(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; bool cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c594ae1e1e62192; }()); pls::generated::cs_7c02733ae541274e(cs_arg0,cs_arg1); }());});
for (std::int32_t v_i_1577 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1577; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e6d065255a19d5e1; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1577; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1577 = cs_new; return cs_old; }())) {
for (std::int32_t v_j_1630 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_1630; auto cs_right = (([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e6d065255a19d5e1; }()); auto cs_index = v_i_1577; return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_1630; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_1630 = cs_new; return cs_old; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int16_t cs_arg1 = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e6d065255a19d5e1; }()); auto cs_index = v_i_1577; return cs_array.get_Item(cs_index); }()); auto cs_index = v_j_1630; return cs_array.get_Item(cs_index); }())); pls::generated::cs_74e8efcd697e2e61(cs_arg0,cs_arg1); }());});
}
}
}
}
}
}

// M:data.FormationData.UpdateStamemRole
void cs_c7fecae46912cbc4() { cs_init_5beb6285da308d06();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FormationData.UpdateStamemRole",game);
{
pls::cs::Ref<cs_75707aa3f1629c85> v_instance_2242 = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }());
pls::cs::Ref<cs_5beb6285da308d06> v_formationData_2294 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_215cc6a45e18ecc6; }()); auto cs_index = ([&]() { auto cs_receiver = v_instance_2242; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c82bc46de58d70bd; }()); return cs_array.get_Item(cs_index); }());
for (std::int32_t v_i_2389 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2389; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2389; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2389 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_8f8054b388e3f93e> v_playerData_2429 = pls::cs::unbox<pls::cs::Ref<cs_8f8054b388e3f93e>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = v_instance_2242; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7fccc65aa1d91c84; }())); std::int32_t cs_arg0 = v_i_2389; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}));
if (([&]() -> bool { auto cs_left = v_i_2389; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = v_playerData_2429; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_0be6a8ce42913998 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_formationData_2294; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e6d065255a19d5e1; }()); auto cs_index = v_i_2389; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left <= cs_right); }())) {
([&]() { auto cs_target = v_playerData_2429; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); pls::game::cs_require(cs_target)->cs_0be6a8ce42913998 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_formationData_2294; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e6d065255a19d5e1; }()); auto cs_index = v_i_2389; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return (cs_left <= cs_right); }())) {
([&]() { auto cs_target = v_playerData_2429; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::game::cs_require(cs_target)->cs_0be6a8ce42913998 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_formationData_2294; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e6d065255a19d5e1; }()); auto cs_index = v_i_2389; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return (cs_left <= cs_right); }())) {
([&]() { auto cs_target = v_playerData_2429; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::game::cs_require(cs_target)->cs_0be6a8ce42913998 = cs_value; return cs_value; }());
}
}
}
}
}
}
