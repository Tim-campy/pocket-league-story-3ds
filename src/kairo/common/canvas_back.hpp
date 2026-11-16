#pragma once
#include "canvas.hpp"
namespace pls::kairo {
// Installs Canvas::on_back with the original Escape/back-label logic
// (canvas_back.cpp). Hosts call it once during setup, after the Canvas exists.
void install_canvas_back_key();
}
