#include "pc_metrics.hpp"
#include <iostream>
#include <sstream>
#include <stdexcept>
using namespace pls::pc;
namespace {int checks=0;void check(bool valid,const char*message){++checks;if(!valid)throw std::runtime_error(message);}FrameSample sample(std::uint64_t value){FrameSample result;result.nanoseconds.fill(value);return result;}}
int main(){
    FrameAccumulator empty;auto d=empty.summarize(FrameStage::total_wall);
    check(d.samples==0&&!d.mean&&!d.minimum&&!d.maximum&&!d.median&&!d.p95,"Empty stats must be UNKNOWN");check(empty.seen()==0&&empty.retained()==0,"Empty counters");
    FrameAccumulator four;for(auto n:{1000000u,2000000u,3000000u,4000000u})four.record(sample(n));d=four.summarize(FrameStage::update);
    check(d.samples==4,"Four samples");check(d.minimum==1000000&&d.maximum==4000000,"Min/max");check(d.mean==2500000,"Arithmetic mean");check(d.median==2500000,"Even median");check(d.p95==4000000,"Nearest rank p95");
    FrameAccumulator odd;for(auto n:{5u,1u,3u})odd.record(sample(n));check(odd.summarize(FrameStage::total_wall).median==3,"Odd median uses ordered samples");
    FrameAccumulator bounded;for(std::uint64_t n=1;n<=601;++n)bounded.record(sample(n));
    check(bounded.seen()==601&&bounded.retained()==600,"Bounded storage counts dropped frames");d=bounded.summarize(FrameStage::total_wall);
    check(d.mean==300.5&&d.median==300.5&&d.p95==570&&d.maximum==600,"Bounded first600 stats");
    auto startup=bounded.summarize(FrameStage::update,FrameSlice::startup_first_60);check(startup.samples==60&&startup.mean==30.5&&startup.p95==57,"First60 slice");
    auto later=bounded.summarize(FrameStage::update,FrameSlice::after_first_60);check(later.samples==540&&later.minimum==61&&later.mean==330.5&&later.p95==573,"After-first60 slice");
    check(four.summarize(FrameStage::total_wall,FrameSlice::after_first_60).samples==0,"Absent later slice is UNKNOWN");
    FrameAccumulator zero;zero.record(sample(0));check(zero.summarize(FrameStage::input).mean==0,"Measured zero differs from UNKNOWN");
    FrameAccumulator separate;auto split=sample(10);split.nanoseconds[static_cast<std::size_t>(FrameStage::pacing)]=99;separate.record(split);check(separate.summarize(FrameStage::input).mean==10&&separate.summarize(FrameStage::pacing).mean==99,"Stages remain separate");
    std::ostringstream disabled_output;RunMetrics disabled(false,disabled_output);disabled.observe_texture_payload(100);check(!disabled.frame(sample(1)),"Disabled frame recording");disabled.emit_memory("ignored",{},{});disabled.finish("ignored");check(disabled_output.str().empty(),"Disabled instrumentation produces no output");
    FrameClock off(false);off.mark(FrameStage::input);check(off.finish().nanoseconds==FrameSample{}.nanoseconds,"Disabled clock has no measurements");
    FrameClock clock(true);for(auto stage:{FrameStage::gc,FrameStage::input,FrameStage::update,FrameStage::audio,FrameStage::game_draw,FrameStage::upload,FrameStage::render,FrameStage::present,FrameStage::release})clock.mark(stage);const auto measured=clock.finish();
    std::uint64_t sum=0;for(std::size_t i=0;i<=static_cast<std::size_t>(FrameStage::pacing);++i)sum+=measured.nanoseconds[i];check(sum<=measured.nanoseconds[static_cast<std::size_t>(FrameStage::total_wall)],"Pacing is contained in total wall time");
    std::ostringstream output;RunMetrics run(true,output);check(run.frame(sample(1000000)),"First completed frame marker");check(!run.frame(sample(2000000)),"First frame marker occurs once");run.observe_texture_payload(17);run.observe_texture_payload(9);
    ProcessMemory memory;memory.resident_bytes=100;memory.private_commit_bytes=300;memory.executable_image_resident_bytes=25;memory.platform="own fixture";PayloadSnapshot payload;payload.display_rgba_bytes=10;payload.backend_texture_payload_bytes=9;payload.audio_ring_bytes=6;
    run.emit_memory("first\n\"present",memory,payload,8);run.finish("own fixture");const auto text=output.str();run.finish("duplicate");check(output.str()==text,"Finish is idempotent");
    check(text.find("PLS_PC_METRICS=")!=std::string::npos,"Stable prefix");check(text.find("first\\n\\\"present")!=std::string::npos,"JSON escapes phase strings");check(text.find("\"managed_heap\":null")!=std::string::npos,"Unknown heap bytes are not invented");check(text.find("\"font_source\":null")!=std::string::npos,"Font payload remains UNKNOWN without passive getter");check(text.find("\"backend_texture\":17")!=std::string::npos,"Transient backend peak is retained");check(text.find("\"memory_categories_are_not_additive\":true")!=std::string::npos,"Payload not summed into resident bytes");check(text.find("\"game_screen\":\"UNKNOWN\"")!=std::string::npos,"A completed frame does not prove game screen");
    std::cout<<"{\"status\":\"PASS\",\"assertions\":"<<checks<<",\"game_executed\":false}\n";
    std::cout<<text;
}
