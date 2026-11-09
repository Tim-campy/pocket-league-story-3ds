// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_b08d770c239489bf.hpp"
namespace pls::game {

void cs_b08d770c239489bf::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_18df8a841fecdd70,visitor);pls::cs::trace_value(cs_77b7447583c10f78,visitor);}

void cs_b08d770c239489bf::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_18df8a841fecdd70);pls::cs::release_value(cs_77b7447583c10f78);}

void cs_init_b08d770c239489bf(){static pls::cs::TypeInitState state;state.run("data.BaseData",[](){

});}

// M:data.BaseData.#ctor
pls::cs::Ref<cs_b08d770c239489bf> cs_0c4b303cde7d7a27() { cs_init_b08d770c239489bf();
{ auto cs_this = pls::cs::make_ref<cs_b08d770c239489bf>(); cs_0c4b303cde7d7a27_init(cs_this); return cs_this; }
}

void cs_0c4b303cde7d7a27_init(pls::cs::Ref<cs_b08d770c239489bf> cs_this) {
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.BaseData.#ctor",game);
{}
}
}

// M:data.BaseData.Check(System.Int32)
bool cs_c0d738dcc0a5bec7(pls::cs::Ref<cs_b08d770c239489bf> cs_this,std::int32_t v_bit) { cs_init_b08d770c239489bf();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.BaseData.Check(System.Int32)",game);
{
return ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_77b7447583c10f78; }()); auto cs_right = v_bit; return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }());
}
}
}
}
}
