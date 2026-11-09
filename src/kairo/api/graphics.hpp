#pragma once
#include "semantic_runtime.hpp"
#include "asset_catalog.hpp"
#include "managed_shared_field.hpp"
#include "matrix4.hpp"
#include <array>
namespace pls::kairo {
class Graphics;
class Font;
class MeshManager;
class Offscreen;
struct GraphicsRuntimeBindings {
    cs::Delegate<void()> shape_drawn;
    cs::Delegate<void(cs::Ref<Graphics>,cs::Ref<class Image>,float,float,float,float,float,float,float,float)> image_balloons;
    cs::Delegate<void(cs::Ref<Graphics>,cs::Ref<class Image>,float,float)> image_touches;
    cs::Delegate<void(cs::Ref<Graphics>,cs::String,float,float,std::int32_t)> queue_text;
    cs::Delegate<cs::Ref<cs::Object>(cs::Ref<class Image>)> begin_image_tasks;
    cs::Delegate<void(cs::Ref<class Image>,cs::Ref<cs::Object>,cs::Ref<Offscreen>,bool)> finish_image_tasks;
};
void install_graphics_runtime(GraphicsRuntimeBindings);
cs::Ref<cs::Object> begin_image_tasks(cs::Ref<class Image>);
void finish_image_tasks(cs::Ref<class Image>,cs::Ref<cs::Object>,cs::Ref<Offscreen>,bool);
void install_asset_catalog(const assets::Catalog*);
struct ImageRuntimeBindings {
    cs::Delegate<std::int32_t()> check_count;
    cs::Delegate<bool()> count_enabled;
    cs::Delegate<void(std::int32_t)> adjust_create_area;
    cs::Delegate<cs::Array<std::uint8_t>(std::int32_t,std::int32_t,cs::String,cs::String)> read_source;
    cs::Delegate<cs::Array<std::int32_t>(cs::Array<std::uint8_t>)> measure_source;
};
void install_image_runtime(ImageRuntimeBindings);
class Image : public cs::Object {
    template<class T>struct BalloonTasks : cs::Object {
        cs::List<T> values=cs::List<T>::make();
        void trace_edges(const cs::EdgeVisitor&visit)const override{cs::trace_value(values,visit);}
        void release_edges()override{cs::release_value(values);}
    };
    cs::Ref<cs::Object> balloon_tasks_,text_tasks_,touch_tasks_;
    template<class T>cs::List<T>& task_slot(cs::Ref<cs::Object>&slot){
        if(!slot)slot=cs::make_ref<BalloonTasks<T>>();
        auto storage=std::dynamic_pointer_cast<BalloonTasks<T>>(slot);
        if(!storage)throw cs::InvalidCastException("Image task slot has a different managed element type");
        return storage->values;
    }
    std::int32_t width_{},height_{},transparent_{},alpha_{255};
    bool alive_{},disposed_{},created_image_{},lock_expiration_{};
    std::int32_t check_count_{},validate_frames_{-1};
    cs::Array<std::uint8_t> source_bytes_;
    cs::Delegate<cs::Array<std::uint8_t>()> source_loader_;
    cs::String file_,palette_file_;
    std::int32_t rs_id_{-1},rc_id_{-1};
    std::vector<std::uint8_t> rgba_;
    std::int32_t alpha_type_{-1};
    static void track_created(const cs::Ref<Image>&,bool generated);
    friend class Graphics;
    friend class MeshManager;
    friend class Offscreen;
public:
    enum class Format:std::int32_t { Default=-1,ARGB32=5,ARGB4444=2,RGB24=3,RGB565=7 };
    enum class Filter:std::int32_t { Default=-1,Point=0,Bilinear=1,Trilinear=2 };
    static std::string source_managed_type_name(){return "kairo.unity.ui.Image";}
    std::string managed_type_name()const override{return source_managed_type_name();}
    inline static Filter DEFAULT_FILTER=Filter::Point;
    inline static Format DEFAULT_FORMAT=Format::ARGB32;
    cs::String name_;
    bool useBin_{};
    std::int32_t standardWidth_{},standardHeight_{},renderQueue_{},imageAtlasId_{-1};
    cs::Array<std::int8_t> optimize_,optimizeAccess_,optimizeSeb_;
    cs::Array<std::int16_t> optimizeEx_,optimizeAccessL_,optimizeSebEx_;
    cs::Array<cs::Ref<Image>> images_;
    std::int32_t optimizeWidthNum_{},optimizeHeightNum_{},optimizePass_{};
    std::int16_t optimizeBlockWidth_{},optimizeBlockHeight_{};
    inline static cs::Array<std::int32_t> getOptimize_result=cs::Array<std::int32_t>::make(7),getOptimizeSeb_result=cs::Array<std::int32_t>::make(4),getPaletteInfo_result=cs::Array<std::int32_t>::make(2),getAreaSize_result=cs::Array<std::int32_t>::make(2);
    Format format{Format::ARGB32};Filter filter{Filter::Point};
    static cs::Ref<Image> CreateImage(std::int32_t,std::int32_t,Format=Format::RGB24,Filter=Filter::Default);
    static cs::Ref<Image> Load(cs::Array<std::uint8_t>,Format=Format::Default,Filter=Filter::Default);
    static cs::Ref<Image> FromRgba(std::int32_t,std::int32_t,std::vector<std::uint8_t>);
    static cs::Ref<Image> FromSource(cs::Array<std::uint8_t>,Format=Format::Default,Filter=Filter::Default);
    static cs::Ref<Image> FromLoader(cs::Delegate<cs::Array<std::uint8_t>()>,Format=Format::Default,Filter=Filter::Default);
    static cs::Ref<Image> FromBytes(cs::Array<std::uint8_t>,Format=Format::Default,Filter=Filter::Default);
    static cs::Ref<Image> FromRecord(std::int32_t,std::int32_t,cs::String,cs::String,Format=Format::Default,Filter=Filter::Default);
    static cs::Ref<Image> FromFile(cs::String file,cs::String palette,Format f=Format::Default,Filter filter=Filter::Default){return FromRecord(-1,-1,file,palette,f,filter);}
    static cs::Ref<Image> FromFile(cs::String file,Format f=Format::Default,Filter filter=Filter::Default){return FromRecord(-1,-1,file,{},f,filter);}
    void SetStandardResolution(std::int32_t w,std::int32_t h){standardWidth_=w;standardHeight_=h;}
    // Atlas packing is a GPU allocation choice. The CPU backend uses separate
    // RGBA images (atlas manager disabled), the original method's first guard.
    void SetImageAtlasId(std::int32_t){}
    void SetName(cs::String value){name_=value;}cs::String GetName()const{return name_;}
    std::int32_t GetWidth()const{return width_;}
    std::int32_t GetHeight()const{return height_;}
    std::int32_t GetAlpha()const{return alpha_;}
    std::int32_t GetAlphaType();
    void SetAlphaType(std::int32_t value){alpha_type_=value;}
    void SetAlpha(std::int32_t);
    void SetTransparentColor(std::int32_t c){transparent_=c;}
    std::int32_t GetTransparentColor()const{return transparent_;}
    void SetTransparentEnabled(bool);
    cs::Ref<Graphics> GetGraphics();
    void Dispose();
    void Use();void Unuse();
    bool get_IsDisposed()const{return disposed_;}
    bool native_resident()const{return alive_;}
    void memory_ranges(const memory::RangeVisitor&visit)const override{visit(rgba_.data(),rgba_.capacity(),memory::Category::textures);}
    void SetExpiration(bool yes,std::int32_t frames=-1){lock_expiration_=!yes;validate_frames_=frames;}
    bool IsExpiration()const{return !lock_expiration_;}
    static void SetSourceImageMaxCount(std::int32_t);
    static void SetSourceImageMaxPixels(std::int32_t);
    static void SetSourceImageValidateFrames(std::int32_t);
    static void UnuseExpirationImages();
    static std::array<std::int32_t,2> native_cache_size();
    static std::int32_t native_releases();
    void source_drawn();
    template<class T>cs::List<T>& source_balloon_tasks(){
        return task_slot<T>(balloon_tasks_);
    }
    template<class T>cs::List<T>& source_text_tasks(){return task_slot<T>(text_tasks_);}
    template<class T>cs::List<T>& source_touch_tasks(){return task_slot<T>(touch_tasks_);}
    bool source_has_balloon_tasks()const{return bool(balloon_tasks_)||bool(text_tasks_);}
    bool source_has_touch_tasks()const{return bool(touch_tasks_);}
    void trace_edges(const cs::EdgeVisitor&)const override;void release_edges()override;
    const std::vector<std::uint8_t>& pixels()const;
};
class Offscreen : public cs::Object {
    struct State;std::unique_ptr<State> state_;
    void resize(std::int32_t,std::int32_t,Image::Format,Image::Filter,bool);
    void render_frame();void cleanup();
public:
    using RenderMethod=cs::Delegate<bool(cs::Ref<Graphics>,cs::Ref<Offscreen>)>;
    using GetLayoutMethod=cs::Delegate<void(std::int32_t&,std::int32_t&,Image::Format&,Image::Filter&)>;
    Offscreen();~Offscreen()override;
    Matrix4x4 dynamicTransform_=Matrix4x4::identity();
    static std::string source_managed_type_name(){return "kairo.unity.graphics.Offscreen";}
    std::string managed_type_name()const override{return source_managed_type_name();}
    static cs::Ref<Offscreen> CreateOffscreen(RenderMethod,RenderMethod,GetLayoutMethod,std::int32_t order=0);
    cs::Ref<Image> get_Image()const;
    void Dispose();
    static void RenderAll();static void EndFrame();static void DisposeAll();
    static bool IsRendering();
    static std::string LastRenderError();
    void trace_edges(const cs::EdgeVisitor&)const override;void release_edges()override;
};
class Graphics : public cs::Object {
    friend class Canvas;
    friend class MeshManager;
    cs::Ref<MeshManager> mesh_manager_;
    inline static cs::SharedField<cs::Ref<Graphics>> current_;
    cs::Ref<Image> target_;
    bool is_gui_{},gl_render_{},clip_enabled_{};
    std::int32_t gl_render_count_{};
    std::vector<bool> clip_enabled_stack_;
    std::int32_t color_{cs::bit_copy<std::int32_t>(std::uint32_t(0xff000000))},origin_x_{},origin_y_{};
    float scale_{100.0f};
    std::array<float,9> world_{1,0,0,0,1,0,0,0,1};
    std::array<float,9> screen_{1,0,0,0,1,0,0,0,1};
    using Affine=std::array<float,9>;
    std::vector<std::array<Affine,2>> matrix_stack_;
    std::int32_t matrix_index_{-1},local_coordinate_count_{},flip_mode_{};
    Affine local_coordinate_matrix_{1,0,0,0,1,0,0,0,1};
    std::vector<Affine> backup_world_;
    std::array<float,4> clip_{};
    std::array<std::int32_t,4> render_{};
    std::array<std::int32_t,3> mode_{0,255,0};
    std::array<std::int32_t,2> blend_{0,0};
    std::vector<std::array<std::int32_t,2>> blend_stack_;
    std::vector<std::array<float,4>> clips_;
    std::vector<std::array<std::int32_t,2>> origins_;
    std::vector<std::array<std::int32_t,3>> modes_;
    cs::Ref<Font> font_;
    std::vector<cs::Ref<Font>> fonts_;
    inline static bool auto_text_layout_{};
    inline static std::vector<bool> auto_text_layout_stack_;
    cs::Array<std::int32_t> render_result_=cs::Array<std::int32_t>::make(4);
    cs::Array<std::int32_t> clip_result_=cs::Array<std::int32_t>::make(4);
    cs::Array<float> image_clip_=cs::Array<float>::make(4);
    inline static cs::Array<std::int32_t> anchor_result_=cs::Array<std::int32_t>::make(2);
    void pixel(int,int,std::array<std::uint8_t,4>,bool textured=false);
    std::array<float,2> point(float,float)const;
    void update_world();
    void update_screen();
    bool begin_render_matrix(float&,float&);void end_render_matrix();
    void begin_primitive(cs::Ref<Image> image={});
public:
    explicit Graphics(cs::Ref<Image>,bool display_context=false);
    cs::Ref<MeshManager> GetMeshManager();
    cs::Ref<Image> source_render_;
    cs::Ref<Offscreen> offscreen_;
    static cs::Ref<Graphics> GetCurrent(){return current_.load();}
    bool IsGUI()const{return is_gui_;}
    bool IsRenderGUIMode()const{return is_gui_&&!gl_render_;}
    void BeginGLRender(bool clip_enable=true);
    void EndGLRender(bool force=false);
    // CPU commands are submitted immediately; flushing retains control state.
    void FlushGLRender(bool=false){}
    bool SetClipEnable(bool value){clip_enabled_=value;return true;}
    bool IsClipEnable()const{return clip_enabled_;}
    void PushClipEnable(){clip_enabled_stack_.push_back(clip_enabled_);}
    bool PushClipEnable(bool value){PushClipEnable();return SetClipEnable(value);}
    void PopClipEnable(){if(!clip_enabled_stack_.empty()){auto value=bool(clip_enabled_stack_.back());clip_enabled_stack_.pop_back();SetClipEnable(value);}}
    void ResetRender();
    void PushMatrixValues(cs::Array<float> values={});
    void SetMatrixValues(cs::Array<float> values={});
    cs::Array<float> GetMatrixValues(std::int32_t mode=0)const;
    void PopMatrix();void ClearLocalMatrix(){matrix_index_=-1;update_screen();}
    bool CheckLocalMatrix()const{return matrix_index_>=0||local_coordinate_count_>0;}
    void SetFlipMode(std::int32_t value){flip_mode_=value;}
    void BeginLocalCoordination(float&,float&);void BeginLocalCoordination(std::int32_t&,std::int32_t&);void BeginLocalCoordination(){std::int32_t x=0,y=0;BeginLocalCoordination(x,y);}
    void EndLocalCoordination();
    cs::Array<float> GetClipValues()const{return cs::Array<float>::from({clip_[0],clip_[1],clip_[2],clip_[3]});}
    cs::Array<std::int32_t> GetClip(){for(std::int32_t i=0;i<4;++i)clip_result_.at(i)=cs::conv_i32(clip_[i]);return clip_result_;}
    cs::Array<float> GetImageClip(){return std::isnan(image_clip_.at(0))?cs::Array<float>{}:image_clip_;}
    void SetImageClip(float x,float y,float w,float h){image_clip_.at(0)=x;image_clip_.at(1)=y;image_clip_.at(2)=w;image_clip_.at(3)=h;}
    void ClearImageClip(){for(std::int32_t i=0;i<4;++i)image_clip_.at(i)=std::numeric_limits<float>::quiet_NaN();}
    static std::int32_t GetColorOfRGB(std::int32_t,std::int32_t,std::int32_t);
    static std::int32_t GetColorOfRGB(std::int32_t,std::int32_t,std::int32_t,std::int32_t);
    static cs::Array<std::int32_t> GetAnchorPosition(std::int32_t,std::int32_t,std::int32_t,std::int32_t,std::int32_t);
    void SetColor(std::int32_t c){color_=c;}
    void SetFont(cs::Ref<Font>);cs::Ref<Font> GetFont(cs::Ref<Font> copy=nullptr);
    void PushFont(cs::Ref<Font>);void PushFont(std::int32_t);void PopFont();
    static void SetAutoTextLayout(bool enabled){auto_text_layout_=enabled;}static bool IsAutoTextLayout(){return auto_text_layout_;}
    static bool PeekAutoTextLayout(){return auto_text_layout_stack_.empty()?auto_text_layout_:bool(auto_text_layout_stack_.back());}
    static void PushAutoTextLayout(bool enabled){auto_text_layout_stack_.push_back(enabled);}
    static bool PopAutoTextLayout(){if(auto_text_layout_stack_.empty())return auto_text_layout_;auto value=bool(auto_text_layout_stack_.back());auto_text_layout_stack_.pop_back();return value;}
    std::int32_t& source_color(){return color_;}cs::Ref<Font>& source_font(){return font_;}
    inline static float outlineWidth_=1.0f;inline static std::int32_t outlineQuality_=0;
    inline static std::int32_t lineSpacing_=0;
    bool fontScaleOffsetEnable_=true;
    std::int32_t StringWidth(cs::String);
    void DrawString(cs::String,float,float);void DrawString(cs::String,float,float,std::int32_t);
    void DrawPreparedString(cs::String,float,float,std::int32_t);
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
    void SetBlendMode(std::int32_t mode,std::int32_t color=0){if(mode<0||mode>3)throw cs::ArgumentException();blend_={mode,color};}
    void SetBlendMode(std::int32_t mode,std::int32_t r,std::int32_t g,std::int32_t b,std::int32_t a=255){SetBlendMode(mode,GetColorOfRGB(r,g,b,a));}
    std::int32_t GetBlendMode()const{return blend_[0];}std::int32_t GetBlendColor()const{return blend_[1];}
    void PushBlendMode(){blend_stack_.push_back(blend_);}
    void PushBlendMode(std::int32_t mode,std::int32_t color=0){PushBlendMode();SetBlendMode(mode,color);}
    void PushBlendMode(std::int32_t mode,std::int32_t r,std::int32_t g,std::int32_t b,std::int32_t a=255){PushBlendMode(mode,GetColorOfRGB(r,g,b,a));}
    void PopBlendMode(){if(blend_stack_.empty())return;auto value=blend_stack_.back();SetBlendMode(value[0],value[1]);blend_stack_.pop_back();}
    void FillRect(float,float,float,float);void DrawRect(float,float,float,float);
    void DrawLine(float,float,float,float,float=1.0f);
    void DrawArc(float,float,float,float,float,float,float=1.0f);
    void DrawArc2(float x,float y,float w,float h,float start,float sweep){DrawArc(x,y,w-1.0f,h-1.0f,start,sweep);}
    void FillArc(float,float,float,float,float,float);
    void DrawImage(cs::Ref<Image>,float,float);
    void DrawImage(cs::Ref<Image>,float,float,std::int32_t,std::int32_t,std::int32_t,std::int32_t);
    void DrawScaledImage(cs::Ref<Image>,float,float,float,float,std::int32_t,std::int32_t,std::int32_t,std::int32_t);
    void CopyArea(std::int32_t,std::int32_t,std::int32_t,std::int32_t,std::int32_t,std::int32_t){} // Source body is empty.
    void Dispose(bool=false){} // CPU commands are immediate; no cached meshes to clear.
    cs::Ref<Image> target()const{return target_;}
    void trace_edges(const cs::EdgeVisitor&)const override;
    void release_edges()override;
};
inline void native_graphics_push_matrix(cs::Ref<Graphics> g,cs::Array<float> values){cs::nonnull(g)->PushMatrixValues(values);}
inline void native_graphics_set_matrix(cs::Ref<Graphics> g,cs::Array<float> values){cs::nonnull(g)->SetMatrixValues(values);}
inline cs::Array<float> native_graphics_read_matrix(cs::Ref<Graphics> g,std::int32_t mode){return cs::nonnull(g)->GetMatrixValues(mode);}
inline cs::Array<float> native_graphics_read_clip(cs::Ref<Graphics> g){return cs::nonnull(g)->GetClipValues();}
inline cs::Ref<Font> native_graphics_read_font(cs::Ref<Graphics> g){return cs::nonnull(g)->source_font();}
inline void native_graphics_draw_prepared(cs::Ref<Graphics> g,cs::String value,float x,float y,std::int32_t anchor){cs::nonnull(g)->DrawPreparedString(std::move(value),x,y,anchor);}
}
