#include "pc_metrics.hpp"
#include "../kairo/api/diagnostic_output.hpp"
#include <algorithm>
#include <cstdlib>
#include <iomanip>
#include <limits>
#include <ostream>
#include <sstream>
namespace pls::pc {
namespace {
constexpr const char* names[]={"gc_safepoint","input","update","audio_pump","game_draw","texture_upload","host_render","present","texture_release","pacing","total_before_pacing","total_wall"};
static_assert(sizeof(names)/sizeof(names[0])==frame_stage_count);
std::uint64_t elapsed(std::chrono::steady_clock::time_point a,std::chrono::steady_clock::time_point b)noexcept{
    const auto value=std::chrono::duration_cast<std::chrono::nanoseconds>(b-a).count();return value>0?static_cast<std::uint64_t>(value):0;
}
std::string quote(const std::string&value){std::ostringstream out;out<<'"';for(unsigned char c:value){switch(c){case '"':out<<"\\\"";break;case '\\':out<<"\\\\";break;case '\n':out<<"\\n";break;case '\r':out<<"\\r";break;case '\t':out<<"\\t";break;default:if(c<32)out<<"\\u"<<std::hex<<std::setw(4)<<std::setfill('0')<<unsigned(c)<<std::dec;else out<<char(c);}}out<<'"';return out.str();}
void number(std::ostream&out,const std::optional<std::uint64_t>&value){if(value)out<<*value;else out<<"null";}
void field(std::ostream&out,const char*key,const std::optional<std::uint64_t>&value,bool comma=true){out<<quote(key)<<':';number(out,value);if(comma)out<<',';}
void milliseconds(std::ostream&out,const std::optional<double>&value){if(value)out<<std::setprecision(12)<<*value/1000000.0;else out<<"null";}
void distribution(std::ostream&out,const Distribution&d){out<<"{\"samples\":"<<d.samples<<",\"min_ms\":";milliseconds(out,d.minimum);out<<",\"mean_ms\":";milliseconds(out,d.mean);out<<",\"median_ms\":";milliseconds(out,d.median);out<<",\"p95_ms\":";milliseconds(out,d.p95);out<<",\"max_ms\":";milliseconds(out,d.maximum);out<<'}';}
}
FrameClock::FrameClock(bool enabled):enabled_(enabled){if(enabled_)start_=last_=std::chrono::steady_clock::now();}
void FrameClock::mark(FrameStage stage)noexcept{if(!enabled_)return;const auto now=std::chrono::steady_clock::now();sample_.nanoseconds[static_cast<std::size_t>(stage)]=elapsed(last_,now);last_=now;}
FrameSample FrameClock::finish()noexcept{if(!enabled_)return sample_;const auto now=std::chrono::steady_clock::now();sample_.nanoseconds[static_cast<std::size_t>(FrameStage::pacing)]=elapsed(last_,now);sample_.nanoseconds[static_cast<std::size_t>(FrameStage::total_before_pacing)]=elapsed(start_,last_);sample_.nanoseconds[static_cast<std::size_t>(FrameStage::total_wall)]=elapsed(start_,now);return sample_;}
void FrameAccumulator::record(const FrameSample&sample){if(seen_!=std::numeric_limits<std::uint64_t>::max())++seen_;if(frames_.size()<capacity)frames_.push_back(sample);}
Distribution FrameAccumulator::summarize(FrameStage stage,FrameSlice slice)const{
    Distribution result;std::vector<std::uint64_t>values;
    std::size_t begin=slice==FrameSlice::after_first_60?std::min(startup_frames,frames_.size()):0;
    std::size_t end=slice==FrameSlice::startup_first_60?std::min(startup_frames,frames_.size()):frames_.size();
    for(std::size_t i=begin;i<end;++i)values.push_back(frames_[i].nanoseconds[static_cast<std::size_t>(stage)]);
    result.samples=values.size();if(values.empty())return result;
    std::sort(values.begin(),values.end());long double sum=0;for(auto value:values)sum+=value;
    result.minimum=static_cast<double>(values.front());result.maximum=static_cast<double>(values.back());result.mean=static_cast<double>(sum/static_cast<long double>(values.size()));
    result.median=values.size()%2?static_cast<double>(values[values.size()/2]):(static_cast<double>(values[values.size()/2-1])+static_cast<double>(values[values.size()/2]))/2.0;
    result.p95=static_cast<double>(values[(values.size()*95+99)/100-1]);return result;
}
bool metrics_enabled_from_environment(){
#ifdef _MSC_VER
    char*value=nullptr;std::size_t length=0;if(_dupenv_s(&value,&length,"PLS_PC_METRICS")!=0)return false;const bool result=value&&std::string(value)=="1";std::free(value);return result;
#else
    const char*value=std::getenv("PLS_PC_METRICS");return value&&std::string(value)=="1";
#endif
}
RunMetrics::RunMetrics(bool enabled,std::ostream&output):enabled_(enabled),output_(output){}
void RunMetrics::observe_texture_payload(std::uint64_t bytes)noexcept{if(enabled_)peak_backend_texture_payload_bytes_=std::max(peak_backend_texture_payload_bytes_,bytes);}
bool RunMetrics::frame(const FrameSample&sample)noexcept{if(!enabled_)return false;try{frames_.record(sample);return frames_.seen()==1;}catch(...){return false;}}
void RunMetrics::memory(const std::string&phase,const PayloadSnapshot&payload)noexcept{if(!enabled_)return;try{const auto start=std::chrono::steady_clock::now();auto process=sample_process_memory();emit_memory(phase,process,payload,elapsed(start,std::chrono::steady_clock::now()));}catch(...){}}
void RunMetrics::emit_memory(const std::string&phase,const ProcessMemory&m,const PayloadSnapshot&p,std::uint64_t sampler_ns)noexcept{
    if(!enabled_)return;try{std::ostringstream out;out<<"PLS_PC_METRICS={\"event\":\"memory\",\"phase\":"<<quote(phase)<<",\"completed_presented_frames\":"<<frames_.seen()<<",\"sampler_nanoseconds\":"<<sampler_ns<<",\"process\":{";
        field(out,"resident_bytes",m.resident_bytes);field(out,"peak_resident_bytes",m.peak_resident_bytes);field(out,"private_commit_bytes",m.private_commit_bytes);field(out,"executable_image_committed_bytes",m.executable_image_committed_bytes);field(out,"executable_image_resident_bytes",m.executable_image_resident_bytes);out<<"\"page_bytes\":"<<m.page_bytes<<",\"platform\":"<<quote(m.platform)<<",\"diagnostic\":"<<quote(m.diagnostic)<<"},\"resident_by_category\":{\"textures\":null,\"audio\":null,\"fonts\":null,\"managed_heap\":null},\"payload_bytes\":{";
        field(out,"display_rgba",p.display_rgba_bytes);field(out,"display_rgba_capacity",p.display_rgba_capacity_bytes);field(out,"backend_texture",p.backend_texture_payload_bytes);field(out,"audio_ring",p.audio_ring_bytes);field(out,"audio_scratch",p.audio_scratch_bytes);field(out,"audio_resampler_available",p.audio_resampler_available_bytes);field(out,"audio_device_callback",p.audio_device_callback_bytes);out<<"\"all_images\":null,\"font_source\":null,\"font_cache_rgba\":null,\"managed_heap\":null},\"payload_peaks_bytes\":{\"backend_texture\":"<<peak_backend_texture_payload_bytes_<<',';field(out,"audio_resampler_available",p.audio_peak_resampler_available_bytes,false);
        out<<"},\"known_allocations\":{\"coverage\":\"partial\",\"overhead_and_opaque_library_allocations\":\"UNKNOWN\",\"sampling_is_atomic\":false,\"categories\":{";
        const char*categories[]={"textures","audio","fonts","managed_heap"};for(std::size_t i=0;i<4;++i){if(i)out<<',';out<<quote(categories[i])<<":{";field(out,"capacity_bytes",p.known.capacity_bytes[i]);field(out,"resident_payload_bytes",p.known.resident_payload_bytes[i],false);out<<'}';}out<<"}},\"gc_last_collection\":{";field(out,"tracked",p.gc_tracked);field(out,"roots",p.gc_roots);field(out,"unreachable",p.gc_unreachable);field(out,"collected",p.gc_collected,false);out<<"},\"memory_categories_are_not_additive\":true,\"game_screen\":\"UNKNOWN\"}\n";{std::lock_guard<std::mutex> lock(pls::kairo::debug_log_mutex);output_<<out.str();output_.flush();}
    }catch(...){}}
void RunMetrics::finish(const std::string&outcome)noexcept{if(!enabled_||finished_)return;finished_=true;emit_summary(outcome);}
void RunMetrics::checkpoint(const std::string&outcome)noexcept{if(enabled_&&!finished_)emit_summary(outcome);}
void RunMetrics::emit_summary(const std::string&outcome)noexcept{try{
    std::ostringstream out;out<<"PLS_PC_METRICS={\"event\":\"frame_summary\",\"outcome\":"<<quote(outcome)<<",\"completed_presented_frames\":"<<frames_.seen()<<",\"retained_frames\":"<<frames_.retained()<<",\"frames_not_retained\":"<<(frames_.seen()-frames_.retained())<<",\"window\":\"first_600_completed_frames\",\"p95_rule\":\"nearest_rank\",\"game_screen\":\"UNKNOWN\",\"slices\":{";
    bool first_slice=true;for(auto slice:{FrameSlice::retained,FrameSlice::startup_first_60,FrameSlice::after_first_60}){
        if(!first_slice)out<<',';first_slice=false;out<<quote(slice==FrameSlice::retained?"retained":slice==FrameSlice::startup_first_60?"first_60":"after_first_60")<<":{";
        for(std::size_t i=0;i<frame_stage_count;++i){if(i)out<<',';out<<quote(names[i])<<':';distribution(out,frames_.summarize(static_cast<FrameStage>(i),slice));}out<<'}';
    }out<<"}}\n";{std::lock_guard<std::mutex> lock(pls::kairo::debug_log_mutex);output_<<out.str();output_.flush();}
}catch(...){}}
}
