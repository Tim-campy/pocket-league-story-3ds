#pragma once
#include <atomic>

namespace pls::kairo {
namespace detail {
inline std::atomic<int> zoom_direction{0};
inline void publish_zoom_direction(int direction, bool held = false) {
    zoom_direction.store(direction ? direction : held ? 2 : 0, std::memory_order_relaxed);
}
}
// -1 zooms out, +1 zooms in; the null backend leaves the sample neutral.
inline int read_zoom_direction() {
    const int sample = detail::zoom_direction.load(std::memory_order_relaxed);
    return sample == 2 ? 0 : sample;
}
inline bool read_zoom_held() {
    return detail::zoom_direction.load(std::memory_order_relaxed) != 0;
}
}
