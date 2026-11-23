// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::ui::Canvas {
inline constexpr pls::cs::Int32 KEYID_0 = 0;
inline constexpr pls::cs::Int32 KEYID_1 = 1;
inline constexpr pls::cs::Int32 KEYID_2 = 2;
inline constexpr pls::cs::Int32 KEYID_3 = 3;
inline constexpr pls::cs::Int32 KEYID_4 = 4;
inline constexpr pls::cs::Int32 KEYID_5 = 5;
inline constexpr pls::cs::Int32 KEYID_6 = 6;
inline constexpr pls::cs::Int32 KEYID_7 = 7;
inline constexpr pls::cs::Int32 KEYID_8 = 8;
inline constexpr pls::cs::Int32 KEYID_9 = 9;
inline constexpr pls::cs::Int32 KEYID_ASTERISK = 10;
inline constexpr pls::cs::Int32 KEYID_POUND = 11;
inline constexpr pls::cs::Int32 KEYID_LEFT = 16;
inline constexpr pls::cs::Int32 KEYID_UP = 17;
inline constexpr pls::cs::Int32 KEYID_RIGHT = 18;
inline constexpr pls::cs::Int32 KEYID_DOWN = 19;
inline constexpr pls::cs::Int32 KEYID_SELECT = 20;
inline constexpr pls::cs::Int32 KEYID_SOFT1 = 21;
inline constexpr pls::cs::Int32 KEYID_SOFT2 = 22;
inline constexpr pls::cs::Int32 KEYID_SOFT3 = 23;
inline constexpr pls::cs::Int32 KEYID_SOFT4 = 24;
inline constexpr pls::cs::Int32 KEYID_USER1 = 25;
inline constexpr pls::cs::Int32 KEYID_USER2 = 26;
inline constexpr pls::cs::Int32 KEYID_USER3 = 27;
inline constexpr pls::cs::Int32 KEYID_USER4 = 28;
inline constexpr pls::cs::Int32 KEYID_USER5 = 29;
inline constexpr pls::cs::Int32 KEYID_USER6 = 30;
inline constexpr pls::cs::Int32 KEY_LEFT = 65536;
inline constexpr pls::cs::Int32 KEY_RIGHT = 262144;
inline constexpr pls::cs::Int32 KEY_UP = 131072;
inline constexpr pls::cs::Int32 KEY_DOWN = 524288;
inline constexpr pls::cs::Int32 KEY_SELECT = 1048576;
inline constexpr pls::cs::Int32 KEY_0 = 1;
inline constexpr pls::cs::Int32 KEY_1 = 2;
inline constexpr pls::cs::Int32 KEY_2 = 4;
inline constexpr pls::cs::Int32 KEY_3 = 8;
inline constexpr pls::cs::Int32 KEY_4 = 16;
inline constexpr pls::cs::Int32 KEY_5 = 32;
inline constexpr pls::cs::Int32 KEY_6 = 64;
inline constexpr pls::cs::Int32 KEY_7 = 128;
inline constexpr pls::cs::Int32 KEY_8 = 256;
inline constexpr pls::cs::Int32 KEY_9 = 512;
inline constexpr pls::cs::Int32 KEY_POUND = 2048;
inline constexpr pls::cs::Int32 KEY_ASTERISK = 1024;
inline constexpr pls::cs::Int32 KEY_SOFT1 = 2097152;
inline constexpr pls::cs::Int32 KEY_SOFT2 = 4194304;
inline constexpr pls::cs::Int32 KEY_SOFT3 = 8388608;
inline constexpr pls::cs::Int32 KEY_SOFT4 = 16777216;
inline constexpr pls::cs::Int32 KEY_USER1 = 33554432;
inline constexpr pls::cs::Int32 KEY_USER2 = 67108864;
inline constexpr pls::cs::Int32 KEY_USER3 = 134217728;
inline constexpr pls::cs::Int32 KEY_USER4 = 268435456;
inline constexpr pls::cs::Int32 KEY_USER5 = 536870912;
inline constexpr pls::cs::Int32 KEY_USER6 = 1073741824;
inline constexpr pls::cs::Int32 OP_REPL = 0;
inline constexpr pls::cs::Int32 OP_ADD = 1;
inline constexpr pls::cs::Int32 OP_SUB = 2;
inline constexpr pls::cs::Int32 SOFT_KEY_1 = 0;
inline constexpr pls::cs::Int32 SOFT_KEY_2 = 1;
inline constexpr pls::cs::Int32 SOFT_KEY_3 = 2;
inline constexpr pls::cs::Int32 SOFT_KEY_4 = 3;
inline constexpr pls::cs::Int32 TIMER_EXPIRED_EVENT = 0;
inline constexpr pls::cs::Int32 RESUME_VM_EVENT = 1;
inline constexpr pls::cs::Int32 KEY_RELEASED_EVENT = 2;
inline constexpr pls::cs::Int32 KEY_PRESSED_EVENT = 3;
inline constexpr pls::cs::Int32 KEYBUFFER_SIZE = 60;

void Fullscreen(pls::cs::Ref<pls::kairo::Canvas> self,bool enable);

pls::cs::Ref<ad::AdMobView> GetAdMobView(pls::cs::Ref<pls::kairo::Canvas> self);

pls::cs::String ImeOnBlock(pls::cs::Ref<pls::kairo::Canvas> self,pls::cs::String text,pls::cs::Int32 displayMode,pls::cs::Int32 inputMode);

bool IsGetStatusBarHeight(pls::cs::Ref<pls::kairo::Canvas> self);

bool IsGetStatusBarPosition(pls::cs::Ref<pls::kairo::Canvas> self);

bool IsLinearFilterEnable(pls::cs::Ref<pls::kairo::Canvas> self);

bool OpenBrowser(pls::cs::String url);

void SetLinearFilterEnable(pls::cs::Ref<pls::kairo::Canvas> self,bool enable);

void VersionUp(pls::cs::String url);

void Vibrator(pls::cs::Int64 ms);
} // namespace kairo::unity::ui::Canvas
}
