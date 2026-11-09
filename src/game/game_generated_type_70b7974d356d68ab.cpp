// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_3a3d09f9e75a32d2.hpp"
#include "game_generated_type_70b7974d356d68ab.hpp"
#include "game_generated_type_f3ea616d36334b95.hpp"
namespace pls::game {

void cs_70b7974d356d68ab::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_69110646eac3c92f,visitor);pls::cs::trace_value(cs_3b9b9f07493bab63,visitor);pls::cs::trace_value(cs_0556df4715acbd82,visitor);pls::cs::trace_value(cs_c5b0b4bdfc0bc3e5,visitor);pls::cs::trace_value(cs_80159b241b8b0fb0,visitor);pls::cs::trace_value(cs_a14ff763839a39fc,visitor);pls::cs::trace_value(cs_cdbd50f771e65195,visitor);pls::cs::trace_value(cs_07a9daa229d89929,visitor);}

void cs_70b7974d356d68ab::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_69110646eac3c92f);pls::cs::release_value(cs_3b9b9f07493bab63);pls::cs::release_value(cs_0556df4715acbd82);pls::cs::release_value(cs_c5b0b4bdfc0bc3e5);pls::cs::release_value(cs_80159b241b8b0fb0);pls::cs::release_value(cs_a14ff763839a39fc);pls::cs::release_value(cs_cdbd50f771e65195);pls::cs::release_value(cs_07a9daa229d89929);}

void cs_init_70b7974d356d68ab(){static pls::cs::TypeInitState state;state.run("kairo.unity.surface.SurfaceBase.TouchPoint",[](){

});}

// M:kairo.unity.surface.SurfaceBase.TouchPoint.#ctor
pls::cs::Ref<cs_70b7974d356d68ab> cs_939028c47866c657() { cs_init_70b7974d356d68ab();
{ auto cs_this = pls::cs::make_ref<cs_70b7974d356d68ab>(); cs_939028c47866c657_init(cs_this); return cs_this; }
}

void cs_939028c47866c657_init(pls::cs::Ref<cs_70b7974d356d68ab> cs_this) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.TouchPoint.#ctor",kairo);
{}
}
}

// M:kairo.unity.surface.SurfaceBase.TouchPoint.Init(System.Int64,System.Single,System.Single,kairo.unity.surface.TouchComponent)
void cs_dbab81fd91425aae(pls::cs::Ref<cs_70b7974d356d68ab> cs_this,std::int64_t v_key,float v_x,float v_y,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component) { cs_init_70b7974d356d68ab();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.TouchPoint.Init(System.Int64,System.Single,System.Single,kairo.unity.surface.TouchComponent)",kairo);
{
pls::cs::Array<std::int32_t> v_array_601 = ([&]() -> pls::cs::Array<std::int32_t> { std::int64_t cs_arg0 = v_key; return cs_b37fd969c7a5953c(cs_arg0); }());
([&]() { auto cs_target = cs_this; auto cs_value = v_key; pls::game::cs_require(cs_target)->cs_69110646eac3c92f = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_x; pls::game::cs_require(cs_target)->cs_c5b0b4bdfc0bc3e5 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_y; pls::game::cs_require(cs_target)->cs_80159b241b8b0fb0 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_601; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_3b9b9f07493bab63 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_601; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_0556df4715acbd82 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_x; pls::game::cs_require(cs_target)->cs_a14ff763839a39fc = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_y; pls::game::cs_require(cs_target)->cs_cdbd50f771e65195 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_component; pls::game::cs_require(cs_target)->cs_07a9daa229d89929 = cs_value; return cs_value; }());
}
}
}
}
}
