#pragma once
// Port-owned modal dialog (user decision 2026-11-16). It replaces the Android
// system AlertDialog behind KairoPlugin.ShowDialog with a dialog drawn through
// the common Graphics API, so PC and 3DS share this code. Contract (KairoLibrary
// Dialog.Show, Dialog.cs:80-100, and show_dialog): the request carries the
// buttons in the original order (types 0-2: OK=1; type 3: Yes=4, No=8; type 4:
// Yes=4, No=8, Cancel=2); Present blocks the calling game code until a button
// is chosen and returns that button's result. Appearance is provisional and
// neutral; the final look and the 3DS screen are Phase 3 (docs/design/dialogs.md).
#include "dialog_service.hpp"
#include "graphics.hpp"
namespace pls::kairo {
class PortDialog {
public:
    enum class Command {left,right,confirm,cancel};
    explicit PortDialog(const DialogRequest& request);
    // Keys: left/right move the selection, confirm chooses it. Cancel dismisses
    // the dialog: Result() is -1, the port's dismissal value (show_dialog and
    // the SDL presenter); the Android dismissal code itself is UNKNOWN.
    void Handle(Command command);
    // Single pointer: a button is chosen when pressed and released inside it.
    void PointerDown(std::int32_t x,std::int32_t y);
    void PointerUp(std::int32_t x,std::int32_t y);
    bool Done()const noexcept{return chosen_!=-1;}
    std::int32_t Result()const;
    std::int32_t Selected()const noexcept{return selected_;}
    // Draws over the current frame in `target` (the 240x280 game display).
    void Draw(cs::Ref<Image> target)const;
    struct Box {std::int32_t x,y,w,h;};
    Box ButtonBox(std::size_t index,std::int32_t width,std::int32_t height)const;
private:
    DialogRequest request_;
    static constexpr std::int32_t dismissed=-2;
    std::int32_t selected_{0},chosen_{-1},pressed_{-1};
    std::int32_t width_{240},height_{280};
    std::int32_t hit(std::int32_t x,std::int32_t y)const;
};
}
