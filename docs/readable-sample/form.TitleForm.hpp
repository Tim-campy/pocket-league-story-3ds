// GENERATED (readable mode) by translator/Translator.cs from the reconstructed C#. Do not edit.
#pragma once
#include "form.MyFormBase.hpp"
#include "game_generated_forward.hpp"

namespace pls::game {
namespace form {

struct TitleForm : MyFormBase {
    static bool source_reference_assignable(const std::type_info& target) {
        return target == typeid(TitleForm) || target == typeid(MyFormBase) ||
               MyFormBase::source_reference_assignable(target) ||
               target == typeid(pls::kairo::TouchValueAccessor);
    }

    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    void release_edges() override;

    std::string managed_delegate_method_id(const std::string& slot) const override {
        if (slot == "ToString") {
            return "M:form.TitleForm.ToString";
        }
        if (slot == "Init") {
            return "M:form.TitleForm.Init";
        }
        if (slot == "Update") {
            return "M:form.TitleForm.Update";
        }
        if (slot == "Draw") {
            return "M:form.TitleForm.Draw(kairo.unity.ui.Graphics)";
        }
        if (slot == "Resume") {
            return "M:form.TitleForm.Resume";
        }
        if (slot == "Finish") {
            return "M:form.TitleForm.Finish";
        }
        if (slot == "SetTouchValue") {
            return "M:form.TitleForm.SetTouchValue(System.Int32,System.Int32)";
        }
        if (slot == "M:form.MyFormBase.OnTouchEvent(kairo.unity.surface.TouchEvent)") {
            return "M:form.TitleForm.OnTouchEvent(kairo.unity.surface.TouchEvent)";
        }
        if (slot == "GetHashCode") {
            return "M:form.TitleForm.GetHashCode";
        }
        return MyFormBase::managed_delegate_method_id(slot);
    }

    static std::string source_managed_type_name() { return "form.TitleForm"; }

    std::string managed_type_name() const override { return source_managed_type_name(); }

    pls::cs::Ref<game::UserData> udat_{};
    pls::cs::Ref<kairo::unity::ui::ResourceManager> resTitle_{};
    std::int32_t state_{};
    std::int32_t selMenu_{};
    std::int32_t titleY_{};
    std::int32_t titleFrame_{};
    std::int32_t POUND_PRESS_CNT{};
    bool STAR{};
    std::int32_t selectSaveType_{};
    std::int32_t selectSave_{};
    std::int32_t currentSave_{};
    pls::cs::String newGameName_{};
    std::int32_t newGameFrame1_{};
    std::int32_t newGameFrame2_{};
    std::int32_t frame_{};
    std::int32_t x_{};
    std::int32_t y_{};
    pls::cs::Array<std::int64_t> time_{};
    pls::cs::Array<pls::cs::Array<std::int32_t>> ta_data{};
    std::int32_t APPEAR_TIME{};
    std::int32_t apeear_cnt{};
    pls::cs::Array<pls::cs::Array<std::int32_t>> zsort_mhobj{};
    std::int32_t kairoAdClickNum_{};
    virtual pls::cs::String ToString();
    virtual bool Init();
    virtual bool Update();
    virtual void Draw(pls::cs::Ref<pls::kairo::Graphics> g);
    virtual bool Resume();
    virtual bool Finish();
    virtual void SetTouchValue(std::int32_t type, std::int32_t value);
    virtual bool OnTouchEvent(pls::cs::Ref<kairo::unity::surface::TouchEvent> e);
    virtual std::int32_t GetHashCode();
    static constexpr std::int32_t RESTITLE_IMG_TITLE00 = 0;
    static constexpr std::int32_t RESTITLE_IMG_WINDOW = 1;
    static constexpr std::int32_t RESTITLE_IMG_LOGO = 2;
    static constexpr std::int32_t RESTITLE_IMG_KAIROAD = 3;
    static constexpr std::int32_t RESTITLE_IMG_KAIROAD_CANCEL = 4;
    static constexpr std::int32_t STATE_MENU = 0;
    static constexpr std::int32_t STATE_SAVESLOT = 1;
    static constexpr std::int32_t MENU_START = 0;
    static constexpr std::int32_t MENU_RANKING = 1;
    static constexpr std::int32_t MENU_RELEASE = 1;
    static constexpr std::int32_t MENU_END = 2;
    static constexpr std::int32_t HOBJ_MAX = 20;
    static constexpr std::int32_t HOBJP_EXIST = 0;
    static constexpr std::int32_t HOBJP_PDATAID = 1;
    static constexpr std::int32_t HOBJP_PX = 2;
    static constexpr std::int32_t HOBJP_PY = 3;
    static constexpr std::int32_t HOBJP_DIRECT = 4;
    static constexpr std::int32_t HOBJP_FRAME = 5;
    static constexpr std::int32_t HOBJP_END = 6;
    static constexpr std::int32_t TITLE_INIT_PY_MIN = 228;
    static constexpr std::int32_t TITLE_INIT_PY_MAX = 238;
    static constexpr std::int32_t TITLE_MOVE_V = 1;
    static void Draw(pls::cs::Ref<TitleForm> self, pls::cs::Ref<pls::kairo::Graphics> g);

    static bool Finish(pls::cs::Ref<TitleForm> self);

    static std::int32_t GetHashCode(pls::cs::Ref<TitleForm> self);

    static bool Init(pls::cs::Ref<TitleForm> self);

    static bool OnTouchEvent(pls::cs::Ref<TitleForm> self, pls::cs::Ref<kairo::unity::surface::TouchEvent> e);

    static bool Resume(pls::cs::Ref<TitleForm> self);

    static void SetTouchValue(pls::cs::Ref<TitleForm> self, pls::cs::Int32 type, pls::cs::Int32 value);

    static pls::cs::String ToString(pls::cs::Ref<TitleForm> self);

    static bool Update(pls::cs::Ref<TitleForm> self);

    static void ensure_initialized();

    static pls::cs::Array<pls::cs::Array<std::int32_t>>& IMG_SL();

    static pls::cs::String& kairoAdUrl_jp();

    static pls::cs::Array<pls::cs::Array<std::int32_t>>& softLabels_();

    static pls::cs::Array<std::int32_t>& title_anime();

    static pls::cs::Array<std::int32_t>& TITLE_GUEST();

    static void create_init(pls::cs::Ref<TitleForm> self);

    static pls::cs::Ref<TitleForm> create();

    static void ContinueGame(pls::cs::Ref<TitleForm> self);

    static void NewGame(pls::cs::Ref<TitleForm> self);

    static void SmartBeginPaint(pls::cs::Ref<TitleForm> self, pls::cs::Ref<pls::kairo::Graphics> g);

    static void _draw(pls::cs::Ref<TitleForm> self, pls::cs::Ref<pls::kairo::Graphics> g);

    static void ChangeState(pls::cs::Ref<TitleForm> self, pls::cs::Int32 state);

    static void Update_titleAnime(pls::cs::Ref<TitleForm> self);

    static void SetAppearCnt(pls::cs::Ref<TitleForm> self);

    static void ResetHobjExist(pls::cs::Ref<TitleForm> self, pls::cs::Int32 index);

    static void Draw_titleAnime(pls::cs::Ref<TitleForm> self, pls::cs::Ref<pls::kairo::Graphics> g);

    static void LoadKiaroAdClickNum(pls::cs::Ref<TitleForm> self);

    static void UpdateKairoAdClickNum(pls::cs::Ref<TitleForm> self);

    static void UpdateKairoAdClickNum(pls::cs::Ref<TitleForm> self, pls::cs::Int32 addClickNum);
};
} // namespace form
} // namespace pls::game
