// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "form.MyFormBase.hpp"
#include "game_generated_forward.hpp"
#include "java.lang.JRunnable.hpp"

namespace pls::game {
namespace form {

struct SpForm : MyFormBase, java::lang::JRunnable {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(MyFormBase, {"ToString", "M:form.SpForm.ToString"}, {"Init", "M:form.SpForm.Init"},
                       {"Update", "M:form.SpForm.Update"},
                       {"Draw", "M:form.SpForm.Draw(kairo.unity.ui.Graphics)"},
                       {"Resume", "M:form.SpForm.Resume"}, {"Finish", "M:form.SpForm.Finish"},
                       {"M:java.lang.JRunnable.Run", "M:form.SpForm.Run"},
                       {"GetTouchValue", "M:form.SpForm.GetTouchValue(System.Int32,System.Int32)"},
                       {"SetTouchValue", "M:form.SpForm.SetTouchValue(System.Int32,System.Int32)"},
                       {"GetHashCode", "M:form.SpForm.GetHashCode"});
    PLS_MANAGED_CLASS("form.SpForm", SpForm, MyFormBase, pls::kairo::TouchValueAccessor, JRunnable)
    pls::cs::Int32 frame_{};
    pls::cs::Int32 page_{};
    pls::cs::String text_{};
    pls::cs::String date_{};
    bool succeed_{};
    pls::cs::Int32 state_{};
    pls::cs::Ref<generated::java::util::Vector> commands_{};
    pls::cs::Int32 select_{};
    pls::cs::Int32 send_{};
    pls::cs::Ref<java::lang::JThread> th_{};
    pls::cs::Ref<generated::java::util::Vector> task_{};
    pls::cs::Array<std::uint8_t> recv_{};
    pls::cs::Int32 taskMax_{};
    pls::cs::String ToString() override;
    bool Init() override;
    bool Update() override;
    void Draw(pls::cs::Ref<pls::kairo::Graphics> g) override;
    bool Resume() override;
    bool Finish() override;
    void Run() override;
    std::int32_t GetTouchValue(std::int32_t type, std::int32_t index) override;
    void SetTouchValue(std::int32_t type, std::int32_t value) override;
    std::int32_t GetHashCode() override;
    static constexpr pls::cs::Int32 STATE_MAIN = 0;
    static constexpr pls::cs::Int32 STATE_SEND = 1;
    static constexpr pls::cs::Int32 STATE_RECV = 2;
    void _draw(pls::cs::Ref<pls::kairo::Graphics> g);

    static void ensure_initialized();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& softLabels_();

    static void create_init(pls::cs::Ref<SpForm> self);

    static void create_init(pls::cs::Ref<SpForm> self, pls::cs::Ref<pls::cs::ExceptionObject> th);

    static pls::cs::Ref<SpForm> create();

    static pls::cs::Ref<SpForm> create(pls::cs::Ref<pls::cs::ExceptionObject> th);

    void AddCommand(pls::cs::Int32 id, pls::cs::String str);

    void ChangeState(pls::cs::Int32 state);

    void SetSoftLabel();

    void ShowDialog(pls::cs::String text, pls::cs::String buttons);

    void MakeSendDataTask();
};
} // namespace form
}
