// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace kairo::unity::io {

struct ConnectionException : pls::cs::ExceptionObject {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("kairo.unity.io.ConnectionException", ConnectionException, pls::cs::ExceptionObject)

    static void ensure_initialized();

    pls::cs::Int32 GetStatus();
};
} // namespace kairo::unity::io
}
