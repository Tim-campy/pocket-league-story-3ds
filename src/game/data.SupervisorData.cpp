// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "data.BaseData.hpp"
#include "data.FormationData.hpp"
#include "data.PlayerData.hpp"
#include "data.SupervisorData.hpp"
#include "form.SubForm.hpp"
#include "game.GameManager.hpp"
#include "game.GameUtil.hpp"
#include "game.Player.hpp"
#include "game.TPlayer.hpp"
#include "game.UserData.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "kairo.unity.util.Language.hpp"
#include "main.AppData.hpp"
#include "generated/java.util.JTool_templates.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace data {

void SupervisorData::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    BaseData::trace_edges(visitor);
    pls::cs::trace_value(name_, visitor);
    pls::cs::trace_value(name2_, visitor);
    pls::cs::trace_value(explain_, visitor);
    pls::cs::trace_value(dataPhysical_, visitor);
    pls::cs::trace_value(dataResearch_, visitor);
    pls::cs::trace_value(sallary_, visitor);
    pls::cs::trace_value(paramPhysical_, visitor);
    pls::cs::trace_value(paramResearch_, visitor);
}

static pls::cs::Ref<main::AppData> SupervisorData_apdat__storage{};

static StringArray SupervisorData_TRAINING_POLICY_STR_storage{};

static pls::cs::Ref<game::UserData> SupervisorData_udat__storage{};

static PLS_NOINLINE void cs_init_6803fd77f880b974_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(SupervisorData_apdat__storage, visitor);
        pls::cs::trace_value(SupervisorData_TRAINING_POLICY_STR_storage, visitor);
        pls::cs::trace_value(SupervisorData_udat__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("data.SupervisorData", flag, []() {
        SupervisorData_TRAINING_POLICY_STR_storage =
            pls::cs::evaluate_type_initializer_field("F:data.SupervisorData.TRAINING_POLICY_STR", [&]() {
                return StringArray::from(
                    {literal(u"選手に任せる"), literal(u"全員で練習"), literal(u"施設利用をメイン")});
            });
    });
}

void SupervisorData::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_6803fd77f880b974_slow(flag);
}

pls::cs::Ref<main::AppData>& SupervisorData::apdat_() {
    SupervisorData::ensure_initialized();
    return SupervisorData_apdat__storage;
}

StringArray& SupervisorData::TRAINING_POLICY_STR() {
    SupervisorData::ensure_initialized();
    return SupervisorData_TRAINING_POLICY_STR_storage;
}

pls::cs::Ref<game::UserData>& SupervisorData::udat_() {
    SupervisorData::ensure_initialized();
    return SupervisorData_udat__storage;
}

void SupervisorData::create_init(pls::cs::Ref<SupervisorData> self) {
    SupervisorData::ensure_initialized();
    self->paramPhysical_ = IntArray::make(5);
    self->paramResearch_ = IntArray::make(4);
    BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SupervisorData.#ctor", game);
    {
        SupervisorData::apdat_() = main::AppData::GetInstance();
        SupervisorData::udat_() = game::UserData::GetInstance();
    }
}

void SupervisorData::create_init(pls::cs::Ref<SupervisorData> self, pls::cs::String src) {
    SupervisorData::ensure_initialized();
    self->paramPhysical_ = IntArray::make(5);
    self->paramResearch_ = IntArray::make(4);
    BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SupervisorData.#ctor(System.String)", game);
    {
        SupervisorData::apdat_() = main::AppData::GetInstance();
        SupervisorData::udat_() = game::UserData::GetInstance();
        self->Init();
        self->Load(src);
    }
}

// M:data.SupervisorData.#ctor
pls::cs::Ref<SupervisorData> SupervisorData::create() {
    SupervisorData::ensure_initialized();
    auto self = pls::cs::make_ref<SupervisorData>();
    SupervisorData::create_init(self);
    return self;
}

// M:data.SupervisorData.#ctor(System.String)
pls::cs::Ref<SupervisorData> SupervisorData::create(pls::cs::String src) {
    SupervisorData::ensure_initialized();
    auto self = pls::cs::make_ref<SupervisorData>();
    SupervisorData::create_init(self, src);
    return self;
}

// M:data.SupervisorData.Init
void SupervisorData::Init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SupervisorData.Init", game);
    {
        winTotal_ = 0;
        state_ = 0;
        lv_ = initLv_;
        workMonth_ = 0;
        paramPhysical_ = IntArray::make(5);
        paramResearch_ = IntArray::make(4);
        rankPhysical_ = 0;
    }
}

// M:data.SupervisorData.Load(System.String)
void SupervisorData::Load(pls::cs::String src) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SupervisorData.Load(System.String)", game);
    {
        pls::cs::Int32 num = 0;
        pls::cs::Int32 num2 = 0;
        StringArray array = PLS_API(kl_unity_util::StringUtil::Split(src, literal(u"\t")));
        id_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        name_ = array[num++];
        name2_ = array[num++];
        if (kairo::unity::util::Language::English()) {
            name2_ = pls::cs::String::concat(literal(u" "), name2_);
        }
        explain_ = array[num++];
        headImg_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        bodyImg_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        initLv_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        num2 = 0;
        pls::cs::String value = array[num++];
        StringArray array2 = PLS_API(kl_unity_util::StringUtil::Split(value, literal(u"&")));
        dataPhysical_ = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({5, 2})));
        for (pls::cs::Int32 i = 0; i < dataPhysical_.length(); ++i) {
            for (pls::cs::Int32 j = 0; j < dataPhysical_[i].length(); ++j) {
                {
                    auto cs_target = dataPhysical_[i];
                    auto cs_index = j;
                    auto cs_value = PLS_API(kl_lang::JInteger::ParseInt(array2[num2++]));
                    cs_target.set_Item(cs_index, cs_value);
                }
            }
        }
        num2 = 0;
        value = array[num++];
        array2 = PLS_API(kl_unity_util::StringUtil::Split(value, literal(u"&")));
        dataResearch_ = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2})));
        for (pls::cs::Int32 k = 0; k < dataResearch_.length(); ++k) {
            for (pls::cs::Int32 l = 0; l < dataResearch_[k].length(); ++l) {
                {
                    auto cs_target = dataResearch_[k];
                    auto cs_index = l;
                    auto cs_value = PLS_API(kl_lang::JInteger::ParseInt(array2[num2++]));
                    cs_target.set_Item(cs_index, cs_value);
                }
            }
        }
        formation_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        sallary_ = IntArray::make(2);
        {
            auto cs_target = sallary_;
            auto cs_index = 0;
            auto cs_value = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
            cs_target.set_Item(cs_index, cs_value);
        }
        {
            auto cs_target = sallary_;
            auto cs_index = 1;
            auto cs_value = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
            cs_target.set_Item(cs_index, cs_value);
        }
        flag_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        SetLv(initLv_);
    }
}

// M:data.SupervisorData.NewGame
void SupervisorData::NewGame() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SupervisorData.NewGame", game);
    {
        state_ = 0;
        if (PLS_API(kl_unity_util::BitUtil::Check(flag_, 2))) {
            ChangeState(1);
        }
        if (PLS_API(kl_unity_util::BitUtil::Check(flag_, 1))) {
            ChangeState(1);
            SupervisorData::ContractSupervisor(id_, false, false);
            pls::cs::Ref<FormationData> formationData =
                require(SupervisorData::apdat_())->formationData_.get_Item(formation_);
            require(formationData)->new_ = false;
        }
    }
}

// M:data.SupervisorData.Serialize(java.io.OutputStream)
void SupervisorData::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SupervisorData.Serialize(java.io.OutputStream)", game);
    {
        PLS_API(kl_unity_util::StreamUtil::WriteInt(os, winTotal_));
        PLS_API(kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(state_)));
        PLS_API(kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(lv_)));
        PLS_API(kl_unity_util::StreamUtil::WriteInt(os, workMonth_));
    }
}

// M:data.SupervisorData.Deserialize(java.io.InputStream)
void SupervisorData::Deserialize(pls::cs::Ref<kl_io::InputStream> stream) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SupervisorData.Deserialize(java.io.InputStream)", game);
    {
        winTotal_ = PLS_API(kl_unity_util::StreamUtil::ReadInt(stream));
        state_ =
            pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_unity_util::StreamUtil::ReadShort(stream)));
        lv_ = pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_unity_util::StreamUtil::ReadShort(stream)));
        workMonth_ = PLS_API(kl_unity_util::StreamUtil::ReadInt(stream));
        SetLv(lv_);
    }
}

// M:data.SupervisorData.ChangeState(System.Int32)
void SupervisorData::ChangeState(pls::cs::Int32 state) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SupervisorData.ChangeState(System.Int32)", game);
    {
        state_ = state;
    }
}

// M:data.SupervisorData.LvUp
bool SupervisorData::LvUp() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SupervisorData.LvUp", game);
    {
        if (lv_ == 9) {
            return false;
        }
        SetLv(lv_ + 1);
        return true;
    }
}

// M:data.SupervisorData.SetLv(System.Int32)
void SupervisorData::SetLv(pls::cs::Int32 lv) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SupervisorData.SetLv(System.Int32)", game);
    {
        lv_ = lv;
        pls::cs::Int32 num = 0;
        for (pls::cs::Int32 i = 0; i < paramPhysical_.length(); ++i) {
            {
                auto cs_target = paramPhysical_;
                auto cs_index = i;
                auto cs_value = ([&]() -> pls::cs::Int32 {
                    pls::cs::Int32 cs_arg0 = lv_;
                    pls::cs::Int32 cs_arg3 = dataPhysical_[i][0];
                    pls::cs::Int32 cs_arg4 = dataPhysical_[i][1];
                    return game::GameUtil::RateConvert(cs_arg0, 1, 9, cs_arg3, cs_arg4, true);
                }());
                cs_target.set_Item(cs_index, cs_value);
            }
            num += paramPhysical_[i];
        }
        rankPhysical_ = PlayerData::GetParamEva(num / paramPhysical_.length());
        for (pls::cs::Int32 j = 0; j < paramResearch_.length(); ++j) {
            {
                auto cs_target = paramResearch_;
                auto cs_index = j;
                auto cs_value = ([&]() -> pls::cs::Int32 {
                    pls::cs::Int32 cs_arg0 = lv_;
                    pls::cs::Int32 cs_arg3 = dataResearch_[j][0];
                    pls::cs::Int32 cs_arg4 = dataResearch_[j][1];
                    return game::GameUtil::RateConvert(cs_arg0, 1, 9, cs_arg3, cs_arg4, true);
                }());
                cs_target.set_Item(cs_index, cs_value);
            }
        }
    }
}

// M:data.SupervisorData.SetResearchData(System.Int32,data.PlayerData)
void SupervisorData::SetResearchData(pls::cs::Int32 gameResultEva, pls::cs::Ref<PlayerData> p_data) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SupervisorData.SetResearchData(System.Int32,data.PlayerData)",
                     game);
    {
        pls::cs::Int32 num = 0;
        if ((([&]() -> bool {
                auto cs_left = require(require(SupervisorData::udat_())->gm_)->score_[0];
                auto cs_right = require(require(SupervisorData::udat_())->gm_)->score_[1];
                return cs_left > cs_right;
            }()))) {
            num = 10;
        } else {
            if ([&]() -> bool {
                    auto cs_left = require(require(SupervisorData::udat_())->gm_)->score_[0];
                    auto cs_right = require(require(SupervisorData::udat_())->gm_)->score_[1];
                    return cs_left == cs_right;
                }()) {
                num = 30;
            } else {
                num = 50;
            }
        }
        if (game::GameUtil::Random(100) < num) {
            require(p_data)->bonus_research[0] = -1;
            return;
        }
        pls::cs::Int32 num2 = 0;
        for (pls::cs::Int32 i = 0; i < paramResearch_.length(); ++i) {
            num2 += paramResearch_[i];
        }
        pls::cs::Int32 num3 = 0;
        pls::cs::Int32 num4 = game::GameUtil::Random(num2);
        for (pls::cs::Int32 j = 0; j < paramResearch_.length(); ++j) {
            if (num4 < paramResearch_[j]) {
                num3 = j;
                break;
            }
            num4 -= paramResearch_[j];
        }
        require(p_data)->bonus_research[0] = num3;
        require(p_data)->bonus_research[1] = paramResearch_[num3];
        {
            auto cs_target = require(p_data)->bonus_research;
            auto cs_index = 1;
            auto cs_old = cs_target.at(cs_index);
            auto cs_rhs = game::GameUtil::Random(3) - 1;
            pls::cs::Int32 cs_value = cs_old + cs_rhs;
            cs_target.at(cs_index) = cs_value;
        }
        if ([&]() -> bool {
                auto cs_left = require(require(SupervisorData::udat_())->gm_)->score_[0];
                auto cs_right = require(require(SupervisorData::udat_())->gm_)->score_[1];
                return cs_left == cs_right;
            }()) {
            require(p_data)->bonus_research[1] = require(p_data)->bonus_research[1] * 125 / 100;
        } else if ([&]() -> bool {
                       auto cs_left = require(require(SupervisorData::udat_())->gm_)->score_[0];
                       auto cs_right = require(require(SupervisorData::udat_())->gm_)->score_[1];
                       return cs_left < cs_right;
                   }()) {
            require(p_data)->bonus_research[1] = require(p_data)->bonus_research[1] * 150 / 100;
        }
        if (require(p_data)->bonus_research[1] == 0) {
            require(p_data)->bonus_research[1] = 1;
        }
    }
}

// M:data.SupervisorData.GetTrainigGetExp
pls::cs::Int32 SupervisorData::GetTrainigGetExp() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SupervisorData.GetTrainigGetExp", game);
    {
        pls::cs::Int32 num = 0;
        for (pls::cs::Int32 i = 0; i < paramPhysical_.length(); ++i) {
            num += paramPhysical_[i];
        }
        return game::GameUtil::RateConvert(num / paramPhysical_.length(), 0, 1000, 1, 10, true);
    }
}

// M:data.SupervisorData.GetSallay
pls::cs::Int32 SupervisorData::GetSallay() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.SupervisorData.GetSallay", game);
    {
        {
            pls::cs::Int32 cs_arg0_23 = lv_;
            pls::cs::Int32 cs_arg3_23 = sallary_[0];
            pls::cs::Int32 cs_arg4_23 = sallary_[1];
            return game::GameUtil::RateConvert(cs_arg0_23, 1, 9, cs_arg3_23, cs_arg4_23, true);
        }
    }
}

// M:data.SupervisorData.ContractSupervisor(System.Int32,System.Boolean,System.Boolean)
void SupervisorData::ContractSupervisor(pls::cs::Int32 svisorid, bool isContinue, bool formationAddPopUp) {
    SupervisorData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:data.SupervisorData.ContractSupervisor(System.Int32,System.Boolean,System.Boolean)",
                     game);
    {
        pls::cs::Ref<game::UserData> instance = game::UserData::GetInstance();
        require(instance)->selectSupervisorId_ = svisorid;
        pls::cs::Ref<SupervisorData> supervisorData =
            require(SupervisorData::apdat_())->svisorData_.get_Item(svisorid);
        pls::cs::Ref<FormationData> formationData =
            require(SupervisorData::apdat_())->formationData_.get_Item(require(supervisorData)->formation_);
        if (require(formationData)->state_ == 0 && formationAddPopUp) {
            require(SupervisorData::apdat_())->AddPopupMessage(29, require(formationData)->name_);
        }
        require(formationData)->ChangeState(1);
        if (isContinue && require(supervisorData)->LvUp()) {
            require(SupervisorData::apdat_())->ExecEvent(142, pls::cs::String{}, IntArray{});
        }
        if (!is_null(require(instance)->tp_svisor_)) {
            require(require(instance)->tp_svisor_)->faceImg_ = require(supervisorData)->headImg_;
            require(require(instance)->tp_svisor_)->bodyImg_ = require(supervisorData)->bodyImg_;
        }
    }
}
} // namespace data
}
