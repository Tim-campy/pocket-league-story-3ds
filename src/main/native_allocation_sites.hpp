#pragma once
#include <cstddef>
#include <cstdio>
namespace pls::allocation_sites {
#if defined(PLS_ALLOCATION_PROBE) && defined(_WIN32)
void window(int index)noexcept;
void record(std::size_t bytes)noexcept;
void dump(std::FILE* output)noexcept;
#else
inline void window(int)noexcept{}
inline void record(std::size_t)noexcept{}
inline void dump(std::FILE*)noexcept{}
#endif
}
