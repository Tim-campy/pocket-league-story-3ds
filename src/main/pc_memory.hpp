#pragma once
#include <cstdint>
#include <optional>
#include <string>
#include <array>
#include <vector>
#include "../kairo/common/memory_ranges.hpp"
namespace pls::pc {
struct ProcessMemory {
    // Working set is resident pages, including shared image pages. Private
    // commit is an independent virtual-memory quantity; never add them.
    std::optional<std::uint64_t> resident_bytes,peak_resident_bytes,private_commit_bytes;
    // All committed executable MEM_IMAGE pages (EXE plus DLLs). These page
    // counters include padding and are a subset of the working set when resident.
    std::optional<std::uint64_t> executable_image_committed_bytes,executable_image_resident_bytes;
    std::uint64_t page_bytes{};
    std::string platform,diagnostic;
};
ProcessMemory sample_process_memory();
struct MemoryRange {const void* data;std::size_t bytes;memory::Category category;};
struct KnownMemory {std::array<std::optional<std::uint64_t>,4>capacity_bytes{},resident_payload_bytes{};};
// Union of known byte intervals intersecting resident pages, excluding padding.
// Coverage is partial; categories are not an exhaustive partition of the RSS.
KnownMemory sample_known_memory(const std::vector<MemoryRange>&);
}
