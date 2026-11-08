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
#include "../kairo/platform/sdl/globalization.hpp"
#include <iostream>
int main(int argc,char** argv){
    if(argc!=2){std::cerr<<"Provide the authenticated local asset directory.\n";return 2;}
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
        auto preferences=backend.preference_path();
        pls::services::OfflineServices services(std::filesystem::u8path(preferences));pls::services::install(&services);services.device_id();
        pls::kairo::configure_storage(std::filesystem::u8path(preferences),&assets);
        // Host framebuffer corresponds to an already-owned display texture;
        // it must not enter the game's reloadable/generated image cache.
        auto display=pls::kairo::Image::FromRgba(240,280,std::vector<std::uint8_t>(240*280*4));
        auto canvas=pls::kairo::Canvas::GetInstance();
        canvas->host_display(display,pls::cs::make_ref<pls::kairo::Font>());
        auto app=pls::game::create_application();
        if(!app)throw pls::cs::InvalidOperationException("Generated Main factory returned null");
        // Termination must be connected to the translated event/finish handlers.
        app->host_configure(240,280,pls::cs::String::from_utf8(preferences),{});app->host_start();
        while(!app->IsTermination()&&!pls::kairo::host_finish_requested.load()){
            pls::cs::gc_safepoint();
            const auto frame_start=std::chrono::steady_clock::now();
            for(const auto& event:backend.events()){
                if(event.kind==pls::platform::Input::Kind::quit){app->host_stop();return 0;}
                canvas->host_event(event);
            }
            app->host_update();
            audio.pump();
            app->host_draw();
            auto* texture=backend.upload_rgba8(240,280,display->pixels());
            pls::cs::run_finally([&]{backend.draw(texture,{0,0,240,280},{0,0,240,280},false);backend.present();},[&]{backend.release(texture);});
            pls::kairo::UnityApplication::pace(frame_start);
        }
        app->host_stop();return 0;
    }catch(const pls::cs::Exception& error){std::cerr<<error.type_name()<<": "<<error.what()<<"\n";return 1;}
     catch(const std::exception& error){std::cerr<<"Native platform exception: "<<error.what()<<"\n";return 1;}
}
