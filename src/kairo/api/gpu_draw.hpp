#pragma once
#include <array>
#include <cstdint>
#include <memory>
#include <vector>

namespace pls::kairo { class Image; }
namespace pls::platform {
struct GpuVertex { float x{}, y{}, u{}, v{}; };
struct GpuQuad {
    std::array<GpuVertex,4> vertices;
    std::array<std::uint8_t,4> color{255,255,255,255};
    std::array<float,4> clip{};
    std::array<std::int32_t,3> mode{0,255,0};
    std::array<std::int32_t,2> blend{};
    float depth{}, alpha_test_scale{1};
    int alpha_type{}, filter{};
    bool depth_test{}, depth_write{};
};
// Contains only native resources. Destruction queues release; it never invokes
// the GPU on a managed finalizer/collector thread.
struct GpuImage {
    bool rendered{};
    virtual ~GpuImage() = default;
};
class GpuDrawing {
public:
    virtual ~GpuDrawing() = default;
    virtual void quad(kairo::Image&,kairo::Image*,const GpuQuad&) = 0;
    virtual void glyph(kairo::Image&,const std::vector<std::uint8_t>&,
                       int width,int height,const GpuQuad&) = 0;
    virtual void clear(kairo::Image&,std::uint32_t rgba) = 0;
    virtual void readback(kairo::Image&,std::vector<std::uint8_t>&) = 0;
};
// Installed by the drawing host before starting the application. CPU/null hosts
// leave it empty. No managed reference is retained by this interface.
inline GpuDrawing* gpu_drawing = nullptr;
}
