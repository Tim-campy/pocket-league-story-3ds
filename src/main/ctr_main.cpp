#include "game_entry.hpp"
#include "label_touch.hpp"
#include "main.AppData.hpp"
#include "kairo.unity.util.Property.hpp"
#include "asset_catalog.hpp"
#include "canvas_back.hpp"
#include "canvas.hpp"
#include "font.hpp"
#include "graphics.hpp"
#include "mesh.hpp"
#include "services.hpp"
#include "storage.hpp"
#include "capture.hpp"
#include "runtime_memory.hpp"
#include "text_input.hpp"
#include "managed_collation.hpp"
#include "port_dialog.hpp"
#include "kairo/platform/null/sound.hpp"
#include "kairo/platform/sdl/globalization.hpp"
#include "kairo/platform/ctr/ctr_gpu.hpp"
#include "kairo/platform/ctr/ctr_input.hpp"
#include "circle_pad.hpp"
#include "screen_layout.hpp"
#include "surface.SurfaceManager.hpp"
#include "surface.GamePad.hpp"
#include "form.GameForm.hpp"
#include "game.Camera.hpp"
#include "form.SubForm.hpp"
#include "form.SoccerForm.hpp"
#include "game.GameManager.hpp"
#include "ctr_frame_profile.hpp"
#include "resource_load_trace.hpp"
#include <3ds.h>
#include <array>
#include <algorithm>
#include <chrono>
#include <cstdio>
#include <filesystem>
#include <fstream>

extern "C" { u32 __ctru_linear_heap_size=24*1024*1024; extern u32 __ctru_heap_size; }
namespace {
using namespace pls;
using Clock=std::chrono::steady_clock;
std::uint64_t elapsed(Clock::time_point start){return std::chrono::duration_cast<std::chrono::nanoseconds>(Clock::now()-start).count();}
ctr::FrameScene frame_scene(kairo::FormManagerBase* manager){
    ctr::FrameScene scene;
    const auto form=manager?manager->GetTopForm():nullptr;
    scene.form=form?form->GetId():-1;
    if(auto* sub=dynamic_cast<game::form::SubForm*>(form))scene.subform=cs::nonnull(sub)->type_;
    if(auto* map=dynamic_cast<game::form::GameForm*>(form)){
        scene.state=cs::nonnull(map)->state_;scene.scale=cs::nonnull(map)->scale_;
        const auto position=game::game::Camera::camera_spos();
        if(!position.is_null()&&position.length()>=2){scene.camera_x=position[0];scene.camera_y=position[1];}
    }
    if(auto* match=dynamic_cast<game::form::SoccerForm*>(form)){
        scene.state=cs::nonnull(match)->state_;
        const auto match_manager=game::game::GameManager::instance();
        if(match_manager){scene.match_state=cs::nonnull(match_manager)->state_;scene.possession=cs::nonnull(match_manager)->gameState_;}
    }
    const auto pad=kairo::read_circle_pad();scene.pad_x=pad.x;scene.pad_y=pad.y;
    return scene;
}
class Text final:public kairo::TextInputPresenter {
public:void Begin(cs::String,std::int32_t,std::int32_t)override{}bool Blocking()const override{return false;}
};
class Screens final:public kairo::DialogPresenter {
public:
    ctr::Gpu& gpu;
    cs::Ref<kairo::Image> top{},labels{},bottom{};
    cs::Ref<kairo::Graphics> composition{};
    std::uint64_t modal_epoch{};
    explicit Screens(ctr::Gpu& backend):gpu(backend){
        platform::configure_separate_screens(true);
        top=kairo::Image::FromRgba(400,240,std::vector<std::uint8_t>(400*240*4));
        labels=kairo::Image::FromRgba(320,240,std::vector<std::uint8_t>(320*240*4));
        bottom=kairo::Image::FromRgba(320,240,std::vector<std::uint8_t>(320*240*4));
        composition=cs::make_ref<kairo::Graphics>(bottom,true);
    }
    void trace_edges(const cs::EdgeVisitor& visit)const override{
        cs::trace_value(top,visit);cs::trace_value(labels,visit);cs::trace_value(bottom,visit);cs::trace_value(composition,visit);
    }
    void install(){
        kairo::Graphics::surface_screen=[](const void* identity){
            const auto pad=static_cast<game::kairo::unity::surface::SurfaceBase*>(game::surface::SurfaceManager::gpad_());
            return identity&&identity==pad?platform::Screen::bottom:platform::Screen::top;
        };
        kairo::Graphics::screen_target_hook=[this](kairo::Graphics& g,platform::Screen screen,const void* surface){
            if(g.target()!=top&&g.target()!=labels&&g.target()!=bottom)return;
            g.retarget(screen==platform::Screen::top?top:surface?labels:bottom);
        };
    }
    void compose(){
        gpu.clear(*bottom,0x181c24ff);composition->ResetRender();
        composition->DrawScaledImage(labels,0,0,320,240,0,0,320,240);
    }
    std::int32_t Present(const kairo::DialogRequest& request)override{
        ++modal_epoch;kairo::detail::publish_circle_pad({});gpu.end_frame();
        kairo::PortDialog dialog(request);int pressed=-1,touch_x=0,touch_y=0;
        kairo::MenuStickRepeat menu_stick;
        const auto hit=[&](int x,int y){
            for(std::size_t i=0;i<request.buttons.size();++i){const auto box=dialog.ButtonBox(i,320,240);if(x>=box.x&&x<box.x+box.w&&y>=box.y&&y<box.y+box.h)return int(i);}
            return -1;
        };
        cs::run_finally([&]{
            while(!dialog.Done()){
                const auto start=Clock::now();
                if(!aptMainLoop()){dialog.Handle(kairo::PortDialog::Command::cancel);break;}
                hidScanInput();const auto down=hidKeysDown(),up=hidKeysUp();
                using Command=kairo::PortDialog::Command;
                if(down&KEY_B)dialog.Handle(Command::cancel);
                else if(down&KEY_A)dialog.Handle(Command::confirm);
                else if(down&(KEY_DLEFT|KEY_DUP))dialog.Handle(Command::left);
                else if(down&(KEY_DRIGHT|KEY_DDOWN))dialog.Handle(Command::right);
                circlePosition pad{};hidCircleRead(&pad);
                const auto axis=[](int raw){return kairo::normalize_circle_pad_axis(std::clamp(raw,-154,154)*kairo::circle_pad_max/154);};
                const int analog_key=menu_stick.update({axis(pad.dx),axis(-int(pad.dy))});
                if(analog_key&&!dialog.Done())dialog.Handle(analog_key==65536||analog_key==131072?Command::left:Command::right);
                if(hidKeysHeld()&KEY_TOUCH){touchPosition point{};hidTouchRead(&point);touch_x=point.px;touch_y=point.py;}
                if(down&KEY_TOUCH){pressed=hit(touch_x,touch_y);if(pressed>=0&&!dialog.Done())while(dialog.Selected()!=pressed)dialog.Handle(Command::right);}
                if(up&KEY_TOUCH){if(pressed>=0&&hit(touch_x,touch_y)==pressed)dialog.Handle(Command::confirm);pressed=-1;}
                gpu.begin_frame();gpu.clear(*bottom,0x181c24ff);dialog.Draw(bottom);gpu.present(*top,*bottom);gpu.end_frame();
                {cs::GcNativeBlockingScope idle;kairo::UnityApplication::pace(start);}
            }
        },[&]{gpu.begin_frame();kairo::Canvas::GetInstance()->ClearKeyBuffer();});
        return dialog.Result();
    }
};
void storage_check(assets::Catalog& assets){
    // Opt-in diagnostic on a private SD fixture, never on ordinary device boots.
    const auto entries=assets.entries(assets::Kind::image);
    if(entries.empty()||assets.path(*entries.front()).native().find("romfs:/")!=0)
        throw std::runtime_error("Storage check did not use explicit ROMFS");
    assets.verify(*entries.front());
    const auto asset=assets.read(*entries.front());
    if(asset.size()!=entries.front()->size)throw std::runtime_error("ROMFS read extent mismatch");
    auto store=kairo::RecordStore::OpenRecordStore(0);
    if(store->ExistRecord(2))throw std::runtime_error("Storage fixture must have an empty destination record");
    const auto original=store->ReadRecord(3);
    auto data=cs::nonnull(game::main::AppData::GetInstance());
    data->LoadGame(0,true);
    const auto name=cs::nonnull(data->save_)->strs[0];
    const auto money=cs::nonnull(data->save_)->lngs[0];
    game::main::AppData::currentSaveSlot_()=1;
    data->SaveGame(false);
    const auto saved=store->ReadRecord(2);
    if(!saved.length())throw std::runtime_error("New save is empty");
    data->LoadGame(1,false);
    if(cs::nonnull(data->save_)->strs[0]!=name||cs::nonnull(data->save_)->lngs[0]!=money)
        throw std::runtime_error("New save did not restore game values");
    const auto retained=store->ReadRecord(3);
    if(retained.length()!=original.length())throw std::runtime_error("Source save changed");
    for(int i=0;i<original.length();++i)if(original.at(i)!=retained.at(i))throw std::runtime_error("Source save changed");
    constexpr int volume=3; // Existing SYSSAVEI_BGM_LEVEL, not a new setting.
    const int expected=cs::nonnull(data->sysSave_)->ints[volume]==0?1:0;
    cs::nonnull(data->sysSave_)->ints[volume]=expected;data->SaveSystem();
    cs::nonnull(data->sysSave_)->ints[volume]=-1;
    if(!data->LoadSystem()||cs::nonnull(data->sysSave_)->ints[volume]!=expected)
        throw std::runtime_error("Configuration did not round-trip on SD");
    std::fprintf(stderr,"PLS_VIDEO_STORAGE=PASS romfs_bytes=%u source_record=3 source_bytes=%d new_record=2 new_bytes=%d config_record=0 source_unchanged=1\n",unsigned(asset.size()),original.length(),saved.length());
    std::fflush(stderr);
}

void gpu_check(ctr::Gpu& gpu){
    const auto stage=[](const char* name){std::fprintf(stderr,"PLS_VIDEO_SELF_CHECK_STAGE %s\n",name);std::fflush(stderr);};
    stage("allocate");gpu.trace_boot(true);
    auto source=kairo::Image::FromRgba(2,2,{255,0,0,255,0,255,0,255,0,0,255,255,255,255,255,255});
    // Separate fill, rasterization and sampling before the original combined test.
    for(const int edge:{64,8}){
        const auto probe_stage=[&](const char* operation){std::fprintf(stderr,"PLS_VIDEO_GPU_PROBE edge=%d %s\n",edge,operation);std::fflush(stderr);};
        auto probe=kairo::Image::FromRgba(edge,edge,std::vector<std::uint8_t>(edge*edge*4));
        auto paint=cs::make_ref<kairo::Graphics>(probe,true);
        probe_stage("clear.begin");gpu.begin_frame();gpu.clear(*probe,0x000000ff);
        const auto& cleared=probe->pixels();
        for(std::size_t i=0;i<cleared.size();++i)if(cleared[i]!=(i%4==3?255:0))throw std::runtime_error("GPU probe clear mismatch");
        probe_stage("clear.pass");
        probe_stage("solid.begin");paint->SetColor(255,0,0,255);paint->FillRect(3,2,2,2);
        const auto& solid=probe->pixels();const auto pixel=(std::size_t(2)*edge+3)*4;
        if(solid[pixel]!=255||solid[pixel+1]||solid[pixel+2]||solid[pixel+3]!=255)throw std::runtime_error("GPU probe solid mismatch");
        probe_stage("solid.pass");
        probe_stage("texture.begin");paint->SetColor(255,255,255,255);paint->SetClip(3,2,2,2);paint->DrawScaledImage(source,2,1,4,4,0,0,2,2);
        const auto& sampled=probe->pixels();
        const std::array<std::array<unsigned,4>,4> colors{{{255,0,0,255},{0,255,0,255},{0,0,255,255},{255,255,255,255}}};
        for(int y=0;y<2;++y)for(int x=0;x<2;++x)for(int c=0;c<4;++c)
            if(sampled[((y+2)*edge+x+3)*4+c]!=colors[y*2+x][c])throw std::runtime_error("GPU probe texture mismatch");
        probe_stage("texture.pass");probe->Dispose();gpu.end_frame();
        probe_stage("dispose.pass");
    }
    auto target=kairo::Image::FromRgba(8,8,std::vector<std::uint8_t>(8*8*4));
    auto g=cs::make_ref<kairo::Graphics>(target,true);
    stage("clear");gpu.begin_frame();gpu.clear(*target,0x000000ff);
    stage("draw.clip");
    g->SetClip(3,2,2,2);g->DrawScaledImage(source,2,1,4,4,0,0,2,2);
    stage("read.clip");const auto& pixels=target->pixels();
    stage("verify.clip");
    for(int y=0;y<8;++y)for(int x=0;x<8;++x){
        std::array<unsigned,4> expected{0,0,0,255};
        if(y==2&&x==3)expected={255,0,0,255};
        if(y==2&&x==4)expected={0,255,0,255};
        if(y==3&&x==3)expected={0,0,255,255};
        if(y==3&&x==4)expected={255,255,255,255};
        for(int c=0;c<4;++c)if(pixels[(y*8+x)*4+c]!=expected[c])throw std::runtime_error("GPU self-check color/clip/readback mismatch at "+std::to_string(x)+","+std::to_string(y)+","+std::to_string(c)+" got "+std::to_string(pixels[(y*8+x)*4+c]));
    }
    stage("copy.target");auto copied=kairo::Image::FromRgba(8,8,std::vector<std::uint8_t>(8*8*4));
    auto copy_graphics=cs::make_ref<kairo::Graphics>(copied,true);
    copy_graphics->DrawImage(target,0,0);
    if(copied->pixels()!=pixels)throw std::runtime_error("GPU self-check render target sampling mismatch");
    copied->Dispose();
    stage("alpha");g->ClearClip();g->SetColor(255,0,0,128);g->FillRect(0,0,1,1);
    const auto& blended=target->pixels();
    if(blended[0]<127||blended[0]>129||blended[1]||blended[2]||blended[3]!=255)throw std::runtime_error("GPU self-check alpha mismatch");
    stage("grayscale");g->SetBlendMode(3);g->DrawImage(source,0,0);
    const auto& grey=target->pixels();
    for(int y=0;y<2;++y)for(int x=0;x<2;++x)for(int c=0;c<3;++c){
        const int expected=x==1&&y==1?255:85;
        if(std::abs(int(grey[(y*8+x)*4+c])-expected)>2)throw std::runtime_error("GPU self-check grayscale mismatch");
    }
    stage("depth");auto back=kairo::Image::FromRgba(1,1,{255,0,0,255});
    auto front=kairo::Image::FromRgba(1,1,{0,0,255,255});
    auto recorded=cs::make_ref<kairo::Graphics>(target,false);
    auto mesh=recorded->GetMeshManager();mesh->capture(true);recorded->ResetRender();
    recorded->DrawImage(back,0,0);recorded->DrawImage(front,0,0);
    gpu.clear(*target,0x000000ff);
    kairo::MeshManager::Render(target,mesh->commands(),{});
    const auto& layered=target->pixels();
    if(layered[0]||layered[1]||layered[2]!=255||layered[3]!=255)throw std::runtime_error("GPU self-check mesh depth mismatch");
    stage("label-cache");g->SetBlendMode(0);g->SetColor(255,0,0,255);
    gpu.begin_label_frame(*target,0x000000ff,true);g->FillRect(0,0,1,1);
    if(target->pixels()[0]!=255)throw std::runtime_error("GPU label cache initial draw mismatch");
    const auto cache_before=gpu.profile();
    gpu.begin_label_frame(*target,0x000000ff,true);g->FillRect(0,0,1,1);
    if(target->pixels()[0]!=255)throw std::runtime_error("GPU label cache retained pixel mismatch");
    const auto cache_after=gpu.profile();
    if(cache_after.label_cache_hits!=cache_before.label_cache_hits+1||cache_after.copies!=cache_before.copies)
        throw std::runtime_error("GPU label cache repeated an unchanged copy");
    gpu.begin_label_frame(*target,0x000000ff,true);g->FillRect(1,0,1,1);
    const auto& changed_labels=target->pixels();
    if(changed_labels[0]!=0||changed_labels[4]!=255)
        throw std::runtime_error("GPU label cache invalidation mismatch");
    stage("dispose");back->Dispose();front->Dispose();
    source->Dispose();target->Dispose();gpu.end_frame();
    gpu.trace_boot(false);
    std::fprintf(stderr,"PLS_VIDEO_SELF_CHECK=PASS pixels=64 alpha=1 deferred_release=1 label_cache=1\n");std::fflush(stderr);
}
}
int main(){
    const auto boot_start=Clock::now();
    auto boot_stage_start=boot_start;
    std::array<std::uint64_t,7> boot_stages{};
    const auto boot_stage=[&](std::size_t index){boot_stages.at(index)=elapsed(boot_stage_start);boot_stage_start=Clock::now();};
    std::uint64_t boot_upload_ns=0,boot_wait_ns=0,boot_frames=0,boot_logic_ns=0,boot_draw_ns=0,boot_pacing_ns=0;
    osSetSpeedupEnable(true);
    std::filesystem::create_directories("sdmc:/pls-video");
    if(!std::freopen("sdmc:/pls-video/stdout.log","w",stdout)||!std::freopen("sdmc:/pls-video/stderr.log","w",stderr))return 2;
    const bool load_meter=!std::filesystem::exists("sdmc:/pls-video/boot-trace-off.flag");
    pls::diagnostic::resource_event_list.store(false,std::memory_order_relaxed);
    pls::diagnostic::enable_resource_events(load_meter);
    boot_stage(0);
    try{
        if(R_FAILED(romfsInit()))throw std::runtime_error("ROMFS initialization failed");
        pls::cs::GcMutatorScope mutator;
        pls::cs::install_mono_collation_character_data();pls::cs::set_default_collation_culture({1033,{9},"en",false});
        pls::sdl::install_globalization_backend();
        boot_stage(1);
        // The SD override is an opt-in diagnostic comparison, never a cwd change.
        const char* asset_root=std::filesystem::exists("/pls-video/use-sd-assets.flag")?"/pls-video/assets":"romfs:/";
        pls::assets::Catalog assets(asset_root,pls::assets::ReadValidation::PreparedCatalog);pls::kairo::install_asset_catalog(&assets);
        std::fprintf(stderr,"PLS_VIDEO_ASSET_ROOT=%s\n",asset_root);std::fflush(stderr);
        boot_stage(2);
        const std::filesystem::path preferences="/pls-video/preferences";
        pls::services::OfflineServices services(preferences);pls::services::install(&services);services.device_id();
        pls::kairo::configure_storage(preferences,&assets);pls::kairo::configure_capture("/pls-video/captures");
        auto sound=pls::cs::make_ref<pls::null_backend::Sound>();pls::kairo::configure_sound(&assets,sound);
        pls::kairo::install_text_input(pls::cs::make_ref<Text>());
        boot_stage(3);
        pls::ctr::Gpu gpu;pls::platform::gpu_drawing=&gpu;boot_stage(4);
        bool new_model=false;const auto model_result=APT_CheckNew3DS(&new_model);
        std::fprintf(stderr,"PLS_VIDEO_MODEL new3ds=%d result=%ld normal_heap_reserved=%lu linear_heap_reserved=%lu region_capacity=%lu\n",int(new_model),long(model_result),static_cast<unsigned long>(__ctru_heap_size),static_cast<unsigned long>(__ctru_linear_heap_size),static_cast<unsigned long>(osGetMemRegionSize(MEMREGION_APPLICATION)));std::fflush(stderr);
        try{
            gpu_check(gpu);boot_stage(5);
            auto screens=pls::cs::make_ref<Screens>(gpu);screens->install();
            pls::kairo::install_dialog_service(screens,pls::cs::Delegate<pls::cs::Array<pls::cs::String>(std::int32_t)>::from_static("port-dialog-labels",[](std::int32_t type){
                return type<=2?pls::cs::Array<pls::cs::String>::from({pls::cs::String(u"OK")})
                    :type==3?pls::cs::Array<pls::cs::String>::from({pls::cs::String(u"Yes"),pls::cs::String(u"No")})
                    :pls::cs::Array<pls::cs::String>::from({pls::cs::String(u"Yes"),pls::cs::String(u"No"),pls::cs::String(u"Cancel")});}));
            auto canvas=pls::kairo::Canvas::GetInstance();pls::kairo::install_canvas_back_key();canvas->host_display(screens->top,pls::cs::make_ref<pls::kairo::Font>());
            auto app=pls::game::create_application();app->host_configure(400,240,pls::cs::String::from_utf8(preferences.u8string()),[]{});
            pls::kairo::WindowOrientation orientation=pls::kairo::WindowOrientation::landscape_left;
            app->host_orientation_reset([&]{orientation=pls::kairo::WindowOrientation::landscape_left;});
            app->host_orientation_reader([&]{return orientation==pls::kairo::WindowOrientation::auto_rotation?pls::kairo::WindowOrientation::landscape_left:orientation;});
            app->host_orientation_writer([&](auto value){orientation=value;});app->host_fullscreen_writer([](bool){});
            pls::game::configure_application(app);
            gpu.begin_frame();app->host_start();gpu.end_frame();
            const auto app_init_gpu=gpu.profile();
            ctr::FrameProfile profile(!std::filesystem::exists("sdmc:/pls-video/profile-minimal.flag"));
            const bool storage_check_requested=std::filesystem::exists("sdmc:/pls-video/storage-check.flag");
            int storage_check_countdown=360;
            const bool cache_labels=!std::filesystem::exists("sdmc:/pls-video/labels-no-cache.flag");
            const bool capture_check=std::filesystem::exists("sdmc:/pls-video/capture-check.flag");
            bool title_seen=false;pls::ctr::Input input;
            boot_stage(6);
            while(aptMainLoop()&&!app->IsTermination()){
                const auto start=Clock::now();
                const bool boot_frame=!title_seen;
                const auto scene_before=frame_scene(app->GetFormManager());
                const auto gc_before=cs::tracing_heap().statistics_and_reset_pause_peak();
                gpu.begin_frame();
                const auto modal_epoch=screens->modal_epoch;
                input.poll(*canvas,app->GetFormManager(),*screens->labels,pls::host::send_label_touch);
                const bool profile_requested=(hidKeysDown()&KEY_SELECT)!=0;
                const auto logic_start=Clock::now();const auto logic_wait_start=gpu.wait_time();app->host_update();const auto logic_wall=elapsed(logic_start);
                const auto draw_wait_start=gpu.wait_time();
                const auto logic_wait=draw_wait_start>=logic_wait_start?draw_wait_start-logic_wait_start:0;
                const auto logic=logic_wall>logic_wait?logic_wall-logic_wait:0;
                const auto draw_start=Clock::now();
                pls::kairo::Offscreen::RenderAll();
                if(!pls::kairo::Offscreen::LastRenderError().empty())throw std::runtime_error(pls::kairo::Offscreen::LastRenderError());
                gpu.begin_label_frame(*screens->labels,0,cache_labels);app->host_draw();pls::kairo::Offscreen::EndFrame();
                screens->compose();gpu.present(*screens->top,*screens->bottom);gpu.end_frame();
                const auto draw=elapsed(draw_start);const auto metrics=gpu.profile();
                pls::cs::gc_frame_end();assets.age_retained();
                auto manager=app->GetFormManager();auto form=manager?manager->GetTopForm():nullptr;
                const bool title=form&&form->GetId()==1&&modal_epoch==screens->modal_epoch;
                if(!title_seen){
                    ++boot_frames;boot_upload_ns+=metrics.upload_ns;boot_wait_ns+=metrics.wait_ns;
                    boot_logic_ns+=logic_wall;boot_draw_ns+=draw;
                    if(title){
                        const auto title_ns=elapsed(boot_start),loading_ns=elapsed(boot_stage_start);
                        title_seen=true;
                        std::fprintf(stderr,"PLS_VIDEO_TITLE boot_ms=%.3f\n",double(title_ns)/1e6);
                        std::fprintf(stderr,"PLS_VIDEO_BOOT meter=%d total_ns=%llu files_ns=%llu runtime_ns=%llu catalog_ns=%llu services_ns=%llu gpu_init_ns=%llu diagnostics_ns=%llu app_init_ns=%llu app_init_upload_ns=%llu loading_ns=%llu loading_frames=%llu loading_logic_wall_ns=%llu loading_draw_wall_ns=%llu loading_gpu_wait_ns=%llu loading_upload_ns=%llu loading_pacing_ns=%llu\n",
                            int(load_meter),title_ns,boot_stages[0],boot_stages[1],boot_stages[2],boot_stages[3],boot_stages[4],boot_stages[5],boot_stages[6],app_init_gpu.upload_ns,loading_ns,boot_frames,boot_logic_ns,boot_draw_ns,boot_wait_ns,boot_upload_ns,boot_pacing_ns);
                        // Boot details are flushed once; gameplay uses fixed in-memory aggregates.
                        pls::diagnostic::flush_resource_events();
                        pls::diagnostic::resource_event_list.store(false,std::memory_order_relaxed);
                        pls::diagnostic::enable_resource_events(profile.detailed());
                        std::fflush(stderr);
                    }
                }
                const auto draw_wait=metrics.wait_ns>=draw_wait_start?metrics.wait_ns-draw_wait_start:0;
                const auto draw_cpu=draw>draw_wait?draw-draw_wait:0;
                const auto gc_after=cs::tracing_heap().statistics();
                auto scene=frame_scene(manager);
                scene.moving=scene.form==9&&scene_before.form==9&&(scene.camera_x!=scene_before.camera_x||scene.camera_y!=scene_before.camera_y);
                const bool interaction=modal_epoch!=screens->modal_epoch;
                const auto frame=elapsed(start),accounted=logic+draw_cpu+metrics.wait_ns;
                if(profile_requested&&title_seen&&!interaction)profile.request(scene);
                profile.frame(scene_before,scene,{logic,draw_cpu,metrics.wait_ns,metrics.upload_ns,metrics.readback_ns,frame,frame>accounted?frame-accounted:0},metrics,gc_before,gc_after,interaction,boot_frame);
                if(title_seen){
                    // Diagnostic storage fixture only; ordinary gameplay needs no button or capture.
                    if(storage_check_requested&&--storage_check_countdown==0){
                        gpu.begin_frame();storage_check(assets);gpu.end_frame();break;
                    }
                }
                if(profile.checkpoint_due())profile.write_summary();
                if(capture_check&&profile_requested){
                    gpu.begin_frame();
                    for(const auto& entry:{std::pair{"top",screens->top},std::pair{"bottom",screens->bottom},std::pair{"labels",screens->labels}}){
                        char path[128];std::snprintf(path,sizeof(path),"sdmc:/pls-video/captures/%llu-%s.png",profile.frames(),entry.first);
                        kairo::write_capture_png(path,*entry.second);
                    }
                    gpu.end_frame();
                }
                const auto pacing_start=Clock::now();
                pls::kairo::UnityApplication::pace(start);
                if(!title_seen)boot_pacing_ns+=elapsed(pacing_start);
            }
            pls::diagnostic::enable_resource_events(false);
            profile.write_summary();
            gpu.begin_frame();app->host_stop();gpu.end_frame();
        }catch(...){
            // Report before GPU teardown, which can itself wait on a stalled queue.
            try{throw;}
            catch(const std::exception& error){std::fprintf(stderr,"PLS_VIDEO_ERROR_BEFORE_GPU_TEARDOWN %s\n",error.what());}
            catch(...){std::fprintf(stderr,"PLS_VIDEO_ERROR_BEFORE_GPU_TEARDOWN unknown exception\n");}
            std::fflush(stderr);
            pls::kairo::Graphics::screen_target_hook=nullptr;pls::kairo::Graphics::surface_screen=nullptr;pls::platform::gpu_drawing=nullptr;throw;
        }
        pls::kairo::Graphics::screen_target_hook=nullptr;pls::kairo::Graphics::surface_screen=nullptr;pls::platform::gpu_drawing=nullptr;
        romfsExit();return 0;
    }catch(const std::exception& error){std::fprintf(stderr,"PLS_VIDEO_ERROR %s\n",error.what());std::fflush(stderr);return 1;}
}
