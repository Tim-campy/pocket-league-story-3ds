#pragma once
#include "platform.hpp"
#include <SDL.h>
#include <unordered_map>
#include <memory>
#include <atomic>
namespace pls::kairo {enum class WindowOrientation:std::int32_t;}

namespace pls::sdl {
class Backend final : public platform::Drawing {
    SDL_Window* window_{};
    SDL_Surface* surface_{};
    SDL_Renderer* renderer_{};
    std::unordered_map<SDL_Texture*,std::uint64_t> textures_;
    int width_,height_;
    std::atomic<std::int32_t> orientation_mode_{};
public:
    Backend(int width,int height,bool headless);
    ~Backend() override;
    Backend(const Backend&)=delete;
    Backend& operator=(const Backend&)=delete;
    void clear(platform::Color) override;
    void fill(platform::Rect,platform::Color) override;
    void line(int,int,int,int,platform::Color) override;
    void clip(const platform::Rect*) override;
    SDL_Texture* upload_rgba8(int,int,const std::vector<std::uint8_t>&);
    void release(SDL_Texture*);
    void draw(SDL_Texture*,platform::Rect,platform::Rect,bool blend=true);
    std::vector<platform::Input> events() override;
    std::vector<std::uint8_t> read_pixels();
    void present() override;
    platform::Memory memory() const override;
    std::string preference_path() const;
    void reset_default_orientation();
    void set_fullscreen(bool);
    void set_orientation(kairo::WindowOrientation);
    kairo::WindowOrientation orientation()const;
    std::uint32_t native_window_id()const{return window_?SDL_GetWindowID(window_):0;}
};
}
