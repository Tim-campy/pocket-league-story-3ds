// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace java::io {

struct EOFException : pls::cs::ExceptionObject {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("java.io.EOFException", EOFException, pls::cs::ExceptionObject)

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<EOFException> self, pls::cs::String s);

    static pls::cs::Ref<EOFException> create(pls::cs::String s);
};
} // namespace java::io
}
