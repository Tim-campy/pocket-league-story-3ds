#pragma once
// Phase 3 prototype, stage 1 (platform only; user decision of 2026-11-16,
// docs/design/phase3-decision.md). Development host for the PC:
//   * top window 400x240 shows the game (the game itself lays out for 400x240);
//   * bottom window 320x240 shows touchable button labels and a provisional panel;
//   * keyboard (and an SDL game controller) mapped as 3DS buttons.
// No generated method is called and no game state is written: buttons become
// Canvas keys, zoom pointer events, and the per-frame circle pad API.
#include <SDL.h>
#include <array>
#include <cstdint>
#include <filesystem>
#include <string>
#include <vector>
#include "canvas.hpp"
#include "forms.hpp"
#include "graphics.hpp"
#include "port_dialog.hpp"

namespace pls::pc::dual {
constexpr int top_width = 400, top_height = 240, bottom_width = 320, bottom_height = 240;

enum class Button { A, B, X, Y, L, R, Start, Select, Up, Down, Left, Right, Count };
constexpr const char* button_name(Button b) {
    constexpr const char* names[] = {"A", "B", "X", "Y", "L", "R", "START", "SELECT", "UP", "DOWN", "LEFT", "RIGHT"};
    return names[static_cast<int>(b)];
}

// What each button does now, derived from the soft labels the game shows.
struct Meaning {
    std::string a = "Confirm", b, x, y;
    std::int32_t b_key = 0, x_key = 0, y_key = 0;  // Canvas soft key bits, 0 = no action
};
Meaning meaning(kairo::Canvas& canvas);

class Host {
public:
    explicit Host(int scale);
    ~Host();
    Host(const Host&) = delete;
    Host& operator=(const Host&) = delete;
    // Keyboard/controller/bottom-window events (top-window mouse stays with the game).
    // Returns true when the event was consumed as a 3DS button.
    bool handle(const SDL_Event& event, kairo::Canvas& canvas, std::uint32_t top_window);
    // Per frame: publish the circle pad sample separately from touch input.
    void update(kairo::Canvas& canvas, kairo::FormManagerBase* manager);
    void draw(kairo::Canvas& canvas, kairo::FormManagerBase* manager);
    void capture(const std::filesystem::path& folder, std::uint64_t frame, const std::vector<std::uint8_t>& top_rgba);
    int scale() const { return scale_; }
    // Port dialogs go to the bottom screen (decision item 5); the top keeps the game.
    void set_dialog(kairo::PortDialog* dialog) { dialog_ = dialog; }
    void draw_dialog();
    // B.3: the game's GamePad surface (soft label bar/buttons) is drawn into its own
    // image and shown on the bottom screen; the top keeps GameView only.
    void begin_game_draw(cs::Ref<kairo::Image> display);
    void end_game_draw();

private:
    void press(Button button, bool down, kairo::Canvas& canvas);
    int scale_;
    SDL_Window* window_ = nullptr;
    SDL_Renderer* renderer_ = nullptr;
    SDL_GameController* controller_ = nullptr;
    cs::Ref<kairo::Image> panel_;
    cs::Ref<kairo::Image> display_, gpad_image_;
    kairo::Graphics* routed_ = nullptr;
    int resets_ = 0, last_resets_ = 0;
    bool gpad_touch_ = false;  // a bottom-screen touch is being forwarded to the game
    std::array<bool, static_cast<int>(Button::Count)> held_{};
    std::array<bool, 4> pad_keys_{}; // I, J, K, L, tracked independently
    std::int32_t pad_x_ = 0, pad_y_ = 0; // raw controller axes
    bool pinching_ = false;
    int pinch_d_ = 0;  // distance between the two synthesized fingers
    std::int32_t pressed_soft_[3] = {0, 0, 0};  // soft key held by B, X, Y
    std::string last_action_;
    kairo::PortDialog* dialog_ = nullptr;
    void present();
};
}  // namespace pls::pc::dual
