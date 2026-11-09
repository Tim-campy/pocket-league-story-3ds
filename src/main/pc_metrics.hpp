#pragma once
#include "pc_memory.hpp"
#include <array>
#include <chrono>
#include <cstddef>
#include <cstdint>
#include <iosfwd>
#include <optional>
#include <string>
#include <vector>
namespace pls::pc {
enum class FrameStage:std::size_t {gc,input,update,audio,game_draw,upload,render,present,release,pacing,total_before_pacing,total_wall,count};
constexpr std::size_t frame_stage_count=static_cast<std::size_t>(FrameStage::count);
struct FrameSample {std::array<std::uint64_t,frame_stage_count>nanoseconds{};};
class FrameClock {
    bool enabled_;
    std::chrono::steady_clock::time_point start_{},last_{};
    FrameSample sample_;
public:
    explicit FrameClock(bool);
    void mark(FrameStage)noexcept;
    FrameSample finish()noexcept;
};
struct Distribution {std::size_t samples{};std::optional<double>minimum,mean,median,p95,maximum;};
enum class FrameSlice {retained,startup_first_60,after_first_60};
class FrameAccumulator {
    std::uint64_t seen_{};
    std::vector<FrameSample>frames_;
public:
    static constexpr std::size_t capacity=600,startup_frames=60;
    void record(const FrameSample&);
    std::uint64_t seen()const noexcept{return seen_;}
    std::size_t retained()const noexcept{return frames_.size();}
    Distribution summarize(FrameStage,FrameSlice=FrameSlice::retained)const;
};
struct PayloadSnapshot {
    KnownMemory known;
    std::optional<std::uint64_t>display_rgba_bytes,display_rgba_capacity_bytes,backend_texture_payload_bytes;
    std::optional<std::uint64_t>audio_ring_bytes,audio_scratch_bytes,audio_resampler_available_bytes,audio_device_callback_bytes,audio_peak_resampler_available_bytes;
    std::optional<std::uint64_t>gc_tracked,gc_roots,gc_unreachable,gc_collected;
};
bool metrics_enabled_from_environment();
// Output is numeric diagnostics only, written to stderr by the host; the run
// launcher retains it under ignored build/. It never writes asset contents.
class RunMetrics {
    bool enabled_,finished_{};
    std::ostream&output_;
    FrameAccumulator frames_;
    std::uint64_t peak_backend_texture_payload_bytes_{};
    void emit_summary(const std::string&)noexcept;
public:
    RunMetrics(bool,std::ostream&);
    bool enabled()const noexcept{return enabled_;}
    bool finished()const noexcept{return finished_;}
    void observe_texture_payload(std::uint64_t)noexcept;
    bool frame(const FrameSample&)noexcept; // true only for first completed frame
    void memory(const std::string&phase,const PayloadSnapshot&)noexcept;
    void emit_memory(const std::string&phase,const ProcessMemory&,const PayloadSnapshot&,std::uint64_t sampler_ns=0)noexcept;
    void finish(const std::string&outcome)noexcept;
    void checkpoint(const std::string&outcome)noexcept;
};
}
