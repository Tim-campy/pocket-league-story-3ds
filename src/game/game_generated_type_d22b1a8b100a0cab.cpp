// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_2ffa6f51468590ea.hpp"
#include "game_generated_type_75707aa3f1629c85.hpp"
#include "game_generated_type_b08d770c239489bf.hpp"
#include "game_generated_type_d22b1a8b100a0cab.hpp"
#include "generated/portable_generated_type_1ff3292665c8e0c4.hpp"
#include "generated/portable_generated_type_7de6788b61a5af56.hpp"
#include "generated/portable_generated_type_e7a5499b363ef51b.hpp"
#include "generated/portable_generated_type_ea324a0bbfe717fe.hpp"
namespace pls::game {

void cs_d22b1a8b100a0cab::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_b08d770c239489bf::trace_edges(visitor);pls::cs::trace_value(cs_65da99c9869d3471,visitor);pls::cs::trace_value(cs_c230b5b8d577333e,visitor);pls::cs::trace_value(cs_58dffb600270e76f,visitor);pls::cs::trace_value(cs_51227c768469b61d,visitor);}

void cs_d22b1a8b100a0cab::release_edges(){cs_b08d770c239489bf::release_edges();pls::cs::release_value(cs_65da99c9869d3471);pls::cs::release_value(cs_c230b5b8d577333e);pls::cs::release_value(cs_58dffb600270e76f);pls::cs::release_value(cs_51227c768469b61d);}

static pls::cs::Ref<cs_2ffa6f51468590ea> cs_b055e8ddf387ad3d_value{};

static pls::cs::Ref<cs_75707aa3f1629c85> cs_46c7acf5933b0c38_value{};

void cs_init_d22b1a8b100a0cab(){static pls::cs::TypeInitState state;state.run("data.StadiumData",[](){

});}

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_b055e8ddf387ad3d(){cs_init_d22b1a8b100a0cab();return cs_b055e8ddf387ad3d_value;}

pls::cs::Ref<cs_75707aa3f1629c85>& cs_46c7acf5933b0c38(){cs_init_d22b1a8b100a0cab();return cs_46c7acf5933b0c38_value;}

// M:data.StadiumData.#ctor
pls::cs::Ref<cs_d22b1a8b100a0cab> cs_0e93480fefec290e() { cs_init_d22b1a8b100a0cab();
{ auto cs_this = pls::cs::make_ref<cs_d22b1a8b100a0cab>(); cs_0e93480fefec290e_init(cs_this); return cs_this; }
}

void cs_0e93480fefec290e_init(pls::cs::Ref<cs_d22b1a8b100a0cab> cs_this) {
([&]() { cs_0c4b303cde7d7a27_init(std::static_pointer_cast<cs_b08d770c239489bf>(cs_this)); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.StadiumData.#ctor",game);
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); cs_b055e8ddf387ad3d() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }()); cs_46c7acf5933b0c38() = cs_value; return cs_value; }());
}
}
}

// M:data.StadiumData.#ctor(System.String)
pls::cs::Ref<cs_d22b1a8b100a0cab> cs_e583025a7e423ba2(pls::cs::String v_src) { cs_init_d22b1a8b100a0cab();
{ auto cs_this = pls::cs::make_ref<cs_d22b1a8b100a0cab>(); cs_e583025a7e423ba2_init(cs_this,v_src); return cs_this; }
}

void cs_e583025a7e423ba2_init(pls::cs::Ref<cs_d22b1a8b100a0cab> cs_this,pls::cs::String v_src) {
([&]() { cs_0c4b303cde7d7a27_init(std::static_pointer_cast<cs_b08d770c239489bf>(cs_this)); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.StadiumData.#ctor(System.String)",game);
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); cs_b055e8ddf387ad3d() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }()); cs_46c7acf5933b0c38() = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_d22b1a8b100a0cab>>(cs_this); pls::cs::String cs_arg0 = v_src; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_93d29dd1f2b7d527(cs_receiver,cs_arg0); }());
}
}
}

// M:data.StadiumData.Deserialize(java.io.InputStream)
void cs_efc96767f554942e(pls::cs::Ref<cs_d22b1a8b100a0cab> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_d22b1a8b100a0cab();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.StadiumData.Deserialize(java.io.InputStream)",game);
{

}
}
}
}

// M:data.StadiumData.Load(System.String)
void cs_93d29dd1f2b7d527(pls::cs::Ref<cs_d22b1a8b100a0cab> cs_this,pls::cs::String v_src) { cs_init_d22b1a8b100a0cab();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.StadiumData.Load(System.String)",game);
{
std::int32_t v_num_614 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
pls::cs::Array<pls::cs::String> v_array_635 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_src; pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0009" u"",1);return cs_literal;}()); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_635; auto cs_index = ([&]() { auto cs_old = v_num_614; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_614 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_18df8a841fecdd70 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_635; auto cs_index = ([&]() { auto cs_old = v_num_614; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_614 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_65da99c9869d3471 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_635; auto cs_index = ([&]() { auto cs_old = v_num_614; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_614 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_c230b5b8d577333e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_635; auto cs_index = ([&]() { auto cs_old = v_num_614; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_614 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_58dffb600270e76f = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_635; auto cs_index = ([&]() { auto cs_old = v_num_614; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_614 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_51227c768469b61d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_635; auto cs_index = ([&]() { auto cs_old = v_num_614; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_614 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_77b7447583c10f78 = cs_value; return cs_value; }());
}
}
}
}

// M:data.StadiumData.NewGame
void cs_cfe75fe0fd4737f7(pls::cs::Ref<cs_d22b1a8b100a0cab> cs_this) { cs_init_d22b1a8b100a0cab();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.StadiumData.NewGame",game);
{

}
}
}
}

// M:data.StadiumData.Serialize(java.io.OutputStream)
void cs_65e6e8cf5fc4699e(pls::cs::Ref<cs_d22b1a8b100a0cab> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_d22b1a8b100a0cab();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.StadiumData.Serialize(java.io.OutputStream)",game);
{

}
}
}
}
}
