#include "input.hpp"
#include <SDL.h>
#include <iostream>
#include <string>
using namespace pls;
int config_policy(){unsigned checks=0;auto check=[&](bool value){if(!value)throw std::runtime_error("Input configuration policy failed");++checks;};
 kairo::CanvasKeyState keys;kairo::PcInputAdapter adapter(keys);bool failed=false;
 try{adapter.initialize_config(false,{});}catch(const cs::ArgumentException&){failed=true;}check(failed);
 int reads=0;adapter.initialize_config(false,[&]{++reads;return false;});check(reads==0);adapter.decide_frame();check(reads==1);
 failed=false;try{adapter.initialize_config(true,[]{return true;});}catch(const cs::InvalidOperationException&){failed=true;}check(failed);
 kairo::CanvasKeyState late_keys;kairo::PcInputAdapter late(late_keys);late.decide_frame();failed=false;try{late.initialize_config(false,[]{return false;});}catch(const cs::InvalidOperationException&){failed=true;}check(failed);
 kairo::CanvasKeyState ordered_keys;kairo::PcInputAdapter ordered(ordered_keys);bool debug=false;int touch=0,ordered_reads=0;ordered.initialize_config(false,[&]{++ordered_reads;return debug;});ordered.on_key_down=[&](int code,auto){ordered_keys.PhysicalDown(code);debug=true;};ordered.on_touch=[&](auto){++touch;};ordered.feed({platform::Input::Kind::key_down,0,0,SDLK_LSHIFT});ordered.feed({platform::Input::Kind::pointer_down,1,2,1});ordered.decide_frame();check(touch==0&&ordered_reads==1);
 kairo::CanvasKeyState captured_keys;kairo::PcInputAdapter captured(captured_keys);captured.initialize_config(true,[]{return false;});captured.feed({platform::Input::Kind::key_down,0,0,SDLK_LCTRL});captured.decide_frame();check(captured_keys.CheckKeyState(16));
 kairo::CanvasKeyState normal_keys;kairo::PcInputAdapter normal(normal_keys);normal.initialize_config(false,[]{return true;});normal.feed({platform::Input::Kind::key_down,0,0,SDLK_LCTRL});normal.decide_frame();check(!normal_keys.CheckKeyState(16));
 std::cout<<"{\"status\":\"PASS\",\"assertions\":"<<checks<<",\"source_config_global_modified\":false}\n";return 0;
}
int main(int argc,char**argv){
 if(argc>1&&std::string(argv[1])=="policy")return config_policy();
 const bool initial_debug=argc>1;bool debug=initial_debug;
 kairo::CanvasKeyState keys;kairo::PcInputAdapter adapter(keys);adapter.initialize_config(initial_debug,[&]{return debug;});std::string trace;
 adapter.on_touch=[&](auto value){trace+="T"+std::to_string(value->GetAction())+":"+std::to_string(int(value->GetX()))+":"+std::to_string(int(value->GetY()))+";";};
 adapter.on_key_down=[&](int code,auto event){trace+="D"+std::to_string(code)+":"+std::to_string(event->GetAction())+";";keys.PhysicalDown(code);};
 adapter.on_key_up=[&](int code,auto event){trace+="U"+std::to_string(code)+":"+std::to_string(event->GetAction())+";";keys.PhysicalUp(code);};
 auto frame=[&](const char* name){adapter.decide_frame();std::cout<<name<<'='<<trace<<'/'<<keys.GetKeyState()<<'\n';trace.clear();};
 auto mouse=[&](int button,bool value,int x,int y){adapter.feed(platform::Input{value?platform::Input::Kind::pointer_down:platform::Input::Kind::pointer_up,x,y,button?3:1});};
 auto key=[&](int code,bool value){adapter.feed(platform::Input{value?platform::Input::Kind::key_down:platform::Input::Kind::key_up,0,0,code});};
 if(initial_debug){
  key(SDLK_LCTRL,true);frame("initial-debug-left-control-down");key(SDLK_RCTRL,true);frame("initial-debug-control-alias-held");key(SDLK_LCTRL,false);frame("initial-debug-one-control-released");key(SDLK_RCTRL,false);frame("initial-debug-all-control-released");
  key(SDLK_LSHIFT,true);mouse(0,true,40,50);frame("initial-debug-shift-suppresses-touch");key(SDLK_RSHIFT,true);frame("initial-debug-shift-alias-held");key(SDLK_LSHIFT,false);frame("initial-debug-one-shift-released");
  debug=false;frame("initial-debug-matrix-retained-live-debug-false");debug=true;frame("initial-debug-restored-suppression");mouse(0,false,40,50);frame("initial-debug-release-mouse-suppressed");key(SDLK_RSHIFT,false);frame("initial-debug-release-shift-delivers-up");
  debug=false;key(SDLK_LCTRL,true);frame("initial-debug-control-still-in-matrix");key(SDLK_LCTRL,false);frame("initial-debug-control-final-release");
  debug=true;key(SDLK_RSHIFT,true);mouse(1,true,70,80);frame("initial-debug-right-mouse-down-suppressed");key(SDLK_RSHIFT,false);frame("initial-debug-right-mouse-down-delayed");key(SDLK_RSHIFT,true);mouse(1,false,70,80);frame("initial-debug-right-mouse-up-suppressed");key(SDLK_RSHIFT,false);frame("initial-debug-right-mouse-up-delayed");return 0;
 }
 mouse(0,true,10,20);mouse(0,false,10,20);frame("quick-left-released");mouse(0,true,10,20);frame("hold-left");
 mouse(0,false,12,22);mouse(0,true,12,22);frame("release-repress-left");mouse(0,false,13,23);mouse(0,true,13,23);mouse(0,false,13,23);frame("quick-click-while-held");
 frame("idle");mouse(1,true,13,23);mouse(1,false,13,23);frame("quick-right-released");mouse(1,true,13,23);frame("hold-right");
 mouse(1,false,13,23);mouse(1,true,13,23);frame("release-repress-right");mouse(1,false,13,23);frame("release-right");
 key(SDLK_UP,true);key(SDLK_UP,false);frame("quick-arrow-released");key(SDLK_UP,true);frame("hold-arrow");key(SDLK_UP,false);key(SDLK_UP,true);frame("release-repress-arrow");key(SDLK_UP,false);frame("release-arrow");
 debug=true;key(SDLK_LSHIFT,true);mouse(0,true,30,40);frame("debug-shift-suppresses-mouse");key(SDLK_LSHIFT,false);frame("release-shift-starts-touch");mouse(0,false,30,40);frame("release-after-shift");
}
