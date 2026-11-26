#pragma once
#include "circle_pad.hpp"

namespace pls::kairo {
// Menu input uses one direction at a time; ties prefer the vertical axis.
struct MenuStickRepeat {
    int direction = 0, remaining = 0;
    void reset() { direction = remaining = 0; }
    int update(CirclePadState pad, int frame_multiplier = 1) {
        constexpr int initial_delay = 6, repeat_delay = 3; // at 20 Hz
        const int ax = pad.x < 0 ? -pad.x : pad.x;
        const int ay = pad.y < 0 ? -pad.y : pad.y;
        const int next = !ax && !ay ? 0 : ax > ay ? (pad.x < 0 ? 65536 : 262144)
                                                 : (pad.y < 0 ? 131072 : 524288);
        if (!next) { reset(); return 0; }
        if (next != direction) {
            direction = next; remaining = initial_delay * frame_multiplier;
            return direction;
        }
        if (--remaining > 0) return 0;
        remaining = repeat_delay * frame_multiplier;
        return direction;
    }
};
}
