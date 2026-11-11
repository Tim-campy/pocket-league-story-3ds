#include "sound.hpp"
#include "application.hpp"
#include "../../src/kairo/platform/sdl/audio.hpp"
#include <SDL.h>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <sstream>
using namespace pls::kairo;using Str=pls::cs::String;
struct TestApp:IApplication {void OnUpdate()override{}void OnDraw()override{}pls::cs::Ref<FormManagerBase> GetFormManager()override{return {};}};
struct FakeOutput:SoundOutput {
 struct Port {pls::cs::Ref<SoundData> data{};float volume=1;bool playing{},loop{};int rewinds{};};
 std::array<Port,4> ports;
 Port& at(std::int32_t p){if(p<0||p>=4)throw pls::cs::IndexOutOfRangeException();return ports[static_cast<std::size_t>(p)];}
 void SetClip(std::int32_t p,pls::cs::Ref<SoundData> c)override{auto& port=at(p);port.data=std::move(c);if(!port.data)port.playing=false;}
 bool IsPlaying(std::int32_t p)override{return at(p).playing;}
 void Play(std::int32_t p)override{auto& port=at(p);port.playing=bool(port.data);}
 void Rewind(std::int32_t p)override{++at(p).rewinds;}
 void Stop(std::int32_t p)override{at(p).playing=false;}
 void SetVolume(std::int32_t p,float v)override{at(p).volume=std::clamp(v,0.0f,1.0f);}
 void SetLoop(std::int32_t p,bool v)override{at(p).loop=v;}
 void Pump()override{}
 void trace_edges(const pls::cs::EdgeVisitor& v)const override{for(const auto& p:ports)pls::cs::trace_value(p.data,v);}
 void release_edges()override{for(auto& p:ports)pls::cs::clear_ref(p.data);}
};
template<class F>void P(const char* name,F&& f){std::cout<<name<<'=';try{std::cout<<f();}catch(const pls::cs::Exception& e){std::cout<<'!'<<e.type_name();}std::cout<<'\n';}
const char* T(bool v){return v?"1":"0";}
std::string Bits(float f){std::ostringstream s;s<<std::hex<<std::setfill('0')<<std::setw(8)<<pls::cs::bit_copy<std::uint32_t>(f);return s.str();}
int streaming(const std::filesystem::path& root){
 auto app=pls::cs::make_ref<TestApp>();app->source_Init(app);pls::assets::Catalog catalog(root);pls::sdl::AudioMixer mixer(44100,256,1024);configure_sound(&catalog,&mixer);
 auto player=SoundPlayer::GetInstance();unsigned int checks=0,files=0;auto require=[&](bool value){if(!value)throw std::runtime_error("Native Sound streaming assertion failed");++checks;};
 const pls::assets::Entry* shortest=nullptr;double seconds=std::numeric_limits<double>::max();
 for(const auto* entry:catalog.entries(pls::assets::Kind::audio)){
  auto sound=SoundOGG::Load(Str::from_utf8(entry->key+".ogg"));require(sound->GetData()!=nullptr&&sound->GetState()==3);sound->Dispose();require(sound->GetState()==0);
  pls::sdl::VorbisStream decoder(catalog.path(*entry));const double duration=static_cast<double>(decoder.total_frames())/decoder.sample_rate();if(duration<seconds){seconds=duration;shortest=entry;}++files;
 }
 require(shortest&&seconds>0&&seconds<20.0);
 const auto load=[&]{return SoundOGG::Load(Str::from_utf8(shortest->key+".ogg"));};
 const auto run_until=[&](auto&& done,double budget){const auto deadline=std::chrono::steady_clock::now()+std::chrono::milliseconds(static_cast<std::int64_t>(budget*1000));while(!done()&&std::chrono::steady_clock::now()<deadline){player->host_pump();SDL_Delay(1);}require(done());};
 auto sound=load();sound->SetLoop(1);player->Play(sound);require(sound->GetState()==2);const auto port=player->host_port(pls::cs::raw(sound));require(port>=0);
 const auto before=mixer.stats(port);sound->SetLoop(1);const auto after=mixer.stats(port);require(after.decoded_frames==before.decoded_frames&&after.completed_loops==before.completed_loops);
 // SetLoop(1) disables source.loop even though Play treats any nonzero value
 // as looping. A retrigger of an already-playing sound preserves that flag.
 player->Play(sound);run_until([&]{return sound->GetState()==3;},seconds+3.0);sound->Stop();
 sound->SetLoop(-1);player->Play(sound);const auto loop_port=player->host_port(pls::cs::raw(sound));run_until([&]{return mixer.stats(loop_port).completed_loops>1;},seconds*3.0+3.0);
 mixer.pause(loop_port,true);const auto position=mixer.stats(loop_port).played_frames;
 pls::sdl::VorbisStream duration(catalog.path(*shortest));
 const auto period=static_cast<std::uint64_t>(duration.total_frames())*static_cast<std::uint64_t>(mixer.output_rate());
 const auto input_rate=static_cast<std::uint64_t>(duration.sample_rate());
 const auto next_boundary=((position*input_rate/period+1)*period+input_rate-1)/input_rate;
 sound->SetLoop(1);mixer.pause(loop_port,false);run_until([&]{return sound->GetState()==3;},seconds+3.0);
 require(mixer.stats(loop_port).played_frames==next_boundary);sound->Stop();require(sound->GetState()==3);
 std::vector<pls::cs::Ref<SoundOGG>> voices;
 for(int i=0;i<4;++i){auto s=load();s->SetLoop(-1);player->Play(s);voices.push_back(s);require(s->GetState()==2);}
 auto fifth=load();fifth->SetLoop(-1);player->Play(fifth);require(fifth->GetState()==3&&player->GetPort(2)==-1);
 player->SetMute(1,true);player->SetVolume(1,127);player->ReflectVolumeAndMute();
 const auto deadline=std::chrono::steady_clock::now()+std::chrono::milliseconds(100);
 while(std::chrono::steady_clock::now()<deadline){player->host_pump();SDL_Delay(1);}
 const auto output=mixer.diagnostics();require(output.callbacks>0&&output.peak_active_voices==4);
 const auto memory=mixer.memory();require(memory.ring_bytes==4*1024*2*sizeof(float));
 player->StopAll();for(const auto& s:voices)require(s->GetState()==3);require(player->host_playing_count()==0);
 for(auto& s:voices)s->Dispose();sound->Dispose();fifth->Dispose();player->Dispose();
 std::cout<<"{\"streaming_assertions\":"<<checks<<",\"catalog_audio_bindings\":"<<files<<",\"max_simultaneous_voices\":"<<output.peak_active_voices<<",\"ring_bytes\":"<<memory.ring_bytes<<",\"scratch_bytes\":"<<memory.scratch_bytes<<",\"shortest_duration_seconds\":"<<seconds<<",\"game_boot\":false,\"full_track_pcm\":false}\n";return 0;
}
int main(int argc,char** argv){
 if(argc==3&&std::string(argv[2])=="streaming")return streaming(std::filesystem::u8path(argv[1]));
 if(argc!=2)return 2;
 auto app=pls::cs::make_ref<TestApp>();app->source_Init(app);
 auto output=pls::cs::make_ref<FakeOutput>();pls::assets::Catalog catalog(std::filesystem::u8path(argv[1]));configure_sound(&catalog,output);
 auto p=SoundPlayer::GetInstance();std::vector<pls::cs::Ref<SoundOGG>> sounds;
 auto load=[&](const char* id){auto s=SoundOGG::Load(Str::from_utf8(std::string("fixture/")+id+".ogg"));s->SetName(Str::from_utf8(id));sounds.push_back(s);return s;};
 auto S=[&]{std::string result;for(auto& s:sounds)result+=s->GetName().utf8()+":"+std::to_string(s->GetState())+":"+std::to_string(s->GetLoop())+":"+std::to_string(s->GetSoundType())+",";
  result+="/"+std::to_string(p->host_playing_count())+"/";
  for(int i=0;i<p->GetPortMax();++i){std::string name="-";for(const auto& s:sounds)if(p->host_port(pls::cs::raw(s))==i){name=s->GetName().utf8();break;}const auto& t=output->ports[static_cast<std::size_t>(i)];result+=name+":"+T(t.playing)+":"+T(t.loop)+":"+Bits(t.volume)+":"+std::to_string(t.rewinds)+",";}return result;};
 auto a=load("a"),b=load("b"),c=load("c"),d=load("d"),e=load("e");
 P("defaults",[&]{return S();});
 P("play-one",[&]{p->Play(a);return S();});
 P("change-global-oneshot",[&]{p->SetVolume(1,33);p->SetMute(1,true);return S();});
 P("restart-muted-oneshot",[&]{p->Play(a);return S();});
 P("stop-one",[&]{a->Stop();return S();});
 P("muted-new-oneshot",[&]{p->Play(a);return S();});
 P("unmute-and-play",[&]{p->SetMute(1,false);p->Play(a);return S();});
 P("loop-one-on-play",[&]{b->SetLoop(1);p->Play(b);return S();});
 P("setloop-one-while-playing",[&]{b->SetLoop(1);return S();});
 P("restart-retains-loop-flag",[&]{p->Play(b);return S();});
 P("setloop-infinity",[&]{b->SetLoop(-1);return S();});
 P("global-loop-volume",[&]{p->SetVolume(1,255);return S();});
 P("global-loop-mute",[&]{p->SetMute(1,true);return S();});
 P("reflect-muted",[&]{p->ReflectVolumeAndMute();return S();});
 P("suspend-resume-no-pause",[&]{p->Suspend();p->Suspend();p->Resume();p->Resume();return S();});
 P("bgm-muted-gets-port",[&]{c->SetSoundType(0);p->SetMute(0,true);p->Play(c);return S();});
 P("fourth-port",[&]{d->SetSoundType(0);p->Play(d);return S();});
 P("full-no-preemption",[&]{e->SetLoop(-1);p->Play(e);return S()+":"+std::to_string(p->GetPort(2));});
 P("ended-port-reused",[&]{output->ports[0].playing=false;p->SetMute(1,false);p->Play(e);return S();});
 P("stopall-loop-only",[&]{p->StopAll();return S();});
 P("gain-upper-clamp",[&]{c->SetVolume(std::numeric_limits<std::int32_t>::max(),false);return S();});
 P("gain-lower-clamp",[&]{c->SetVolume(-1,false);return S();});
 P("invalid-volume-type",[&]{p->SetVolume(2,1);return "unexpected";});
 P("invalid-mute-type",[&]{p->SetMute(-1,true);return "unexpected";});
 P("null-sound",[&]{p->Play(nullptr);return "unexpected";});
 P("missing-data",[&]{auto s=load("missing");p->Play(s);return S();});
 P("null-file",[]{SoundOGG::Load(Str{});return "unexpected";});
 P("binary-load-unsupported",[]{SoundOGG::Load(pls::cs::Array<std::uint8_t>::from({1}));return "unexpected";});
 P("dispose",[&]{a->Dispose();return S();});
 P("dispose-repeat",[&]{a->Dispose();return S();});
 P("silent-other-audio",[&]{return std::string(T(p->IsSilentMode()))+":"+T(p->IsOtherAudioPlay())+":"+std::to_string(p->GetPortMax());});
 P("stale-list-after-loop-zero",[&]{p->Play(b);b->SetLoop(0);b->Stop();return S();});
}
