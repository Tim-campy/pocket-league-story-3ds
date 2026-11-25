#pragma once
#include <cstdint>

namespace pls::platform {
enum class Screen { top, bottom };
struct ScreenExtent { std::int32_t width, height; };
constexpr ScreenExtent screen_extent(Screen screen) {
    return screen == Screen::top ? ScreenExtent{400, 240} : ScreenExtent{320, 240};
}
// Screen-local pixels, with origin at the top left. Legacy surfaces adapt these
// coordinates at the host boundary; their scale is not part of this contract.
struct ScreenPoint {
    Screen screen;
    std::int32_t x, y;
};
}
