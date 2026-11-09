// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_7a470603d6db57af.hpp"
#include "generated/portable_generated_type_e7d772862db62924.hpp"
namespace pls::game {

static std::int32_t cs_d9c18e1b80629b14_value{};

void cs_init_7a470603d6db57af(){static pls::cs::TypeInitState state;state.run("kairo.unity.ad.AdMobView",[](){
cs_d9c18e1b80629b14_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.ad.AdMobView.adHeight_",[&](){return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));});

});}

std::int32_t& cs_d9c18e1b80629b14(){cs_init_7a470603d6db57af();return cs_d9c18e1b80629b14_value;}

// M:kairo.unity.ad.AdMobView.GetAdHeight
std::int32_t cs_8919cf419e6c7708() { cs_init_7a470603d6db57af();
{
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
}
}
}
