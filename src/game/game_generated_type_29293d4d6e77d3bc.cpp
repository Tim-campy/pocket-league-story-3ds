// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_29293d4d6e77d3bc.hpp"
#include "game_generated_type_2ffa6f51468590ea.hpp"
#include "game_generated_type_75707aa3f1629c85.hpp"
namespace pls::game {

void cs_29293d4d6e77d3bc::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_adc35de421fe3eef,visitor);pls::cs::trace_value(cs_1f0b9be8292dcf69,visitor);}

void cs_29293d4d6e77d3bc::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_adc35de421fe3eef);pls::cs::release_value(cs_1f0b9be8292dcf69);}

static pls::cs::Ref<cs_2ffa6f51468590ea> cs_d3541fa57bc06660_value{};

static pls::cs::Ref<cs_75707aa3f1629c85> cs_7ddc12ff1c507889_value{};

void cs_init_29293d4d6e77d3bc(){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(cs_d3541fa57bc06660_value,visitor);pls::cs::trace_value(cs_7ddc12ff1c507889_value,visitor);});static pls::cs::TypeInitState state;state.run("game.MapObject",[](){

});}

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_d3541fa57bc06660(){cs_init_29293d4d6e77d3bc();return cs_d3541fa57bc06660_value;}

pls::cs::Ref<cs_75707aa3f1629c85>& cs_7ddc12ff1c507889(){cs_init_29293d4d6e77d3bc();return cs_7ddc12ff1c507889_value;}

// M:game.MapObject.#ctor
pls::cs::Ref<cs_29293d4d6e77d3bc> cs_cdf4fc1f77c254d3() { cs_init_29293d4d6e77d3bc();
{ auto cs_this = pls::cs::make_ref<cs_29293d4d6e77d3bc>(); cs_cdf4fc1f77c254d3_init(cs_this); return cs_this; }
}

void cs_cdf4fc1f77c254d3_init(pls::cs::Ref<cs_29293d4d6e77d3bc> cs_this) {
{PLS_METHOD_SCOPE("Assembly-CSharp","M:game.MapObject.#ctor",game);
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); cs_d3541fa57bc06660() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }()); cs_7ddc12ff1c507889() = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_29293d4d6e77d3bc>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_022bc790768beecd(cs_receiver); }());
}
}
}

// M:game.MapObject.Init
void cs_022bc790768beecd(pls::cs::Ref<cs_29293d4d6e77d3bc> cs_this) { cs_init_29293d4d6e77d3bc();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:game.MapObject.Init",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_array","src/Assembly-CSharp/game/MapObject.cs:M:game.MapObject.Init:315",pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)))); pls::game::cs_require(cs_target)->cs_1f0b9be8292dcf69 = cs_value; return cs_value; }());
}
}
}
}
}
