// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
namespace pls::game {
namespace surface {

struct GameView : kairo::unity::surface::SurfaceBase {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(SurfaceBase,
    {"M:kairo.unity.surface.SurfaceBase.IsGameSurface", "M:surface.GameView.IsGameSurface"},
    {"M:kairo.unity.surface.SurfaceBase.BeginTouchRegist(kairo.unity.ui.Graphics)", "M:surface.GameView.BeginTouchRegist(kairo.unity.ui.Graphics)"},
    {"M:kairo.unity.surface.SurfaceBase.EndTouchRegist(kairo.unity.ui.Graphics)", "M:surface.GameView.EndTouchRegist(kairo.unity.ui.Graphics)"},
    {"M:kairo.unity.surface.SurfaceBase.DoEnd", "M:surface.GameView.DoEnd"},
    {"M:kairo.unity.surface.SurfaceBase.OnKeyDown(System.Int32)", "M:surface.GameView.OnKeyDown(System.Int32)"},
    {"M:kairo.unity.surface.SurfaceBase.OnTouchEvent(kairo.unity.surface.TouchEvent)", "M:surface.GameView.OnTouchEvent(kairo.unity.surface.TouchEvent)"},
    {"M:kairo.unity.surface.SurfaceBase.Draw(kairo.unity.ui.Graphics)", "M:surface.GameView.Draw(kairo.unity.ui.Graphics)"},
    {"M:kairo.unity.surface.SurfaceBase.RotateClear", "M:surface.GameView.RotateClear"},
    {"M:kairo.unity.surface.SurfaceBase.OnReceiveTouchEvent(kairo.unity.surface.MotionEvent)", "M:surface.GameView.OnReceiveTouchEvent(kairo.unity.surface.MotionEvent)"});
PLS_MANAGED_CLASS("surface.GameView", GameView, SurfaceBase)
pls::cs::Ref<pls::kairo::IApplication> app_{};
pls::cs::Ref<pls::kairo::Canvas> canvas_{};
pls::cs::Ref<TouchEffectManager> effMan_{};
pls::cs::Ref<form::FormManager> formMan_{};
pls::cs::Ref<pls::kairo::Image> render_{};
pls::cs::Ref<pls::kairo::Graphics> g_{};
pls::cs::Ref<pls::kairo::Font> font_{};
pls::cs::Int64 markComponentKey_{};
pls::cs::Int32 markComponentFrame_{};
bool capture_{};
pls::cs::String captureFile_{};
pls::cs::Int32 captureScale_{};
pls::cs::String toastText_{};
bool addScrollMargin_{};
pls::cs::Int32 notesFrame_{};
pls::cs::Int64 notesEffect_{};
pls::cs::Ref<generated::java::util::Vector_2<pls::cs::Array<pls::cs::Int32>>> delayPaintBuffer_{};
pls::cs::Int32 loopFrame_{};
pls::cs::Array<pls::cs::Int32> drawVerticalScroll_tmp{};
bool IsGameSurface() override;
void BeginTouchRegist(pls::cs::Ref<pls::kairo::Graphics> g) override;
void EndTouchRegist(pls::cs::Ref<pls::kairo::Graphics> g) override;
void DoEnd() override;
void OnKeyDown(pls::cs::Int32 key) override;
void OnTouchEvent(pls::cs::Ref<kairo::unity::surface::TouchEvent> e) override;
void Draw(pls::cs::Ref<pls::kairo::Graphics> g) override;
void RotateClear() override;
void OnReceiveTouchEvent(pls::cs::Ref<pls::kairo::MotionEvent> evt) override;
static constexpr pls::cs::Int32 TEX_LEFT_ARW = 0;static constexpr pls::cs::Int32 TEX_RIGHT_ARW = 1;static constexpr pls::cs::Int32 TEX_LEFT_ARW_L = 2;static constexpr pls::cs::Int32 TEX_RIGHT_ARW_L = 3;static constexpr pls::cs::Int32 TEX_MINUS = 4;static constexpr pls::cs::Int32 TEX_PLUS = 5;static constexpr pls::cs::Int32 TEX_MINUS_L = 6;static constexpr pls::cs::Int32 TEX_PLUS_L = 7;static constexpr pls::cs::Int32 TEX_MARKER_LEFT = 8;static constexpr pls::cs::Int32 TEX_MARKER_CENTER = 9;static constexpr pls::cs::Int32 TEX_MARKER_RIGHT = 10;static constexpr pls::cs::Int32 TEX_TRACK_BAR = 11;static constexpr pls::cs::Int32 TEX_NOTES = 12;static constexpr pls::cs::Int32 TEX_UP_ARW = 12;static constexpr pls::cs::Int32 TEX_DOWN_ARW = 13;static constexpr pls::cs::Int32 TEX_UP_ARW_L = 14;static constexpr pls::cs::Int32 TEX_DOWN_ARW_L = 15;static constexpr pls::cs::Int32 T_IMG = 0;static constexpr pls::cs::Int32 T_X = 1;static constexpr pls::cs::Int32 T_Y = 2;static constexpr pls::cs::Int32 T_U = 3;static constexpr pls::cs::Int32 T_V = 4;static constexpr pls::cs::Int32 T_W = 5;static constexpr pls::cs::Int32 T_H = 6;static constexpr pls::cs::Int32 ID_TITLEMENU = 0;static constexpr pls::cs::Int32 ID_DLGPAGE = 1;static constexpr pls::cs::Int32 ID_DLGCMD = 2;static constexpr pls::cs::Int32 ID_DLGSEL = 3;static constexpr pls::cs::Int32 ID_KEYCLICK = 4;static constexpr pls::cs::Int32 ID_KEYPRESS = 5;static constexpr pls::cs::Int32 ID_KEYDOWN = 6;static constexpr pls::cs::Int32 ID_KEYUP = 7;static constexpr pls::cs::Int32 ID_MAINMENU = 8;static constexpr pls::cs::Int32 ID_SUBMENU = 9;static constexpr pls::cs::Int32 ID_LIST = 10;static constexpr pls::cs::Int32 ID_SLIST = 11;static constexpr pls::cs::Int32 ID_VSCROLLBAR = 12;static constexpr pls::cs::Int32 ID_VSCROLLBTN = 13;static constexpr pls::cs::Int32 ID_VSCROLLBAR2 = 14;static constexpr pls::cs::Int32 ID_VSCROLLBAR3 = 15;static constexpr pls::cs::Int32 ID_UNMARKER = 16;static constexpr pls::cs::Int32 ID_CAMERA = 17;static constexpr pls::cs::Int32 ID_ARROW = 18;static constexpr pls::cs::Int32 ID_TRACKBAR = 19;static constexpr pls::cs::Int32 ID_PLUS = 20;static constexpr pls::cs::Int32 ID_MINUS = 21;static constexpr pls::cs::Int32 ID_VSCROLLBAR4 = 22;static constexpr pls::cs::Int32 ID_SLIST2 = 23;static constexpr pls::cs::Int32 ID_ARROW_UD = 24;static constexpr pls::cs::Int32 ID_ARROW2 = 25;static constexpr pls::cs::Int32 ID_DLGPAGE2 = 26;static constexpr pls::cs::Int32 ID_RECT = 27;static constexpr pls::cs::Int32 TPARAM_LEFT = 0;static constexpr pls::cs::Int32 TPARAM_RIGHT = 1;static constexpr pls::cs::Int32 TPARAM_TOP = 2;static constexpr pls::cs::Int32 TPARAM_BOTTOM = 3;static constexpr pls::cs::Int32 TPARAM_COLLISION = 4;static constexpr pls::cs::Int32 TPARAM_SCREEN = 5;static constexpr pls::cs::Int32 VALUE_KEY = 65536;static constexpr pls::cs::Int32 VALUE_SELECT = 131072;static constexpr pls::cs::Int32 VALUE_SELMENU = 196608;static constexpr pls::cs::Int32 VALUE_SCROLL = 262144;static constexpr pls::cs::Int32 VALUE_BUILDCATEGORY = 327680;static constexpr pls::cs::Int32 VALUE_QUALITY = 393216;static constexpr pls::cs::Int32 VALUE_GAMESPEED = 458752;static constexpr pls::cs::Int32 VALUE_BGM_VOLUME = 524288;static constexpr pls::cs::Int32 VALUE_SE_VOLUME = 589824;static constexpr pls::cs::Int32 VALUE_CURRENCY = 655360;static constexpr pls::cs::Int32 VALUE_ORIENTATION = 720896;static constexpr pls::cs::Int32 VALUE_EDIT_MENU = 786432;static constexpr pls::cs::Int32 VALUE_EDIT_FORMENU = 851968;static constexpr pls::cs::Int32 VALUE_EDIT_FCHA = 917504;static constexpr pls::cs::Int32 VALUE_EDIT_FCHA2 = 983040;static constexpr pls::cs::Int32 VALUE_EDIT_FTYPE = 1048576;static constexpr pls::cs::Int32 VALUE_EDIT_MEMCHA = 1114112;static constexpr pls::cs::Int32 VALUE_EDIT_MEMCHA2 = 1179648;static constexpr pls::cs::Int32 VALUE_EDIT_FORMENU_SCROLL = 1245184;static constexpr pls::cs::Int32 VALUE_PAGE = 1310720;static constexpr pls::cs::Int32 VALUE_UDARROWCNT = 1376256;static constexpr pls::cs::Int32 VALUE_KAIROAD = 1441792;static constexpr pls::cs::Int32 VALUE_KAIROAD_CANCEL = 1507328;static constexpr pls::cs::Int32 KEYID_0 = 0;static constexpr pls::cs::Int32 KEYID_1 = 1;static constexpr pls::cs::Int32 KEYID_2 = 2;static constexpr pls::cs::Int32 KEYID_3 = 3;static constexpr pls::cs::Int32 KEYID_4 = 4;static constexpr pls::cs::Int32 KEYID_5 = 5;static constexpr pls::cs::Int32 KEYID_6 = 6;static constexpr pls::cs::Int32 KEYID_7 = 7;static constexpr pls::cs::Int32 KEYID_8 = 8;static constexpr pls::cs::Int32 KEYID_9 = 9;static constexpr pls::cs::Int32 KEYID_ASTERISK = 10;static constexpr pls::cs::Int32 KEYID_POUND = 11;static constexpr pls::cs::Int32 KEYID_LEFT = 16;static constexpr pls::cs::Int32 KEYID_UP = 17;static constexpr pls::cs::Int32 KEYID_RIGHT = 18;static constexpr pls::cs::Int32 KEYID_DOWN = 19;static constexpr pls::cs::Int32 KEYID_SELECT = 20;static constexpr pls::cs::Int32 KEYID_SOFT1 = 21;static constexpr pls::cs::Int32 KEYID_SOFT2 = 22;static constexpr pls::cs::Int32 KEYID_SOFT3 = 23;static constexpr pls::cs::Int32 KEYID_SOFT4 = 24;static constexpr pls::cs::Int32 KEYID_USER1 = 25;static constexpr pls::cs::Int32 KEYID_USER2 = 26;static constexpr pls::cs::Int32 KEYID_USER3 = 27;static constexpr pls::cs::Int32 KEYID_USER4 = 28;static constexpr pls::cs::Int32 KEYID_USER5 = 29;static constexpr pls::cs::Int32 KEYID_USER6 = 30;
static void ensure_initialized();

static pls::cs::Array<pls::cs::String>& FILENAMES();

static pls::cs::Array<pls::cs::Single>& GetImageRect_result();

static pls::cs::Array<pls::cs::Int32>& IMAGE_WIDTH();

static pls::cs::Array<pls::cs::Ref<pls::kairo::Image>>& images_();

static pls::cs::Ref<GameView>& instance_();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& TEXTURES();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& TOUCHPARAMS();

static void create_init(pls::cs::Ref<GameView> self);

static pls::cs::Ref<GameView> create();

static void Load(pls::cs::Ref<generated::kairo::unity::util::JarInflater> jar);

static pls::cs::Ref<GameView> GetInstance();

pls::cs::Int32 GetSideSoftWidth();

static pls::cs::Ref<kairo::unity::surface::TouchComponent> AddTouch(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 id,pls::cs::Ref<pls::kairo::Image> img,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 u,pls::cs::Int32 v,pls::cs::Int32 w,pls::cs::Int32 h,pls::cs::Int32 value,pls::cs::Ref<kairo::unity::surface::TouchOption> opt);

static pls::cs::Ref<kairo::unity::surface::TouchComponent> AddTouch(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 id,pls::cs::Ref<pls::kairo::Image> img,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 u,pls::cs::Int32 v,pls::cs::Int32 w,pls::cs::Int32 h,pls::cs::Int32 value);

static pls::cs::Ref<kairo::unity::surface::TouchComponent> AddTouch(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 id,pls::cs::Ref<pls::kairo::Image> img,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 u,pls::cs::Int32 v,pls::cs::Int32 w,pls::cs::Int32 h);

static pls::cs::Ref<kairo::unity::surface::TouchComponent> AddTouch(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 id,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 w,pls::cs::Int32 h,pls::cs::Int32 value,pls::cs::Ref<kairo::unity::surface::TouchOption> opt);

static pls::cs::Ref<kairo::unity::surface::TouchComponent> AddTouch(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 id,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 w,pls::cs::Int32 h,pls::cs::Int32 value);

static pls::cs::Ref<kairo::unity::surface::TouchComponent> AddTouch(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 id,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 w,pls::cs::Int32 h);

static pls::cs::Ref<kairo::unity::surface::TouchComponent> AddTouch(pls::cs::Int32 id,pls::cs::Int32 value,pls::cs::Ref<kairo::unity::surface::TouchOption> opt);

static pls::cs::Ref<kairo::unity::surface::TouchComponent> AddTouch(pls::cs::Int32 id,pls::cs::Int32 value);

static pls::cs::Ref<kairo::unity::surface::TouchComponent> AddTouch(pls::cs::Int32 id);

static pls::cs::Ref<kairo::unity::surface::TouchComponent> AddTouchTouchOption(pls::cs::Int32 id,pls::cs::Ref<kairo::unity::surface::TouchOption> opt);

static pls::cs::Ref<kairo::unity::surface::TouchComponent> AddTouchSeb(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 id,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Ref<kairo::unity::ui::Seb> seb,pls::cs::Int32 frame,pls::cs::Int32 value,pls::cs::Ref<kairo::unity::surface::TouchOption> opt);

static pls::cs::Ref<kairo::unity::surface::TouchComponent> AddTouchSeb(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 id,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Ref<kairo::unity::ui::Seb> seb,pls::cs::Int32 frame,pls::cs::Int32 value);

static pls::cs::Ref<kairo::unity::surface::TouchComponent> AddTouchSeb(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 id,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Ref<kairo::unity::ui::Seb> seb,pls::cs::Int32 frame);

pls::cs::Ref<kairo::unity::surface::TouchComponent> _addTouch(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 id,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 w,pls::cs::Int32 h,pls::cs::Int32 value,pls::cs::Ref<kairo::unity::surface::TouchOption> opt);

static bool CheckMarker(pls::cs::Int32 id,pls::cs::Int32 value);

static bool CheckMarker(pls::cs::Int64 key);

static void ClearMarker();

void Set(pls::cs::Ref<pls::kairo::TouchValueAccessor> va,pls::cs::Int32 value,pls::cs::Ref<kairo::unity::surface::TouchComponent> c);

void Set(pls::cs::Ref<pls::kairo::TouchValueAccessor> va,pls::cs::Int32 type,pls::cs::Int32 value,pls::cs::Ref<kairo::unity::surface::TouchComponent> c);

void Set(pls::cs::Int32 value,pls::cs::Ref<kairo::unity::surface::TouchComponent> c);

void SetInt(pls::cs::Int32 type,pls::cs::Int32 value,pls::cs::Ref<kairo::unity::surface::TouchComponent> c);

pls::cs::Int32 Get(pls::cs::Ref<pls::kairo::TouchValueAccessor> va,pls::cs::Int32 type);

pls::cs::Int32 Get(pls::cs::Int32 type);

bool CheckHitRect(pls::cs::Int32 x1,pls::cs::Int32 y1,pls::cs::Int32 w1,pls::cs::Int32 h1,pls::cs::Int32 x2,pls::cs::Int32 y2,pls::cs::Int32 w2,pls::cs::Int32 h2);

pls::cs::Int32 Join(pls::cs::Int32 type,pls::cs::Int32 v);

pls::cs::Ref<pls::kairo::TouchValueAccessor> GetTouchValueAccessor();

void OnTouchTitleMenu(pls::cs::Int32 type,pls::cs::Int32 v,pls::cs::Ref<kairo::unity::surface::TouchEvent> e);

void OnTouchDlgPage(pls::cs::Int32 type,pls::cs::Int32 v,pls::cs::Ref<kairo::unity::surface::TouchEvent> e);

void OnTouchDlgPage2(pls::cs::Int32 type,pls::cs::Int32 v,pls::cs::Ref<kairo::unity::surface::TouchEvent> e);

void OnTouchDlgCmd(pls::cs::Int32 type,pls::cs::Int32 v,pls::cs::Ref<kairo::unity::surface::TouchEvent> e);

void OnTouchDlgSel(pls::cs::Int32 type,pls::cs::Int32 v,pls::cs::Ref<kairo::unity::surface::TouchEvent> e);

void OnTouchKeyClick(pls::cs::Int32 type,pls::cs::Int32 v,pls::cs::Ref<kairo::unity::surface::TouchEvent> e);

void OnTouchKeyPress(pls::cs::Int32 type,pls::cs::Int32 v,pls::cs::Ref<kairo::unity::surface::TouchEvent> e);

void OnTouchKeyDown(pls::cs::Int32 type,pls::cs::Int32 v,pls::cs::Ref<kairo::unity::surface::TouchEvent> e);

void OnTouchKeyUp(pls::cs::Int32 type,pls::cs::Int32 v,pls::cs::Ref<kairo::unity::surface::TouchEvent> e);

void OnTouchMainMenu(pls::cs::Int32 type,pls::cs::Int32 v,pls::cs::Ref<kairo::unity::surface::TouchEvent> e);

void OnTouchSubMenu(pls::cs::Int32 type,pls::cs::Int32 v,pls::cs::Ref<kairo::unity::surface::TouchEvent> e);

void OnTouchList(pls::cs::Int32 type,pls::cs::Int32 v,pls::cs::Ref<kairo::unity::surface::TouchEvent> e);

void OnTouchScrollList(pls::cs::Int32 type,pls::cs::Int32 v,pls::cs::Ref<kairo::unity::surface::TouchEvent> e);

void OnTouchVScrollBar(pls::cs::Int32 type,pls::cs::Int32 v,pls::cs::Ref<kairo::unity::surface::TouchEvent> e);

void OnTouchVScrollButton(pls::cs::Int32 type,pls::cs::Int32 v,pls::cs::Ref<kairo::unity::surface::TouchEvent> e);

void OnTouchUnMarker(pls::cs::Int32 type,pls::cs::Int32 v,pls::cs::Ref<kairo::unity::surface::TouchEvent> e);

void OnTouchCamera(pls::cs::Int32 type,pls::cs::Int32 v,pls::cs::Ref<kairo::unity::surface::TouchEvent> e);

void OnTouchTrackBar(pls::cs::Int32 type,pls::cs::Int32 v,pls::cs::Ref<kairo::unity::surface::TouchEvent> e);

void OnTouchRect(pls::cs::Int32 type,pls::cs::Int32 v,pls::cs::Ref<kairo::unity::surface::TouchEvent> e);

void DrawImage(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Single x,pls::cs::Single y,pls::cs::Int32 imgId);

void DrawScaledImage(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Single x,pls::cs::Single y,pls::cs::Single w,pls::cs::Single h,pls::cs::Int32 imgId);

static pls::cs::Array<pls::cs::Single> GetImageRect(pls::cs::Int32 imgId);

pls::cs::Array<pls::cs::Int32> DrawVerticalScroll(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 w,pls::cs::Int32 h,pls::cs::Int32 value,pls::cs::Int32 maximum,pls::cs::Int32 largeChange,bool touch,pls::cs::Int32 type);

pls::cs::Ref<TouchEffect> AddEffect(pls::cs::Int32 id,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 imgId,pls::cs::Ref<kairo::unity::surface::TouchComponent> c);

pls::cs::Int32 GetKey(pls::cs::Ref<kairo::unity::surface::TouchComponent> c,pls::cs::Int32 defaultKey);

void AddDelayPaintBuffer(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Array<pls::cs::Int32> paint);
};
} // namespace surface
}
