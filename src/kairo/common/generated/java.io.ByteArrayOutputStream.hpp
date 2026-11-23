// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "java.io.OutputStream.hpp"
#include "portable_generated_forward.hpp"
namespace pls::generated {
namespace java::io {

struct ByteArrayOutputStream : OutputStream {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(OutputStream,
    {"M:java.io.OutputStream.Close", "M:java.io.ByteArrayOutputStream.Close"},
    {"ToString", "M:java.io.ByteArrayOutputStream.ToString"});
PLS_MANAGED_CLASS("java.io.ByteArrayOutputStream", ByteArrayOutputStream, OutputStream)
void Close() override;
pls::cs::String ToString() override;

static void ensure_initialized();

static void create_init(pls::cs::Ref<ByteArrayOutputStream> self);

static void Close(pls::cs::Ref<ByteArrayOutputStream> self);

static pls::cs::String ToString(pls::cs::Ref<ByteArrayOutputStream> self);

static pls::cs::Ref<ByteArrayOutputStream> create();

pls::cs::Array<std::uint8_t> ToByteArray();
};
} // namespace java::io
}
