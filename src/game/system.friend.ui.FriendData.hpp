// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace system::friend_::ui {

struct FriendData : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(pls::cs::Object,
    {"M:system.friend.ui.FriendData.CgiGetFriendList", "M:system.friend.ui.FriendData.CgiGetFriendList"},
    {"M:system.friend.ui.FriendData.PlayBonus(System.Int32)", "M:system.friend.ui.FriendData.PlayBonus(System.Int32)"});
PLS_MANAGED_CLASS("system.friend.ui.FriendData", FriendData, pls::cs::Object)
pls::cs::Int32 FRIEND_MAX{};
pls::cs::String INTRODUCTION_APPLY_SUBJECT{};
pls::cs::String INTRODUCTION_APPLY_TEXT{};
pls::cs::String INTRODUCTION_SUBJECT{};
pls::cs::String INTRODUCTION_TEXT{};
pls::cs::Ref<generated::kairo::unity::util::SecureProperty> friSave_{};
pls::cs::Int32 PLAY_BONUS_INTERVAL_MINUTE{};
pls::cs::Int32 PLAY_BONUS_MAX{};
pls::cs::Int32 PLAY_NEW_FRIEND_BONUS{};
pls::cs::Ref<generated::java::util::Vector> friendList_{};
pls::cs::Ref<generated::java::util::Vector> applyList_{};
pls::cs::Ref<generated::java::util::Vector> newFriendList_{};
pls::cs::Ref<Friend> randomFriend_{};
bool friendDataUpdated_{};
bool alreadyCheckPlayTimeBonus_{};
bool alreadyCheckNewFriendBonus_{};
pls::cs::Ref<generated::kairo::unity::util::SecureInt> previousUpdateMinute_{};
pls::cs::Ref<generated::java::util::Vector> friendHistory_{};
pls::cs::Int64 playTimeBegin_{};
pls::cs::Int64 playTimeSec_{};
virtual pls::cs::Ref<generated::java::util::Vector> CgiGetFriendList();
virtual void PlayBonus(pls::cs::Int32 value)=0;
static constexpr pls::cs::Int32 FRISAVEP_END = 0;static constexpr pls::cs::Int32 FRISAVEI_FLAG = 0;static constexpr pls::cs::Int32 FRISAVEI_MINUTE_MY = 1;static constexpr pls::cs::Int32 FRISAVEI_MINUTE_PREVIOUS = 2;static constexpr pls::cs::Int32 FRISAVEI_MINUTE_DIFF = 3;static constexpr pls::cs::Int32 FRISAVEI_MINUTE_TOTAL = 4;static constexpr pls::cs::Int32 FRISAVEI_SAVE_VERSION = 5;static constexpr pls::cs::Int32 FRISAVEI_END = 6;static constexpr pls::cs::Int32 FRISAVE_FLAG_ABOUT_FRIEND = 1;static constexpr pls::cs::Int32 FRISAVEL_END = 0;static constexpr pls::cs::Int32 FRISAVES_FRIEND_NAME = 0;static constexpr pls::cs::Int32 FRISAVES_END = 1;static constexpr pls::cs::Int32 FRISAVEB_FRIEND_HISTORY = 0;static constexpr pls::cs::Int32 FRISAVEB_NEW_FRIEND = 1;static constexpr pls::cs::Int32 FRISAVEB_END = 2;
static pls::cs::Ref<FriendData> create();

static void ensure_initialized();

static pls::cs::Array<pls::cs::Array<std::uint8_t>>& defFriSaveB_();

static pls::cs::Array<pls::cs::Int32>& defFriSaveI_();

static pls::cs::Array<pls::cs::Int64>& defFriSaveL_();

static pls::cs::Array<pls::cs::Ref<generated::kairo::unity::util::SecureProperty>>& defFriSaveP_();

static pls::cs::Array<pls::cs::String>& defFriSaveS_();

static pls::cs::Ref<FriendData>& instance_();

static void create_init(pls::cs::Ref<FriendData> self);

static pls::cs::Ref<FriendData> GetInstance();

void Init();

void Load(pls::cs::Array<std::uint8_t> data);

pls::cs::Array<std::uint8_t> Write();

void NewGame(bool take);

void LoadGame(pls::cs::Array<std::uint8_t> data);

pls::cs::Array<std::uint8_t> WriteGame();

void PackFriendBinalyData();

void UnpackFriendBinalyData();

void CgiRegistFriend(pls::cs::String name,pls::cs::Int64 minute);

pls::cs::Ref<Friend> CgiSearchFriend(pls::cs::String friendId);

void CgiApplyFriend(pls::cs::String friendId);

void CgiApproveFriend(pls::cs::String friendId);

void CgiRefuseFriend(pls::cs::String friendId);

pls::cs::Ref<Friend> CgiRandomFriend();

pls::cs::String GetFriendName();

pls::cs::String GetFriendID();

void SetFriendName(pls::cs::String name);

bool CheckRegistFriend();

pls::cs::Int32 GetPlayBonus();

void RefreshFriendList();

bool UpdateRandomFriend();

bool ExistRandomFriend();

pls::cs::Ref<Friend> GetRandomFriend();

static void DrawGradation(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 dx,pls::cs::Int32 dy,pls::cs::Int32 sx,pls::cs::Int32 sy,pls::cs::Int32 w,pls::cs::Int32 h,pls::cs::Int32 sr,pls::cs::Int32 sg,pls::cs::Int32 sb,pls::cs::Int32 dr,pls::cs::Int32 dg,pls::cs::Int32 db);

static void ActionSendMail(pls::cs::String subject,pls::cs::String text);

bool IsFriendDataUpdated();

void InitializeData();

static bool IsEffectiveRegistName(pls::cs::String name,pls::cs::Int32 max_);

static bool IsEffectiveRegistName(pls::cs::String name);

pls::cs::Ref<form::FriendForm> GetCurrentForm();

pls::cs::Ref<form::FriendForm> GetCurrentForm(pls::cs::Ref<Friend> friend_);

void UpdatePlayTime();
};
} // namespace system::friend_::ui
}
