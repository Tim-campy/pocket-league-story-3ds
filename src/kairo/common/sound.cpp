#include "sound.hpp"
#include "application.hpp"
#include "../platform/sdl/audio.hpp"
namespace pls::kairo {
namespace {
const assets::Catalog* sound_catalog{};
cs::Ref<SoundOutput> sound_output;
void ui(std::function<void()> action){auto app=IApplication::GetCurrentApp();if(!app)throw cs::NullReferenceException();app->RunOnUiThread(cs::Delegate<void()>::from_static("native-sound-ui",std::move(action)),true);}
template<class F>auto audio_call(F&& body)->decltype(body()){try{return body();}catch(const cs::Exception&){throw;}catch(const std::exception& error){throw cs::IOException(error.what());}}
#if !defined(PLS_NULL_BACKEND)
class StreamingOutput : public SoundOutput {
    sdl::AudioMixer* mixer_;
    struct Port {cs::Ref<SoundData> clip;float volume{1.0f};bool loop{};};
    std::array<Port,4> ports_;
    Port& at(std::int32_t port){if(port<0||port>=4)throw cs::IndexOutOfRangeException();return ports_[static_cast<std::size_t>(port)];}
public:
    explicit StreamingOutput(sdl::AudioMixer* mixer):mixer_(mixer){if(!mixer)throw cs::ArgumentNullException();}
    void SetClip(std::int32_t port,cs::Ref<SoundData> clip)override{auto& value=at(port);audio_call([&]{if(clip)mixer_->load(port,clip->path());else mixer_->unload(port);});value.clip=std::move(clip);}
    bool IsPlaying(std::int32_t port)override{auto& value=at(port);return value.clip&&audio_call([&]{return mixer_->stats(port).state==sdl::VoiceState::playing;});}
    void Play(std::int32_t port)override{auto& value=at(port);if(value.clip)audio_call([&]{mixer_->play(port,value.loop,value.volume,false);});}
    void Rewind(std::int32_t port)override{Play(port);}
    void Stop(std::int32_t port)override{auto& value=at(port);if(value.clip)audio_call([&]{mixer_->stop(port);});}
    void SetVolume(std::int32_t port,float volume)override{auto& value=at(port);value.volume=std::clamp(volume,0.0f,1.0f);if(value.clip)audio_call([&]{mixer_->set_volume(port,value.volume,false);});}
    void SetLoop(std::int32_t port,bool loop)override{auto& value=at(port);value.loop=loop;if(value.clip)audio_call([&]{mixer_->set_loop(port,loop);});}
    void Pump()override{audio_call([&]{mixer_->pump();});}
    void trace_edges(const cs::EdgeVisitor& v)const override{for(const auto& port:ports_)cs::trace_value(port.clip,v);}
    void release_edges()override{for(auto& port:ports_)port.clip.reset();}
};
#endif
}
void configure_sound(const assets::Catalog* catalog,cs::Ref<SoundOutput> output){sound_catalog=catalog;sound_output=std::move(output);}
#if !defined(PLS_NULL_BACKEND)
void configure_sound(const assets::Catalog* catalog,sdl::AudioMixer* mixer){configure_sound(catalog,cs::make_ref<StreamingOutput>(mixer));}
#endif
SoundPlayer::SoundPlayer(cs::Ref<SoundOutput> output):output_(std::move(output)){if(!output_)throw cs::InvalidOperationException("Sound host was not configured");}
cs::Ref<SoundPlayer> SoundPlayer::GetInstance(){if(!instance_)instance_=cs::make_ref<SoundPlayer>(sound_output);return instance_;}
void SoundPlayer::Init(bool){
    if(instance_){for(std::size_t i=0;i<instance_->ports_.size();++i)if(instance_->ports_[i].sound&&instance_->ports_[i].sound->loop_==0&&instance_->output_->IsPlaying(static_cast<std::int32_t>(i)))throw cs::NotSupportedException("Reinitializing while old one-shots play needs additional native generations");instance_->Dispose();}
    GetInstance();
}
void SoundPlayer::Dispose(){if(!instance_)return;StopAll();instance_.reset();}
void SoundPlayer::AddPlayingList(cs::Ref<SoundBase> sound){if(std::find(playing_.begin(),playing_.end(),sound)==playing_.end())playing_.push_back(std::move(sound));}
void SoundPlayer::RemovePlayingList(cs::Ref<SoundBase> sound){const auto i=std::find(playing_.begin(),playing_.end(),sound);if(i!=playing_.end())playing_.erase(i);}
std::int32_t SoundPlayer::PortOf(const SoundBase* sound){for(std::size_t i=0;i<ports_.size();++i)if(ports_[i].sound.get()==sound)return static_cast<std::int32_t>(i);return -1;}
std::int32_t SoundPlayer::GetPort(std::int32_t priority){
    for(std::size_t i=0;i<ports_.size();++i)if(ports_[i].sound&&!output_->IsPlaying(static_cast<std::int32_t>(i)))RemovePort(static_cast<std::int32_t>(i));
    for(std::size_t i=0;i<ports_.size();++i)if(!ports_[i].sound)return static_cast<std::int32_t>(i);
    // The original candidate variable stays -1 even when a matching lower
    // priority is found. Preserve failure to preempt, rather than fixing it.
    for(std::int32_t k=0;k<=priority;k=cs::add_i32(k,1))for(const auto& port:ports_)if(port.sound->priority_==k)return -1;
    return -1;
}
void SoundPlayer::RemovePort(std::int32_t port){if(port<0||static_cast<std::size_t>(port)>=ports_.size())throw cs::IndexOutOfRangeException();output_->SetClip(port,{});ports_[static_cast<std::size_t>(port)].sound.reset();}
void SoundPlayer::RemovePort(cs::Ref<SoundBase> sound){for(std::size_t i=0;i<ports_.size();++i)if(ports_[i].sound==sound)RemovePort(static_cast<std::int32_t>(i));}
void SoundPlayer::SetPort(std::int32_t port,cs::Ref<SoundBase> sound){if(port<0||static_cast<std::size_t>(port)>=ports_.size())throw cs::IndexOutOfRangeException();auto& value=ports_[static_cast<std::size_t>(port)];if(value.sound)RemovePort(port);if(!sound)throw cs::NullReferenceException();output_->SetClip(port,sound->data_);value.sound=std::move(sound);}
void SoundPlayer::SetVolume(std::int32_t type,std::int32_t volume){volumes_.at(type)=volume;for(std::size_t i=0;i<playing_.size();++i){auto sound=playing_[i];if(type==sound->type_)sound->SetVolume(cs::mul_i32(volumes_.at(type),master_.at(type)),muted_.at(type));}}
void SoundPlayer::SetMute(std::int32_t type,bool mute){muted_.at(type)=mute;for(std::size_t i=0;i<playing_.size();++i){auto sound=playing_[i];if(type==sound->type_)sound->SetVolume(cs::mul_i32(volumes_.at(type),master_.at(type)),muted_.at(type));}}
void SoundPlayer::ReflectVolumeAndMute(){SetVolume(0,volumes_.at(0));SetMute(0,muted_.at(0));SetVolume(1,volumes_.at(1));SetMute(1,muted_.at(1));}
void SoundPlayer::Play(cs::Ref<SoundBase> sound){if(!sound)throw cs::NullReferenceException();sound->Play(cs::mul_i32(volumes_.at(sound->type_),master_.at(sound->type_)),muted_.at(sound->type_));}
void SoundPlayer::Stop(cs::Ref<SoundBase> sound){if(!sound)throw cs::NullReferenceException();sound->Stop();}
void SoundPlayer::StopAll(){while(!playing_.empty())playing_.front()->Stop();playing_.clear();}
void SoundPlayer::SetPortMax(std::int32_t maximum){if(maximum<0)throw cs::OverflowException();if(maximum>4)throw cs::NotSupportedException("Native SoundPlayer supports the original four streaming ports");if(static_cast<std::size_t>(maximum)==ports_.size())return;for(std::size_t i=static_cast<std::size_t>(maximum);i<ports_.size();++i)RemovePort(static_cast<std::int32_t>(i));ports_.resize(static_cast<std::size_t>(maximum));}
void SoundPlayer::trace_edges(const cs::EdgeVisitor& v)const{cs::trace_value(volumes_,v);cs::trace_value(master_,v);cs::trace_value(muted_,v);cs::trace_value(output_,v);for(const auto& p:ports_)cs::trace_value(p.sound,v);for(const auto& s:playing_)cs::trace_value(s,v);}
void SoundPlayer::release_edges(){cs::release_value(volumes_);cs::release_value(master_);cs::release_value(muted_);output_.reset();ports_.clear();playing_.clear();}
SoundBase::SoundBase(cs::Ref<SoundData> data,std::int32_t type,std::int32_t loop):data_(std::move(data)),type_(type),loop_(loop){}
void SoundBase::register_sound(cs::Ref<SoundBase> sound){sound_list_.push_back(std::move(sound));}
std::int32_t SoundBase::state(){if(!data_)return 0;auto player=SoundPlayer::GetInstance();const auto port=player->PortOf(this);if(port==-1)return 3;bool playing=false;ui([&]{playing=player->output_->IsPlaying(port);});return playing?2:3;}
void SoundBase::SetLoop(std::int32_t loop){loop_=loop;auto player=SoundPlayer::GetInstance();const auto port=player->PortOf(this);if(port!=-1)player->output_->SetLoop(port,loop==-1);}
void SoundBase::Dispose(){if(data_)ui([&]{data_.reset();});data_.reset();type_=0;const auto self=std::static_pointer_cast<SoundBase>(shared_from_this());const auto found=std::find(sound_list_.begin(),sound_list_.end(),self);if(found!=sound_list_.end())sound_list_.erase(found);}
void SoundBase::trace_edges(const cs::EdgeVisitor& v)const{cs::trace_value(name_,v);cs::trace_value(data_,v);}void SoundBase::release_edges(){cs::release_value(name_);data_.reset();}
cs::Ref<SoundOGG> SoundOGG::Load(cs::String file){
    if(file.is_null())throw cs::NullReferenceException();auto name=file.code_units();const auto dot=name.rfind(u'.');if(dot!=std::u16string::npos)name.resize(dot);
    cs::Ref<SoundOGG> result;ui([&]{if(!sound_catalog)throw cs::InvalidOperationException("Sound asset catalog is not installed");auto id=cs::String(name).utf8();for(char& c:id)if(c>='A'&&c<='Z')c=static_cast<char>(c-'A'+'a');const assets::Entry* entry=nullptr;for(const auto* candidate:sound_catalog->entries(assets::Kind::audio))if(candidate->key==id){entry=candidate;break;}
        cs::Ref<SoundData> data;if(entry){sound_catalog->verify(*entry);data=cs::make_ref<SoundData>(sound_catalog->path(*entry));}result=cs::make_ref<SoundOGG>(std::move(data));register_sound(result);});return result;
}
cs::Ref<SoundOGG> SoundOGG::Load(cs::Array<std::uint8_t>){throw cs::Exception("load:バイナリからのロードは対応していません。");}
void SoundOGG::Play(std::int32_t volume,bool mute){ui([&]{auto player=SoundPlayer::GetInstance();try{auto port=player->PortOf(this);if(port!=-1&&state()==2&&player->output_->IsPlaying(port)){SetVolume(volume,mute);player->output_->Rewind(port);return;}
    Stop();if(type_==1&&mute)return;priority_=loop_!=0?2:type_==0?1:0;port=player->GetPort(priority_);if(port==-1)return;player->RemovePort(port);auto self=std::static_pointer_cast<SoundBase>(shared_from_this());player->SetPort(port,self);SetVolume(volume,mute);player->output_->SetLoop(port,loop_!=0);if(loop_!=0)player->AddPlayingList(self);player->output_->Play(port);
    }catch(const cs::Exception&){Stop();}});}
void SoundOGG::SetVolume(std::int32_t volume,bool mute){auto player=SoundPlayer::GetInstance();if(player->PortOf(this)==-1)return;ui([&]{try{const auto port=player->PortOf(this);if(port==-1)throw cs::NullReferenceException();player->output_->SetVolume(port,mute?0.0f:static_cast<float>(volume)/255.0f);}catch(const cs::Exception&){Stop();}});}
void SoundOGG::Stop(){ui([&]{try{auto player=SoundPlayer::GetInstance();const auto port=player->PortOf(this);if(port!=-1)player->output_->Stop(port);auto self=std::static_pointer_cast<SoundBase>(shared_from_this());player->RemovePort(self);if(loop_!=0)player->RemovePlayingList(self);}catch(const cs::Exception&){};});}
void SoundOGG::Dispose(){Stop();SoundBase::Dispose();}
}
