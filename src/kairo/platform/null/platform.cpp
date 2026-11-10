#include "debug_input.hpp"
#include "system.hpp"
#include "runtime_memory.hpp"
#include "../sdl/globalization.hpp"
#include "../sdl/thread_priority.hpp"
#if defined(__3DS__)
#include <malloc.h>
#endif
namespace pls::kairo {
bool DebugInput::GetKey(std::int32_t k){if(k!=303&&k!=304)throw cs::NotSupportedException();return false;}
bool DebugInput::GetMouseButton(std::int32_t b){if(b<0||b>1)throw cs::NotSupportedException();return false;}
bool DebugInput::GetMouseButtonDown(std::int32_t b){return GetMouseButton(b);}
Vector3 DebugInput::get_mousePosition(){return {0,280,0};}
std::int32_t DebugInput::screen_height(){return 280;}
std::int32_t DebugInput::get_touchCount(){return 0;}
float DebugInput::get_dpi(){return 96.0f;}
bool DebugInput::get_fullScreen(){return false;}
void UnityApplication::OpenURL(const cs::String&){throw cs::NotSupportedException("URL launch outside null benchmark");}
#if defined(__3DS__)
NativeHeapPayload native_heap_payload(){const auto m=mallinfo();return {std::uint64_t(m.fordblks),std::uint64_t(m.uordblks),1};}
#endif
}
#if defined(__3DS__)
namespace pls::sdl {
void install_thread_priority_backend(){throw cs::NotSupportedException("Modern thread priority is outside ARM11 benchmark");}
}
#endif
