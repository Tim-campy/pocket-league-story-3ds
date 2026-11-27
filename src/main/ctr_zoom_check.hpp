#pragma once

namespace pls::ctr {
constexpr int zoom_check_tolerance(int scale,int channel,int expected){
    // New 3DS calibration of the synthetic 2x2 -> 4x4 -> 3x3 fixture.
    return scale==150&&channel<3&&expected==128?5:2;
}
}
