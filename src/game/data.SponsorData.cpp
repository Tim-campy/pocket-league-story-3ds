// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "data.BaseData.hpp"
#include "data.EventData.hpp"
#include "data.SponsorData.hpp"
#include "data.TeamData.hpp"
#include "game.GameManager.hpp"
#include "game.GameUtil.hpp"
#include "game.UserData.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "main.AppData.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace data {

void SponsorData::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    BaseData::trace_edges(visitor);
    pls::cs::trace_value(name_, visitor);
    pls::cs::trace_value(income_, visitor);
    pls::cs::trace_value(explain_, visitor);
    pls::cs::trace_value(execsScript_, visitor);
}

static pls::cs::Ref<main::AppData> SponsorData_apdat__storage{};

static StringArray SponsorData_difficultStr_storage{};

static pls::cs::Ref<game::UserData> SponsorData_udat__storage{};

static PLS_NOINLINE void cs_init_bd3043ac164d021f_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(SponsorData_apdat__storage, visitor);
        pls::cs::trace_value(SponsorData_difficultStr_storage, visitor);
        pls::cs::trace_value(SponsorData_udat__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("data.SponsorData", flag, []() {
        SponsorData_difficultStr_storage =
            pls::cs::evaluate_type_initializer_field("F:data.SponsorData.difficultStr", [&]() {
                return StringArray::from({literal(u"簡単"), literal(u"普通"), literal(u"難しい")});
            });
    });
}

void SponsorData::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_bd3043ac164d021f_slow(flag);
}

pls::cs::Ref<main::AppData>& SponsorData::apdat_() {
    SponsorData::ensure_initialized();
    return SponsorData_apdat__storage;
}

StringArray& SponsorData::difficultStr() {
    SponsorData::ensure_initialized();
    return SponsorData_difficultStr_storage;
}

pls::cs::Ref<game::UserData>& SponsorData::udat_() {
    SponsorData::ensure_initialized();
    return SponsorData_udat__storage;
}

void SponsorData::create_init(pls::cs::Ref<SponsorData> self) {
    SponsorData::ensure_initialized();
    self->income_ = IntArray::make(2);
    BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SponsorData.#ctor", game);
    {
        SponsorData::apdat_() = main::AppData::GetInstance();
        SponsorData::udat_() = game::UserData::GetInstance();
    }
}

void SponsorData::create_init(pls::cs::Ref<SponsorData> self, pls::cs::String src) {
    SponsorData::ensure_initialized();
    self->income_ = IntArray::make(2);
    BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SponsorData.#ctor(System.String)", game);
    {
        SponsorData::apdat_() = main::AppData::GetInstance();
        SponsorData::udat_() = game::UserData::GetInstance();
        self->Init();
        self->Load(src);
    }
}

// M:data.SponsorData.#ctor
pls::cs::Ref<SponsorData> SponsorData::create() {
    SponsorData::ensure_initialized();
    auto self = pls::cs::make_ref<SponsorData>();
    SponsorData::create_init(self);
    return self;
}

// M:data.SponsorData.#ctor(System.String)
pls::cs::Ref<SponsorData> SponsorData::create(pls::cs::String src) {
    SponsorData::ensure_initialized();
    auto self = pls::cs::make_ref<SponsorData>();
    SponsorData::create_init(self, src);
    return self;
}

// M:data.SponsorData.Init
void SponsorData::Init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SponsorData.Init", game);
    {
        state_ = 0;
        satisfactPoint_ = 0;
        feelPt_ = 0;
        new_ = false;
    }
}

// M:data.SponsorData.Load(System.String)
void SponsorData::Load(pls::cs::String src) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SponsorData.Load(System.String)", game);
    {
        pls::cs::Int32 num = 0;
        StringArray array = PLS_API(kl_util::StringUtil::Split(src, literal(u"\t")));
        id_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        name_ = array[num++];
        charaIndex_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        privilegeType_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        privilegeValue_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        costType_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        cost_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        {
            auto cs_target = income_;
            auto cs_index = 0;
            auto cs_value = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
            cs_target.set_Item(cs_index, cs_value);
        }
        {
            auto cs_target = income_;
            auto cs_index = 1;
            auto cs_value = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
            cs_target.set_Item(cs_index, cs_value);
        }
        satisfactDifficult_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        difficult_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        feelPtInt_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        explain_ = array[num++];
        execsScript_ = EventData::ReadScript(array[num++]);
        flag_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        feelPt_ = feelPtInt_;
    }
}

// M:data.SponsorData.NewGame
void SponsorData::NewGame() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SponsorData.NewGame", game);
    {
        state_ = 0;
        if (PLS_API(kl_util::BitUtil::Check(flag_, 1))) {
            ChangeState(1);
        }
    }
}

// M:data.SponsorData.Serialize(java.io.OutputStream)
void SponsorData::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SponsorData.Serialize(java.io.OutputStream)", game);
    {
        PLS_API(kl_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(state_)));
        PLS_API(kl_util::StreamUtil::WriteInt(os, satisfactPoint_));
        PLS_API(kl_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(feelPt_)));
        PLS_API(kl_util::StreamUtil::WriteBoolean(os, new_));
    }
}

// M:data.SponsorData.Deserialize(java.io.InputStream)
void SponsorData::Deserialize(pls::cs::Ref<kl_io::InputStream> stream) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SponsorData.Deserialize(java.io.InputStream)", game);
    {
        state_ = pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_util::StreamUtil::ReadShort(stream)));
        satisfactPoint_ = PLS_API(kl_util::StreamUtil::ReadInt(stream));
        feelPt_ = pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_util::StreamUtil::ReadShort(stream)));
        new_ = PLS_API(kl_util::StreamUtil::ReadBoolean(stream));
    }
}

// M:data.SponsorData.ChangeState(System.Int32)
void SponsorData::ChangeState(pls::cs::Int32 state) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SponsorData.ChangeState(System.Int32)", game);
    {
        if (state_ == 0 && state == 1) {
            new_ = true;
        }
        state_ = state;
    }
}

// M:data.SponsorData.Draw_sponsorChara(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32)
void SponsorData::Draw_sponsorChara(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 charaId,
                                    pls::cs::Int32 dx, pls::cs::Int32 dy) {
    SponsorData::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:data.SponsorData.Draw_sponsorChara(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32)",
        game);
    {
        PLS_API(([&]() -> void {
            pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                require(require(SponsorData::apdat_())->resCom2_)->img.get_Item(169);
            require(g)->DrawImage(cs_arg0, dx - 10, dy - 30, 20 * (charaId % 12), 30 * (charaId / 12), 20,
                                  30);
        }()));
    }
}

// M:data.SponsorData.GetIncome
pls::cs::Int32 SponsorData::GetIncome() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SponsorData.GetIncome", game);
    {
        {
            pls::cs::Int32 cs_arg0_22 = satisfactPoint_;
            pls::cs::Int32 cs_arg3_22 = income_[0];
            pls::cs::Int32 cs_arg4_22 = income_[1];
            return game::GameUtil::RateConvert(cs_arg0_22, 0, 100, cs_arg3_22, cs_arg4_22, true);
        }
    }
}

// M:data.SponsorData.UpdateSatisFactPoint
void SponsorData::UpdateSatisFactPoint() {
    SponsorData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SponsorData.UpdateSatisFactPoint", game);
    {
        pls::cs::Ref<TeamData> teamData =
            require(SponsorData::apdat_())
                ->tData_.get_Item(require(require(SponsorData::udat_())->gm_)->teamId_[0]);
        pls::cs::Ref<TeamData> teamData2 =
            require(SponsorData::apdat_())
                ->tData_.get_Item(require(require(SponsorData::udat_())->gm_)->teamId_[1]);
        bool flag = false;
        bool flag2 = false;
        bool flag3 = false;
        if ([&]() -> bool {
                auto cs_left = require(require(SponsorData::udat_())->gm_)->score_[0];
                auto cs_right = require(require(SponsorData::udat_())->gm_)->score_[1];
                return cs_left > cs_right;
            }()) {
            flag = true;
        } else if ([&]() -> bool {
                       auto cs_left = require(require(SponsorData::udat_())->gm_)->score_[0];
                       auto cs_right = require(require(SponsorData::udat_())->gm_)->score_[1];
                       return cs_left == cs_right;
                   }()) {
            flag2 = true;
        } else {
            flag3 = true;
        }
        if (flag3) {
            return;
        }
        pls::cs::Int32 x = require(teamData)->warPotential_ - require(teamData2)->warPotential_;
        pls::cs::Int32 x2 = 0;
        if (flag) {
            x2 = game::GameUtil::RateConvert(x, -50, 50, 1000, 333, true);
        } else if (flag2) {
            x2 = game::GameUtil::RateConvert(x, -50, 50, 333, 0, true);
        }
        for (pls::cs::Int32 i = 0; i < require(SponsorData::apdat_())->sponsorData_.length(); ++i) {
            pls::cs::Ref<SponsorData> sponsorData = require(SponsorData::apdat_())->sponsorData_.get_Item(i);
            if (require(sponsorData)->state_ != 2) {
                continue;
            }
            pls::cs::Int32 x3 = require(sponsorData)->satisfactDifficult_;
            pls::cs::Int32 c2min = game::GameUtil::RateConvert(x3, 0, 1000, 5, 1, true);
            pls::cs::Int32 c2max = game::GameUtil::RateConvert(x3, 0, 1000, 20, 3, true);
            pls::cs::Int32 num = game::GameUtil::RateConvert(x2, 0, 1000, c2min, c2max, true);
            {
                auto cs_target = sponsorData;
                pls::cs::Int32 cs_value =
                    main::AppData::Clamp(require(sponsorData)->satisfactPoint_ + num, 0, 100);
                require(cs_target)->satisfactPoint_ = cs_value;
            }
        }
    }
}

// M:data.SponsorData.GetDifficultStr
pls::cs::String SponsorData::GetDifficultStr() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SponsorData.GetDifficultStr", game);
    {
        if (difficult_ < 50) {
            return SponsorData::difficultStr()[0];
        }
        if (difficult_ < 100) {
            return SponsorData::difficultStr()[1];
        }
        return SponsorData::difficultStr()[2];
    }
}

// M:data.SponsorData.IsExistNew
bool SponsorData::IsExistNew() {
    SponsorData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SponsorData.IsExistNew", game);
    {
        if (!require(game::UserData::GetInstance())->ChEventFlg(32)) {
            return false;
        }
        pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
        for (pls::cs::Int32 i = 0; i < require(instance)->sponsorData_.length(); ++i) {
            if (require(require(instance)->sponsorData_.get_Item(i))->IsNew()) {
                return true;
            }
        }
        return false;
    }
}

// M:data.SponsorData.RemoveNew
void SponsorData::RemoveNew() {
    SponsorData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SponsorData.RemoveNew", game);
    {
        pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
        for (pls::cs::Int32 i = 0; i < require(instance)->sponsorData_.length(); ++i) {
            require(require(instance)->sponsorData_.get_Item(i))->new_ = false;
        }
    }
}

// M:data.SponsorData.IsNew
bool SponsorData::IsNew() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SponsorData.IsNew", game);
    {
        if (new_) {
            return true;
        }
        return false;
    }
}
} // namespace data
}
