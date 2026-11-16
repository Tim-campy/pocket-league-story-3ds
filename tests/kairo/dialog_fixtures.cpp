#include "dialog_service.hpp"
#include "port_dialog.hpp"
#include "application.hpp"
#include "../../src/kairo/platform/sdl/dialog.hpp"
#include <iostream>
using namespace pls::kairo;
struct App:IApplication {void OnUpdate()override{}void OnDraw()override{}pls::cs::Ref<FormManagerBase> GetFormManager()override{return {};}};
struct Presenter:DialogPresenter {int answer=1,calls{};DialogRequest last;std::int32_t Present(const DialogRequest& request)override{last=request;++calls;return answer;}};
int main(){
 unsigned int assertions=0;auto check=[&](bool value){if(!value)throw std::runtime_error("Dialog request fixture failed");++assertions;};
 auto app=pls::cs::make_ref<App>();app->source_Init(app);auto presenter=pls::cs::make_ref<Presenter>();
 auto labels=pls::cs::Delegate<pls::cs::Array<pls::cs::String>(std::int32_t)>::from_static("synthetic-labels",[](auto type){return type<=2?pls::cs::Array<pls::cs::String>::from({pls::cs::String(u"A")}):type==3?pls::cs::Array<pls::cs::String>::from({pls::cs::String(u"A"),pls::cs::String(u"B")}):pls::cs::Array<pls::cs::String>::from({pls::cs::String(u"A"),pls::cs::String(u"B"),pls::cs::String(u"C")});});
 install_dialog_service(presenter,labels);
 for(int type=0;type<=4;++type){presenter->answer=type<=2?1:4;check(show_dialog(type,pls::cs::String(u"Title"),pls::cs::String(u"Message"))==presenter->answer);check(presenter->last.type==type);check(presenter->last.title==pls::cs::String(u"Title"));check(presenter->last.buttons.size()==static_cast<std::size_t>(type<=2?1:type==3?2:3));}
 presenter->answer=8;check(show_dialog(3,{},{})==8);presenter->answer=2;check(show_dialog(4,{},{})==2);presenter->answer=-1;check(show_dialog(3,{},{})==-1);
 bool rejected=false;try{show_dialog(0,{},{},pls::cs::String(u"custom"));}catch(const pls::cs::NotSupportedException&){rejected=true;}check(rejected);
 rejected=false;try{show_dialog(5,{},{});}catch(const pls::cs::NotSupportedException&){rejected=true;}check(rejected);
 presenter->answer=77;rejected=false;try{show_dialog(0,{},{});}catch(const pls::cs::InvalidOperationException&){rejected=true;}check(rejected);
 auto native=pls::sdl::make_dialog_presenter(nullptr,{});install_dialog_service(native,labels);rejected=false;try{show_dialog(0,{},{});}catch(const pls::cs::InvalidOperationException&){rejected=true;}check(rejected);
 install_dialog_service({},{});rejected=false;try{show_dialog(0,{},{});}catch(const pls::cs::InvalidOperationException&){rejected=true;}check(rejected);
 // Port dialog (decision 2026-11-16): original button order and results, keys and touch.
 {
  using C=PortDialog::Command;
  DialogRequest yesno{3,{},{},{{4,pls::cs::String(u"Yes")},{8,pls::cs::String(u"No")}}};
  PortDialog a(yesno);check(a.Selected()==0&&!a.Done());a.Handle(C::confirm);check(a.Result()==4);
  PortDialog b(yesno);b.Handle(C::right);b.Handle(C::confirm);check(b.Result()==8);
  PortDialog c(yesno);c.Handle(C::left);check(c.Selected()==1);c.Handle(C::right);check(c.Selected()==0);c.Handle(C::cancel);check(c.Done()&&c.Result()==-1);
  DialogRequest three{4,{},{},{{4,pls::cs::String(u"Yes")},{8,pls::cs::String(u"No")},{2,pls::cs::String(u"Cancel")}}};
  PortDialog d(three);d.Handle(C::right);d.Handle(C::right);d.Handle(C::confirm);check(d.Result()==2);
  PortDialog e(three);const auto box=e.ButtonBox(1,240,280);e.PointerDown(box.x+2,box.y+2);check(!e.Done()&&e.Selected()==1);e.PointerUp(box.x+3,box.y+3);check(e.Result()==8);
  PortDialog f(three);const auto first=f.ButtonBox(0,240,280),second=f.ButtonBox(1,240,280);f.PointerDown(first.x+2,first.y+2);f.PointerUp(second.x+2,second.y+2);check(!f.Done());
  DialogRequest ok{0,{},{},{{1,pls::cs::String(u"OK")}}};PortDialog g(ok);g.Handle(C::right);g.Handle(C::confirm);check(g.Result()==1);
  bool rejected_empty=false;try{PortDialog empty(DialogRequest{0,{},{},{}});}catch(const pls::cs::ArgumentException&){rejected_empty=true;}check(rejected_empty);
 }
 std::cout<<"{\"assertions\":"<<assertions<<",\"types_tested\":5,\"automatic_positive_choice\":false,\"sdl_backend_compiled\":true,\"interactive_SDL_dialog_exercised\":false,\"game_boot\":false}\n";
}
