#pragma once
#include "../../api/globalization.hpp"

namespace pls::sdl {
// Windows host locale and standard offset. Timezone IDs are Windows key names,
// explicitly not a full IANA database. No SDK editor Asia/Tokyo fallback exists.
void install_globalization_backend();
}
