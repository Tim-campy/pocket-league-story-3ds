// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "game.MapObject.hpp"
#include "game.UserData.hpp"
#include "main.AppData.hpp"
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace game {

void MapObject::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(spos_, visitor);
}

static pls::cs::Ref<main::AppData> MapObject_apdat__storage{};

static pls::cs::Ref<UserData> MapObject_udat__storage{};

static PLS_NOINLINE void cs_init_29293d4d6e77d3bc_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(MapObject_apdat__storage, visitor);
        pls::cs::trace_value(MapObject_udat__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("game.MapObject", flag, []() {

    });
}

void MapObject::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_29293d4d6e77d3bc_slow(flag);
}

pls::cs::Ref<main::AppData>& MapObject::apdat_() {
    MapObject::ensure_initialized();
    return MapObject_apdat__storage;
}

pls::cs::Ref<UserData>& MapObject::udat_() {
    MapObject::ensure_initialized();
    return MapObject_udat__storage;
}

void MapObject::create_init(pls::cs::Ref<MapObject> self) {
    MapObject::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.MapObject.#ctor", game);
    {
        MapObject::apdat_() = main::AppData::GetInstance();
        MapObject::udat_() = UserData::GetInstance();
        self->Init();
    }
}

// M:game.MapObject.#ctor
pls::cs::Ref<MapObject> MapObject::create() {
    MapObject::ensure_initialized();
    auto self = pls::cs::make_ref<MapObject>();
    MapObject::create_init(self);
    return self;
}

// M:game.MapObject.Init
void MapObject::Init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.MapObject.Init", game);
    {
        spos_ = IntArray::make(2);
    }
}
} // namespace game
}
