#pragma once
#include "../../api/globalization.hpp"

namespace pls::sdl {
// Windows host locale and standard offset. Timezone IDs are Windows key names,
// explicitly not a full IANA database. No SDK editor Asia/Tokyo fallback exists.
void install_globalization_backend();
// Platform model for the original Awake cache. No Android/Unity model is used.
cs::String device_model();
namespace detail {
using DeviceModelRegistryReader=std::function<std::uint32_t(void*,std::uint32_t&)>;
// Own fixture seam: status values are Win32 ERROR_SUCCESS/ERROR_MORE_DATA.
cs::String device_model_from_registry(const DeviceModelRegistryReader&);
}
}
