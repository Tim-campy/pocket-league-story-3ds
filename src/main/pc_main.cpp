#include "game_entry.hpp"
#include "backend.hpp"
#include "asset_catalog.hpp"
#include "graphics.hpp"
#include "font.hpp"
#include "canvas.hpp"
#include "forms.hpp"
#include "system.hpp"
#include "sound.hpp"
#include "audio.hpp"
#include "services.hpp"
#include "storage.hpp"
#include "managed_collation.hpp"
#include "managed_thread.hpp"
#include "managed_exceptions.hpp"
#include "pc_metrics.hpp"
#include "diagnostic_keys.hpp"
#include "diagnostic_profile.hpp"
#include "capture.hpp"
#include "virtual_clock.hpp"
#include "../kairo/platform/sdl/text_input.hpp"
#include "../kairo/platform/sdl/globalization.hpp"
#include <exception>
#include <cstdlib>
#include <functional>
#include <filesystem>
#include <iostream>
#include <sstream>
namespace {
void capture_frame(const pls::cs::Ref<pls::kairo::Image>& display,std::uint64_t frame){
    const auto* folder=std::getenv("PLS_PC_CAPTURE_DIR");if(!folder||!*folder)return;
    const auto root=std::filesystem::u8path(folder);std::filesystem::create_directories(root);
    const auto path=root/("frame-"+std::to_string(frame)+".bmp");
    const auto& pixels=display->pixels();const auto w=display->GetWidth(),h=display->GetHeight();
    auto* surface=SDL_CreateRGBSurfaceWithFormatFrom(const_cast<std::uint8_t*>(pixels.data()),w,h,32,w*4,SDL_PIXELFORMAT_RGBA32);
    if(!surface)throw pls::cs::IOException(SDL_GetError());
    const auto status=SDL_SaveBMP(surface,path.u8string().c_str());SDL_FreeSurface(surface);
    if(status!=0)throw pls::cs::IOException(SDL_GetError());
    std::cerr<<"PLS_PC_CAPTURE_FRAME="<<frame<<'\n';
}
struct TextInputCleanup {
    pls::cs::Ref<pls::sdl::SimpleTextInput> field;
    ~TextInputCleanup()noexcept{try{field->Close();pls::kairo::install_text_input({});}catch(...) {}}
};
struct FinalMetrics {
    pls::pc::RunMetrics& metrics;
    std::function<pls::pc::PayloadSnapshot()> payload;
    const char*& reason;
    ~FinalMetrics()noexcept{
        if(!metrics.enabled())return;
        try{metrics.memory("final_before_teardown",payload());}catch(...){}
        metrics.finish(std::uncaught_exceptions()?"exception":reason);
    }
};
struct FinalProfile {~FinalProfile(){if(pls::diagnostic::enabled.load()){std::lock_guard<std::mutex>lock(pls::kairo::debug_log_mutex);pls::diagnostic::dump(std::cerr);}}};
}
int main(int argc,char** argv){
    if(argc!=2){std::cerr<<"Provide the authenticated local asset directory.\n";return 2;}
    pls::pc::RunMetrics metrics(pls::pc::metrics_enabled_from_environment(),std::cerr);
#if defined(PLS_DIAGNOSTIC_BUILD)
    pls::diagnostic::enabled=true;
    FinalProfile final_profile;
#endif
    try{
        pls::cs::GcMutatorScope host_mutator;
        pls::cs::install_mono_collation_character_data();
        // Historical Unity Mono's Windows locale stub returns en_US. This CLR
        // profile is independent of the OS locale exposed by JavaPlugin leaves.
        pls::cs::set_default_collation_culture({1033,{9},"en",false});
        pls::sdl::install_globalization_backend();
        pls::assets::Catalog assets(std::filesystem::u8path(argv[1]));pls::kairo::install_asset_catalog(&assets);
        pls::sdl::Backend backend(240,280,false);
        auto text_input=pls::cs::make_ref<pls::sdl::SimpleTextInput>();
        pls::kairo::install_text_input(text_input);
        TextInputCleanup text_input_cleanup{text_input};
        pls::sdl::AudioMixer audio;
        pls::kairo::configure_sound(&assets,&audio);
        std::string preferences;
#if defined(PLS_DIAGNOSTIC_BUILD)
        // A translation-gap experiment must never write the ordinary profile.
        const auto* private_preferences=std::getenv("PLS_DIAGNOSTIC_SAVE_ROOT");
        if(!private_preferences||!*private_preferences)throw pls::cs::InvalidOperationException("Diagnostic save isolation is not configured");
        preferences=private_preferences;
#else
        preferences=backend.preference_path();
#endif
        pls::services::OfflineServices services(std::filesystem::u8path(preferences));pls::services::install(&services);services.device_id();
        pls::kairo::configure_storage(std::filesystem::u8path(preferences),&assets);
        pls::kairo::configure_capture(std::filesystem::u8path(preferences)/"captures");
        // Host framebuffer corresponds to an already-owned display texture;
        // it must not enter the game's reloadable/generated image cache.
        auto display=pls::kairo::Image::FromRgba(240,280,std::vector<std::uint8_t>(240*280*4));
        auto canvas=pls::kairo::Canvas::GetInstance();
        canvas->host_display(display,pls::cs::make_ref<pls::kairo::Font>());
        const auto payload=[&]{
            pls::pc::PayloadSnapshot value;
            try{if(display->native_resident()){const auto& pixels=display->pixels();value.display_rgba_bytes=pixels.size();value.display_rgba_capacity_bytes=pixels.capacity();}}catch(...){}
            try{value.backend_texture_payload_bytes=backend.memory().texture_payload_bytes;}catch(...){}
            try{const auto m=audio.memory();value.audio_ring_bytes=m.ring_bytes;value.audio_scratch_bytes=m.scratch_bytes;value.audio_resampler_available_bytes=m.sdl_resampler_available_bytes;value.audio_device_callback_bytes=m.device_callback_bytes;value.audio_peak_resampler_available_bytes=m.peak_resampler_available_bytes;}catch(...){}
            try{const auto gc=pls::cs::gc_last_collection();value.gc_tracked=gc.tracked;value.gc_roots=gc.roots;value.gc_unreachable=gc.unreachable;value.gc_collected=gc.collected;}catch(...){}
            try{std::vector<pls::pc::MemoryRange>ranges;const auto visit=[&](const void*data,std::size_t bytes,pls::memory::Category category){ranges.push_back({data,bytes,category});};
                pls::cs::visit_managed_memory(visit,[&]{pls::kairo::visit_font_memory(visit);audio.memory_ranges(visit);value.known=pls::pc::sample_known_memory(ranges);});
            }catch(...){}
            return value;
        };
        const char* exit_reason="termination_requested";
        // Declared after its platform resources, so all payload accessors are
        // still valid on normal exit, early quit and exception unwinding.
        FinalMetrics final_metrics{metrics,payload,exit_reason};
        if(metrics.enabled())metrics.memory("before_main",payload());
        auto app=pls::game::create_application();
        if(!app)throw pls::cs::InvalidOperationException("Generated Main factory returned null");
        // Termination must be connected to the translated event/finish handlers.
        app->host_configure(240,280,pls::cs::String::from_utf8(preferences),{});
        app->host_orientation_reset([&backend]{backend.reset_default_orientation();});
        app->host_orientation_reader([&backend]{return backend.orientation();});
        app->host_orientation_writer([&backend](auto value){backend.set_orientation(value);});
        app->host_fullscreen_writer([&backend](bool enabled){backend.set_fullscreen(enabled);});
#if defined(PLS_DIAGNOSTIC_BUILD)
        // Diagnostic runs may request the deterministic clock; the normal game build never installs it.
        if(pls::kairo::virtual_clock::install_from_environment())std::cerr<<"PLS_PC_VIRTUAL_CLOCK="<<std::getenv("PLS_VIRTUAL_CLOCK")<<'\n';
#endif
        pls::game::configure_application(app);
        app->host_start();
        std::uint64_t presented_frames=0;
#if defined(PLS_DIAGNOSTIC_BUILD)
        std::vector<std::uint64_t>select_frames;
        if(const auto* value=std::getenv("PLS_PC_SELECT_FRAME")){std::istringstream input(value);std::string token;
            while(std::getline(input,token,',')){std::size_t used=0;const auto frame=std::stoull(token,&used);if(used!=token.size()||frame==0||frame>pls::pc::max_scripted_key_frame||(!select_frames.empty()&&frame<=select_frames.back()))throw pls::cs::ArgumentOutOfRangeException();select_frames.push_back(frame);}
        }
        const auto scripted_keys=pls::pc::parse_scripted_keys(std::getenv("PLS_PC_KEY_FRAMES")?std::getenv("PLS_PC_KEY_FRAMES"):"");
        std::uint64_t dismiss_until=0;
        const bool dismiss_unlabeled_only=std::getenv("PLS_PC_DISMISS_UNLABELED_ONLY")!=nullptr;
        // Optional anchor: scripted frames count from the first TitleForm
        // (original base id 1) frame, assigned this number. Boot worker
        // timing then cannot shift inputs or the virtual clock.
        std::uint64_t anchor_frame=0;bool anchored=true;
        if(const auto* value=std::getenv("PLS_PC_TITLE_ANCHOR")){std::size_t used=0;anchor_frame=std::stoull(value,&used);if(value[used]!='\0'||anchor_frame==0||anchor_frame>pls::pc::max_scripted_key_frame)throw pls::cs::ArgumentOutOfRangeException();anchored=false;}
        std::uint64_t script_frame=0;
        if(const auto* value=std::getenv("PLS_PC_DISMISS_POPUPS_UNTIL")){std::size_t used=0;dismiss_until=std::stoull(value,&used);if(value[used]!='\0'||dismiss_until<300||dismiss_until>pls::pc::max_scripted_key_frame)throw pls::cs::ArgumentOutOfRangeException();}
#endif
        while(!app->IsTermination()&&!pls::kairo::host_finish_requested.load()){
            pls::pc::FrameClock timing(metrics.enabled());
#if defined(PLS_DIAGNOSTIC_BUILD)
            pls::diagnostic::begin_frame();
#endif
            pls::cs::gc_safepoint();
            const auto frame_start=std::chrono::steady_clock::now();
#if defined(PLS_DIAGNOSTIC_BUILD)
            if(!anchored){auto manager=app->GetFormManager();auto top=manager?manager->GetTopForm():nullptr;
                if(top&&top->GetId()==1){anchored=true;script_frame=anchor_frame;pls::kairo::virtual_clock::rebase();std::lock_guard<std::mutex> lock(pls::kairo::debug_log_mutex);std::cerr<<"PLS_PC_TITLE_ANCHOR="<<presented_frames<<'\n';}}
            else if(anchor_frame)++script_frame;
            if(!anchor_frame)script_frame=presented_frames;
            const std::uint64_t input_frame=anchored?script_frame:0;
            if(dismiss_until&&input_frame>=300&&input_frame<=dismiss_until&&input_frame%18==0&&std::find(select_frames.begin(),select_frames.end(),input_frame)==select_frames.end()&&std::none_of(scripted_keys.begin(),scripted_keys.end(),[&](const auto&key){return key.frame==input_frame;})){
                auto manager=app->GetFormManager();auto form=manager?manager->GetTopForm():nullptr;
                // SubForm's original base ID is 4. No generated fields/flags
                // are changed: these are ordinary source Canvas button clicks.
                if(form){auto label=form->GetRightSoftLabel();auto key=pls::pc::popup_dismiss_key(form->GetId(),!label.is_null()&&label.length()!=0,dismiss_unlabeled_only);if(!key.empty()){canvas->KeyClick(key=="SOFT2"?pls::kairo::Canvas::KEY_SOFT2:pls::kairo::Canvas::KEY_SELECT);std::lock_guard<std::mutex>lock(pls::kairo::debug_log_mutex);std::cerr<<"PLS_PC_DISMISS_POPUP_FRAME="<<input_frame<<':'<<key<<'\n';}}
            }
            if(std::find(select_frames.begin(),select_frames.end(),input_frame)!=select_frames.end()){canvas->KeyClick(pls::kairo::Canvas::KEY_SELECT);std::lock_guard<std::mutex> lock(pls::kairo::debug_log_mutex);std::cerr<<"PLS_PC_SCRIPTED_SELECT_FRAME="<<input_frame<<'\n';}
            for(const auto& key:scripted_keys)if(key.frame==input_frame){
                const auto code=key.name=="SELECT"?pls::kairo::Canvas::KEY_SELECT:key.name=="UP"?pls::kairo::Canvas::KEY_UP:key.name=="DOWN"?pls::kairo::Canvas::KEY_DOWN:key.name=="LEFT"?pls::kairo::Canvas::KEY_LEFT:key.name=="RIGHT"?pls::kairo::Canvas::KEY_RIGHT:key.name=="SOFT1"?pls::kairo::Canvas::KEY_SOFT1:pls::kairo::Canvas::KEY_SOFT2;
                canvas->KeyClick(code);std::lock_guard<std::mutex> lock(pls::kairo::debug_log_mutex);std::cerr<<"PLS_PC_SCRIPTED_KEY_FRAME="<<key.frame<<':'<<key.name<<'\n';
            }
#endif
            timing.mark(pls::pc::FrameStage::gc);
            for(const auto& event:backend.events()){
                if(event.kind==pls::platform::Input::Kind::quit){exit_reason="window_quit";app->host_stop();return 0;}
                if(text_input->Handle(event))continue;
                canvas->host_event(event);
            }
            timing.mark(pls::pc::FrameStage::input);
            app->host_update();
            pls::kairo::Offscreen::RenderAll();
#if defined(PLS_DIAGNOSTIC_BUILD)
            if(!pls::kairo::Offscreen::LastRenderError().empty())throw std::runtime_error("Offscreen render failed: "+pls::kairo::Offscreen::LastRenderError());
#endif
            timing.mark(pls::pc::FrameStage::update);
            audio.pump();
            timing.mark(pls::pc::FrameStage::audio);
            app->host_draw();
            pls::kairo::Offscreen::EndFrame();
            pls::cs::gc_frame_end();pls::kairo::virtual_clock::end_frame();assets.release_retained();
#if defined(PLS_DIAGNOSTIC_BUILD)
            // Calibration only: cumulative clock reads, paired with PLS_FRAME_PROFILE.
            if(pls::kairo::virtual_clock::observing()||pls::kairo::virtual_clock::active())std::cerr<<"PLS_CLOCK_READS="<<pls::kairo::virtual_clock::reads()<<','<<pls::kairo::virtual_clock::thread_reads()<<'\n';
#endif
            text_input->Draw(display);
            pls::kairo::finish_captures(display);
            timing.mark(pls::pc::FrameStage::game_draw);
            {
            PLS_PROFILE_AREA(composition);
            auto* texture=backend.upload_rgba8(240,280,display->pixels());
            if(metrics.enabled())metrics.observe_texture_payload(backend.memory().texture_payload_bytes);
            timing.mark(pls::pc::FrameStage::upload);
            pls::cs::run_finally([&]{backend.draw(texture,{0,0,240,280},{0,0,240,280},false);timing.mark(pls::pc::FrameStage::render);backend.present();timing.mark(pls::pc::FrameStage::present);},[&]{backend.release(texture);timing.mark(pls::pc::FrameStage::release);});
            }
#if defined(PLS_DIAGNOSTIC_BUILD)
            {auto profile=pls::diagnostic::end_frame();std::lock_guard<std::mutex>lock(pls::kairo::debug_log_mutex);std::cerr<<"PLS_FRAME_PROFILE={\"frame\":"<<(presented_frames+1)<<",\"ns\":["<<profile[0]<<','<<profile[1]<<','<<profile[2]<<','<<profile[3]<<"]}\n";}
#endif
            pls::kairo::UnityApplication::pace(frame_start);
            const auto sample=timing.finish();
            if(metrics.frame(sample))metrics.memory("first_presented_frame",payload());
            ++presented_frames;
#if defined(PLS_DIAGNOSTIC_BUILD)
            if(presented_frames%60==0){std::lock_guard<std::mutex>lock(pls::kairo::debug_log_mutex);pls::diagnostic::dump(std::cerr);}
#endif
            if(presented_frames==1||(presented_frames<=pls::pc::max_scripted_key_frame&&presented_frames%60==0))capture_frame(display,presented_frames);
#if defined(PLS_DIAGNOSTIC_BUILD)
            // Numeric-only late window, separate from the accumulator's first
            // 600 frames. A screenshot must establish what screen it measures.
            if(metrics.enabled()&&presented_frames>=661&&presented_frames<=1200){
                std::ostringstream line;line<<"PLS_PC_METRICS={\"event\":\"diagnostic_frame_sample\",\"completed_presented_frame\":"<<presented_frames<<",\"stage_nanoseconds\":[";
                for(std::size_t i=0;i<sample.nanoseconds.size();++i){if(i)line<<',';line<<sample.nanoseconds[i];}line<<"]}\n";
                std::lock_guard<std::mutex>lock(pls::kairo::debug_log_mutex);std::cerr<<line.str();
            }
            if(metrics.enabled()&&presented_frames==900)metrics.memory("after_900_presented_frames",payload());
#endif
            if(metrics.enabled()&&presented_frames==60)metrics.memory("after_60_presented_frames",payload());
            if(metrics.enabled()&&(presented_frames==60||presented_frames==120||presented_frames==300))metrics.checkpoint("running_checkpoint");
        }
        app->host_stop();return 0;
    }catch(const pls::cs::Exception& error){if(!metrics.finished()){metrics.memory("failure_after_setup_unwind",{});metrics.finish("exception_before_metrics_guard");}std::cerr<<pls::cs::capture_exception(error)->ToString().utf8()<<"\n";return 1;}
     catch(const std::exception& error){if(!metrics.finished()){metrics.memory("failure_after_setup_unwind",{});metrics.finish("exception_before_metrics_guard");}std::cerr<<"Native platform exception: "<<error.what()<<"\n";return 1;}
}
