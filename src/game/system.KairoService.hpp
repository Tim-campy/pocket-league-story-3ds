// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"
#include "kairo.unity.system.KairoBase.hpp"

namespace pls::game {
namespace system {

struct KairoService : kairo::unity::system::KairoBase {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(
        KairoBase, {"M:kairo.unity.system.KairoBase.OnInit", "M:system.KairoService.OnInit"},
        {"M:kairo.unity.system.KairoBase.OnStart", "M:system.KairoService.OnStart"},
        {"M:kairo.unity.system.KairoBase.Connected(System.String,System.Byte[],System.Boolean)",
         "M:system.KairoService.Connected(System.String,System.Byte[],System.Boolean)"},
        {"M:kairo.unity.system.KairoBase.Update", "M:system.KairoService.Update"},
        {"M:kairo.unity.system.KairoBase.Finish", "M:system.KairoService.Finish"},
        {"M:kairo.unity.system.KairoBase.OnLoad(java.io.InputStream)",
         "M:system.KairoService.OnLoad(java.io.InputStream)"},
        {"M:kairo.unity.system.KairoBase.OnWrite(java.io.OutputStream)",
         "M:system.KairoService.OnWrite(java.io.OutputStream)"},
        {"M:kairo.unity.system.KairoBase.OnNewGame(System.Boolean)",
         "M:system.KairoService.OnNewGame(System.Boolean)"},
        {"M:kairo.unity.system.KairoBase.OnLoadGame(java.io.InputStream)",
         "M:system.KairoService.OnLoadGame(java.io.InputStream)"},
        {"M:kairo.unity.system.KairoBase.OnWriteGame(java.io.OutputStream)",
         "M:system.KairoService.OnWriteGame(java.io.OutputStream)"},
        {"M:kairo.unity.system.KairoBase.Save", "M:system.KairoService.Save"},
        {"M:kairo.unity.system.KairoBase.SaveAll", "M:system.KairoService.SaveAll"});
    PLS_MANAGED_CLASS("system.KairoService", KairoService, KairoBase)
    pls::cs::Ref<java::lang::JThread> provideThread_{};
    bool autoProvision_{};
    pls::cs::Int32 lastFormId_{};
    void OnInit() override;
    void OnStart() override;
    void Connected(pls::cs::String cgi, pls::cs::Array<std::uint8_t> send, bool split) override;
    void Update() override;
    void Finish() override;
    void OnLoad(pls::cs::Ref<generated::java::io::InputStream> stream) override;
    void OnWrite(pls::cs::Ref<generated::java::io::OutputStream> os) override;
    void OnNewGame(bool take) override;
    void OnLoadGame(pls::cs::Ref<generated::java::io::InputStream> stream) override;
    void OnWriteGame(pls::cs::Ref<generated::java::io::OutputStream> os) override;
    void Save() override;
    void SaveAll() override;
    static constexpr pls::cs::Int32 FLAG_BILLING_LIST_ERR = 65536;
    static constexpr pls::cs::Int32 FLAG_BILLING_IN = 131072;
    static constexpr pls::cs::Int32 FLAG_BILLING_OUT = 262144;
    static constexpr pls::cs::Int32 FLAG_BILLING_NOTES = 524288;
    static constexpr pls::cs::Int32 FLAG_BILLING_CONFIRM = 1048576;
    static void ensure_initialized();

    static pls::cs::Ref<main::AppData>& apdat_();

    static pls::cs::Ref<billing::MyBilling>& billing_();

    static pls::cs::Ref<friend_::MyFriend>& friend_();

    static pls::cs::Ref<lineup::MyLineup>& lineup_();

    static void create_init(pls::cs::Ref<KairoService> self);

    static pls::cs::Ref<KairoService> create();

    static pls::cs::Ref<KairoService> GetInstance();
};
} // namespace system
}
