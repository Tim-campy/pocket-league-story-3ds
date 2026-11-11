#include "backend.hpp"
#include "font.hpp"
#include "audio.hpp"
#include <ft2build.h>
#include FT_FREETYPE_H
#include <algorithm>
#include <cmath>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

namespace fs=std::filesystem;
using namespace pls::sdl;
unsigned int assertions=0;
void require(bool value){if(!value)throw std::runtime_error("Media fixture assertion failed");++assertions;}
std::vector<fs::path> paths(const fs::path& file) {
    std::ifstream input(file);if(!input)throw std::runtime_error("Missing private asset index");
    std::vector<fs::path> result;std::string line;
    while(std::getline(input,line))if(!line.empty())result.push_back(fs::u8path(line));
    return result;
}
void tick(AudioMixer& mixer,unsigned int milliseconds) {
    const auto end=SDL_GetTicks64()+milliseconds;
    while(SDL_GetTicks64()<end){mixer.pump();SDL_Delay(4);}
}
int main(int argc,char**argv) {
    if(argc!=4)return 2;
    const auto fonts=paths(fs::u8path(argv[1])),audio=paths(fs::u8path(argv[2]));
    const auto output=fs::u8path(argv[3]);
    fs::create_directories(output);
    require(fonts.size()==2&&audio.size()==27);
    Backend display(256,128,true);
    std::size_t glyphs=0,max_font_cache=0;
    for(const auto& path:fonts) {
        for(int size:{12,24,30}) {
            RasterFont font(path,size,64*1024);
            const auto metrics=font.metrics();require(metrics.pixel_height==size&&metrics.ascent>0&&metrics.line_height>0);
            for(FontStyle style:{FontStyle::plain,FontStyle::bold,FontStyle::italic}) {
                for(char32_t point:{U'A',U'0',U' ',char32_t(0xe9),char32_t(0x3042),char32_t(0x4e00),char32_t(0x1f600)}) {
                    const auto& glyph=font.glyph(point,style);++glyphs;
                    require(glyph.rgba8.size()==static_cast<std::size_t>(glyph.width)*glyph.height*4);
                    require(std::isfinite(glyph.advance_x)&&glyph.advance_x>=0.0f);
                    if(!glyph.rgba8.empty()) {
                        auto* texture=display.upload_rgba8(glyph.width,glyph.height,glyph.rgba8);
                        display.clear({0,0,0,0});display.draw(texture,{0,0,glyph.width,glyph.height},{0,0,glyph.width,glyph.height},false);
                        const auto pixels=display.read_pixels();
                        for(int y=0;y<glyph.height;++y)for(int x=0;x<glyph.width;++x)for(int c=0;c<4;++c)
                            require(pixels[(static_cast<std::size_t>(y)*256+x)*4+c]==glyph.rgba8[(static_cast<std::size_t>(y)*glyph.width+x)*4+c]);
                        display.release(texture);
                    }
                }
                const float sum=font.glyph(U'A',style).advance_x+font.glyph(U'0',style).advance_x;
                require(font.measure_utf16(u"A0",style,false)==sum);
                require(font.measure_utf16(u"A\n0",style,false)==std::max(font.glyph(U'A',style).advance_x,font.glyph(U'0',style).advance_x));
                require(font.measure_utf16(u"\xd83d\xde00",style,false)==font.glyph(0x1f600,style).advance_x);
                for(const std::u16string text:{u"",u" ",u"A B",u"A\n B",u"\xd83d\xde00 A",u"\xd800 B"}){
                    auto replaced=text;std::replace(replaced.begin(),replaced.end(),u' ',u'.');
                    for(bool kerning:{false,true})require(font.measure_utf16(text,style,kerning,true)==font.measure_utf16(replaced,style,kerning));
                }
            }
            max_font_cache=std::max(max_font_cache,font.memory().cached_rgba8_bytes);
            require(font.memory().cached_rgba8_bytes<=font.memory().cache_limit_bytes);
            font.clear_cache();require(font.memory().cached_glyphs==0&&font.memory().cached_rgba8_bytes==0);
        }
        RasterFont evict(path,30,4096);
        for(char32_t value=32;value<256;++value){(void)evict.glyph(value);require(evict.memory().cached_rgba8_bytes<=4096);}
        require(evict.memory().cached_glyphs<224);
    }
    std::vector<double> durations;std::uint64_t decoded_frames=0;std::size_t max_block_bytes=0;
    std::ofstream decoder_report(output/"decoders.tsv");
    std::size_t shortest=0,rate24=0,rate32=0;
    for(std::size_t index=0;index<audio.size();++index) {
        VorbisStream stream(audio[index]);require(stream.channels()==2);
        const auto duration=static_cast<double>(stream.total_frames())/stream.sample_rate();durations.push_back(duration);
        if(duration<durations[shortest])shortest=index;
        if(stream.sample_rate()==24000)rate24=index;if(stream.sample_rate()==32000)rate32=index;
        constexpr std::size_t block=2048;
        std::vector<float> pcm(block*static_cast<std::size_t>(stream.channels()));
        max_block_bytes=std::max(max_block_bytes,pcm.size()*sizeof(float));
        std::uint64_t total=0;std::vector<float> prefix;
        for(;;) {
            const auto count=stream.read_frames(pcm.data(),block);
            if(count==0)break;
            if(total==0)prefix.assign(pcm.begin(),pcm.begin()+static_cast<std::ptrdiff_t>(std::min<std::size_t>(count,512)*2));
            for(std::size_t i=0;i<count*2;++i)require(std::isfinite(pcm[i]));
            total+=count;
        }
        require(total==static_cast<std::uint64_t>(stream.total_frames()));
        require(stream.read_frames(pcm.data(),block)==0);
        require(stream.read_frames(nullptr,0)==0);
        stream.seek_frame(0);const auto prefix_frames=prefix.size()/2;
        require(stream.read_frames(pcm.data(),prefix_frames)==prefix_frames);
        require(std::equal(prefix.begin(),prefix.end(),pcm.begin()));
        std::ofstream first(output/("prefix-"+std::to_string(index)+".f32"),std::ios::binary);
        first.write(reinterpret_cast<const char*>(prefix.data()),static_cast<std::streamsize>(prefix.size()*sizeof(float)));
        decoder_report<<index<<'\t'<<stream.sample_rate()<<'\t'<<stream.channels()<<'\t'<<stream.total_frames()<<'\t'<<prefix_frames<<'\n';
        decoded_frames+=total;
    }
    require(durations[shortest]>0.0&&durations[shortest]<2.0);
    std::size_t ring_bytes=0,scratch_bytes=0,resampler_peak=0;std::uint64_t mixer_frames=0,mixer_loops=0,mixer_underruns=0;
    {
        AudioMixer mixer;
        mixer.load(0,audio[shortest]);mixer.load(1,audio[shortest]);mixer.load(2,audio[rate24]);mixer.load(3,audio[rate32]);
        for(std::size_t voice=0;voice<AudioMixer::voice_count;++voice)mixer.play(voice,true,0.25f);
        tick(mixer,static_cast<unsigned int>(durations[shortest]*1000.0)+150);
        const auto diag=mixer.diagnostics();require(diag.callbacks>0&&diag.nonzero_samples>0&&diag.peak_active_voices==4);
        require(diag.peak_absolute_sample<=1.0f);
        for(std::size_t voice=0;voice<4;++voice){require(mixer.stats(voice).played_frames>0);require(mixer.stats(voice).queued_frames<=8192);}
        require(mixer.stats(0).completed_loops>0);
        require(mixer.stats(0).played_frames>static_cast<std::uint64_t>(durations[shortest]*mixer.output_rate()));
        mixer.pause(0,true);const auto paused=mixer.stats(0).played_frames;const auto other=mixer.stats(1).played_frames;
        tick(mixer,100);require(mixer.stats(0).played_frames==paused&&mixer.stats(1).played_frames>other);
        mixer.pause(0,false);tick(mixer,60);require(mixer.stats(0).played_frames>paused);
        for(std::size_t voice=0;voice<4;++voice)mixer.set_volume(voice,1.0f,true);
        mixer.reset_diagnostics();tick(mixer,100);require(mixer.diagnostics().nonzero_samples==0&&mixer.diagnostics().callbacks>0);
        for(std::size_t voice=0;voice<4;++voice)mixer.set_volume(voice,0.0f,false);
        mixer.reset_diagnostics();tick(mixer,60);require(mixer.diagnostics().nonzero_samples==0);
        const auto memory=mixer.memory();ring_bytes=memory.ring_bytes;scratch_bytes=memory.scratch_bytes;resampler_peak=memory.peak_resampler_available_bytes;
        require(ring_bytes==4*8192*2*sizeof(float));require(scratch_bytes==4*2048*4*sizeof(float));
        for(std::size_t voice=0;voice<4;++voice){mixer_frames+=mixer.stats(voice).played_frames;mixer_loops+=mixer.stats(voice).completed_loops;mixer_underruns+=mixer.stats(voice).underrun_frames;mixer.stop(voice);require(mixer.stats(voice).state==VoiceState::stopped&&mixer.stats(voice).queued_frames==0);}
        mixer.play(0,false);tick(mixer,static_cast<unsigned int>(durations[shortest]*1000.0)+300);require(mixer.stats(0).state==VoiceState::finished);
        for(std::size_t voice=0;voice<4;++voice)mixer.unload(voice);
        require(mixer.memory().ring_bytes==0&&mixer.stats(0).state==VoiceState::empty);
    }
    std::cout<<"{\"fonts\":"<<fonts.size()<<",\"glyph_rasters\":"<<glyphs<<",\"max_font_cache_bytes\":"<<max_font_cache
             <<",\"vorbis_files\":"<<audio.size()<<",\"decoded_frames\":"<<decoded_frames<<",\"decoder_pcm_block_bytes\":"<<max_block_bytes
             <<",\"mixer_ring_bytes\":"<<ring_bytes<<",\"mixer_scratch_bytes\":"<<scratch_bytes<<",\"resampler_peak_available_bytes\":"<<resampler_peak
             <<",\"mixer_played_frames\":"<<mixer_frames<<",\"completed_loops\":"<<mixer_loops<<",\"assertions\":"<<assertions
             <<",\"mixer_underrun_frames\":"<<mixer_underruns
             <<",\"game_boot\":false,\"audio_driver\":\"dummy\"}\n";
}
