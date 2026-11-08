#pragma once
namespace pls::sdl {
// Host scheduling for the modern contrast oracle. Historical Unity Mono's
// Priority API never invokes these hooks because its setter was a no-op.
void install_thread_priority_backend();
}
