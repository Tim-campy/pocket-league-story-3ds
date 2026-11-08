#include "audio.hpp"
#include <SDL.h>
#define OV_EXCLUDE_STATIC_CALLBACKS
#include <vorbis/vorbisfile.h>
#include <algorithm>
#include <array>
#include <cmath>
#include <cstring>
#include <fstream>
#include <limits>
#include <stdexcept>
#include <string>
#include <vector>

namespace pls::sdl {
struct VorbisStream::Impl {
    std::ifstream input;
    OggVorbis_File vorbis{};
    bool opened{};
    int rate{},channel_count{};
    std::int64_t frames{};
    static std::size_t read(void* target,std::size_t size,std::size_t count,void* context) {
        if(size==0||count>std::numeric_limits<std::size_t>::max()/size)return 0;
        auto& file=static_cast<Impl*>(context)->input;
        const auto bytes=size*count;
        if(bytes>static_cast<std::size_t>(std::numeric_limits<std::streamsize>::max()))return 0;
        file.read(static_cast<char*>(target),static_cast<std::streamsize>(bytes));
        return static_cast<std::size_t>(file.gcount())/size;
    }
    static int seek(void* context,ogg_int64_t offset,int origin) {
        auto& file=static_cast<Impl*>(context)->input;
        file.clear();std::ios::seekdir direction;
        if(origin==SEEK_SET)direction=std::ios::beg;
        else if(origin==SEEK_CUR)direction=std::ios::cur;
        else if(origin==SEEK_END)direction=std::ios::end;
        else return -1;
        file.seekg(offset,direction);return file?0:-1;
    }
    static int close(void*) {return 0;}
    static long tell(void* context) {
        auto& file=static_cast<Impl*>(context)->input;
        if(file.bad())return -1;
        file.clear();const auto position=file.tellg();
        if(position<0||position>std::numeric_limits<long>::max())return -1;
        return static_cast<long>(position);
    }
    explicit Impl(const std::filesystem::path& path):input(path,std::ios::binary) {
        if(!input)throw std::runtime_error("Cannot read local Ogg Vorbis");
        if(std::filesystem::file_size(path)>static_cast<std::uintmax_t>(std::numeric_limits<long>::max()))throw std::length_error("Ogg exceeds callback offset range");
        const ov_callbacks callbacks{read,seek,close,tell};
        const auto error=ov_open_callbacks(this,&vorbis,nullptr,0,callbacks);
        if(error<0)throw std::runtime_error("Vorbis header rejected: "+std::to_string(error));
        opened=true;
        const auto* info=ov_info(&vorbis,-1);
        if(!info||info->rate<8000||info->rate>192000||info->channels<1||info->channels>8) {
            ov_clear(&vorbis);opened=false;throw std::runtime_error("Unsupported Vorbis format");
        }
        rate=static_cast<int>(info->rate);channel_count=info->channels;frames=ov_pcm_total(&vorbis,-1);
        if(frames<0){ov_clear(&vorbis);opened=false;throw std::runtime_error("Vorbis length unavailable");}
    }
    ~Impl(){if(opened)ov_clear(&vorbis);}
};
VorbisStream::VorbisStream(const std::filesystem::path& path):impl_(std::make_unique<Impl>(path)){}
VorbisStream::~VorbisStream()=default;
int VorbisStream::sample_rate()const{return impl_->rate;}
int VorbisStream::channels()const{return impl_->channel_count;}
std::int64_t VorbisStream::total_frames()const{return impl_->frames;}
std::int64_t VorbisStream::tell_frames()const{return ov_pcm_tell(&impl_->vorbis);}
void VorbisStream::seek_frame(std::int64_t frame) {
    if(frame<0||frame>impl_->frames)throw std::out_of_range("Vorbis seek outside stream");
    if(ov_pcm_seek(&impl_->vorbis,frame)<0)throw std::runtime_error("Vorbis seek failed");
}
std::size_t VorbisStream::read_frames(float* output,std::size_t capacity) {
    if(!output&&capacity)throw std::invalid_argument("Null PCM output");
    if(capacity>static_cast<std::size_t>(std::numeric_limits<int>::max()))throw std::length_error("PCM read too large");
    std::size_t count=0;unsigned int holes=0;
    while(count<capacity) {
        float** planar=nullptr;int link=0;
        const long got=ov_read_float(&impl_->vorbis,&planar,static_cast<int>(capacity-count),&link);
        if(got==0)break;
        if(got==OV_HOLE&&++holes<16)continue;
        if(got<0)throw std::runtime_error("Vorbis decode failed: "+std::to_string(got));
        const auto* info=ov_info(&impl_->vorbis,link);
        if(info->channels!=channels()||info->rate!=sample_rate())throw std::runtime_error("Changing chained Vorbis format is unsupported");
        for(long frame=0;frame<got;++frame)for(int channel=0;channel<channels();++channel)
            output[(count+static_cast<std::size_t>(frame))*static_cast<std::size_t>(channels())+static_cast<std::size_t>(channel)]=planar[channel][frame];
        count+=static_cast<std::size_t>(got);
    }
    return count;
}

namespace {
void sdl_check(int result){if(result<0)throw std::runtime_error(SDL_GetError());}
class DeviceLock {
    SDL_AudioDeviceID device_;
public:
    explicit DeviceLock(SDL_AudioDeviceID device):device_(device){SDL_LockAudioDevice(device_);}
    ~DeviceLock(){SDL_UnlockAudioDevice(device_);}
};
float gain(float volume) {
    if(!std::isfinite(volume))throw std::invalid_argument("Non-finite audio gain");
    return std::clamp(volume,0.0f,1.0f);
}
}
struct AudioMixer::Impl {
    struct Voice {
        VorbisStream decoder;
        SDL_AudioStream* resampler{};
        std::vector<float> ring,input,scratch;
        std::size_t read{},write{},queued{},frames{},block{},peak_resampler{};
        VoiceState state{VoiceState::stopped};
        bool loop{},mute{},input_done{},flushed{};
        float volume{1.0f};
        std::uint64_t decoded{},played{},loops{},underruns{},stop_at{};
        Voice(const std::filesystem::path& path,int output,std::size_t block_frames,std::size_t ring_frames)
            :decoder(path),ring(ring_frames*2),input(block_frames*static_cast<std::size_t>(decoder.channels())),scratch(block_frames*2),frames(ring_frames),block(block_frames) {
            resampler=SDL_NewAudioStream(AUDIO_F32SYS,static_cast<Uint8>(decoder.channels()),decoder.sample_rate(),AUDIO_F32SYS,2,output);
            if(!resampler)throw std::runtime_error(SDL_GetError());
        }
        ~Voice(){SDL_FreeAudioStream(resampler);}
    };
    SDL_AudioDeviceID device{};
    SDL_AudioSpec format{};
    std::size_t block,ring_frames;
    AudioOutputStats output;
    std::array<std::unique_ptr<Voice>,AudioMixer::voice_count> voices;
    Impl(int rate,std::size_t block_size,std::size_t ring_size):block(block_size),ring_frames(ring_size) {
        if(rate<8000||rate>192000||block==0||block>16384||ring_frames<block||ring_frames>65536)throw std::invalid_argument("Invalid bounded audio configuration");
        SDL_SetMainReady();sdl_check(SDL_InitSubSystem(SDL_INIT_AUDIO));
        SDL_AudioSpec wanted{};wanted.freq=rate;wanted.format=AUDIO_F32SYS;wanted.channels=2;wanted.samples=1024;
        wanted.callback=callback;wanted.userdata=this;
        device=SDL_OpenAudioDevice(nullptr,0,&wanted,&format,0);
        if(!device){const std::string error=SDL_GetError();SDL_QuitSubSystem(SDL_INIT_AUDIO);throw std::runtime_error(error);}
        SDL_PauseAudioDevice(device,0);
    }
    ~Impl(){SDL_CloseAudioDevice(device);voices={};SDL_QuitSubSystem(SDL_INIT_AUDIO);}
    static void callback(void* context,Uint8* data,int bytes)noexcept {
        auto& self=*static_cast<Impl*>(context);
        std::memset(data,0,static_cast<std::size_t>(bytes));
        auto* output=reinterpret_cast<float*>(data);
        const auto frames=static_cast<std::size_t>(bytes)/(2*sizeof(float));
        std::size_t active=0;
        for(auto& entry:self.voices) {
            if(!entry||entry->state!=VoiceState::playing)continue;
            ++active;
            auto& voice=*entry;
            auto count=std::min(frames,voice.queued);
            if(voice.stop_at){const auto remaining=voice.stop_at>voice.played?voice.stop_at-voice.played:0;count=std::min(count,static_cast<std::size_t>(remaining));}
            const float scale=voice.mute?0.0f:voice.volume;
            for(std::size_t frame=0;frame<count;++frame) {
                const auto index=(voice.read+frame)%voice.frames;
                output[frame*2]+=voice.ring[index*2]*scale;output[frame*2+1]+=voice.ring[index*2+1]*scale;
            }
            voice.read=(voice.read+count)%voice.frames;voice.queued-=count;voice.played+=count;
            if(voice.stop_at&&voice.played>=voice.stop_at){voice.input_done=true;voice.queued=0;voice.state=VoiceState::finished;}
            if(count<frames&&!voice.input_done)voice.underruns+=frames-count;
            if(voice.input_done&&voice.queued==0)voice.state=VoiceState::finished;
        }
        for(std::size_t i=0;i<frames*2;++i) {
            output[i]=std::clamp(output[i],-1.0f,1.0f);
            if(output[i]!=0.0f)++self.output.nonzero_samples;
            self.output.peak_absolute_sample=std::max(self.output.peak_absolute_sample,std::abs(output[i]));
        }
        ++self.output.callbacks;self.output.rendered_frames+=frames;
        self.output.peak_active_voices=std::max(self.output.peak_active_voices,active);
    }
    Voice& at(std::size_t index) {
        if(index>=voices.size())throw std::out_of_range("Audio voice index");
        if(!voices[index])throw std::logic_error("Audio voice not loaded");
        return *voices[index];
    }
    void reset(Voice& v) {
        v.state=VoiceState::stopped;v.read=v.write=v.queued=0;v.input_done=v.flushed=false;
        v.decoded=v.played=v.loops=v.underruns=v.stop_at=0;
        SDL_AudioStreamClear(v.resampler);v.decoder.seek_frame(0);
    }
};
AudioMixer::AudioMixer(int rate,std::size_t block,std::size_t ring):impl_(std::make_unique<Impl>(rate,block,ring)){}
AudioMixer::~AudioMixer()=default;
void AudioMixer::load(std::size_t index,const std::filesystem::path& path) {
    if(index>=voice_count)throw std::out_of_range("Audio voice index");
    auto voice=std::make_unique<Impl::Voice>(path,impl_->format.freq,impl_->block,impl_->ring_frames);
    DeviceLock lock(impl_->device);impl_->voices[index]=std::move(voice);
}
void AudioMixer::unload(std::size_t index) {
    if(index>=voice_count)throw std::out_of_range("Audio voice index");
    std::unique_ptr<Impl::Voice> old;
    {DeviceLock lock(impl_->device);old=std::move(impl_->voices[index]);}
}
void AudioMixer::play(std::size_t index,bool loop,float volume,bool mute) {
    const auto level=gain(volume);
    {DeviceLock lock(impl_->device);auto& v=impl_->at(index);impl_->reset(v);v.loop=loop;v.volume=level;v.mute=mute;v.state=VoiceState::paused;}
    pump();
    {DeviceLock lock(impl_->device);auto& v=impl_->at(index);v.state=VoiceState::playing;}
}
void AudioMixer::pause(std::size_t index,bool paused) {
    DeviceLock lock(impl_->device);auto& v=impl_->at(index);
    if(v.state==VoiceState::playing&&paused)v.state=VoiceState::paused;
    else if(v.state==VoiceState::paused&&!paused)v.state=VoiceState::playing;
}
void AudioMixer::stop(std::size_t index){DeviceLock lock(impl_->device);impl_->reset(impl_->at(index));}
void AudioMixer::set_volume(std::size_t index,float volume,bool mute) {
    const auto level=gain(volume);DeviceLock lock(impl_->device);auto& v=impl_->at(index);v.volume=level;v.mute=mute;
}
void AudioMixer::set_loop(std::size_t index,bool loop) {
    DeviceLock lock(impl_->device);auto& voice=impl_->at(index);
    if(!loop&&voice.loop&&(voice.state==VoiceState::playing||voice.state==VoiceState::paused)&&voice.decoder.total_frames()>0){
        // The decoder can already be a loop ahead of playback. Unity stops at
        // the end of the *current audible loop*, not the next decoded EOF.
        // Keep the sample-rate ratio exact using integer arithmetic; reject
        // only frame counters too large to represent the calculation safely.
        const auto maximum=std::numeric_limits<std::uint64_t>::max();
        const auto input_frames=static_cast<std::uint64_t>(voice.decoder.total_frames());
        const auto output_rate=static_cast<std::uint64_t>(impl_->format.freq),input_rate=static_cast<std::uint64_t>(voice.decoder.sample_rate());
        if(input_frames>maximum/output_rate||voice.played>maximum/input_rate)throw std::overflow_error("Audio loop timeline overflow");
        const auto period=input_frames*output_rate;
        const auto loop_number=voice.played*input_rate/period+1;
        if(loop_number>(maximum-(input_rate-1))/period)throw std::overflow_error("Audio loop boundary overflow");
        voice.stop_at=(loop_number*period+input_rate-1)/input_rate;
    }
    if(loop)voice.stop_at=0;
    voice.loop=loop;
    // Changing a still-playing one-shot to loop must also reopen the decoder's
    // EOF gate if decoding finished ahead of the bounded playback queue. A
    // finished/stopped voice is never restarted just by changing its loop flag.
    if(loop&&(voice.state==VoiceState::playing||voice.state==VoiceState::paused)&&voice.flushed){voice.flushed=false;voice.input_done=false;}
}
void AudioMixer::pump() {
    for(auto& item:impl_->voices) {
        if(!item)continue;auto& v=*item;
        for(unsigned int operation=0;operation<128;++operation) {
            std::size_t free=0;
            {DeviceLock lock(impl_->device);if(v.state!=VoiceState::playing&&v.state!=VoiceState::paused)break;free=v.frames-v.queued;}
            if(free==0)break;
            const int available=SDL_AudioStreamAvailable(v.resampler);sdl_check(available);
            v.peak_resampler=std::max(v.peak_resampler,static_cast<std::size_t>(available));
            if(available>0) {
                const auto frames=std::min({free,v.block,static_cast<std::size_t>(available)/(sizeof(float)*2)});
                if(frames==0)throw std::runtime_error("Resampler returned partial audio frame");
                const int got=SDL_AudioStreamGet(v.resampler,v.scratch.data(),static_cast<int>(frames*sizeof(float)*2));sdl_check(got);
                if(got%static_cast<int>(sizeof(float)*2))throw std::runtime_error("Resampler output frame alignment");
                const auto count=static_cast<std::size_t>(got)/(sizeof(float)*2);
                DeviceLock lock(impl_->device);
                for(std::size_t frame=0;frame<count;++frame){const auto slot=(v.write+frame)%v.frames;v.ring[slot*2]=v.scratch[frame*2];v.ring[slot*2+1]=v.scratch[frame*2+1];}
                v.write=(v.write+count)%v.frames;v.queued+=count;continue;
            }
            if(v.flushed){DeviceLock lock(impl_->device);v.input_done=true;if(v.queued==0)v.state=VoiceState::finished;break;}
            const auto got=v.decoder.read_frames(v.input.data(),v.block);v.decoded+=got;
            if(got) {
                const auto bytes=got*static_cast<std::size_t>(v.decoder.channels())*sizeof(float);
                sdl_check(SDL_AudioStreamPut(v.resampler,v.input.data(),static_cast<int>(bytes)));
                // Feed only when prior output was drained; never accumulate a track.
                const int after=SDL_AudioStreamAvailable(v.resampler);sdl_check(after);
                const auto bound=(v.block*static_cast<std::size_t>(impl_->format.freq)/static_cast<std::size_t>(v.decoder.sample_rate())+8192)*sizeof(float)*2;
                if(static_cast<std::size_t>(after)>bound)throw std::runtime_error("Resampler backlog exceeds bounded block model");
            } else if(v.loop&&v.decoder.total_frames()>0) {v.decoder.seek_frame(0);++v.loops;}
            else {sdl_check(SDL_AudioStreamFlush(v.resampler));v.flushed=true;}
        }
    }
}
VoiceStats AudioMixer::stats(std::size_t index)const {
    if(index>=voice_count)throw std::out_of_range("Audio voice index");
    DeviceLock lock(impl_->device);const auto& item=impl_->voices[index];
    if(!item)return {};
    const auto& v=*item;return {v.state,v.decoded,v.played,v.loops,v.underruns,v.queued};
}
AudioMemory AudioMixer::memory()const {
    AudioMemory result;DeviceLock lock(impl_->device);
    result.device_callback_bytes=static_cast<std::size_t>(impl_->format.size);
    for(const auto& item:impl_->voices)if(item) {
        result.ring_bytes+=item->ring.size()*sizeof(float);result.scratch_bytes+=(item->input.size()+item->scratch.size())*sizeof(float);
        const auto available=SDL_AudioStreamAvailable(item->resampler);sdl_check(available);
        result.sdl_resampler_available_bytes+=static_cast<std::size_t>(available);result.peak_resampler_available_bytes+=item->peak_resampler;
    }
    return result;
}
int AudioMixer::output_rate()const{return impl_->format.freq;}
AudioOutputStats AudioMixer::diagnostics()const {DeviceLock lock(impl_->device);return impl_->output;}
void AudioMixer::reset_diagnostics(){DeviceLock lock(impl_->device);impl_->output={};}
}
