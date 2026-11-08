#include "dialog_service.hpp"
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
 std::cout<<"{\"assertions\":"<<assertions<<",\"types_tested\":5,\"automatic_positive_choice\":false,\"sdl_backend_compiled\":true,\"interactive_SDL_dialog_exercised\":false,\"game_boot\":false}\n";
}
