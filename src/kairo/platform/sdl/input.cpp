#include "input.hpp"
#include <SDL.h>
#include <array>

namespace pls::kairo {
std::int32_t CanvasKeyState::history(std::int32_t offset){return history_.at(cs::mod_i32(cs::add_i32(cs::add_i32(index_,history_.length()),offset),history_.length()));}
bool CanvasKeyState::CheckKeyPulse(std::int32_t key){const auto value=pulse_;pulse_=value&~key;return (value&key)!=0;}
bool CanvasKeyState::CheckKeyRepeat(std::int32_t key,std::int32_t interval) {
    if((history(-1)&key)==0)return false;if((history(-2)&key)==0)return true;
    for(std::int32_t i=1;i<interval;i=cs::add_i32(i,1)){const auto value=history(cs::sub_i32(-2,i));const auto bits=value&key;if(cs::sub_i32(value,bits)!=0||bits==0)return false;}
    return true;
}
bool CanvasKeyState::CheckKeyDouble(std::int32_t key,std::int32_t interval) {
    if((history(-1)&key)==0||(history(-2)&key)!=0)return false;
    for(std::int32_t i=3;i<cs::add_i32(interval,3);i=cs::add_i32(i,1)){const auto value=history(-i);const auto bits=value&key;if(cs::sub_i32(value,bits)!=0)return false;if(bits!=0)return true;}
    return false;
}
void CanvasKeyState::KeyDown(std::int32_t key,bool pulse) {
    if(key==-1)return;event_|=key;work_|=key;if(pulse)invalid_pulse_&=~key;else invalid_pulse_|=key;if(on_key_down)on_key_down(key);
}
void CanvasKeyState::KeyUp(std::int32_t key){if(key==-1)return;work_&=~key;if(on_key_up)on_key_up(key);}
void CanvasKeyState::KeyClick(std::int32_t key){if(key==-1)return;event_|=key;if(on_key_down)on_key_down(key);if(on_key_up)on_key_up(key);}
void CanvasKeyState::DecideKeyState(std::int32_t touches) {
    if(touches==0&&invalid_touch_)invalid_touch_=false;
    const auto next=work_|event_;event_=0;pulse_=(next^state_)&next&~invalid_pulse_;state_=next;invalid_pulse_=0;
    work_&=~KEY_SOFT1;work_&=~KEY_SOFT2;history_.at(index_)=next;index_=(index_+1)%history_.length();
}
void CanvasKeyState::ClearKeyBuffer(){for(std::int32_t i=0;i<history_.length();++i)history_.at(i)=0;index_=pulse_=state_=event_=work_=0;invalid_touch_=true;}
std::int32_t CanvasKeyState::GetKeyID(std::int32_t code,bool debug) {
    if(code>=256&&code<=265)return code-256;
    switch(code){case 42:case 268:return 10;case 35:case 267:return 11;case 273:return 17;case 275:return 18;case 274:return 19;case 276:return 16;
        case 13:case 32:case 122:case 271:return 20;case 97:return 21;case 115:case 120:return 22;case 304:return debug?6:21;case 303:return debug?6:22;case 305:case 306:return debug?4:-1;default:return -1;}
}
void CanvasKeyState::PhysicalDown(std::int32_t code,bool debug){const auto id=GetKeyID(code,debug);if(id!=-1){const auto bit=cs::shl_i32(1,id);if((disabled_&bit)==0){work_|=bit;if(on_key_down)on_key_down(id);}}}
void CanvasKeyState::PhysicalUp(std::int32_t code,bool debug){const auto id=GetKeyID(code,debug);if(id!=-1){const auto bit=cs::shl_i32(1,id);if((disabled_&bit)==0){work_&=~bit;if(on_key_up)on_key_up(id);}}}
namespace {
std::int32_t unity_key(std::int32_t key) {
    switch(key){case SDLK_KP_0:return 256;case SDLK_KP_1:return 257;case SDLK_KP_2:return 258;case SDLK_KP_3:return 259;case SDLK_KP_4:return 260;case SDLK_KP_5:return 261;
        case SDLK_KP_6:return 262;case SDLK_KP_7:return 263;case SDLK_KP_8:return 264;case SDLK_KP_9:return 265;case SDLK_KP_DIVIDE:return 267;case SDLK_KP_MULTIPLY:return 268;
        case SDLK_KP_ENTER:return 271;case SDLK_UP:return 273;case SDLK_DOWN:return 274;case SDLK_RIGHT:return 275;case SDLK_LEFT:return 276;case SDLK_HOME:return 278;
        case SDLK_LSHIFT:return 304;case SDLK_RSHIFT:return 303;case SDLK_LCTRL:return 306;case SDLK_RCTRL:return 305;default:return key;}
}
}
void PcInputAdapter::feed(const platform::Input& event) {
    using Kind=platform::Input::Kind;
    if(event.kind==Kind::key_down)held_.insert(unity_key(event.key));
    else if(event.kind==Kind::key_up)held_.erase(unity_key(event.key));
    else if(event.kind==Kind::pointer_down){x_=event.x;y_=event.y;if(event.key==3)right_down_=true;else if(event.key==0||event.key==1)mouse_down_=true;}
    else if(event.kind==Kind::pointer_up){x_=event.x;y_=event.y;if(event.key==3)right_down_=false;else if(event.key==0||event.key==1)mouse_down_=false;}
    else if(event.kind==Kind::pointer_move){x_=event.x;y_=event.y;}
}
void PcInputAdapter::decide_frame() {
    // Order and duplicated key groups match Canvas.VALID_KEYS, including the
    // original release interaction between Asterisk and KeypadMultiply.
    static const std::array<std::vector<std::int32_t>,23> groups={{{256},{257},{258},{259},{260},{261},{262},{263},{264},{265},{42},{35},{268},{267},{273},{275},{274},{276},{271,32,122,13},{97,304},{115,120,303},{27},{278}}};
    for(std::size_t i=0;i<groups.size();++i){bool down=false;for(auto key:groups[i])if(held_.count(key)){down=true;break;}
        if(down==groups_[i])continue;groups_[i]=down;const auto code=groups[i][0];
        if(down){if(on_key_down)on_key_down(code,cs::make_ref<KeyEvent>(0,code));else state_.PhysicalDown(code);}
        else {if(on_key_up)on_key_up(code,cs::make_ref<KeyEvent>(1,code));else state_.PhysicalUp(code);}
    }
    int action=-1;
    if(mouse_down_&&!previous_mouse_down_)action=0;
    else if(mouse_down_&&(x_!=previous_x_||y_!=previous_y_))action=2;
    else if(!mouse_down_&&previous_mouse_down_)action=1;
    if(action!=-1&&on_touch)on_touch(cs::make_ref<MotionEvent>(action,cs::Array<std::int32_t>::make(1),cs::Array<float>::from({static_cast<float>(x_),static_cast<float>(y_)}),cs::Array<float>{},true));
    previous_mouse_down_=mouse_down_;previous_x_=x_;previous_y_=y_;
    if(right_down_!=previous_right_down_){
        // Canvas emits ACTION_DOWN even for its right-button OnKeyUp event.
        auto event=cs::make_ref<KeyEvent>(0,260);
        if(right_down_){if(on_key_down)on_key_down(260,event);else state_.PhysicalDown(260);}
        else {if(on_key_up)on_key_up(260,event);else state_.PhysicalUp(260);}
    }
    previous_right_down_=right_down_;
    state_.DecideKeyState();
}
}
