// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace game {

struct TArea : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("game.TArea", TArea, pls::cs::Object)
    pls::cs::Ref<main::AppData> apdat_{};
    pls::cs::Ref<UserData> udat_{};
    pls::cs::Int32 rootId_{};
    pls::cs::Int32 pId_{};
    pls::cs::Int32 tMode_{};
    pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> centerPos_{};
    pls::cs::Single coatW_{};
    pls::cs::Single coatH_{};
    pls::cs::Array<pls::cs::Ref<TGroupArea>> tGroupAreas_{};
    pls::cs::Int32 state_{};
    pls::cs::Int32 stateCnt_{};
    static constexpr pls::cs::Int32 STATE_NEW_STANDBY = 10;
    static constexpr pls::cs::Int32 STATE_NEW_GATHER = 11;
    static constexpr pls::cs::Int32 STATE_NEW_MAIN = 12;
    static constexpr pls::cs::Int32 STATE_NEW_TRAINING_STOP = 13;
    static constexpr pls::cs::Int32 STATE_NEW_TRAINING_CHANGE = 14;
    static void ensure_initialized();

    static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& st_gatherPos();

    static void create_init(pls::cs::Ref<TArea> self);

    static pls::cs::Ref<TArea> create();

    void Init(pls::cs::Int32 rootId, pls::cs::Int32 pId);

    void Serialize(pls::cs::Ref<generated::java::io::OutputStream> os);

    void Deserialize(pls::cs::Ref<generated::java::io::InputStream> stream);

    void Deserialize2();

    void Update();

    void Draw(pls::cs::Ref<pls::kairo::Graphics> g);

    void ChangeState(pls::cs::Int32 next_state);

    pls::cs::Int32 GetAreaMaxNum(pls::cs::Int32 tMode);

    pls::cs::Int32 GetAreaBallNum(pls::cs::Int32 tMode);

    void SetPlayerGatherPos();

    void SetTrainingArea(pls::cs::Int32 tMode);

    pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>
    GetStartTrainingGatherPos(pls::cs::Ref<TGroupArea> tGroupArea, pls::cs::Ref<TPlayer> tPlayer);
};
} // namespace game
}
