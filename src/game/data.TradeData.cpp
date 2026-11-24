// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "data.BaseData.hpp"
#include "data.EventData.hpp"
#include "data.FanActData.hpp"
#include "data.PlayerData.hpp"
#include "data.TeamData.hpp"
#include "data.TradeData.hpp"
#include "game.GameUtil.hpp"
#include "game.UserData.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "main.AppData.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;

namespace pls::game {
namespace data {

void TradeData::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    BaseData::trace_edges(visitor);
    pls::cs::trace_value(execsScript_, visitor);
}

static pls::cs::Ref<main::AppData> TradeData_apdat__storage{};

static pls::cs::Ref<game::UserData> TradeData_udat__storage{};

static PLS_NOINLINE void cs_init_ba9af87bc2bff5b4_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(TradeData_apdat__storage, visitor);
        pls::cs::trace_value(TradeData_udat__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("data.TradeData", flag, []() {

    });
}

void TradeData::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_ba9af87bc2bff5b4_slow(flag);
}

pls::cs::Ref<main::AppData>& TradeData::apdat_() {
    TradeData::ensure_initialized();
    return TradeData_apdat__storage;
}

pls::cs::Ref<game::UserData>& TradeData::udat_() {
    TradeData::ensure_initialized();
    return TradeData_udat__storage;
}

void TradeData::create_init(pls::cs::Ref<TradeData> self) {
    TradeData::ensure_initialized();
    BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TradeData.#ctor", game);
    {
        TradeData::apdat_() = main::AppData::GetInstance();
        TradeData::udat_() = game::UserData::GetInstance();
    }
}

void TradeData::create_init(pls::cs::Ref<TradeData> self, pls::cs::String src) {
    TradeData::ensure_initialized();
    BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TradeData.#ctor(System.String)", game);
    {
        TradeData::apdat_() = main::AppData::GetInstance();
        TradeData::udat_() = game::UserData::GetInstance();
        self->Init();
        self->Load(src);
    }
}

// M:data.TradeData.#ctor
pls::cs::Ref<TradeData> TradeData::create() {
    TradeData::ensure_initialized();
    auto self = pls::cs::make_ref<TradeData>();
    TradeData::create_init(self);
    return self;
}

// M:data.TradeData.#ctor(System.String)
pls::cs::Ref<TradeData> TradeData::create(pls::cs::String src) {
    TradeData::ensure_initialized();
    auto self = pls::cs::make_ref<TradeData>();
    TradeData::create_init(self, src);
    return self;
}

// M:data.TradeData.Init
void TradeData::Init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TradeData.Init", game);
    {
        state_ = 0;
        feelPt_ = 0;
        new_ = false;
    }
}

// M:data.TradeData.Load(System.String)
void TradeData::Load(pls::cs::String src) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TradeData.Load(System.String)", game);
    {
        pls::cs::Int32 num = 0;
        StringArray array = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StringUtil::Split(src, literal(u"\t")); });
        id_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_lang::JInteger::ParseInt(array[num++]); });
        pls::cs::String text = array[num++];
        difficult_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_lang::JInteger::ParseInt(array[num++]); });
        feelPtInt_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_lang::JInteger::ParseInt(array[num++]); });
        getNameValue_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_lang::JInteger::ParseInt(array[num++]); });
        playerDataId_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_lang::JInteger::ParseInt(array[num++]); });
        execsScript_ = EventData::ReadScript(array[num++]);
        cost_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_lang::JInteger::ParseInt(array[num++]); });
        tradeGroup_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_lang::JInteger::ParseInt(array[num++]); });
        flag_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_lang::JInteger::ParseInt(array[num++]); });
        feelPt_ = feelPtInt_;
    }
}

// M:data.TradeData.NewGame
void TradeData::NewGame() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TradeData.NewGame", game);
    {
        if (state_ == 2) {

        } else {
            state_ = 0;
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_unity_util::BitUtil::Check(flag_, 1); })) {
                state_ = 1;
            }
        }
    }
}

// M:data.TradeData.Serialize(java.io.OutputStream)
void TradeData::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TradeData.Serialize(java.io.OutputStream)", game);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(state_));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(feelPt_));
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteBoolean(os, new_); });
    }
}

// M:data.TradeData.Deserialize(java.io.InputStream)
void TradeData::Deserialize(pls::cs::Ref<kl_io::InputStream> stream) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TradeData.Deserialize(java.io.InputStream)", game);
    {
        state_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        feelPt_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        new_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadBoolean(stream); });
    }
}

// M:data.TradeData.ChangeState(System.Int32)
void TradeData::ChangeState(pls::cs::Int32 state) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TradeData.ChangeState(System.Int32)", game);
    {
        if (state_ == 0 && state == 1) {
            new_ = true;
        }
        state_ = state;
    }
}

// M:data.TradeData.GetSuccessRate
pls::cs::Int32 TradeData::GetSuccessRate() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TradeData.GetSuccessRate", game);
    {
        pls::cs::Ref<TeamData> teamData{};
        pls::cs::Int32 warPotential_{};
        pls::cs::Int32 fanEvaToCommonValue{};
        pls::cs::Int32 num{};
        pls::cs::Int32 num2{};
        pls::cs::Int32 num3{};
        {
            teamData = require(main::AppData::GetInstance())->tData_.get_Item(0);
            warPotential_ = require(teamData)->warPotential_;
            fanEvaToCommonValue = FanActData::GetFanEvaToCommonValue(2);
            num = pls::cs::to_int32(
                      ((0.2f * pls::cs::Single(warPotential_) + 0.8f * pls::cs::Single(fanEvaToCommonValue)) /
                       1.0f)) /
                  10;
            num2 = num - difficult_;
            num3 = 0;
            if (num2 >= 0) {
                {
                    num3 = game::GameUtil::RateConvert(num2, 0, 20, 50, 95, true);
                    goto cs_label_resultExit;
                }
            }
            if (num2 >= -20) {
                {
                    num3 = game::GameUtil::RateConvert(num2, -20, 0, 5, 50, true);
                    goto cs_label_resultExit;
                }
            }
            {
                num3 = 5;
            }
        cs_label_resultExit:;
            return num3;
        }
    }
}

// M:data.TradeData.IsExistNew
bool TradeData::IsExistNew() {
    TradeData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TradeData.IsExistNew", game);
    {
        if (!require(game::UserData::GetInstance())->ChEventFlg(16)) {
            return false;
        }
        pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
        for (pls::cs::Int32 i = 0; i < require(instance)->tradeData_.length(); ++i) {
            if (require(require(instance)->tradeData_.get_Item(i))->IsNew()) {
                return true;
            }
        }
        return false;
    }
}

// M:data.TradeData.RemoveNew
void TradeData::RemoveNew() {
    TradeData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TradeData.RemoveNew", game);
    {
        pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
        for (pls::cs::Int32 i = 0; i < require(instance)->tradeData_.length(); ++i) {
            require(require(instance)->tradeData_.get_Item(i))->new_ = false;
        }
    }
}

// M:data.TradeData.IsNew
bool TradeData::IsNew() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TradeData.IsNew", game);
    {
        if (new_) {
            return true;
        }
        return false;
    }
}

// M:data.TradeData.IsPlayerInMember
bool TradeData::IsPlayerInMember() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TradeData.IsPlayerInMember", game);
    {
        pls::cs::Ref<PlayerData> elem = require(TradeData::apdat_())->pData_.get_Item(playerDataId_);
        pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::Vector_2_IndexOf(
                require(require(game::UserData::GetInstance())->memberPDataist_), pls::cs::box(elem));
        });
        if (num != -1) {
            return true;
        }
        return false;
    }
}
} // namespace data
}
