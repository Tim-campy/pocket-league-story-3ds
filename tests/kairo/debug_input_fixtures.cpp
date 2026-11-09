#include "backend.hpp"
#include "../../src/kairo/platform/sdl/debug_input.hpp"
#include "../../src/kairo/api/debug_input.hpp"
#include "semantic_runtime.hpp"
#include <atomic>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <thread>
using pls::kairo::DebugInput;
namespace {
int assertions=0;void check(bool value,const char*message){++assertions;if(!value)throw std::runtime_error(message);}
void push(SDL_Event e){if(SDL_PushEvent(&e)!=1)throw std::runtime_error("Synthetic SDL event rejected");}
SDL_Event key(Uint32 type,SDL_Scancode code,bool repeat=false){SDL_Event e{};e.type=type;e.key.keysym.scancode=code;e.key.keysym.sym=SDL_GetKeyFromScancode(code);e.key.repeat=repeat?1:0;return e;}
SDL_Event mouse(Uint32 type,Uint8 button,int x,int y){SDL_Event e{};e.type=type;e.button.button=button;e.button.x=x;e.button.y=y;return e;}
SDL_Event motion(int x,int y){SDL_Event e{};e.type=SDL_MOUSEMOTION;e.motion.x=x;e.motion.y=y;return e;}
SDL_Event finger(Uint32 type,SDL_TouchID device,SDL_FingerID id){SDL_Event e{};e.type=type;e.tfinger.touchId=device;e.tfinger.fingerId=id;return e;}
std::string bits(float value){std::ostringstream out;out<<std::hex<<std::setfill('0')<<std::setw(8)<<pls::cs::bit_copy<std::uint32_t>(value);return out.str();}
std::string trace(){
    auto p=DebugInput::get_mousePosition();
    const float px=(DebugInput::get_mousePosition().x-static_cast<float>(4))*100.0f/75.5f;
    const float py=(static_cast<float>(DebugInput::screen_height())-DebugInput::get_mousePosition().y-static_cast<float>(6))*100.0f/75.5f;
    std::ostringstream out;out<<DebugInput::GetKey(304)<<DebugInput::GetKey(303)<<';'<<DebugInput::GetMouseButton(0)<<DebugInput::GetMouseButton(1)<<';'<<DebugInput::GetMouseButtonDown(0)<<DebugInput::GetMouseButtonDown(1)<<';'<<DebugInput::GetMouseButtonDown(0)<<DebugInput::GetMouseButtonDown(1)<<';'<<bits(p.x)<<','<<bits(p.y)<<','<<bits(p.z)<<';'<<DebugInput::screen_height()<<';'<<bits(px)<<','<<bits(py);return out.str();
}
void events_for(int frame){switch(frame){
case 1:push(key(SDL_KEYDOWN,SDL_SCANCODE_LSHIFT));push(motion(10,20));push(mouse(SDL_MOUSEBUTTONDOWN,SDL_BUTTON_LEFT,10,20));break;
case 3:push(key(SDL_KEYDOWN,SDL_SCANCODE_LSHIFT,true));push(mouse(SDL_MOUSEBUTTONDOWN,SDL_BUTTON_LEFT,10,20));push(motion(-5,300));break;
case 4:push(key(SDL_KEYDOWN,SDL_SCANCODE_RSHIFT));push(key(SDL_KEYUP,SDL_SCANCODE_LSHIFT));push(mouse(SDL_MOUSEBUTTONDOWN,SDL_BUTTON_RIGHT,30,40));break;
case 5:push(mouse(SDL_MOUSEBUTTONUP,SDL_BUTTON_LEFT,31,41));push(mouse(SDL_MOUSEBUTTONUP,SDL_BUTTON_RIGHT,32,42));push(key(SDL_KEYUP,SDL_SCANCODE_RSHIFT));break;
case 6:push(mouse(SDL_MOUSEBUTTONDOWN,SDL_BUTTON_LEFT,2,3));push(mouse(SDL_MOUSEBUTTONUP,SDL_BUTTON_LEFT,2,3));break;
case 7:push(motion(INT32_MIN,INT32_MAX));break;
case 8:{push(mouse(SDL_MOUSEBUTTONDOWN,SDL_BUTTON_LEFT,6,7));push(mouse(SDL_MOUSEBUTTONDOWN,SDL_BUTTON_RIGHT,6,7));push(key(SDL_KEYDOWN,SDL_SCANCODE_LSHIFT));SDL_Event e{};e.type=SDL_WINDOWEVENT;e.window.event=SDL_WINDOWEVENT_FOCUS_LOST;push(e);break;}
case 10:push(mouse(SDL_MOUSEBUTTONDOWN,SDL_BUTTON_MIDDLE,9,9));push(key(SDL_KEYDOWN,SDL_SCANCODE_A));push(key(SDL_KEYDOWN,SDL_SCANCODE_RSHIFT));break;
case 11:push(mouse(SDL_MOUSEBUTTONUP,SDL_BUTTON_MIDDLE,9,9));push(key(SDL_KEYUP,SDL_SCANCODE_RSHIFT));break;
default:break;
}}
}
int main(int argc,char**){const bool policy=argc>1;
    bool failed=false;try{DebugInput::GetKey(304);}catch(const pls::cs::InvalidOperationException&){failed=true;}check(failed,"No backend must be explicit");
    {
        pls::sdl::Backend backend(240,280,true);check(DebugInput::screen_height()==280,"Render height snapshot");
        for(int frame=0;frame<12;++frame){events_for(frame);const auto events=backend.events();
            if(frame==1){bool shift=false,button=false;for(const auto&e:events){shift|=e.kind==pls::platform::Input::Kind::key_down&&e.key==SDLK_LSHIFT;button|=e.kind==pls::platform::Input::Kind::pointer_down&&e.x==10&&e.y==20;}check(shift&&button,"Existing Canvas event stream preserved");}
            const auto row=trace();check(row==trace(),"Queries must not consume edges or mutate a snapshot");if(!policy)std::cout<<"frame-"<<frame<<'\t'<<row<<'\n';
        }
        auto copy=DebugInput::get_mousePosition();copy.x=12345;check(DebugInput::get_mousePosition().x!=copy.x,"Vector3 is a value copy");
        failed=false;try{DebugInput::GetKey(97);}catch(const pls::cs::NotSupportedException&){failed=true;}check(failed,"Unproved key code refused");
        failed=false;try{DebugInput::GetMouseButton(2);}catch(const pls::cs::NotSupportedException&){failed=true;}check(failed,"Unproved mouse button refused");
        failed=false;try{DebugInput::GetMouseButtonDown(-1);}catch(const pls::cs::NotSupportedException&){failed=true;}check(failed,"Unproved down index refused");
        const auto previous=DebugInput::get_mousePosition();pls::sdl::debug_input_begin_frame(280);pls::sdl::debug_input_event(motion(99,100));check(DebugInput::get_mousePosition().x==previous.x,"Unpublished half-frame invisible");pls::sdl::debug_input_publish_frame();check(DebugInput::get_mousePosition().x==99&&DebugInput::get_mousePosition().y==180,"Whole snapshot published");
        failed=false;try{pls::sdl::debug_input_publish_frame();}catch(const pls::cs::InvalidOperationException&){failed=true;}check(failed,"Double publication refused");
        check(DebugInput::get_touchCount()==0,"Mouse input is not a touch finger");
        check(DebugInput::get_dpi()==0&&!DebugInput::get_fullScreen(),"Headless has unknown DPI and no fullscreen window");
        pls::sdl::debug_input_begin_frame(280);pls::sdl::debug_input_screen(160.0f,true);check(DebugInput::get_dpi()==0&&!DebugInput::get_fullScreen(),"Unpublished display metadata invisible");pls::sdl::debug_input_publish_frame();check(DebugInput::get_dpi()==160.0f&&DebugInput::get_fullScreen(),"Whole display metadata published");
        const auto touch_frame=[&](SDL_Event event){pls::sdl::debug_input_begin_frame(280);pls::sdl::debug_input_event(event);pls::sdl::debug_input_publish_frame();};
        pls::sdl::debug_input_begin_frame(280);pls::sdl::debug_input_event(finger(SDL_FINGERDOWN,11,22));check(DebugInput::get_touchCount()==0,"Unpublished touch state invisible");pls::sdl::debug_input_publish_frame();check(DebugInput::get_touchCount()==1,"First finger published");
        touch_frame(finger(SDL_FINGERDOWN,11,22));touch_frame(finger(SDL_FINGERDOWN,12,22));check(DebugInput::get_touchCount()==2,"Finger identity includes device; duplicate down is idempotent");
        touch_frame(finger(SDL_FINGERUP,99,22));check(DebugInput::get_touchCount()==2,"Unknown finger up does not change active count");
        touch_frame(finger(SDL_FINGERUP,11,22));check(DebugInput::get_touchCount()==1,"Only matching finger removed");
        touch_frame(finger(SDL_FINGERMOTION,12,22));check(DebugInput::get_touchCount()==1,"Finger motion preserves count");
        SDL_Event lost{};lost.type=SDL_WINDOWEVENT;lost.window.event=SDL_WINDOWEVENT_FOCUS_LOST;touch_frame(lost);check(DebugInput::get_touchCount()==0,"Focus loss cancels held fingers");
        if(policy){push(motion(0,0));backend.events();std::atomic<bool>running{true},valid{true};std::atomic<int>observed{-1},reads{0};
            std::thread reader([&]{while(running){const auto p=DebugInput::get_mousePosition();if(p.x+p.y!=280.0f||p.z!=0)valid=false;observed=static_cast<int>(p.x);++reads;}});
            const auto deadline=std::chrono::steady_clock::now()+std::chrono::seconds(5);
            const auto await=[&](int wanted){while(observed<wanted){if(std::chrono::steady_clock::now()>deadline){valid=false;return;}std::this_thread::yield();}};
            await(0);for(int i=1;i<=100&&valid;++i){push(motion(i,i));backend.events();await(i);}running=false;reader.join();check(valid&&observed==100&&reads>=100,"Concurrent Vector3 reads are untorn and exercised for every published frame");
        }
    }
    failed=false;try{DebugInput::get_mousePosition();}catch(const pls::cs::InvalidOperationException&){failed=true;}check(failed,"Destroyed backend invalidates snapshot");
    if(policy)std::cout<<"{\"status\":\"PASS\",\"assertions\":"<<assertions<<",\"sdk_synthetic_frames\":12,\"game_boot\":false,\"physical_user_input_used\":false}\n";
}
