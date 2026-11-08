#pragma once
#include <cstddef>
#include <cstdint>
#include <filesystem>
#include <memory>
#include <string_view>
#include <vector>

namespace pls::sdl {
enum class FontStyle : std::uint32_t { plain=0, bold=1, italic=2 };
struct RasterGlyph {
    int width{},height{},left{},top{};
    float advance_x{};
    std::uint32_t glyph_index{};
    std::vector<std::uint8_t> rgba8;
};
struct FontMetrics { int pixel_height{};float ascent{},descent{},line_height{}; };
struct FontMemory {std::size_t source_bytes{},cached_rgba8_bytes{},cached_glyphs{},cache_limit_bytes{};};
class RasterFont final {
    struct Impl;
    std::unique_ptr<Impl> impl_;
public:
    RasterFont(const std::filesystem::path& ttf,int pixel_height,std::size_t cache_limit_bytes=1024*1024);
    ~RasterFont();
    RasterFont(const RasterFont&)=delete;
    RasterFont& operator=(const RasterFont&)=delete;
    // Reference remains valid until a subsequent cache miss evicts its entry.
    const RasterGlyph& glyph(char32_t codepoint,FontStyle style=FontStyle::plain);
    float kerning(std::uint32_t left,std::uint32_t right) const;
    float measure_utf16(std::u16string_view text,FontStyle style=FontStyle::plain,bool use_kerning=true);
    FontMetrics metrics() const;
    FontMemory memory() const;
    void clear_cache();
};
}
