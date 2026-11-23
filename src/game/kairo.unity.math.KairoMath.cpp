// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/kairo.unity.m3d4.util3d.Vector3D.hpp"
#include "kairo.unity.math.KairoMath.hpp"

namespace kl_util3d = pls::generated::kairo::unity::m3d4::util3d;

using FloatArray = pls::cs::Array<pls::cs::Single>;
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace kairo::unity::math::KairoMath {

static IntArray checkHitLine_tmp_storage{};

static FloatArray checkHitLineF_tmp_storage{};

static pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>> getNormalVector_tmp_storage{};

static FloatArray getNormalVector2D_tmp_storage{};

static FloatArray transPoint_tmp1_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> transPoint_tmp2_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> transPoint_tmp3_storage{};

static PLS_NOINLINE void cs_init_072159abb3229c71_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(checkHitLine_tmp_storage,visitor);pls::cs::trace_value(checkHitLineF_tmp_storage,visitor);pls::cs::trace_value(getNormalVector_tmp_storage,visitor);pls::cs::trace_value(getNormalVector2D_tmp_storage,visitor);pls::cs::trace_value(transPoint_tmp1_storage,visitor);pls::cs::trace_value(transPoint_tmp2_storage,visitor);pls::cs::trace_value(transPoint_tmp3_storage,visitor);});static pls::cs::TypeInitState state;state.run("kairo.unity.math.KairoMath",flag,[](){
checkHitLine_tmp_storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.math.KairoMath.checkHitLine_tmp",[&](){return IntArray::make(2);});
checkHitLineF_tmp_storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.math.KairoMath.checkHitLineF_tmp",[&](){return FloatArray::make(2);});
transPoint_tmp1_storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.math.KairoMath.transPoint_tmp1",[&](){return FloatArray::make(3);});
transPoint_tmp2_storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.math.KairoMath.transPoint_tmp2",[&](){return kl_util3d::Vector3D::create(0.0f, 0.0f, 0.0f);});
transPoint_tmp3_storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.math.KairoMath.transPoint_tmp3",[&](){return kl_util3d::Vector3D::create();});
getNormalVector_tmp_storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.math.KairoMath.getNormalVector_tmp",[&](){return pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::from({kl_util3d::Vector3D::create(), kl_util3d::Vector3D::create()});});
getNormalVector2D_tmp_storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.math.KairoMath.getNormalVector2D_tmp",[&](){return FloatArray::make(2);});

});}

void ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_072159abb3229c71_slow(flag);}

IntArray& checkHitLine_tmp(){KairoMath::ensure_initialized();return checkHitLine_tmp_storage;}

FloatArray& checkHitLineF_tmp(){KairoMath::ensure_initialized();return checkHitLineF_tmp_storage;}

pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>& getNormalVector_tmp(){KairoMath::ensure_initialized();return getNormalVector_tmp_storage;}

FloatArray& getNormalVector2D_tmp(){KairoMath::ensure_initialized();return getNormalVector2D_tmp_storage;}

FloatArray& transPoint_tmp1(){KairoMath::ensure_initialized();return transPoint_tmp1_storage;}

pls::cs::Ref<kl_util3d::Vector3D>& transPoint_tmp2(){KairoMath::ensure_initialized();return transPoint_tmp2_storage;}

pls::cs::Ref<kl_util3d::Vector3D>& transPoint_tmp3(){KairoMath::ensure_initialized();return transPoint_tmp3_storage;}

// M:kairo.unity.math.KairoMath.CheckHitRect(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
bool CheckHitRect(pls::cs::Single x1,pls::cs::Single y1,pls::cs::Single w1,pls::cs::Single h1,pls::cs::Single x2,pls::cs::Single y2,pls::cs::Single w2,pls::cs::Single h2) {
KairoMath::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.math.KairoMath.CheckHitRect(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)",kairo);
{
if (x1 <= x2 + w2 && y1 <= y2 + h2 && x1 + w1 >= x2) {
return y1 + h1 >= y2;
}
return false;
}

}

// M:kairo.unity.math.KairoMath.Pow(System.Int32,System.Int32)
pls::cs::Int32 Pow(pls::cs::Int32 x,pls::cs::Int32 y) {
KairoMath::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.math.KairoMath.Pow(System.Int32,System.Int32)",kairo);
{
pls::cs::Int32 num = 1;
if (y > 0) {
num = x;
}
for (pls::cs::Int32 i = 1; i < y; ++i) {
num *= x;
}
return num;
}

}
} // namespace kairo::unity::math::KairoMath
}
