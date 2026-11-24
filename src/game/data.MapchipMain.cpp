// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "data.BaseData.hpp"
#include "data.MapchipMain.hpp"
#include "game.UserData.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "main.AppData.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;

namespace pls::game {
namespace data {

void MapchipMain::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    BaseData::trace_edges(visitor);
    pls::cs::trace_value(name_, visitor);
}

static pls::cs::Ref<main::AppData> MapchipMain_apdat__storage{};

static pls::cs::Ref<game::UserData> MapchipMain_udat__storage{};

static PLS_NOINLINE void cs_init_2b1e88c9c4c08d03_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(MapchipMain_apdat__storage, visitor);
        pls::cs::trace_value(MapchipMain_udat__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("data.MapchipMain", flag, []() {

    });
}

void MapchipMain::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_2b1e88c9c4c08d03_slow(flag);
}

pls::cs::Ref<main::AppData>& MapchipMain::apdat_() {
    MapchipMain::ensure_initialized();
    return MapchipMain_apdat__storage;
}

pls::cs::Ref<game::UserData>& MapchipMain::udat_() {
    MapchipMain::ensure_initialized();
    return MapchipMain_udat__storage;
}

void MapchipMain::create_init(pls::cs::Ref<MapchipMain> self) {
    MapchipMain::ensure_initialized();
    BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.MapchipMain.#ctor", game);
    {
        MapchipMain::apdat_() = main::AppData::GetInstance();
        MapchipMain::udat_() = game::UserData::GetInstance();
    }
}

void MapchipMain::create_init(pls::cs::Ref<MapchipMain> self, pls::cs::String src) {
    MapchipMain::ensure_initialized();
    BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.MapchipMain.#ctor(System.String)", game);
    {
        MapchipMain::apdat_() = main::AppData::GetInstance();
        MapchipMain::udat_() = game::UserData::GetInstance();
        self->Load(src);
    }
}

// M:data.MapchipMain.#ctor
pls::cs::Ref<MapchipMain> MapchipMain::create() {
    MapchipMain::ensure_initialized();
    auto self = pls::cs::make_ref<MapchipMain>();
    MapchipMain::create_init(self);
    return self;
}

// M:data.MapchipMain.#ctor(System.String)
pls::cs::Ref<MapchipMain> MapchipMain::create(pls::cs::String src) {
    MapchipMain::ensure_initialized();
    auto self = pls::cs::make_ref<MapchipMain>();
    MapchipMain::create_init(self, src);
    return self;
}

// M:data.MapchipMain.Load(System.String)
void MapchipMain::Load(pls::cs::String src) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.MapchipMain.Load(System.String)", game);
    {
        pls::cs::Int32 num = 0;
        StringArray array = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_util::StringUtil::Split(src, literal(u"\t")); });
        id_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_lang::JInteger::ParseInt(array[num++]); });
        name_ = array[num++];
        img_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_lang::JInteger::ParseInt(array[num++]); });
        seb_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_lang::JInteger::ParseInt(array[num++]); });
        fenceId_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_lang::JInteger::ParseInt(array[num++]); });
        flag_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_lang::JInteger::ParseInt(array[num++]); });
    }
}
} // namespace data
}
