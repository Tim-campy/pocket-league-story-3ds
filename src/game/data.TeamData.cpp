// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "data.BaseData.hpp"
#include "data.LeagueData.hpp"
#include "data.PlayerData.hpp"
#include "data.TeamData.hpp"
#include "game.GameUtil.hpp"
#include "game.UserData.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.unity.util.Language.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "main.AppData.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace data {

void TeamData::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    BaseData::trace_edges(visitor);
    pls::cs::trace_value(name_, visitor);
    pls::cs::trace_value(name2_, visitor);
    pls::cs::trace_value(homeTownName_, visitor);
    pls::cs::trace_value(warP_distribute_, visitor);
    pls::cs::trace_value(warP_paramPhysical_, visitor);
    pls::cs::trace_value(goalGetter_, visitor);
    pls::cs::trace_value(memberFaceId_, visitor);
    pls::cs::trace_value(goalScore_, visitor);
    pls::cs::trace_value(goalScoreRate_, visitor);
}

static pls::cs::Ref<main::AppData> TeamData_apdat__storage{};

static PLS_NOINLINE void cs_init_169021fb033627ed_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots(
        [](const pls::cs::EdgeVisitor& visitor) { pls::cs::trace_value(TeamData_apdat__storage, visitor); });
    static pls::cs::TypeInitState state;
    state.run("data.TeamData", flag, []() {

    });
}

void TeamData::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_169021fb033627ed_slow(flag);
}

pls::cs::Ref<main::AppData>& TeamData::apdat_() {
    TeamData::ensure_initialized();
    return TeamData_apdat__storage;
}

void TeamData::create_init(pls::cs::Ref<TeamData> self) {
    TeamData::ensure_initialized();
    BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TeamData.#ctor", game);
    {
        TeamData::apdat_() = main::AppData::GetInstance();
    }
}

void TeamData::create_init(pls::cs::Ref<TeamData> self, pls::cs::String src) {
    TeamData::ensure_initialized();
    BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TeamData.#ctor(System.String)", game);
    {
        TeamData::apdat_() = main::AppData::GetInstance();
        self->Init();
        self->Load(src);
    }
}

// M:data.TeamData.#ctor
pls::cs::Ref<TeamData> TeamData::create() {
    TeamData::ensure_initialized();
    auto self = pls::cs::make_ref<TeamData>();
    TeamData::create_init(self);
    return self;
}

// M:data.TeamData.#ctor(System.String)
pls::cs::Ref<TeamData> TeamData::create(pls::cs::String src) {
    TeamData::ensure_initialized();
    auto self = pls::cs::make_ref<TeamData>();
    TeamData::create_init(self, src);
    return self;
}

// M:data.TeamData.Init
void TeamData::Init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TeamData.Init", game);
    {
        if ([&]() {
                auto cs_left = pls::cs::box(goalScore_);
                auto cs_right = pls::cs::box(IntArray{});
                return cs_left != cs_right;
            }()) {
            for (pls::cs::Int32 i = 0; i < goalScore_.length(); ++i) {
                goalScore_[i] = 0;
            }
        }
        if ([&]() {
                auto cs_left = pls::cs::box(goalScoreRate_);
                auto cs_right = pls::cs::box(IntArray{});
                return cs_left != cs_right;
            }()) {
            for (pls::cs::Int32 j = 0; j < goalScoreRate_.length(); ++j) {
                goalScoreRate_[j] = 0;
            }
        }
    }
}

// M:data.TeamData.Load(System.String)
void TeamData::Load(pls::cs::String src) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TeamData.Load(System.String)", game);
    {
        pls::cs::Int32 num = 0;
        StringArray array = PLS_API(kl_unity_util::StringUtil::Split(src, literal(u"\t")));
        id_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        name_ = array[num++];
        name2_ = array[num++];
        nationalFlag_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        league_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        homeTownName_ = array[num++];
        stadium_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        formation_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        formationType_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        warPotential_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        warP_distribute_ = PLS_API(kl_unity_util::StringUtil::SplitIntegers(array[num++], literal(u"&")));
        war_offence_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        war_deffence_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        amefto_pz_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        fan_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        uniform_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        bodyImg_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        keeperImg_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        goalGetter_ = StringArray::make(2);
        {
            auto cs_target = goalGetter_;
            auto cs_index = 0;
            auto cs_value = array[num++];
            cs_target.set_Item(cs_index, cs_value);
        }
        {
            auto cs_target = goalGetter_;
            auto cs_index = 1;
            auto cs_value = array[num++];
            cs_target.set_Item(cs_index, cs_value);
        }
        memberFaceId_ = PLS_API(kl_unity_util::StringUtil::SplitIntegers(array[num++], literal(u"&")));
        SetWarParamPhysical();
        goalScore_ = IntArray::make(goalGetter_.length());
        goalScoreRate_ = IntArray::make(goalGetter_.length());
        pls::cs::Int32 num2 = 0;
        for (pls::cs::Int32 i = 0; i < goalGetter_.length(); ++i) {
            if (!PLS_API(([&]() -> bool {
                    auto cs_arg0 = goalGetter_[i];
                    auto cs_arg1 = pls::cs::String(u"");
                    return string_equals(cs_arg0, cs_arg1);
                }()))) {
                ++num2;
            }
        }
        if ((num2 == 1)) {
            goalScoreRate_[0] = 100;
            goalScoreRate_[1] = goalScoreRate_[0];
        } else if ((num2 == 2)) {
            goalScoreRate_[0] = 80;
            goalScoreRate_[1] = goalScoreRate_[0] + 20;
        }
    }
}

// M:data.TeamData.SetWarParamPhysical
void TeamData::SetWarParamPhysical() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TeamData.SetWarParamPhysical", game);
    {
        warP_paramPhysical_ = IntArray::make(warP_distribute_.length());
        pls::cs::Int32 num = 0;
        for (pls::cs::Int32 i = 0; i < warP_distribute_.length(); ++i) {
            num += warP_distribute_[i];
        }
        for (pls::cs::Int32 j = 0; j < warP_distribute_.length(); ++j) {
            warP_paramPhysical_[j] = ([&]() -> pls::cs::Int32 {
                                         auto cs_left = warPotential_ * warP_distribute_.length();
                                         auto cs_right = warP_distribute_[j];
                                         return cs_left * cs_right;
                                     }()) /
                                     num;
        }
    }
}

// M:data.TeamData.SetScore(System.Int32,System.Boolean)
void TeamData::SetScore(pls::cs::Int32 getScore, bool isUserTeam) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TeamData.SetScore(System.Int32,System.Boolean)", game);
    {
        pls::cs::Ref<game::UserData> instance = game::UserData::GetInstance();
        if (isUserTeam) {

        } else {
            for (pls::cs::Int32 i = 0; i < getScore; ++i) {
                pls::cs::Int32 num = 0;
                pls::cs::Int32 num2 = game::GameUtil::Random(100);
                for (pls::cs::Int32 j = 0; j < goalScoreRate_.length(); ++j) {
                    if (num2 < goalScoreRate_[j]) {
                        num = j;
                        break;
                    }
                }
                goalScore_[num]++;
            }
        }
    }
}

// M:data.TeamData.NewGame
void TeamData::NewGame() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TeamData.NewGame", game);
    {
    }
}

// M:data.TeamData.Serialize(java.io.OutputStream)
void TeamData::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TeamData.Serialize(java.io.OutputStream)", game);
    {
        PLS_API(kl_unity_util::StreamUtil::WriteStringString(os, name_));
        PLS_API(kl_unity_util::StreamUtil::WriteStringString(os, name2_));
        PLS_API(kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(stadium_)));
        PLS_API(
            kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(warPotential_)));
        PLS_API(kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(uniform_)));
        PLS_API(kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(bodyImg_)));
        PLS_API(kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(keeperImg_)));
        PLS_API(kl_unity_util::StreamUtil::WriteInt(os, flag_));
        for (pls::cs::Int32 i = 0; i < goalGetter_.length(); ++i) {
            PLS_API(kl_unity_util::StreamUtil::WriteStringString(os, goalGetter_[i]));
        }
        for (pls::cs::Int32 j = 0; j < goalScore_.length(); ++j) {
            PLS_API(kl_unity_util::StreamUtil::WriteInt(os, goalScore_[j]));
        }
    }
}

// M:data.TeamData.Deserialize(java.io.InputStream)
void TeamData::Deserialize(pls::cs::Ref<kl_io::InputStream> stream) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TeamData.Deserialize(java.io.InputStream)", game);
    {
        name_ = PLS_API(kl_unity_util::StreamUtil::ReadString(stream));
        name2_ = PLS_API(kl_unity_util::StreamUtil::ReadString(stream));
        stadium_ =
            pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_unity_util::StreamUtil::ReadShort(stream)));
        warPotential_ =
            pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_unity_util::StreamUtil::ReadShort(stream)));
        uniform_ =
            pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_unity_util::StreamUtil::ReadShort(stream)));
        bodyImg_ =
            pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_unity_util::StreamUtil::ReadShort(stream)));
        keeperImg_ =
            pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_unity_util::StreamUtil::ReadShort(stream)));
        flag_ = PLS_API(kl_unity_util::StreamUtil::ReadInt(stream));
        for (pls::cs::Int32 i = 0; i < goalGetter_.length(); ++i) {
            {
                auto cs_target = goalGetter_;
                auto cs_index = i;
                auto cs_value = PLS_API(kl_unity_util::StreamUtil::ReadString(stream));
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        for (pls::cs::Int32 j = 0; j < goalScore_.length(); ++j) {
            {
                auto cs_target = goalScore_;
                auto cs_index = j;
                auto cs_value = PLS_API(kl_unity_util::StreamUtil::ReadInt(stream));
                cs_target.set_Item(cs_index, cs_value);
            }
        }
    }
}

// M:data.TeamData.GetHomeStadiumName
pls::cs::String TeamData::GetHomeStadiumName() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TeamData.GetHomeStadiumName", game);
    {
        if (id_ == 0) {
            if (PLS_API(kl_unity_util::Language::Japanese())) {
                return pls::cs::String::concat(name2_, homeTownName_);
            }
            return pls::cs::String::concat(pls::cs::String::concat(name2_, literal(u" ")), homeTownName_);
        }
        return homeTownName_;
    }
}

// M:data.TeamData.AddTeamEva(System.Int32)
void TeamData::AddTeamEva(pls::cs::Int32 addEva) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TeamData.AddTeamEva(System.Int32)", game);
    {
        warPotential_ = main::AppData::Clamp(warPotential_ + addEva, 0, 1000);
        pls::cs::Ref<game::UserData> instance = game::UserData::GetInstance();
        pls::cs::Int32 rankIndex = require(instance)->GetRankIndex(warPotential_);
        if (rankIndex > require(instance)->teamEvaRank_) {
            require(instance)->teamEvaRank_ = rankIndex;
        }
    }
}

// M:data.TeamData.SetScoreRanking(data.LeagueData,java.util.Vector,java.util.Vector)
void TeamData::SetScoreRanking(pls::cs::Ref<LeagueData> league_data,
                               pls::cs::Ref<kl_java_util::Vector> out_ary1,
                               pls::cs::Ref<kl_java_util::Vector> out_ary2) {
    TeamData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:data.TeamData.SetScoreRanking(data.LeagueData,java.util.Vector,java.util.Vector)",
                     game);
    {
        pls::cs::Ref<game::UserData> instance = game::UserData::GetInstance();
        for (pls::cs::Int32 i = 0; i < require(league_data)->matchEnemy_.length(); ++i) {
            pls::cs::Int32 num = require(league_data)->matchEnemy_[i];
            if (num == 0) {
                continue;
            }
            pls::cs::Ref<TeamData> teamData = require(TeamData::apdat_())->tData_.get_Item(num);
            for (pls::cs::Int32 j = 0; j < require(teamData)->goalScore_.length(); ++j) {
                if (require(teamData)->goalScore_[j] > 0) {
                    PLS_API(([&]() -> void {
                        pls::cs::Ref<pls::cs::Object> cs_arg0 =
                            pls::cs::box(require(teamData)->goalGetter_[j]);
                        kl_java_util::Vector_2_AddElement(require(out_ary1), cs_arg0);
                    }()));
                    PLS_API(([&]() -> void {
                        pls::cs::Ref<pls::cs::Object> cs_arg0 =
                            pls::cs::box(IntArray::from({require(teamData)->goalScore_[j], num, 0}));
                        kl_java_util::Vector_2_AddElement(require(out_ary2), cs_arg0);
                    }()));
                }
            }
        }
        for (pls::cs::Int32 k = 0; k < PLS_API(kl_java_util::Vector_2_Size(require(out_ary2))) - 1; ++k) {
            for (pls::cs::Int32 num2 = PLS_API(kl_java_util::Vector_2_Size(require(out_ary2))) - 1; num2 > k;
                 --num2) {
                IntArray array =
                    pls::cs::unbox<IntArray>(PLS_API(kl_java_util::Vector_2_ElementAt(require(out_ary2), k)));
                IntArray array2 = pls::cs::unbox<IntArray>(
                    PLS_API(kl_java_util::Vector_2_ElementAt(require(out_ary2), num2)));
                if ([&]() -> bool {
                        auto cs_left = array2[0];
                        auto cs_right = array[0];
                        return cs_left > cs_right;
                    }()) {
                    PLS_API(kl_java_util::Vector_2_SetElementAt(require(out_ary2), pls::cs::box(array2), k));
                    PLS_API(
                        kl_java_util::Vector_2_SetElementAt(require(out_ary2), pls::cs::box(array), num2));
                    pls::cs::String obj = pls::cs::unbox<pls::cs::String>(
                        PLS_API(kl_java_util::Vector_2_ElementAt(require(out_ary1), k)));
                    pls::cs::String obj2 = pls::cs::unbox<pls::cs::String>(
                        PLS_API(kl_java_util::Vector_2_ElementAt(require(out_ary1), num2)));
                    PLS_API(kl_java_util::Vector_2_SetElementAt(require(out_ary1), pls::cs::box(obj2), k));
                    PLS_API(kl_java_util::Vector_2_SetElementAt(require(out_ary1), pls::cs::box(obj), num2));
                }
            }
        }
        for (pls::cs::Int32 l = 0;
             l < PLS_API(kl_java_util::Vector_2_Size(require(require(instance)->memberPDataist_))); ++l) {
            pls::cs::Ref<PlayerData> playerData = pls::cs::unbox<pls::cs::Ref<PlayerData>>(
                PLS_API(kl_java_util::Vector_2_ElementAt(require(require(instance)->memberPDataist_), l)));
            if (require(playerData)->game_goalInLeague_ > 0) {
                pls::cs::Int32 num3 = 0;
                for (([&]() {
                         pls::cs::Int32 cs_value = 0;
                         num3 = cs_value;
                         return cs_value;
                     }());
                     num3 < PLS_API(kl_java_util::Vector_2_Size(require(out_ary2))); ++num3) {
                    IntArray array3 = pls::cs::unbox<IntArray>(
                        PLS_API(kl_java_util::Vector_2_ElementAt(require(out_ary2), num3)));
                    if ([&]() -> bool {
                            auto cs_left = require(playerData)->game_goalInLeague_;
                            auto cs_right = array3[0];
                            return cs_left >= cs_right;
                        }()) {
                        break;
                    }
                }
                if (num3 >= 0 && num3 <= PLS_API(kl_java_util::Vector_2_Size(require(out_ary1))) &&
                    num3 <= PLS_API(kl_java_util::Vector_2_Size(require(out_ary2)))) {
                    PLS_API(kl_java_util::Vector_2_InsertElementAt(
                        require(out_ary1), pls::cs::box(require(playerData)->name_), num3));
                    PLS_API(([&]() -> void {
                        pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(IntArray::from(
                            {require(playerData)->game_goalInLeague_, 0, require(playerData)->id_}));
                        kl_java_util::Vector_2_InsertElementAt(require(out_ary2), cs_arg0, num3);
                    }()));
                }
            }
        }
    }
}
} // namespace data
}
