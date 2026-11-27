#pragma once
#include "kairo/platform/ctr/ctr_gpu.hpp"
#include "runtime_memory.hpp"
#include "resource_load_trace.hpp"
#include <algorithm>
#include <array>
#include <chrono>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <memory>
#include <stdexcept>

namespace pls::ctr {
struct FrameScene {
    int form{}, subform{-1}, state{-1}, match_state{-1}, possession{-1};
    int scale{}, pad_x{}, pad_y{};
    float camera_x{}, camera_y{}; // Detect motion smaller than one world unit too.
    bool moving{};
};
inline bool scene_changed(const FrameScene& a,const FrameScene& b){
    return a.form!=b.form||a.subform!=b.subform||a.state!=b.state||a.match_state!=b.match_state;
}
struct FrameSample {
    std::uint64_t logic{},draw{},wait{},upload{},readback{},frame{},other{};
};
// Native values only. The fixed buffers are allocated once, before gameplay.
class FrameProfile {
    using Clock=std::chrono::steady_clock;
    static constexpr std::size_t frame_capacity=4096,gc_capacity=1024;
    static constexpr int checkpoint_seconds=120;
    struct Resources {std::uint64_t reads{},ns{},bytes{},image_ns{},stream_ns{},dropped{};};
    struct Row {
        std::uint64_t number{},profile_ns{},collections{},gc_ns{},gc_max_ns{},accounting_ns{};
        FrameScene before{},scene{};FrameSample sample{};VideoProfile gpu{};Resources assets{};
        bool transition{},interaction{},marker{},boot{};
    };
    struct Collection {std::uint64_t frame{};FrameScene scene{};cs::GcEvent event{};};
    struct Buffers {std::array<Row,frame_capacity> frames{};std::array<Collection,gc_capacity> gc{};std::array<cs::GcEvent,64> events{};};
    std::unique_ptr<Buffers> buffer_=std::make_unique<Buffers>();
    std::filesystem::path prefix_;
    Clock::time_point checkpoint_=Clock::now();
    std::size_t count_{},gc_count_{};
    std::uint64_t frames_{},written_{},gc_written_{},gc_seen_{},gc_dropped_{},frame_dropped_{},asset_dropped_{};
    std::uint64_t profile_ns_{},profile_max_ns_{},flush_ns_{},flush_max_ns_{},flushes_{};
    bool started_{},marker_{},detailed_{},resources_started_{};

    static std::uint64_t elapsed(Clock::time_point start){return std::chrono::duration_cast<std::chrono::nanoseconds>(Clock::now()-start).count();}
    static Resources take_resources(){
        Resources result;
        std::lock_guard<std::mutex> lock(diagnostic::resource_event_mutex);
        for(std::size_t i=0;i<diagnostic::resource_aggregate_count;++i){
            const auto& e=diagnostic::resource_aggregates[i];
            if(!std::strcmp(e.stage,"catalog-total")){result.reads+=e.count;result.ns+=e.ns;result.bytes+=e.bytes;}
            else if(!std::strcmp(e.stage,"image-load-total")||!std::strcmp(e.stage,"image-use-total"))result.image_ns+=e.ns;
            else if(!std::strcmp(e.stage,"stream-prepare-total"))result.stream_ns+=e.ns;
        }
        result.dropped=diagnostic::resource_aggregate_dropped;
        diagnostic::resource_aggregate_dropped=0;
        diagnostic::resource_aggregate_count=0;
        return result;
    }
    template<class... Values> static void csv(std::ostream& out,Values... values){
        bool first=true;((out<<(first?(first=false,""):",")<<values),...);out<<'\n';
    }
public:
    explicit FrameProfile(bool detailed):detailed_(detailed){
        for(int i=1;i<10000;++i){
            auto p=std::filesystem::path("sdmc:/pls-video")/("video-"+std::to_string(i));
            if(!std::filesystem::exists(p.string()+"-frames.csv")&&!std::filesystem::exists(p.string()+"-gc.csv")&&
               !std::filesystem::exists(p.string()+"-meta.txt")){prefix_=p;break;}
        }
        if(prefix_.empty())throw std::runtime_error("No free automatic video profile slot");
        if(detailed_){
            const auto n=cs::gc_events_after(0,buffer_->events.data(),buffer_->events.size(),gc_dropped_);
            for(std::size_t i=0;i<n;++i){const auto& e=buffer_->events[i];gc_seen_=e.sequence;buffer_->gc[gc_count_++]={0,FrameScene{-1},e};}
        }
    }
    void request(FrameScene){marker_=true;}
    std::uint64_t frames()const{return frames_;}
    bool detailed()const{return detailed_;}
    void frame(FrameScene before,FrameScene scene,FrameSample sample,const VideoProfile& gpu,
               const gc::Statistics& gc_before,const gc::Statistics& gc_after,bool interaction,bool boot){
        const auto start=Clock::now();
        if(!started_){started_=true;checkpoint_=start;}
        resources_started_=resources_started_||!boot;
        ++frames_;
        if(count_==frame_capacity){++frame_dropped_;return;}
        auto& row=buffer_->frames[count_++];row={};
        row.number=frames_;row.before=before;row.scene=scene;row.sample=sample;row.gpu=gpu;
        row.boot=boot;row.transition=boot||scene_changed(before,scene);row.interaction=interaction;row.marker=marker_;marker_=false;
        row.collections=gc_after.collections-gc_before.collections;
        row.accounting_ns=gc_after.accounting_ns-gc_before.accounting_ns;
        row.gc_ns=gc_after.pause_ns-gc_before.pause_ns;row.gc_max_ns=gc_after.interval_max_pause_ns;
        if(detailed_){
            if(resources_started_){row.assets=take_resources();asset_dropped_+=row.assets.dropped;}
            std::uint64_t lost=0;
            const auto n=cs::gc_events_after(gc_seen_,buffer_->events.data(),buffer_->events.size(),lost);
            gc_dropped_+=lost;
            const auto outside=n>row.collections?n-row.collections:0;
            for(std::size_t i=0;i<n;++i){
                const auto& e=buffer_->events[i];gc_seen_=e.sequence;
                const bool in_frame=i>=outside;
                if(in_frame&&(e.trigger==cs::GcTrigger::transition||e.trigger==cs::GcTrigger::loading))row.transition=true;
                if(gc_count_<gc_capacity)buffer_->gc[gc_count_++]={in_frame?frames_:0,in_frame?scene:before,e};else ++gc_dropped_;
            }
        }
        row.profile_ns=elapsed(start);profile_ns_+=row.profile_ns;profile_max_ns_=std::max(profile_max_ns_,row.profile_ns);
        // Include sampling in the busy-frame budget; checkpoint I/O is reported separately.
        row.sample.frame+=row.profile_ns;row.sample.other+=row.profile_ns;
    }
    bool checkpoint_due()const{
        return started_&&(count_+1>=frame_capacity||gc_count_+64>=gc_capacity||Clock::now()-checkpoint_>=std::chrono::seconds(checkpoint_seconds));
    }
    void write_summary(){
        const auto start=Clock::now();
        {
            std::ofstream out(prefix_.string()+"-frames.csv",std::ios::app);
            if(!out)throw std::runtime_error("Cannot open automatic video frames");
            if(!written_)out<<"frame,form_id,subform,state,match_state,possession,scale,moving,transition,interaction,boot,from_form,from_subform,from_state,from_match_state,pad_x,pad_y,camera_x,camera_y,marker,logic_ns,draw_cpu_ns,gpu_wait_ns,frame_ns,other_cpu_ns,profile_ns,collections,gc_ns,gc_max_ns,accounting_ns,asset_reads,asset_ns,asset_bytes,image_ns,stream_ns,uploads,upload_bytes,upload_ns,readback_ns,target_creations,texture_creations,created_bytes,create_ns,copies,copy_ns,copy_bytes,draw_calls,texture_switches,texture_bytes,vram_bytes,min_linear_free,min_vram_free,label_cache_hits,label_cache_misses\n";
            for(std::size_t i=0;i<count_;++i){const auto& r=buffer_->frames[i];const auto& s=r.scene;const auto& b=r.before;const auto& t=r.sample;const auto& g=r.gpu;const auto& a=r.assets;
                csv(out,r.number,s.form,s.subform,s.state,s.match_state,s.possession,s.scale,s.moving,r.transition,r.interaction,r.boot,b.form,b.subform,b.state,b.match_state,s.pad_x,s.pad_y,int(s.camera_x),int(s.camera_y),r.marker,t.logic,t.draw,t.wait,t.frame,t.other,r.profile_ns,r.collections,r.gc_ns,r.gc_max_ns,r.accounting_ns,a.reads,a.ns,a.bytes,a.image_ns,a.stream_ns,g.uploads,g.upload_bytes,g.upload_ns,g.readback_ns,g.target_creations,g.texture_creations,g.created_bytes,g.create_ns,g.copies,g.copy_ns,g.copy_bytes,g.quads,g.texture_switches,g.texture_bytes,g.vram_bytes,g.min_linear_free,g.min_vram_free,g.label_cache_hits,g.label_cache_misses);
            }
            out.close();if(!out)throw std::runtime_error("Automatic video frames write failed");
        }
        {
            std::ofstream out(prefix_.string()+"-gc.csv",std::ios::app);
            if(!out)throw std::runtime_error("Cannot open automatic video GC events");
            if(!flushes_)out<<"frame,form_id,subform,state,match_state,sequence,trigger,pause_ns,bytes_before,bytes_after,objects_before,objects_after,source\n";
            for(std::size_t i=0;i<gc_count_;++i){const auto& r=buffer_->gc[i];const auto& e=r.event;
                csv(out,r.frame,r.scene.form,r.scene.subform,r.scene.state,r.scene.match_state,e.sequence,int(e.trigger),e.pause_ns,e.bytes_before,e.bytes_after,e.objects_before,e.objects_after,std::quoted(e.source));
            }
            out.close();if(!out)throw std::runtime_error("Automatic video GC write failed");
        }
        written_+=count_;gc_written_+=gc_count_;count_=gc_count_=0;
        const auto duration=elapsed(start);flush_ns_+=duration;flush_max_ns_=std::max(flush_max_ns_,duration);++flushes_;
        std::ofstream meta(prefix_.string()+"-meta.txt");
        meta<<"version=1\ncamera_position_version=2\ndetailed="<<detailed_<<"\nframes="<<frames_<<"\nwritten="<<written_<<"\nframe_dropped="<<frame_dropped_
            <<"\nasset_dropped="<<asset_dropped_<<"\ngc_events="<<gc_written_<<"\ngc_dropped="<<gc_dropped_<<"\nprofile_ns="<<profile_ns_<<"\nprofile_max_ns="<<profile_max_ns_
            <<"\ncheckpoint_seconds="<<checkpoint_seconds<<"\nflushes="<<flushes_<<"\nflush_data_ns="<<flush_ns_<<"\nflush_data_max_ns="<<flush_max_ns_<<"\nbuffer_bytes="<<sizeof(Buffers)<<'\n';
        meta.close();if(!meta)throw std::runtime_error("Automatic video metadata write failed");
        checkpoint_=Clock::now();
    }
};
}
