#include "ctr_input.hpp"
#include "circle_pad.hpp"
#include "screen.hpp"
#include "application.hpp"
#include "managed_collation.hpp"
#include <3ds.h>
#include <algorithm>
#include <cstdio>

namespace pls::ctr {
namespace {
bool back(const std::u16string& label){return label==u"back"||label==u"\x623b\x308b";}
bool menu(const std::u16string& label){return label==u"menu"||label==u"\xff92\xff86\xff6d\xff70";}
std::u16string lower(const cs::String& value){return value.is_null()?std::u16string():cs::culture_to_lower(value).code_units();}
}
Input::Input(){
    single_points_=cs::Array<float>::make(2);double_points_=cs::Array<float>::make(4);
    pinch_events_=cs::Array<cs::Ref<kairo::MotionEvent>>::make(5);
    const auto one=cs::Array<std::int32_t>::from({0}),two=cs::Array<std::int32_t>::from({0,1});
    const int actions[]={kairo::MotionEvent::ACTION_DOWN,kairo::MotionEvent::ACTION_POINTER_2_DOWN,kairo::MotionEvent::ACTION_MOVE,kairo::MotionEvent::ACTION_POINTER_2_UP,kairo::MotionEvent::ACTION_UP};
    for(int i=0;i<5;++i){const bool single=i==0||i==4;pinch_events_.set_Item(i,cs::make_ref<kairo::MotionEvent>(actions[i],single?one:two,single?single_points_:double_points_,cs::Array<float>{}));}
}
void Input::poll(kairo::Canvas& canvas,kairo::FormManagerBase* manager,kairo::Image& labels){
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
    if(down||up){std::fprintf(stderr,"PLS_VIDEO_INPUT down=%lu up=%lu pad=%d,%d form=%d\n",static_cast<unsigned long>(down),static_cast<unsigned long>(up),pad.x,pad.y,form?form->GetId():-1);std::fflush(stderr);}
    const int zoom=map&&!pad.x&&!pad.y?int(bool(held&KEY_R))-int(bool(held&KEY_L)):0;
    auto pinch=[&](int event){
        constexpr int x=200,y=23+(240-23)/2;
        single_points_[0]=double_points_[0]=float(x-pinch_distance_/2);
        single_points_[1]=double_points_[1]=double_points_[3]=float(y);
        double_points_[2]=float(x+pinch_distance_/2);
        canvas.OnTouchEvent(pinch_events_[event]);
    };
    if(zoom){
        if(!pinching_){pinching_=true;pinch_distance_=80;pinch(0);pinch(1);}
        pinch_distance_=std::clamp(pinch_distance_+zoom*6,20,220);pinch(2);
    }else if(pinching_){pinch(3);pinch(4);pinching_=false;}
    if(down&KEY_TOUCH){
        touchPosition point{};hidTouchRead(&point);
        const platform::ScreenPoint local{platform::Screen::bottom,int(point.px),int(point.py)};
        touch_x_=local.x;touch_y_=local.y;
        if(local.x>=0&&local.x<320&&local.y>=0&&local.y<240){
            const auto& pixels=labels.pixels();
            if(pixels[(std::size_t(touch_y_)*320+touch_x_)*4+3]){
                touch_=true;canvas.host_event({platform::Input::Kind::pointer_down,touch_x_,touch_y_});
            }
        }
    }
    if((held&KEY_TOUCH)&&touch_){touchPosition point{};hidTouchRead(&point);touch_x_=int(point.px);touch_y_=int(point.py);}
    if((up&KEY_TOUCH)&&touch_){touch_=false;canvas.host_event({platform::Input::Kind::pointer_up,touch_x_,touch_y_});}
    if((down&KEY_START)&&manager){kairo::detail::publish_circle_pad({});manager->ShowTerminationDialog();canvas.ClearKeyBuffer();}
}
}
