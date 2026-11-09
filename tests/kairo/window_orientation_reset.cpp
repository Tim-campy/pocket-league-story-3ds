#include "backend.hpp"
#include "../../src/kairo/api/debug_input.hpp"
#include "application.hpp"
#include <stdexcept>
#include <iostream>
int main(){
    if(SDL_setenv("SDL_VIDEODRIVER","dummy",1)!=0)throw std::runtime_error("Cannot select own dummy window fixture");
    pls::sdl::Backend backend(240,280,false);
    auto* window=SDL_GetWindowFromID(backend.native_window_id());
    if(!window)throw std::runtime_error("Fixture needs an actual SDL window");
    SDL_SetWindowSize(window,280,240);int w=0,h=0;SDL_GetWindowSize(window,&w,&h);
    if(w!=280||h!=240)throw std::runtime_error("Fixture resize failed");
    backend.reset_default_orientation();SDL_GetWindowSize(window,&w,&h);
    if(w!=240||h!=280)throw std::runtime_error("Default window dimensions not restored");
    backend.reset_default_orientation();SDL_GetWindowSize(window,&w,&h);
    if(w!=240||h!=280)throw std::runtime_error("Repeated reset changed default");
    backend.set_fullscreen(true);
    if(!(SDL_GetWindowFlags(window)&SDL_WINDOW_FULLSCREEN)||!pls::kairo::DebugInput::get_fullScreen())throw std::runtime_error("Fullscreen flag did not reach SDL and its reader");
    backend.set_fullscreen(false);
    if((SDL_GetWindowFlags(window)&SDL_WINDOW_FULLSCREEN)||pls::kairo::DebugInput::get_fullScreen())throw std::runtime_error("Fullscreen flag did not clear");
    backend.set_orientation(pls::kairo::WindowOrientation::auto_rotation);
    if(backend.orientation()!=pls::kairo::WindowOrientation::auto_rotation)throw std::runtime_error("Automatic mode was not retained");
    backend.set_orientation(pls::kairo::WindowOrientation::portrait);
    if(backend.orientation()!=pls::kairo::WindowOrientation::portrait)throw std::runtime_error("Current portrait mode was not retained");
    bool refused=false;try{backend.set_orientation(pls::kairo::WindowOrientation::landscape_right);}catch(const pls::cs::NotSupportedException&){refused=true;}
    if(!refused)throw std::runtime_error("Unimplemented physical rotation was not refused");
    std::cout<<"{\"assertions\":9,\"SDL_window_reset\":true,\"fullscreen_toggle\":true,\"physical_display_used\":false}\n";
}
