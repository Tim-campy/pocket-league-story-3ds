#include "graphics.hpp"
#include "sha256.hpp"
#include "font.hpp"
#include "../platform/sdl/font.hpp"
#include <cmath>
namespace pls::kairo {
namespace {const assets::Catalog* catalog{};
bool alpha_format(Image::Format f){return f!=Image::Format::RGB24&&f!=Image::Format::RGB565;}
std::array<std::uint8_t,4> channels(std::int32_t color){auto n=std::uint32_t(color);return {std::uint8_t(n>>16),std::uint8_t(n>>8),std::uint8_t(n),std::uint8_t(n>>24)};}
std::int32_t coord(float v){return cs::conv_i32(v);}
}
void install_asset_catalog(const assets::Catalog* value){catalog=value;assets::install(value);}
cs::Ref<Image> Image::CreateImage(std::int32_t width,std::int32_t height,Format format,Filter filter){
    if(width<=0||height<=0||std::uint64_t(width)*std::uint64_t(height)>std::uint64_t(SIZE_MAX)/4)throw cs::ArgumentException("Invalid image dimensions");
    auto result=cs::make_ref<Image>();result->width_=width;result->height_=height;
    result->format=format==Format::Default?Format::RGB24:format;result->filter=filter==Filter::Default?DEFAULT_FILTER:filter;
    try{result->rgba_.resize(std::size_t(width)*height*4);}catch(const std::bad_alloc&){throw cs::OutOfMemoryException();}
    if(!alpha_format(result->format))for(std::size_t i=3;i<result->rgba_.size();i+=4)result->rgba_[i]=255;
    result->alive_=true;track_created(result,true);
    return result;
}
cs::Ref<Image> Image::FromRgba(std::int32_t width,std::int32_t height,std::vector<std::uint8_t> rgba){
    if(width<=0||height<=0||std::uint64_t(width)*height*4!=rgba.size())throw cs::ArgumentException("Invalid RGBA8 extent");
    auto result=cs::make_ref<Image>();result->width_=width;result->height_=height;result->rgba_=std::move(rgba);result->alive_=true;track_created(result,false);return result;
}
cs::Ref<Image> Image::Load(cs::Array<std::uint8_t> bytes,Format format,Filter filter){
    if(!catalog)throw cs::InvalidOperationException("Host asset catalog is not installed");
    std::vector<std::uint8_t> source;source.reserve(bytes.length());for(int i=0;i<bytes.length();++i)source.push_back(bytes.at(i));
    auto* image=catalog->find(assets::Kind::image,assets::sha256(source));
    if(!image)throw cs::IOException("PNG is absent from the authenticated native catalog");
    auto result=FromRgba(std::int32_t(image->width),std::int32_t(image->height),catalog->read(*image));
    result->format=format==Format::Default?Format::ARGB32:format;result->filter=filter==Filter::Default?DEFAULT_FILTER:filter;return result;
}
const std::vector<std::uint8_t>& Image::pixels()const{if(!alive_)throw cs::ObjectDisposedException();return rgba_;}
cs::Ref<Graphics> Image::GetGraphics(){return alive_?cs::make_ref<Graphics>(std::dynamic_pointer_cast<Image>(shared_from_this())):nullptr;}
void Image::SetAlpha(std::int32_t alpha){
    // Preserve the original guard, including its surprising direction (Image.cs:888).
    if(!alive_||alpha_!=alpha)return;alpha_=alpha;auto a=std::uint8_t(std::clamp(alpha,0,255));for(std::size_t i=3;i<rgba_.size();i+=4)rgba_[i]=a;
}
void Image::SetTransparentEnabled(bool enabled){
    if(!alive_)throw cs::ObjectDisposedException();auto c=channels(transparent_);bool was_rgb=!alpha_format(format);
    for(std::size_t i=0;i<rgba_.size();i+=4){
        if(!enabled)rgba_[i+3]=255;
        else if(rgba_[i]==c[0]&&rgba_[i+1]==c[1]&&rgba_[i+2]==c[2])rgba_[i+3]=0;
        else if(was_rgb)rgba_[i+3]=255;
    }
    if(!enabled)format=Format::RGB24;else if(was_rgb)format=Format::ARGB32;
}
Graphics::Graphics(cs::Ref<Image> target,bool display_context):target_(cs::nonnull(target)),is_gui_(display_context),font_(cs::make_ref<Font>()){ClearRenderRect();}
void Graphics::ResetRender(){
    // Graphics.ResetRender: reset the states represented by the CPU backend;
    // construction/reset never publishes Graphics.current_. Only Canvas does.
    clips_.clear();origins_.clear();modes_.clear();fonts_.clear();
    Font::UnlockLocalizeSetting();Font::ClearLocalizeSettings();
    font_->SetFace(2);font_->SetSize(0);font_->SetStyle(0);
    color_=GetColorOfRGB(0,0,0);origin_x_=origin_y_=0;scale_=100.0f;
    world_={1,0,0,0,1,0,0,0,1};mode_={0,255,0};ClearRenderRect();
}
void Graphics::SetFont(cs::Ref<Font> font){font_->Copy(cs::nonnull(font));font_->AdjustFontSize(GetScale());}
cs::Ref<Font> Graphics::GetFont(cs::Ref<Font> copy){if(!copy)return cs::make_ref<Font>(font_);copy->Copy(font_);return copy;}
void Graphics::PushFont(cs::Ref<Font> font){fonts_.push_back(GetFont());SetFont(font);}
void Graphics::PushFont(std::int32_t size){auto font=GetFont();font->SetSize(size);PushFont(font);}
void Graphics::PopFont(){if(fonts_.empty())return;auto font=fonts_.back();fonts_.pop_back();SetFont(font);}
std::int32_t Graphics::StringWidth(cs::String text){return font_->StringWidth(text);}
void Graphics::DrawString(cs::String text,float x,float y){DrawString(text,x,y,17);}
void Graphics::DrawString(cs::String text,float x,float y,std::int32_t anchor){
    text=translate_text(text);const auto& content=text.code_units();
    if(auto_text_layout_&&content.find(u'<')!=std::u16string::npos)throw cs::NotSupportedException("TextLayout markup requires the translated layout engine");
    int previous=-1;if(font_->IsNeedLocalizeScale()){previous=font_->GetSize();auto height=font_->GetHeight();font_->SetSize(font_->GetLocalizeScale());if((anchor&0x60)==0)y+=float(height-font_->GetHeight())/2.0f;Font::LockLocalizeSetting();}
    cs::run_finally([&]{
        if(anchor&2)x-=font_->StringWidthF(text)/2.0f;else if(anchor&4)x-=font_->StringWidthF(text);
        if(anchor&32)y-=float(font_->GetHeight())/2.0f;else if(anchor&64)y-=float(font_->GetHeight());
        auto position=point(x,y);auto& raster=font_->raster(std::max(1,coord(float(font_->GetHeight())*std::fabs(scale_)/100.0f)));auto style=sdl::FontStyle(font_->GetStyle());
        float cursor=position[0],baseline=position[1]+raster.metrics().ascent;std::uint32_t previous_glyph=0;auto tint=channels(color_);
        for(std::size_t i=0;i<content.size();++i){char32_t c=content[i];if(c>=0xd800&&c<=0xdbff&&i+1<content.size()&&content[i+1]>=0xdc00&&content[i+1]<=0xdfff)c=0x10000+((c-0xd800)<<10)+(content[++i]-0xdc00);
            if(c==u'\n'){cursor=position[0];baseline+=raster.metrics().line_height;previous_glyph=0;continue;}
            const auto& glyph=raster.glyph(c,style);cursor+=raster.kerning(previous_glyph,glyph.glyph_index);
            for(int gy=0;gy<glyph.height;++gy)for(int gx=0;gx<glyph.width;++gx){auto value=tint;value[3]=std::uint8_t(unsigned(tint[3])*glyph.rgba8[(std::size_t(gy)*glyph.width+gx)*4+3]/255);pixel(coord(cursor+float(glyph.left+gx)),coord(baseline-float(glyph.top)+float(gy)),value);}
            cursor+=glyph.advance_x;previous_glyph=glyph.glyph_index;
        }
    },[&]{if(previous!=-1){Font::UnlockLocalizeSetting();font_->SetSize(previous);}});
}
std::int32_t Graphics::GetColorOfRGB(std::int32_t r,std::int32_t g,std::int32_t b){return GetColorOfRGB(r,g,b,255);}
std::int32_t Graphics::GetColorOfRGB(std::int32_t r,std::int32_t g,std::int32_t b,std::int32_t a){
    auto n=(std::uint32_t(std::clamp(a,0,255))<<24)|(std::uint32_t(std::clamp(r,0,255))<<16)|(std::uint32_t(std::clamp(g,0,255))<<8)|std::uint32_t(std::clamp(b,0,255));return cs::bit_copy<std::int32_t>(n);
}
cs::Array<std::int32_t> Graphics::GetAnchorPosition(std::int32_t x,std::int32_t y,std::int32_t w,std::int32_t h,std::int32_t anchor){
    if(anchor&2)x=cs::sub_i32(x,w/2);else if(anchor&4)x=cs::sub_i32(x,w);
    if(anchor&32)y=cs::sub_i32(y,h/2);else if(anchor&64)y=cs::sub_i32(y,h);
    anchor_result_.at(0)=x;anchor_result_.at(1)=y;return anchor_result_;
}
void Graphics::PushOrigin(){origins_.push_back({origin_x_,origin_y_});}
void Graphics::PushOrigin(std::int32_t x,std::int32_t y,bool concat){PushOrigin();if(concat){x=cs::add_i32(x,origin_x_);y=cs::add_i32(y,origin_y_);}SetOrigin(x,y);}
void Graphics::PopOrigin(){if(origins_.empty())return;auto o=origins_.back();origins_.pop_back();SetOrigin(o[0],o[1]);}
void Graphics::update_world(){
    world_={1,0,0,0,1,0,0,0,1};
    auto translate=[&](float x,float y){world_[6]+=world_[0]*x+world_[3]*y;world_[7]+=world_[1]*x+world_[4]*y;world_[8]+=world_[2]*x+world_[5]*y;};
    translate(float(render_[0]),float(render_[1]));float factor=scale_/100.0f;
    if(std::isnan(factor))throw cs::ArgumentException();
    for(int i=0;i<6;++i)world_[i]*=factor;
    translate(float(origin_x_),float(origin_y_));
}
std::array<float,2> Graphics::point(float x,float y)const{return {world_[0]*x+world_[3]*y+world_[6],world_[1]*x+world_[4]*y+world_[7]};}
void Graphics::trace_edges(const cs::EdgeVisitor& visitor)const{cs::Object::trace_edges(visitor);cs::trace_value(target_,visitor);cs::trace_value(font_,visitor);cs::trace_value(render_result_,visitor);for(const auto& f:fonts_)cs::trace_value(f,visitor);}
void Graphics::release_edges(){cs::Object::release_edges();cs::release_value(target_);cs::release_value(font_);cs::release_value(render_result_);for(auto& f:fonts_)cs::release_value(f);fonts_.clear();}
void Graphics::ClearRenderRect(){render_={0,0,target_->GetWidth(),target_->GetHeight()};SetOrigin(0,0);ClearClip();}
void Graphics::ClearClip(){clip_={float(render_[0]),float(render_[1]),float(render_[2]),float(render_[3])};}
void Graphics::SetClip(float x,float y,float w,float h){auto a=point(x,y),b=point(x+w,y+h);clip_={std::min(a[0],b[0]),std::min(a[1],b[1]),std::fabs(b[0]-a[0]),std::fabs(b[1]-a[1])};}
void Graphics::ClipRect(float x,float y,float w,float h,bool push){
    if(push)PushClip();auto a=point(x,y),b=point(x+w,y+h);auto right=std::min(std::max(a[0],b[0]),clip_[0]+clip_[2]);auto bottom=std::min(std::max(a[1],b[1]),clip_[1]+clip_[3]);
    x=std::max(std::min(a[0],b[0]),clip_[0]);y=std::max(std::min(a[1],b[1]),clip_[1]);clip_={x,y,std::max(0.0f,right-x),std::max(0.0f,bottom-y)};
}
void Graphics::PopClip(){if(clips_.empty())return;clip_=clips_.back();clips_.pop_back();}
void Graphics::SetRenderRect(std::int32_t x,std::int32_t y,std::int32_t w,std::int32_t h){
    ClearRenderRect();render_={coord(float(x)*scale_/100.0f+0.01f),coord(float(y)*scale_/100.0f+0.01f),coord(float(w)*scale_/100.0f+0.01f),coord(float(h)*scale_/100.0f+0.01f)};SetOrigin(0,0);ClearClip();
}
cs::Array<std::int32_t> Graphics::GetRenderRect(){throw cs::ArrayTypeMismatchException();} // Preserve the measured original float[] -> int[] Array.Copy failure.
void Graphics::SetRenderMode(std::int32_t op,std::int32_t src){SetRenderMode(op,src,op==1?cs::sub_i32(255,src):255);}
void Graphics::SetRenderMode(std::int32_t op,std::int32_t src,std::int32_t dst){if(op==1&&cs::add_i32(src,dst)==256)dst=cs::sub_i32(dst,1);mode_={op,src,dst};}
void Graphics::PushRenderMode(std::int32_t op,std::int32_t src,std::int32_t dst){PushRenderMode();SetRenderMode(op,src,dst);}
void Graphics::PopRenderMode(){if(modes_.empty())return;auto m=modes_.back();modes_.pop_back();SetRenderMode(m[0],m[1],m[2]);}
void Graphics::pixel(int x,int y,std::array<std::uint8_t,4> c){
    if(!target_->alive_)throw cs::ObjectDisposedException();
    if(x<0||y<0||x>=target_->width_||y>=target_->height_||float(x)<clip_[0]||float(y)<clip_[1]||float(x)>=clip_[0]+clip_[2]||float(y)>=clip_[1]+clip_[3])return;
    if(mode_[1]<0||mode_[1]>255||mode_[2]<0||mode_[2]>255)throw cs::NotSupportedException("Out-of-unit render ratios need measured fixed-function clamping");
    auto i=(std::size_t(y)*target_->width_+x)*4;auto& destination=target_->rgba_;
    auto quantize=[](float v){return std::uint8_t(std::clamp(std::floor(v*255.0f+0.5f),0.0f,255.0f));};
    float source_alpha=float(c[3])/255.0f;
    // Graphics.GetRenderPass and ShaderBuilder.GetCode select these passes.
    // In normal mode the source ratio modulates RGB, not alpha.
    auto pass=[&](float a,float color_ratio,int operation){
        float da=float(destination[i+3])/255.0f;
        for(int k=0;k<3;++k){float s=float(c[k])/255.0f*color_ratio,d=float(destination[i+k])/255.0f,result{};
            if(operation==0)result=s*a+d*(1.0f-a);
            else if(operation==1)result=s*a+d;
            else if(operation==2)result=d*(1.0f-a);
            else result=d-s*a;
            destination[i+k]=quantize(result);
        }
        float alpha=operation==1?da+a*a:operation==3?da-a*a:operation==4?da*(1.0f-a)-a:a+da*(1.0f-a);
        destination[i+3]=alpha_format(target_->format)?quantize(alpha):255;
    };
    if(mode_[0]!=1&&mode_[0]!=2){pass(source_alpha,float(mode_[1])/255.0f,0);return;}
    if(cs::add_i32(mode_[1],mode_[2])==255){pass(source_alpha*float(mode_[1])/255.0f,1.0f,mode_[0]==1?0:4);return;}
    if(mode_[2]<255)pass(source_alpha*float(255-mode_[2])/255.0f,1.0f,2);
    if(mode_[1]>0)pass(source_alpha*float(mode_[1])/255.0f,1.0f,mode_[0]==1?1:3);
}
void Graphics::FillRect(float x,float y,float w,float h){
    auto a=point(x,y),end=point(x+w,y+h);if(!std::isfinite(a[0]+a[1]+end[0]+end[1]))return;
    if(end[0]<a[0])std::swap(end[0],a[0]);if(end[1]<a[1])std::swap(end[1],a[1]);w=end[0]-a[0];h=end[1]-a[1];if(w==0||h==0)return;
    auto l=int(std::clamp(std::ceil(a[0]-0.5f),0.0f,float(target_->width_)));auto t=int(std::clamp(std::ceil(a[1]-0.5f),0.0f,float(target_->height_)));
    auto r=int(std::clamp(std::ceil(end[0]-0.5f),0.0f,float(target_->width_)));auto b=int(std::clamp(std::ceil(end[1]-0.5f),0.0f,float(target_->height_)));auto c=channels(color_);
    for(int yy=t;yy<b;++yy)for(int xx=l;xx<r;++xx)pixel(xx,yy,c);
}
void Graphics::DrawRect(float x,float y,float w,float h){DrawLine(x,y,x+w,y);DrawLine(x+w,y,x+w,y+h);DrawLine(x+w,y+h,x,y+h);DrawLine(x,y+h,x,y);}
void Graphics::DrawLine(float x,float y,float x2,float y2,float width){
    if(!std::isfinite(x+y+x2+y2+width)||width<=0)return;auto a=point(x,y),b=point(x2,y2);float dx=b[0]-a[0],dy=b[1]-a[1];auto length=std::max(std::fabs(dx),std::fabs(dy));
    if(length>float(std::max(target_->width_,target_->height_))*4)throw cs::NotSupportedException("Unbounded line needs geometric clipping");
    auto steps=std::max(1,int(std::ceil(length)));auto c=channels(color_);auto radius=std::max(0,coord(width*std::fabs(scale_)/200.0f));
    if(radius>std::max(target_->width_,target_->height_))throw cs::NotSupportedException("Very wide lines need geometric clipping");
    for(int i=0;i<=steps;++i){auto xx=coord(std::floor(a[0]+dx*float(i)/float(steps))),yy=coord(std::floor(a[1]+dy*float(i)/float(steps)));for(int v=-radius;v<=radius;++v)for(int u=-radius;u<=radius;++u){auto px=std::int64_t(xx)+u,py=std::int64_t(yy)+v;if(px>=0&&py>=0&&px<target_->width_&&py<target_->height_)pixel(int(px),int(py),c);}}
}
void Graphics::DrawImage(cs::Ref<Image> image,float x,float y){if(image)DrawScaledImage(image,x,y,float(image->GetWidth()),float(image->GetHeight()),0,0,image->GetWidth(),image->GetHeight());}
void Graphics::DrawImage(cs::Ref<Image> image,float x,float y,std::int32_t sx,std::int32_t sy,std::int32_t w,std::int32_t h){if(image)DrawScaledImage(image,x,y,float(w),float(h),sx,sy,w,h);}
void Graphics::DrawScaledImage(cs::Ref<Image> image,float x,float y,float w,float h,std::int32_t sx,std::int32_t sy,std::int32_t sw,std::int32_t sh){
    if(!image)return;auto a=point(x,y),end=point(x+w,y+h);w=end[0]-a[0];h=end[1]-a[1];if(w==0||h==0||!std::isfinite(a[0]+a[1]+w+h))return;
    image->Use();if(!image->native_resident())return;
    if(image->filter!=Image::Filter::Point)throw cs::NotSupportedException("Bilinear sampler not implemented yet");
    auto source=image->pixels(); // Snapshot preserves overlap when drawing an image onto itself.
    auto l=int(std::clamp(std::ceil(std::min(a[0],end[0])-0.5f),0.0f,float(target_->width_))),t=int(std::clamp(std::ceil(std::min(a[1],end[1])-0.5f),0.0f,float(target_->height_)));
    auto r=int(std::clamp(std::ceil(std::max(a[0],end[0])-0.5f),0.0f,float(target_->width_))),b=int(std::clamp(std::ceil(std::max(a[1],end[1])-0.5f),0.0f,float(target_->height_)));
    for(int yy=t;yy<b;++yy)for(int xx=l;xx<r;++xx){
        auto u=std::int64_t(sx)+std::int64_t(std::floor((float(xx)+0.5f-a[0])*float(sw)/w));auto v=std::int64_t(sy)+std::int64_t(std::floor((float(yy)+0.5f-a[1])*float(sh)/h));
        u=std::clamp<std::int64_t>(u,0,image->width_-1);v=std::clamp<std::int64_t>(v,0,image->height_-1);auto i=(std::size_t(v)*image->width_+std::size_t(u))*4;
        pixel(xx,yy,{source[i],source[i+1],source[i+2],source[i+3]});
    }
    image->source_drawn();
}
}
