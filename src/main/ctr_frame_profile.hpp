#pragma once
#include "kairo/platform/ctr/ctr_gpu.hpp"
#include "runtime_memory.hpp"
#include "capture.hpp"
#include "font.hpp"
#include <3ds.h>
#include <array>
#include <algorithm>
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <memory>
#include <stdexcept>

namespace pls::ctr {
struct FrameScene {
    int form{}, subform{-1}, scale{}, pad_x{}, pad_y{}, camera_x{}, camera_y{};
    bool moving{};
};
struct FrameSample {
    std::uint64_t logic{}, draw{}, wait{}, upload{}, readback{}, frame{}, other{};
    std::uint64_t quads{}, texture_switches{}, glyphs{}, uploads{}, upload_bytes{};
    std::uint64_t collections{}, gc_ns{}, gc_max_ns{};
    bool transition{}, interaction{};
    FrameScene scene{};
};
// Fixed native sample storage; no managed references are retained here.
class FrameProfile {
    static constexpr std::size_t sample_count=300, warmup_count=60;
    std::unique_ptr<std::array<FrameSample,sample_count>> samples_=std::make_unique<std::array<FrameSample,sample_count>>();
    struct Collection {std::uint64_t frame{}, wall_ns{};bool interaction{};cs::GcEvent event{};};
    std::unique_ptr<std::array<Collection,512>> events_=std::make_unique<std::array<Collection,512>>();
    std::size_t count_{}, warmup_{}, event_count_{}, dropped_{};
    std::uint64_t frames_{}, gc_seen_{}, max_stable_{}, max_transition_{}, max_pause_{}, over_budget_{};
    bool started_{}, active_{};
    FrameScene expected_{};
    std::filesystem::path path_, summary_path_;

    void choose_path(){
        for(int n=1;n<10000;++n){
            auto p=std::filesystem::path("sdmc:/pls-video")/("profile-"+std::to_string(n)+".csv");
            if(!std::filesystem::exists(p)){path_=p;return;}
        }
        throw std::runtime_error("No free video profile slot");
    }
public:
    FrameProfile(){
        for(int n=1;n<10000;++n){
            auto p=std::filesystem::path("sdmc:/pls-video")/("session-"+std::to_string(n)+".txt");
            if(!std::filesystem::exists(p)){summary_path_=p;break;}
        }
        if(summary_path_.empty())throw std::runtime_error("No free video session slot");
    }
    void request(FrameScene scene){
        if(active_)return;
        choose_path();expected_=scene;warmup_=count_=0;active_=true;
        std::fprintf(stderr,"PLS_VIDEO_WINDOW_BEGIN path=%s form=%d subform=%d scale=%d warmup=60 samples=300\n",path_.string().c_str(),scene.form,scene.subform,scene.scale);
        std::fflush(stderr);
    }
    bool frame(FrameScene scene,FrameSample sample,const VideoProfile& gpu,
               const gc::Statistics& before,const gc::Statistics& after,bool changed,bool interaction){
        if(!started_){
            if(scene.form!=1)return false;
            for(const auto& e:cs::gc_events_after(gc_seen_))gc_seen_=e.sequence;
            started_=true;request(scene);return false;
        }
        ++frames_;
        sample.scene=scene;sample.interaction=interaction;sample.transition=changed;
        sample.quads=gpu.quads;sample.texture_switches=gpu.texture_switches;sample.glyphs=gpu.glyphs;
        sample.uploads=gpu.uploads;sample.upload_bytes=gpu.upload_bytes;
        sample.collections=after.collections-before.collections;sample.gc_ns=after.pause_ns-before.pause_ns;
        sample.gc_max_ns=after.interval_max_pause_ns;
        if(sample.collections){
            // The existing API allocates only on a collection frame, after timing.
            for(const auto& e:cs::gc_events_after(gc_seen_)){
                gc_seen_=e.sequence;
                if(e.trigger==cs::GcTrigger::transition||e.trigger==cs::GcTrigger::loading)sample.transition=true;
                max_pause_=std::max(max_pause_,e.pause_ns);
                if(event_count_<events_->size())events_->at(event_count_++)={frames_,sample.frame,interaction,e};else ++dropped_;
            }
        }
        if(!interaction){
            auto& maximum=sample.transition?max_transition_:max_stable_;
            maximum=std::max(maximum,sample.frame);
            if(!sample.transition&&sample.frame>50000000)++over_budget_;
        }
        if(!active_)return false;
        if(interaction||scene.form!=expected_.form||scene.subform!=expected_.subform||scene.scale!=expected_.scale){
            std::fprintf(stderr,"PLS_VIDEO_WINDOW_CANCEL form=%d subform=%d scale=%d\n",scene.form,scene.subform,scene.scale);
            std::fflush(stderr);active_=false;return false;
        }
        if(warmup_++<warmup_count)return false;
        samples_->at(count_++)=sample;
        if(count_!=sample_count)return false;
        std::ofstream output(path_);if(!output)throw std::runtime_error("Cannot write video profile");
        output<<"frame,form_id,subform,scale,pad_x,pad_y,camera_x,camera_y,moving,transition,logic_ns,draw_cpu_ns,gpu_wait_ns,upload_ns,readback_ns,frame_ns,other_cpu_ns,draw_calls,texture_switches,glyphs,uploads,upload_bytes,collections,gc_ns,gc_max_ns\n";
        for(std::size_t i=0;i<count_;++i){const auto& s=samples_->at(i);
            output<<i<<','<<s.scene.form<<','<<s.scene.subform<<','<<s.scene.scale<<','<<s.scene.pad_x<<','<<s.scene.pad_y<<','<<s.scene.camera_x<<','<<s.scene.camera_y<<','<<s.scene.moving<<','<<s.transition<<','
                <<s.logic<<','<<s.draw<<','<<s.wait<<','<<s.upload<<','<<s.readback<<','<<s.frame<<','<<s.other<<','
                <<s.quads<<','<<s.texture_switches<<','<<s.glyphs<<','<<s.uploads<<','<<s.upload_bytes<<','<<s.collections<<','<<s.gc_ns<<','<<s.gc_max_ns<<'\n';
        }
        output.close();if(!output)throw std::runtime_error("Video profile write failed");
        const auto heap=kairo::native_heap_payload();std::size_t font_bytes=0;
        kairo::visit_font_memory([&](const void*,std::size_t size,memory::Category){font_bytes+=size;});
        std::fprintf(stderr,"PLS_VIDEO_PROFILE frames=300 path=%s form=%d subform=%d scale=%d texture_bytes=%lu vram_bytes=%lu peak_sampled_texture_bytes=%lu peak_sampled_vram_bytes=%lu glyph_cache_bytes=%lu glyph_cache_entries=%lu font_cpu_ranges_bytes=%lu normal_busy=%llu normal_free=%llu linear_free=%lu vram_free=%lu\n",
            path_.string().c_str(),scene.form,scene.subform,scene.scale,static_cast<unsigned long>(gpu.texture_bytes),static_cast<unsigned long>(gpu.vram_bytes),static_cast<unsigned long>(gpu.peak_texture_bytes),static_cast<unsigned long>(gpu.peak_vram_bytes),static_cast<unsigned long>(gpu.glyph_cache_bytes),static_cast<unsigned long>(gpu.glyph_cache_entries),static_cast<unsigned long>(font_bytes),static_cast<unsigned long long>(heap.busy_bytes),static_cast<unsigned long long>(heap.free_bytes),static_cast<unsigned long>(linearSpaceFree()),static_cast<unsigned long>(vramSpaceFree()));
        std::fflush(stderr);active_=false;return true;
    }
    void capture(const kairo::Image& top,const kairo::Image& bottom){
        kairo::write_capture_png(path_.parent_path()/(path_.stem().string()+"-top.png"),top);
        kairo::write_capture_png(path_.parent_path()/(path_.stem().string()+"-bottom.png"),bottom);
        std::fprintf(stderr,"PLS_VIDEO_CAPTURE=PASS path=%s\n",path_.string().c_str());std::fflush(stderr);
        write_summary();
    }
    void write_summary(){
        std::ofstream out(summary_path_);if(!out)throw std::runtime_error("Cannot write video session");
        out<<"PLS_VIDEO_SESSION frames="<<frames_<<" max_stable_ns="<<max_stable_<<" stable_over_50ms="<<over_budget_
           <<" max_transition_ns="<<max_transition_<<" max_gc_pause_ns="<<max_pause_<<" gc_events="<<event_count_<<" dropped="<<dropped_<<'\n';
        for(std::size_t i=0;i<event_count_;++i){const auto& r=events_->at(i);
            out<<"PLS_VIDEO_GC frame="<<r.frame<<" trigger="<<int(r.event.trigger)<<" pause_ns="<<r.event.pause_ns<<" frame_ns="<<r.wall_ns<<" interaction="<<r.interaction<<" source="<<r.event.source<<'\n';
        }
        out.close();if(!out)throw std::runtime_error("Video session write failed");
    }
};
}
