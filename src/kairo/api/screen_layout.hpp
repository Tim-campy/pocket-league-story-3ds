#pragma once
#include "screen.hpp"
#include <atomic>

namespace pls::platform {
namespace detail { inline std::atomic<bool> separate_screens{false}; }
inline void configure_separate_screens(bool enabled) { detail::separate_screens.store(enabled, std::memory_order_relaxed); }
inline bool has_separate_screens() { return detail::separate_screens.load(std::memory_order_relaxed); }

namespace label_bar {
// Includes the clock/battery shown above the buttons in management menus.
inline constexpr int x = 0, y = 176, width = 320, height = 64;
inline constexpr int button_y = y + height - 39;
}
}
