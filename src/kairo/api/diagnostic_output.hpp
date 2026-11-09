#pragma once
#include <mutex>
namespace pls::kairo {
// One complete line at a time across metrics, debug output and fatal guards.
inline std::mutex debug_log_mutex;
}
