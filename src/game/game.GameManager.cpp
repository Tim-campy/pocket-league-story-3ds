// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "data.BaseData.hpp"
#include "data.PlayerData.hpp"
#include "data.TeamData.hpp"
#include "form.SoccerForm.hpp"
#include "form.SubForm.hpp"
#include "game.Ball.hpp"
#include "game.Camera.hpp"
#include "game.GameManager.hpp"
#include "game.GameUtil.hpp"
#include "game.Player.hpp"
#include "game.Team.hpp"
#include "game.UserData.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.m3d4.util3d.Vector3D.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "kairo.unity.ui.Seb.hpp"
#include "kairo.unity.util.Language.hpp"
#include "main.AppData.hpp"
#include "surface.GameView.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace game {

void GameManager::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(teamId_,visitor);pls::cs::trace_value(score_,visitor);pls::cs::trace_value(team_formationPage_,visitor);pls::cs::trace_value(team_potential_,visitor);pls::cs::trace_value(scorerListUserTeam,visitor);}

static pls::cs::Single GameManager_ADDTIME_storage{};

static pls::cs::Ref<main::AppData> GameManager_apdat__storage{};

static pls::cs::Ref<kl_java_util::Vector> GameManager_cBallHitList_storage{};

static IntArray2 GameManager_COLI_PROC_DIAGRAM_storage{};

static StringArray GameManager_GAME_HOMEAWAY_STR_storage{};

static pls::cs::Int32 GameManager_HALFTIME_storage{};

static pls::cs::Ref<GameManager> GameManager_instance_storage{};

static pls::cs::Ref<UserData> GameManager_udat__storage{};

static IntArray GameManager_WAIT_CARD_storage{};

static IntArray GameManager_WAIT_CK_storage{};

static IntArray GameManager_WAIT_GK_storage{};

static IntArray GameManager_WAIT_GOAL_storage{};

static IntArray GameManager_WAIT_THROWIN_storage{};

static PLS_NOINLINE void cs_init_0db347231f2257f9_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(GameManager_ADDTIME_storage,visitor);pls::cs::trace_value(GameManager_apdat__storage,visitor);pls::cs::trace_value(GameManager_cBallHitList_storage,visitor);pls::cs::trace_value(GameManager_COLI_PROC_DIAGRAM_storage,visitor);pls::cs::trace_value(GameManager_GAME_HOMEAWAY_STR_storage,visitor);pls::cs::trace_value(GameManager_HALFTIME_storage,visitor);pls::cs::trace_value(GameManager_instance_storage,visitor);pls::cs::trace_value(GameManager_udat__storage,visitor);pls::cs::trace_value(GameManager_WAIT_CARD_storage,visitor);pls::cs::trace_value(GameManager_WAIT_CK_storage,visitor);pls::cs::trace_value(GameManager_WAIT_GK_storage,visitor);pls::cs::trace_value(GameManager_WAIT_GOAL_storage,visitor);pls::cs::trace_value(GameManager_WAIT_THROWIN_storage,visitor);});static pls::cs::TypeInitState state;state.run("game.GameManager",flag,[](){
GameManager_HALFTIME_storage = pls::cs::evaluate_type_initializer_field("F:game.GameManager.HALFTIME",[&](){return 2700;});
GameManager_ADDTIME_storage = pls::cs::evaluate_type_initializer_field("F:game.GameManager.ADDTIME",[&](){return pls::cs::Single(GameManager::HALFTIME()) / 1200.0f;});
GameManager_WAIT_THROWIN_storage = pls::cs::evaluate_type_initializer_field("F:game.GameManager.WAIT_THROWIN",[&](){return IntArray::from({30, 90});});
GameManager_WAIT_CK_storage = pls::cs::evaluate_type_initializer_field("F:game.GameManager.WAIT_CK",[&](){return IntArray::from({30, 90});});
GameManager_WAIT_GK_storage = pls::cs::evaluate_type_initializer_field("F:game.GameManager.WAIT_GK",[&](){return IntArray::from({30, 90});});
GameManager_WAIT_GOAL_storage = pls::cs::evaluate_type_initializer_field("F:game.GameManager.WAIT_GOAL",[&](){return IntArray::from({30, 60, 180});});
GameManager_WAIT_CARD_storage = pls::cs::evaluate_type_initializer_field("F:game.GameManager.WAIT_CARD",[&](){return IntArray::from({30, 60, 72, 117});});
GameManager_COLI_PROC_DIAGRAM_storage = pls::cs::evaluate_type_initializer_field("F:game.GameManager.COLI_PROC_DIAGRAM",[&](){return IntArray2::from({IntArray::make(9), IntArray::from({0, 1, 1, 1, 2, 0, 0, 1, 1}), IntArray::from({0, 1, 1, 2, 1, 0, 0, 1, 1}), IntArray::from({0, 1, 0, 0, 0, 0, 0, 0, 0}), IntArray::from({0, 0, 1, 0, 0, 0, 0, 0, 0}), IntArray::from({0, 0, 0, 0, 4, 0, 0, 0, 0}), IntArray::from({0, 0, 0, 4, 0, 0, 0, 0, 0}), IntArray::from({0, 1, 1, 1, 2, 0, 0, 1, 3}), IntArray::from({0, 1, 1, 2, 1, 0, 0, 3, 1})});});
GameManager_GAME_HOMEAWAY_STR_storage = pls::cs::evaluate_type_initializer_field("F:game.GameManager.GAME_HOMEAWAY_STR",[&](){return StringArray::from({literal(u"ホーム"), literal(u"アウェイ")});});
GameManager_cBallHitList_storage = pls::cs::evaluate_type_initializer_field("F:game.GameManager.cBallHitList",[&](){return kl_java_util::Vector::create();});

});}

void GameManager::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_0db347231f2257f9_slow(flag);}

pls::cs::Single& GameManager::ADDTIME(){GameManager::ensure_initialized();return GameManager_ADDTIME_storage;}

pls::cs::Ref<main::AppData>& GameManager::apdat_(){GameManager::ensure_initialized();return GameManager_apdat__storage;}

pls::cs::Ref<kl_java_util::Vector>& GameManager::cBallHitList(){GameManager::ensure_initialized();return GameManager_cBallHitList_storage;}

IntArray2& GameManager::COLI_PROC_DIAGRAM(){GameManager::ensure_initialized();return GameManager_COLI_PROC_DIAGRAM_storage;}

StringArray& GameManager::GAME_HOMEAWAY_STR(){GameManager::ensure_initialized();return GameManager_GAME_HOMEAWAY_STR_storage;}

pls::cs::Int32& GameManager::HALFTIME(){GameManager::ensure_initialized();return GameManager_HALFTIME_storage;}

pls::cs::Ref<GameManager>& GameManager::instance(){GameManager::ensure_initialized();return GameManager_instance_storage;}

pls::cs::Ref<UserData>& GameManager::udat_(){GameManager::ensure_initialized();return GameManager_udat__storage;}

IntArray& GameManager::WAIT_CARD(){GameManager::ensure_initialized();return GameManager_WAIT_CARD_storage;}

IntArray& GameManager::WAIT_CK(){GameManager::ensure_initialized();return GameManager_WAIT_CK_storage;}

IntArray& GameManager::WAIT_GK(){GameManager::ensure_initialized();return GameManager_WAIT_GK_storage;}

IntArray& GameManager::WAIT_GOAL(){GameManager::ensure_initialized();return GameManager_WAIT_GOAL_storage;}

IntArray& GameManager::WAIT_THROWIN(){GameManager::ensure_initialized();return GameManager_WAIT_THROWIN_storage;}

void GameManager::create_init(pls::cs::Ref<GameManager> self) {
GameManager::ensure_initialized();
self->teamId_ = IntArray::make(2);
self->score_ = IntArray::make(2);
self->team_formationPage_ = IntArray::make(2);
self->team_potential_ = IntArray::make(2);
self->scorerListUserTeam = kl_java_util::Vector::create();
PLS_METHOD_SCOPE("Assembly-CSharp","M:game.GameManager.#ctor",game);
{
GameManager::apdat_() = main::AppData::GetInstance();
}

}

// M:game.GameManager.#ctor
pls::cs::Ref<GameManager> GameManager::create() {
GameManager::ensure_initialized();
 auto self = pls::cs::make_ref<GameManager>(); GameManager::create_init(self); return self; 
}

// M:game.GameManager.GetInstance
pls::cs::Ref<GameManager> GameManager::GetInstance() {
GameManager::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:game.GameManager.GetInstance",game);
{
if (is_null(GameManager::instance())) {
GameManager::instance() = GameManager::create();
}
return GameManager::instance();
}

}

// M:game.GameManager.StartSoccerForm(System.Boolean)
void GameManager::StartSoccerForm(bool isUserBattle) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.GameManager.StartSoccerForm(System.Boolean)",game);
{
form::SoccerForm::ensure_initialized();

pls::cs::Array<pls::cs::Ref<data::TeamData>> array = pls::cs::Array<pls::cs::Ref<data::TeamData>>::make(2);
if (!halfTime) {
array.set_Item(0, require(GameManager::apdat_())->tData_.get_Item(teamId_[0]));
array.set_Item(1, require(GameManager::apdat_())->tData_.get_Item(teamId_[1]));
} else {
array.set_Item(0, require(GameManager::apdat_())->tData_.get_Item(teamId_[1]));
array.set_Item(1, require(GameManager::apdat_())->tData_.get_Item(teamId_[0]));
}
if (isUserBattle) {
for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(GameManager::udat_())->memberPDataist_));}); ++i) {
pls::cs::Ref<data::PlayerData> playerData = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(GameManager::udat_())->memberPDataist_), i);}));
require(playerData)->SetGameParamData(require(playerData)->paramPhysical_);
}
if (!halfTime) {
for (pls::cs::Int32 j = 0; j < require(GameManager::udat_())->cpuPlayerDatas_[1].length(); ++j) {
pls::cs::Ref<data::PlayerData> playerData2 = require(GameManager::udat_())->cpuPlayerDatas_[1].get_Item(j);
{ IntArray cs_arg0 = require(array.get_Item(1))->warP_paramPhysical_; require(playerData2)->SetGameParamData(cs_arg0); }
{ auto cs_target = playerData2; pls::cs::Int32 cs_value = require(array.get_Item(1))->memberFaceId_[j]; require(cs_target)->faceImg_ = cs_value; }
}
} else {
for (pls::cs::Int32 k = 0; k < require(GameManager::udat_())->cpuPlayerDatas_[0].length(); ++k) {
pls::cs::Ref<data::PlayerData> playerData3 = require(GameManager::udat_())->cpuPlayerDatas_[0].get_Item(k);
{ IntArray cs_arg0 = require(array.get_Item(0))->warP_paramPhysical_; require(playerData3)->SetGameParamData(cs_arg0); }
{ auto cs_target = playerData3; pls::cs::Int32 cs_value = require(array.get_Item(0))->memberFaceId_[k]; require(cs_target)->faceImg_ = cs_value; }
}
}
} else {
for (pls::cs::Int32 l = 0; l < require(GameManager::udat_())->cpuPlayerDatas_[0].length(); ++l) {
pls::cs::Ref<data::PlayerData> playerData4 = require(GameManager::udat_())->cpuPlayerDatas_[0].get_Item(l);
{ IntArray cs_arg0 = require(array.get_Item(0))->warP_paramPhysical_; require(playerData4)->SetGameParamData(cs_arg0); }
{ auto cs_target = playerData4; pls::cs::Int32 cs_value = require(array.get_Item(0))->memberFaceId_[l]; require(cs_target)->faceImg_ = cs_value; }
}
for (pls::cs::Int32 m = 0; m < require(GameManager::udat_())->cpuPlayerDatas_[1].length(); ++m) {
pls::cs::Ref<data::PlayerData> playerData5 = require(GameManager::udat_())->cpuPlayerDatas_[1].get_Item(m);
{ IntArray cs_arg0 = require(array.get_Item(1))->warP_paramPhysical_; require(playerData5)->SetGameParamData(cs_arg0); }
{ auto cs_target = playerData5; pls::cs::Int32 cs_value = require(array.get_Item(1))->memberFaceId_[m]; require(cs_target)->faceImg_ = cs_value; }
}
}
{ auto cs_target = GameManager::udat_(); auto cs_value = pls::cs::Array<pls::cs::Ref<Team>>::make(2); require(cs_target)->teams_ = cs_value; }
for (pls::cs::Int32 n = 0; n < require(GameManager::udat_())->teams_.length(); ++n) {
{ auto cs_target = require(GameManager::udat_())->teams_; auto cs_index = n; auto cs_value = Team::create();cs_target.set_Item(cs_index,cs_value);}
if (isUserBattle && ((!halfTime && n == 0) || (halfTime && n == 1))) {
{ auto cs_receiver = require(GameManager::udat_())->teams_.get_Item(n); pls::cs::Int32 cs_arg2 = require(array.get_Item(n))->id_; require(cs_receiver)->Init(true, n, cs_arg2); }
} else {
{ auto cs_receiver = require(GameManager::udat_())->teams_.get_Item(n); pls::cs::Int32 cs_arg2 = require(array.get_Item(n))->id_; require(cs_receiver)->Init(false, n, cs_arg2); }
}
}
for (pls::cs::Int32 num = 0; num < require(GameManager::udat_())->teams_.length(); ++num) {
for (pls::cs::Int32 num2 = 0; num2 < require(require(GameManager::udat_())->teams_.get_Item(num))->players_.length(); ++num2) {
pls::cs::Ref<Player> player = require(require(GameManager::udat_())->teams_.get_Item(num))->players_.get_Item(num2);
pls::cs::Ref<data::PlayerData> playerData6 = require(GameManager::apdat_())->pData_.get_Item(require(player)->pData_id_);
require(playerData6)->SetGameData(player);
}
}
{ auto cs_target = GameManager::udat_(); auto cs_value = Ball::create(); require(cs_target)->ball_ = cs_value; }
require(require(GameManager::udat_())->ball_)->Init();
if (form::SoccerForm::DEBUG_BALLTEST_MODE() == 1 || form::SoccerForm::DEBUG_BALLPLAYER() == 1) {
ChangeState(0);
ChangeGameState(2);
} else {
ChangeState(1);
ChangeGameState(0);
}
require(GameManager::apdat_())->PlaySe(12);

}
}

// M:game.GameManager.StartSoccerMatch
void GameManager::StartSoccerMatch() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.GameManager.StartSoccerMatch",game);
{
require(require(GameManager::udat_())->gm_)->score_[0] = 0;
require(require(GameManager::udat_())->gm_)->score_[1] = 0;
gameTime_ = 0.0f;
halfTime = false;
for (pls::cs::Int32 i = 0; i < require(GameManager::apdat_())->pData_.length(); ++i) {
for (pls::cs::Int32 j = 0; j < require(require(GameManager::apdat_())->pData_.get_Item(i))->actscoreNum_.length(); ++j) {
require(require(GameManager::apdat_())->pData_.get_Item(i))->actscoreNum_[j] = 0;
}
require(require(GameManager::apdat_())->pData_.get_Item(i))->actscoreSum_ = 0;
require(require(GameManager::apdat_())->pData_.get_Item(i))->actscoreScore_ = 0;
}
for (pls::cs::Int32 k = 0; k < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(GameManager::udat_())->memberPDataist_));}); ++k) {
pls::cs::Ref<data::PlayerData> playerData = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(GameManager::udat_())->memberPDataist_), k);}));
require(playerData)->pri_game_goalTotal_ = require(playerData)->game_goalTotal_;
}
SetBallTeam(0);
}
}

// M:game.GameManager.StartSoccerInitKickOff
void GameManager::StartSoccerInitKickOff() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.GameManager.StartSoccerInitKickOff",game);
{
form::SoccerForm::ensure_initialized();

gameTime_ = 0.0f;
SetBallTeam(0);
StartSoccerKickOff();
{ auto cs_target = require(GameManager::apdat_())->frmSoccer_; pls::cs::Int32 cs_value = form::SoccerForm::STATUS_AMEFTO_ANIME()[1]; require(cs_target)->statusAmeftoCnt_ = cs_value; }

}
}

// M:game.GameManager.StartSoccerKickOff
void GameManager::StartSoccerKickOff() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.GameManager.StartSoccerKickOff",game);
{
pls::cs::Ref<data::TeamData> teamData = require(GameManager::apdat_())->tData_.get_Item(teamId_[1]);
if (!require(require(GameManager::udat_())->gm_)->halfTime) {
require(require(GameManager::udat_())->gm_)->team_formationPage_[0] = require(GameManager::udat_())->selectFormationId_;
require(require(GameManager::udat_())->gm_)->team_formationPage_[1] = require(teamData)->formation_;
} else {
require(require(GameManager::udat_())->gm_)->team_formationPage_[0] = require(teamData)->formation_;
require(require(GameManager::udat_())->gm_)->team_formationPage_[1] = require(GameManager::udat_())->selectFormationId_;
}
require(require(GameManager::udat_())->teams_.get_Item(0))->SetPositionKickOff();
require(require(GameManager::udat_())->teams_.get_Item(1))->SetPositionKickOff();
}
}

// M:game.GameManager.ChangeState(System.Int32)
void GameManager::ChangeState(pls::cs::Int32 next_state) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.GameManager.ChangeState(System.Int32)",game);
{
state_ = next_state;
stateCnt_ = 0;
frame_ = 0;
if (state_ == 1) {
require(require(GameManager::apdat_())->frmSoccer_)->SetAllDraw();
StartSoccerInitKickOff();
} else if (state_ == 2) {
require(require(GameManager::apdat_())->frmSoccer_)->SetAllDraw();
StartSoccerKickOff();
require(GameManager::apdat_())->PlaySe(12);
} else if (state_ == 3) {
require(GameManager::apdat_())->PlaySe(12);
} else if (state_ == 4) {
require(GameManager::apdat_())->PlaySe(12);
} else if (state_ == 5) {
require(GameManager::apdat_())->PlaySe(12);
} else if (state_ == 8) {
SetBallTeam(require(require(GameManager::udat_())->ball_)->chInGoal_);
require(require(GameManager::udat_())->teams_.get_Item(0))->SetGoalState();
require(require(GameManager::udat_())->teams_.get_Item(1))->SetGoalState();
if ((!require(require(GameManager::udat_())->gm_)->halfTime && require(require(GameManager::udat_())->gm_)->gameState_ == 1) || (require(require(GameManager::udat_())->gm_)->halfTime && require(require(GameManager::udat_())->gm_)->gameState_ == 0)) {
require(GameManager::apdat_())->PlaySe(18);
} else {
require(GameManager::apdat_())->PlaySe(19);
}
} else if (state_ == 0) {
require(require(GameManager::apdat_())->frmSoccer_)->SetAllDraw();
{
pls::cs::GcCallSite gc_site("M:game.GameManager.ChangeState(System.Int32)");
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::Gc();});
}
require(require(GameManager::apdat_())->frmSoccer_)->SetAllDraw();
require(require(GameManager::udat_())->teams_.get_Item(0))->Amefto_start();
require(require(GameManager::udat_())->teams_.get_Item(1))->Amefto_start();
} else if (state_ == 9) {
if (!halfTime) {
require(GameManager::apdat_())->PlaySe(13);
} else {
require(GameManager::apdat_())->PlaySe(14);
}
}
}
}

// M:game.GameManager.ChangeGameState(System.Int32)
void GameManager::ChangeGameState(pls::cs::Int32 next_state) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.GameManager.ChangeGameState(System.Int32)",game);
{
gameState_ = next_state;
gameStateCnt_ = 0;
frame_ = 0;
}
}

// M:game.GameManager.Draw(kairo.unity.ui.Graphics)
void GameManager::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.GameManager.Draw(kairo.unity.ui.Graphics)",game);
{
form::SoccerForm::ensure_initialized();

pls::cs::Ref<surface::GameView> gameView = surface::GameView::GetInstance();
if (state_ == 3 || state_ == 4 || state_ == 5 || state_ == 2 || state_ == 1) {
pls::cs::Int32 num = 0;
if (state_ == 3) {
num = GameManager::WAIT_THROWIN()[0];
} else if (state_ == 4) {
num = GameManager::WAIT_GK()[0];
} else if (state_ == 5) {
num = GameManager::WAIT_CK()[0];
}
pls::cs::Int32 num2 = stateCnt_ - num;
pls::cs::Int32 num3 = GameUtil::RateConvert(num2, 0, 6, 255, 0, true);
if (num3 > 0 && num2 >= 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0, num3);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg2 = require(gameView)->GetGameWidth(); pls::cs::Single cs_arg3 = require(gameView)->GetGameHeight(); require(g)->FillRect(0.0f, 0.0f, cs_arg2, cs_arg3); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0, 255);}));});
}
if (num2 > 6 && num2 <= 36) {
pls::cs::Int32 num4 = 0;
if (state_ == 5) {
num4 = 1;
} else if (state_ == 4) {
num4 = 2;
} else if (state_ == 3) {
num4 = 3;
} else if (state_ == 2 || state_ == 1) {
num4 = 0;
}
if (num4 == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(78, 137, 255, 194);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg2 = require(gameView)->GetGameWidth(); require(g)->FillRect(0.0f, 73.0f, cs_arg2, 13.0f); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0, 255);}));});
pls::cs::Int32 num5 = 0;
if (kairo::unity::util::Language::English()) {
num5 = ([&]() -> pls::cs::Int32 { pls::cs::Int32 cs_arg0 = num2; pls::cs::Int32 cs_arg3 = require(gameView)->GetGameWidth(); pls::cs::Int32 cs_arg4 = require(gameView)->GetGameWidth() / 2 - 49; return GameUtil::RateConvert(cs_arg0, 6, 14, cs_arg3, cs_arg4, true); }());
} else {
num5 = ([&]() -> pls::cs::Int32 { pls::cs::Int32 cs_arg0 = num2; pls::cs::Int32 cs_arg3 = require(gameView)->GetGameWidth(); pls::cs::Int32 cs_arg4 = require(gameView)->GetGameWidth() / 2 - 42; return GameUtil::RateConvert(cs_arg0, 6, 14, cs_arg3, cs_arg4, true); }());
}
{ auto cs_receiver = GameManager::apdat_(); pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(GameManager::apdat_())->resCom2_)->seb.get_Item(53); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(GameManager::apdat_())->resCom2_)->img.get_Item(63); require(cs_receiver)->DrawSeb(g, num5, 68, cs_arg3, cs_arg4, 0); }
if (num2 >= 14) {
pls::cs::Int32 num6 = num2 - 14 - 5;
pls::cs::Single num7 = GameUtil::SetVStop(-6000.0f, 5);
pls::cs::Single num8 = GameUtil::SetAStop(-6000.0f, 5);
pls::cs::Int32 num9 = pls::cs::to_int32(((num7 * pls::cs::Single(num6) + num8 * pls::cs::Single(num6) * pls::cs::Single((num6 + 1)) / 2.0f) / 1000.0f));
if (num9 > 0) {
num9 = 0;
}
pls::cs::Int32 num10 = 51;
if (kairo::unity::util::Language::English()) {
num10 += 10;
}
{ auto cs_receiver = GameManager::apdat_(); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg1 = require(gameView)->GetGameWidth() / 2 - num10 - 7; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(GameManager::apdat_())->resCom2_)->seb.get_Item(53); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(GameManager::apdat_())->resCom2_)->img.get_Item(63); require(cs_receiver)->DrawSeb(cs_arg0, cs_arg1, num9 + 87, cs_arg3, cs_arg4, 1); }
{ auto cs_receiver = GameManager::apdat_(); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg1 = require(gameView)->GetGameWidth() / 2 + num10; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(GameManager::apdat_())->resCom2_)->seb.get_Item(53); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(GameManager::apdat_())->resCom2_)->img.get_Item(63); require(cs_receiver)->DrawSeb(cs_arg0, cs_arg1, num9 + 87, cs_arg3, cs_arg4, 1); }
}
} else {
{ auto cs_receiver = GameManager::apdat_(); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg1 = require(gameView)->GetGameWidth() / 2; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(GameManager::apdat_())->resCom2_)->seb.get_Item(53 + num4); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(GameManager::apdat_())->resCom2_)->img.get_Item(63 + num4); require(cs_receiver)->DrawSeb(cs_arg0, cs_arg1, 80, cs_arg3, cs_arg4, 0); }
}
}
} else if (state_ == 8) {
pls::cs::Int32 num11 = stateCnt_ % 8 / 2;
if (num11 == 3) {
num11 = 1;
}
{ auto cs_receiver = GameManager::apdat_(); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg1 = require(gameView)->GetGameWidth() / 2; pls::cs::Int32 cs_arg2 = require(gameView)->GetGameHeight() / 2 - 40; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(GameManager::apdat_())->resCom2_)->seb.get_Item(59); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(GameManager::apdat_())->resCom2_)->img.get_Item(69); require(cs_receiver)->DrawSeb(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, num11); }
} else if (state_ == 9) {
if (!halfTime) {
{ auto cs_receiver = GameManager::apdat_(); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg1 = require(gameView)->GetGameWidth() / 2; pls::cs::Int32 cs_arg2 = require(gameView)->GetGameHeight() / 2; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(GameManager::apdat_())->resCom2_)->seb.get_Item(57); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(GameManager::apdat_())->resCom2_)->img.get_Item(67); require(cs_receiver)->DrawSeb(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, 0); }
} else {
{ auto cs_receiver = GameManager::apdat_(); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg1 = require(gameView)->GetGameWidth() / 2; pls::cs::Int32 cs_arg2 = require(gameView)->GetGameHeight() / 2; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(GameManager::apdat_())->resCom2_)->seb.get_Item(58); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(GameManager::apdat_())->resCom2_)->img.get_Item(68); require(cs_receiver)->DrawSeb(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, 0); }
}
} else if (state_ == 10) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0, 128);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(0.0f, form::SoccerForm::VIEW_Y(), 240.0f, form::SoccerForm::VIEW_H());});
{ auto cs_receiver = GameManager::apdat_(); pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(GameManager::apdat_())->resCom2_)->seb.get_Item(33); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(GameManager::apdat_())->resCom2_)->img.get_Item(35); require(cs_receiver)->DrawSeb(g, 0, 118, cs_arg3, cs_arg4, 0); }
{ auto cs_receiver = GameManager::apdat_(); pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(GameManager::apdat_())->resCom2_)->seb.get_Item(33); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(GameManager::apdat_())->resCom2_)->img.get_Item(35); require(cs_receiver)->DrawSeb(g, 120, 118, cs_arg3, cs_arg4, 0); }
{ auto cs_receiver = GameManager::apdat_(); pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(GameManager::apdat_())->resCom2_)->seb.get_Item(32); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(GameManager::apdat_())->resCom2_)->img.get_Item(34); require(cs_receiver)->DrawSeb(g, 0, 91, cs_arg3, cs_arg4, 0); }
{ auto cs_receiver = GameManager::apdat_(); pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(GameManager::apdat_())->resCom2_)->seb.get_Item(32); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(GameManager::apdat_())->resCom2_)->img.get_Item(34); require(cs_receiver)->DrawSeb(g, 120, 91, cs_arg3, cs_arg4, 0); }
if ([&]() -> bool { auto cs_left = stateCnt_; auto cs_right = GameManager::WAIT_CARD()[0]; return cs_left < cs_right; }()) {
pls::cs::Int32 num12 = stateCnt_ % 16 / 4;
pls::cs::Int32 num13 = 0;
if (num12 == 0 || num12 == 2) {
num13 = 0;
} else if (num12 == 1) {
num13 = 1;
} else {
num13 = 2;
}
pls::cs::Int32 cs_arg0_131 = stateCnt_; pls::cs::Int32 cs_arg2_131 = GameManager::WAIT_CARD()[0];
pls::cs::Int32 x = GameUtil::RateConvert(cs_arg0_131, 0, cs_arg2_131, 68, 101, true);
{ auto cs_receiver = GameManager::apdat_(); pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(GameManager::apdat_())->resCom2_)->seb.get_Item(34); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(GameManager::apdat_())->resCom2_)->img.get_Item(36); require(cs_receiver)->DrawSeb(g, x, 141, cs_arg3, cs_arg4, num13); }
} else if ([&]() -> bool { auto cs_left = stateCnt_; auto cs_right = GameManager::WAIT_CARD()[1]; return cs_left < cs_right; }()) {
{ auto cs_receiver = GameManager::apdat_(); pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(GameManager::apdat_())->resCom2_)->seb.get_Item(34); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(GameManager::apdat_())->resCom2_)->img.get_Item(36); require(cs_receiver)->DrawSeb(g, 101, 141, cs_arg3, cs_arg4, 0); }
} else {
{ auto cs_receiver = GameManager::apdat_(); pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(GameManager::apdat_())->resCom2_)->seb.get_Item(34); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(GameManager::apdat_())->resCom2_)->img.get_Item(36); pls::cs::Int32 cs_arg5 = 3 + time_card; require(cs_receiver)->DrawSeb(g, 101, 141, cs_arg3, cs_arg4, cs_arg5); }
}
pls::cs::Ref<Player> player = require(require(GameManager::udat_())->teams_.get_Item(time_team))->players_.get_Item(time_pId);
pls::cs::Ref<data::PlayerData> playerData = require(GameManager::apdat_())->pData_.get_Item(require(player)->pData_id_);
pls::cs::Ref<Team> team = require(GameManager::udat_())->teams_.get_Item(require(player)->team_id_);
pls::cs::Ref<data::TeamData> teamData = require(GameManager::apdat_())->tData_.get_Item(require(team)->tDataId_);
if ([&]() -> bool { auto cs_left = stateCnt_; auto cs_right = GameManager::WAIT_CARD()[2]; return cs_left < cs_right; }()) {
require(GameManager::udat_())->SetDispPlayerData(0, require(teamData)->bodyImg_, require(playerData)->faceImg_, 0, 2);
require(GameManager::udat_())->DrawDispPlayer(g, 137, 141);
} else {
pls::cs::Int32 num14 = 0;
if (time_animePattern == 0 || time_card == 0) {
require(GameManager::udat_())->SetDispPlayerData(0, require(teamData)->bodyImg_, require(playerData)->faceImg_, 0, 2);
} else if (time_animePattern == 1) {
require(GameManager::udat_())->SetDispPlayerData(11, require(teamData)->bodyImg_, require(playerData)->faceImg_, 0, 2);
} else if (time_animePattern == 2) {
pls::cs::Int32 num15 = (([&]() -> pls::cs::Int32 { auto cs_left = stateCnt_; auto cs_right = GameManager::WAIT_CARD()[2]; return cs_left - cs_right; }())) % 12;
if (num15 < 4) {
require(GameManager::udat_())->SetDispPlayerData(0, require(teamData)->bodyImg_, require(playerData)->faceImg_, 0, 2);
} else {
require(GameManager::udat_())->SetDispPlayerData(4, require(teamData)->bodyImg_, require(playerData)->faceImg_, 1, 2);
}
} else if (time_animePattern == 3) {
pls::cs::Int32 recoveredCardFrame = (([&]() -> pls::cs::Int32 { auto cs_left = stateCnt_; auto cs_right = GameManager::WAIT_CARD()[2]; return cs_left - cs_right; }())) % 12 / 6;
if (recoveredCardFrame == 0) {
require(GameManager::udat_())->SetDispPlayerData(4, require(teamData)->bodyImg_, require(playerData)->faceImg_, 0, 1);
} else {
require(GameManager::udat_())->SetDispPlayerData(4, require(teamData)->bodyImg_, require(playerData)->faceImg_, 0, 2);
num14 = -1;
}
}
require(GameManager::udat_())->DrawDispPlayer(g, 137 + num14, 141);
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255, 128);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(5.0f, 169.0f, 230.0f, 61.0f);});
for (pls::cs::Int32 i = 0; i < 3; ++i) {
Draw_timeMessageWindow(g, 172 + 18 * i, 222, i % 2, 120);
}
}

}
}

// M:game.GameManager.Draw_timeMessageWindow(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)
void GameManager::Draw_timeMessageWindow(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 oy,pls::cs::Int32 W,pls::cs::Int32 index,pls::cs::Int32 centerX) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.GameManager.Draw_timeMessageWindow(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
pls::cs::Int32 num = centerX - W / 2;
pls::cs::Int32 num2 = 224;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetRenderMode(1, num2, 255 - num2);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(GameManager::apdat_())->resCom2_)->img.get_Item(37); require(g)->DrawImage(cs_arg0, num, oy, 0, index * 18, 5, 18); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(GameManager::apdat_())->resCom2_)->img.get_Item(37); require(g)->DrawImage(cs_arg0, num + W - 5, oy, 115, index * 18, 5, 18); }());});
if (W - 10 <= 110) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(GameManager::apdat_())->resCom2_)->img.get_Item(37); require(g)->DrawImage(cs_arg0, num + 5, oy, 5, index * 18, W - 10, 18); }());});
} else {
pls::cs::Int32 num3 = W - 10;
pls::cs::Int32 num4 = 0;
while (num3 > 0) {
pls::cs::Int32 num5 = main::AppData::ClampMax(num3, 110);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(GameManager::apdat_())->resCom2_)->img.get_Item(37); require(g)->DrawImage(cs_arg0, num + 5 + num4, oy, 5, index * 18, num5, 18); }());});
num3 -= num5;
num4 += num5;
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetRenderMode(0, 255, 0);});
}
}

// M:game.GameManager.SetBallTeam(System.Int32)
void GameManager::SetBallTeam(pls::cs::Int32 team_id) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.GameManager.SetBallTeam(System.Int32)",game);
{
if ((team_id == -1)) {
ChangeGameState(2);
} else if ((team_id == 0)) {
ChangeGameState(0);
} else {
ChangeGameState(1);
}
}
}

// M:game.GameManager.SetBattleTeamId(System.Int32,System.Int32,System.Int32)
void GameManager::SetBattleTeamId(pls::cs::Int32 tId1,pls::cs::Int32 tId2,pls::cs::Int32 homeAway) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.GameManager.SetBattleTeamId(System.Int32,System.Int32,System.Int32)",game);
{
teamId_[0] = tId1;
teamId_[1] = tId2;
homeAway_ = homeAway;
}
}

// M:game.GameManager.Collision
void GameManager::Collision() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.GameManager.Collision",game);
{
for (pls::cs::Int32 i = 0; i < 2; ++i) {
for (pls::cs::Int32 j = 0; j < require(require(GameManager::udat_())->teams_.get_Item(i))->players_.length(); ++j) {
Collision_updateCollisionState(require(require(GameManager::udat_())->teams_.get_Item(i))->players_.get_Item(j));
}
}
pls::cs::Int32 num = GameUtil::Random(2);
for (pls::cs::Int32 k = 0; k < 2; ++k) {
pls::cs::Int32 num2 = 0;
if (k == 0) {
num2 = num;
} else {
num2 = 1 - num;
}
for (pls::cs::Int32 l = 0; l < require(require(GameManager::udat_())->teams_.get_Item(num2))->players_.length(); ++l) {
pls::cs::Ref<Player> p = require(require(GameManager::udat_())->teams_.get_Item(num2))->players_.get_Item(l);
for (pls::cs::Int32 m = 0; m < require(require(GameManager::udat_())->teams_.get_Item(0))->players_.length(); ++m) {
{
if (num2 == 0 && l == m) {
continue;
}
pls::cs::Ref<Player> p2 = require(require(GameManager::udat_())->teams_.get_Item(0))->players_.get_Item(m);
Collision_proc(p, p2);
}
}
for (pls::cs::Int32 n = 0; n < require(require(GameManager::udat_())->teams_.get_Item(1))->players_.length(); ++n) {
if (num2 == 1 && l == n) {
continue;
}
{
pls::cs::Ref<Player> p3 = require(require(GameManager::udat_())->teams_.get_Item(1))->players_.get_Item(n);
Collision_proc(p, p3);
}
}
}
}
if (state_ == 0 && gameState_ == 2 && pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(require(GameManager::udat_())->ball_)->flag_, 8);})) {
for (pls::cs::Int32 num3 = 0; num3 < 2; ++num3) {
for (pls::cs::Int32 num4 = 0; num4 < require(require(GameManager::udat_())->teams_.get_Item(num3))->players_.length(); ++num4) {
Collision_updateCollisionBallState(require(require(GameManager::udat_())->teams_.get_Item(num3))->players_.get_Item(num4));
}
}
CollisionBall_proc();
}
}
}

// M:game.GameManager.Collision_updateCollisionState(game.Player)
void GameManager::Collision_updateCollisionState(pls::cs::Ref<Player> player) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.GameManager.Collision_updateCollisionState(game.Player)",game);
{
require(player)->coliState_ = 1 + require(player)->team_id_;
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(player)->flag_, 16384);})) {
require(player)->coliState_ = 0;
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(player)->flag_, 4);})) {
require(player)->coliState_ = 3 + require(player)->team_id_;
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(player)->flag_, 16);})) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(player)->flag_, 32);})) {
require(player)->coliState_ = 5 + require(player)->team_id_;
} else {
require(player)->coliState_ = 0;
}
} else if (require(player)->actId_ == 1) {
require(player)->coliState_ = 7 + require(player)->team_id_;
} else if (require(player)->p_id_ == 0) {
require(player)->coliState_ = 0;
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(player)->flag_, 14400);})) {
require(player)->coliState_ = 0;
}
}
}

// M:game.GameManager.Collision_updateCollisionBallState(game.Player)
void GameManager::Collision_updateCollisionBallState(pls::cs::Ref<Player> player) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.GameManager.Collision_updateCollisionBallState(game.Player)",game);
{
require(player)->coliBallState_ = 3;
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(player)->flag_, 8);})) {
require(player)->coliBallState_ = 0;
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(player)->flag_, 16384);})) {
require(player)->coliBallState_ = 4;
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(player)->flag_, 64);})) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(player)->flag_, 128);})) {
require(player)->coliBallState_ = 1;
} else {
require(player)->coliBallState_ = 4;
}
} else if ((!is_null(require(require(GameManager::udat_())->ball_)->lastOwner_) && require(require(require(GameManager::udat_())->ball_)->lastOwner_)->p_id_ == require(player)->p_id_) && require(require(require(GameManager::udat_())->ball_)->lastOwner_)->team_id_ == require(player)->team_id_) {
require(player)->coliBallState_ = 4;
}
}
}
} // namespace game
}
