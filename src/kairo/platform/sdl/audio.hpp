#pragma once
#include <cstddef>
#include <cstdint>
#include <filesystem>
#include <memory>

namespace pls::sdl {
class VorbisStream final {
    struct Impl;
    std::unique_ptr<Impl> impl_;
public:
    explicit VorbisStream(const std::filesystem::path& ogg);
    ~VorbisStream();
    VorbisStream(const VorbisStream&)=delete;
    VorbisStream& operator=(const VorbisStream&)=delete;
    int sample_rate() const;
    int channels() const;
    std::int64_t total_frames() const;
    std::int64_t tell_frames() const;
    void seek_frame(std::int64_t frame);
    // Interleaved float output supplied by caller; no whole-track PCM buffer.
    std::size_t read_frames(float* output,std::size_t capacity_frames);
};
enum class VoiceState { empty, stopped, playing, paused, finished };
struct VoiceStats {
    VoiceState state{VoiceState::empty};
    std::uint64_t decoded_frames{},played_frames{},completed_loops{},underrun_frames{};
    std::size_t queued_frames{};
};
struct AudioMemory {
    std::size_t ring_bytes{},scratch_bytes{},sdl_resampler_available_bytes{},peak_resampler_available_bytes{},device_callback_bytes{};
};
struct AudioOutputStats {
    std::uint64_t callbacks{},rendered_frames{},nonzero_samples{};
    float peak_absolute_sample{};
    std::size_t peak_active_voices{};
};
// One SDL audio device, four voices as SoundPlayer's original default. Control
// and pump methods run on the main thread; the SDL callback only mixes rings.
class AudioMixer final {
    struct Impl;
    std::unique_ptr<Impl> impl_;
public:
    static constexpr std::size_t voice_count=4;
    explicit AudioMixer(int output_rate=44100,std::size_t block_frames=2048,std::size_t ring_frames=8192);
    ~AudioMixer();
    AudioMixer(const AudioMixer&)=delete;
    AudioMixer& operator=(const AudioMixer&)=delete;
    void load(std::size_t voice,const std::filesystem::path& ogg);
    void unload(std::size_t voice);
    void play(std::size_t voice,bool loop,float volume=1.0f,bool mute=false);
    void pause(std::size_t voice,bool paused);
    void stop(std::size_t voice);
    void set_volume(std::size_t voice,float volume,bool mute=false);
    void set_loop(std::size_t voice,bool loop);
    void pump();
    VoiceStats stats(std::size_t voice) const;
    AudioMemory memory() const;
    AudioOutputStats diagnostics() const;
    void reset_diagnostics();
    int output_rate() const;
};
}
