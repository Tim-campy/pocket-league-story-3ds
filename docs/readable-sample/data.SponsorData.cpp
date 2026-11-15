// GENERATED (readable mode) by translator/Translator.cs from the reconstructed C#. Do not edit.
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

namespace pls::game {
namespace data {

void SponsorData::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    BaseData::trace_edges(visitor);
    pls::cs::trace_value(name_, visitor);
    pls::cs::trace_value(charaIndex_, visitor);
    pls::cs::trace_value(privilegeType_, visitor);
    pls::cs::trace_value(privilegeValue_, visitor);
    pls::cs::trace_value(costType_, visitor);
    pls::cs::trace_value(cost_, visitor);
    pls::cs::trace_value(income_, visitor);
    pls::cs::trace_value(satisfactDifficult_, visitor);
    pls::cs::trace_value(difficult_, visitor);
    pls::cs::trace_value(feelPtInt_, visitor);
    pls::cs::trace_value(explain_, visitor);
    pls::cs::trace_value(execsScript_, visitor);
    pls::cs::trace_value(state_, visitor);
    pls::cs::trace_value(satisfactPoint_, visitor);
    pls::cs::trace_value(feelPt_, visitor);
    pls::cs::trace_value(new_, visitor);
}

void SponsorData::release_edges() {
    BaseData::release_edges();
    pls::cs::release_value(name_);
    pls::cs::release_value(charaIndex_);
    pls::cs::release_value(privilegeType_);
    pls::cs::release_value(privilegeValue_);
    pls::cs::release_value(costType_);
    pls::cs::release_value(cost_);
    pls::cs::release_value(income_);
    pls::cs::release_value(satisfactDifficult_);
    pls::cs::release_value(difficult_);
    pls::cs::release_value(feelPtInt_);
    pls::cs::release_value(explain_);
    pls::cs::release_value(execsScript_);
    pls::cs::release_value(state_);
    pls::cs::release_value(satisfactPoint_);
    pls::cs::release_value(feelPt_);
    pls::cs::release_value(new_);
}

static pls::cs::Ref<main::AppData> SponsorData_apdat__storage{};

static pls::cs::Array<pls::cs::String> SponsorData_difficultStr_storage{};

static pls::cs::Ref<game::UserData> SponsorData_udat__storage{};

void SponsorData::ensure_initialized() {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(SponsorData_apdat__storage, visitor);
        pls::cs::trace_value(SponsorData_difficultStr_storage, visitor);
        pls::cs::trace_value(SponsorData_udat__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("data.SponsorData", []() {
        SponsorData_difficultStr_storage =
            pls::cs::evaluate_type_initializer_field("F:data.SponsorData.difficultStr", [&]() {
                return pls::cs::Array<pls::cs::String>::from({literal(u"\u7C21\u5358") /* "簡単" */,
                                                              literal(u"\u666E\u901A") /* "普通" */,
                                                              literal(u"\u96E3\u3057\u3044") /* "難しい" */});
            });
    });
}

pls::cs::Ref<main::AppData>& SponsorData::apdat_() {
    SponsorData::ensure_initialized();
    return SponsorData_apdat__storage;
}

pls::cs::Array<pls::cs::String>& SponsorData::difficultStr() {
    SponsorData::ensure_initialized();
    return SponsorData_difficultStr_storage;
}

pls::cs::Ref<game::UserData>& SponsorData::udat_() {
    SponsorData::ensure_initialized();
    return SponsorData_udat__storage;
}

// M:data.SponsorData.#ctor
pls::cs::Ref<SponsorData> SponsorData::create() {
    SponsorData::ensure_initialized();
    auto self = pls::cs::make_ref<SponsorData>();
    SponsorData::create_init(self);
    return self;
}

void SponsorData::create_init(pls::cs::Ref<SponsorData> self) {
    self->income_ = pls::cs::Array<std::int32_t>::make(2);
    ([&]() {
        BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
    }());

    SponsorData::apdat_() = main::AppData::GetInstance();
    SponsorData::udat_() = game::UserData::GetInstance();
}

// M:data.SponsorData.#ctor(System.String)
pls::cs::Ref<SponsorData> SponsorData::create(pls::cs::String src) {
    SponsorData::ensure_initialized();
    auto self = pls::cs::make_ref<SponsorData>();
    SponsorData::create_init(self, src);
    return self;
}

void SponsorData::create_init(pls::cs::Ref<SponsorData> self, pls::cs::String src) {
    self->income_ = pls::cs::Array<std::int32_t>::make(2);
    ([&]() {
        BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
    }());

    SponsorData::apdat_() = main::AppData::GetInstance();
    SponsorData::udat_() = game::UserData::GetInstance();
    SponsorData::Init(self);
    SponsorData::Load(self, src);
}

// M:data.SponsorData.ChangeState(System.Int32)
void SponsorData::ChangeState(pls::cs::Ref<SponsorData> self, std::int32_t state) {
    SponsorData::ensure_initialized();

    require(self);

    if ((self->state_ == 0) && (state == 1)) {
        self->new_ = true;
    }
    self->state_ = state;
}

// M:data.SponsorData.Deserialize(java.io.InputStream)
void SponsorData::Deserialize(pls::cs::Ref<SponsorData> self,
                              pls::cs::Ref<generated::java::io::InputStream> stream) {
    SponsorData::ensure_initialized();

    require(self);

    self->state_ =
        pls::cs::cast_integral<std::int32_t>(generated::kairo::unity::util::StreamUtil::ReadShort(stream));
    self->satisfactPoint_ = generated::kairo::unity::util::StreamUtil::ReadInt(stream);
    self->feelPt_ =
        pls::cs::cast_integral<std::int32_t>(generated::kairo::unity::util::StreamUtil::ReadShort(stream));
    self->new_ = generated::kairo::unity::util::StreamUtil::ReadBoolean(stream);
}

// M:data.SponsorData.Draw_sponsorChara(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32)
void SponsorData::Draw_sponsorChara(pls::cs::Ref<pls::kairo::Graphics> g, std::int32_t charaId,
                                    std::int32_t dx, std::int32_t dy) {
    SponsorData::ensure_initialized();

    ([&]() -> void {
        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
        pls::cs::Ref<pls::kairo::Image> cs_arg0 =
            require(require(SponsorData::apdat_())->resCom2_)->img.get_Item(169);
        float cs_arg1 = static_cast<float>(pls::cs::sub_i32(dx, 10));
        float cs_arg2 = static_cast<float>(pls::cs::sub_i32(dy, 30));
        std::int32_t cs_arg3 = pls::cs::mul_i32(20, (pls::cs::mod_i32(charaId, 12)));
        std::int32_t cs_arg4 = pls::cs::mul_i32(30, (pls::cs::div_i32(charaId, 12)));
        std::int32_t cs_arg5 = 20;
        std::int32_t cs_arg6 = 30;
        if (!cs_receiver) {
            throw pls::cs::NullReferenceException();
        }
        cs_receiver->DrawImage(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6);
    }());
}

// M:data.SponsorData.GetDifficultStr
pls::cs::String SponsorData::GetDifficultStr(pls::cs::Ref<SponsorData> self) {
    SponsorData::ensure_initialized();

    require(self);

    if (self->difficult_ < 50) {
        return SponsorData::difficultStr().get_Item(0);
    }
    if (self->difficult_ < 100) {
        return SponsorData::difficultStr().get_Item(1);
    }
    return SponsorData::difficultStr().get_Item(2);
}

// M:data.SponsorData.GetIncome
std::int32_t SponsorData::GetIncome(pls::cs::Ref<SponsorData> self) {
    SponsorData::ensure_initialized();

    require(self);

    return ([&]() -> std::int32_t {
        std::int32_t cs_arg0 = self->satisfactPoint_;
        std::int32_t cs_arg1 = 0;
        std::int32_t cs_arg2 = 100;
        std::int32_t cs_arg3 = self->income_.get_Item(0);
        std::int32_t cs_arg4 = self->income_.get_Item(1);
        bool cs_arg5 = true;
        return game::GameUtil::RateConvert(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
    }());
}

// M:data.SponsorData.Init
void SponsorData::Init(pls::cs::Ref<SponsorData> self) {
    SponsorData::ensure_initialized();

    require(self);

    self->state_ = 0;
    self->satisfactPoint_ = 0;
    self->feelPt_ = 0;
    self->new_ = false;
}

// M:data.SponsorData.IsExistNew
bool SponsorData::IsExistNew() {
    SponsorData::ensure_initialized();

    if (!(game::UserData::ChEventFlg(require(game::UserData::GetInstance()), 32))) {
        return false;
    }
    pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
    for (std::int32_t i = 0; i < (require(instance)->sponsorData_).length(); i = pls::cs::add_i32(i, 1)) {
        if (SponsorData::IsNew(require(require(instance)->sponsorData_.get_Item(i)))) {
            return true;
        }
    }
    return false;
}

// M:data.SponsorData.IsNew
bool SponsorData::IsNew(pls::cs::Ref<SponsorData> self) {
    SponsorData::ensure_initialized();

    require(self);

    if (self->new_) {
        return true;
    }
    return false;
}

// M:data.SponsorData.Load(System.String)
void SponsorData::Load(pls::cs::Ref<SponsorData> self, pls::cs::String src) {
    SponsorData::ensure_initialized();

    require(self);

    std::int32_t num = 0;
    pls::cs::Array<pls::cs::String> array =
        generated::kairo::unity::util::StringUtil::Split(src, literal(u"\t"));
    self->id_ = generated::java::lang::JInteger::ParseInt(array.get_Item(post_increment(num)));
    self->name_ = array.get_Item(post_increment(num));
    self->charaIndex_ = generated::java::lang::JInteger::ParseInt(array.get_Item(post_increment(num)));
    self->privilegeType_ = generated::java::lang::JInteger::ParseInt(array.get_Item(post_increment(num)));
    self->privilegeValue_ = generated::java::lang::JInteger::ParseInt(array.get_Item(post_increment(num)));
    self->costType_ = generated::java::lang::JInteger::ParseInt(array.get_Item(post_increment(num)));
    self->cost_ = generated::java::lang::JInteger::ParseInt(array.get_Item(post_increment(num)));
    ([&]() {
        auto cs_target = self->income_;
        auto cs_index = 0;
        auto cs_value = generated::java::lang::JInteger::ParseInt(array.get_Item(post_increment(num)));
        cs_target.set_Item(cs_index, cs_value);
        return cs_value;
    }());
    ([&]() {
        auto cs_target = self->income_;
        auto cs_index = 1;
        auto cs_value = generated::java::lang::JInteger::ParseInt(array.get_Item(post_increment(num)));
        cs_target.set_Item(cs_index, cs_value);
        return cs_value;
    }());
    self->satisfactDifficult_ =
        generated::java::lang::JInteger::ParseInt(array.get_Item(post_increment(num)));
    self->difficult_ = generated::java::lang::JInteger::ParseInt(array.get_Item(post_increment(num)));
    self->feelPtInt_ = generated::java::lang::JInteger::ParseInt(array.get_Item(post_increment(num)));
    self->explain_ = array.get_Item(post_increment(num));
    self->execsScript_ = EventData::ReadScript(array.get_Item(post_increment(num)));
    self->flag_ = generated::java::lang::JInteger::ParseInt(array.get_Item(post_increment(num)));
    self->feelPt_ = self->feelPtInt_;
}

// M:data.SponsorData.NewGame
void SponsorData::NewGame(pls::cs::Ref<SponsorData> self) {
    SponsorData::ensure_initialized();

    require(self);

    self->state_ = 0;
    if (generated::kairo::unity::util::BitUtil::Check(self->flag_, 1)) {
        SponsorData::ChangeState(self, 1);
    }
}

// M:data.SponsorData.RemoveNew
void SponsorData::RemoveNew() {
    SponsorData::ensure_initialized();

    pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
    for (std::int32_t i = 0; i < (require(instance)->sponsorData_).length(); i = pls::cs::add_i32(i, 1)) {
        require(require(instance)->sponsorData_.get_Item(i))->new_ = false;
    }
}

// M:data.SponsorData.Serialize(java.io.OutputStream)
void SponsorData::Serialize(pls::cs::Ref<SponsorData> self,
                            pls::cs::Ref<generated::java::io::OutputStream> os) {
    SponsorData::ensure_initialized();

    require(self);

    generated::kairo::unity::util::StreamUtil::WriteShort(os,
                                                          pls::cs::cast_integral<std::int16_t>(self->state_));
    generated::kairo::unity::util::StreamUtil::WriteInt(os, self->satisfactPoint_);
    generated::kairo::unity::util::StreamUtil::WriteShort(
        os, pls::cs::cast_integral<std::int16_t>(self->feelPt_));
    generated::kairo::unity::util::StreamUtil::WriteBoolean(os, self->new_);
}

// M:data.SponsorData.UpdateSatisFactPoint
void SponsorData::UpdateSatisFactPoint() {
    SponsorData::ensure_initialized();

    pls::cs::Ref<TeamData> teamData =
        require(SponsorData::apdat_())
            ->tData_.get_Item(require(require(SponsorData::udat_())->gm_)->teamId_.get_Item(0));
    pls::cs::Ref<TeamData> teamData2 =
        require(SponsorData::apdat_())
            ->tData_.get_Item(require(require(SponsorData::udat_())->gm_)->teamId_.get_Item(1));
    bool flag = false;
    bool flag2 = false;
    bool flag3 = false;
    if ([&]() -> bool {
            auto cs_left = require(require(SponsorData::udat_())->gm_)->score_.get_Item(0);
            auto cs_right = require(require(SponsorData::udat_())->gm_)->score_.get_Item(1);
            return (cs_left > cs_right);
        }()) {
        flag = true;
    } else if ([&]() -> bool {
                   auto cs_left = require(require(SponsorData::udat_())->gm_)->score_.get_Item(0);
                   auto cs_right = require(require(SponsorData::udat_())->gm_)->score_.get_Item(1);
                   return (cs_left == cs_right);
               }()) {
        flag2 = true;
    } else {
        flag3 = true;
    }
    if (flag3) {
        return;
    }
    std::int32_t x = pls::cs::sub_i32(require(teamData)->warPotential_, require(teamData2)->warPotential_);
    std::int32_t x2 = 0;
    if (flag) {
        x2 = game::GameUtil::RateConvert(x, -50, 50, 1000, 333, true);
    } else if (flag2) {
        x2 = game::GameUtil::RateConvert(x, -50, 50, 333, 0, true);
    }
    for (std::int32_t i = 0; i < (require(SponsorData::apdat_())->sponsorData_).length();
         i = pls::cs::add_i32(i, 1)) {
        pls::cs::Ref<SponsorData> sponsorData = require(SponsorData::apdat_())->sponsorData_.get_Item(i);
        if (require(sponsorData)->state_ != 2) {
            continue;
        }
        std::int32_t x3 = require(sponsorData)->satisfactDifficult_;
        std::int32_t c2min = game::GameUtil::RateConvert(x3, 0, 1000, 5, 1, true);
        std::int32_t c2max = game::GameUtil::RateConvert(x3, 0, 1000, 20, 3, true);
        std::int32_t num = game::GameUtil::RateConvert(x2, 0, 1000, c2min, c2max, true);
        ([&]() {
            auto cs_target = sponsorData;
            auto cs_value =
                main::AppData::Clamp(pls::cs::add_i32(require(sponsorData)->satisfactPoint_, num), 0, 100);
            require(cs_target)->satisfactPoint_ = cs_value;
            return cs_value;
        }());
    }
}
} // namespace data
} // namespace pls::game
