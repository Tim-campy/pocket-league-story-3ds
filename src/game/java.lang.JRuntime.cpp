// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "PlsPortGeneratedBootstrap.Source.hpp"
#include "generated/java.lang.JRuntime.hpp"
#include "java.lang.JRuntime.hpp"

namespace kl_lang = pls::generated::java::lang;

namespace pls::game {
namespace java::lang::JRuntime {

// M:java.lang.JRuntime.FreeMemory
pls::cs::Int64 FreeMemory(pls::cs::Ref<kl_lang::JRuntime> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JRuntime.FreeMemory", kairo);
    {
        return PLS_API(PlsPortGeneratedBootstrap::Source::FreeHeapMemory());
    }
}

// M:java.lang.JRuntime.TotalMemory
pls::cs::Int64 TotalMemory(pls::cs::Ref<kl_lang::JRuntime> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JRuntime.TotalMemory", kairo);
    {
        return PLS_API(PlsPortGeneratedBootstrap::Source::TotalHeapMemory());
    }
}
} // namespace java::lang::JRuntime
}
