#include "input.hpp"
#include <SDL.h>
#include <iostream>
#include <sstream>
using namespace pls::kairo;
template<class F>void P(const char* name,F&& f){std::cout<<name<<'=';try{std::cout<<f();}catch(const pls::cs::Exception& e){std::cout<<'!'<<e.type_name();}std::cout<<'\n';}
const char* T(bool x){return x?"True":"False";}
std::string State(CanvasKeyState& k){return std::to_string(k.GetKeyState())+":"+std::to_string(k.GetKeypadState());}
int main(int argc,char**){
 CanvasKeyState keys;
 if(argc==2){
  unsigned int count=0;auto require=[&](bool value){if(!value)throw std::runtime_error("PC input adapter assertion failed");++count;};
  PcInputAdapter adapter(keys);std::vector<pls::cs::Ref<MotionEvent>> events;
  adapter.on_touch=[&](auto value){events.push_back(value);};
  using Input=pls::platform::Input;using Kind=Input::Kind;
  adapter.feed(Input{Kind::pointer_down,17,25});adapter.decide_frame();
  require(events.size()==1&&events.back()->GetAction()==0&&events.back()->GetX()==17&&events.back()->GetY()==25&&events.back()->IsMousePointer());
  adapter.decide_frame();require(events.size()==1);
  adapter.feed(Input{Kind::pointer_move,18,29});adapter.decide_frame();require(events.back()->GetAction()==2&&events.back()->GetDeltaX()==0);
  adapter.feed(Input{Kind::pointer_up,18,29});adapter.decide_frame();require(events.back()->GetAction()==1);
  adapter.feed(Input{Kind::key_down,0,0,SDLK_UP});adapter.decide_frame();require(keys.CheckKeyState(CanvasKeyState::KEY_UP));require(keys.CheckKeyPulse(CanvasKeyState::KEY_UP));
  adapter.decide_frame();require(!keys.CheckKeyPulse(CanvasKeyState::KEY_UP));
  adapter.feed(Input{Kind::key_up,0,0,SDLK_UP});adapter.decide_frame();require(!keys.CheckKeyState(CanvasKeyState::KEY_UP));
  adapter.feed(Input{Kind::key_down,0,0,SDLK_RETURN});adapter.feed(Input{Kind::key_down,0,0,SDLK_z});adapter.decide_frame();require(keys.CheckKeyState(CanvasKeyState::KEY_SELECT));
  adapter.feed(Input{Kind::key_up,0,0,SDLK_RETURN});adapter.decide_frame();require(keys.CheckKeyState(CanvasKeyState::KEY_SELECT));
  adapter.feed(Input{Kind::key_up,0,0,SDLK_z});adapter.decide_frame();require(!keys.CheckKeyState(CanvasKeyState::KEY_SELECT));
  adapter.feed(Input{Kind::key_down,0,0,SDLK_a});adapter.decide_frame();require(keys.CheckKeyState(CanvasKeyState::KEY_SOFT1));
  adapter.decide_frame();require(!keys.CheckKeyState(CanvasKeyState::KEY_SOFT1));
  const auto touchCount=events.size();
  int rightDown=0,rightUp=0;
  adapter.on_key_down=[&](auto code,auto event){require(code==260&&event->GetAction()==0);++rightDown;keys.PhysicalDown(code);};
  adapter.on_key_up=[&](auto code,auto event){require(code==260&&event->GetAction()==0);++rightUp;keys.PhysicalUp(code);};
  adapter.feed(Input{Kind::pointer_down,20,30,3});adapter.decide_frame();require(rightDown==1&&keys.CheckKeyState(16));require(events.size()==touchCount);
  adapter.feed(Input{Kind::pointer_up,20,30,3});adapter.decide_frame();require(rightUp==1&&!keys.CheckKeyState(16));require(events.size()==touchCount);
  std::cout<<"{\"adapter_assertions\":"<<count<<",\"game_boot\":false}\n";return 0;
 }
 P("initial",[&]{return State(keys)+":"+std::to_string(keys.GetKeyRepeatInterval())+":"+std::to_string(keys.GetKeyDoubleInterval());});
 P("down-pulse",[&]{keys.KeyDown(131072,true);keys.DecideKeyState();const auto s=State(keys);const bool a=keys.CheckKeyPulse(131072),b=keys.CheckKeyPulse(131072),c=keys.CheckKeyRepeat(131072);return s+":"+T(a)+":"+T(b)+":"+T(c);});
 P("hold-repeat-history",[&]{std::string s;for(int i=0;i<12;++i){keys.DecideKeyState();s+=keys.CheckKeyRepeat(131072)?'1':'0';}return s;});
 P("other-key-blocks-repeat",[&]{keys.KeyDown(65536,true);keys.DecideKeyState();return T(keys.CheckKeyRepeat(131072));});
 P("release",[&]{keys.KeyUp(131072);keys.KeyUp(65536);keys.DecideKeyState();return State(keys);});
 P("clear",[&]{keys.ClearKeyBuffer();return State(keys);});
 P("double-first",[&]{keys.KeyDown(1,true);keys.DecideKeyState();return T(keys.CheckKeyDouble(1));});
 P("double-second",[&]{keys.KeyUp(1);keys.DecideKeyState();keys.KeyDown(1,true);keys.DecideKeyState();return T(keys.CheckKeyDouble(1));});
 P("click-latched",[&]{keys.ClearKeyBuffer();keys.KeyClick(2);keys.DecideKeyState();return State(keys)+":"+T(keys.CheckKeyPulse(2));});
 P("click-release-frame",[&]{keys.DecideKeyState();return State(keys);});
 P("down-then-up-latched",[&]{keys.KeyDown(4,true);keys.KeyUp(4);keys.DecideKeyState();return State(keys)+":"+T(keys.CheckKeyPulse(4));});
 P("pulse-invalid",[&]{keys.ClearKeyBuffer();keys.KeyDown(8,false);keys.DecideKeyState();return State(keys)+":"+T(keys.CheckKeyPulse(8));});
 P("soft-one-frame",[&]{keys.ClearKeyBuffer();keys.KeyDown(2097152,true);keys.DecideKeyState();return State(keys);});
 P("soft-next-frame",[&]{keys.DecideKeyState();return State(keys);});
 P("ignored-minus-one",[&]{keys.KeyDown(-1,true);keys.KeyClick(-1);keys.KeyUp(-1);keys.DecideKeyState();return State(keys);});
 P("configured-intervals",[&]{keys.SetKeyRepeatInterval(3);keys.SetKeyDoubleInterval(2);return std::to_string(keys.GetKeyRepeatInterval())+":"+std::to_string(keys.GetKeyDoubleInterval());});
 P("history-wrap",[&]{keys.ClearKeyBuffer();keys.KeyDown(16,true);for(int i=0;i<100;++i)keys.DecideKeyState();return std::string(T(keys.CheckKeyRepeat(16)))+":"+T(keys.CheckKeyDouble(16));});
 P("oversized-repeat",[&]{return T(keys.CheckKeyRepeat(16,100));});
 P("negative-repeat",[&]{return T(keys.CheckKeyRepeat(16,-1));});
 P("key-id-default",[&]{return std::to_string(keys.GetKeyID(304,false))+":"+std::to_string(keys.GetKeyID(303,false))+":"+std::to_string(keys.GetKeyID(306,false))+":"+std::to_string(keys.GetKeyID(273,false))+":"+std::to_string(keys.GetKeyID(271,false));});
 P("key-id-debug",[&]{return std::to_string(keys.GetKeyID(304,true))+":"+std::to_string(keys.GetKeyID(303,true))+":"+std::to_string(keys.GetKeyID(306,true));});
 auto positions=pls::cs::Array<float>::from({1.5f,2.5f,7.5f,8.5f});auto ids=pls::cs::Array<std::int32_t>::from({4,9});auto deltas=pls::cs::Array<float>::from({1,2,0.25f,3,4,0.5f});
 MotionEvent motion(517,ids,positions,deltas,false);
 P("motion-fields",[&]{std::ostringstream s;s<<motion.GetAction()<<':'<<motion.GetPointerCount()<<':'<<motion.GetPointerId(1)<<':'<<motion.GetX(1)<<':'<<motion.GetY(1)<<':'<<T(motion.IsMousePointer());return s.str();});
 P("motion-alias",[&]{positions.at(0)=11.5f;ids.at(0)=12;deltas.at(2)=0.75f;std::ostringstream s;s<<motion.GetX()<<':'<<motion.GetPointerId(0)<<':'<<motion.GetDeltaTime();return s.str();});
 P("motion-deltas",[&]{std::ostringstream s;s<<motion.GetDeltaX(1)<<':'<<motion.GetDeltaY(1)<<':'<<motion.GetDeltaTime(1);return s.str();});
 P("motion-bounds",[&]{return std::to_string(motion.GetX(2));});
 P("motion-index-wrap",[&]{std::ostringstream s;s<<motion.GetX(std::numeric_limits<std::int32_t>::min());return s.str();});
 P("motion-null-delta",[&]{MotionEvent value(0,ids,positions,{},true);std::ostringstream s;s<<value.GetDeltaX(std::numeric_limits<std::int32_t>::min())<<':'<<value.GetDeltaY(100)<<':'<<value.GetDeltaTime()<<':'<<T(value.IsMousePointer());return s.str();});
 P("key-event",[]{KeyEvent key(1,27);return std::to_string(key.GetAction())+":"+std::to_string(key.GetKeyCode())+":"+std::to_string(key.GetRepeatCount());});
}
