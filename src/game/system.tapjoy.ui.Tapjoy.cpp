// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "TJPlacement.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "kairo.unity.system.tapjoy.ui.ITapjoy.hpp"
#include "system.tapjoy.ui.Tapjoy.hpp"

namespace kl_util = pls::generated::kairo::unity::util;

namespace pls::game {
namespace system::tapjoy::ui {

void Tapjoy::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::kairo::MonoBehaviour::trace_edges(visitor);
    pls::cs::trace_value(key_, visitor);
    pls::cs::trace_value(offerwallName_, visitor);
    pls::cs::trace_value(offerwallPlacement_, visitor);
}

static pls::cs::Ref<Tapjoy> Tapjoy_instance__storage{};

static PLS_NOINLINE void cs_init_15d0c6400449da70_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots(
        [](const pls::cs::EdgeVisitor& visitor) { pls::cs::trace_value(Tapjoy_instance__storage, visitor); });
    static pls::cs::TypeInitState state;
    state.run("system.tapjoy.ui.Tapjoy", flag, []() {

    });
}

void Tapjoy::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_15d0c6400449da70_slow(flag);
}

pls::cs::Ref<Tapjoy>& Tapjoy::instance_() {
    Tapjoy::ensure_initialized();
    return Tapjoy_instance__storage;
}

// M:system.tapjoy.ui.Tapjoy.#ctor(System.String,System.String,System.Boolean)
void Tapjoy::create_init(pls::cs::Ref<Tapjoy> self, pls::cs::String key, pls::cs::String offerwallName,
                         bool log) {
    Tapjoy::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.tapjoy.ui.Tapjoy.#ctor(System.String,System.String,System.Boolean)", game);
    {
        Tapjoy::instance_() = self;
        Tapjoy::instance_() = self;
        self->key_ = key;
        self->offerwallName_ = offerwallName;
        self->log_ = log;
    }
}

// M:system.tapjoy.ui.Tapjoy.Start
void Tapjoy::Start() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.tapjoy.ui.Tapjoy.Start", game);
    {
    }
}

// M:system.tapjoy.ui.Tapjoy.OnApplicationQuit
void Tapjoy::OnApplicationQuit() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.tapjoy.ui.Tapjoy.OnApplicationQuit", game);
    {
    }
}

// M:system.tapjoy.ui.Tapjoy.GetInstance
pls::cs::Ref<Tapjoy> Tapjoy::GetInstance() {
    Tapjoy::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.tapjoy.ui.Tapjoy.GetInstance", game);
    {
        return Tapjoy::instance_();
    }
}

// M:system.tapjoy.ui.Tapjoy.Init
void Tapjoy::Init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.tapjoy.ui.Tapjoy.Init", game);
    {
        if (initialize_) {
            return;
        }
        {
            Print(literal(u"[Tapjoy] Init"));
            initialize_ = true;
            balance_ = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::kairo::PlayerPrefs::GetInt(literal(u"_Tapjoy"), 0); });
            Print(pls::cs::String::concat(literal(u"[Tapjoy] Init_balance:"), integer_string(balance_)));
        }
    }
}

// M:system.tapjoy.ui.Tapjoy.Quit
void Tapjoy::Quit() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.tapjoy.ui.Tapjoy.Quit", game);
    {
        if (!(initialize_)) {
            return;
        }
        {
            Print(literal(u"[Tapjoy] Quit"));
        }
    }
}

// M:system.tapjoy.ui.Tapjoy.CallBalance
void Tapjoy::CallBalance() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.tapjoy.ui.Tapjoy.CallBalance", game);
    {
        Print(literal(u"[Tapjoy] CallBalance"));
    }
}

// M:system.tapjoy.ui.Tapjoy.ShowOffers
bool Tapjoy::ShowOffers() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.tapjoy.ui.Tapjoy.ShowOffers", game);
    {
        this->offerState_ = 2;
        return false;
    }
}

// M:system.tapjoy.ui.Tapjoy.GetOfferState
pls::cs::Int32 Tapjoy::GetOfferState() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.tapjoy.ui.Tapjoy.GetOfferState", game);
    {
        return offerState_;
    }
}

// M:system.tapjoy.ui.Tapjoy.GetBalance
pls::cs::Int32 Tapjoy::GetBalance() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.tapjoy.ui.Tapjoy.GetBalance", game);
    {
        return balance_;
    }
}

// M:system.tapjoy.ui.Tapjoy.AddBalance(System.Int32)
void Tapjoy::AddBalance(pls::cs::Int32 add) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.tapjoy.ui.Tapjoy.AddBalance(System.Int32)", game);
    {
        balance_ = balance_ + add;
        Print(pls::cs::String::concat(literal(u"[Tapjoy] AddBalance:"), integer_string(balance_)));
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return pls::kairo::PlayerPrefs::SetInt(literal(u"_Tapjoy"), balance_);
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) { return pls::kairo::PlayerPrefs::Save(); });
    }
}

// M:system.tapjoy.ui.Tapjoy.SubBalance(System.Int32)
void Tapjoy::SubBalance(pls::cs::Int32 sub) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.tapjoy.ui.Tapjoy.SubBalance(System.Int32)", game);
    {
        balance_ = balance_ - sub;
        if (balance_ <= 0) {
            balance_ = 0;
        }
        Print(pls::cs::String::concat(literal(u"[Tapjoy] SubBalance:"), integer_string(balance_)));
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return pls::kairo::PlayerPrefs::SetInt(literal(u"_Tapjoy"), balance_);
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) { return pls::kairo::PlayerPrefs::Save(); });
    }
}

// M:system.tapjoy.ui.Tapjoy.Print(System.String)
void Tapjoy::Print(pls::cs::String s) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.tapjoy.ui.Tapjoy.Print(System.String)", game);
    {
        if (log_) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_util::Log::Info(s, pls::cs::Ref<pls::cs::ExceptionObject>{});
            });
        }
    }
}
} // namespace system::tapjoy::ui
}
