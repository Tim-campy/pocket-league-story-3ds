// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::math::KairoMath {
inline constexpr pls::cs::Single PI = 3.1415927f;

void ensure_initialized();

pls::cs::Array<pls::cs::Int32>& checkHitLine_tmp();

pls::cs::Array<pls::cs::Single>& checkHitLineF_tmp();

pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>& getNormalVector_tmp();

pls::cs::Array<pls::cs::Single>& getNormalVector2D_tmp();

pls::cs::Array<pls::cs::Single>& transPoint_tmp1();

pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& transPoint_tmp2();

pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& transPoint_tmp3();

bool CheckHitRect(pls::cs::Single x1, pls::cs::Single y1, pls::cs::Single w1, pls::cs::Single h1,
                  pls::cs::Single x2, pls::cs::Single y2, pls::cs::Single w2, pls::cs::Single h2);

pls::cs::Int32 Pow(pls::cs::Int32 x, pls::cs::Int32 y);
} // namespace kairo::unity::math::KairoMath
}
