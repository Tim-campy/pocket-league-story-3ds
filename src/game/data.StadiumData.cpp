// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "data.BaseData.hpp"
#include "data.StadiumData.hpp"
#include "game.UserData.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "main.AppData.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;

namespace pls::game {
namespace data {

void StadiumData::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    BaseData::trace_edges(visitor);
    pls::cs::trace_value(name_, visitor);
    pls::cs::trace_value(fileName_, visitor);
}

static pls::cs::Ref<main::AppData> StadiumData_apdat__storage{};

static pls::cs::Ref<game::UserData> StadiumData_udat__storage{};

static PLS_NOINLINE void cs_init_d22b1a8b100a0cab_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(StadiumData_apdat__storage, visitor);
        pls::cs::trace_value(StadiumData_udat__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("data.StadiumData", flag, []() {

    });
}

void StadiumData::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_d22b1a8b100a0cab_slow(flag);
}

pls::cs::Ref<main::AppData>& StadiumData::apdat_() {
    StadiumData::ensure_initialized();
    return StadiumData_apdat__storage;
}

pls::cs::Ref<game::UserData>& StadiumData::udat_() {
    StadiumData::ensure_initialized();
    return StadiumData_udat__storage;
}

void StadiumData::create_init(pls::cs::Ref<StadiumData> self) {
    StadiumData::ensure_initialized();
    BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.StadiumData.#ctor", game);
    {
        StadiumData::apdat_() = main::AppData::GetInstance();
        StadiumData::udat_() = game::UserData::GetInstance();
    }
}

void StadiumData::create_init(pls::cs::Ref<StadiumData> self, pls::cs::String src) {
    StadiumData::ensure_initialized();
    BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.StadiumData.#ctor(System.String)", game);
    {
        StadiumData::apdat_() = main::AppData::GetInstance();
        StadiumData::udat_() = game::UserData::GetInstance();
        self->Load(src);
    }
}

// M:data.StadiumData.#ctor
pls::cs::Ref<StadiumData> StadiumData::create() {
    StadiumData::ensure_initialized();
    auto self = pls::cs::make_ref<StadiumData>();
    StadiumData::create_init(self);
    return self;
}

// M:data.StadiumData.#ctor(System.String)
pls::cs::Ref<StadiumData> StadiumData::create(pls::cs::String src) {
    StadiumData::ensure_initialized();
    auto self = pls::cs::make_ref<StadiumData>();
    StadiumData::create_init(self, src);
    return self;
}

// M:data.StadiumData.Load(System.String)
void StadiumData::Load(pls::cs::String src) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.StadiumData.Load(System.String)", game);
    {
        pls::cs::Int32 num = 0;
        StringArray array = PLS_API(kl_util::StringUtil::Split(src, literal(u"\t")));
        id_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        name_ = array[num++];
        fileName_ = array[num++];
        img_out_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        mapchip_oy_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        flag_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
    }
}

// M:data.StadiumData.NewGame
void StadiumData::NewGame() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.StadiumData.NewGame", game);
    {
    }
}

// M:data.StadiumData.Serialize(java.io.OutputStream)
void StadiumData::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.StadiumData.Serialize(java.io.OutputStream)", game);
    {
    }
}

// M:data.StadiumData.Deserialize(java.io.InputStream)
void StadiumData::Deserialize(pls::cs::Ref<kl_io::InputStream> stream) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.StadiumData.Deserialize(java.io.InputStream)", game);
    {
    }
}
} // namespace data
}
