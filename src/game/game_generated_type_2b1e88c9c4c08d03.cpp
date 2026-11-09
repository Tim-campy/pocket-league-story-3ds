// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_2b1e88c9c4c08d03.hpp"
#include "game_generated_type_2ffa6f51468590ea.hpp"
#include "game_generated_type_75707aa3f1629c85.hpp"
#include "game_generated_type_b08d770c239489bf.hpp"
#include "generated/portable_generated_type_1ff3292665c8e0c4.hpp"
#include "generated/portable_generated_type_7de6788b61a5af56.hpp"
namespace pls::game {

void cs_2b1e88c9c4c08d03::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_b08d770c239489bf::trace_edges(visitor);pls::cs::trace_value(cs_98106b6cb729b9c3,visitor);pls::cs::trace_value(cs_ac9d285a64618158,visitor);pls::cs::trace_value(cs_73e52a9b0a96618b,visitor);pls::cs::trace_value(cs_b10911576ec578c8,visitor);}

void cs_2b1e88c9c4c08d03::release_edges(){cs_b08d770c239489bf::release_edges();pls::cs::release_value(cs_98106b6cb729b9c3);pls::cs::release_value(cs_ac9d285a64618158);pls::cs::release_value(cs_73e52a9b0a96618b);pls::cs::release_value(cs_b10911576ec578c8);}

static pls::cs::Ref<cs_2ffa6f51468590ea> cs_b8ecc14dac492cc0_value{};

static pls::cs::Ref<cs_75707aa3f1629c85> cs_d0f79f4e077f54c8_value{};

void cs_init_2b1e88c9c4c08d03(){static pls::cs::TypeInitState state;state.run("data.MapchipMain",[](){

});}

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_b8ecc14dac492cc0(){cs_init_2b1e88c9c4c08d03();return cs_b8ecc14dac492cc0_value;}

pls::cs::Ref<cs_75707aa3f1629c85>& cs_d0f79f4e077f54c8(){cs_init_2b1e88c9c4c08d03();return cs_d0f79f4e077f54c8_value;}

// M:data.MapchipMain.#ctor
pls::cs::Ref<cs_2b1e88c9c4c08d03> cs_4f6ca96b9c507342() { cs_init_2b1e88c9c4c08d03();
{ auto cs_this = pls::cs::make_ref<cs_2b1e88c9c4c08d03>(); cs_4f6ca96b9c507342_init(cs_this); return cs_this; }
}

void cs_4f6ca96b9c507342_init(pls::cs::Ref<cs_2b1e88c9c4c08d03> cs_this) {
([&]() { cs_0c4b303cde7d7a27_init(std::static_pointer_cast<cs_b08d770c239489bf>(cs_this)); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.MapchipMain.#ctor",game);
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); cs_b8ecc14dac492cc0() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }()); cs_d0f79f4e077f54c8() = cs_value; return cs_value; }());
}
}
}

// M:data.MapchipMain.#ctor(System.String)
pls::cs::Ref<cs_2b1e88c9c4c08d03> cs_3a96fe880b0e2f44(pls::cs::String v_src) { cs_init_2b1e88c9c4c08d03();
{ auto cs_this = pls::cs::make_ref<cs_2b1e88c9c4c08d03>(); cs_3a96fe880b0e2f44_init(cs_this,v_src); return cs_this; }
}

void cs_3a96fe880b0e2f44_init(pls::cs::Ref<cs_2b1e88c9c4c08d03> cs_this,pls::cs::String v_src) {
([&]() { cs_0c4b303cde7d7a27_init(std::static_pointer_cast<cs_b08d770c239489bf>(cs_this)); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.MapchipMain.#ctor(System.String)",game);
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); cs_b8ecc14dac492cc0() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }()); cs_d0f79f4e077f54c8() = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2b1e88c9c4c08d03>>(cs_this); pls::cs::String cs_arg0 = v_src; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_2a03f976d843a772(cs_receiver,cs_arg0); }());
}
}
}

// M:data.MapchipMain.Load(System.String)
void cs_2a03f976d843a772(pls::cs::Ref<cs_2b1e88c9c4c08d03> cs_this,pls::cs::String v_src) { cs_init_2b1e88c9c4c08d03();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.MapchipMain.Load(System.String)",game);
{
std::int32_t v_num_970 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
pls::cs::Array<pls::cs::String> v_array_991 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_src; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0009" u"",1)); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_991; auto cs_index = ([&]() { auto cs_old = v_num_970; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_970 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_18df8a841fecdd70 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_991; auto cs_index = ([&]() { auto cs_old = v_num_970; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_970 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_98106b6cb729b9c3 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_991; auto cs_index = ([&]() { auto cs_old = v_num_970; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_970 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_ac9d285a64618158 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_991; auto cs_index = ([&]() { auto cs_old = v_num_970; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_970 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_73e52a9b0a96618b = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_991; auto cs_index = ([&]() { auto cs_old = v_num_970; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_970 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_b10911576ec578c8 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_991; auto cs_index = ([&]() { auto cs_old = v_num_970; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_970 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_77b7447583c10f78 = cs_value; return cs_value; }());
}
}
}
}
}
