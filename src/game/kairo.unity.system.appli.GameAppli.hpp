// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::system::appli {

struct GameAppli {
    void trace_edges(const pls::cs::EdgeVisitor&) const;
    pls::cs::Int32 Pid{};
    pls::cs::String Language{};
    pls::cs::String Name{};
    pls::cs::String AndPkg{};
    pls::cs::Int32 AndPrice{};
    pls::cs::Int32 AndDate{};
    pls::cs::String IOSPkg{};
    pls::cs::String IOSId{};
    pls::cs::Int32 IOSPrice{};
    pls::cs::Int32 IOSDate{};

    static void ensure_initialized();

    static bool IsReleaseAndroid(GameAppli* self);

    static bool IsReleaseIOS(GameAppli* self);
};
} // namespace kairo::unity::system::appli
}
