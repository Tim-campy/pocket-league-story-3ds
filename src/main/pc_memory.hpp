#pragma once
#include <cstdint>
#include <optional>
#include <string>
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
}
