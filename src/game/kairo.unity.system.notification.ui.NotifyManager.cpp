// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.native.KairoPlugin.hpp"
#include "kairo.unity.system.KairoBase.hpp"
#include "kairo.unity.system.notification.ui.NotifyManager.hpp"
using StringArray = pls::cs::Array<pls::cs::String>;

namespace pls::game {
namespace kairo::unity::system::notification::ui {

void NotifyManager::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(values_, visitor);
}

static pls::cs::Ref<NotifyManager> NotifyManager_instance__storage{};

static PLS_NOINLINE void cs_init_4368d694d01424b0_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(NotifyManager_instance__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.system.notification.ui.NotifyManager", flag, []() {

    });
}

void NotifyManager::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_4368d694d01424b0_slow(flag);
}

pls::cs::Ref<NotifyManager>& NotifyManager::instance_() {
    NotifyManager::ensure_initialized();
    return NotifyManager_instance__storage;
}

void NotifyManager::create_init(pls::cs::Ref<NotifyManager> self) {
    NotifyManager::ensure_initialized();
    self->filterLevel_ = 3 /* FilterLevel.All */;
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.system.notification.ui.NotifyManager.#ctor", kairo);
    {
        self->values_ = pls::cs::List<pls::cs::String>::make();
        StringArray array = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() {
                auto cs_text = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return pls::kairo::PlayerPrefs::GetString(literal(u"_notification_data"), literal(u""));
                });
                auto cs_separators = pls::cs::Array<char16_t>::from({char16_t(10)});
                if (cs_text.is_null())
                    throw pls::cs::NullReferenceException();
                return pls::cs::string_split(cs_text, cs_separators, true);
            }());
        });
        {
            auto cs_each300 = array;
            for (std::int32_t cs_i300 = 0; cs_i300 < cs_each300.length(); ++cs_i300) {
                pls::cs::String item = cs_each300.get_Item(cs_i300);
                {
                    pls::diagnostic::api_call([&]() -> decltype(auto) { return self->values_.Add(item); });
                }
            }
        }
        self->filterLevel_ =
            pls::cs::cast_integral<pls::cs::Int32>(native::KairoPlugin::GetNotificationFilter());
    }
}

// M:kairo.unity.system.notification.ui.NotifyManager.#ctor
pls::cs::Ref<NotifyManager> NotifyManager::create() {
    NotifyManager::ensure_initialized();
    auto self = pls::cs::make_ref<NotifyManager>();
    NotifyManager::create_init(self);
    return self;
}

// M:kairo.unity.system.notification.ui.NotifyManager.GetInstance
pls::cs::Ref<NotifyManager> NotifyManager::GetInstance() {
    NotifyManager::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.system.notification.ui.NotifyManager.GetInstance", kairo);
    {
        return NotifyManager::instance_();
    }
}

// M:kairo.unity.system.notification.ui.NotifyManager.DoNotify
void NotifyManager::DoNotify() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.system.notification.ui.NotifyManager.DoNotify", kairo);
    {
        pls::cs::Ref<KairoBase> instance = KairoBase::GetInstance();
        if (!is_null(instance) && require(instance)->IsGamePlaying()) {
            native::KairoPlugin::CancelNotifications(false, true);
            this->OnNotify();
        }
    }
}

// M:kairo.unity.system.notification.ui.NotifyManager.OnNotify
void NotifyManager::OnNotify() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.system.notification.ui.NotifyManager.OnNotify", kairo);
    {
    }
}

// M:kairo.unity.system.notification.ui.NotifyManager.OnReceiveValue
void NotifyManager::OnReceiveValue() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.system.notification.ui.NotifyManager.OnReceiveValue",
                     kairo);
    {
    }
}

// M:kairo.unity.system.notification.ui.NotifyManager.DoCancel
void NotifyManager::DoCancel() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.system.notification.ui.NotifyManager.DoCancel", kairo);
    {
        pls::cs::Ref<KairoBase> instance = KairoBase::GetInstance();
        if (!is_null(instance) && require(instance)->IsGamePlaying()) {
            native::KairoPlugin::CancelNotifications(true, true);
        } else {
            native::KairoPlugin::CancelNotifications(true, false);
        }
    }
}

// M:kairo.unity.system.notification.ui.NotifyManager.IsPushEnable
bool NotifyManager::IsPushEnable() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.system.notification.ui.NotifyManager.IsPushEnable",
                     kairo);
    {
        return false;
    }
}
} // namespace kairo::unity::system::notification::ui
}
