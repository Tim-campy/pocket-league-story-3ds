// Phase 3 prototype, stage 1 (platform only). See pc_dual_screen.hpp.
#include "pc_dual_screen.hpp"
#include <algorithm>
#include <cstdio>
#include <stdexcept>
#include <string>
#include <cstdlib>
#include "font.hpp"
#include "managed_collation.hpp"
#include "application.hpp"
#include "circle_pad.hpp"
#include "surface.SurfaceManager.hpp"
#include "surface.GamePad.hpp"

namespace pls::pc::dual {
namespace {
std::u16string lower(const cs::String& value) {
    return value.is_null() ? std::u16string() : cs::culture_to_lower(value).code_units();
}
std::string text(const cs::String& value) { return value.is_null() ? std::string() : value.utf8(); }
bool is_back(const std::u16string& label) {
    // Canvas.Init registers exactly these back labels (Canvas.cs:338-339).
    return label == lower(cs::String(u"\x623b\x308b")) || label == lower(cs::String(u"Back"));
}
bool is_menu(const std::u16string& label) {
    // AppData.softLabels_[4] ("ﾒﾆｭｰ", half-width) and its English text "Menu".
    return label == lower(cs::String(u"\xff92\xff86\xff6d\xff70")) || label == lower(cs::String(u"Menu"));
}
// Keyboard: Azahar's default face/shoulder keys; D-pad on the arrows, circle pad on IJKL.
bool key_button(SDL_Keycode key, Button& out) {
    switch (key) {
    case SDLK_a: out = Button::A; return true;
    case SDLK_s: out = Button::B; return true;
    case SDLK_z: out = Button::X; return true;
    case SDLK_x: out = Button::Y; return true;
    case SDLK_q: out = Button::L; return true;
    case SDLK_w: out = Button::R; return true;
    case SDLK_m: out = Button::Start; return true;
    case SDLK_n: out = Button::Select; return true;
    case SDLK_UP: out = Button::Up; return true;
    case SDLK_DOWN: out = Button::Down; return true;
    case SDLK_LEFT: out = Button::Left; return true;
    case SDLK_RIGHT: out = Button::Right; return true;
    default: return false;
    }
}
// Controller buttons by position (Nintendo layout: right = A, bottom = B, top = X, left = Y).
bool pad_button(std::uint8_t button, Button& out) {
    switch (button) {
    case SDL_CONTROLLER_BUTTON_B: out = Button::A; return true;
    case SDL_CONTROLLER_BUTTON_A: out = Button::B; return true;
    case SDL_CONTROLLER_BUTTON_Y: out = Button::X; return true;
    case SDL_CONTROLLER_BUTTON_X: out = Button::Y; return true;
    case SDL_CONTROLLER_BUTTON_LEFTSHOULDER: out = Button::L; return true;
    case SDL_CONTROLLER_BUTTON_RIGHTSHOULDER: out = Button::R; return true;
    case SDL_CONTROLLER_BUTTON_START: out = Button::Start; return true;
    case SDL_CONTROLLER_BUTTON_BACK: out = Button::Select; return true;
    case SDL_CONTROLLER_BUTTON_DPAD_UP: out = Button::Up; return true;
    case SDL_CONTROLLER_BUTTON_DPAD_DOWN: out = Button::Down; return true;
    case SDL_CONTROLLER_BUTTON_DPAD_LEFT: out = Button::Left; return true;
    case SDL_CONTROLLER_BUTTON_DPAD_RIGHT: out = Button::Right; return true;
    default: return false;
    }
}
struct Box { Button button; int x, y, w, h; };
// Bottom-screen layout (320x240): label row of touchable buttons.
constexpr Box boxes[] = {
    {Button::L, 4, 4, 70, 22},     {Button::R, 246, 4, 70, 22},
    {Button::Y, 4, 150, 150, 26},  {Button::X, 166, 150, 150, 26},
    {Button::B, 4, 182, 150, 26},  {Button::A, 166, 182, 150, 26},
    {Button::Select, 4, 214, 100, 22}, {Button::Start, 216, 214, 100, 22},
};
}  // namespace

Meaning meaning(kairo::Canvas& canvas) {
    Meaning m;
    const auto left = canvas.GetSoftLabelL(), right = canvas.GetSoftLabelR();
    const auto l = lower(left), r = lower(right);
    if (is_back(l)) { m.b = text(left); m.b_key = kairo::Canvas::KEY_SOFT1; }
    else if (is_back(r)) { m.b = text(right); m.b_key = kairo::Canvas::KEY_SOFT2; }
    if (is_menu(r)) { m.y = text(right); m.y_key = kairo::Canvas::KEY_SOFT2; }
    else if (is_menu(l)) { m.y = text(left); m.y_key = kairo::Canvas::KEY_SOFT1; }
    else if (m.b_key) { m.y = m.b; m.y_key = m.b_key; }  // inside menus Y also closes
    if (!l.empty() && !is_back(l) && !is_menu(l)) { m.x = text(left); m.x_key = kairo::Canvas::KEY_SOFT1; }
    return m;
}

Host::Host(int scale) : scale_(std::max(1, scale)) {
    if (SDL_InitSubSystem(SDL_INIT_GAMECONTROLLER) == 0)
        for (int i = 0; i < SDL_NumJoysticks() && !controller_; ++i)
            if (SDL_IsGameController(i)) controller_ = SDL_GameControllerOpen(i);
    window_ = SDL_CreateWindow("Bottom screen (320x240, prototype)", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                               bottom_width * scale_, bottom_height * scale_, 0);
    if (!window_) throw std::runtime_error(SDL_GetError());
    renderer_ = SDL_CreateRenderer(window_, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer_) renderer_ = SDL_CreateRenderer(window_, -1, SDL_RENDERER_SOFTWARE);
    if (!renderer_) { SDL_DestroyWindow(window_); throw std::runtime_error(SDL_GetError()); }
    panel_ = kairo::Image::FromRgba(bottom_width, bottom_height, std::vector<std::uint8_t>(bottom_width * bottom_height * 4));
}
Host::~Host() {
    end_game_draw();
    kairo::detail::publish_circle_pad({});
    if (controller_) SDL_GameControllerClose(controller_);
    if (renderer_) SDL_DestroyRenderer(renderer_);
    if (window_) SDL_DestroyWindow(window_);
}

void Host::press(Button button, bool down, kairo::Canvas& canvas) {
    if (dialog_) {
        using Command = kairo::PortDialog::Command;
        if (!down) return;
        if (button == Button::A) dialog_->Handle(Command::confirm);
        else if (button == Button::B) dialog_->Handle(Command::cancel);
        else if (button == Button::Left || button == Button::Up) dialog_->Handle(Command::left);
        else if (button == Button::Right || button == Button::Down) dialog_->Handle(Command::right);
        return;
    }
    auto& held = held_[static_cast<int>(button)];
    if (held == down) return;
    held = down;
    auto key = [&](std::int32_t code) { if (down) canvas.KeyDown(code); else canvas.KeyUp(code); };
    auto soft = [&](int slot, std::int32_t code) {
        // Press the soft key the label belongs to; release the same key it pressed.
        if (down) { pressed_soft_[slot] = code; if (code) canvas.KeyDown(code); }
        else { if (pressed_soft_[slot]) canvas.KeyUp(pressed_soft_[slot]); pressed_soft_[slot] = 0; }
    };
    const auto m = meaning(canvas);
    switch (button) {
    case Button::A: key(kairo::Canvas::KEY_SELECT); break;
    case Button::Up: key(kairo::Canvas::KEY_UP); break;
    case Button::Down: key(kairo::Canvas::KEY_DOWN); break;
    case Button::Left: key(kairo::Canvas::KEY_LEFT); break;
    case Button::Right: key(kairo::Canvas::KEY_RIGHT); break;
    // B never reaches ProcessBackKey (that path ends in the termination dialog on the map).
    case Button::B: soft(0, m.b_key); break;
    case Button::X: soft(1, m.x_key); break;
    case Button::Y: soft(2, m.y_key); break;
    case Button::Start:
        if (down) if (auto app = kairo::IApplication::GetCurrentApp()) if (auto manager = app->GetFormManager()) manager->ShowTerminationDialog();
        break;
    default: break;  // L/R zoom and SELECT: not wired in this prototype (see report)
    }
    if (down) last_action_ = std::string(button_name(button));
}

bool Host::handle(const SDL_Event& event, kairo::Canvas& canvas, std::uint32_t top_window) {
    Button button;
    switch (event.type) {
    case SDL_KEYDOWN:
    case SDL_KEYUP: {
        if (event.key.repeat) return key_button(event.key.keysym.sym, button) || event.key.keysym.sym == SDLK_i || event.key.keysym.sym == SDLK_j || event.key.keysym.sym == SDLK_k || event.key.keysym.sym == SDLK_l;
        const bool down = event.type == SDL_KEYDOWN;
        const auto sym = event.key.keysym.sym;
        if (sym == SDLK_i) { pad_keys_[0] = down; return true; }
        if (sym == SDLK_j) { pad_keys_[1] = down; return true; }
        if (sym == SDLK_k) { pad_keys_[2] = down; return true; }
        if (sym == SDLK_l) { pad_keys_[3] = down; return true; }
        if (!key_button(sym, button)) return false;
        press(button, down, canvas);
        return true;
    }
    case SDL_CONTROLLERBUTTONDOWN:
    case SDL_CONTROLLERBUTTONUP:
        if (!pad_button(event.cbutton.button, button)) return true;
        press(button, event.type == SDL_CONTROLLERBUTTONDOWN, canvas);
        return true;
    case SDL_CONTROLLERAXISMOTION:
        if (event.caxis.axis == SDL_CONTROLLER_AXIS_LEFTX) pad_x_ = event.caxis.value;
        if (event.caxis.axis == SDL_CONTROLLER_AXIS_LEFTY) pad_y_ = event.caxis.value;
        return true;
    case SDL_CONTROLLERDEVICEREMOVED:
        if (controller_ && event.cdevice.which == SDL_JoystickInstanceID(SDL_GameControllerGetJoystick(controller_))) {
            SDL_GameControllerClose(controller_); controller_ = nullptr;
            pad_x_ = pad_y_ = 0;
            kairo::detail::publish_circle_pad({});
        }
        return true;
    case SDL_CONTROLLERDEVICEADDED:
        if (!controller_) controller_ = SDL_GameControllerOpen(event.cdevice.which);
        return true;
    case SDL_MOUSEBUTTONDOWN:
    case SDL_MOUSEBUTTONUP: {
        if (event.button.windowID == top_window) return dialog_ != nullptr;
        const platform::ScreenPoint point{platform::Screen::bottom,
                                         event.button.x / scale_, event.button.y / scale_};
        const int x = point.x, y = point.y;
        if (dialog_) {
            if (event.type == SDL_MOUSEBUTTONDOWN) dialog_->PointerDown(x, y); else dialog_->PointerUp(x, y);
            return true;
        }
        if (gpad_image_) {
            // Bottom-screen point -> GamePad coordinates (the image is shown at 80 %).
            const int gx = x * top_width / bottom_width, gy = y * top_width / bottom_width;
            using Kind = platform::Input::Kind;
            if (event.type == SDL_MOUSEBUTTONDOWN) {
                const auto& px = gpad_image_->pixels();
                const bool drawn = gx >= 0 && gy >= 0 && gx < top_width && gy < top_height && px[(std::size_t(gy) * top_width + gx) * 4 + 3] != 0;
                if (drawn) { gpad_touch_ = true; canvas.host_event(platform::Input{Kind::pointer_down, gx, gy}); last_action_ = "GamePad touch"; }
            } else if (gpad_touch_) { gpad_touch_ = false; canvas.host_event(platform::Input{Kind::pointer_up, gx, gy}); }
            return true;
        }
        for (const auto& box : boxes)
            if (x >= box.x && x < box.x + box.w && y >= box.y && y < box.y + box.h) press(box.button, event.type == SDL_MOUSEBUTTONDOWN, canvas);
        if (event.type == SDL_MOUSEBUTTONUP)
            for (const auto& box : boxes) press(box.button, false, canvas);
        return true;
    }
    case SDL_MOUSEMOTION:
        return event.motion.windowID != top_window;
    case SDL_WINDOWEVENT:
        if (event.window.event == SDL_WINDOWEVENT_FOCUS_LOST) {
            pad_keys_.fill(false); pad_x_ = pad_y_ = 0;
            kairo::detail::publish_circle_pad({});
        }
        return event.window.windowID != top_window;
    default:
        return false;
    }
}

void Host::update(kairo::Canvas& canvas, kairo::FormManagerBase* manager) {
    // PLS_PC_LAYOUT_TRACE=1: print the sizes the platform reports to the game's
    // SurfaceManager.AdjustSurfaceLayout whenever they change (read-only).
    if (std::getenv("PLS_PC_LAYOUT_TRACE")) {
        static std::string last;
        if (auto app = kairo::IApplication::GetCurrentApp()) {
            char text[256];
            std::snprintf(text, sizeof text, "app=%dx%d scale_auto=%.3f scale=%.3f res=%.3f canvas=%dx%d fullscreen=%d status=%d",
                          app->GetWidth(), app->GetHeight(), app->GetScaleRatio(true), app->GetScaleRatio(false),
                          app->GetResolutionScaleRatio(), canvas.GetWidth(), canvas.GetHeight(),
                          canvas.IsFullscreen() ? 1 : 0, canvas.GetStatusBarHeight());
            if (last != text) { last = text; std::fprintf(stderr, "PLS_LAYOUT %s\n", text); }
        }
    }
    auto top = manager ? manager->GetTopForm() : nullptr;
    const bool map = top && top->managed_type_name().find("GameForm") != std::string::npos;
    const int key_x = int(pad_keys_[3]) - int(pad_keys_[1]);
    const int key_y = int(pad_keys_[2]) - int(pad_keys_[0]);
    const kairo::CirclePadState pad{
        pad_keys_[1] || pad_keys_[3] ? key_x * kairo::circle_pad_max : kairo::normalize_circle_pad_axis(pad_x_),
        pad_keys_[0] || pad_keys_[2] ? key_y * kairo::circle_pad_max : kairo::normalize_circle_pad_axis(pad_y_)};
    kairo::detail::publish_circle_pad(dialog_ ? kairo::CirclePadState{} : pad);
    const bool moving = map && (pad.x || pad.y);
    if (moving) last_action_ = "circle pad";
    // L/R (decision B.7 of 2026-11-17): the two-finger pinch the original map
    // accepts (SurfaceBase pinch -> GameForm.OnTouchCamera case 12, pinchScaleValue_),
    // centred on the view: R spreads the fingers (zoom in), L brings them closer.
    // Prototype test hook: PLS_PC_DUAL_HOLD="R:600-640,L:700-720" holds buttons on
    // those update frames (no keyboard needed to exercise the pinch).
    {
        static std::uint64_t frame = 0; ++frame;
        static const std::string spec = std::getenv("PLS_PC_DUAL_HOLD") ? std::getenv("PLS_PC_DUAL_HOLD") : "";
        for (std::size_t at = 0; at < spec.size();) {
            const auto end = spec.find(',', at); const auto item = spec.substr(at, end == std::string::npos ? std::string::npos : end - at);
            at = end == std::string::npos ? spec.size() : end + 1;
            const auto colon = item.find(':'), dash = item.find('-');
            if (colon == std::string::npos || dash == std::string::npos) continue;
            const auto first = std::stoull(item.substr(colon + 1, dash - colon - 1)), last = std::stoull(item.substr(dash + 1));
            const auto button = item[0] == 'L' ? Button::L : item[0] == 'R' ? Button::R : Button::Count;
            if (button != Button::Count && (frame == first || frame == last + 1)) held_[static_cast<int>(button)] = frame == first;
        }
    }
    const int zoom = map && !moving ? (held_[static_cast<int>(Button::R)] ? 1 : 0) - (held_[static_cast<int>(Button::L)] ? 1 : 0) : 0;
    constexpr int pcx = top_width / 2, pcy = 23 + (top_height - 23) / 2;
    auto pinch_event = [&](std::int32_t action, bool two) {
        auto ids = two ? cs::Array<std::int32_t>::from({0, 1}) : cs::Array<std::int32_t>::from({0});
        auto positions = two ? cs::Array<float>::from({float(pcx - pinch_d_ / 2), float(pcy), float(pcx + pinch_d_ / 2), float(pcy)})
                             : cs::Array<float>::from({float(pcx - pinch_d_ / 2), float(pcy)});
        canvas.OnTouchEvent(cs::make_ref<kairo::MotionEvent>(action, ids, positions, cs::Array<float>{}));
    };
    if (zoom) {
        if (!pinching_) {
            pinching_ = true; pinch_d_ = 80;
            pinch_event(kairo::MotionEvent::ACTION_DOWN, false);
            pinch_event(kairo::MotionEvent::ACTION_POINTER_2_DOWN, true);
        }
        pinch_d_ = std::clamp(pinch_d_ + zoom * 6, 20, 220);
        pinch_event(kairo::MotionEvent::ACTION_MOVE, true);
        last_action_ = zoom > 0 ? "zoom +" : "zoom -";
    } else if (pinching_) {
        pinch_event(kairo::MotionEvent::ACTION_POINTER_2_UP, true);
        pinch_event(kairo::MotionEvent::ACTION_UP, false);
        pinching_ = false;
    }
}


void Host::begin_game_draw(cs::Ref<kairo::Image> display) {
    display_ = display;
    gpad_image_ = kairo::Image::FromRgba(top_width, top_height, std::vector<std::uint8_t>(std::size_t(top_width) * top_height * 4, 0));
    kairo::Graphics::surface_screen = [](const void* identity) {
        const auto pad = static_cast<game::kairo::unity::surface::SurfaceBase*>(game::surface::SurfaceManager::gpad_());
        return identity && identity == pad ? platform::Screen::bottom : platform::Screen::top;
    };
    kairo::Graphics::screen_target_hook = [this](kairo::Graphics& g, platform::Screen screen, const void* surface) {
        const auto target = g.target();
        if (target != display_ && target != gpad_image_ && target != panel_) return;
        // Only the legacy GamePad keeps a 400x240 intermediate. Direct bottom
        // drawing uses its native 320x240 target and local coordinates.
        g.retarget(screen == platform::Screen::top ? display_ : surface ? gpad_image_ : panel_);
    };
}
void Host::end_game_draw() {
    kairo::Graphics::screen_target_hook = nullptr;
    kairo::Graphics::surface_screen = nullptr;
}

void Host::draw(kairo::Canvas& canvas, kairo::FormManagerBase* manager) {
    const auto m = meaning(canvas);
    auto g = cs::make_ref<kairo::Graphics>(panel_, true);
    g->ResetRender();
    g->SetColor(24, 28, 36); g->FillRect(0.0f, 0.0f, float(bottom_width), float(bottom_height));
    auto font = cs::make_ref<kairo::Font>(); font->SetSize(10); g->SetFont(font);
    auto label = [&](const Box& box, const std::string& meaning_text) {
        const bool on = held_[static_cast<int>(box.button)];
        const bool active = !meaning_text.empty();
        if (on) g->SetColor(236, 180, 60); else if (active) g->SetColor(56, 70, 96); else g->SetColor(40, 44, 52);
        g->FillRect(float(box.x), float(box.y), float(box.w), float(box.h));
        g->SetColor(active ? 230 : 120, active ? 232 : 124, active ? 238 : 132);
        g->DrawRect(float(box.x), float(box.y), float(box.w - 1), float(box.h - 1));
        // DrawString applies the game's own label translation (translate_text).
        g->DrawString(cs::String::from_utf8(std::string(button_name(box.button)) + "  "), float(box.x + 6), float(box.y + (box.h - 12) / 2), 0);
        if (active) g->DrawString(cs::String::from_utf8(meaning_text), float(box.x + 40), float(box.y + (box.h - 12) / 2), 0);
    };
    if (gpad_image_) {
        // The GamePad surface at 80 % (400x240 -> 320x192), at the top of the screen.
        g->DrawScaledImage(gpad_image_, 0.0f, 0.0f, float(bottom_width), float(top_height * bottom_width / top_width), 0, 0, top_width, top_height);
        g->SetColor(130, 136, 148);
        g->DrawPreparedString(cs::String::from_utf8("Screen: " + std::string(manager && manager->GetTopForm() ? manager->GetTopForm()->managed_type_name() : "-")), 8.0f, 200.0f, 0);
        g->DrawPreparedString(cs::String::from_utf8("Last input: " + (last_action_.empty() ? std::string("-") : last_action_)), 8.0f, 216.0f, 0);
        present();
        return;
    }
    for (const auto& box : boxes) {
        std::string what;
        switch (box.button) {
        case Button::A: what = m.a; break;
        case Button::B: what = m.b; break;
        case Button::X: what = m.x; break;
        case Button::Y: what = m.y; break;
        case Button::L: what = "zoom -"; break;
        case Button::R: what = "zoom +"; break;
        case Button::Start: what = "Quit"; break;
        default: break;
        }
        label(box, what);
    }
    // Provisional panel (stage 2 replaces it with the event log / match data).
    g->SetColor(200, 206, 216);
    auto top = manager ? manager->GetTopForm() : nullptr;
    std::string screen = top ? top->managed_type_name() : std::string("-");
    if (auto dot = screen.rfind('.'); dot != std::string::npos) screen = screen.substr(dot + 1);
    if (top) screen += " #" + std::to_string(top->GetId());
    g->DrawPreparedString(cs::String::from_utf8("Screen: " + screen), 8.0f, 36.0f, 0);
    g->DrawPreparedString(cs::String::from_utf8("Soft labels:"), 8.0f, 52.0f, 0);
    g->DrawString(canvas.GetSoftLabelL().is_null() ? cs::String(u"") : canvas.GetSoftLabelL(), 100.0f, 52.0f, 0);
    g->DrawString(canvas.GetSoftLabelR().is_null() ? cs::String(u"") : canvas.GetSoftLabelR(), 190.0f, 52.0f, 0);
    g->DrawPreparedString(cs::String::from_utf8("Last input: " + (last_action_.empty() ? std::string("-") : last_action_)), 8.0f, 68.0f, 0);
    g->SetColor(130, 136, 148);
    g->DrawPreparedString(cs::String::from_utf8("Event log / match panel: stage 2"), 8.0f, 92.0f, 0);
    g->DrawPreparedString(cs::String::from_utf8("Keys: A S Z X = A B X Y, Q W = L R"), 8.0f, 112.0f, 0);
    g->DrawPreparedString(cs::String::from_utf8("Arrows = D-pad, IJKL = circle pad"), 8.0f, 126.0f, 0);
    present();
}

void Host::draw_dialog() {
    if (!dialog_) return;
    auto g = cs::make_ref<kairo::Graphics>(panel_, true);
    g->ResetRender();
    g->SetColor(24, 28, 36); g->FillRect(0.0f, 0.0f, float(bottom_width), float(bottom_height));
    dialog_->Draw(panel_);
    present();
}

void Host::present() {
    const auto& pixels = panel_->pixels();
    auto* texture = SDL_CreateTexture(renderer_, SDL_PIXELFORMAT_RGBA32, SDL_TEXTUREACCESS_STATIC, bottom_width, bottom_height);
    if (!texture) return;
    SDL_UpdateTexture(texture, nullptr, pixels.data(), bottom_width * 4);
    SDL_Rect destination{0, 0, bottom_width * scale_, bottom_height * scale_};
    SDL_RenderCopy(renderer_, texture, nullptr, &destination);
    SDL_RenderPresent(renderer_);
    SDL_DestroyTexture(texture);
}

void Host::capture(const std::filesystem::path& folder, std::uint64_t frame, const std::vector<std::uint8_t>& top_rgba) {
    std::filesystem::create_directories(folder);
    auto save = [&](const std::vector<std::uint8_t>& rgba, int w, int h, const char* name) {
        auto* surface = SDL_CreateRGBSurfaceWithFormatFrom(const_cast<std::uint8_t*>(rgba.data()), w, h, 32, w * 4, SDL_PIXELFORMAT_RGBA32);
        if (!surface) return;
        char file[64];
        std::snprintf(file, sizeof file, "%06llu-%s.bmp", static_cast<unsigned long long>(frame), name);
        SDL_SaveBMP(surface, (folder / file).string().c_str());
        SDL_FreeSurface(surface);
    };
    save(top_rgba, top_width, top_height, "top");
    save(panel_->pixels(), bottom_width, bottom_height, "bottom");
}
}  // namespace pls::pc::dual
