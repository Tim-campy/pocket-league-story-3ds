#pragma once
#include <atomic>
#include <cstdint>

namespace pls::kairo {
// Screen directions: positive X is right, positive Y is down.
struct CirclePadState { std::int32_t x{}, y{}; };
inline constexpr std::int32_t circle_pad_max = 32767;
inline constexpr std::int32_t circle_pad_dead_zone = 12000;

namespace detail {
// One coherent, allocation-free sample. Null and CTR leave it neutral.
inline std::atomic<std::uint32_t> circle_pad_sample{0};
inline void publish_circle_pad(CirclePadState state) {
    const auto x = static_cast<std::uint32_t>(state.x) & 0xffffu;
    const auto y = static_cast<std::uint32_t>(state.y) & 0xffffu;
    circle_pad_sample.store(x | (y << 16), std::memory_order_relaxed);
}
}
inline CirclePadState read_circle_pad() {
    const auto sample = detail::circle_pad_sample.load(std::memory_order_relaxed);
    const auto x = static_cast<std::int32_t>(sample & 0xffffu);
    const auto y = static_cast<std::int32_t>(sample >> 16);
    return {x >= 32768 ? x - 65536 : x, y >= 32768 ? y - 65536 : y};
}
// SDL's signed 16-bit axes are rescaled continuously outside the dead zone.
inline std::int32_t normalize_circle_pad_axis(std::int32_t raw) {
    if (raw > circle_pad_max) raw = circle_pad_max;
    if (raw < -circle_pad_max) raw = -circle_pad_max;
    const auto magnitude = raw < 0 ? -raw : raw;
    if (magnitude <= circle_pad_dead_zone) return 0;
    const auto value = (magnitude - circle_pad_dead_zone) * circle_pad_max /
                       (circle_pad_max - circle_pad_dead_zone);
    return raw < 0 ? -value : value;
}
}
