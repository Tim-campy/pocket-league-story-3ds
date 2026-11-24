// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.graph.Graph.hpp"
#include "kairo.unity.m3d4.util3d.FastMath.hpp"

namespace pls::game {
namespace kairo::unity::graph::Graph {

static PLS_NOINLINE void cs_init_e9cc65282df10bc8_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.graph.Graph", flag, []() {

    });
}

void ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_e9cc65282df10bc8_slow(flag);
}

// M:kairo.unity.graph.Graph.Easing(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Int32 Easing(pls::cs::Int32 v0, pls::cs::Int32 v1, pls::cs::Int32 length, pls::cs::Int32 frame,
                      pls::cs::Int32 edging) {
    Graph::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.graph.Graph.Easing(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        kairo);
    {
        if (frame < 0) {
            return v0;
        }
        if (frame >= length) {
            return v1;
        }
        pls::cs::Single num = pls::cs::Single(frame) / pls::cs::Single(length);
        pls::cs::Single num2 = m3d4::util3d::FastMath::Sin(3.1415927f * num * 180.0f / 3.1415927f);
        pls::cs::Int32 num3 = pls::cs::to_int32(
            (pls::cs::Single(v0) +
             pls::cs::Single((v1 - v0)) * (num + pls::cs::Single(edging) / 314.15927f * num2)));
        if (v0 < v1) {
            if (num3 < v0) {
                num3 = v0;
            }
            if (num3 > v1) {
                num3 = v1;
            }
        } else {
            if (num3 > v0) {
                num3 = v0;
            }
            if (num3 < v1) {
                num3 = v1;
            }
        }
        return num3;
    }
}
} // namespace kairo::unity::graph::Graph
}
