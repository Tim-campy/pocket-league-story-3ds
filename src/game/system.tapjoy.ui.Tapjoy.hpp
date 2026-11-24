// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"
#include "kairo.unity.system.tapjoy.ui.ITapjoy.hpp"

namespace pls::game {
namespace system::tapjoy::ui {

struct Tapjoy : pls::kairo::MonoBehaviour, kairo::unity::system::tapjoy::ui::ITapjoy {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(pls::kairo::MonoBehaviour, {"M:kairo.unity.system.tapjoy.ui.ITapjoy.CallBalance",
                                                   "M:system.tapjoy.ui.Tapjoy.CallBalance"});
    PLS_MANAGED_CLASS("system.tapjoy.ui.Tapjoy", Tapjoy, pls::kairo::MonoBehaviour, ITapjoy)
    pls::cs::String key_{};
    pls::cs::String offerwallName_{};
    pls::cs::Ref<TJPlacement> offerwallPlacement_{};
    bool contentIsReadyForPlacement_{};
    bool initialize_{};
    bool backupMute_{};
    pls::cs::Int32 balance_{};
    bool log_{};
    pls::cs::Int32 offerState_{};
    void CallBalance() override;

    static pls::cs::Ref<Tapjoy> create(pls::cs::String key, pls::cs::String offerwallName, bool log);

    static void ensure_initialized();

    static pls::cs::Ref<Tapjoy>& instance_();

    static void create_init(pls::cs::Ref<Tapjoy> self, pls::cs::String key, pls::cs::String offerwallName,
                            bool log);

    void Start();

    void OnApplicationQuit();

    static pls::cs::Ref<Tapjoy> GetInstance();

    void Init();

    void Quit();

    bool ShowOffers();

    pls::cs::Int32 GetOfferState();

    pls::cs::Int32 GetBalance();

    void AddBalance(pls::cs::Int32 add);

    void SubBalance(pls::cs::Int32 sub);

    void Print(pls::cs::String s);
};
} // namespace system::tapjoy::ui
}
