// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace system::billing::ui {

struct ApplyTask : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("system.billing.ui.ApplyTask", ApplyTask, pls::cs::Object)
    pls::cs::Ref<BillingItem> item_{};
    pls::cs::Ref<generated::kairo::unity::util::SecureString> gift_{};
    bool notice_{};
    bool lock_{};
    pls::cs::Int32 type_{};
    pls::cs::Ref<generated::kairo::unity::util::SecureString> name_{};
    pls::cs::Ref<generated::kairo::unity::util::SecureString> productId_{};
    pls::cs::Ref<generated::kairo::unity::util::SecureString> provisionType_{};
    pls::cs::Ref<generated::kairo::unity::util::SecureString> provisionValueS_{};
    pls::cs::Ref<generated::kairo::unity::util::SecureInt> provisionValueI_{};
    pls::cs::Int32 talkCharaId_{};
    pls::cs::Ref<generated::kairo::unity::util::SecureString> talkText_{};
    static constexpr pls::cs::Int32 TYPE_PROVISION = 0;
    static constexpr pls::cs::Int32 TYPE_CANCEL = 1;
    static void ensure_initialized();

    static void create_init(pls::cs::Ref<ApplyTask> self);

    static void create_init(pls::cs::Ref<ApplyTask> self, pls::cs::Ref<BillingItem> item, pls::cs::Int32 type,
                            bool notice);

    static void create_init(pls::cs::Ref<ApplyTask> self, pls::cs::String gift);

    static pls::cs::Ref<ApplyTask> create();

    static pls::cs::Ref<ApplyTask> create(pls::cs::Ref<BillingItem> item, pls::cs::Int32 type, bool notice);

    static pls::cs::Ref<ApplyTask> create(pls::cs::String gift);

    void Init(pls::cs::Ref<BillingItem> item, pls::cs::String gift, pls::cs::Int32 type, bool notice);

    void Serialize(pls::cs::Ref<generated::java::io::OutputStream> os);

    void Deserialize(pls::cs::Ref<generated::java::io::InputStream> stream);

    bool Enable();

    bool IsItem();

    bool IsGift();

    bool IsGiftScript();

    bool IsGameApply();

    bool Equals(pls::cs::Ref<ApplyTask> obj);
};
} // namespace system::billing::ui
}
