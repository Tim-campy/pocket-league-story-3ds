#include "font.hpp"
#include "asset_catalog.hpp"
#include "graphics.hpp"
#include "../platform/sdl/font.hpp"
#include <map>
namespace pls::kairo {
namespace {TextServices services;std::map<std::pair<std::string,int>,std::unique_ptr<sdl::RasterFont>> rasters;}
void install_text_services(TextServices value){services=std::move(value);rasters.clear();}
void visit_font_memory(const memory::RangeVisitor&visit){for(const auto&entry:rasters)entry.second->memory_ranges(visit);}
cs::String translate_text(cs::String text){if(!services.translate)throw cs::InvalidOperationException("Generated Language.TranslateText bridge is not installed");return services.translate(text);}
bool japanese_text(){if(!services.japanese)throw cs::InvalidOperationException("Generated Language.Japanese bridge is not installed");return services.japanese();}
void draw_markup(cs::Ref<Graphics> g,cs::String value,float x,float y,std::int32_t anchor){if(!services.markup_draw)throw cs::NotSupportedException("Translated TextLayout draw bridge is not installed");services.markup_draw(std::move(g),std::move(value),x,y,anchor);}
Font::Font(){font_scale_=requestFontScale;SetSize(0);SetStyle(0);}
Font::Font(cs::Ref<Font> font){font_scale_=requestFontScale;Set(cs::nonnull(font));}
void Font::SetSize(std::int32_t size,bool preset){
    size_=used_=size;preset_=preset;constexpr int height[]={12,24,30};
    if(size<3&&preset){if(size<0)throw cs::IndexOutOfRangeException();used_=height[size];}
    used_=cs::div_i32(cs::mul_i32(used_,font_scale_),100);
    if(disposed_)throw cs::NullReferenceException();
}
void Font::SetStyle(int style){style_=style;if(style<0||style>=3)throw cs::IndexOutOfRangeException();if(disposed_)throw cs::NullReferenceException();}
void Font::Set(cs::Ref<Font> font){cs::nonnull(font);SetSize(font->size_,font->preset_);SetStyle(font->style_);}
void Font::Copy(cs::Ref<Font> font){cs::nonnull(font);size_=font->size_;style_=font->style_;face_=font->face_;used_=font->used_;scale_=font->scale_;font_scale_=font->font_scale_;}
bool Font::Equals(cs::Ref<Font> font)const{cs::nonnull(font);return face_==font->face_&&size_==font->size_&&style_==font->style_;}
void Font::AdjustFontSize(float ratio){if(font_scale_!=requestFontScale){font_scale_=requestFontScale;SetSize(GetSize(),true);}scale_=ratio/100.0f;auto n=float(used_)*scale_;(void)cs::conv_i32(n/scale_+0.01f);}
bool Font::IsNeedLocalizeScale()const{
    if(!services.localize_scale)throw cs::InvalidOperationException("Config font localization bridge is not installed");
    bool enabled=localize_stack_.empty()?services.localize_scale():localize_stack_.back();return enabled&&!localize_locked_&&!japanese_text()&&used_>=6;
}
sdl::RasterFont& Font::raster(int pixel_height){
    if(disposed_)throw cs::NullReferenceException();if(!assets::installed_catalog)throw cs::InvalidOperationException("Asset catalog is not installed");
    const assets::Entry* entry=nullptr;
    if(japanese_text())entry=assets::installed_catalog->find(assets::Kind::font,"fonts/default-ja");
    if(!entry)entry=assets::installed_catalog->find(assets::Kind::font,"fonts/default");
    if(!entry){auto builtins=assets::installed_catalog->entries(assets::Kind::builtin_font);if(builtins.size()!=1)throw cs::IOException("Own APK built-in GUI font does not resolve uniquely");entry=builtins.front();}
    if(pixel_height<0)pixel_height=used_;if(pixel_height<=0)throw cs::NotSupportedException("Zero/default GUI font size requires the original skin metrics");
    auto id=std::make_pair(entry->sha256,pixel_height);auto found=rasters.find(id);
    if(found==rasters.end()){assets::installed_catalog->verify(*entry);found=rasters.emplace(id,std::make_unique<sdl::RasterFont>(assets::installed_catalog->path(*entry),pixel_height)).first;}
    return *found->second;
}
float Font::StringWidthF(cs::String text){
    if(text.is_null()||disposed_)return 0.0f;if(!LT_DISABLE_TEXTLAYOUT)text=translate_text(text);
    auto content=text.code_units();if(Graphics::PeekAutoTextLayout()&&content.find(u'<')!=std::u16string::npos){if(!services.markup_width)throw cs::NotSupportedException("Translated TextLayout width bridge is not installed");return services.markup_width(std::static_pointer_cast<Font>(shared_from_this()),text);}
    int previous=-1;if(IsNeedLocalizeScale()){previous=GetSize();SetSize(GetLocalizeScale());}
    float ratio=services.application_scale?services.application_scale():100.0f;int pixels=cs::conv_i32(float(used_)*ratio/100.0f+0.001f);
    for(auto& c:content)if(c==u' ')c=u'.';
    float result=raster(pixels).measure_utf16(content,sdl::FontStyle(style_))*100.0f/ratio;
    if(previous!=-1)SetSize(previous);return result;
}
int Font::StringWidth(cs::String text){if(text.is_null()||disposed_)return 0;text=translate_text(text);return cs::conv_i32(StringWidthF(text)+0.01f);}
}
