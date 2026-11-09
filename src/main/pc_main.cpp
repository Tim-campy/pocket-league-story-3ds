#include "game_entry.hpp"
#include "backend.hpp"
#include "asset_catalog.hpp"
#include "graphics.hpp"
#include "font.hpp"
#include "canvas.hpp"
#include "system.hpp"
#include "sound.hpp"
#include "audio.hpp"
#include "services.hpp"
#include "storage.hpp"
#include "managed_collation.hpp"
#include "managed_thread.hpp"
#include "pc_metrics.hpp"
#include "../kairo/platform/sdl/globalization.hpp"
#include <exception>
#include <cstdlib>
#include <functional>
#include <iostream>
namespace {
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
}
int main(int argc,char** argv){
    if(argc!=2){std::cerr<<"Provide the authenticated local asset directory.\n";return 2;}
    pls::pc::RunMetrics metrics(pls::pc::metrics_enabled_from_environment(),std::cerr);
    try{
        pls::cs::GcMutatorScope host_mutator;
        pls::cs::install_mono_collation_character_data();
        // Historical Unity Mono's Windows locale stub returns en_US. This CLR
        // profile is independent of the OS locale exposed by JavaPlugin leaves.
        pls::cs::set_default_collation_culture({1033,{9},"en",false});
        pls::sdl::install_globalization_backend();
        pls::assets::Catalog assets(std::filesystem::u8path(argv[1]));pls::kairo::install_asset_catalog(&assets);
        pls::sdl::Backend backend(240,280,false);
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
        pls::game::configure_application(app);
        app->host_start();
        while(!app->IsTermination()&&!pls::kairo::host_finish_requested.load()){
            pls::pc::FrameClock timing(metrics.enabled());
            pls::cs::gc_safepoint();
            const auto frame_start=std::chrono::steady_clock::now();
            timing.mark(pls::pc::FrameStage::gc);
            for(const auto& event:backend.events()){
                if(event.kind==pls::platform::Input::Kind::quit){exit_reason="window_quit";app->host_stop();return 0;}
                canvas->host_event(event);
            }
            timing.mark(pls::pc::FrameStage::input);
            app->host_update();
            timing.mark(pls::pc::FrameStage::update);
            audio.pump();
            timing.mark(pls::pc::FrameStage::audio);
            app->host_draw();
            timing.mark(pls::pc::FrameStage::game_draw);
            auto* texture=backend.upload_rgba8(240,280,display->pixels());
            if(metrics.enabled())metrics.observe_texture_payload(backend.memory().texture_payload_bytes);
            timing.mark(pls::pc::FrameStage::upload);
            pls::cs::run_finally([&]{backend.draw(texture,{0,0,240,280},{0,0,240,280},false);timing.mark(pls::pc::FrameStage::render);backend.present();timing.mark(pls::pc::FrameStage::present);},[&]{backend.release(texture);timing.mark(pls::pc::FrameStage::release);});
            pls::kairo::UnityApplication::pace(frame_start);
            if(metrics.frame(timing.finish()))metrics.memory("first_presented_frame",payload());
        }
        app->host_stop();return 0;
    }catch(const pls::cs::Exception& error){if(!metrics.finished()){metrics.memory("failure_after_setup_unwind",{});metrics.finish("exception_before_metrics_guard");}std::cerr<<error.type_name()<<": "<<error.what()<<"\n";return 1;}
     catch(const std::exception& error){if(!metrics.finished()){metrics.memory("failure_after_setup_unwind",{});metrics.finish("exception_before_metrics_guard");}std::cerr<<"Native platform exception: "<<error.what()<<"\n";return 1;}
}
