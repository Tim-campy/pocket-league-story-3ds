#pragma once
#include "screen.hpp"
#include "input.hpp"
#include "surface.GamePad.hpp"
#include "surface.SurfaceManager.hpp"

namespace pls::host {
inline void send_label_touch(int action, platform::ScreenPoint point) {
    const auto pad = game::surface::SurfaceManager::gpad_();
    if (!pad || point.screen != platform::Screen::bottom) return;
    // Same event allocation as Canvas's mouse adapter, only on pointer changes.
    // Dispatch to this surface alone: top and bottom have overlapping local pixels.
    const auto ids = cs::Array<std::int32_t>::make(1);
    const auto positions = cs::Array<float>::from({float(point.x), float(point.y)});
    const auto event = cs::make_ref<kairo::MotionEvent>(action, ids, positions, cs::Array<float>{}, true);
    pad->OnReceiveTouchEvent(event);
}
}
