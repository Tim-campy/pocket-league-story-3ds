#pragma once
#include <cstddef>
#include <functional>
namespace pls::memory {
enum class Category {textures,audio,fonts,managed_heap};
using RangeVisitor=std::function<void(const void*,std::size_t,Category)>;
}
