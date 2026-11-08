#pragma once
#include "../common/semantic_runtime.hpp"

namespace pls::kairo {
struct GlobalizationProvider {
    std::function<cs::String()> timezone_id;
    std::function<std::int32_t(const cs::String&)> timezone_raw_offset;
    std::function<cs::Array<cs::String>()> locale;
};
// Install once before generated game workers. CLR CurrentCulture is configured
// independently; these are the former java.util.Locale/TimeZone platform leaves.
void install_globalization_provider(GlobalizationProvider provider);
cs::String native_timezone_id();
std::int32_t native_timezone_raw_offset(const cs::String& id);
cs::Array<cs::String> native_locale();
cs::String java_legacy_language(const cs::String& language);
} // namespace pls::kairo
