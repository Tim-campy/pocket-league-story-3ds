#include "debug_input.hpp"
#include "../../api/debug_input.hpp"
#include "../../common/semantic_runtime.hpp"
#include <array>
#include <mutex>
#include <thread>
#include <set>
namespace {
struct Frame {
    bool left_shift{},right_shift{};
    std::array<bool,2>held{},down{};
    pls::kairo::Vector3 mouse;
    std::int32_t height{};
    std::int32_t touch_count{};
    float dpi{};bool fullscreen{};
};
std::mutex published_mutex;Frame published;bool available{},captured{};
struct Pump {
    std::set<std::pair<SDL_TouchID,SDL_FingerID>> fingers;
    Frame frame;int x{},y{};bool active{},open{};std::thread::id owner;
    void require()const{if(!active||owner!=std::this_thread::get_id())throw pls::cs::InvalidOperationException("SDL debug input pump requires its backend owner thread");}
}pump;
Frame snapshot(){std::lock_guard<std::mutex>lock(published_mutex);if(!available)throw pls::cs::InvalidOperationException("SDL debug input backend is not installed");auto value=published;if(captured){value.left_shift=value.right_shift=false;value.held={false,false};value.down={false,false};value.touch_count=0;}return value;}
std::size_t button_index(std::int32_t index){if(index!=0&&index!=1)throw pls::cs::NotSupportedException("Debug mouse input admits only left and right buttons");return static_cast<std::size_t>(index);}
void publish(){if(pump.fingers.size()>static_cast<std::size_t>(INT32_MAX))throw pls::cs::OverflowException();pump.frame.touch_count=static_cast<std::int32_t>(pump.fingers.size());pump.frame.mouse={static_cast<float>(pump.x),static_cast<float>(pump.frame.height)-static_cast<float>(pump.y),0.0f};std::lock_guard<std::mutex>lock(published_mutex);published=pump.frame;available=true;}
}
namespace pls::kairo {
bool DebugInput::GetKey(std::int32_t key){if(key!=304&&key!=303)throw cs::NotSupportedException("Debug GetKey admits only LeftShift and RightShift");const auto frame=snapshot();return key==304?frame.left_shift:frame.right_shift;}
bool DebugInput::GetMouseButton(std::int32_t button){const auto index=button_index(button);return snapshot().held[index];}
bool DebugInput::GetMouseButtonDown(std::int32_t button){const auto index=button_index(button);return snapshot().down[index];}
Vector3 DebugInput::get_mousePosition(){return snapshot().mouse;}
std::int32_t DebugInput::screen_height(){return snapshot().height;}
std::int32_t DebugInput::get_touchCount(){return snapshot().touch_count;}
float DebugInput::get_dpi(){return snapshot().dpi;}
bool DebugInput::get_fullScreen(){return snapshot().fullscreen;}
}
namespace pls::sdl {
void debug_input_initialize(int height,float dpi,bool fullscreen){
    if(height<=0)throw cs::ArgumentOutOfRangeException();pump={};pump.active=true;pump.owner=std::this_thread::get_id();pump.frame.height=height;
    int count=0;const auto*keys=SDL_GetKeyboardState(&count);
    pump.frame.left_shift=keys&&count>SDL_SCANCODE_LSHIFT&&keys[SDL_SCANCODE_LSHIFT]!=0;pump.frame.right_shift=keys&&count>SDL_SCANCODE_RSHIFT&&keys[SDL_SCANCODE_RSHIFT]!=0;
    const auto buttons=SDL_GetMouseState(&pump.x,&pump.y);pump.frame.held={bool(buttons&SDL_BUTTON_LMASK),bool(buttons&SDL_BUTTON_RMASK)};
    for(int device=0;device<SDL_GetNumTouchDevices();++device){const auto id=SDL_GetTouchDevice(device);for(int index=0;index<SDL_GetNumTouchFingers(id);++index)if(const auto* finger=SDL_GetTouchFinger(id,index))pump.fingers.emplace(id,finger->id);}
    pump.frame.dpi=dpi;pump.frame.fullscreen=fullscreen;publish();
}
void debug_input_begin_frame(int height){pump.require();if(height<=0)throw cs::ArgumentOutOfRangeException();pump.frame.height=height;pump.frame.down={false,false};pump.open=true;}
void debug_input_screen(float dpi,bool fullscreen){pump.require();if(!pump.open)throw cs::InvalidOperationException("SDL display snapshot outside backend pump");pump.frame.dpi=dpi;pump.frame.fullscreen=fullscreen;}
void debug_input_event(const SDL_Event&event){
    pump.require();if(!pump.open)throw cs::InvalidOperationException("SDL debug input event outside backend pump");
    if(event.type==SDL_KEYDOWN||event.type==SDL_KEYUP){const bool held=event.type==SDL_KEYDOWN;if(event.key.keysym.scancode==SDL_SCANCODE_LSHIFT)pump.frame.left_shift=held;else if(event.key.keysym.scancode==SDL_SCANCODE_RSHIFT)pump.frame.right_shift=held;}
    else if(event.type==SDL_MOUSEMOTION){pump.x=event.motion.x;pump.y=event.motion.y;}
    else if(event.type==SDL_MOUSEBUTTONDOWN||event.type==SDL_MOUSEBUTTONUP){pump.x=event.button.x;pump.y=event.button.y;
        int index=-1;if(event.button.button==SDL_BUTTON_LEFT)index=0;else if(event.button.button==SDL_BUTTON_RIGHT)index=1;
        if(index>=0){const auto slot=static_cast<std::size_t>(index);const bool held=event.type==SDL_MOUSEBUTTONDOWN;if(held&&!pump.frame.held[slot])pump.frame.down[slot]=true;pump.frame.held[slot]=held;}
    }else if(event.type==SDL_FINGERDOWN)pump.fingers.emplace(event.tfinger.touchId,event.tfinger.fingerId);
    else if(event.type==SDL_FINGERUP)pump.fingers.erase({event.tfinger.touchId,event.tfinger.fingerId});
    else if(event.type==SDL_WINDOWEVENT&&event.window.event==SDL_WINDOWEVENT_FOCUS_LOST){pump.frame.left_shift=pump.frame.right_shift=false;pump.frame.held={false,false};pump.fingers.clear();}
}
void debug_input_publish_frame(){pump.require();if(!pump.open)throw cs::InvalidOperationException("SDL debug input publish outside backend pump");publish();pump.open=false;}
void debug_input_fullscreen(bool fullscreen){pump.require();pump.frame.fullscreen=fullscreen;publish();}
void debug_input_capture(bool focus){pump.require();{std::lock_guard<std::mutex>lock(published_mutex);captured=focus;}pump.frame.left_shift=pump.frame.right_shift=false;pump.frame.held={false,false};pump.frame.down={false,false};pump.fingers.clear();publish();}
void debug_input_shutdown(){pump.require();{std::lock_guard<std::mutex>lock(published_mutex);available=false;captured=false;published={};}pump={};}
}
