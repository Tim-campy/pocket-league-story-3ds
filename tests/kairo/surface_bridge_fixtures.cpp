#include "forms_callbacks.hpp"
#include "graphics.hpp"
#include <iostream>
using namespace pls;
namespace {
std::string trace;cs::Ref<kairo::MotionEvent> expected_touch;cs::Ref<kairo::KeyEvent> expected_key;cs::Ref<kairo::Graphics> expected_graphics;
const char* B(bool value){return value?"True":"False";}
void log(std::string value){trace+=value+";";}void print(const char* name){std::cout<<name<<'='<<trace<<'\n';trace.clear();}
struct Item:cs::Object {
 int id;bool game;Item(int id,bool game):id(id),game(game){}
 bool IsGameSurface(){log("G"+std::to_string(id));return game;}
 void ClearTouchComponent(){log("C"+std::to_string(id));}
 void OnReceiveTouchEvent(cs::Ref<kairo::MotionEvent> value){log("T"+std::to_string(id)+":"+B(value==expected_touch));}
 void OnKeyDown(int value){log("D"+std::to_string(id)+":"+std::to_string(value));}
 void OnKeyUp(int value){log("U"+std::to_string(id)+":"+std::to_string(value));}
 void OnKeyDown(int value,cs::Ref<kairo::KeyEvent> event){log("R"+std::to_string(id)+":"+std::to_string(value)+":"+B(event==expected_key));}
 void BeginTouchRegist(cs::Ref<kairo::Graphics> value){log("B"+std::to_string(id)+":"+B(value==expected_graphics));}
 void EndTouchRegist(cs::Ref<kairo::Graphics> value){log("E"+std::to_string(id)+":"+B(value==expected_graphics));}
};
struct Source:cs::Object {
 std::vector<cs::Ref<Item>> list;cs::Ref<kairo::Canvas> cycle;
 virtual void AdjustSurfaceLayout()=0;virtual void Draw(cs::Ref<kairo::Graphics>)=0;virtual void DrawComponents(cs::Ref<kairo::Graphics>)=0;virtual void DoEvents()=0;
 void trace_edges(const cs::EdgeVisitor& visitor)const override{for(const auto& item:list)cs::trace_value(item,visitor);cs::trace_value(cycle,visitor);}
 void release_edges()override{list.clear();cycle.reset();}
};
struct TaggedSource:Source {
 int tag;explicit TaggedSource(int tag):tag(tag){}
 void AdjustSurfaceLayout()override{log("L"+std::to_string(tag));}
 void Draw(cs::Ref<kairo::Graphics> g)override{log("W"+std::to_string(tag)+":"+B(g==expected_graphics));}
 void DrawComponents(cs::Ref<kairo::Graphics> g)override{log("P"+std::to_string(tag)+":"+B(g==expected_graphics));}
 void DoEvents()override{log("V"+std::to_string(tag));}
};
cs::Ref<kairo::FormSurface> install(cs::Ref<kairo::Canvas> canvas,cs::Ref<Source> source){
 if(!source){canvas->host_source_surface({},{});return {};}
 kairo::SurfaceCallbacks b;auto target=source.get();
 b.raw_key_down=cs::Delegate<void(std::int32_t,cs::Ref<kairo::KeyEvent>)>::bind(source,"raw",[target](int key,auto event){for(auto i=target->list.rbegin();i!=target->list.rend();++i)(*i)->OnKeyDown(key,event);});
 b.key_down=cs::Delegate<void(std::int32_t)>::bind(source,"down",[target](int key){for(auto i=target->list.rbegin();i!=target->list.rend();++i)(*i)->OnKeyDown(key);});
 b.key_up=cs::Delegate<void(std::int32_t)>::bind(source,"up",[target](int key){for(auto i=target->list.rbegin();i!=target->list.rend();++i)(*i)->OnKeyUp(key);});
 b.touch=cs::Delegate<void(cs::Ref<kairo::MotionEvent>)>::bind(source,"touch",[target](auto event){for(auto i=target->list.rbegin();i!=target->list.rend();++i)(*i)->OnReceiveTouchEvent(event);});
 b.clear_touch=cs::Delegate<void()>::bind(source,"clear",[target]{for(auto i=target->list.rbegin();i!=target->list.rend();++i)(*i)->ClearTouchComponent();});
 // The source FormManager.Init/Finish paths filter in FORWARD order.
 b.clear_game_touch=cs::Delegate<void()>::bind(source,"clear-games",[target]{for(const auto& item:target->list)if(item->IsGameSurface())item->ClearTouchComponent();});
 b.do_events=cs::Delegate<void()>::bind(source,"events",[target]{target->DoEvents();});b.adjust_layout=cs::Delegate<void()>::bind(source,"layout",[target]{target->AdjustSurfaceLayout();});
 b.begin_touch=cs::Delegate<void(cs::Ref<kairo::Graphics>)>::bind(source,"begin",[target](auto g){for(auto i=target->list.rbegin();i!=target->list.rend();++i)(*i)->BeginTouchRegist(g);});
 b.draw=cs::Delegate<void(cs::Ref<kairo::Graphics>)>::bind(source,"draw",[target](auto g){target->Draw(g);});
 b.end_touch=cs::Delegate<void(cs::Ref<kairo::Graphics>)>::bind(source,"end",[target](auto g){for(auto i=target->list.rbegin();i!=target->list.rend();++i)(*i)->EndTouchRegist(g);});
 b.draw_components=cs::Delegate<void(cs::Ref<kairo::Graphics>)>::bind(source,"components",[target](auto g){target->DrawComponents(g);});
 auto adapter=cs::make_ref<kairo::CallbackFormSurface>(std::move(b));canvas->host_source_surface(source,adapter);return adapter;
}
int policy(){
 cs::GcMutatorScope mutator;int checks=0;auto require=[&](bool v){if(!v)throw cs::InvalidOperationException("Surface bridge GC/identity contract failed");++checks;};
 auto canvas=cs::make_ref<kairo::Canvas>();auto source=cs::make_ref<TaggedSource>(7);auto adapter=install(canvas,source);
 require(canvas->GetSourceSurfaceManager()==source);require(canvas->GetSurfaceManager()==adapter);require(std::dynamic_pointer_cast<kairo::FormSurface>(canvas->GetSurfaceManager())==adapter);
 require(!std::dynamic_pointer_cast<Source>(canvas->GetSurfaceManager()));require(std::dynamic_pointer_cast<TaggedSource>(canvas->GetSourceSurfaceManager())->tag==7);
 source->cycle=canvas;std::weak_ptr<Source> weak_source=source;std::weak_ptr<kairo::FormSurface> weak_adapter=adapter;
 source.reset();adapter.reset();cs::gc_collect();require(!weak_source.expired()&&!weak_adapter.expired());
 auto retained=std::dynamic_pointer_cast<TaggedSource>(canvas->GetSourceSurfaceManager());require(retained&&retained->tag==7);
 install(canvas,{});cs::gc_collect();require(!weak_source.expired());require(weak_adapter.expired());retained.reset();cs::gc_collect();require(weak_source.expired());
 require(!canvas->GetSourceSurfaceManager()&&!canvas->GetSurfaceManager());
 std::weak_ptr<kairo::Canvas> weak_canvas;
 {auto cycle_canvas=cs::make_ref<kairo::Canvas>();auto cycle_source=cs::make_ref<TaggedSource>(11);cycle_source->cycle=cycle_canvas;auto cycle_adapter=install(cycle_canvas,cycle_source);weak_canvas=cycle_canvas;weak_source=cycle_source;weak_adapter=cycle_adapter;}
 cs::gc_collect();require(weak_canvas.expired()&&weak_source.expired()&&weak_adapter.expired());
 std::cout<<"{\"assertions\":"<<checks<<",\"source_and_adapter_identity_separate\":true,\"retained_snapshot_survives_clear\":true,\"unrooted_cycle_collected\":true,\"game_boot\":false}\n";return 0;
}
}
int main(int argc,char**){
 if(argc==2)return policy();
 auto canvas=cs::make_ref<kairo::Canvas>();auto source=cs::make_ref<TaggedSource>(7);auto adapter=install(canvas,source);
 std::cout<<"source-identity="<<B(source==canvas->GetSourceSurfaceManager())<<":"<<B(std::dynamic_pointer_cast<TaggedSource>(canvas->GetSourceSurfaceManager())->tag==7)<<'\n';
 expected_touch=cs::make_ref<kairo::MotionEvent>(0,cs::Array<std::int32_t>::from({0}),cs::Array<float>::from({0,0}),cs::Array<float>{});canvas->OnTouchEvent(expected_touch);print("empty-at-install");
 source->list.push_back(cs::make_ref<Item>(1,true));source->list.push_back(cs::make_ref<Item>(2,false));source->list.push_back(cs::make_ref<Item>(3,true));
 canvas->OnTouchEvent(expected_touch);print("touch-late-list");adapter->ClearTouch();print("clear-all-reverse");adapter->ClearGameTouch();print("clear-games-forward-filter");
 source->list.erase(source->list.begin()+1);expected_key=cs::make_ref<kairo::KeyEvent>(0,27);adapter->RawKeyDown(27,expected_key);print("raw-key-after-mutation");adapter->KeyDown(17);adapter->KeyUp(17);print("logical-keys");
 expected_graphics=kairo::Image::FromRgba(1,1,std::vector<std::uint8_t>(4))->GetGraphics();adapter->DoEvents();adapter->AdjustSurfaceLayout();adapter->BeginTouchRegist(expected_graphics);adapter->Draw(expected_graphics);adapter->EndTouchRegist(expected_graphics);adapter->DrawComponents(expected_graphics);print("source-virtual-and-graphics");
 auto replacement=cs::make_ref<TaggedSource>(9);replacement->list.push_back(cs::make_ref<Item>(4,true));install(canvas,replacement);canvas->OnTouchEvent(expected_touch);print("replace-list");
 std::cout<<"replace-identity="<<B(replacement==canvas->GetSourceSurfaceManager())<<":"<<B(source!=canvas->GetSourceSurfaceManager())<<'\n';install(canvas,{});
 std::cout<<"clear-source="<<B(!canvas->GetSourceSurfaceManager())<<'\n';canvas->OnTouchEvent(expected_touch);print("clear-no-touch");
}
