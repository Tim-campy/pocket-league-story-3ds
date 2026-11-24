// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.system.lineup.ui.LineupManager.hpp"
#include "system.lineup.MyLineup.hpp"

namespace pls::game {
namespace system::lineup {

void MyLineup::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    LineupManager::trace_edges(visitor);
}

static PLS_NOINLINE void cs_init_e00832a42e12ec3b_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("system.lineup.MyLineup", flag, []() {

    });
}

void MyLineup::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_e00832a42e12ec3b_slow(flag);
}

void MyLineup::create_init(pls::cs::Ref<MyLineup> self) {
    MyLineup::ensure_initialized();
    LineupManager::create_init(pls::cs::static_pointer_cast<LineupManager>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.lineup.MyLineup.#ctor", game);
    {
    }
}

// M:system.lineup.MyLineup.#ctor
pls::cs::Ref<MyLineup> MyLineup::create() {
    MyLineup::ensure_initialized();
    auto self = pls::cs::make_ref<MyLineup>();
    MyLineup::create_init(self);
    return self;
}

// M:system.lineup.MyLineup.GetInstance
pls::cs::Ref<MyLineup> MyLineup::GetInstance() {
    MyLineup::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.lineup.MyLineup.GetInstance", game);
    {
        LineupManager::ensure_initialized();

        if (is_null(LineupManager::instance_())) {
            LineupManager::instance_() = MyLineup::create();
        }
        return pls::cs::unbox<pls::cs::Ref<MyLineup>>(pls::cs::box(LineupManager::instance_()));
    }
}

// M:system.lineup.MyLineup.Start
void MyLineup::Start() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.lineup.MyLineup.Start", game);
    {
        LineupManager::Start(1);
    }
}
} // namespace system::lineup
}
