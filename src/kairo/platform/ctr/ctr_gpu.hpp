#pragma once
#include "gpu_draw.hpp"
#include "screen.hpp"
#include <memory>
#include <limits>

namespace pls::ctr {
struct VideoProfile {
    std::uint64_t wait_ns{}, upload_ns{}, readback_ns{}, quads{}, glyphs{};
    std::uint64_t texture_switches{}, uploads{}, upload_bytes{};
    std::uint64_t copies{}, copy_ns{}, copy_bytes{};
    std::uint64_t target_creations{},texture_creations{},created_bytes{},create_ns{};
    std::uint64_t label_cache_hits{},label_cache_misses{};
    std::size_t min_linear_free{std::numeric_limits<std::size_t>::max()}, min_vram_free{std::numeric_limits<std::size_t>::max()};
    std::size_t glyph_cache_bytes{}, glyph_cache_entries{};
    std::size_t texture_bytes{}, vram_bytes{}, peak_texture_bytes{}, peak_vram_bytes{};
};
class Gpu final : public platform::GpuDrawing {
    struct State;
    std::unique_ptr<State> state_;
public:
    Gpu();
    ~Gpu() override;
    void trace_boot(bool enabled);
    void begin_frame();
    void present(kairo::Image& top,kairo::Image& labels);
    void end_frame();
    void begin_label_frame(kairo::Image&,std::uint32_t,bool enabled);
    VideoProfile profile()const;
    std::uint64_t wait_time()const;
    void quad(kairo::Image&,kairo::Image*,const platform::GpuQuad&)override;
    void glyph(kairo::Image&,const std::vector<std::uint8_t>&,int,int,const platform::GpuQuad&)override;
    void clear(kairo::Image&,std::uint32_t)override;
    void begin_mesh(kairo::Image&)override;
    void readback(kairo::Image&,std::vector<std::uint8_t>&)override;
};
}
