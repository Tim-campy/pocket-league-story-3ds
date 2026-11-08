#pragma once
#include "dialog_service.hpp"
struct SDL_Window;
namespace pls::sdl {
// The host's modal scope must keep streaming audio alive while the synchronous
// OS message box blocks, then resynchronize input on return. The presenter
// parks its registered GC mutator around the native call after copying all
// managed input, resuming before managed callbacks/errors. The modal callback
// must not call game Update/Draw or manufacture a choice. Absence is an explicit
// error. An interactive message box/audio/input scenario remains a separate test.
cs::Ref<kairo::DialogPresenter> make_dialog_presenter(SDL_Window* parent,cs::Delegate<void(bool entering)> modal_scope);
}
