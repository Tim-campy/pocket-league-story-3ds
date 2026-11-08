#pragma once
#include "semantic_runtime.hpp"
#include "asset_catalog.hpp"
#include <array>
namespace pls::kairo {
class Graphics;
class Font;
void install_asset_catalog(const assets::Catalog*);
class Image : public cs::Object {
    std::int32_t width_{},height_{},transparent_{},alpha_{255};
    bool alive_{true};
    std::vector<std::uint8_t> rgba_;
    friend class Graphics;
public:
    enum class Format:std::int32_t { Default=-1,ARGB32=5,ARGB4444=2,RGB24=3,RGB565=7 };
    enum class Filter:std::int32_t { Default=-1,Point=0,Bilinear=1,Trilinear=2 };
    inline static Filter DEFAULT_FILTER=Filter::Point;
    Format format{Format::ARGB32};Filter filter{Filter::Point};
    static cs::Ref<Image> CreateImage(std::int32_t,std::int32_t,Format=Format::RGB24,Filter=Filter::Default);
    static cs::Ref<Image> Load(cs::Array<std::uint8_t>,Format=Format::Default,Filter=Filter::Default);
    static cs::Ref<Image> FromRgba(std::int32_t,std::int32_t,std::vector<std::uint8_t>);
    std::int32_t GetWidth()const{return width_;}
    std::int32_t GetHeight()const{return height_;}
    std::int32_t GetAlpha()const{return alpha_;}
    void SetAlpha(std::int32_t);
    void SetTransparentColor(std::int32_t c){transparent_=c;}
    std::int32_t GetTransparentColor()const{return transparent_;}
    void SetTransparentEnabled(bool);
    cs::Ref<Graphics> GetGraphics();
    void Dispose();
    const std::vector<std::uint8_t>& pixels()const;
};
class Graphics : public cs::Object {
    cs::Ref<Image> target_;
    std::int32_t color_{cs::bit_copy<std::int32_t>(std::uint32_t(0xff000000))},origin_x_{},origin_y_{};
    float scale_{100.0f};
    std::array<float,9> world_{1,0,0,0,1,0,0,0,1};
    std::array<float,4> clip_{};
    std::array<std::int32_t,4> render_{};
    std::array<std::int32_t,3> mode_{0,255,0};
    std::vector<std::array<float,4>> clips_;
    std::vector<std::array<std::int32_t,2>> origins_;
    std::vector<std::array<std::int32_t,3>> modes_;
    cs::Ref<Font> font_;
    std::vector<cs::Ref<Font>> fonts_;
    inline static bool auto_text_layout_{};
    cs::Array<std::int32_t> render_result_=cs::Array<std::int32_t>::make(4);
    inline static cs::Array<std::int32_t> anchor_result_=cs::Array<std::int32_t>::make(2);
    void pixel(int,int,std::array<std::uint8_t,4>);
    std::array<float,2> point(float,float)const;
    void update_world();
public:
    explicit Graphics(cs::Ref<Image>);
    static std::int32_t GetColorOfRGB(std::int32_t,std::int32_t,std::int32_t);
    static std::int32_t GetColorOfRGB(std::int32_t,std::int32_t,std::int32_t,std::int32_t);
    static cs::Array<std::int32_t> GetAnchorPosition(std::int32_t,std::int32_t,std::int32_t,std::int32_t,std::int32_t);
    void SetColor(std::int32_t c){color_=c;}
    void SetFont(cs::Ref<Font>);cs::Ref<Font> GetFont(cs::Ref<Font> copy=nullptr);
    void PushFont(cs::Ref<Font>);void PushFont(std::int32_t);void PopFont();
    void SetAutoTextLayout(bool enabled){auto_text_layout_=enabled;}bool IsAutoTextLayout()const{return auto_text_layout_;}
    static bool PeekAutoTextLayout(){return auto_text_layout_;}
    std::int32_t StringWidth(cs::String);
    void DrawString(cs::String,float,float);void DrawString(cs::String,float,float,std::int32_t);
    void SetColor(std::int32_t r,std::int32_t g,std::int32_t b){SetColor(GetColorOfRGB(r,g,b));}
    void SetColor(std::int32_t r,std::int32_t g,std::int32_t b,std::int32_t a){SetColor(GetColorOfRGB(r,g,b,a));}
    std::int32_t GetColor()const{return color_;}
    void SetOrigin(std::int32_t x,std::int32_t y){origin_x_=x;origin_y_=y;update_world();}
    std::int32_t GetOriginX()const{return origin_x_;}
    std::int32_t GetOriginY()const{return origin_y_;}
    void PushOrigin();void PushOrigin(std::int32_t,std::int32_t,bool=false);void PopOrigin();
    void Scale(float s){scale_=s;update_world();}
    float GetScale()const{return scale_;}
    void SetClip(float,float,float,float);void ClipRect(float,float,float,float,bool=true);
    void PushClip(){clips_.push_back(clip_);}void PopClip();void ClearClip();
    void SetRenderRect(std::int32_t,std::int32_t,std::int32_t,std::int32_t);
    void ClearRenderRect();cs::Array<std::int32_t> GetRenderRect();
    void SetRenderMode(){SetRenderMode(0,255,0);}
    void SetRenderMode(std::int32_t,std::int32_t);
    void SetRenderMode(std::int32_t,std::int32_t,std::int32_t);
    std::int32_t GetRenderModeOperator()const{return mode_[0];}
    std::int32_t GetRenderModeSrcRatio()const{return mode_[1];}
    std::int32_t GetRenderModeDstRatio()const{return mode_[2];}
    void PushRenderMode(){modes_.push_back(mode_);}
    void PushRenderMode(std::int32_t,std::int32_t,std::int32_t);void PopRenderMode();
    void FillRect(float,float,float,float);void DrawRect(float,float,float,float);
    void DrawLine(float,float,float,float,float=1.0f);
    void DrawImage(cs::Ref<Image>,float,float);
    void DrawImage(cs::Ref<Image>,float,float,std::int32_t,std::int32_t,std::int32_t,std::int32_t);
    void DrawScaledImage(cs::Ref<Image>,float,float,float,float,std::int32_t,std::int32_t,std::int32_t,std::int32_t);
    void CopyArea(std::int32_t,std::int32_t,std::int32_t,std::int32_t,std::int32_t,std::int32_t){} // Source body is empty.
    void Dispose(bool=false){} // CPU commands are immediate; no cached meshes to clear.
    cs::Ref<Image> target()const{return target_;}
    void trace_edges(const cs::EdgeVisitor&)const override;
    void release_edges()override;
};
}
