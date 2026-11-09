#pragma once
#include "vector3.hpp"
#include <cstdint>
namespace pls::kairo {
// Frame snapshot for the exact desktop/debug input leaves currently admitted.
// Queries never consume a down edge or pump SDL; Backend::events owns refresh.
class DebugInput final {
public:
    static bool GetKey(std::int32_t unity_key); // LeftShift304 / RightShift303
    static bool GetMouseButton(std::int32_t button); // 0 left / 1 right
    static bool GetMouseButtonDown(std::int32_t button);
    static Vector3 get_mousePosition();
    static std::int32_t screen_height();
    static std::int32_t get_touchCount();
    // This SDL backend accepts every real (device,finger) identity. It does
    // not turn mouse events into fingers or select the later 3DS input design.
    static bool get_multiTouchEnabled(){return true;}
    static float get_dpi();
    static bool get_fullScreen();
};
}
