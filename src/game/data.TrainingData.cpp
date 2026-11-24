// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "data.BaseData.hpp"
#include "data.TrainingData.hpp"
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

void TrainingData::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    BaseData::trace_edges(visitor);
    pls::cs::trace_value(name_, visitor);
    pls::cs::trace_value(eff_, visitor);
    pls::cs::trace_value(explain_, visitor);
}

static pls::cs::Ref<main::AppData> TrainingData_apdat__storage{};

static pls::cs::Int32 TrainingData_fa_result_storage{};

static IntArray TrainingData_FARESULT_RATE_storage{};

static IntArray2 TrainingData_TRA_ADD_storage{};

static IntArray TrainingData_TRA_PLAYER_storage{};

static pls::cs::Int32 TrainingData_TRA_SELECT_TRA_storage{};

static IntArray2 TrainingData_TRA_UPPARAM_storage{};

static IntArray2 TrainingData_TRA_UPPARAM_DISP_storage{};

static pls::cs::Ref<game::UserData> TrainingData_udat__storage{};

static PLS_NOINLINE void cs_init_4489b86073532f79_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(TrainingData_apdat__storage, visitor);
        pls::cs::trace_value(TrainingData_fa_result_storage, visitor);
        pls::cs::trace_value(TrainingData_FARESULT_RATE_storage, visitor);
        pls::cs::trace_value(TrainingData_TRA_ADD_storage, visitor);
        pls::cs::trace_value(TrainingData_TRA_PLAYER_storage, visitor);
        pls::cs::trace_value(TrainingData_TRA_SELECT_TRA_storage, visitor);
        pls::cs::trace_value(TrainingData_TRA_UPPARAM_storage, visitor);
        pls::cs::trace_value(TrainingData_TRA_UPPARAM_DISP_storage, visitor);
        pls::cs::trace_value(TrainingData_udat__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("data.TrainingData", flag, []() {
        TrainingData_TRA_PLAYER_storage = pls::cs::evaluate_type_initializer_field(
            "F:data.TrainingData.TRA_PLAYER", [&]() { return IntArray::make(3); });
        TrainingData_TRA_SELECT_TRA_storage = pls::cs::evaluate_type_initializer_field(
            "F:data.TrainingData.TRA_SELECT_TRA", [&]() { return 0; });
        TrainingData_TRA_UPPARAM_storage =
            pls::cs::evaluate_type_initializer_field("F:data.TrainingData.TRA_UPPARAM", [&]() {
                return PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({3, 6})));
            });
        TrainingData_TRA_ADD_storage =
            pls::cs::evaluate_type_initializer_field("F:data.TrainingData.TRA_ADD", [&]() {
                return PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({3, 6})));
            });
        TrainingData_TRA_UPPARAM_DISP_storage =
            pls::cs::evaluate_type_initializer_field("F:data.TrainingData.TRA_UPPARAM_DISP", [&]() {
                return PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({3, 6})));
            });
        TrainingData_FARESULT_RATE_storage = pls::cs::evaluate_type_initializer_field(
            "F:data.TrainingData.FARESULT_RATE", [&]() { return IntArray::from({8, 92, 100}); });
        TrainingData_fa_result_storage =
            pls::cs::evaluate_type_initializer_field("F:data.TrainingData.fa_result", [&]() { return 0; });
    });
}

void TrainingData::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_4489b86073532f79_slow(flag);
}

pls::cs::Ref<main::AppData>& TrainingData::apdat_() {
    TrainingData::ensure_initialized();
    return TrainingData_apdat__storage;
}

pls::cs::Int32& TrainingData::fa_result() {
    TrainingData::ensure_initialized();
    return TrainingData_fa_result_storage;
}

IntArray& TrainingData::FARESULT_RATE() {
    TrainingData::ensure_initialized();
    return TrainingData_FARESULT_RATE_storage;
}

IntArray2& TrainingData::TRA_ADD() {
    TrainingData::ensure_initialized();
    return TrainingData_TRA_ADD_storage;
}

IntArray& TrainingData::TRA_PLAYER() {
    TrainingData::ensure_initialized();
    return TrainingData_TRA_PLAYER_storage;
}

pls::cs::Int32& TrainingData::TRA_SELECT_TRA() {
    TrainingData::ensure_initialized();
    return TrainingData_TRA_SELECT_TRA_storage;
}

IntArray2& TrainingData::TRA_UPPARAM() {
    TrainingData::ensure_initialized();
    return TrainingData_TRA_UPPARAM_storage;
}

IntArray2& TrainingData::TRA_UPPARAM_DISP() {
    TrainingData::ensure_initialized();
    return TrainingData_TRA_UPPARAM_DISP_storage;
}

pls::cs::Ref<game::UserData>& TrainingData::udat_() {
    TrainingData::ensure_initialized();
    return TrainingData_udat__storage;
}

void TrainingData::create_init(pls::cs::Ref<TrainingData> self) {
    TrainingData::ensure_initialized();
    self->eff_ = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({6, 2})));
    BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TrainingData.#ctor", game);
    {
        TrainingData::apdat_() = main::AppData::GetInstance();
        TrainingData::udat_() = game::UserData::GetInstance();
    }
}

void TrainingData::create_init(pls::cs::Ref<TrainingData> self, pls::cs::String src) {
    TrainingData::ensure_initialized();
    self->eff_ = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({6, 2})));
    BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TrainingData.#ctor(System.String)", game);
    {
        TrainingData::apdat_() = main::AppData::GetInstance();
        TrainingData::udat_() = game::UserData::GetInstance();
        self->Init();
        self->Load(src);
    }
}

// M:data.TrainingData.#ctor
pls::cs::Ref<TrainingData> TrainingData::create() {
    TrainingData::ensure_initialized();
    auto self = pls::cs::make_ref<TrainingData>();
    TrainingData::create_init(self);
    return self;
}

// M:data.TrainingData.#ctor(System.String)
pls::cs::Ref<TrainingData> TrainingData::create(pls::cs::String src) {
    TrainingData::ensure_initialized();
    auto self = pls::cs::make_ref<TrainingData>();
    TrainingData::create_init(self, src);
    return self;
}

// M:data.TrainingData.Init
void TrainingData::Init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TrainingData.Init", game);
    {
        state_ = 0;
        new_ = false;
    }
}

// M:data.TrainingData.Load(System.String)
void TrainingData::Load(pls::cs::String src) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TrainingData.Load(System.String)", game);
    {
        pls::cs::Int32 num = 0;
        StringArray array = PLS_API(kl_unity_util::StringUtil::Split(src, literal(u"\t")));
        id_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        name_ = array[num++];
        icon_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        tMode_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        for (pls::cs::Int32 i = 0; i < eff_.length(); ++i) {
            {
                auto cs_target = eff_[i];
                auto cs_index = 0;
                auto cs_value = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = eff_[i];
                auto cs_index = 1;
                auto cs_value = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        costType_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        cost_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        explain_ = array[num++];
        flag_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
    }
}

// M:data.TrainingData.Load2
void TrainingData::Load2() {
    TrainingData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TrainingData.Load2", game);
    {
        for (pls::cs::Int32 i = 0; i < TrainingData::TRA_PLAYER().length(); ++i) {
            TrainingData::TRA_PLAYER()[i] = -1;
        }
    }
}

// M:data.TrainingData.NewGame
void TrainingData::NewGame() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TrainingData.NewGame", game);
    {
        state_ = 0;
        if (PLS_API(kl_unity_util::BitUtil::Check(flag_, 1))) {
            ChangeState(1);
            new_ = false;
        }
    }
}

// M:data.TrainingData.Serialize(java.io.OutputStream)
void TrainingData::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TrainingData.Serialize(java.io.OutputStream)", game);
    {
        PLS_API(kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(state_)));
        PLS_API(kl_unity_util::StreamUtil::WriteBoolean(os, new_));
    }
}

// M:data.TrainingData.Deserialize(java.io.InputStream)
void TrainingData::Deserialize(pls::cs::Ref<kl_io::InputStream> stream) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TrainingData.Deserialize(java.io.InputStream)", game);
    {
        state_ =
            pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_unity_util::StreamUtil::ReadShort(stream)));
        new_ = PLS_API(kl_unity_util::StreamUtil::ReadBoolean(stream));
    }
}

// M:data.TrainingData.ChangeState(System.Int32)
void TrainingData::ChangeState(pls::cs::Int32 state) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TrainingData.ChangeState(System.Int32)", game);
    {
        if (state_ == 0 && state == 1) {
            new_ = true;
        }
        state_ = state;
    }
}

// M:data.TrainingData.GetTrainingAddParamNum(System.Int32)
pls::cs::Int32 TrainingData::GetTrainingAddParamNum(pls::cs::Int32 eva) {
    TrainingData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TrainingData.GetTrainingAddParamNum(System.Int32)", game);
    {
        if (eva <= 5) {
            return 1;
        }
        if (eva <= 10) {
            return 2;
        }
        return 3;
    }
}

// M:data.TrainingData.IsExistNew
bool TrainingData::IsExistNew() {
    TrainingData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TrainingData.IsExistNew", game);
    {
        pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
        for (pls::cs::Int32 i = 0; i < require(instance)->trainingData_.length(); ++i) {
            if (require(require(instance)->trainingData_.get_Item(i))->IsNew()) {
                return true;
            }
        }
        return false;
    }
}

// M:data.TrainingData.RemoveNew
void TrainingData::RemoveNew() {
    TrainingData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TrainingData.RemoveNew", game);
    {
        pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
        for (pls::cs::Int32 i = 0; i < require(instance)->trainingData_.length(); ++i) {
            require(require(instance)->trainingData_.get_Item(i))->new_ = false;
        }
    }
}

// M:data.TrainingData.IsNew
bool TrainingData::IsNew() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.TrainingData.IsNew", game);
    {
        if (new_) {
            return true;
        }
        return false;
    }
}
} // namespace data
}
