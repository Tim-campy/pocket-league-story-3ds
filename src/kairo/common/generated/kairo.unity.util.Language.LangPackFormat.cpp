// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.util.Language.LangPackFormat.hpp"

namespace pls::generated {
namespace kairo::unity::util {

void Language_LangPackFormat::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(File, visitor);
}
} // namespace kairo::unity::util
}
