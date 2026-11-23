// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace game {

struct GameUtil : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("game.GameUtil", GameUtil, pls::cs::Object)
static constexpr pls::cs::Int32 UP = 0;static constexpr pls::cs::Int32 DOWN = 1;static constexpr pls::cs::Int32 LEFT = 2;static constexpr pls::cs::Int32 RIGHT = 3;
static void ensure_initialized();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& DIRECT();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& DRAW_DIRECT();

static pls::cs::Int32& MAX_ANGLE();

static pls::cs::Int32& MAX_ANGLE2();

static pls::cs::Int32& MAX_ANGLE3();

static pls::cs::Single& MAX_ANGLEDATA_COS();

static pls::cs::Single& MAX_ANGLEDATA_COS2();

static pls::cs::Single& MAX_ANGLEDATA_COS3();

static pls::cs::Single& MAX_ANGLEDATA_SIN();

static pls::cs::Single& MAX_ANGLEDATA_SIN2();

static pls::cs::Single& MAX_ANGLEDATA_SIN3();

static pls::cs::Ref<generated::java::util::JRandom>& random();

static pls::cs::Array<pls::cs::Single>& SIN();

static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& temp1();

static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& temp2();

static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& temp3();

static pls::cs::Array<pls::cs::Int32>& vec1();

static pls::cs::Array<pls::cs::Int32>& vec2();

static void create_init(pls::cs::Ref<GameUtil> self);

static pls::cs::Ref<GameUtil> create();

static pls::cs::Int32 ConvertGameEva(pls::cs::Int32 param);

static pls::cs::Int32 RateConvert(pls::cs::Int32 x,pls::cs::Int32 c1min,pls::cs::Int32 c1max,pls::cs::Int32 c2min,pls::cs::Int32 c2max,bool ch_limit);

static pls::cs::Int64 RateConvertLong(pls::cs::Int64 x,pls::cs::Int64 c1min,pls::cs::Int64 c1max,pls::cs::Int64 c2min,pls::cs::Int64 c2max,bool ch_limit);

static pls::cs::Single RateConvertFloat(pls::cs::Single x,pls::cs::Single c1min,pls::cs::Single c1max,pls::cs::Single c2min,pls::cs::Single c2max,bool ch_limit);

static pls::cs::Int32 RateConvertArea(pls::cs::Int32 x,pls::cs::Int32 c1min,pls::cs::Int32 c1max,pls::cs::Int32 c2min,pls::cs::Int32 c2max,bool ch_limit);

static pls::cs::Int32 AddRand(pls::cs::Int32 value,pls::cs::Int32 rand_min,pls::cs::Int32 rand_max,pls::cs::Int32 ret_min,pls::cs::Int32 ret_max);

static pls::cs::Single RateChA(pls::cs::Single a2,pls::cs::Single b2,pls::cs::Single X);

static pls::cs::Single RateChB(pls::cs::Single a2,pls::cs::Single b2,pls::cs::Single X);

pls::cs::Array<pls::cs::Int32> Bezier(pls::cs::Int64 x1,pls::cs::Int64 y1,pls::cs::Int64 x2,pls::cs::Int64 y2,pls::cs::Int64 x3,pls::cs::Int64 y3,pls::cs::Int32 t,pls::cs::Array<pls::cs::Int32> result);

static bool ChRectHitRect(pls::cs::Int32 x1,pls::cs::Int32 y1,pls::cs::Int32 w1,pls::cs::Int32 h1,pls::cs::Int32 x2,pls::cs::Int32 y2,pls::cs::Int32 w2,pls::cs::Int32 h2,bool directUp);

static bool ChRectHitRectFloat(pls::cs::Single x1,pls::cs::Single y1,pls::cs::Single w1,pls::cs::Single h1,pls::cs::Single x2,pls::cs::Single y2,pls::cs::Single w2,pls::cs::Single h2,bool directUp);

static bool ChRectHitParallel(pls::cs::Int32 leftTopX,pls::cs::Int32 leftTopY,pls::cs::Int32 w,pls::cs::Int32 h,pls::cs::Int32 p1X,pls::cs::Int32 p1Y,pls::cs::Int32 p2X,pls::cs::Int32 p2Y);

pls::cs::Int32 Pow(pls::cs::Int32 x,pls::cs::Int32 y);

static pls::cs::Int32 Random(pls::cs::Int32 n);

static pls::cs::Int32 Clamp(pls::cs::Int32 val,pls::cs::Int32 min_,pls::cs::Int32 max_);

static pls::cs::Int64 ClampLong(pls::cs::Int64 val,pls::cs::Int64 min_,pls::cs::Int64 max_);

static pls::cs::Int32 ClampMin(pls::cs::Int32 val,pls::cs::Int32 min_);

static pls::cs::Int32 ClampMax(pls::cs::Int32 val,pls::cs::Int32 max_);

static pls::cs::Int64 ClampMinLong(pls::cs::Int64 val,pls::cs::Int64 min_);

static pls::cs::Int64 ClampMaxLong(pls::cs::Int64 val,pls::cs::Int64 max_);

static pls::cs::Int32 ConvertKeyToGameKey(pls::cs::Int32 input_key);

static pls::cs::Single SetAMSet(pls::cs::Single dis,pls::cs::Int32 t1,pls::cs::Int32 t2);

static pls::cs::Single SetVStop(pls::cs::Single dis,pls::cs::Int32 t);

static pls::cs::Single SetAStop(pls::cs::Single dis,pls::cs::Int32 t);

static pls::cs::Single SetVReturn(pls::cs::Single dis,pls::cs::Int32 t);

static pls::cs::Single SetAReturn(pls::cs::Single dis,pls::cs::Int32 t);

static pls::cs::Single SetVVelocity(pls::cs::Single dis,pls::cs::Int32 t);

static pls::cs::Single SetAVelocity(pls::cs::Single dis,pls::cs::Int32 t);

static pls::cs::Single Convert_return(pls::cs::Single time,pls::cs::Int32 TIME,pls::cs::Single DIS);

static pls::cs::Single SetVdecreV(pls::cs::Single decre_rate,pls::cs::Single DIS,pls::cs::Int32 TIME);

static pls::cs::Single SetAdecreV(pls::cs::Single decre_rate,pls::cs::Single DIS,pls::cs::Int32 TIME);

static pls::cs::Single SetV(pls::cs::Single a,pls::cs::Single DIS,pls::cs::Int32 TIME);

static pls::cs::Single GetA_fixV0DIS(pls::cs::Single v0,pls::cs::Single DIS,pls::cs::Int32 TIME);

static pls::cs::Single Sin(pls::cs::Int32 angle);

static pls::cs::Single Cos(pls::cs::Int32 angle);

static pls::cs::Single GetDistanceFromPos(pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> a,pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> b,pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> c);

static pls::cs::Single Abs(pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> a,pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> b);

static pls::cs::Single Dot(pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> a,pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> b);

static pls::cs::Single Cross(pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> a,pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> b);

static bool ChCrossLine(pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> a1,pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> a2,pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> b1,pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> b2);

static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> GetCrossPoint(pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> a1,pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> a2,pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> b1,pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> b2);

static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> GetCrossPointBool(pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> a,pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> b,pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> c,bool limit);

static bool ChOnLine(pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> p1,pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> p2,pls::cs::Single h,pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> target_pos);

static bool ChOnLineIntArrayIntArrayIntIntArray(pls::cs::Array<pls::cs::Int32> p1,pls::cs::Array<pls::cs::Int32> p2,pls::cs::Int32 h,pls::cs::Array<pls::cs::Int32> target_pos);

static void Sub(pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> a,pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> b,pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> var_out);
};
} // namespace game
}
