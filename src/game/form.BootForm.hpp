// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "form.MyFormBase.hpp"
#include "game_generated_forward.hpp"
#include "java.lang.JRunnable.hpp"

namespace pls::game {
namespace form {

struct BootForm : MyFormBase, java::lang::JRunnable {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(MyFormBase, {"ToString", "M:form.BootForm.ToString"}, {"Init", "M:form.BootForm.Init"},
                       {"Update", "M:form.BootForm.Update"},
                       {"Draw", "M:form.BootForm.Draw(kairo.unity.ui.Graphics)"},
                       {"Resume", "M:form.BootForm.Resume"}, {"Finish", "M:form.BootForm.Finish"},
                       {"M:java.lang.JRunnable.Run", "M:form.BootForm.Run"},
                       {"GetTouchValue", "M:form.BootForm.GetTouchValue(System.Int32,System.Int32)"},
                       {"SetTouchValue", "M:form.BootForm.SetTouchValue(System.Int32,System.Int32)"},
                       {"GetHashCode", "M:form.BootForm.GetHashCode"});
    PLS_MANAGED_CLASS("form.BootForm", BootForm, MyFormBase, pls::kairo::TouchValueAccessor, JRunnable)
    pls::cs::Int32 frame_{};
    pls::cs::Int32 loop_{};
    pls::cs::SharedField<pls::cs::Int32> bowWait_{};
    pls::cs::SharedField<pls::cs::Int32> loadMax_{};
    pls::cs::SharedField<pls::cs::Int32> loadCnt_{};
    pls::cs::SharedField<pls::cs::Int32> frame_wait{};
    pls::cs::Int32 frame_main{};
    pls::cs::SharedField<pls::cs::Array<std::uint8_t>> regist_{};
    pls::cs::Ref<SubForm> dialog__BootForm{};
    pls::cs::SharedField<pls::cs::String> error_{};
    pls::cs::SharedField<pls::cs::Ref<java::lang::JThread>> th_{};
    pls::cs::SharedField<pls::cs::Ref<pls::cs::ExceptionObject>> e_{};
    pls::cs::Ref<kairo::unity::ui::ResourceManager> resLoad_{};
    pls::cs::SharedField<pls::cs::Int32> state_{};
    pls::cs::Int32 anime_mode{};
    pls::cs::Int32 anime_ballY{};
    pls::cs::Int32 anime_cnt{};
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
    static constexpr pls::cs::Int32 WAIT = 4;
    static constexpr pls::cs::Int32 RESLOAD_SEB_LOAD = 0;
    static constexpr pls::cs::Int32 STATE_BOOT = 0;
    static constexpr pls::cs::Int32 STATE_LOAD = 1;
    static constexpr pls::cs::Int32 STATE_REGIST = 2;
    static constexpr pls::cs::Int32 STATE_ERROR = 3;
    static constexpr pls::cs::Int32 STATE_FINISH = 4;
    static constexpr pls::cs::Int32 STATE_VERSIONUP = 5;
    static constexpr pls::cs::Int32 ANIME_LEFT_X = 66;
    static constexpr pls::cs::Int32 ANIME_RIGHT_X = 174;
    static constexpr pls::cs::Int32 ANIME_ONEWAY_TIME = 20;
    static constexpr pls::cs::Int32 ANIME_KICK_TIME = 5;
    static void ensure_initialized();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& softLabels_();

    static void create_init(pls::cs::Ref<BootForm> self);

    static pls::cs::Ref<BootForm> create();

    void SmartBeginPaint(pls::cs::Ref<pls::kairo::Graphics> g);

    void LoadBox(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String str, pls::cs::Int32 cnt,
                 pls::cs::Int32 num);

    void ChangeState(pls::cs::Int32 state);

    void InitApp();

    void Download();

    void Load();

    void UpdateScoreFromNetwork();

    pls::cs::Array<pls::cs::Array<std::uint8_t>> DivServerData(pls::cs::String url);

    void CreateAllClass();
};
} // namespace form
}
