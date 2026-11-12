#pragma once
// Diagnostic and benchmark hosts only. The normal game keeps the real clock.
//
// Deterministic replacement for the runtime UTC clock (DateTime.UtcNow and
// therefore java.lang.JSystem.CurrentTimeMillis). Each read advances a fixed
// step and each completed frame advances a fixed step, so seeds taken from the
// clock (java.util.JRandom()) and time-sliced loops (ResourceManager.LoadStart,
// 150 ms YieldTime) behave identically for identical inputs. The game logic is
// untouched: only the platform clock source changes.
//
// Observe mode keeps the real clock and only counts reads, to calibrate the
// per-read step against real-clock runs.
#include "managed_time.hpp"
#include <atomic>
#include <cstdint>
#include <cstdlib>
#include <stdexcept>
#include <string>

namespace pls::kairo::virtual_clock {
struct Settings { std::int64_t start_ticks=0, read_ticks=0, frame_ticks=0; bool observe=false; };
namespace detail {
inline std::atomic<std::int64_t> now{0};
inline std::atomic<std::uint64_t> reads{0};
inline thread_local std::uint64_t thread_reads=0;
inline std::int64_t read_step=0, frame_step=0, start=0;
inline bool active=false, observing=false;
}
// "start_ms,read_us,frame_ms" or "observe". Values in milliseconds since the
// Unix epoch / microseconds per read / milliseconds per frame.
inline Settings parse(const std::string& text) {
    Settings s;
    if (text == "observe") { s.observe = true; return s; }
    unsigned long long values[3] = {};
    std::size_t position = 0;
    for (int i = 0; i < 3; ++i) {
        if (position >= text.size() || text[position] < '0' || text[position] > '9')
            throw std::invalid_argument("Virtual clock expects start_ms,read_us,frame_ms or observe");
        std::size_t used = 0;
        values[i] = std::stoull(text.substr(position), &used);
        position += used;
        if (i < 2) { if (position >= text.size() || text[position] != ',') throw std::invalid_argument("Virtual clock expects start_ms,read_us,frame_ms or observe"); ++position; }
    }
    if (position != text.size()) throw std::invalid_argument("Virtual clock expects start_ms,read_us,frame_ms or observe");
    const auto start = values[0], read_us = values[1], frame_ms = values[2];
    if (!frame_ms || frame_ms > 1000 || read_us > 1000000) throw std::invalid_argument("Virtual clock steps out of range");
    s.start_ticks = static_cast<std::int64_t>(start) * 10000 + 621355968000000000ll;
    s.read_ticks = static_cast<std::int64_t>(read_us) * 10;
    s.frame_ticks = static_cast<std::int64_t>(frame_ms) * 10000;
    return s;
}
// Install before the application starts; never during a frame.
inline void install(const Settings& s) {
    if (s.observe) {
        detail::observing = true;
        auto real = cs::utc_clock_ticks;
        cs::utc_clock_ticks = [real] { detail::reads.fetch_add(1, std::memory_order_relaxed); ++detail::thread_reads; return real(); };
        return;
    }
    detail::start = s.start_ticks; detail::now.store(s.start_ticks); detail::read_step = s.read_ticks; detail::frame_step = s.frame_ticks; detail::active = true;
    cs::utc_clock_ticks = [] {
        detail::reads.fetch_add(1, std::memory_order_relaxed); ++detail::thread_reads;
        return detail::now.fetch_add(detail::read_step, std::memory_order_relaxed) + detail::read_step;
    };
}
inline bool install_from_environment(const char* variable = "PLS_VIRTUAL_CLOCK") {
#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4996) // Standard getenv, read once before the application starts.
#endif
    const char* value = std::getenv(variable);
#if defined(_MSC_VER)
#pragma warning(pop)
#endif
    if (!value || !*value) return false;
    install(parse(value));
    return true;
}
inline void end_frame() { if (detail::active) detail::now.fetch_add(detail::frame_step, std::memory_order_relaxed); }
// Return to the configured start, at a host anchor reached by game state
// (e.g. the original TitleForm), so boot-thread timing cannot shift it.
inline void rebase() { if (detail::active) detail::now.store(detail::start); }
inline bool active() { return detail::active; }
inline bool observing() { return detail::observing; }
inline std::uint64_t reads() { return detail::reads.load(std::memory_order_relaxed); }
// Reads made by the calling thread (the host's frame thread when called there).
inline std::uint64_t thread_reads() { return detail::thread_reads; }
}
