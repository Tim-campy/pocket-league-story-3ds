// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_984a870e890b3788.hpp"
namespace pls::game {

// M:kairo.unity.ui.IApplication.GetBattery
std::int32_t cs_35fe07f2b79ae9d6(pls::cs::Ref<pls::kairo::IApplication> cs_this) { if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int32_t> { return pls::kairo::native_battery_info(); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }());
}
}

// M:kairo.unity.ui.IApplication.IsBatteryCharging
bool cs_abcd346a5a41f570(pls::cs::Ref<pls::kairo::IApplication> cs_this) { if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int32_t> { return pls::kairo::native_battery_info(); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }());
}
}
}
