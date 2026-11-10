// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_2ffa6f51468590ea.hpp"
#include "game_generated_type_75707aa3f1629c85.hpp"
#include "game_generated_type_b08d770c239489bf.hpp"
#include "game_generated_type_f991feb74054b6df.hpp"
#include "generated/portable_generated_type_1ff3292665c8e0c4.hpp"
#include "generated/portable_generated_type_7de6788b61a5af56.hpp"
namespace pls::game {

void cs_f991feb74054b6df::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_b08d770c239489bf::trace_edges(visitor);pls::cs::trace_value(cs_5b8cd05d34b43957,visitor);pls::cs::trace_value(cs_461cff8c28899923,visitor);pls::cs::trace_value(cs_04af799ba0be8e26,visitor);}

void cs_f991feb74054b6df::release_edges(){cs_b08d770c239489bf::release_edges();pls::cs::release_value(cs_5b8cd05d34b43957);pls::cs::release_value(cs_461cff8c28899923);pls::cs::release_value(cs_04af799ba0be8e26);}

static pls::cs::Ref<cs_2ffa6f51468590ea> cs_2f1cf2722aa1e793_value{};

static pls::cs::Ref<cs_75707aa3f1629c85> cs_d4bb3617e4a9e852_value{};

void cs_init_f991feb74054b6df(){static pls::cs::TypeInitState state;state.run("data.MapchipMatch",[](){

});}

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_2f1cf2722aa1e793(){cs_init_f991feb74054b6df();return cs_2f1cf2722aa1e793_value;}

pls::cs::Ref<cs_75707aa3f1629c85>& cs_d4bb3617e4a9e852(){cs_init_f991feb74054b6df();return cs_d4bb3617e4a9e852_value;}

// M:data.MapchipMatch.#ctor
pls::cs::Ref<cs_f991feb74054b6df> cs_dfca31a9f728d5e0() { cs_init_f991feb74054b6df();
{ auto cs_this = pls::cs::make_ref<cs_f991feb74054b6df>(); cs_dfca31a9f728d5e0_init(cs_this); return cs_this; }
}

void cs_dfca31a9f728d5e0_init(pls::cs::Ref<cs_f991feb74054b6df> cs_this) {
([&]() { cs_0c4b303cde7d7a27_init(std::static_pointer_cast<cs_b08d770c239489bf>(cs_this)); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.MapchipMatch.#ctor",game);
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); cs_2f1cf2722aa1e793() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }()); cs_d4bb3617e4a9e852() = cs_value; return cs_value; }());
}
}
}

// M:data.MapchipMatch.#ctor(System.String)
pls::cs::Ref<cs_f991feb74054b6df> cs_578ba3d559a84892(pls::cs::String v_src) { cs_init_f991feb74054b6df();
{ auto cs_this = pls::cs::make_ref<cs_f991feb74054b6df>(); cs_578ba3d559a84892_init(cs_this,v_src); return cs_this; }
}

void cs_578ba3d559a84892_init(pls::cs::Ref<cs_f991feb74054b6df> cs_this,pls::cs::String v_src) {
([&]() { cs_0c4b303cde7d7a27_init(std::static_pointer_cast<cs_b08d770c239489bf>(cs_this)); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.MapchipMatch.#ctor(System.String)",game);
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); cs_2f1cf2722aa1e793() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }()); cs_d4bb3617e4a9e852() = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_f991feb74054b6df>>(cs_this); pls::cs::String cs_arg0 = v_src; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_6f4cdae275402b8b(cs_receiver,cs_arg0); }());
}
}
}

// M:data.MapchipMatch.Load(System.String)
void cs_6f4cdae275402b8b(pls::cs::Ref<cs_f991feb74054b6df> cs_this,pls::cs::String v_src) { cs_init_f991feb74054b6df();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.MapchipMatch.Load(System.String)",game);
{
std::int32_t v_num_738 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
pls::cs::Array<pls::cs::String> v_array_759 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_src; pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0009" u"",1);return cs_literal;}()); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_759; auto cs_index = ([&]() { auto cs_old = v_num_738; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_738 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_18df8a841fecdd70 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_759; auto cs_index = ([&]() { auto cs_old = v_num_738; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_738 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_5b8cd05d34b43957 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_759; auto cs_index = ([&]() { auto cs_old = v_num_738; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_738 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_461cff8c28899923 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_759; auto cs_index = ([&]() { auto cs_old = v_num_738; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_738 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_04af799ba0be8e26 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_759; auto cs_index = ([&]() { auto cs_old = v_num_738; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_738 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_77b7447583c10f78 = cs_value; return cs_value; }());
}
}
}
}
}
