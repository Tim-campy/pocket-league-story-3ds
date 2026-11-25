#pragma once
#include "gpu_draw.hpp"
#include "screen.hpp"
#include <memory>

namespace pls::ctr {
struct VideoProfile {
    std::uint64_t wait_ns{}, upload_ns{}, readback_ns{}, quads{}, glyphs{};
    std::size_t texture_bytes{}, vram_bytes{}, peak_texture_bytes{}, peak_vram_bytes{};
};
class Gpu final : public platform::GpuDrawing {
    struct State;
    std::unique_ptr<State> state_;
public:
    Gpu();
    ~Gpu() override;
    void begin_frame();
    void present(kairo::Image& top,kairo::Image& labels);
    void end_frame();
    VideoProfile profile()const;
    std::uint64_t wait_time()const;
    void quad(kairo::Image&,kairo::Image*,const platform::GpuQuad&)override;
    void glyph(kairo::Image&,const std::vector<std::uint8_t>&,int,int,const platform::GpuQuad&)override;
    void clear(kairo::Image&,std::uint32_t)override;
    void begin_mesh(kairo::Image&)override;
    void readback(kairo::Image&,std::vector<std::uint8_t>&)override;
};
}
