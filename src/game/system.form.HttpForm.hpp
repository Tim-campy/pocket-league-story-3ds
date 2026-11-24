// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "form.MyFormBase.hpp"
#include "game_generated_forward.hpp"
#include "java.lang.JRunnable.hpp"

namespace pls::game {
namespace system::form {

struct HttpForm : pls::game::form::MyFormBase, java::lang::JRunnable {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(MyFormBase, {"ToString", "M:system.form.HttpForm.ToString"},
                       {"Init", "M:system.form.HttpForm.Init"},
                       {"Draw", "M:system.form.HttpForm.Draw(kairo.unity.ui.Graphics)"},
                       {"Update", "M:system.form.HttpForm.Update"},
                       {"Finish", "M:system.form.HttpForm.Finish"},
                       {"CheckMainWindow", "M:system.form.HttpForm.CheckMainWindow"},
                       {"M:java.lang.JRunnable.Run", "M:system.form.HttpForm.Run"});
    PLS_MANAGED_CLASS("system.form.HttpForm", HttpForm, MyFormBase, pls::kairo::TouchValueAccessor, JRunnable)
    pls::cs::Delegate<void(pls::cs::Ref<HttpForm>, pls::cs::Ref<HttpForm_ResultData>)> connectMethod_{};
    pls::cs::Delegate<void(pls::cs::Ref<HttpForm>, pls::cs::Ref<HttpForm_ResultData>)> resultMethod_{};
    pls::cs::Int32 threadState_{};
    pls::cs::Ref<java::lang::JThread> thread_{};
    pls::cs::Ref<HttpForm_ResultData> resultData_{};
    pls::cs::Dictionary<pls::cs::String, pls::cs::Ref<pls::cs::Object>> commonData_{};
    bool m_ProcessError_k__BackingField{};
    bool m_IsCancelable_k__BackingField{};
    pls::cs::String ToString() override;
    bool Init() override;
    void Draw(pls::cs::Ref<pls::kairo::Graphics> g) override;
    bool Update() override;
    bool Finish() override;
    bool CheckMainWindow() override;
    void Run() override;
    static constexpr pls::cs::Int32 FORMID_HTTP = 909;
    static void ensure_initialized();

    static pls::cs::Int32& THSTATE_FAILURE();

    static pls::cs::Int32& THSTATE_NONE();

    static pls::cs::Int32& THSTATE_RUN();

    static pls::cs::Int32& THSTATE_SUCCESS();

    static void create_init(
        pls::cs::Ref<HttpForm> self,
        pls::cs::Delegate<void(pls::cs::Ref<HttpForm>, pls::cs::Ref<HttpForm_ResultData>)> connectMethod,
        pls::cs::Delegate<void(pls::cs::Ref<HttpForm>, pls::cs::Ref<HttpForm_ResultData>)> resultMethod);

    static pls::cs::Ref<HttpForm>
    create(pls::cs::Delegate<void(pls::cs::Ref<HttpForm>, pls::cs::Ref<HttpForm_ResultData>)> connectMethod,
           pls::cs::Delegate<void(pls::cs::Ref<HttpForm>, pls::cs::Ref<HttpForm_ResultData>)> resultMethod);

    static bool get_ProcessError(pls::cs::Ref<HttpForm> self);

    static void set_ProcessError(pls::cs::Ref<HttpForm> self, bool value);

    static bool get_IsCancelable(pls::cs::Ref<HttpForm> self);

    static void set_IsCancelable(pls::cs::Ref<HttpForm> self, bool value);

    void SetConnectMethod(
        pls::cs::Delegate<void(pls::cs::Ref<HttpForm>, pls::cs::Ref<HttpForm_ResultData>)> method);

    void SetResultMethod(
        pls::cs::Delegate<void(pls::cs::Ref<HttpForm>, pls::cs::Ref<HttpForm_ResultData>)> method);

    static void DrawConnect(pls::cs::Ref<pls::kairo::Graphics> g);
};
} // namespace system::form
}
