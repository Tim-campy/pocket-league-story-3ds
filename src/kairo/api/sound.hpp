#pragma once
#include "semantic_runtime.hpp"
#include "asset_catalog.hpp"
#include <filesystem>
#include <array>
namespace pls::sdl {class AudioMixer;}
namespace pls::kairo {
class SoundBase;
class SoundData : public cs::Object {
    friend class SoundOGG;
    std::filesystem::path path_;
public:
    explicit SoundData(std::filesystem::path path):path_(std::move(path)){}
    const std::filesystem::path& path()const{return path_;}
};
// AudioSource platform leaf. The test oracle supplies an independent synthetic
// implementation; the host uses the bounded SDL Vorbis mixer adapter below.
class SoundOutput : public cs::Object {
public:
    virtual void SetClip(std::int32_t,cs::Ref<SoundData>)=0;
    virtual bool IsPlaying(std::int32_t)=0;
    virtual void Play(std::int32_t)=0;
    virtual void Rewind(std::int32_t)=0;
    virtual void Stop(std::int32_t)=0;
    virtual void SetVolume(std::int32_t,float)=0;
    virtual void SetLoop(std::int32_t,bool)=0;
    virtual void Pump()=0;
};
void configure_sound(const assets::Catalog*,cs::Ref<SoundOutput>);
void configure_sound(const assets::Catalog*,sdl::AudioMixer*);
class SoundPlayer : public cs::Object {
    friend class SoundBase;friend class SoundOGG;
    struct Port {cs::Ref<SoundBase> sound{};};
    inline static cs::Ref<SoundPlayer> instance_{};
    cs::Array<std::int32_t> volumes_=cs::Array<std::int32_t>::from({127,127});
    cs::Array<std::int32_t> master_=cs::Array<std::int32_t>::from({1,1});
    cs::Array<bool> muted_=cs::Array<bool>::make(2);
    std::vector<Port> ports_=std::vector<Port>(4);
    std::vector<cs::Ref<SoundBase>> playing_{};
    cs::Ref<SoundOutput> output_{};
    bool suspended_{};
    std::int32_t PortOf(const SoundBase*);
public:
    static constexpr std::int32_t MAX_VOLUME=255,MAX_PRIO=255,TYPE_BGM=0,TYPE_SE=1,TYPE_MAX=2,LOOP_NONE=0,LOOP_INFINITY=-1,LOOP_MAX=255;
    explicit SoundPlayer(cs::Ref<SoundOutput>);
    static cs::Ref<SoundPlayer> GetInstance();
    static void trace_static_roots(const cs::EdgeVisitor&visitor){cs::trace_value(instance_,visitor);}
    static void Init(bool);
    void Dispose();
    void SetVolume(std::int32_t type,std::int32_t volume);void SetMute(std::int32_t type,bool mute);bool IsMute(std::int32_t type){return muted_.at(type);}
    void ReflectVolumeAndMute();void Play(cs::Ref<SoundBase>);void Stop(cs::Ref<SoundBase>);void StopAll();
    void Resume(){if(!suspended_)return;suspended_=false;}void Suspend(){if(suspended_)return;suspended_=true;}
    bool IsSilentMode(){return false;}bool IsOtherAudioPlay(){UpdateOtherAudioPlay();return false;}
    void UpdateOtherAudioPlay(){} // Original body is empty.
    void OnReceive(cs::Ref<cs::Object>,cs::Ref<cs::Object>){} // Original body is empty.
    std::int32_t GetPort(std::int32_t priority);
    void RemovePort(std::int32_t);void RemovePort(cs::Ref<SoundBase>);void SetPort(std::int32_t,cs::Ref<SoundBase>);
    void AddPlayingList(cs::Ref<SoundBase>);void RemovePlayingList(cs::Ref<SoundBase>);
    void SetPortMax(std::int32_t);std::int32_t GetPortMax(){return static_cast<std::int32_t>(ports_.size());}
    void host_pump(){output_->Pump();}
    // Diagnostics expose identities/counts, never pretend to be game methods.
    std::size_t host_playing_count()const{return playing_.size();}
    std::int32_t host_port(const SoundBase* sound){return PortOf(sound);}
    void trace_edges(const cs::EdgeVisitor&)const override;void release_edges()override;
};
class SoundBase : public cs::Object {
    friend class SoundPlayer;
    inline static std::vector<cs::Ref<SoundBase>> sound_list_{};
protected:
    cs::String name_{u""};
    cs::Ref<SoundData> data_{};
    std::int32_t type_,loop_,priority_{1};
    SoundBase(cs::Ref<SoundData>,std::int32_t,std::int32_t);
    static void register_sound(cs::Ref<SoundBase>);
    std::int32_t state();
public:
    static constexpr std::int32_t NO_DATA=0,READY=1,PLAYING=2,PAUSED=3,MIN_PRIORITY=0,NORM_PRIORITY=1,MAX_PRIORITY=2;
    static void trace_static_roots(const cs::EdgeVisitor&visitor){for(const auto&sound:sound_list_)cs::trace_value(sound,visitor);}
    void SetName(cs::String name){name_=name;}cs::String GetName(){return name_;}
    virtual void Play(std::int32_t,bool)=0;virtual void SetVolume(std::int32_t,bool)=0;virtual void Stop()=0;virtual std::int32_t GetState()=0;
    virtual void Dispose();
    std::int32_t GetSoundType(){return type_;}void SetSoundType(std::int32_t type){type_=type;}
    std::int32_t GetLoop(){return loop_;}void SetLoop(std::int32_t);
    cs::Ref<cs::Object> GetData(){return data_;}
    cs::String ToString()override{auto value=std::u16string(u"[");if(!name_.is_null())value+=name_.code_units();value+=u"] ";value+=cs::String::from_utf8(managed_type_name()).code_units();return cs::String(std::move(value));}
    void trace_edges(const cs::EdgeVisitor&)const override;void release_edges()override;
};
class SoundOGG : public SoundBase {
public:
    // Factory is public only for make_ref; game construction remains Load.
    explicit SoundOGG(cs::Ref<SoundData> data):SoundBase(std::move(data),1,0){}
    std::string managed_type_name()const override{return "kairo.unity.ui.SoundOGG";}
    static cs::Ref<SoundOGG> Load(cs::String);
    static cs::Ref<SoundOGG> Load(cs::Array<std::uint8_t>);
    void Play(std::int32_t,bool)override;void SetVolume(std::int32_t,bool)override;void Stop()override;void Dispose()override;
    std::int32_t GetState()override{return state();}
};
inline cs::GcRootProvider sound_roots([](const cs::EdgeVisitor&visitor){SoundPlayer::trace_static_roots(visitor);SoundBase::trace_static_roots(visitor);});
}
