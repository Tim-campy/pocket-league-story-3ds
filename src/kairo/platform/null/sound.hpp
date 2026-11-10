#pragma once
#include "../../api/sound.hpp"
#include <map>
#include <fstream>
#include <chrono>
namespace pls::null_backend {
// Header/granule scan only: no Vorbis decoding, mixing or device output.
inline double ogg_seconds(const std::filesystem::path& path){
    std::ifstream input(path,std::ios::binary);if(!input)throw cs::IOException("Null audio cannot read local Ogg");
    std::uint32_t serial=0,rate=0;std::uint64_t last=0;bool first=true;
    while(input.peek()!=std::char_traits<char>::eof()){
        std::array<unsigned char,27> h{};input.read(reinterpret_cast<char*>(h.data()),h.size());
        if(!input||std::string(reinterpret_cast<char*>(h.data()),4)!="OggS"||h[4]!=0)throw cs::IOException("Invalid Ogg page");
        auto u32=[](const unsigned char*p){return std::uint32_t(p[0])|(std::uint32_t(p[1])<<8)|(std::uint32_t(p[2])<<16)|(std::uint32_t(p[3])<<24);};
        const auto current=u32(h.data()+14);if(first)serial=current;
        if(current!=serial)throw cs::NotSupportedException("Chained Ogg is outside null benchmark");
        std::vector<unsigned char> lengths(h[26]);input.read(reinterpret_cast<char*>(lengths.data()),lengths.size());
        std::size_t bytes=0;for(auto length:lengths)bytes+=length;
        std::vector<unsigned char> body(bytes);input.read(reinterpret_cast<char*>(body.data()),body.size());if(!input)throw cs::IOException("Truncated Ogg page");
        if(first){if(body.size()<16||body[0]!=1||std::string(reinterpret_cast<char*>(body.data()+1),6)!="vorbis")throw cs::IOException("Missing Vorbis identification");rate=u32(body.data()+12);first=false;}
        std::uint64_t granule=0;for(unsigned i=0;i<8;++i)granule|=std::uint64_t(h[6+i])<<(8*i);
        if(granule!=UINT64_MAX)last=granule;
    }
    if(!rate||first)throw cs::IOException("Missing Vorbis duration");return double(last)/double(rate);
}
class Sound final:public kairo::SoundOutput {
    struct Port{cs::Ref<kairo::SoundData>clip;double duration{};std::chrono::steady_clock::time_point start;bool playing{},loop{};};
    std::array<Port,4> ports_;
    std::map<std::filesystem::path,double> durations_;
    Port& port(std::int32_t n){if(n<0||n>=4)throw cs::IndexOutOfRangeException();return ports_[std::size_t(n)];}
public:
    void SetClip(std::int32_t n,cs::Ref<kairo::SoundData> clip)override{auto&p=port(n);if(p.clip==clip)return;p={};p.clip=std::move(clip);if(p.clip){auto path=p.clip->path();auto found=durations_.find(path);if(found==durations_.end())found=durations_.emplace(path,ogg_seconds(path)).first;p.duration=found->second;}}
    bool IsPlaying(std::int32_t n)override{auto&p=port(n);if(p.playing&&!p.loop&&std::chrono::duration<double>(std::chrono::steady_clock::now()-p.start).count()>=p.duration)p.playing=false;return p.playing;}
    void Play(std::int32_t n)override{auto&p=port(n);p.start=std::chrono::steady_clock::now();p.playing=bool(p.clip);}
    void Rewind(std::int32_t n)override{Play(n);}
    void Stop(std::int32_t n)override{port(n).playing=false;}
    void SetVolume(std::int32_t n,float)override{(void)port(n);}
    void SetLoop(std::int32_t n,bool loop)override{port(n).loop=loop;}
    void Pump()override{for(int n=0;n<4;++n)(void)IsPlaying(n);}
    void trace_edges(const cs::EdgeVisitor&v)const override{for(const auto&p:ports_)cs::trace_value(p.clip,v);}
    void release_edges()override{for(auto&p:ports_)p.clip.reset();}
};
}
