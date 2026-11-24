// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.ui.IApplication.hpp"

namespace pls::game {
namespace kairo::unity::ui::IApplication {

// M:kairo.unity.ui.IApplication.GetBattery
pls::cs::Int32 GetBattery(pls::cs::Ref<pls::kairo::IApplication> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.IApplication.GetBattery", kairo);
    {
        return pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return pls::kairo::native_battery_info(); })[1];
    }
}

// M:kairo.unity.ui.IApplication.IsBatteryCharging
bool IsBatteryCharging(pls::cs::Ref<pls::kairo::IApplication> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.IApplication.IsBatteryCharging", kairo);
    {
        return pls::diagnostic::api_call(
                   [&]() -> decltype(auto) { return pls::kairo::native_battery_info(); })[0] == 2;
    }
}
} // namespace kairo::unity::ui::IApplication
}
