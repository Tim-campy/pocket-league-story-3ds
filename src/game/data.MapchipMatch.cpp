// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "data.BaseData.hpp"
#include "data.MapchipMatch.hpp"
#include "game.UserData.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "main.AppData.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;

namespace pls::game {
namespace data {

void MapchipMatch::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    BaseData::trace_edges(visitor);
    pls::cs::trace_value(name_, visitor);
}

static pls::cs::Ref<main::AppData> MapchipMatch_apdat__storage{};

static pls::cs::Ref<game::UserData> MapchipMatch_udat__storage{};

static PLS_NOINLINE void cs_init_f991feb74054b6df_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(MapchipMatch_apdat__storage, visitor);
        pls::cs::trace_value(MapchipMatch_udat__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("data.MapchipMatch", flag, []() {

    });
}

void MapchipMatch::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_f991feb74054b6df_slow(flag);
}

pls::cs::Ref<main::AppData>& MapchipMatch::apdat_() {
    MapchipMatch::ensure_initialized();
    return MapchipMatch_apdat__storage;
}

pls::cs::Ref<game::UserData>& MapchipMatch::udat_() {
    MapchipMatch::ensure_initialized();
    return MapchipMatch_udat__storage;
}

void MapchipMatch::create_init(pls::cs::Ref<MapchipMatch> self) {
    MapchipMatch::ensure_initialized();
    BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.MapchipMatch.#ctor", game);
    {
        MapchipMatch::apdat_() = main::AppData::GetInstance();
        MapchipMatch::udat_() = game::UserData::GetInstance();
    }
}

void MapchipMatch::create_init(pls::cs::Ref<MapchipMatch> self, pls::cs::String src) {
    MapchipMatch::ensure_initialized();
    BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.MapchipMatch.#ctor(System.String)", game);
    {
        MapchipMatch::apdat_() = main::AppData::GetInstance();
        MapchipMatch::udat_() = game::UserData::GetInstance();
        self->Load(src);
    }
}

// M:data.MapchipMatch.#ctor
pls::cs::Ref<MapchipMatch> MapchipMatch::create() {
    MapchipMatch::ensure_initialized();
    auto self = pls::cs::make_ref<MapchipMatch>();
    MapchipMatch::create_init(self);
    return self;
}

// M:data.MapchipMatch.#ctor(System.String)
pls::cs::Ref<MapchipMatch> MapchipMatch::create(pls::cs::String src) {
    MapchipMatch::ensure_initialized();
    auto self = pls::cs::make_ref<MapchipMatch>();
    MapchipMatch::create_init(self, src);
    return self;
}

// M:data.MapchipMatch.Load(System.String)
void MapchipMatch::Load(pls::cs::String src) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.MapchipMatch.Load(System.String)", game);
    {
        pls::cs::Int32 num = 0;
        StringArray array = PLS_API(kl_util::StringUtil::Split(src, literal(u"\t")));
        id_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        name_ = array[num++];
        img_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        seb_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
        flag_ = PLS_API(kl_lang::JInteger::ParseInt(array[num++]));
    }
}
} // namespace data
}
