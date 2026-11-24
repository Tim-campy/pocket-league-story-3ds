// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::util::Language_LangPackFormat {

void ensure_initialized();

pls::cs::Ref<generated::kairo::unity::util::Language_LangPackFormat>
create(pls::cs::String file, char16_t lineCode, char16_t segCode);

void create_init(pls::cs::Ref<generated::kairo::unity::util::Language_LangPackFormat> self,
                 pls::cs::String file, char16_t lineCode, char16_t segCode);
} // namespace kairo::unity::util::Language_LangPackFormat
}
