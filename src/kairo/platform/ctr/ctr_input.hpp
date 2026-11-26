#pragma once
#include "canvas.hpp"
#include "forms.hpp"
#include <array>
namespace pls::ctr {
class Input {
    std::array<int,3> soft_{};
    bool touch_{};
    int touch_x_{},touch_y_{};
public:
    void poll(kairo::Canvas&,kairo::FormManagerBase*,kairo::Image& labels);
};
}
