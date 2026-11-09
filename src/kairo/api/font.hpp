#pragma once
#include "semantic_runtime.hpp"
#include <functional>
namespace pls::sdl {class RasterFont;}
namespace pls::kairo {
class Font;class Graphics;
struct TextServices {
    std::function<cs::String(cs::String)> translate;
    std::function<bool()> japanese;
    std::function<bool()> localize_scale;
    std::function<float()> application_scale;
    std::function<float(cs::Ref<Font>,cs::String)> markup_width;
    std::function<void(cs::Ref<Graphics>,cs::String,float,float,std::int32_t)> markup_draw;
};
void install_text_services(TextServices);
void visit_font_memory(const memory::RangeVisitor&);
cs::String translate_text(cs::String);
bool japanese_text();
void draw_markup(cs::Ref<Graphics>,cs::String,float,float,std::int32_t);
class Font : public cs::Object {
    int size_{},used_{12},style_{},face_{2},font_scale_{100};bool preset_{true};float scale_{1.0f};
    bool disposed_{};
    inline static std::vector<bool> localize_stack_;
    inline static bool localize_locked_{};
public:
    inline static int requestFontScale=100;
    static void SetScale(std::int32_t value){requestFontScale=value;}
    inline static bool LT_DISABLE_TEXTLAYOUT=false;
    Font();explicit Font(cs::Ref<Font>);
    void SetSize(std::int32_t,bool=true);int GetSize()const{return size_;}int GetHeight()const{return used_;}
    float GetWidth()const{return float(used_)/2.0f;}
    void SetStyle(int);int GetStyle()const{return style_;}
    void SetFace(int f){face_=f;}int GetFace()const{return face_;}
    void Copy(cs::Ref<Font>);void Set(cs::Ref<Font>);bool Equals(cs::Ref<Font>)const;
    void AdjustFontSize(float);void Dispose(){disposed_=true;}
    static void PushLocalizeSetting(bool b){localize_stack_.push_back(b);}
    static void PopLocalizeSetting(){if(!localize_stack_.empty())localize_stack_.pop_back();}
    static void ClearLocalizeSettings(){localize_stack_.clear();}
    static void LockLocalizeSetting(){localize_locked_=true;}static void UnlockLocalizeSetting(){localize_locked_=false;}
    bool IsNeedLocalizeScale()const;int GetLocalizeScale()const{return cs::conv_i32(float(used_)*0.83f+0.1f);}
    float StringWidthF(cs::String);int StringWidth(cs::String);
    sdl::RasterFont& raster(int pixel_height=-1);
};
}
