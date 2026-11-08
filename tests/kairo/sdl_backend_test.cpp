#include "backend.hpp"
#include <iostream>
#include <stdexcept>
static void require(bool value) { if(!value)throw std::runtime_error("SDL backend fixture mismatch"); }
int main() {
    // Procedural fixture only. This is not a title/menu boot or a game screenshot.
    pls::sdl::Backend backend(8,8,true);
    backend.clear({0,0,0,255});
    backend.fill({1,1,2,2},{17,31,47,255});
    auto pixels=backend.read_pixels();auto offset=(1*8+1)*4;
    require(pixels[offset]==17&&pixels[offset+1]==31&&pixels[offset+2]==47&&pixels[offset+3]==255);
    std::vector<std::uint8_t> image{9,19,29,255};
    auto* texture=backend.upload_rgba8(1,1,image);
    require(backend.memory().texture_payload_bytes==4);
    backend.draw(texture,{0,0,1,1},{5,5,1,1});
    pixels=backend.read_pixels();offset=(5*8+5)*4;
    require(pixels[offset]==9&&pixels[offset+1]==19&&pixels[offset+2]==29);
    backend.release(texture);require(backend.memory().texture_payload_bytes==0);
    SDL_Event event{};event.type=SDL_MOUSEBUTTONDOWN;event.button.x=3;event.button.y=4;SDL_PushEvent(&event);
    bool pointer=false;for(const auto& input:backend.events()) if(input.kind==pls::platform::Input::Kind::pointer_down&&input.x==3&&input.y==4)pointer=true;
    require(pointer);backend.present();
    std::cout<<"SDL2_RGBA8_DRAW_INPUT_PASS\n";
}
