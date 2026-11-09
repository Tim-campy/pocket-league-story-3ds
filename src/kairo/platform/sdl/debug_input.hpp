#pragma once
#include <SDL.h>
namespace pls::sdl {
// Backend main-thread pump only. Publish once after draining the event queue;
// concurrent readers keep observing the previous whole snapshot until then.
void debug_input_initialize(int render_height,float dpi=0,bool fullscreen=false);
void debug_input_begin_frame(int render_height);
void debug_input_screen(float dpi,bool fullscreen);
void debug_input_fullscreen(bool fullscreen);
void debug_input_event(const SDL_Event&);
void debug_input_publish_frame();
void debug_input_shutdown();
}
