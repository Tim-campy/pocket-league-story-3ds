// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "data.BaseData.hpp"
#include "game_generated_forward.hpp"

namespace pls::game {
namespace data {

struct MapchipMain : BaseData {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("data.MapchipMain", MapchipMain, BaseData)
    pls::cs::String name_{};
    pls::cs::Int32 img_{};
    pls::cs::Int32 seb_{};
    pls::cs::Int32 fenceId_{};
    static constexpr pls::cs::Int32 FLAG_GROUND = 1;
    static constexpr pls::cs::Int32 FLAG_OUT_MAP = 2;
    static constexpr pls::cs::Int32 FLAG_GROUND_SEASON_CHANGE = 4;
    static constexpr pls::cs::Int32 FLAG_GROUND_GROUND = 8;
    static constexpr pls::cs::Int32 FLAG_GROUND_SNOW = 16;
    static constexpr pls::cs::Int32 FLAG_GROUND_GRAVEL = 32;
    static constexpr pls::cs::Int32 FLAG_GROUND_GRASS2 = 64;
    static constexpr pls::cs::Int32 FLAG_VACANT = 128;
    static constexpr pls::cs::Int32 FLAG_TREE = 256;
    static constexpr pls::cs::Int32 FLAG_FENCE_GRASS = 512;
    static void ensure_initialized();

    static pls::cs::Ref<main::AppData>& apdat_();

    static pls::cs::Ref<game::UserData>& udat_();

    static void create_init(pls::cs::Ref<MapchipMain> self);

    static void create_init(pls::cs::Ref<MapchipMain> self, pls::cs::String src);

    static pls::cs::Ref<MapchipMain> create();

    static pls::cs::Ref<MapchipMain> create(pls::cs::String src);

    void Load(pls::cs::String src);
};
} // namespace data
}
