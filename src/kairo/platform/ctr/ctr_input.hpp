#pragma once
#include "canvas.hpp"
#include "forms.hpp"
#include <array>
namespace pls::ctr {
class Input {
    std::array<int,3> soft_{};
    bool touch_{},pinching_{};
    int touch_x_{},touch_y_{},pinch_distance_{};
    cs::Array<float> single_points_{},double_points_{};
    cs::Array<cs::Ref<kairo::MotionEvent>> pinch_events_{};
    cs::GcRootProvider roots_{[this](const cs::EdgeVisitor& visitor){
        cs::trace_value(single_points_,visitor);cs::trace_value(double_points_,visitor);cs::trace_value(pinch_events_,visitor);
    }};
public:
    Input();
    void poll(kairo::Canvas&,kairo::FormManagerBase*,kairo::Image& labels);
};
}
