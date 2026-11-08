#pragma once
#include "application.hpp"
namespace pls::kairo {
// Exact non-Android branch of DisplayMetrics.Update. These desktop defaults
// are source values, not a 3DS screen/DPI design or emulated Android display.
class DisplayMetrics : public cs::Object {
    inline static std::int32_t width_{},height_{};
    inline static bool initialized_{};
    static void ensure(){if(!initialized_)Update();}
public:
    DisplayMetrics(){ensure();}
    static void Update(){
        const auto app=IApplication::GetCurrentApp();
        if(!app)throw cs::InvalidOperationException("Display metrics require the configured application screen");
        width_=app->GetWidth();height_=app->GetHeight();initialized_=true;
    }
    static float get_Density(){ensure();return 1.6f;}
    static std::int32_t get_DensityDPI(){ensure();return 240;}
    static std::int32_t get_HeightPixels(){ensure();return height_;}
    static std::int32_t get_WidthPixels(){ensure();return width_;}
    static float get_ScaledDensity(){ensure();return 1.6f;}
    static float get_XDPI(){ensure();return 1.6f;}
    static float get_YDPI(){ensure();return 1.6f;}
};
}
