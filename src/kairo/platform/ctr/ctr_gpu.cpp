#include "ctr_gpu.hpp"
#include "graphics.hpp"
#include "ctr_texture.hpp"
#include "quad_shbin.h"
#include <3ds.h>
#include <citro3d.h>
#include <algorithm>
#include <chrono>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <map>
#include <mutex>
#include <stdexcept>

namespace pls::ctr {
namespace {
using Clock=std::chrono::steady_clock;
std::uint64_t elapsed(Clock::time_point start){return std::chrono::duration_cast<std::chrono::nanoseconds>(Clock::now()-start).count();}
constexpr u32 rgba8(u32 r,u32 g,u32 b,u32 a){return r|(g<<8)|(b<<16)|(a<<24);}
constexpr std::size_t glyph_budget=1024*1024;
constexpr u32 transfer_flags=GX_TRANSFER_FLIP_VERT(0)|GX_TRANSFER_OUT_TILED(0)|GX_TRANSFER_RAW_COPY(0)|
    GX_TRANSFER_IN_FORMAT(GX_TRANSFER_FMT_RGBA8)|GX_TRANSFER_OUT_FORMAT(GX_TRANSFER_FMT_RGB8)|GX_TRANSFER_SCALING(GX_TRANSFER_SCALE_NO);

struct Allocation {
    C3D_Tex texture{};
    C3D_RenderTarget* target{};
    Allocation* next{};
    bool allocated{},retired{};
};
// This queue contains native allocations only. Image destruction may happen on
// another thread; GPU deletion is exclusively performed by the drawing host.
struct Lifetime {
    std::mutex mutex;
    Allocation* head{};
    bool closed{},pending{};
    void retire(Allocation* value)noexcept{
        std::lock_guard<std::mutex> lock(mutex);
        if(closed){delete value;return;}
        value->retired=true;pending=true;
    }
    static void release(Allocation& value){
        if(value.target){C3D_RenderTargetDelete(value.target);value.target=nullptr;}
        if(value.allocated){C3D_TexDelete(&value.texture);value.allocated=false;}
    }
    void drain(bool closing=false){
        std::lock_guard<std::mutex> lock(mutex);
        C3D_TexBind(0,nullptr);
        Allocation** link=&head;
        while(*link){
            auto* value=*link;
            if(value->retired||closing){
                release(*value);*link=value->next;
                if(value->retired)delete value;
            }else link=&value->next;
        }
        pending=false;if(closing)closed=true;
    }
    bool has_pending(){std::lock_guard<std::mutex> lock(mutex);return pending;}
};
struct NativeImage final:platform::GpuImage {
    std::shared_ptr<Lifetime> lifetime;
    Allocation* allocation;
    NativeImage(std::shared_ptr<Lifetime> owner,Allocation* value):lifetime(std::move(owner)),allocation(value){}
    ~NativeImage()override{lifetime->retire(allocation);}
};
std::shared_ptr<NativeImage> native(kairo::Image& image){
    if(!image.gpu_image())return {};
    auto result=std::dynamic_pointer_cast<NativeImage>(image.gpu_image());
    if(!result)throw std::runtime_error("Image belongs to a different GPU backend");
    return result;
}
}

struct Gpu::State {
    std::shared_ptr<Lifetime> lifetime=std::make_shared<Lifetime>();
    DVLB_s* shader{};
    shaderProgram_s program{};
    int transform{};
    C3D_RenderTarget* top{};
    C3D_RenderTarget* bottom{};
    C3D_RenderTarget* current{};
    bool open{};
    bool boot_trace{};
    bool graphics_ready{},gpu_ready{},program_ready{};
    bool opaque_target{};
    VideoProfile metrics{};
    const C3D_Tex* previous_texture{};
    bool texture_seen{};
    std::map<std::uint64_t,std::shared_ptr<NativeImage>> glyph_cache;
    std::size_t glyph_bytes{};
    mutable std::size_t peak_texture{},peak_vram{};

    void trace(const char* stage)const{
        if(boot_trace){std::fprintf(stderr,"PLS_VIDEO_GPU_BOOT %s\n",stage);std::fflush(stderr);}
    }

    ~State(){
        if(gpu_ready){
            C3D_FrameEnd(0);
            if(!C3D_FrameBegin(0))std::terminate();
            C3D_FrameEnd(0);
            glyph_cache.clear();lifetime->drain(true);
            if(top)C3D_RenderTargetDelete(top);
            if(bottom)C3D_RenderTargetDelete(bottom);
            if(program_ready)shaderProgramFree(&program);
            if(shader)DVLB_Free(shader);
            C3D_Fini();
        }
        if(graphics_ready)gfxExit();
    }

    std::shared_ptr<NativeImage> create(int width,int height,bool target){
        auto* allocation=new Allocation;
        {
            std::lock_guard<std::mutex> lock(lifetime->mutex);
            allocation->next=lifetime->head;lifetime->head=allocation;
        }
        std::shared_ptr<NativeImage> result;
        try{result=std::make_shared<NativeImage>(lifetime,allocation);}
        catch(...){lifetime->retire(allocation);throw;}
        const auto w=assets::ctr_texture::extent(width),h=assets::ctr_texture::extent(height);
        allocation->allocated=target?C3D_TexInitVRAM(&allocation->texture,w,h,GPU_RGBA8):C3D_TexInit(&allocation->texture,w,h,GPU_RGBA8);
        if(!allocation->allocated){
            std::fprintf(stderr,"PLS_VIDEO_ALLOCATION_FAILURE target=%d logical=%dx%d texture=%dx%d requested_bytes=%lu linear_free=%lu vram_free=%lu\n",
                int(target),width,height,w,h,static_cast<unsigned long>(w*h*4),static_cast<unsigned long>(linearSpaceFree()),static_cast<unsigned long>(vramSpaceFree()));
            {
                std::lock_guard<std::mutex> lock(lifetime->mutex);
                for(auto* item=lifetime->head;item;item=item->next)if(item->allocated)
                    std::fprintf(stderr,"PLS_VIDEO_LIVE_TEXTURE target=%d size=%ux%u bytes=%lu retired=%d\n",int(item->target!=nullptr),unsigned(item->texture.width),unsigned(item->texture.height),static_cast<unsigned long>(item->texture.size),int(item->retired));
            }
            std::fflush(stderr);
            throw std::runtime_error("GPU texture allocation failed: "+std::to_string(w)+"x"+std::to_string(h));
        }
        C3D_TexSetFilter(&allocation->texture,GPU_NEAREST,GPU_NEAREST);
        C3D_TexSetWrap(&allocation->texture,GPU_CLAMP_TO_EDGE,GPU_CLAMP_TO_EDGE);
        if(target){
            allocation->target=C3D_RenderTargetCreateFromTex(&allocation->texture,GPU_TEXFACE_2D,0,GPU_RB_DEPTH24);
            if(!allocation->target)throw std::runtime_error("GPU render target allocation failed");
        }
        return result;
    }
    void upload(Allocation& value,const std::vector<std::uint8_t>& pixels,int width,int height,bool tiled){
        const auto start=Clock::now();
        auto& texture=value.texture;
        if(boot_trace){std::fprintf(stderr,"PLS_VIDEO_GPU_BOOT upload target=%d logical=%dx%d texture=%ux%u bytes=%lu\n",int(value.target!=nullptr),width,height,unsigned(texture.width),unsigned(texture.height),static_cast<unsigned long>(texture.size));std::fflush(stderr);}
        void* staging=value.target?linearAlloc(texture.size):texture.data;
        if(!staging)throw std::bad_alloc();
        try{
            if(tiled&&!value.target){
                (void)assets::ctr_texture::validate(pixels,width,height);
                std::memcpy(staging,pixels.data()+24,texture.size);
                auto* output=static_cast<std::uint8_t*>(staging);
                for(int y=0;y<texture.height;++y)for(int x=0;x<texture.width;++x)if(x>=width||y>=height){
                    const auto from=assets::ctr_texture::offset(std::min(x,width-1),std::min(y,height-1),texture.width)-24;
                    const auto to=assets::ctr_texture::offset(x,y,texture.width)-24;
                    std::memcpy(output+to,output+from,4);
                }
            }else{
                if(tiled)(void)assets::ctr_texture::validate(pixels,width,height);
                else if(pixels.size()!=std::size_t(width)*height*4)throw std::runtime_error("GPU RGBA extent differs");
                auto* output=static_cast<std::uint8_t*>(staging);
                for(int y=0;y<texture.height;++y)for(int x=0;x<texture.width;++x){
                    const int px=std::min(x,width-1),py=std::min(y,height-1);
                    const auto src=tiled?assets::ctr_texture::offset(px,py,texture.width):(std::size_t(py)*width+px)*4;
                    const auto row=y;
                    const auto dst=assets::ctr_texture::offset(x,row,texture.width)-24;
                    for(int c=0;c<4;++c)output[dst+c]=pixels[src+(tiled?c:3-c)];
                }
            }
            GSPGPU_FlushDataCache(staging,texture.size);
            if(value.target){
                // Inside a frame SyncTextureCopy only enqueues the transfer.
                // Close/wait first so the temporary upload buffer can be freed.
                const bool reopen=open;wait_boundary();
                const auto wait=Clock::now();
                trace("upload.copy.begin");
                C3D_SyncTextureCopy(static_cast<u32*>(staging),0,static_cast<u32*>(texture.data),0,texture.size,8);
                trace("upload.copy.end");
                if(reopen){if(!C3D_FrameBegin(0))throw std::runtime_error("GPU upload resume failed");open=true;}
                metrics.wait_ns+=elapsed(wait);
            }
        }catch(...){if(value.target)linearFree(staging);throw;}
        if(value.target)linearFree(staging);
        metrics.upload_ns+=elapsed(start);
        ++metrics.uploads;metrics.upload_bytes+=texture.size;
    }
    std::shared_ptr<NativeImage> image(kairo::Image& image,bool target){
        auto result=native(image);
        if(result&&(!target||result->allocation->target))return result;
        if(result&&target)image.gpu_image().reset();
        result=create(image.GetWidth(),image.GetHeight(),target);
        bool tiled=false;const auto& bytes=image.gpu_source(tiled);
        upload(*result->allocation,bytes,image.GetWidth(),image.GetHeight(),tiled);
        image.gpu_image()=result;
        return result;
    }
    void select(C3D_RenderTarget* target,int width,int height,bool tilt){
        if(!open)throw std::runtime_error("GPU drawing outside a frame");
        if(current==target)return;
        if(!C3D_FrameDrawOn(target))throw std::runtime_error("GPU target selection failed");
        C3D_Mtx matrix;
        if(tilt)Mtx_OrthoTilt(&matrix,0,float(width),float(height),0,0,1,true);
        else Mtx_Ortho(&matrix,0,float(width),float(height),0,0,1,true);
        C3D_FVUnifMtx4x4(GPU_VERTEX_SHADER,transform,&matrix);
        current=target;
    }
    void wait_boundary(){
        trace("boundary.begin");
        if(open){C3D_FrameEnd(0);open=false;}
        trace("boundary.submitted");
        const auto start=Clock::now();
        if(!C3D_FrameBegin(0))throw std::runtime_error("GPU frame wait failed");
        trace("boundary.completed");
        metrics.wait_ns+=elapsed(start);
        // An empty submission closes the frame, allowing RenderTargetDelete.
        C3D_FrameEnd(0);current=nullptr;
    }
    void draw(Allocation*,const platform::GpuQuad&,int,int,bool,bool textured=true);
};

void Gpu::State::draw(Allocation* source,const platform::GpuQuad& quad,int width,int height,bool tilt,bool textured){
    const auto left=std::clamp(int(std::ceil(quad.clip[0])),0,width);
    const auto upper=std::clamp(int(std::ceil(quad.clip[1])),0,height);
    const auto right=std::clamp(int(std::ceil(quad.clip[0]+quad.clip[2])),0,width);
    const auto lower=std::clamp(int(std::ceil(quad.clip[1]+quad.clip[3])),0,height);
    if(right<=left||lower<=upper)return;
    if(tilt)C3D_SetScissor(GPU_SCISSOR_DISABLE,0,0,0,0);
    else C3D_SetScissor(GPU_SCISSOR_NORMAL,left,height-lower,right,height-upper);
    C3D_DepthTest(quad.depth_test,GPU_GEQUAL,quad.depth_write?GPU_WRITE_ALL:GPU_WRITE_COLOR);
    if(quad.filter==1)C3D_AlphaTest(true,GPU_GEQUAL,253);
    else if(quad.filter==2)C3D_AlphaTest(true,GPU_LEQUAL,252);
    else C3D_AlphaTest(quad.alpha_type==1,GPU_GEQUAL,3);
    const auto* selected_texture=source?&source->texture:nullptr;
    if(!texture_seen||selected_texture!=previous_texture){++metrics.texture_switches;previous_texture=selected_texture;texture_seen=true;}
    C3D_TexBind(0,source?&source->texture:nullptr);
    for(int i=0;i<6;++i)C3D_TexEnvInit(C3D_GetTexEnv(i));
    C3D_TexEnvBufUpdate(C3D_Both,0);
    auto* env=C3D_GetTexEnv(0);
    C3D_TexEnvSrc(env,C3D_Both,source?GPU_TEXTURE0:GPU_PRIMARY_COLOR,GPU_PRIMARY_COLOR);
    C3D_TexEnvFunc(env,C3D_Both,source?GPU_MODULATE:GPU_REPLACE);
    if(quad.blend[0]==1){
        // Preserve the base color while forming the source-alpha tinted term.
        C3D_TexEnvBufUpdate(C3D_RGB,1);
        auto* tint=C3D_GetTexEnv(1);
        const auto color=std::uint32_t(quad.blend[1]);
        C3D_TexEnvColor(tint,rgba8((color>>16)&255,(color>>8)&255,color&255,255));
        C3D_TexEnvSrc(tint,C3D_RGB,GPU_CONSTANT,source&&textured?GPU_TEXTURE0:GPU_CONSTANT);
        C3D_TexEnvOpRgb(tint,GPU_TEVOP_RGB_SRC_COLOR,GPU_TEVOP_RGB_SRC_ALPHA);
        C3D_TexEnvFunc(tint,C3D_RGB,GPU_MODULATE);
        auto* mix=C3D_GetTexEnv(2);
        C3D_TexEnvColor(mix,rgba8(0,0,0,color>>24));
        C3D_TexEnvSrc(mix,C3D_RGB,GPU_PREVIOUS,GPU_PREVIOUS_BUFFER,GPU_CONSTANT);
        C3D_TexEnvOpRgb(mix,GPU_TEVOP_RGB_SRC_COLOR,GPU_TEVOP_RGB_SRC_COLOR,GPU_TEVOP_RGB_SRC_ALPHA);
        C3D_TexEnvFunc(mix,C3D_RGB,GPU_INTERPOLATE);
    }else if(quad.blend[0]==3&&source&&textured){
        C3D_TexEnvBufUpdate(C3D_RGB,1);
        const std::array<GPU_TEVOP_RGB,3> channels{GPU_TEVOP_RGB_SRC_R,GPU_TEVOP_RGB_SRC_G,GPU_TEVOP_RGB_SRC_B};
        for(int channel=0;channel<3;++channel){
            auto* grey=C3D_GetTexEnv(channel+1);
            C3D_TexEnvColor(grey,rgba8(85,85,85,255));
            C3D_TexEnvSrc(grey,C3D_RGB,channel?GPU_PREVIOUS_BUFFER:GPU_PREVIOUS,GPU_CONSTANT,GPU_PREVIOUS);
            C3D_TexEnvOpRgb(grey,channels[channel]);
            C3D_TexEnvFunc(grey,C3D_RGB,channel?GPU_MULTIPLY_ADD:GPU_MODULATE);
        }
    }else if(quad.blend[0]<0||quad.blend[0]>3)throw std::runtime_error("Unsupported GPU blend mode");
    if(quad.mode[1]<0||quad.mode[1]>255||quad.mode[2]<0||quad.mode[2]>255)
        throw std::runtime_error("GPU render ratios outside 0..255");
    auto pass=[&](float alpha,float rgb,int operation){
        if(quad.blend[0]==1){
            const auto color=std::uint32_t(quad.blend[1]);
            C3D_TexEnvColor(C3D_GetTexEnv(1),rgba8(unsigned(float((color>>16)&255)*rgb),unsigned(float((color>>8)&255)*rgb),unsigned(float(color&255)*rgb),255));
        }
        auto equation=operation==3||operation==4?GPU_BLEND_REVERSE_SUBTRACT:GPU_BLEND_ADD;
        auto src=operation==2?GPU_ZERO:GPU_SRC_ALPHA;
        auto dst=operation==1||operation==3?GPU_ONE:GPU_ONE_MINUS_SRC_ALPHA;
        auto src_alpha=operation==1||operation==3?GPU_SRC_ALPHA:GPU_ONE;
        C3D_AlphaBlend(equation,opaque_target?GPU_BLEND_ADD:equation,src,dst,
                       opaque_target?GPU_ZERO:src_alpha,opaque_target?GPU_ONE:dst);
        std::array<float,4> color{};
        for(int c=0;c<3;++c){
            color[c]=float(quad.color[c])/255.0f*rgb;
            if(quad.blend[0]==2){
                auto constant=std::uint32_t(quad.blend[1]);
                color[c]*=float((constant>>(16-c*8))&255)/255.0f*float(constant>>24)/255.0f;
            }
        }
        color[3]=float(quad.color[3])/255.0f*alpha;
        constexpr std::array<int,6> indices{0,1,2,0,2,3};
        C3D_ImmDrawBegin(GPU_TRIANGLES);
        for(auto index:indices){
            const auto& v=quad.vertices[index];
            const float u=source?v.u/float(source->texture.width):0;
            const float t=source?(1.0f-v.v/float(source->texture.height)):0;
            C3D_ImmSendAttrib(v.x,v.y,quad.depth_test?quad.depth:0.5f,1);
            C3D_ImmSendAttrib(color[0],color[1],color[2],color[3]);
            C3D_ImmSendAttrib(u,t,0,0);
        }
        C3D_ImmDrawEnd();++metrics.quads;
    };
    if(quad.mode[0]!=1&&quad.mode[0]!=2)pass(1,float(quad.mode[1])/255,0);
    else if(quad.mode[1]+quad.mode[2]==255)pass(float(quad.mode[1])/255,1,quad.mode[0]==1?0:4);
    else{
        if(quad.mode[2]<255)pass(float(255-quad.mode[2])/255,1,2);
        if(quad.mode[1]>0)pass(float(quad.mode[1])/255,1,quad.mode[0]==1?1:3);
    }
    if(C3D_GetCmdBufUsage()>0.9f)throw std::runtime_error("GPU command buffer budget exceeded");
}

Gpu::Gpu():state_(std::make_unique<State>()){
    auto& s=*state_;
    gfxInitDefault();s.graphics_ready=true;
    if(!C3D_Init(1024*1024))throw std::runtime_error("citro3d initialization failed");
    s.gpu_ready=true;
    s.shader=DVLB_ParseFile(reinterpret_cast<u32*>(const_cast<unsigned char*>(quad_shbin)),quad_shbin_size);
    if(!s.shader)throw std::runtime_error("GPU shader loading failed");
    if(R_FAILED(shaderProgramInit(&s.program)))throw std::runtime_error("GPU program initialization failed");
    s.program_ready=true;
    if(R_FAILED(shaderProgramSetVsh(&s.program,&s.shader->DVLE[0])))throw std::runtime_error("GPU vertex shader initialization failed");
    C3D_BindProgram(&s.program);
    s.transform=shaderInstanceGetUniformLocation(s.program.vertexShader,"transform");
    if(s.transform<0)throw std::runtime_error("GPU transform uniform is missing");
    auto* attributes=C3D_GetAttrInfo();AttrInfo_Init(attributes);
    for(int i=0;i<3;++i)AttrInfo_AddLoader(attributes,i,GPU_FLOAT,4);
    C3D_CullFace(GPU_CULL_NONE);
    s.top=C3D_RenderTargetCreate(240,400,GPU_RB_RGBA8,-1);
    s.bottom=C3D_RenderTargetCreate(240,320,GPU_RB_RGBA8,-1);
    if(!s.top||!s.bottom)throw std::runtime_error("Screen render target allocation failed");
    C3D_RenderTargetSetOutput(s.top,GFX_TOP,GFX_LEFT,transfer_flags);
    C3D_RenderTargetSetOutput(s.bottom,GFX_BOTTOM,GFX_LEFT,transfer_flags);
}
Gpu::~Gpu()=default;
void Gpu::trace_boot(bool enabled){state_->boot_trace=enabled;}
void Gpu::begin_frame(){
    auto& s=*state_;s.metrics={};s.previous_texture=nullptr;s.texture_seen=false;
    s.trace("frame.begin.wait");
    const auto start=Clock::now();
    if(!C3D_FrameBegin(0))throw std::runtime_error("GPU begin frame failed");
    s.trace("frame.begin.ready");
    s.metrics.wait_ns=elapsed(start);
    s.open=true;s.current=nullptr;
}
void Gpu::end_frame(){
    auto& s=*state_;
    C3D_FrameEnd(0);s.open=false;s.current=nullptr;
    if(s.lifetime->has_pending()){s.wait_boundary();s.lifetime->drain();}
}
void Gpu::quad(kairo::Image& target,kairo::Image* source,const platform::GpuQuad& quad){
    auto& s=*state_;
    auto destination=s.image(target,true);
    std::shared_ptr<NativeImage> texture;
    if(source==&target){
        // Preserve the CPU renderer's snapshot semantics for feedback draws.
        const auto& pixels=target.pixels();
        texture=s.create(target.GetWidth(),target.GetHeight(),false);
        s.upload(*texture->allocation,pixels,target.GetWidth(),target.GetHeight(),false);
    }else if(source)texture=s.image(*source,false);
    s.opaque_target=target.format==kairo::Image::Format::RGB24||target.format==kairo::Image::Format::RGB565;
    s.select(destination->allocation->target,destination->allocation->texture.width,destination->allocation->texture.height,false);
    s.draw(texture?texture->allocation:nullptr,quad,destination->allocation->texture.width,destination->allocation->texture.height,false);
    destination->rendered=true;
}
void Gpu::clear(kairo::Image& image,std::uint32_t color){
    state_->trace("clear.begin");
    auto destination=state_->image(image,true);
    C3D_FrameSplit(0);
    C3D_RenderTargetClear(destination->allocation->target,C3D_CLEAR_ALL,color,0);
    destination->rendered=true;
    state_->trace("clear.queued");
}
void Gpu::begin_mesh(kairo::Image& image){
    auto destination=state_->image(image,true);
    C3D_FrameSplit(0);
    C3D_RenderTargetClear(destination->allocation->target,C3D_CLEAR_DEPTH,0,0);
}
void Gpu::glyph(kairo::Image& target,const std::vector<std::uint8_t>& bytes,int width,int height,const platform::GpuQuad& quad){
    auto& s=*state_;
    std::uint64_t hash=14695981039346656037ull;
    for(auto byte:bytes){hash^=byte;hash*=1099511628211ull;}
    hash^=std::uint64_t(width)<<32|std::uint32_t(height);
    auto found=s.glyph_cache.find(hash);
    if(found==s.glyph_cache.end()){
        const auto size=assets::ctr_texture::extent(width)*assets::ctr_texture::extent(height)*4;
        if(size>glyph_budget)throw std::runtime_error("GPU glyph exceeds cache budget");
        if(s.glyph_bytes+size>glyph_budget||s.glyph_cache.size()>=4096){s.glyph_cache.clear();s.glyph_bytes=0;}
        auto texture=s.create(width,height,false);
        s.upload(*texture->allocation,bytes,width,height,false);
        found=s.glyph_cache.emplace(hash,std::move(texture)).first;s.glyph_bytes+=size;
    }
    auto destination=s.image(target,true);
    s.opaque_target=target.format==kairo::Image::Format::RGB24||target.format==kairo::Image::Format::RGB565;
    s.select(destination->allocation->target,destination->allocation->texture.width,destination->allocation->texture.height,false);
    s.draw(found->second->allocation,quad,destination->allocation->texture.width,destination->allocation->texture.height,false,false);
    destination->rendered=true;++s.metrics.glyphs;
}
void Gpu::readback(kairo::Image& image,std::vector<std::uint8_t>& output){
    auto& s=*state_;auto texture=native(image);
    s.trace("readback.begin");
    if(!texture||!texture->allocation->target)throw std::runtime_error("GPU readback requires a render target");
    const auto start=Clock::now();const bool reopen=s.open;
    s.wait_boundary();
    const auto& tex=texture->allocation->texture;
    void* bytes=linearAlloc(tex.size);if(!bytes)throw std::bad_alloc();
    try{
        const auto wait=Clock::now();
        s.trace("readback.copy.begin");
        C3D_SyncTextureCopy(static_cast<u32*>(tex.data),0,static_cast<u32*>(bytes),0,tex.size,8);
        s.trace("readback.copy.end");
        s.metrics.wait_ns+=elapsed(wait);
        GSPGPU_InvalidateDataCache(bytes,tex.size);
        const auto* input=static_cast<const std::uint8_t*>(bytes);
        const int width=image.GetWidth(),height=image.GetHeight();
        output.resize(std::size_t(width)*height*4);
        for(int y=0;y<height;++y)for(int x=0;x<width;++x){
            const auto from=assets::ctr_texture::offset(x,y,tex.width)-24;
            const auto to=(std::size_t(y)*width+x)*4;
            for(int c=0;c<4;++c)output[to+c]=input[from+3-c];
        }
    }catch(...){linearFree(bytes);throw;}
    linearFree(bytes);texture->rendered=false;
    if(reopen){
        const auto wait=Clock::now();
        if(!C3D_FrameBegin(0))throw std::runtime_error("GPU readback resume failed");
        s.metrics.wait_ns+=elapsed(wait);s.open=true;
    }
    s.metrics.readback_ns+=elapsed(start);
    s.trace("readback.end");
}
void Gpu::present(kairo::Image& top,kairo::Image& bottom){
    auto& s=*state_;
    for(auto screen:{platform::Screen::top,platform::Screen::bottom}){
        auto& image=screen==platform::Screen::top?top:bottom;
        const auto extent=platform::screen_extent(screen);
        auto* target=screen==platform::Screen::top?s.top:s.bottom;
        auto texture=s.image(image,false);
        s.opaque_target=true;
        C3D_RenderTargetClear(target,C3D_CLEAR_COLOR,0x000000ff,0);
        s.select(target,extent.width,extent.height,true);
        platform::GpuQuad q;q.clip={0,0,float(extent.width),float(extent.height)};
        const float w=float(extent.width),h=float(extent.height);
        q.vertices={platform::GpuVertex{0,0,0,0},{w,0,w,0},{w,h,w,h},{0,h,0,h}};
        s.draw(texture->allocation,q,extent.width,extent.height,true);
    }
}
VideoProfile Gpu::profile()const{
    auto& s=*state_;auto result=s.metrics;
    result.glyph_cache_bytes=s.glyph_bytes;result.glyph_cache_entries=s.glyph_cache.size();
    result.vram_bytes=(400+320)*240*4;
    {
        std::lock_guard<std::mutex> lock(s.lifetime->mutex);
        for(auto* p=s.lifetime->head;p;p=p->next)if(p->allocated){
            if(p->target)result.vram_bytes+=p->texture.size+C3D_CalcDepthBufSize(p->texture.width,p->texture.height,GPU_RB_DEPTH24);
            else result.texture_bytes+=p->texture.size;
        }
    }
    s.peak_vram=std::max(s.peak_vram,result.vram_bytes);s.peak_texture=std::max(s.peak_texture,result.texture_bytes);
    result.peak_vram_bytes=s.peak_vram;result.peak_texture_bytes=s.peak_texture;
    return result;
}
std::uint64_t Gpu::wait_time()const{return state_->metrics.wait_ns;}
}
