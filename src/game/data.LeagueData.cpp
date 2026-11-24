// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "data.BaseData.hpp"
#include "data.EventData.hpp"
#include "data.LeagueData.hpp"
#include "form.SubForm.hpp"
#include "game.UserData.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "kairo.unity.ui.TextLayout.hpp"
#include "main.AppData.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace data {

void LeagueData::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    BaseData::trace_edges(visitor);
    pls::cs::trace_value(name_, visitor);
    pls::cs::trace_value(name2_, visitor);
    pls::cs::trace_value(matchEnemy_, visitor);
    pls::cs::trace_value(matchEnemyNext_, visitor);
    pls::cs::trace_value(execsScript_, visitor);
    pls::cs::trace_value(execsScript2_, visitor);
    pls::cs::trace_value(execsScript3_, visitor);
    pls::cs::trace_value(explain_, visitor);
}

static pls::cs::Ref<main::AppData> LeagueData_apdat__storage{};

static pls::cs::Ref<game::UserData> LeagueData_udat__storage{};

static PLS_NOINLINE void cs_init_b68aa9c3dd5cf14c_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(LeagueData_apdat__storage, visitor);
        pls::cs::trace_value(LeagueData_udat__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("data.LeagueData", flag, []() {

    });
}

void LeagueData::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_b68aa9c3dd5cf14c_slow(flag);
}

pls::cs::Ref<main::AppData>& LeagueData::apdat_() {
    LeagueData::ensure_initialized();
    return LeagueData_apdat__storage;
}

pls::cs::Ref<game::UserData>& LeagueData::udat_() {
    LeagueData::ensure_initialized();
    return LeagueData_udat__storage;
}

void LeagueData::create_init(pls::cs::Ref<LeagueData> self) {
    LeagueData::ensure_initialized();
    BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.LeagueData.#ctor", game);
    {
        LeagueData::apdat_() = main::AppData::GetInstance();
        LeagueData::udat_() = game::UserData::GetInstance();
    }
}

void LeagueData::create_init(pls::cs::Ref<LeagueData> self, pls::cs::String src) {
    LeagueData::ensure_initialized();
    BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.LeagueData.#ctor(System.String)", game);
    {
        LeagueData::apdat_() = main::AppData::GetInstance();
        LeagueData::udat_() = game::UserData::GetInstance();
        self->Init();
        self->Load(src);
    }
}

// M:data.LeagueData.#ctor
pls::cs::Ref<LeagueData> LeagueData::create() {
    LeagueData::ensure_initialized();
    auto self = pls::cs::make_ref<LeagueData>();
    LeagueData::create_init(self);
    return self;
}

// M:data.LeagueData.#ctor(System.String)
pls::cs::Ref<LeagueData> LeagueData::create(pls::cs::String src) {
    LeagueData::ensure_initialized();
    auto self = pls::cs::make_ref<LeagueData>();
    LeagueData::create_init(self, src);
    return self;
}

// M:data.LeagueData.Init
void LeagueData::Init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.LeagueData.Init", game);
    {
        state_ = 0;
        trophy_ = 0;
        userPriOlder_ = 0;
        new_ = false;
    }
}

// M:data.LeagueData.Load(System.String)
void LeagueData::Load(pls::cs::String src) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.LeagueData.Load(System.String)", game);
    {
        pls::cs::Int32 num = 0;
        StringArray array = PLS_API(kl_util::StringUtil::Split(src, literal(u"\t")));
        id_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        name_ = array[num++];
        name2_ = array[num++];
        matchEnemy_ = PLS_API(kl_util::StringUtil::SplitIntegers(array[num++], literal(u",")));
        execsScript_ = EventData::ReadScript(array[num++]);
        execsScript2_ = EventData::ReadScript(array[num++]);
        execsScript3_ = EventData::ReadScript(array[num++]);
        victoryPrize_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        matchPrize_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        joinCost_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        schedule_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        rank_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        explain_ = array[num++];
        flag_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        matchEnemyNext_ = IntArray::make(matchEnemy_.length());
        for (pls::cs::Int32 i = 0; i < matchEnemy_.length(); ++i) {
            matchEnemyNext_[i] = matchEnemy_[i];
        }
    }
}

// M:data.LeagueData.NewGame
void LeagueData::NewGame() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.LeagueData.NewGame", game);
    {
        state_ = 0;
        if (PLS_API(kl_util::BitUtil::Check(flag_, 1))) {
            ChangeState(1);
        }
        userPriOlder_ = -1;
    }
}

// M:data.LeagueData.Serialize(java.io.OutputStream)
void LeagueData::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.LeagueData.Serialize(java.io.OutputStream)", game);
    {
        PLS_API(kl_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(state_)));
        PLS_API(kl_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(trophy_)));
        PLS_API(kl_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(userPriOlder_)));
        PLS_API(kl_util::StreamUtil::WriteBoolean(os, new_));
        for (pls::cs::Int32 i = 0; i < matchEnemy_.length(); ++i) {
            PLS_API(
                kl_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(matchEnemy_[i])));
        }
        for (pls::cs::Int32 j = 0; j < matchEnemyNext_.length(); ++j) {
            PLS_API(kl_util::StreamUtil::WriteShort(
                os, pls::cs::cast_integral<std::int16_t>(matchEnemyNext_[j])));
        }
    }
}

// M:data.LeagueData.Deserialize(java.io.InputStream)
void LeagueData::Deserialize(pls::cs::Ref<kl_io::InputStream> stream) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.LeagueData.Deserialize(java.io.InputStream)", game);
    {
        state_ = pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_util::StreamUtil::ReadShort(stream)));
        trophy_ = pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_util::StreamUtil::ReadShort(stream)));
        userPriOlder_ =
            pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_util::StreamUtil::ReadShort(stream)));
        new_ = PLS_API(kl_util::StreamUtil::ReadBoolean(stream));
        for (pls::cs::Int32 i = 0; i < matchEnemy_.length(); ++i) {
            {
                auto cs_target = matchEnemy_;
                auto cs_index = i;
                auto cs_value =
                    pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_util::StreamUtil::ReadShort(stream)));
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        for (pls::cs::Int32 j = 0; j < matchEnemyNext_.length(); ++j) {
            {
                auto cs_target = matchEnemyNext_;
                auto cs_index = j;
                auto cs_value =
                    pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_util::StreamUtil::ReadShort(stream)));
                cs_target.set_Item(cs_index, cs_value);
            }
        }
    }
}

// M:data.LeagueData.ChangeState(System.Int32)
void LeagueData::ChangeState(pls::cs::Int32 state) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.LeagueData.ChangeState(System.Int32)", game);
    {
        if (state_ == 0 && state == 1) {
            new_ = true;
        }
        state_ = state;
    }
}

// M:data.LeagueData.RegistLeague(System.Int32)
void LeagueData::RegistLeague(pls::cs::Int32 leagueId) {
    LeagueData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.LeagueData.RegistLeague(System.Int32)", game);
    {
        pls::cs::Ref<game::UserData> instance = game::UserData::GetInstance();
        require(instance)->SetMatchInfoJoin(0);
        require(instance)->selectLeagueId_ = leagueId;
        require(instance)->League_init();
        require(instance)->matchFlgVictory_ = 0;
    }
}

// M:data.LeagueData.SetGetTrophy(System.Int32)
void LeagueData::SetGetTrophy(pls::cs::Int32 trophy) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.LeagueData.SetGetTrophy(System.Int32)", game);
    {
        if (trophy_ < trophy) {
            trophy_ = trophy;
        }
    }
}

// M:data.LeagueData.IsLastMatch
bool LeagueData::IsLastMatch() {
    LeagueData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.LeagueData.IsLastMatch", game);
    {
        pls::cs::Ref<game::UserData> instance = game::UserData::GetInstance();
        pls::cs::Ref<LeagueData> leagueData =
            require(main::AppData::GetInstance())->leagueData_.get_Item(require(instance)->selectLeagueId_);
        pls::cs::Int32 testedValue = require(instance)->GetMatchInfoJoin();
        if (testedValue != 0) {
            return false;
        }
        if (require(instance)->league_setu_ ==
            pls::cs::Int32(require(leagueData)->matchEnemy_.length()) - 2) {
            return true;
        }
        return false;
    }
}

// M:data.LeagueData.IsVictoryLeague
bool LeagueData::IsVictoryLeague() {
    LeagueData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.LeagueData.IsVictoryLeague", game);
    {
        pls::cs::Int32 testedValue = require(LeagueData::udat_())->GetMatchInfoJoin();
        if (testedValue != 0) {
            return false;
        }
        if (require(LeagueData::udat_())->matchFlgVictory_ == 1) {
            return false;
        }
        IntArray leagueData = require(LeagueData::udat_())->GetLeagueData(0);
        if (leagueData[7] == 1) {
            pls::cs::Ref<LeagueData> leagueData2 =
                require(LeagueData::apdat_())
                    ->leagueData_.get_Item(require(LeagueData::udat_())->selectLeagueId_);
            auto cs_receiver_14 = LeagueData::udat_();
            pls::cs::Int32 cs_arg0_14 = require(LeagueData::udat_())->league_dispOlder_[1][0];
            IntArray leagueData3 = require(cs_receiver_14)->GetLeagueData(cs_arg0_14);
            pls::cs::Int32 num = (pls::cs::Int32(require(leagueData2)->matchEnemy_.length()) - 1 -
                                  (require(LeagueData::udat_())->league_setu_ + 1)) *
                                 3;
            if ([&]() -> bool {
                    auto cs_left = leagueData[0];
                    auto cs_right = leagueData3[0] + num;
                    return cs_left > cs_right;
                }()) {
                return true;
            }
            if (([&]() -> bool {
                    auto cs_left = leagueData[0];
                    auto cs_right = leagueData3[0];
                    return cs_left == cs_right;
                }()) &&
                require(LeagueData::udat_())->league_setu_ ==
                    pls::cs::Int32(require(leagueData2)->matchEnemy_.length()) - 2 &&
                ([&]() -> bool {
                    auto cs_left = leagueData[6];
                    auto cs_right = leagueData3[6];
                    return cs_left >= cs_right;
                }())) {
                return true;
            }
        }
        return false;
    }
}

// M:data.LeagueData.IsVictoryMatch
bool LeagueData::IsVictoryMatch() {
    LeagueData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.LeagueData.IsVictoryMatch", game);
    {
        pls::cs::Int32 testedValue = require(LeagueData::udat_())->GetMatchInfoJoin();
        if (testedValue != 0) {
            return false;
        }
        IntArray leagueData = require(LeagueData::udat_())->GetLeagueData(0);
        if (leagueData[7] == 1 && require(LeagueData::udat_())->matchFlgVictory_ == 0) {
            pls::cs::Ref<LeagueData> leagueData2 =
                require(LeagueData::apdat_())
                    ->leagueData_.get_Item(require(LeagueData::udat_())->selectLeagueId_);
            auto cs_receiver_15 = LeagueData::udat_();
            pls::cs::Int32 cs_arg0_15 = require(LeagueData::udat_())->league_dispOlder_[1][0];
            IntArray leagueData3 = require(cs_receiver_15)->GetLeagueData(cs_arg0_15);
            auto cs_left_16 = leagueData[0];
            auto cs_right_16 = leagueData3[0];
            pls::cs::Int32 num = cs_left_16 - cs_right_16;
            pls::cs::Int32 num2 = (pls::cs::Int32(require(leagueData2)->matchEnemy_.length()) - 1 -
                                   (require(LeagueData::udat_())->league_setu_ + 1)) *
                                  3;
            if (num > num2 - 3) {
                return true;
            }
        }
        return false;
    }
}

// M:data.LeagueData.SetLeagueInfoExplain(kairo.unity.ui.TextLayout)
void LeagueData::SetLeagueInfoExplain(pls::cs::Ref<kairo::unity::ui::TextLayout> var_out) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.LeagueData.SetLeagueInfoExplain(kairo.unity.ui.TextLayout)",
                     game);
    {
        form::SubForm::ensure_initialized();

        require(var_out)->SetAnchor(2);
        require(var_out)->SetSize(194.0f, 32.0f);
        require(var_out)->SetColor(form::SubForm::SC_WINDOW_BLACK());
        require(var_out)->SetLineSpace(5);
        require(var_out)->SetText(explain_);
        require(var_out)->Flush();
    }
}

// M:data.LeagueData.IsExistNew
bool LeagueData::IsExistNew() {
    LeagueData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.LeagueData.IsExistNew", game);
    {
        pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
        for (pls::cs::Int32 i = 0; i < require(instance)->leagueData_.length(); ++i) {
            if (require(require(instance)->leagueData_.get_Item(i))->IsNew()) {
                return true;
            }
        }
        return false;
    }
}

// M:data.LeagueData.RemoveNew
void LeagueData::RemoveNew() {
    LeagueData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.LeagueData.RemoveNew", game);
    {
        pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
        for (pls::cs::Int32 i = 0; i < require(instance)->leagueData_.length(); ++i) {
            require(require(instance)->leagueData_.get_Item(i))->new_ = false;
        }
    }
}

// M:data.LeagueData.IsNew
bool LeagueData::IsNew() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.LeagueData.IsNew", game);
    {
        if (new_) {
            return true;
        }
        return false;
    }
}
} // namespace data
}
