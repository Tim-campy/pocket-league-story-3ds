#pragma once
#include "../../api/runtime_memory.hpp"
namespace pls::sdl {
// Explicit existing native heap handle, used by the process sampler and its
// private-heap fixture. It never takes ownership or allocates inside HeapLock.
kairo::NativeHeapPayload heap_payload(std::uintptr_t handle);
}
