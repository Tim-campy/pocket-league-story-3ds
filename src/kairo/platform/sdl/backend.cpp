#include "backend.hpp"
#include "debug_input.hpp"
#include "system.hpp"
#include <stdexcept>
#include <limits>

namespace pls::kairo {
void UnityApplication::OpenURL(const cs::String& value){
    if(value.is_null())throw cs::ArgumentNullException();const auto url=value.utf8();int status;std::string error;
    {cs::GcNativeBlockingScope parked;status=SDL_OpenURL(url.c_str());if(status<0)error=SDL_GetError();}
    if(status<0)throw cs::IOException(error);
}
}

namespace pls::sdl {
static void check(int result) { if(result<0) throw std::runtime_error(SDL_GetError()); }
static SDL_Rect rect(platform::Rect r) { return {r.x,r.y,r.w,r.h}; }
static float screen_dpi(SDL_Window* window){float dpi=0;const auto display=window?SDL_GetWindowDisplayIndex(window):-1;if(display<0||SDL_GetDisplayDPI(display,&dpi,nullptr,nullptr)!=0||!std::isfinite(dpi)||dpi<=0)return 0;return dpi;}
static bool fullscreen(SDL_Window* window){return window&&(SDL_GetWindowFlags(window)&SDL_WINDOW_FULLSCREEN)!=0;}
Backend::Backend(int width,int height,bool headless):width_(width),height_(height) {
    if(width<=0||height<=0) throw std::invalid_argument("invalid surface dimensions");
    SDL_SetMainReady();
    if(headless) SDL_SetHint(SDL_HINT_VIDEODRIVER,"dummy");
    check(SDL_Init(SDL_INIT_VIDEO|SDL_INIT_EVENTS|SDL_INIT_TIMER));
    if(headless) {
        surface_=SDL_CreateRGBSurfaceWithFormat(0,width,height,32,SDL_PIXELFORMAT_RGBA32);
        if(surface_) renderer_=SDL_CreateSoftwareRenderer(surface_);
    } else {
        window_=SDL_CreateWindow("Unofficial port development host",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,width,height,0);
        if(window_) renderer_=SDL_CreateRenderer(window_,-1,SDL_RENDERER_ACCELERATED);
        if(!renderer_&&window_) renderer_=SDL_CreateRenderer(window_,-1,SDL_RENDERER_SOFTWARE);
    }
    if(!renderer_) {
        std::string error=SDL_GetError();
        if(surface_) SDL_FreeSurface(surface_);
        if(window_) SDL_DestroyWindow(window_);
        SDL_Quit();throw std::runtime_error(error);
    }
    check(SDL_SetRenderDrawBlendMode(renderer_,SDL_BLENDMODE_NONE));
    debug_input_initialize(height_,screen_dpi(window_),fullscreen(window_));
}
Backend::~Backend() {
    debug_input_shutdown();
    for(auto& item:textures_) SDL_DestroyTexture(item.first);
    SDL_DestroyRenderer(renderer_);
    if(surface_) SDL_FreeSurface(surface_);
    if(window_) SDL_DestroyWindow(window_);
    SDL_Quit();
}
void Backend::clear(platform::Color c) { check(SDL_SetRenderDrawColor(renderer_,c.r,c.g,c.b,c.a));check(SDL_RenderClear(renderer_)); }
void Backend::fill(platform::Rect r,platform::Color c) { auto native=rect(r);check(SDL_SetRenderDrawColor(renderer_,c.r,c.g,c.b,c.a));check(SDL_RenderFillRect(renderer_,&native)); }
void Backend::line(int x,int y,int x2,int y2,platform::Color c) { check(SDL_SetRenderDrawColor(renderer_,c.r,c.g,c.b,c.a));check(SDL_RenderDrawLine(renderer_,x,y,x2,y2)); }
void Backend::clip(const platform::Rect* r) { if(r){auto native=rect(*r);check(SDL_RenderSetClipRect(renderer_,&native));}else check(SDL_RenderSetClipRect(renderer_,nullptr)); }
SDL_Texture* Backend::upload_rgba8(int w,int h,const std::vector<std::uint8_t>& data) {
    if(w<=0||h<=0||std::uint64_t(w)*std::uint64_t(h)*4!=data.size()||w>std::numeric_limits<int>::max()/4) throw std::invalid_argument("invalid RGBA8 extent");
    auto* texture=SDL_CreateTexture(renderer_,SDL_PIXELFORMAT_RGBA32,SDL_TEXTUREACCESS_STATIC,w,h);
    if(!texture) throw std::runtime_error(SDL_GetError());
    if(SDL_UpdateTexture(texture,nullptr,data.data(),w*4)<0) {SDL_DestroyTexture(texture);throw std::runtime_error(SDL_GetError());}
    textures_[texture]=data.size();
    return texture;
}
void Backend::release(SDL_Texture* texture) { if(textures_.erase(texture)) SDL_DestroyTexture(texture); }
void Backend::draw(SDL_Texture* texture,platform::Rect source,platform::Rect destination,bool blend) {
    if(!textures_.count(texture)) throw std::invalid_argument("texture not owned by this backend");
    check(SDL_SetTextureBlendMode(texture,blend?SDL_BLENDMODE_BLEND:SDL_BLENDMODE_NONE));
    auto s=rect(source),d=rect(destination);check(SDL_RenderCopy(renderer_,texture,&s,&d));
}
std::vector<platform::Input> Backend::events() {
    std::vector<platform::Input> result;SDL_Event event{};
    debug_input_begin_frame(height_);
    debug_input_screen(screen_dpi(window_),fullscreen(window_));
    while(SDL_PollEvent(&event)) {
        debug_input_event(event);
        using Kind=platform::Input::Kind;
        if(event.type==SDL_QUIT) result.push_back({Kind::quit});
        else if(event.type==SDL_MOUSEMOTION) result.push_back({Kind::pointer_move,event.motion.x,event.motion.y});
        else if(event.type==SDL_MOUSEBUTTONDOWN||event.type==SDL_MOUSEBUTTONUP) result.push_back({event.type==SDL_MOUSEBUTTONDOWN?Kind::pointer_down:Kind::pointer_up,event.button.x,event.button.y,event.button.button});
        else if(event.type==SDL_KEYDOWN||event.type==SDL_KEYUP) result.push_back({event.type==SDL_KEYDOWN?Kind::key_down:Kind::key_up,0,0,event.key.keysym.sym});
    }
    debug_input_publish_frame();
    return result;
}
std::vector<std::uint8_t> Backend::read_pixels() { std::vector<std::uint8_t> result(std::size_t(width_)*height_*4);check(SDL_RenderReadPixels(renderer_,nullptr,SDL_PIXELFORMAT_RGBA32,result.data(),width_*4));return result; }
void Backend::present() { SDL_RenderPresent(renderer_); }
platform::Memory Backend::memory() const { platform::Memory result;for(const auto& item:textures_) result.texture_payload_bytes+=item.second;return result; }
std::string Backend::preference_path() const { auto* value=SDL_GetPrefPath("UnofficialPort","PocketLeagueStory");if(!value)throw std::runtime_error(SDL_GetError());std::string result(value);SDL_free(value);return result; }
}
