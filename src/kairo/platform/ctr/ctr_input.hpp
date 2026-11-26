#pragma once
#include "canvas.hpp"
#include "forms.hpp"
#include <array>
#include "menu_stick.hpp"
namespace pls::ctr {
class Input {
    std::array<int,3> soft_{};
    bool touch_{};
    int touch_x_{},touch_y_{};
    bool c_stick_available_{};
    kairo::MenuStickRepeat menu_stick_{};
public:
    Input();
    ~Input();
    Input(const Input&) = delete;
    Input& operator=(const Input&) = delete;
    void poll(kairo::Canvas&,kairo::FormManagerBase*,kairo::Image& labels);
};
}
