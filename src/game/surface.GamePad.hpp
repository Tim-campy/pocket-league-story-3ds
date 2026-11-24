// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"

namespace pls::game {
namespace surface {

struct GamePad : kairo::unity::surface::SurfaceBase {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(SurfaceBase,
                       {"M:kairo.unity.surface.SurfaceBase.IsGameSurface", "M:surface.GamePad.IsGameSurface"},
                       {"M:kairo.unity.surface.SurfaceBase.OnTouchEvent(kairo.unity.surface.TouchEvent)",
                        "M:surface.GamePad.OnTouchEvent(kairo.unity.surface.TouchEvent)"},
                       {"M:kairo.unity.surface.SurfaceBase.Draw(kairo.unity.ui.Graphics)",
                        "M:surface.GamePad.Draw(kairo.unity.ui.Graphics)"},
                       {"M:kairo.unity.surface.SurfaceBase.RotateClear", "M:surface.GamePad.RotateClear"});
    PLS_MANAGED_CLASS("surface.GamePad", GamePad, SurfaceBase)
    pls::cs::Ref<pls::kairo::IApplication> app_{};
    pls::cs::Ref<pls::kairo::Canvas> canvas_{};
    pls::cs::Ref<TouchEffectManager> effMan_{};
    pls::cs::Ref<pls::kairo::Font> font_{};
    bool visibleTouchRange_{};
    pls::cs::Int64 webTouchBegin_{};
    bool hideDebugButton_{};
    pls::cs::Int64 padTouchBegin_{};
    pls::cs::Int32 optionPage_{};
    pls::cs::Int32 optionPageMax_{};
    pls::cs::Int32 layoutMode_{};
    bool hide_{};
    pls::cs::Int32 mode_{};
    pls::cs::Array<pls::cs::Single> getEvenlyDivisionArea_tmp_{};
    bool IsGameSurface() override;
    void OnTouchEvent(pls::cs::Ref<kairo::unity::surface::TouchEvent> evt) override;
    void Draw(pls::cs::Ref<pls::kairo::Graphics> g) override;
    void RotateClear() override;
    static constexpr pls::cs::Int32 TEX_BG_SHOW = 0;
    static constexpr pls::cs::Int32 TEX_BG_HIDE1 = 1;
    static constexpr pls::cs::Int32 TEX_BG_HIDE2_TOP = 2;
    static constexpr pls::cs::Int32 TEX_BG_HIDE2_BOTTOM = 3;
    static constexpr pls::cs::Int32 TEX_BUTTON = 4;
    static constexpr pls::cs::Int32 TEX_BUTTON_L = 5;
    static constexpr pls::cs::Int32 TEX_BUTTON_H = 6;
    static constexpr pls::cs::Int32 TEX_SBUTTON = 7;
    static constexpr pls::cs::Int32 TEX_SBUTTON_L = 8;
    static constexpr pls::cs::Int32 TEX_SBUTTON_H = 9;
    static constexpr pls::cs::Int32 TEX_UP_L = 10;
    static constexpr pls::cs::Int32 TEX_DOWN_L = 11;
    static constexpr pls::cs::Int32 TEX_LEFT_L = 12;
    static constexpr pls::cs::Int32 TEX_RIGHT_L = 13;
    static constexpr pls::cs::Int32 TEX_SELECT_L = 14;
    static constexpr pls::cs::Int32 TEX_KAIRO1 = 15;
    static constexpr pls::cs::Int32 TEX_KAIRO2 = 16;
    static constexpr pls::cs::Int32 TEX_COPYLIGHT = 17;
    static constexpr pls::cs::Int32 TEX_COPYLIGHT_EN = 18;
    static constexpr pls::cs::Int32 TEX_PAD_ON = 19;
    static constexpr pls::cs::Int32 TEX_PAD_OFF = 20;
    static constexpr pls::cs::Int32 TEX_SOFT1_FRAME = 21;
    static constexpr pls::cs::Int32 TEX_SOFT2_FRAME = 22;
    static constexpr pls::cs::Int32 TEX_AM = 23;
    static constexpr pls::cs::Int32 TEX_PM = 24;
    static constexpr pls::cs::Int32 TEX_0 = 25;
    static constexpr pls::cs::Int32 TEX_1 = 26;
    static constexpr pls::cs::Int32 TEX_2 = 27;
    static constexpr pls::cs::Int32 TEX_3 = 28;
    static constexpr pls::cs::Int32 TEX_4 = 29;
    static constexpr pls::cs::Int32 TEX_5 = 30;
    static constexpr pls::cs::Int32 TEX_6 = 31;
    static constexpr pls::cs::Int32 TEX_7 = 32;
    static constexpr pls::cs::Int32 TEX_8 = 33;
    static constexpr pls::cs::Int32 TEX_9 = 34;
    static constexpr pls::cs::Int32 TEX_COLON = 35;
    static constexpr pls::cs::Int32 TEX_BATTERY0 = 36;
    static constexpr pls::cs::Int32 TEX_BATTERY1 = 37;
    static constexpr pls::cs::Int32 TEX_BATTERY2 = 38;
    static constexpr pls::cs::Int32 TEX_BATTERY3 = 39;
    static constexpr pls::cs::Int32 TEX_BATTERY4 = 40;
    static constexpr pls::cs::Int32 TEX_BATTERY5 = 41;
    static constexpr pls::cs::Int32 TEX_BATTERY6 = 42;
    static constexpr pls::cs::Int32 TEX_BATTERY7 = 43;
    static constexpr pls::cs::Int32 TEX_BATTERY8 = 44;
    static constexpr pls::cs::Int32 TEX_BATTERY9 = 45;
    static constexpr pls::cs::Int32 TEX_BATTERY10 = 46;
    static constexpr pls::cs::Int32 TEX_BATTERY11 = 47;
    static constexpr pls::cs::Int32 TEX_BATTERY12 = 48;
    static constexpr pls::cs::Int32 TEX_BATTERY13 = 49;
    static constexpr pls::cs::Int32 TEX_BATTERY_CHARGE = 50;
    static constexpr pls::cs::Int32 T_IMG = 0;
    static constexpr pls::cs::Int32 T_X = 1;
    static constexpr pls::cs::Int32 T_Y = 2;
    static constexpr pls::cs::Int32 T_U = 3;
    static constexpr pls::cs::Int32 T_V = 4;
    static constexpr pls::cs::Int32 T_W = 5;
    static constexpr pls::cs::Int32 T_H = 6;
    static constexpr pls::cs::Int32 ID_SOFT1 = 0;
    static constexpr pls::cs::Int32 ID_SOFT2 = 1;
    static constexpr pls::cs::Int32 ID_SOFT3 = 2;
    static constexpr pls::cs::Int32 ID_SOFT4 = 3;
    static constexpr pls::cs::Int32 ID_SOFTM = 4;
    static constexpr pls::cs::Int32 ID_WEB = 5;
    static constexpr pls::cs::Int32 ID_UP = 6;
    static constexpr pls::cs::Int32 ID_DOWN = 7;
    static constexpr pls::cs::Int32 ID_LEFT = 8;
    static constexpr pls::cs::Int32 ID_RIGHT = 9;
    static constexpr pls::cs::Int32 ID_SELECT = 10;
    static constexpr pls::cs::Int32 ID_DEBUG = 11;
    static constexpr pls::cs::Int32 ID_SKIP = 12;
    static constexpr pls::cs::Int32 ID_DIALOG = 13;
    static constexpr pls::cs::Int32 ID_HITTEST = 14;
    static constexpr pls::cs::Int32 ID_SLOW = 15;
    static constexpr pls::cs::Int32 ID_OPTION = 16;
    static constexpr pls::cs::Int32 ID_LAYOUT = 17;
    static constexpr pls::cs::Int32 ID_PAUSE = 18;
    static constexpr pls::cs::Int32 ID_CAPTCHA = 19;
    static constexpr pls::cs::Int32 ID_HIDE = 20;
    static constexpr pls::cs::Int32 ID_PAD_ON = 21;
    static constexpr pls::cs::Int32 ID_PAD_OFF = 22;
    static constexpr pls::cs::Int32 C_L = 0;
    static constexpr pls::cs::Int32 C_R = 1;
    static constexpr pls::cs::Int32 C_T = 2;
    static constexpr pls::cs::Int32 C_B = 3;
    static constexpr pls::cs::Int32 C_TEX = 4;
    static constexpr pls::cs::Int32 C_TEX_ON = 5;
    static constexpr pls::cs::Int32 C_TEX_HIDE = 6;
    static constexpr pls::cs::Int32 MODE_FULL = 0;
    static constexpr pls::cs::Int32 MODE_PLAIN = 1;
    static constexpr pls::cs::Int32 MODE_OVERLAP = 2;
    static constexpr pls::cs::Int32 SOFT_W = 82;
    static void ensure_initialized();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& COMPONENTS();

    static pls::cs::Ref<generated::java::util::JCalendar>& drawWatch_calendar();

    static pls::cs::Int64& drawWatch_rangeMax();

    static pls::cs::Int64& drawWatch_rangeMin();

    static pls::cs::Array<pls::cs::String>& FILENAMES();

    static pls::cs::Array<pls::cs::Int32>& IMAGE_WIDTH();

    static pls::cs::Array<pls::cs::Ref<pls::kairo::Image>>& images_();

    static pls::cs::Ref<GamePad>& instance_();

    static pls::cs::Int32& SIZE_FULL();

    static pls::cs::Int32& SIZE_PLAIN();

    static pls::cs::Int32& SIZE_PLAIN_MIN();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& TEXTURES();

    static bool& versionVisible_();

    static pls::cs::Array<pls::cs::String>& WEB_NAMES();

    static void create_init(pls::cs::Ref<GamePad> self);

    static pls::cs::Ref<GamePad> create();

    static void Load(pls::cs::Ref<generated::kairo::unity::util::JarInflater> jar);

    static pls::cs::Ref<GamePad> GetInstance();

    pls::cs::Int32 GetMode();

    void SetMode(pls::cs::Int32 mode);

    void AddTouch(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y,
                  pls::cs::Int32 id, pls::cs::Int32 value, bool enable);

    void AddTouch(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y,
                  pls::cs::Int32 id, pls::cs::Int32 value);

    void AddTouch(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y,
                  pls::cs::Int32 id);

    bool IsSmallSideView();

    pls::cs::Single GetSideViewRatio();

    pls::cs::Int32 GetSideSize();

    bool DrawSoftLabel(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y,
                       pls::cs::Int32 id, pls::cs::Int32 value, bool enable);

    void DrawSoftLabelImage(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y,
                            pls::cs::Int32 imgId);

    bool IsSoftLabelID(pls::cs::Int32 id);

    void DrawVersion(pls::cs::Ref<pls::kairo::Graphics> g);

    void DrawWatch(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y);

    void DrawBattery(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y);

    void DrawImage(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y,
                   pls::cs::Int32 imgId);

    void DrawScaledImage(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x, pls::cs::Single y,
                         pls::cs::Single w, pls::cs::Single h, pls::cs::Int32 imgId);

    pls::cs::Array<pls::cs::Single> GetDivisionArea(pls::cs::Single left, pls::cs::Single right,
                                                    pls::cs::Single padding, pls::cs::Int32 index,
                                                    pls::cs::Int32 max_);

    void SetLayoutMode(pls::cs::Int32 mode);

    pls::cs::Int32 GetLayoutMode();

    void SetOptionPage(pls::cs::Int32 page);

    pls::cs::Int32 GetOptionPage();
};
} // namespace surface
}
