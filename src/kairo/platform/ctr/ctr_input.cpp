#include "ctr_input.hpp"
#include "circle_pad.hpp"
#include "c_stick.hpp"
#include "zoom.hpp"
#include "screen.hpp"
#include "application.hpp"
#include "managed_collation.hpp"
#include <3ds.h>
#include <algorithm>
#include <cstdio>

// Make IR optional: a missing service must not abort libctru's startup.
extern "C" bool hidShouldUseIrrst(void) { return false; }

namespace pls::ctr {
namespace {
bool back(const std::u16string& label){return label==u"back"||label==u"\x623b\x308b";}
bool menu(const std::u16string& label){return label==u"menu"||label==u"\xff92\xff86\xff6d\xff70";}
std::u16string lower(const cs::String& value){return value.is_null()?std::u16string():cs::culture_to_lower(value).code_units();}
}
Input::Input() {
    bool new_model = false;
    Result result = APT_CheckNew3DS(&new_model);
    if (R_SUCCEEDED(result) && new_model) {
        result = irrstInit();
        c_stick_available_ = R_SUCCEEDED(result);
    }
    std::fprintf(stderr,"PLS_VIDEO_CSTICK available=%d result=%ld\n",int(c_stick_available_),long(result));
    std::fflush(stderr);
}
Input::~Input() {
    kairo::detail::publish_c_stick({});
    if (c_stick_available_) irrstExit();
}
void Input::poll(kairo::Canvas& canvas,kairo::FormManagerBase* manager,kairo::Image& labels,
                 void (*label_touch)(int,platform::ScreenPoint)){
    hidScanInput();const auto down=hidKeysDown(),up=hidKeysUp(),held=hidKeysHeld();
    struct Key{u32 physical;int logical;};
    const Key keys[]={{KEY_A,kairo::Canvas::KEY_SELECT},{KEY_DUP,kairo::Canvas::KEY_UP},{KEY_DDOWN,kairo::Canvas::KEY_DOWN},{KEY_DLEFT,kairo::Canvas::KEY_LEFT},{KEY_DRIGHT,kairo::Canvas::KEY_RIGHT}};
    for(const auto& key:keys){if(down&key.physical)canvas.KeyDown(key.logical);if(up&key.physical)canvas.KeyUp(key.logical);}
    if((down|up)&(KEY_B|KEY_X|KEY_Y)){
        const auto l=lower(canvas.GetSoftLabelL()),r=lower(canvas.GetSoftLabelR());
        const int b=back(l)?kairo::Canvas::KEY_SOFT1:back(r)?kairo::Canvas::KEY_SOFT2:0;
        const int y=menu(r)?kairo::Canvas::KEY_SOFT2:menu(l)?kairo::Canvas::KEY_SOFT1:b;
        const int x=!l.empty()&&!back(l)&&!menu(l)?kairo::Canvas::KEY_SOFT1:0;
        const std::array<u32,3> buttons{KEY_B,KEY_X,KEY_Y};const std::array<int,3> logical{b,x,y};
        for(std::size_t i=0;i<buttons.size();++i){
            if(down&buttons[i]){soft_[i]=logical[i];if(soft_[i])canvas.KeyDown(soft_[i]);}
            if(up&buttons[i]){if(soft_[i])canvas.KeyUp(soft_[i]);soft_[i]=0;}
        }
    }
    circlePosition position{};hidCircleRead(&position);
    // Azahar models the calibrated hardware limit as 0x9a; verify on the device.
    const auto axis=[](int raw){constexpr int radius=154;return kairo::normalize_circle_pad_axis(std::clamp(raw,-radius,radius)*kairo::circle_pad_max/radius);};
    const kairo::CirclePadState pad{axis(position.dx),axis(-int(position.dy))};
    kairo::detail::publish_circle_pad(pad);
    const auto form=manager?manager->GetTopForm():nullptr;
    const bool map=form&&form->GetId()==9;
    circlePosition cstick{};
    if (c_stick_available_) irrstCstickRead(&cstick);
    const auto stick_axis=[](int raw){constexpr int radius=154;return std::clamp(raw,-radius,radius)*kairo::c_stick_max/radius;};
    kairo::detail::publish_c_stick(map?kairo::normalize_c_stick({stick_axis(cstick.dx),stick_axis(-int(cstick.dy))}):kairo::CStickState{});
    if (form && form->GetId()!=9 && form->GetId()!=2) {
        if (const int key=menu_stick_.update(pad)) canvas.KeyClick(key);
    } else menu_stick_.reset();
    const int zoom=map?int(bool(held&KEY_R))-int(bool(held&KEY_L)):0;
    kairo::detail::publish_zoom_direction(zoom);
    if(down&KEY_TOUCH){
        touchPosition point{};hidTouchRead(&point);
        const platform::ScreenPoint local{platform::Screen::bottom,int(point.px),int(point.py)};
        touch_x_=local.x;touch_y_=local.y;
        if(local.x>=0&&local.x<320&&local.y>=0&&local.y<240){
            const auto& pixels=labels.pixels();
            if(pixels[(std::size_t(touch_y_)*320+touch_x_)*4+3]){
                touch_=true;label_touch(kairo::MotionEvent::ACTION_DOWN,local);
            }
        }
    }
    if((held&KEY_TOUCH)&&touch_){touchPosition point{};hidTouchRead(&point);touch_x_=int(point.px);touch_y_=int(point.py);}
    if((up&KEY_TOUCH)&&touch_){touch_=false;label_touch(kairo::MotionEvent::ACTION_UP,{platform::Screen::bottom,touch_x_,touch_y_});}
    if((down&KEY_START)&&manager){kairo::detail::publish_circle_pad({});manager->ShowTerminationDialog();canvas.ClearKeyBuffer();}
}
}
