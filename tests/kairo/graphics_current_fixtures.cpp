#include "canvas.hpp"
#include "font.hpp"
#include <iostream>
#include <atomic>
#include <thread>
#include <map>
using namespace pls;
namespace {
std::map<kairo::Graphics*,int> ids;
int identify(cs::Ref<kairo::Graphics> g){if(!g)return 0;const auto found=ids.find(g.get());if(found!=ids.end())return found->second;const auto id=int(ids.size())+1;ids.emplace(g.get(),id);return id;}
const char* B(bool value){return value?"True":"False";}
void P(const char* name,cs::Ref<kairo::Canvas> canvas){auto current=kairo::Graphics::GetCurrent();std::cout<<name<<'='<<identify(current)<<':'<<identify(canvas->GetGraphicsInstance())<<':'<<B(canvas->source_IsAlterStaticRendering())<<':'<<B(current&&current->IsGUI())<<'\n';}
cs::Ref<kairo::Image> image(){return kairo::Image::FromRgba(2,2,std::vector<std::uint8_t>(16));}
void G(const std::string& name,cs::Ref<kairo::Graphics> g){std::cout<<name<<'='<<B(g->IsRenderGUIMode())<<':'<<B(g->IsClipEnable())<<'\n';}
void Batch(cs::Ref<kairo::Graphics> g,cs::Ref<kairo::Canvas> c,const std::string& prefix){g->ResetRender();G(prefix+"-reset",g);g->BeginGLRender(false);G(prefix+"-begin",g);g->BeginGLRender(true);G(prefix+"-nested",g);g->EndGLRender();G(prefix+"-end-inner",g);g->EndGLRender();G(prefix+"-end-outer",g);g->EndGLRender();G(prefix+"-extra-end",g);g->BeginGLRender(false);g->BeginGLRender(true);g->EndGLRender(true);G(prefix+"-force",g);g->PopClipEnable();G(prefix+"-pop-after-force",g);g->BeginGLRender(false);g->ResetRender();G(prefix+"-reset-active",g);g->EndGLRender();G(prefix+"-end-after-reset",g);g->BeginGLRender(false);c->EndPaint(g);G(prefix+"-end-paint",g);g->BeginGLRender(false);c->EndAlterStaticRender(g);G(prefix+"-end-alter",g);}
int policy(){
 cs::GcMutatorScope mutator;int checks=0;auto require=[&](bool v){if(!v)throw cs::InvalidOperationException("Graphics current lifetime/GC policy failed");++checks;};require(!kairo::Graphics::GetCurrent());
 auto canvas=cs::make_ref<kairo::Canvas>();auto first_image=image(),second_image=image();auto a=first_image->GetGraphics(),b=second_image->GetGraphics();require(!kairo::Graphics::GetCurrent());
 std::weak_ptr<kairo::Graphics> weak=a;std::weak_ptr<kairo::Image> weak_image=first_image;canvas->BeginPaint(a);canvas->EndPaint(a);a.reset();first_image.reset();cs::gc_collect();require(!weak.expired()&&!weak_image.expired());
 auto snapshot=kairo::Graphics::GetCurrent();canvas->BeginPaint(b);canvas->EndPaint(b);cs::gc_collect();require(!weak.expired()&&snapshot==weak.lock());snapshot.reset();cs::gc_collect();require(weak.expired()&&weak_image.expired());
 std::atomic<bool> ready{false},warm{false},resume{false},done{false};std::atomic<int> reads{0};std::exception_ptr error;
 std::thread worker([&]{try{cs::GcMutatorScope registered;ready=true;for(int i=0;i<2000;++i){auto value=kairo::Graphics::GetCurrent();if(!value||value->IsGUI())throw cs::InvalidOperationException("Shared current snapshot invalid");++reads;cs::gc_safepoint();if(i==99){warm=true;while(!resume.load()){cs::gc_safepoint();std::this_thread::yield();}}}done=true;}catch(...){error=std::current_exception();ready=true;warm=true;done=true;}});
 while(!ready.load()||!warm.load()){cs::gc_safepoint();std::this_thread::yield();}cs::gc_collect();int collections=1;resume=true;while(!done.load()){canvas->BeginPaint(b);canvas->EndPaint(b);cs::gc_collect();++collections;}
 {cs::GcNativeBlockingScope blocked;worker.join();}if(error)std::rethrow_exception(error);require(reads==2000);require(collections>0);require(kairo::Graphics::GetCurrent()==b);require(!canvas->GetGraphicsInstance());
 std::cout<<"{\"assertions\":"<<checks<<",\"worker_snapshots\":"<<reads.load()<<",\"collections\":"<<collections<<",\"sticky_after_end\":true,\"snapshot_survives_overwrite\":true,\"old_target_collected_after_overwrite\":true,\"game_boot\":false}\n";return 0;
}
}
int main(int argc,char**){
 if(argc==2)return policy();auto c=cs::make_ref<kairo::Canvas>();c->host_display(image(),cs::make_ref<kairo::Font>());P("initial",c);
 auto offscreen=image()->GetGraphics();auto created=cs::make_ref<kairo::Graphics>(image(),true);P("new-does-not-publish",c);
 auto first=c->BeginPaint();P("begin-default",c);std::cout<<"nested-default="<<B(first==c->BeginPaint())<<'\n';std::cout<<"explicit-null-active="<<B(!c->BeginPaint({}))<<'\n';P("after-null",c);
 first->SetOrigin(9,7);first->Scale(300);first->SetColor(17);c->BeginPaint();std::cout<<"reset-default="<<first->GetOriginX()<<':'<<first->GetOriginY()<<':'<<first->GetScale()<<':'<<first->GetColor()<<':'<<first->GetFont()->GetSize()<<'\n';
 c->BeginPaint(offscreen);P("begin-image-inner",c);c->EndPaint(offscreen);P("end-image-inner",c);c->EndPaint();P("end-outer-sticky-inner",c);
 std::cout<<"buffer-reused="<<B(first==c->BeginPaint())<<'\n';P("begin-outer-again",c);
 try{cs::run_finally([&]{c->BeginPaint(created);throw cs::InvalidOperationException();},[&]{c->EndPaint(created);});}catch(const cs::InvalidOperationException&){}P("exception-finally-sticky-inner",c);c->EndPaint();P("outer-end-no-restore",c);
 try{c->EndPaint();std::cout<<"null-end=no-error\n";}catch(const cs::Exception& e){std::cout<<"null-end="<<e.type_name()<<'\n';}P("after-null-end",c);
 c->BeginAlterStaticRender(offscreen);P("begin-alter",c);c->EndAlterStaticRender(offscreen);P("end-alter-flag-retained",c);c->EndPaint(offscreen);P("normal-end-clears-alter-flag",c);
 c->BeginAlterStaticRender({});P("alter-default",c);c->EndPaint();P("alter-default-ended",c);auto other=cs::make_ref<kairo::Graphics>(image(),true);(void)other;offscreen->Dispose();P("new-dispose-no-current-write",c);
 Batch(cs::make_ref<kairo::Graphics>(image(),true),c,"display");Batch(image()->GetGraphics(),c,"image");
}
