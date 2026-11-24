// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.io.HttpObject.hpp"
#include "kairo.unity.system.KairoBase.ConnectObject.hpp"
#include "kairo.unity.system.KairoBase.hpp"

namespace pls::game {
namespace kairo::unity::system {

void KairoBase_ConnectObject::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    HttpObject::trace_edges(visitor);
    pls::cs::trace_value(base_, visitor);
}
} // namespace kairo::unity::system
}
