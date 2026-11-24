// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.io.ScratchPad.hpp"
using ByteArray = pls::cs::Array<std::uint8_t>;

namespace pls::game {
namespace kairo::unity::io::ScratchPad {

static PLS_NOINLINE void cs_init_fd48512b974504f6_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.io.ScratchPad", flag, []() {

    });
}

void ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_fd48512b974504f6_slow(flag);
}

// M:kairo.unity.io.ScratchPad.ReadByteArray(System.Int32,System.Int32,System.Int32)
ByteArray ReadByteArray(pls::cs::Int32 spid, pls::cs::Int32 pos, pls::cs::Int32 length) {
    ScratchPad::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.io.ScratchPad.ReadByteArray(System.Int32,System.Int32,System.Int32)",
                     kairo);
    {
        return ByteArray{};
    }
}

// M:kairo.unity.io.ScratchPad.WriteByteArray(System.Int32,System.Int32,System.Byte[])
void WriteByteArray(pls::cs::Int32 spid, pls::cs::Int32 pos, ByteArray data) {
    ScratchPad::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.io.ScratchPad.WriteByteArray(System.Int32,System.Int32,System.Byte[])",
                     kairo);
    {
    }
}

// M:kairo.unity.io.ScratchPad.GetSPSize(System.Int32)
pls::cs::Int32 GetSPSize(pls::cs::Int32 spid) {
    ScratchPad::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.ScratchPad.GetSPSize(System.Int32)", kairo);
    {
        return 0;
    }
}
} // namespace kairo::unity::io::ScratchPad
}
