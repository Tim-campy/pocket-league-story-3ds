// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::util::Language_RecordPosition {

void ensure_initialized();

generated::kairo::unity::util::Language_RecordPosition
create(pls::cs::Int32 line, pls::cs::Int32 segment,
       pls::cs::Ref<generated::kairo::unity::util::Language_LangPackRecord> record);

void create_init(generated::kairo::unity::util::Language_RecordPosition* self, pls::cs::Int32 line,
                 pls::cs::Int32 segment,
                 pls::cs::Ref<generated::kairo::unity::util::Language_LangPackRecord> record);
} // namespace kairo::unity::util::Language_RecordPosition
}
