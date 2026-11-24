// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace main {

struct AppData_stringErrorCode : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("main.AppData+stringErrorCode", AppData_stringErrorCode, pls::cs::Object)
    static constexpr pls::cs::Int32 app_name = 2131034112;
    static constexpr pls::cs::Int32 ERROR_MESSAGE_LICENSING_CHECK = 2131034113;
    static constexpr pls::cs::Int32 ERROR_MESSAGE_LICENSING_ERROR00 = 2131034114;
    static constexpr pls::cs::Int32 ERROR_MESSAGE_LICENSING_ERROR01 = 2131034115;
    static constexpr pls::cs::Int32 ERROR_MESSAGE_LICENSING_ERROR02 = 2131034116;
    static constexpr pls::cs::Int32 ERROR_MESSAGE_LICENSING_ERROR03 = 2131034117;
    static constexpr pls::cs::Int32 ERROR_MESSAGE_LICENSING_ERROR04 = 2131034118;
    static constexpr pls::cs::Int32 ERROR_MESSAGE_LICENSING_ERROR05 = 2131034119;
    static constexpr pls::cs::Int32 ERROR_MESSAGE_LICENSING_ERROR = 2131034120;
    static void ensure_initialized();

    static void create_init(pls::cs::Ref<AppData_stringErrorCode> self);

    static pls::cs::Ref<AppData_stringErrorCode> create();
};
} // namespace main
}
