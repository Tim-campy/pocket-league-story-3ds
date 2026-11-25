#include "debug_input.hpp"
#include "system.hpp"
#include "runtime_memory.hpp"
#include "../sdl/thread_priority.hpp"
#include <malloc.h>
namespace pls::kairo {
bool DebugInput::GetKey(std::int32_t key){if(key!=303&&key!=304)throw cs::NotSupportedException();return false;}
bool DebugInput::GetMouseButton(std::int32_t button){if(button<0||button>1)throw cs::NotSupportedException();return false;}
bool DebugInput::GetMouseButtonDown(std::int32_t button){return GetMouseButton(button);}
Vector3 DebugInput::get_mousePosition(){return {0,240,0};}
std::int32_t DebugInput::screen_height(){return 240;}
std::int32_t DebugInput::get_touchCount(){return 0;}
float DebugInput::get_dpi(){return 96;}
bool DebugInput::get_fullScreen(){return true;}
void UnityApplication::OpenURL(const cs::String&){throw cs::NotSupportedException("Browser launch is outside the CTR video block");}
NativeHeapPayload native_heap_payload(){const auto heap=mallinfo();return {std::uint64_t(heap.fordblks),std::uint64_t(heap.uordblks),1};}
}
namespace pls::sdl {
void install_thread_priority_backend(){throw cs::NotSupportedException("Modern thread priority is outside the CTR video block");}
}
