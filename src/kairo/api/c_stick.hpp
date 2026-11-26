#pragma once
#include <atomic>
#include <cmath>
#include <cstdint>

namespace pls::kairo {
struct CStickState { std::int32_t x{}, y{}; };
inline constexpr int c_stick_max = 32767;
inline constexpr int c_stick_dead_zone = 8000;
inline constexpr int c_stick_repeat_hz = 20;
inline constexpr float c_stick_sector_hysteresis = 5.0f; // degrees
namespace detail {
inline std::atomic<std::uint32_t> c_stick_sample{0};
inline void publish_c_stick(CStickState state) {
    const auto x = static_cast<std::uint32_t>(state.x) & 0xffffu;
    const auto y = static_cast<std::uint32_t>(state.y) & 0xffffu;
    c_stick_sample.store(x | (y << 16), std::memory_order_relaxed);
}
}
inline CStickState read_c_stick() {
    const auto sample = detail::c_stick_sample.load(std::memory_order_relaxed);
    const auto x = static_cast<std::int32_t>(sample & 0xffffu);
    const auto y = static_cast<std::int32_t>(sample >> 16);
    return {x >= 32768 ? x - 65536 : x, y >= 32768 ? y - 65536 : y};
}
inline CStickState normalize_c_stick(CStickState raw) {
    if (!raw.x && !raw.y) return {};
    const auto clamp=[](int v){return v < -c_stick_max ? -c_stick_max : v > c_stick_max ? c_stick_max : v;};
    raw.x=clamp(raw.x); raw.y=clamp(raw.y);
    const float magnitude=std::hypot(float(raw.x),float(raw.y));
    if (magnitude <= c_stick_dead_zone) return {};
    const float bounded=magnitude > c_stick_max ? float(c_stick_max) : magnitude;
    const float radius=(bounded-c_stick_dead_zone)*c_stick_max/(c_stick_max-c_stick_dead_zone);
    return {int(std::lround(float(raw.x)*radius/magnitude)),int(std::lround(float(raw.y)*radius/magnitude))};
}
// Primitive state only: no managed references or allocation in the frame loop.
struct CStickRepeat {
    int sector = -1, phase = 0;
    bool held = false;
    void reset() { sector = -1; phase = 0; held = false; }
    int update(CStickState stick) {
        if (!stick.x && !stick.y) { reset(); return 0; }
        const int radial = int(std::lround(std::hypot(float(stick.x), float(stick.y))));
        const int magnitude = radial > c_stick_max ? c_stick_max : radial;
        constexpr float pi = 3.14159265358979323846f;
        const float angle = std::atan2(float(stick.y), float(stick.x));
        const int candidate = (int(std::floor(angle / (pi / 4.0f) + 0.5f)) + 8) % 8;
        if (sector >= 0) {
            float delta = angle - float(sector) * (pi / 4.0f);
            while (delta > pi) delta -= 2.0f * pi;
            while (delta < -pi) delta += 2.0f * pi;
            if (std::fabs(delta) > pi / 8.0f + c_stick_sector_hysteresis * pi / 180.0f)
                sector = candidate;
        } else {
            sector = candidate;
        }
        constexpr int threshold = c_stick_max * 20; // game update frequency
        if (!held) phase = threshold;
        held = true;
        phase += magnitude * c_stick_repeat_hz;
        if (phase < threshold) return 0;
        phase -= threshold;
        constexpr int keys[] = {262144, 262144 | 524288, 524288, 65536 | 524288,
                                65536, 65536 | 131072, 131072, 262144 | 131072};
        return keys[sector];
    }
};
}
