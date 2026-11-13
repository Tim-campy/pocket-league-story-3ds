// Measurement host only. No screen/control design for the eventual 3DS port.
#include "game_entry.hpp"
#include "asset_catalog.hpp"
#include "graphics.hpp"
#include "font.hpp"
#include "canvas.hpp"
#include "forms.hpp"
#include "services.hpp"
#include "storage.hpp"
#include "capture.hpp"
#include "text_input.hpp"
#include "managed_collation.hpp"
#include "kairo/platform/null/sound.hpp"
#include "kairo/platform/sdl/globalization.hpp"
#include "diagnostic_keys.hpp"
#include "allocation_probe.hpp"
#include "native_allocation_sites.hpp"
#include "thread_cpu_clock.hpp"
#include "resource_load_trace.hpp"
#include "virtual_clock.hpp"
#include <fstream>
#include <algorithm>
#include <cmath>
#include <set>
#include <iostream>
#include <chrono>
#if defined(PLS_DIAGNOSTIC_BUILD)
#error Null CPU measurement must not contain method counters or profile scopes
#endif
#if defined(_WIN32)
#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <psapi.h>
#elif defined(__3DS__)
#include <3ds.h>
#include <malloc.h>
// No video/audio device buffers in this benchmark. A nonzero minimum page
// prevents libctru's default 50/50 automatic split from reserving an unused
// linear heap. The graphical backend's memory policy remains undecided.
extern "C" {u32 __ctru_linear_heap_size=4096;extern u32 __ctru_heap_size;}
static_assert(sizeof(void*)==4 && sizeof(std::int32_t)==4 && sizeof(float)==4 && sizeof(double)==8);
#else
#include <time.h>
#endif
namespace {
using Clock=std::chrono::steady_clock;
void gc_measurement(const char* stage){
#if PLS_TRACING_GC
    const auto s=pls::cs::tracing_heap().statistics();
    std::fprintf(stderr,"PLS_NULL_GC={\"stage\":\"%s\",\"objects\":%llu,\"body_bytes\":%llu,\"external_bytes\":%llu,\"retained_bytes\":%llu,\"peak_retained_bytes\":%llu,\"allocations\":%llu,\"allocated_bytes\":%llu,\"external_growth_bytes\":%llu,\"collections\":%llu,\"pause_ns\":%llu,\"accounting_ns\":%llu}\n",stage,
        static_cast<unsigned long long>(s.objects),static_cast<unsigned long long>(s.body_bytes),
        static_cast<unsigned long long>(s.external_bytes),static_cast<unsigned long long>(s.bytes),
        static_cast<unsigned long long>(s.peak_bytes),static_cast<unsigned long long>(s.allocations),
        static_cast<unsigned long long>(s.allocated_bytes),static_cast<unsigned long long>(s.external_growth_bytes),
        static_cast<unsigned long long>(s.collections),static_cast<unsigned long long>(s.pause_ns),
        static_cast<unsigned long long>(s.accounting_ns));std::fflush(stderr);
#else
    (void)stage;
#endif
}
void memory_categories(const char*stage){
#if defined(PLS_MEMORY_CATEGORIES)
    using Range=std::pair<std::uintptr_t,std::uintptr_t>;
    std::array<std::vector<Range>,4> ranges;
    auto visit=[&](const void*pointer,std::size_t size,pls::memory::Category category){
        if(!pointer||!size)return;
        const auto begin=reinterpret_cast<std::uintptr_t>(pointer);
        if(size>std::numeric_limits<std::uintptr_t>::max()-begin)throw std::overflow_error("Memory range overflow");
        ranges.at(static_cast<std::size_t>(category)).push_back({begin,begin+size});
    };
    pls::cs::visit_managed_memory(visit,[&]{pls::kairo::visit_font_memory(visit);});
    std::array<std::uint64_t,4> bytes{};
    for(std::size_t i=0;i<ranges.size();++i){
        auto&items=ranges[i];std::sort(items.begin(),items.end());std::uintptr_t end=0;
        for(const auto&item:items){if(item.second>end)bytes[i]+=item.second-std::max(item.first,end);end=std::max(end,item.second);}
    }
    std::fprintf(stderr,"PLS_NULL_KNOWN_MEMORY stage=%s textures=%llu audio=%llu fonts=%llu managed_heap=%llu meaning=union_of_registered_ranges_not_allocator_or_RSS\n",stage,
        static_cast<unsigned long long>(bytes[0]),static_cast<unsigned long long>(bytes[1]),
        static_cast<unsigned long long>(bytes[2]),static_cast<unsigned long long>(bytes[3]));std::fflush(stderr);
#else
    (void)stage;
#endif
}
void memory_report(){
    const auto registry=pls::cs::gc_registry_stats();
    std::fprintf(stderr,"PLS_NULL_GC_REGISTRY entries=%llu expired=%llu\n",static_cast<unsigned long long>(registry.entries),static_cast<unsigned long long>(registry.expired));std::fflush(stderr);
#if defined(__3DS__)
    const auto heap=mallinfo();
    std::fprintf(stderr,"PLS_NULL_ARM_MEMORY app_region_used=%u app_region_capacity=%u normal_heap_reserved=%u linear_heap_reserved=%u malloc_used=%d malloc_free=%d\n",
        osGetMemRegionUsed(MEMREGION_APPLICATION),osGetMemRegionSize(MEMREGION_APPLICATION),
        __ctru_heap_size,__ctru_linear_heap_size,heap.uordblks,heap.fordblks);std::fflush(stderr);
#endif
}
std::uint64_t qpc(){
#if defined(_WIN32)
    LARGE_INTEGER value;QueryPerformanceCounter(&value);return value.QuadPart;
#else
    return Clock::now().time_since_epoch().count();
#endif
}
std::uint64_t cpu_ns(){
#if defined(_WIN32)
    FILETIME created,exited,kernel,user;if(!GetProcessTimes(GetCurrentProcess(),&created,&exited,&kernel,&user))throw std::runtime_error("GetProcessTimes failed");
    auto n=[](FILETIME v){return (std::uint64_t(v.dwHighDateTime)<<32)|v.dwLowDateTime;};return (n(kernel)+n(user))*100;
#elif defined(__3DS__)
    const auto tick=svcGetSystemTick();return tick/SYSCLOCK_ARM11*1000000000ull+(tick%SYSCLOCK_ARM11)*1000000000ull/SYSCLOCK_ARM11;
#else
    timespec t{};if(clock_gettime(CLOCK_PROCESS_CPUTIME_ID,&t))throw std::runtime_error("CPU clock failed");return std::uint64_t(t.tv_sec)*1000000000+t.tv_nsec;
#endif
}
std::uint64_t resident_bytes(){
#if defined(_WIN32)
    PROCESS_MEMORY_COUNTERS p{};if(!GetProcessMemoryInfo(GetCurrentProcess(),&p,sizeof(p)))throw std::runtime_error("Process memory query failed");return p.WorkingSetSize;
#elif defined(__3DS__)
    return mallinfo().uordblks; // Allocator payload, explicitly NOT resident memory.
#else
    return 0;
#endif
}
struct Report {
    std::string text;
    void line(const std::string& value){text+=value;text+='\n';}
    void write()const{
#if defined(__3DS__)
        if(std::FILE* file=std::fopen("sdmc:/pls-benchmark/result.txt","wb")){std::fwrite(text.data(),1,text.size(),file);std::fclose(file);}
#endif
    }
};
Report report;
struct Window{std::string name;std::uint64_t first,last;};
class Text final:public pls::kairo::TextInputPresenter {
public:void Begin(pls::cs::String,std::int32_t,std::int32_t)override{}bool Blocking()const override{return false;}
};
}
int main(int argc,char**argv){
#if defined(__3DS__)
    // No gfxInit/console/ndsp: this is deliberately a no-video benchmark.
    osSetSpeedupEnable(true);
    std::array<std::string,7> arguments;std::array<char*,7> pointers{};
    arguments[0]="null_game";
    if(argc!=7){
        std::ifstream config("sdmc:/pls-benchmark/config.txt");
        for(std::size_t i=1;i<arguments.size();++i)if(!std::getline(config,arguments[i]))return 2;
        for(std::size_t i=0;i<arguments.size();++i){if(!arguments[i].empty()&&arguments[i].back()=='\r')arguments[i].pop_back();pointers[i]=arguments[i].data();}
        argc=7;argv=pointers.data();
    }
    if(!std::freopen("sdmc:/pls-benchmark/stdout.log","w",stdout)||!std::freopen("sdmc:/pls-benchmark/stderr.log","w",stderr))return 2;
    bool new_model=false;u8 model=255;
    const auto new_result=APT_CheckNew3DS(&new_model);
    const auto config_result=cfguInit();
    const auto model_result=R_SUCCEEDED(config_result)?CFGU_GetSystemModel(&model):config_result;
    if(R_SUCCEEDED(config_result))cfguExit();
    std::fprintf(stdout,"PLS_NULL_ARM_MODEL model=%u model_result=%ld new3ds=%d new3ds_result=%ld speedup_requested=1 clock=system_tick\n",unsigned(model),long(model_result),int(new_model),long(new_result));
    {char line[160];std::snprintf(line,sizeof(line),"model=%u model_result=%ld new3ds=%d new3ds_result=%ld",unsigned(model),long(model_result),int(new_model),long(new_result));report.line(std::string("PLS_BENCH_MODEL ")+line);}
    std::fflush(stdout);
#endif
    if(argc!=7){std::cerr<<"Expected assets preferences replay total_frames sample_first sample_last\n";return 2;}
    try{
        const auto total=std::stoull(argv[4]),first=std::stoull(argv[5]),last=std::stoull(argv[6]);
        if(!first||first>last||last>total||total>12000)throw std::runtime_error("Invalid benchmark window");
        std::ifstream replay(argv[3]);if(!replay)throw std::runtime_error("Replay missing");
        std::string line,keys;while(std::getline(replay,line)){if(line.empty()||line[0]=='#')continue;if(!keys.empty())keys+=',';keys+=line;}
        const auto inputs=pls::pc::parse_scripted_keys(keys);
        std::vector<Window> windows{{"window",first,last}};bool suite=false;
#if defined(__3DS__)
        {
            std::ifstream list("sdmc:/pls-benchmark/windows.txt");std::string name;std::uint64_t a=0,b=0;std::vector<Window> parsed;
            while(list>>name>>a>>b){if(!a||a>b||b>total||(!parsed.empty()&&a<=parsed.back().last))throw std::runtime_error("Invalid benchmark windows");parsed.push_back({name,a,b});}
            if(!parsed.empty()){windows=parsed;suite=true;}
        }
#endif
        const auto in_window=[&](std::uint64_t frame){for(const auto& w:windows)if(frame>=w.first&&frame<=w.last)return true;return false;};
        const auto window_first=windows.front().first,window_last=windows.back().last;
        std::uint64_t window_frames=0;for(const auto& w:windows)window_frames+=w.last-w.first+1;
        memory_report();std::cerr<<"PLS_NULL_STAGE=runtime\n";std::cerr.flush();
        pls::cs::GcMutatorScope mutator;pls::cs::install_mono_collation_character_data();pls::cs::set_default_collation_culture({1033,{9},"en",false});
        pls::sdl::install_globalization_backend();
        std::cerr<<"PLS_NULL_STAGE=catalog\n";std::cerr.flush();
        auto validation=pls::assets::ReadValidation::EveryPayload;
#if defined(__3DS__)
        const auto converted=std::filesystem::u8path(argv[1])/"converted";
        pls::diagnostic::enable_resource_events(std::filesystem::exists(converted/"profile-resources.flag"));
        if(std::filesystem::exists(converted/"prevalidated.sha256")&&!std::filesystem::exists(converted/"verify-on-read.flag"))validation=pls::assets::ReadValidation::PreparedCatalog;
#endif
        pls::assets::Catalog assets(std::filesystem::u8path(argv[1]),validation);pls::kairo::install_asset_catalog(&assets);
        {
            // Diagnosis only: artificial delay per real storage access.
            std::string delay;
#if defined(__3DS__)
            std::ifstream setting("sdmc:/pls-benchmark/read-delay-ms.txt");if(setting)std::getline(setting,delay);
            if(!delay.empty()&&delay.back()=='\r')delay.pop_back();
#else
#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4996)
#endif
            if(const auto* value=std::getenv("PLS_DIAGNOSTIC_READ_DELAY_MS"))delay=value;
#if defined(_MSC_VER)
#pragma warning(pop)
#endif
#endif
            if(!delay.empty()){assets.set_diagnostic_read_delay(std::chrono::milliseconds(std::stoul(delay)));std::fprintf(stdout,"PLS_NULL_READ_DELAY_MS=%s\n",delay.c_str());std::fflush(stdout);}
        }
        const auto preferences=std::filesystem::u8path(argv[2]);
        pls::services::OfflineServices services(preferences);pls::services::install(&services);services.device_id();
        pls::kairo::configure_storage(preferences,&assets);pls::kairo::configure_capture(preferences/"captures");
        auto sound=pls::cs::make_ref<pls::null_backend::Sound>();pls::kairo::configure_sound(&assets,sound);
        pls::kairo::install_text_input(pls::cs::make_ref<Text>());
        auto display=pls::kairo::Image::FromRgba(240,280,std::vector<std::uint8_t>(240*280*4));auto canvas=pls::kairo::Canvas::GetInstance();canvas->host_display(display,pls::cs::make_ref<pls::kairo::Font>());
        auto app=pls::game::create_application();app->host_configure(240,280,pls::cs::String::from_utf8(preferences.u8string()),{});
        pls::kairo::WindowOrientation orientation=pls::kairo::WindowOrientation::portrait;
        app->host_orientation_reset([&]{orientation=pls::kairo::WindowOrientation::portrait;});app->host_orientation_reader([&]{return orientation;});app->host_orientation_writer([&](auto v){orientation=v;});app->host_fullscreen_writer([](bool){});
        std::string deferred_clock;
        {
            // Deterministic clock for benchmark/diagnosis (seeds, LoadStart slices).
            std::string clock;
#if defined(__3DS__)
            std::ifstream setting("sdmc:/pls-benchmark/virtual-clock.txt");if(setting)std::getline(setting,clock);
            if(!clock.empty()&&clock.back()=='\r')clock.pop_back();
#else
#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4996)
#endif
            if(const auto* value=std::getenv("PLS_VIRTUAL_CLOCK"))clock=value;
#if defined(_MSC_VER)
#pragma warning(pop)
#endif
#endif
            if(suite){deferred_clock=clock;clock.clear();if(!deferred_clock.empty())pls::diagnostic::resource_event_list.store(false);pls::diagnostic::enable_resource_events(true);}
            if(!clock.empty()){pls::kairo::virtual_clock::install(pls::kairo::virtual_clock::parse(clock));std::fprintf(stdout,"PLS_NULL_VIRTUAL_CLOCK=%s\n",clock.c_str());std::fflush(stdout);}
        }
        std::cerr<<"PLS_NULL_STAGE=bootstrap\n";std::cerr.flush();
        pls::game::configure_application(app);app->host_start();
        memory_categories("after_bootstrap");
        const auto execute_frame=[&]{
            app->host_update();pls::kairo::Offscreen::RenderAll();if(!pls::kairo::Offscreen::LastRenderError().empty())throw std::runtime_error("Null offscreen error: "+pls::kairo::Offscreen::LastRenderError());
            sound->Pump();app->host_draw();pls::kairo::Offscreen::EndFrame();pls::cs::gc_frame_end();pls::kairo::virtual_clock::end_frame();assets.age_retained();
        };
#if defined(__3DS__)
        if(std::filesystem::exists(converted/"replay-after-title.flag")){
            std::uint64_t boot_frames=0;const auto boot_started=Clock::now();
            for(;;){
                auto manager=app->GetFormManager();auto form=manager?manager->GetTopForm():nullptr;
                // TitleForm's original constructor calls base(1). Wait by
                // observing the game, never by forcing its state or skipping LoadStart.
                if(form&&form->GetId()==1){if(!suite)pls::kairo::virtual_clock::rebase();break;}
                if(app->IsTermination()||boot_frames>=12000)throw std::runtime_error("Benchmark did not reach TitleForm");
                const auto start=Clock::now();pls::cs::gc_safepoint();execute_frame();++boot_frames;
                if(boot_frames%60==0){std::fprintf(stderr,"PLS_NULL_BOOT_FRAMES=%llu\n",static_cast<unsigned long long>(boot_frames));std::fflush(stderr);}
                if(!suite)pls::diagnostic::flush_resource_events();pls::kairo::UnityApplication::pace(start);
            }
            std::fprintf(stdout,"PLS_NULL_REPLAY_ANCHOR={\"form_id\":1,\"boot_frames\":%llu,\"boot_ns\":%llu,\"retention_hits\":%llu}\n",static_cast<unsigned long long>(boot_frames),static_cast<unsigned long long>(std::chrono::duration_cast<std::chrono::nanoseconds>(Clock::now()-boot_started).count()),static_cast<unsigned long long>(assets.retention_hits()));std::fflush(stdout);
            if(suite){
                char summary[256];const auto boot_ns=static_cast<unsigned long long>(std::chrono::duration_cast<std::chrono::nanoseconds>(Clock::now()-boot_started).count());
                std::snprintf(summary,sizeof(summary),"PLS_BENCH_LOAD boot_frames=%llu boot_ns=%llu retention_hits=%llu clock=real real_utc_unix_s=%lld",static_cast<unsigned long long>(boot_frames),boot_ns,static_cast<unsigned long long>(assets.retention_hits()),static_cast<long long>((pls::cs::utc_clock_ticks()-621355968000000000ll)/10000000ll));report.line(summary);
                {
                    std::lock_guard<std::mutex> lock(pls::diagnostic::resource_event_mutex);
                    for(std::size_t i=0;i<pls::diagnostic::resource_aggregate_count;++i){const auto& a=pls::diagnostic::resource_aggregates[i];
                        std::snprintf(summary,sizeof(summary),"PLS_BENCH_LOAD_STAGE stage=%s count=%llu ns=%llu maximum_ns=%llu bytes=%llu",a.stage,a.count,a.ns,a.maximum_ns,a.bytes);report.line(summary);}
                    if(pls::diagnostic::resource_aggregate_dropped)report.line("PLS_BENCH_LOAD_STAGE dropped="+std::to_string(pls::diagnostic::resource_aggregate_dropped));
                    pls::diagnostic::resource_aggregate_count=pls::diagnostic::resource_aggregate_dropped=pls::diagnostic::resource_event_count=pls::diagnostic::resource_event_dropped=0;
                }
                pls::diagnostic::enable_resource_events(false);report.write();
                if(!deferred_clock.empty()){pls::kairo::virtual_clock::install(pls::kairo::virtual_clock::parse(deferred_clock));pls::kairo::virtual_clock::rebase();report.line("PLS_BENCH_CLOCK virtual="+deferred_clock+" from=title_anchor");}
            }
        }
#endif
        std::cerr<<"PLS_NULL_STAGE=frames\n";std::cerr.flush();
        struct Sample{std::uint64_t frame,cpu,wall,begin,end;int form;pls::allocation_probe::Snapshot memory;std::uint64_t thread_ns,thread_cycles;};std::vector<Sample>samples;samples.reserve(window_frames);
#if defined(_WIN32)
        LARGE_INTEGER frequency;QueryPerformanceFrequency(&frequency);std::cout<<"PLS_NULL_QPC_FREQUENCY="<<frequency.QuadPart<<"\nPLS_NULL_PID="<<GetCurrentProcessId()<<"\n";
#endif
#if defined(PLS_ALLOCATION_PROBE)
        pls::allocation_probe::enabled=true;
#endif
        for(std::uint64_t completed=0;completed<total&&!app->IsTermination();++completed){
            if(completed+1==window_first){memory_categories("before_window");gc_measurement("before_window");}
            // Startup diagnosis only, outside the measured window and timer.
            if(completed+1<window_first&&completed%60==0){std::fprintf(stderr,"PLS_NULL_WARMUP_BEGIN=%llu\n",static_cast<unsigned long long>(completed+1));std::fflush(stderr);}
            if(completed+1==window_first)if(const auto*sync=std::getenv("PLS_NULL_PROFILE_SYNC")){
                std::ofstream(std::string(sync)+".request")<<"ready\n";const auto deadline=Clock::now()+std::chrono::seconds(60);
                while(!std::filesystem::exists(std::string(sync)+".ready")){if(Clock::now()>deadline)throw std::runtime_error("External sampling collector did not start");std::this_thread::sleep_for(std::chrono::milliseconds(20));}
            }
            pls::allocation_sites::window(completed+1>=first&&completed+1<=last?int(completed+1-first):-1);
            pls::source_allocations::window(completed+1>=first&&completed+1<=last?int(completed+1-first):-1);
#if PLS_TRACING_GC
            const auto gc_before=pls::cs::tracing_heap().statistics_and_reset_pause_peak();
#endif
            const auto before=pls::allocation_probe::snapshot();const auto start=Clock::now();const auto cpu=cpu_ns();const auto thread_start=pls::measurement::ThreadCpu::now();const auto begin=qpc();pls::cs::gc_safepoint();
            for(const auto&key:inputs)if(key.frame==completed){const auto code=key.name=="SELECT"?pls::kairo::Canvas::KEY_SELECT:key.name=="UP"?pls::kairo::Canvas::KEY_UP:key.name=="DOWN"?pls::kairo::Canvas::KEY_DOWN:key.name=="LEFT"?pls::kairo::Canvas::KEY_LEFT:key.name=="RIGHT"?pls::kairo::Canvas::KEY_RIGHT:key.name=="SOFT1"?pls::kairo::Canvas::KEY_SOFT1:pls::kairo::Canvas::KEY_SOFT2;canvas->KeyClick(code);}
            execute_frame();
            const auto end=qpc();const auto thread_end=pls::measurement::ThreadCpu::now();const auto elapsed_cpu=cpu_ns()-cpu;const auto elapsed_wall=std::chrono::duration_cast<std::chrono::nanoseconds>(Clock::now()-start).count();
            auto after=pls::allocation_probe::snapshot();after.allocations-=before.allocations;after.bytes-=before.bytes;after.collections-=before.collections;after.collection_ns-=before.collection_ns;
#if PLS_TRACING_GC
            const auto gc_after=pls::cs::tracing_heap().statistics();
            after.collections=gc_after.collections-gc_before.collections;
            after.collection_ns=gc_after.pause_ns-gc_before.pause_ns;
            after.longest_collection_ns=gc_after.interval_max_pause_ns;
#endif
            pls::allocation_sites::window(-1);
            pls::source_allocations::window(-1);
            if(in_window(completed+1)){auto manager=app->GetFormManager();auto form=manager?manager->GetTopForm():nullptr;samples.push_back({completed+1,elapsed_cpu,std::uint64_t(elapsed_wall),begin,end,form?form->GetId():-1,after,thread_end.ns-thread_start.ns,thread_end.cycles-thread_start.cycles});}
            if(std::any_of(windows.begin(),windows.end(),[&](const Window& w){return completed+1==w.first||completed+1==w.last;})){std::cerr<<"PLS_NULL_WINDOW="<<(completed+1)<<"\n";std::cerr.flush();}
            if(!in_window(completed+1)&&completed%60==0){auto manager=app->GetFormManager();auto form=manager?manager->GetTopForm():nullptr;std::fprintf(stderr,"PLS_NULL_WARMUP_END=%llu form=%d\n",static_cast<unsigned long long>(completed+1),form?form->GetId():-1);std::fflush(stderr);}
            if(completed+1==window_last)if(const auto*sync=std::getenv("PLS_NULL_PROFILE_SYNC"))std::ofstream(std::string(sync)+".done")<<"done\n";
            pls::diagnostic::flush_resource_events();pls::kairo::UnityApplication::pace(start);
        }
        for(const auto&s:samples)std::cout<<"PLS_NULL_FRAME={\"frame\":"<<s.frame<<",\"cpu_ns\":"<<s.cpu<<",\"wall_ns\":"<<s.wall<<",\"form_id\":"<<s.form<<",\"cpp_allocations\":"<<s.memory.allocations<<",\"cpp_allocation_bytes\":"<<s.memory.bytes<<",\"collections\":"<<s.memory.collections<<",\"collection_ns\":"<<s.memory.collection_ns<<",\"longest_collection_ns\":"<<s.memory.longest_collection_ns<<"}\n";
        for(const auto&s:samples)std::cout<<"PLS_NULL_QPC="<<s.frame<<","<<s.begin<<","<<s.end<<"\n";
        for(const auto&s:samples)std::cout<<"PLS_NULL_THREAD={\"frame\":"<<s.frame<<",\"cpu_ns\":"<<s.thread_ns<<",\"cycles\":"<<s.thread_cycles<<",\"wall_ns\":"<<s.wall<<"}\n";
        pls::allocation_sites::dump(stdout);
        pls::source_allocations::dump(stdout);
        for(const auto& w:windows){
            std::vector<double> wall;std::uint64_t collections=0,collection_ns=0,longest=0;std::set<int> forms;
            for(const auto& s:samples)if(s.frame>=w.first&&s.frame<=w.last){wall.push_back(double(s.wall)/1e6);collections+=s.memory.collections;collection_ns+=s.memory.collection_ns;longest=std::max<std::uint64_t>(longest,s.memory.longest_collection_ns);forms.insert(s.form);}
            std::sort(wall.begin(),wall.end());double sum=0;for(double v:wall)sum+=v;
            char summary[320];std::string form_list;for(int f:forms){if(!form_list.empty())form_list+=',';form_list+=std::to_string(f);}
            std::snprintf(summary,sizeof(summary),"PLS_BENCH_WINDOW name=%s first=%llu last=%llu frames=%zu expected=%llu forms=%s mean_ms=%.4f p95_ms=%.4f max_ms=%.4f collections=%llu collection_ms=%.4f longest_collection_ms=%.4f",
                w.name.c_str(),static_cast<unsigned long long>(w.first),static_cast<unsigned long long>(w.last),wall.size(),static_cast<unsigned long long>(w.last-w.first+1),form_list.c_str(),
                wall.empty()?0.0:sum/double(wall.size()),wall.empty()?0.0:wall[std::size_t(std::ceil(0.95*double(wall.size())))-1],wall.empty()?0.0:wall.back(),
                static_cast<unsigned long long>(collections),double(collection_ns)/1e6,double(longest)/1e6);
            report.line(summary);
        }
#if defined(__3DS__)
        {const auto heap=mallinfo();char summary[200];std::snprintf(summary,sizeof(summary),"PLS_BENCH_MEMORY malloc_used=%d malloc_free=%d app_region_used=%u gc_objects=%llu",heap.uordblks,heap.fordblks,unsigned(osGetMemRegionUsed(MEMREGION_APPLICATION)),static_cast<unsigned long long>(pls::cs::gc_registry_stats().entries));report.line(summary);}
#endif
        report.line(std::string("PLS_BENCH_STATUS ")+(samples.size()==window_frames?"complete":"incomplete"));report.write();
        gc_measurement("after_window");memory_categories("after_window");memory_report();std::cout<<"PLS_NULL_MEMORY="<<resident_bytes()<<"\n";std::cout.flush();app->host_stop();return samples.size()==window_frames?0:3;
    }catch(const pls::cs::Exception&e){memory_report();std::cerr<<e.what()<<'\n';report.line(std::string("PLS_BENCH_STATUS failed ")+e.what());report.write();return 1;}catch(const std::exception&e){memory_report();std::cerr<<e.what()<<'\n';report.line(std::string("PLS_BENCH_STATUS failed ")+e.what());report.write();return 1;}
}
