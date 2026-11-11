#include "../../common/diagnostic_profile.hpp"
#include "../../common/render_mode.hpp"
#include "font.hpp"
#include <ft2build.h>
#include FT_FREETYPE_H
#include FT_SYNTHESIS_H
#include <algorithm>
#include <fstream>
#include <iterator>
#include <list>
#include <limits>
#include <stdexcept>
#include <string>
#include <unordered_map>

namespace pls::sdl {
namespace {
void ft_check(FT_Error error) {if(error)throw std::runtime_error("FreeType operation failed: "+std::to_string(error));}
}
struct RasterFont::Impl {
    FT_Library library{};
    FT_Face face{};
    std::vector<std::uint8_t> source;
    int pixel_height;
    std::size_t limit,bytes{};
    struct Entry {RasterGlyph glyph;std::list<std::uint64_t>::iterator lru;};
    std::unordered_map<std::uint64_t,Entry> cache;
    std::list<std::uint64_t> lru;
    Impl(const std::filesystem::path& path,int height,std::size_t budget):pixel_height(height),limit(budget) {
        if(height<=0||budget==0)throw std::invalid_argument("Invalid font size or cache budget");
        std::ifstream file(path,std::ios::binary);
        if(!file)throw std::runtime_error("Cannot read local TTF");
        source.assign(std::istreambuf_iterator<char>(file),std::istreambuf_iterator<char>());
        if(source.empty()||source.size()>static_cast<std::size_t>(std::numeric_limits<FT_Long>::max()))throw std::invalid_argument("Invalid TTF extent");
        ft_check(FT_Init_FreeType(&library));
        try {
            ft_check(FT_New_Memory_Face(library,source.data(),static_cast<FT_Long>(source.size()),0,&face));
            ft_check(FT_Select_Charmap(face,FT_ENCODING_UNICODE));
            ft_check(FT_Set_Pixel_Sizes(face,0,static_cast<FT_UInt>(height)));
        } catch(...) {if(face)FT_Done_Face(face);FT_Done_FreeType(library);throw;}
    }
    ~Impl(){FT_Done_Face(face);FT_Done_FreeType(library);}
};
RasterFont::RasterFont(const std::filesystem::path& path,int height,std::size_t budget):impl_(std::make_unique<Impl>(path,height,budget)){}
RasterFont::~RasterFont()=default;
const RasterGlyph& RasterFont::glyph(char32_t codepoint,FontStyle style) {
    const auto key=static_cast<std::uint64_t>(codepoint)|(static_cast<std::uint64_t>(style)<<32);
    auto& p=*impl_;
    if(auto found=p.cache.find(key);found!=p.cache.end()) {
        p.lru.splice(p.lru.begin(),p.lru,found->second.lru);
        return found->second.glyph;
    }
    PLS_PROFILE_AREA(raster);
    ft_check(FT_Load_Char(p.face,static_cast<FT_ULong>(codepoint),FT_LOAD_DEFAULT));
    if(style==FontStyle::bold)FT_GlyphSlot_Embolden(p.face->glyph);
    else if(style==FontStyle::italic)FT_GlyphSlot_Oblique(p.face->glyph);
    else if(style!=FontStyle::plain)throw std::invalid_argument("Unknown font style");
    if constexpr(!kairo::null_render_backend)ft_check(FT_Render_Glyph(p.face->glyph,FT_RENDER_MODE_NORMAL));
    const auto slot=p.face->glyph;
    const auto& bitmap=slot->bitmap;
    if(bitmap.width>static_cast<unsigned int>(std::numeric_limits<int>::max())||bitmap.rows>static_cast<unsigned int>(std::numeric_limits<int>::max()))throw std::length_error("Glyph extent too large");
    const auto pixels=kairo::null_render_backend?std::uint64_t(0):static_cast<std::uint64_t>(bitmap.width)*bitmap.rows;
    if(pixels>p.limit/4)throw std::length_error("Single glyph exceeds configured cache budget");
    RasterGlyph result;
    result.width=kairo::null_render_backend?0:static_cast<int>(bitmap.width);result.height=kairo::null_render_backend?0:static_cast<int>(bitmap.rows);
    result.left=slot->bitmap_left;result.top=slot->bitmap_top;
    result.advance_x=static_cast<float>(slot->advance.x)/64.0f;
    result.glyph_index=FT_Get_Char_Index(p.face,static_cast<FT_ULong>(codepoint));
    result.rgba8.resize(static_cast<std::size_t>(pixels)*4);
    for(int y=0;y<result.height;++y) {
        const auto row=bitmap.buffer+(bitmap.pitch>=0?y*bitmap.pitch:(result.height-1-y)*(-bitmap.pitch));
        for(int x=0;x<result.width;++x) {
            std::uint8_t alpha{};
            if(bitmap.pixel_mode==FT_PIXEL_MODE_GRAY)alpha=row[x];
            else if(bitmap.pixel_mode==FT_PIXEL_MODE_MONO)alpha=(row[x/8]&(128>>(x&7)))?255:0;
            else throw std::runtime_error("Unsupported FreeType glyph pixel mode");
            const auto i=(static_cast<std::size_t>(y)*result.width+x)*4;
            result.rgba8[i]=result.rgba8[i+1]=result.rgba8[i+2]=255;result.rgba8[i+3]=alpha;
        }
    }
    while(!p.lru.empty()&&p.bytes+result.rgba8.size()>p.limit) {
        auto entry=p.cache.find(p.lru.back());p.bytes-=entry->second.glyph.rgba8.size();p.cache.erase(entry);p.lru.pop_back();
    }
    // Empty glyphs consume metadata too; bound the number of entries separately.
    while(p.cache.size()>=4096&&!p.lru.empty()) {
        auto entry=p.cache.find(p.lru.back());p.bytes-=entry->second.glyph.rgba8.size();p.cache.erase(entry);p.lru.pop_back();
    }
    p.bytes+=result.rgba8.size();p.lru.push_front(key);
    auto inserted=p.cache.emplace(key,Impl::Entry{std::move(result),p.lru.begin()});
    return inserted.first->second.glyph;
}
float RasterFont::kerning(std::uint32_t left,std::uint32_t right) const {
    FT_Vector value{};
    if(left&&right&&FT_HAS_KERNING(impl_->face))ft_check(FT_Get_Kerning(impl_->face,left,right,FT_KERNING_DEFAULT,&value));
    return static_cast<float>(value.x)/64.0f;
}
float RasterFont::measure_utf16(std::u16string_view text,FontStyle style,bool use_kerning,bool spaces_as_dots) {
    float width=0.0f,maximum=0.0f;std::uint32_t previous=0;
    for(std::size_t i=0;i<text.size();++i) {
        char32_t value=text[i];
        if(spaces_as_dots&&value==u' ')value=u'.';
        if(value>=0xd800&&value<=0xdbff&&i+1<text.size()&&text[i+1]>=0xdc00&&text[i+1]<=0xdfff) {
            value=0x10000+((value-0xd800)<<10)+(text[++i]-0xdc00);
        }
        if(value=='\n'){maximum=std::max(maximum,width);width=0.0f;previous=0;continue;}
        const auto& item=glyph(value,style);
        if(use_kerning)width+=kerning(previous,item.glyph_index);
        width+=item.advance_x;previous=item.glyph_index;
    }
    return std::max(maximum,width);
}
FontMetrics RasterFont::metrics() const {
    const auto& m=impl_->face->size->metrics;
    return {impl_->pixel_height,static_cast<float>(m.ascender)/64.0f,static_cast<float>(m.descender)/64.0f,static_cast<float>(m.height)/64.0f};
}
FontMemory RasterFont::memory() const {return {impl_->source.size(),impl_->bytes,impl_->cache.size(),impl_->limit};}
void RasterFont::memory_ranges(const memory::RangeVisitor&visit)const{
    visit(impl_->source.data(),impl_->source.capacity(),memory::Category::fonts);
    for(const auto&entry:impl_->cache){const auto&pixels=entry.second.glyph.rgba8;visit(pixels.data(),pixels.capacity(),memory::Category::fonts);}
}
void RasterFont::clear_cache(){impl_->cache.clear();impl_->lru.clear();impl_->bytes=0;}
}
