#include "graphics.hpp"
#include "application.hpp"
#include "canvas.hpp"
#include "font.hpp"
#include <iostream>
using namespace pls;
namespace {
class App:public kairo::IApplication {void OnUpdate()override{}void OnDraw()override{}public:cs::Ref<kairo::FormManagerBase>GetFormManager()override{return {};}};
struct Tasks:cs::Object{int marker{};};
int assertions=0;
void check(bool value){++assertions;if(!value)throw std::runtime_error("Own offscreen lifecycle invariant failed");}
}
int main(){
 cs::GcMutatorScope mutator;
 auto app=cs::make_ref<App>();app->source_Init(app);
 auto canvas=kairo::Canvas::GetInstance();canvas->host_display(kairo::Image::CreateImage(16,16),cs::make_ref<kairo::Font>());
 int starts=0,commits=0,rollbacks=0;
 kairo::GraphicsRuntimeBindings bindings;
 bindings.begin_image_tasks=decltype(bindings.begin_image_tasks)::from_static("own-begin",[&](cs::Ref<kairo::Image>){++starts;return cs::make_ref<Tasks>();});
 bindings.finish_image_tasks=decltype(bindings.finish_image_tasks)::from_static("own-finish",[&](cs::Ref<kairo::Image>,cs::Ref<cs::Object> old,cs::Ref<kairo::Offscreen>,bool commit){check(bool(pls::cs::dynamic_pointer_cast<Tasks>(old)));if(commit)++commits;else ++rollbacks;});
 kairo::install_graphics_runtime(bindings);
 int layouts=0,statics=0,dynamics=0,width=33,height=2;bool commit=true,fail=false;
 auto layout=kairo::Offscreen::GetLayoutMethod::from_static("own-layout",[&](int&w,int&h,kairo::Image::Format&format,kairo::Image::Filter&filter){++layouts;w=width;h=height;format=kairo::Image::Format::ARGB32;filter=kairo::Image::Filter::Point;});
 auto fixed=kairo::Offscreen::RenderMethod::from_static("own-statics",[&](cs::Ref<kairo::Graphics>g,cs::Ref<kairo::Offscreen>o){++statics;check(!g->IsGUI()&&!g->offscreen_&&kairo::Offscreen::IsRendering());check(kairo::Graphics::GetCurrent()==g);check(o->get_Image()->GetWidth()==64);g->SetColor(255,0,0);g->FillRect(0,0,4,4);return true;});
 auto dynamic=kairo::Offscreen::RenderMethod::from_static("own-dynamic",[&](cs::Ref<kairo::Graphics>g,cs::Ref<kairo::Offscreen>o){++dynamics;check(g->offscreen_==o&&kairo::Offscreen::IsRendering());if(fail)throw cs::InvalidOperationException("own expected failure");g->SetColor(0,0,255);g->FillRect(4,0,4,4);return commit;});
 auto off=kairo::Offscreen::CreateOffscreen(dynamic,fixed,layout);
 check(layouts==1&&off->get_Image()->GetWidth()==64&&off->get_Image()->GetHeight()==32);
 check(off->get_Image()->GetAlphaType()==1&&!kairo::Offscreen::IsRendering());
 kairo::Offscreen::RenderAll();check(kairo::Offscreen::LastRenderError().empty());check(layouts==2&&statics==1&&dynamics==1&&starts==1&&commits==1&&rollbacks==0);
 const auto pixels=off->get_Image()->pixels();check(pixels[0]==255&&pixels[2]==0&&pixels[4*4+2]==255);
 commit=false;kairo::Offscreen::RenderAll();check(statics==1&&dynamics==2&&commits==1&&rollbacks==1);check(off->get_Image()->pixels()==pixels);
 commit=true;fail=true;kairo::Offscreen::RenderAll();check(!kairo::Offscreen::LastRenderError().empty()&&!kairo::Offscreen::IsRendering());check(rollbacks==1&&commits==1);
 fail=false;kairo::Offscreen::RenderAll();check(kairo::Offscreen::LastRenderError().empty()&&commits==2);
 off->Dispose();check(!off->get_Image()->get_IsDisposed());kairo::Offscreen::EndFrame();check(!off->get_Image());
 const auto previous=dynamics;kairo::Offscreen::RenderAll();check(dynamics==previous);
 kairo::Offscreen::DisposeAll();kairo::install_graphics_runtime({});
 std::cout<<"{\"status\":\"PASS\",\"assertions\":"<<assertions<<",\"Android_raster\":\"UNKNOWN\",\"game_executed\":false}\n";
}
