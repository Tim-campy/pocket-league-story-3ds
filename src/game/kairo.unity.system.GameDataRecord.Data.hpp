// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::system {

struct GameDataRecord_Data : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("kairo.unity.system.GameDataRecord+Data", GameDataRecord_Data, pls::cs::Object)
    pls::cs::Ref<generated::kairo::unity::util::SecureString> name_{};
    pls::cs::Ref<util::SecureByteArray> value_{};
    bool toset_{};
    bool acquired_{};

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<GameDataRecord_Data> self, pls::cs::String name,
                            pls::cs::Array<std::uint8_t> value, bool toset);

    static pls::cs::Ref<GameDataRecord_Data> create(pls::cs::String name, pls::cs::Array<std::uint8_t> value,
                                                    bool toset);

    pls::cs::Ref<GameDataRecord_Data> Clone();
};
} // namespace kairo::unity::system
}
