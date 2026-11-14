// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_7a470603d6db57af.hpp"
#include "generated/portable_generated_type_e7d772862db62924.hpp"
namespace pls::game {

void cs_7a470603d6db57af::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);}

void cs_7a470603d6db57af::release_edges(){pls::cs::Object::release_edges();}

static std::int32_t cs_d9c18e1b80629b14_value{};

void cs_init_7a470603d6db57af(){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(cs_d9c18e1b80629b14_value,visitor);});static pls::cs::TypeInitState state;state.run("kairo.unity.ad.AdMobView",[](){
cs_d9c18e1b80629b14_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.ad.AdMobView.adHeight_",[&](){return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));});

});}

std::int32_t& cs_d9c18e1b80629b14(){cs_init_7a470603d6db57af();return cs_d9c18e1b80629b14_value;}

// M:kairo.unity.ad.AdMobView.GetAdHeight
std::int32_t cs_8919cf419e6c7708() { cs_init_7a470603d6db57af();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ad.AdMobView.GetAdHeight",kairo);
{
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
}
}
}

// M:kairo.unity.ad.AdMobView.IsLoad
bool cs_e3e9b6fd73c21e45(pls::cs::Ref<cs_7a470603d6db57af> cs_this) { cs_init_7a470603d6db57af();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ad.AdMobView.IsLoad",kairo);
{
return false;
}
}
}
}
}
