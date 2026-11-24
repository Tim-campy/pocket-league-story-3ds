// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "data.BaseData.hpp"
#include "data.TeamData.hpp"
#include "data.TenantData.hpp"
#include "form.GameForm.hpp"
#include "form.SubForm.hpp"
#include "game.GameUtil.hpp"
#include "game.MapMain.hpp"
#include "game.Tenant.hpp"
#include "game.UserData.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
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

void TenantData::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    BaseData::trace_edges(visitor);
    pls::cs::trace_value(name_, visitor);
    pls::cs::trace_value(img_, visitor);
    pls::cs::trace_value(usePrice_, visitor);
    pls::cs::trace_value(keepCost_, visitor);
    pls::cs::trace_value(dataResearch_, visitor);
    pls::cs::trace_value(efToFan_, visitor);
    pls::cs::trace_value(investCost_, visitor);
    pls::cs::trace_value(explain_, visitor);
    pls::cs::trace_value(paramResearch_, visitor);
    pls::cs::trace_value(TUSEPOINT, visitor);
}

static pls::cs::Ref<main::AppData> TenantData_apdat__storage{};

static StringArray TenantData_EFTOFAN_STR_storage{};

static IntArray TenantData_INIT_TENANTID_storage{};

static pls::cs::Int32 TenantData_TENANT_ID_GOODS_storage{};

static pls::cs::Int32 TenantData_TENANT_ID_STADIUM_storage{};

static pls::cs::Int32 TenantData_TENANT_ID_TRAININGAREA_storage{};

static pls::cs::Int32 TenantData_TENANT_ID_TRAININGAREA_SPRED_storage{};

static IntArray TenantData_TENANT_ROOT_storage{};

static IntArray TenantData_TLUP_PARAM_storage{};

static pls::cs::Ref<game::UserData> TenantData_udat__storage{};

static PLS_NOINLINE void cs_init_76884ad002dceb7a_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(TenantData_apdat__storage, visitor);
        pls::cs::trace_value(TenantData_EFTOFAN_STR_storage, visitor);
        pls::cs::trace_value(TenantData_INIT_TENANTID_storage, visitor);
        pls::cs::trace_value(TenantData_TENANT_ID_GOODS_storage, visitor);
        pls::cs::trace_value(TenantData_TENANT_ID_STADIUM_storage, visitor);
        pls::cs::trace_value(TenantData_TENANT_ID_TRAININGAREA_storage, visitor);
        pls::cs::trace_value(TenantData_TENANT_ID_TRAININGAREA_SPRED_storage, visitor);
        pls::cs::trace_value(TenantData_TENANT_ROOT_storage, visitor);
        pls::cs::trace_value(TenantData_TLUP_PARAM_storage, visitor);
        pls::cs::trace_value(TenantData_udat__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("data.TenantData", flag, []() {
        TenantData_INIT_TENANTID_storage =
            pls::cs::evaluate_type_initializer_field("F:data.TenantData.INIT_TENANTID", [&]() {
                return IntArray::from({-1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1});
            });
        TenantData_TENANT_ROOT_storage =
            pls::cs::evaluate_type_initializer_field("F:data.TenantData.TENANT_ROOT", [&]() {
                return IntArray::from({0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1});
            });
        TenantData_EFTOFAN_STR_storage =
            pls::cs::evaluate_type_initializer_field("F:data.TenantData.EFTOFAN_STR", [&]() {
                return StringArray::from({literal(u"低い"), literal(u"普通"), literal(u"高い")});
            });
        TenantData_TLUP_PARAM_storage = pls::cs::evaluate_type_initializer_field(
            "F:data.TenantData.TLUP_PARAM", [&]() { return IntArray::make(6); });
    });
}

void TenantData::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_76884ad002dceb7a_slow(flag);
}

pls::cs::Ref<main::AppData>& TenantData::apdat_() {
    TenantData::ensure_initialized();
    return TenantData_apdat__storage;
}

StringArray& TenantData::EFTOFAN_STR() {
    TenantData::ensure_initialized();
    return TenantData_EFTOFAN_STR_storage;
}

IntArray& TenantData::INIT_TENANTID() {
    TenantData::ensure_initialized();
    return TenantData_INIT_TENANTID_storage;
}

pls::cs::Int32& TenantData::TENANT_ID_GOODS() {
    TenantData::ensure_initialized();
    return TenantData_TENANT_ID_GOODS_storage;
}

pls::cs::Int32& TenantData::TENANT_ID_STADIUM() {
    TenantData::ensure_initialized();
    return TenantData_TENANT_ID_STADIUM_storage;
}

pls::cs::Int32& TenantData::TENANT_ID_TRAININGAREA() {
    TenantData::ensure_initialized();
    return TenantData_TENANT_ID_TRAININGAREA_storage;
}

pls::cs::Int32& TenantData::TENANT_ID_TRAININGAREA_SPRED() {
    TenantData::ensure_initialized();
    return TenantData_TENANT_ID_TRAININGAREA_SPRED_storage;
}

IntArray& TenantData::TENANT_ROOT() {
    TenantData::ensure_initialized();
    return TenantData_TENANT_ROOT_storage;
}

IntArray& TenantData::TLUP_PARAM() {
    TenantData::ensure_initialized();
    return TenantData_TLUP_PARAM_storage;
}

pls::cs::Ref<game::UserData>& TenantData::udat_() {
    TenantData::ensure_initialized();
    return TenantData_udat__storage;
}

void TenantData::create_init(pls::cs::Ref<TenantData> self) {
    TenantData::ensure_initialized();
    self->investCost_ = IntArray::make(2);
    self->paramResearch_ = IntArray::make(4);
    self->TUSEPOINT = IntArray::make(2);
    BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TenantData.#ctor", game);
    {
        TenantData::apdat_() = main::AppData::GetInstance();
        TenantData::udat_() = game::UserData::GetInstance();
    }
}

void TenantData::create_init(pls::cs::Ref<TenantData> self, pls::cs::String src) {
    TenantData::ensure_initialized();
    self->investCost_ = IntArray::make(2);
    self->paramResearch_ = IntArray::make(4);
    self->TUSEPOINT = IntArray::make(2);
    BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TenantData.#ctor(System.String)", game);
    {
        TenantData::apdat_() = main::AppData::GetInstance();
        TenantData::udat_() = game::UserData::GetInstance();
        self->Init();
        self->Load(src);
    }
}

// M:data.TenantData.#ctor
pls::cs::Ref<TenantData> TenantData::create() {
    TenantData::ensure_initialized();
    auto self = pls::cs::make_ref<TenantData>();
    TenantData::create_init(self);
    return self;
}

// M:data.TenantData.#ctor(System.String)
pls::cs::Ref<TenantData> TenantData::create(pls::cs::String src) {
    TenantData::ensure_initialized();
    auto self = pls::cs::make_ref<TenantData>();
    TenantData::create_init(self, src);
    return self;
}

// M:data.TenantData.Init
void TenantData::Init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TenantData.Init", game);
    {
        state_ = 0;
        stateCnt_ = 0;
        new_ = false;
        lv_ = 1;
    }
}

// M:data.TenantData.Load(System.String)
void TenantData::Load(pls::cs::String src) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TenantData.Load(System.String)", game);
    {
        pls::cs::Int32 num = 0;
        StringArray array = PLS_API(kl_unity_util::StringUtil::Split(src, literal(u"\t")));
        id_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        name_ = array[num++];
        root_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        icon_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        img_ = IntArray::make(4);
        for (pls::cs::Int32 i = 0; i < img_.length(); ++i) {
            {
                auto cs_target = img_;
                auto cs_index = i;
                auto cs_value = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        charm_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        usePrice_ = IntArray::make(2);
        keepCost_ = IntArray::make(2);
        dataResearch_ = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2})));
        efToFan_ = IntArray::make(2);
        for (pls::cs::Int32 j = 0; j < usePrice_.length(); ++j) {
            {
                auto cs_target = usePrice_;
                auto cs_index = j;
                auto cs_value = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        for (pls::cs::Int32 k = 0; k < keepCost_.length(); ++k) {
            {
                auto cs_target = keepCost_;
                auto cs_index = k;
                auto cs_value = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        pls::cs::Int32 num2 = 0;
        pls::cs::String value = array[num++];
        StringArray array2 = PLS_API(kl_unity_util::StringUtil::Split(value, literal(u"&")));
        dataResearch_ = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2})));
        for (pls::cs::Int32 l = 0; l < dataResearch_.length(); ++l) {
            for (pls::cs::Int32 m = 0; m < dataResearch_[l].length(); ++m) {
                {
                    auto cs_target = dataResearch_[l];
                    auto cs_index = m;
                    auto cs_value = PLS_API(kl_lang::JInteger::ParseInt(array2[num2++]));
                    cs_target.set_Item(cs_index, cs_value);
                }
            }
        }
        for (pls::cs::Int32 n = 0; n < efToFan_.length(); ++n) {
            {
                auto cs_target = efToFan_;
                auto cs_index = n;
                auto cs_value = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        buildTime_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        buildCost_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        for (pls::cs::Int32 num3 = 0; num3 < investCost_.length(); ++num3) {
            {
                auto cs_target = investCost_;
                auto cs_index = num3;
                auto cs_value = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        explain_ = array[num++];
        flag_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        SetLv(1);
    }
}

// M:data.TenantData.Load2
void TenantData::Load2() {
    TenantData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TenantData.Load2", game);
    {
        pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
        for (pls::cs::Int32 i = 0; i < require(instance)->tenantData_.length(); ++i) {
            pls::cs::Ref<TenantData> tenantData = require(instance)->tenantData_.get_Item(i);
            if (PLS_API(kl_unity_util::BitUtil::Check(require(tenantData)->flag_, 4))) {
                TenantData::TENANT_ID_GOODS() = i;
            } else if (PLS_API(kl_unity_util::BitUtil::Check(require(tenantData)->flag_, 8))) {
                TenantData::TENANT_ID_TRAININGAREA() = i;
            } else if (PLS_API(kl_unity_util::BitUtil::Check(require(tenantData)->flag_, 16))) {
                TenantData::TENANT_ID_TRAININGAREA_SPRED() = i;
            } else if (PLS_API(kl_unity_util::BitUtil::Check(require(tenantData)->flag_, 32))) {
                TenantData::TENANT_ID_STADIUM() = i;
            }
        }
    }
}

// M:data.TenantData.NewGame
void TenantData::NewGame() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TenantData.NewGame", game);
    {
        state_ = 0;
        if (PLS_API(kl_unity_util::BitUtil::Check(flag_, 1))) {
            ChangeState(1);
        }
    }
}

// M:data.TenantData.Serialize(java.io.OutputStream)
void TenantData::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TenantData.Serialize(java.io.OutputStream)", game);
    {
        PLS_API(kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(state_)));
        PLS_API(kl_unity_util::StreamUtil::WriteInt(os, stateCnt_));
        PLS_API(kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(lv_)));
        PLS_API(kl_unity_util::StreamUtil::WriteBoolean(os, new_));
    }
}

// M:data.TenantData.Deserialize(java.io.InputStream)
void TenantData::Deserialize(pls::cs::Ref<kl_io::InputStream> stream) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TenantData.Deserialize(java.io.InputStream)", game);
    {
        state_ =
            pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_unity_util::StreamUtil::ReadShort(stream)));
        stateCnt_ = PLS_API(kl_unity_util::StreamUtil::ReadInt(stream));
        lv_ = pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_unity_util::StreamUtil::ReadShort(stream)));
        new_ = PLS_API(kl_unity_util::StreamUtil::ReadBoolean(stream));
        SetLv(lv_);
    }
}

// M:data.TenantData.ChangeState(System.Int32)
void TenantData::ChangeState(pls::cs::Int32 state) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TenantData.ChangeState(System.Int32)", game);
    {
        if (state_ == 0 && state == 1) {
            new_ = true;
        }
        state_ = state;
        stateCnt_ = 0;
    }
}

// M:data.TenantData.LvUp
void TenantData::LvUp() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TenantData.LvUp", game);
    {
        if (lv_ == 5) {
            return;
        }
        {
            SetLv(lv_ + 1);
        }
    }
}

// M:data.TenantData.SetLv(System.Int32)
void TenantData::SetLv(pls::cs::Int32 lv) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TenantData.SetLv(System.Int32)", game);
    {
        lv_ = lv;
        for (pls::cs::Int32 i = 0; i < paramResearch_.length(); ++i) {
            {
                auto cs_target = paramResearch_;
                auto cs_index = i;
                auto cs_value = ([&]() -> pls::cs::Int32 {
                    pls::cs::Int32 cs_arg0 = lv_;
                    pls::cs::Int32 cs_arg3 = dataResearch_[i][0];
                    pls::cs::Int32 cs_arg4 = dataResearch_[i][1];
                    return game::GameUtil::RateConvert(cs_arg0, 1, 5, cs_arg3, cs_arg4, true);
                }());
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        paramUsePrice_ = ([&]() -> pls::cs::Int32 {
            pls::cs::Int32 cs_arg0 = lv_;
            pls::cs::Int32 cs_arg3 = usePrice_[0];
            pls::cs::Int32 cs_arg4 = usePrice_[1];
            return game::GameUtil::RateConvert(cs_arg0, 1, 5, cs_arg3, cs_arg4, true);
        }());
        paramKeepCost_ = ([&]() -> pls::cs::Int32 {
            pls::cs::Int32 cs_arg0 = lv_;
            pls::cs::Int32 cs_arg3 = keepCost_[0];
            pls::cs::Int32 cs_arg4 = keepCost_[1];
            return game::GameUtil::RateConvert(cs_arg0, 1, 5, cs_arg3, cs_arg4, true);
        }());
        paramEfToFan_ = ([&]() -> pls::cs::Int32 {
            pls::cs::Int32 cs_arg0 = lv_;
            pls::cs::Int32 cs_arg3 = efToFan_[0];
            pls::cs::Int32 cs_arg4 = efToFan_[1];
            return game::GameUtil::RateConvert(cs_arg0, 1, 5, cs_arg3, cs_arg4, true);
        }());
        paramStrengthCost_ = ([&]() -> pls::cs::Int32 {
            pls::cs::Int32 cs_arg0 = lv_;
            pls::cs::Int32 cs_arg3 = investCost_[0];
            pls::cs::Int32 cs_arg4 = investCost_[1];
            return game::GameUtil::RateConvert(cs_arg0, 1, 5, cs_arg3, cs_arg4, true);
        }());
        paramTenantUseAura_ = ([&]() -> pls::cs::Int32 {
            pls::cs::Int32 cs_arg0 = lv_;
            pls::cs::Int32 cs_arg3 = efToFan_[0];
            pls::cs::Int32 cs_arg4 = efToFan_[1];
            return game::GameUtil::RateConvert(cs_arg0, 1, 5, cs_arg3, cs_arg4, true);
        }());
    }
}

// M:data.TenantData.GetFanToEf(System.Int32)
pls::cs::Int32 TenantData::GetFanToEf(pls::cs::Int32 eva) {
    TenantData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TenantData.GetFanToEf(System.Int32)", game);
    {
        if (eva <= 3) {
            return 0;
        }
        if (eva <= 7) {
            return 1;
        }
        return 2;
    }
}

// M:data.TenantData.GetUserPrice
pls::cs::Int32 TenantData::GetUserPrice() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TenantData.GetUserPrice", game);
    {
        {
            pls::cs::Int32 cs_arg0_24 = lv_;
            pls::cs::Int32 cs_arg3_24 = usePrice_[0];
            pls::cs::Int32 cs_arg4_24 = usePrice_[1];
            return game::GameUtil::RateConvert(cs_arg0_24, 1, 5, cs_arg3_24, cs_arg4_24, true);
        }
    }
}

// M:data.TenantData.GetTenantUseResearchPoint
IntArray TenantData::GetTenantUseResearchPoint() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TenantData.GetTenantUseResearchPoint", game);
    {
        pls::cs::Int32 num = 0;
        for (pls::cs::Int32 i = 0; i < paramResearch_.length(); ++i) {
            num += paramResearch_[i];
        }
        pls::cs::Int32 num2 = 0;
        pls::cs::Int32 num3 = game::GameUtil::Random(num);
        for (pls::cs::Int32 j = 0; j < paramResearch_.length(); ++j) {
            if (num3 < paramResearch_[j]) {
                num2 = j;
                break;
            }
            num3 -= paramResearch_[j];
        }
        TUSEPOINT[0] = num2;
        TUSEPOINT[1] = paramResearch_[num2];
        return TUSEPOINT;
    }
}

// M:data.TenantData.GetGoodsIncomeRate
pls::cs::Single TenantData::GetGoodsIncomeRate() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TenantData.GetGoodsIncomeRate", game);
    {
        return game::GameUtil::RateConvert(lv_, 1, 5, 100, 500, true);
    }
}

// M:data.TenantData.StrengthTenant
void TenantData::StrengthTenant() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TenantData.StrengthTenant", game);
    {
        if (lv_ == 5) {
            return;
        }
        for (pls::cs::Int32 i = 0; i < require(TenantData::udat_())->tenants_.length(); ++i) {
            pls::cs::Ref<game::Tenant> tenant = require(TenantData::udat_())->tenants_.get_Item(i);
            if (require(tenant)->state_ == 0) {
                continue;
            }
            if (require(tenant)->tenantDataId_ == id_) {
                require(tenant)->StrenghTenant();
            }
        }
        ChangeState(2);
    }
}

// M:data.TenantData.Update
void TenantData::Update() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TenantData.Update", game);
    {
        if (state_ != 2) {
            return;
        }
        ++stateCnt_;
        if (stateCnt_ >= 200) {
            pls::cs::Ref<form::SubForm> subForm = form::SubForm::create(64);
            require(subForm)->tenantDataId_ = id_;
            require(TenantData::apdat_())->Push(subForm);
            ChangeState(1);
        }
    }
}

// M:data.TenantData.GetLvUpAddParam
IntArray TenantData::GetLvUpAddParam() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TenantData.GetLvUpAddParam", game);
    {
        {
            auto cs_target = TenantData::TLUP_PARAM();
            auto cs_index = 0;
            auto cs_value = ([&]() -> pls::cs::Int32 {
                auto cs_left = ([&]() -> pls::cs::Int32 {
                    pls::cs::Int32 cs_arg0 = lv_ + 1;
                    pls::cs::Int32 cs_arg3 = usePrice_[0];
                    pls::cs::Int32 cs_arg4 = usePrice_[1];
                    return game::GameUtil::RateConvert(cs_arg0, 1, 5, cs_arg3, cs_arg4, true);
                }());
                auto cs_right = paramUsePrice_;
                return cs_left - cs_right;
            }());
            cs_target.set_Item(cs_index, cs_value);
        }
        {
            auto cs_target = TenantData::TLUP_PARAM();
            auto cs_index = 1;
            auto cs_value = ([&]() -> pls::cs::Int32 {
                auto cs_left = ([&]() -> pls::cs::Int32 {
                    pls::cs::Int32 cs_arg0 = lv_ + 1;
                    pls::cs::Int32 cs_arg3 = keepCost_[0];
                    pls::cs::Int32 cs_arg4 = keepCost_[1];
                    return game::GameUtil::RateConvert(cs_arg0, 1, 5, cs_arg3, cs_arg4, true);
                }());
                auto cs_right = paramKeepCost_;
                return cs_left - cs_right;
            }());
            cs_target.set_Item(cs_index, cs_value);
        }
        for (pls::cs::Int32 i = 0; i < paramResearch_.length(); ++i) {
            {
                auto cs_target = TenantData::TLUP_PARAM();
                auto cs_index = 2 + i;
                auto cs_value = ([&]() -> pls::cs::Int32 {
                    auto cs_left = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = lv_ + 1;
                        pls::cs::Int32 cs_arg3 = dataResearch_[i][0];
                        pls::cs::Int32 cs_arg4 = dataResearch_[i][1];
                        return game::GameUtil::RateConvert(cs_arg0, 1, 5, cs_arg3, cs_arg4, true);
                    }());
                    auto cs_right = paramResearch_[i];
                    return cs_left - cs_right;
                }());
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        return TenantData::TLUP_PARAM();
    }
}

// M:data.TenantData.ProcStrenSpecialTenant(data.TenantData)
void TenantData::ProcStrenSpecialTenant(pls::cs::Ref<TenantData> tenant_data) {
    TenantData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TenantData.ProcStrenSpecialTenant(data.TenantData)", game);
    {
        pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
        pls::cs::Ref<game::UserData> instance2 = game::UserData::GetInstance();
        if (require(tenant_data)->id_ == TenantData::TENANT_ID_STADIUM()) {
            pls::cs::Ref<TeamData> teamData = require(instance)->tData_.get_Item(0);
            if (require(teamData)->stadium_ == 1) {
                require(teamData)->stadium_ = 0;
            } else if (require(teamData)->stadium_ == 0) {
                require(teamData)->stadium_ = 2;
            }
            require(tenant_data)->LvUp();
            if (require(teamData)->stadium_ == 0) {
                require(instance)->ExecEvent(187, pls::cs::String{}, IntArray{});
            } else if (require(teamData)->stadium_ == 2) {
                require(instance)->ExecEvent(188, pls::cs::String{}, IntArray{});
            }
        } else if (require(tenant_data)->id_ == TenantData::TENANT_ID_TRAININGAREA()) {
            {
                auto cs_target = instance2;
                pls::cs::Int32 cs_value = main::AppData::ClampMax(require(instance2)->tAreaLv_ + 1, 2);
                require(cs_target)->tAreaLv_ = cs_value;
            }
            require(require(instance)->frmGame_)->SetAllDraw();
            require(tenant_data)->LvUp();
            if (require(instance2)->tAreaLv_ == 1) {
                require(instance)->ExecEvent(184, pls::cs::String{}, IntArray{});
            } else if (require(instance2)->tAreaLv_ == 2) {
                require(instance)->ExecEvent(185, pls::cs::String{}, IntArray{});
            }
        } else if (require(tenant_data)->id_ == TenantData::TENANT_ID_TRAININGAREA_SPRED()) {
            {
                auto cs_target = instance2;
                pls::cs::Int32 cs_value = main::AppData::ClampMax(require(instance2)->tAreaRootNum_ + 1, 2);
                require(cs_target)->tAreaRootNum_ = cs_value;
            }
            require(require(instance)->mapMain_)->UpdateTrainingCoatNum();
            require(require(instance)->frmGame_)->SetAllDraw();
            require(tenant_data)->LvUp();
            require(instance)->ExecEvent(186, pls::cs::String{}, IntArray{});
        }
    }
}

// M:data.TenantData.IsStreangth
bool TenantData::IsStreangth() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TenantData.IsStreangth", game);
    {
        if (!IsMaxLv()) {
            return true;
        }
        return false;
    }
}

// M:data.TenantData.IsMaxLv
bool TenantData::IsMaxLv() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TenantData.IsMaxLv", game);
    {
        if (id_ == TenantData::TENANT_ID_STADIUM()) {
            if (lv_ >= 3) {
                return true;
            }
        } else if (id_ == TenantData::TENANT_ID_TRAININGAREA()) {
            if (lv_ >= 3) {
                return true;
            }
        } else if (id_ == TenantData::TENANT_ID_TRAININGAREA_SPRED()) {
            if (lv_ >= 2) {
                return true;
            }
        } else if (lv_ >= 5) {
            return true;
        }
        return false;
    }
}

// M:data.TenantData.IsTAreaOrStadiumTenant
bool TenantData::IsTAreaOrStadiumTenant() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TenantData.IsTAreaOrStadiumTenant", game);
    {
        if (id_ == TenantData::TENANT_ID_STADIUM() || id_ == TenantData::TENANT_ID_TRAININGAREA() ||
            id_ == TenantData::TENANT_ID_TRAININGAREA_SPRED()) {
            return true;
        }
        return false;
    }
}

// M:data.TenantData.IsExistNew
bool TenantData::IsExistNew() {
    TenantData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TenantData.IsExistNew", game);
    {
        if (!require(game::UserData::GetInstance())->ChEventFlg(4)) {
            return false;
        }
        pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
        for (pls::cs::Int32 i = 0; i < require(instance)->tenantData_.length(); ++i) {
            if (require(require(instance)->tenantData_.get_Item(i))->IsNew()) {
                return true;
            }
        }
        return false;
    }
}

// M:data.TenantData.RemoveNew
void TenantData::RemoveNew() {
    TenantData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TenantData.RemoveNew", game);
    {
        pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
        for (pls::cs::Int32 i = 0; i < require(instance)->tenantData_.length(); ++i) {
            require(require(instance)->tenantData_.get_Item(i))->new_ = false;
        }
    }
}

// M:data.TenantData.IsNew
bool TenantData::IsNew() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TenantData.IsNew", game);
    {
        if (new_) {
            return true;
        }
        return false;
    }
}
} // namespace data
}
