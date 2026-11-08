#pragma once
#include "application.hpp"
namespace pls::game {
// Defined only by the C# translator's Main factory. A missing implementation is
// a link error, never a hand-written replacement for the game's logic.
cs::Ref<kairo::IApplication> create_application();
}
