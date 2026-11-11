#include "graphics.hpp"
#include "mesh.hpp"
#include "canvas.hpp"
#include "application.hpp"
#include "diagnostic_output.hpp"
#include <iostream>
namespace pls::kairo {
namespace {std::vector<cs::Ref<Offscreen>> surfaces{};bool rendering=false;std::uint64_t next_order=0;std::string render_error;
cs::GcRootProvider offscreen_roots([](const cs::EdgeVisitor&visitor){for(const auto&surface:surfaces)cs::trace_value(surface,visitor);});
std::int32_t extent(std::int32_t value){if(value>16384)throw cs::NotSupportedException("Offscreen extent exceeds the admitted CPU allocation domain");std::int32_t n=32;while(n<value)n*=2;return n;}
}
struct Offscreen::State {
    RenderMethod dynamic,statics;GetLayoutMethod layout;
    cs::Ref<Image> image{};cs::Ref<Graphics> dynamic_graphics{},static_graphics{};
    bool disposed=false,cleaned=false,static_rendered=false,clear=true,empty=true;
    std::int32_t order=0;std::uint64_t insertion=0;
};
Offscreen::Offscreen():state_(std::make_unique<State>()){}
Offscreen::~Offscreen()=default;
cs::Ref<Image> Offscreen::get_Image()const{return state_->image;}
cs::Ref<Offscreen> Offscreen::CreateOffscreen(RenderMethod dynamic,RenderMethod statics,GetLayoutMethod layout,std::int32_t order){
    auto app=cs::nonnull(IApplication::GetCurrentApp());
    auto create=cs::Delegate<cs::Ref<cs::Object>()>::from_native("CPU.Offscreen.Create",[dynamic,statics,layout,order]()->cs::Ref<cs::Object>{
        auto result=cs::make_ref<Offscreen>();auto&s=*result->state_;s.dynamic=dynamic;s.statics=statics;s.layout=layout;s.order=order;s.insertion=next_order++;
        s.image=Image::CreateImage(1,1,Image::Format::ARGB32);surfaces.push_back(result);
        std::int32_t width=0,height=0;auto format=Image::Format::Default;auto filter=Image::Filter::Default;s.layout(width,height,format,filter);
        result->resize(width,height,format,filter,true);
        s.static_graphics=cs::make_ref<Graphics>(s.image);s.static_graphics->GetMeshManager()->capture(true);
        return result;
    },dynamic,statics,layout);
    return pls::cs::dynamic_pointer_cast<Offscreen>(app->RunOnUiThread(create,true));
}
void Offscreen::resize(std::int32_t width,std::int32_t height,Image::Format format,Image::Filter filter,bool force){
    auto&s=*state_;if(!s.image||s.disposed)return;
    if(format==Image::Format::Default)format=Image::Format::ARGB32;if(filter==Image::Filter::Default)filter=Image::DEFAULT_FILTER;
    width=extent(width);height=extent(height);
    if(!force&&width==s.image->GetWidth()&&height==s.image->GetHeight()&&format==s.image->format){s.image->filter=filter;return;}
    s.image->Dispose();s.image=Image::CreateImage(width,height,format,filter);s.image->SetAlphaType(format==Image::Format::RGB24||format==Image::Format::RGB565?0:1);
    s.dynamic_graphics=cs::make_ref<Graphics>(s.image);s.dynamic_graphics->offscreen_=pls::cs::dynamic_pointer_cast<Offscreen>(shared_from_this());s.dynamic_graphics->GetMeshManager()->capture(true);s.clear=true;s.empty=true;
}
void Offscreen::render_frame(){
    auto&s=*state_;if(!s.image||s.disposed)return;
    // Source LateUpdate precedes camera OnPostRender.
    if(s.layout){std::int32_t width=0,height=0;auto format=Image::Format::Default;auto filter=Image::Filter::Default;s.layout(width,height,format,filter);resize(width,height,format,filter,false);}
    rendering=true;
    cs::run_finally([&]{
        try{
            if(s.clear){
                // Clear is replacement, never source-alpha blending.
                auto&bytes=s.image->rgba_;std::fill(bytes.begin(),bytes.end(),0);if(s.image->format==Image::Format::RGB24||s.image->format==Image::Format::RGB565)for(std::size_t i=3;i<bytes.size();i+=4)bytes[i]=255;s.clear=false;
            }
            auto canvas=Canvas::GetInstance();auto self=pls::cs::dynamic_pointer_cast<Offscreen>(shared_from_this());
            if(!s.static_rendered){
                if(s.statics){auto graphics=canvas->BeginPaint(s.static_graphics);if(graphics)cs::run_finally([&]{(void)s.statics(graphics,self);},[&]{canvas->EndPaint(graphics);s.empty=false;});}
                s.static_rendered=true;s.empty=true;
            }
            auto manager=s.dynamic_graphics->GetMeshManager();auto previous_commands=manager->take_commands();
            cs::GcRootProvider previous_roots([&](const cs::EdgeVisitor&visitor){for(const auto&batch:previous_commands)cs::trace_value(batch.image,visitor);});
            auto graphics=canvas->BeginPaint(s.dynamic_graphics);
            if(!graphics)return;
            auto previous_tasks=begin_image_tasks(s.image);bool commit=false;
            cs::run_finally([&]{commit=!s.dynamic||s.dynamic(graphics,self);},[&]{canvas->EndPaint(graphics);s.empty=false;});
            if(commit){MeshManager::Render(s.image,manager->commands(),s.static_graphics->GetMeshManager()->commands());finish_image_tasks(s.image,previous_tasks,self,true);}
            else{finish_image_tasks(s.image,previous_tasks,self,false);manager->put_commands(std::move(previous_commands));for(const auto&batch:manager->commands())if(batch.image){batch.image->Use();batch.image->source_drawn();}}
        }catch(const cs::Exception&e){render_error=e.what();std::lock_guard<std::mutex>lock(debug_log_mutex);std::cerr<<"PLS_OFFSCREEN_EXCEPTION="<<e.what()<<'\n';}
    },[]{rendering=false;});
}
void Offscreen::RenderAll(){
    render_error.clear();
    auto pending=surfaces;std::stable_sort(pending.begin(),pending.end(),[](const auto&a,const auto&b){return a->state_->order<b->state_->order;});
    cs::GcRootProvider pending_roots([&](const cs::EdgeVisitor&visitor){for(const auto&surface:pending)cs::trace_value(surface,visitor);});
    for(const auto&surface:pending)surface->render_frame();
}
void Offscreen::Dispose(){state_->disposed=true;}
void Offscreen::cleanup(){auto&s=*state_;if(s.cleaned)return;s.cleaned=true;if(s.image)s.image->Dispose();cs::release_value(s.dynamic);cs::release_value(s.statics);cs::release_value(s.layout);cs::release_value(s.image);cs::release_value(s.dynamic_graphics);cs::release_value(s.static_graphics);}
void Offscreen::EndFrame(){for(const auto&surface:surfaces)if(surface->state_->disposed)surface->cleanup();surfaces.erase(std::remove_if(surfaces.begin(),surfaces.end(),[](const auto&surface){return surface->state_->disposed;}),surfaces.end());}
void Offscreen::DisposeAll(){for(const auto&surface:surfaces)surface->Dispose();EndFrame();}
bool Offscreen::IsRendering(){return rendering;}
std::string Offscreen::LastRenderError(){return render_error;}
void Offscreen::trace_edges(const cs::EdgeVisitor&visit)const{const auto&s=*state_;cs::trace_value(s.dynamic,visit);cs::trace_value(s.statics,visit);cs::trace_value(s.layout,visit);cs::trace_value(s.image,visit);cs::trace_value(s.dynamic_graphics,visit);cs::trace_value(s.static_graphics,visit);}
void Offscreen::release_edges(){auto&s=*state_;cs::release_value(s.dynamic);cs::release_value(s.statics);cs::release_value(s.layout);cs::release_value(s.image);cs::release_value(s.dynamic_graphics);cs::release_value(s.static_graphics);}
}
