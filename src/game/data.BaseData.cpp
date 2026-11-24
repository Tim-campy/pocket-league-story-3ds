// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "data.BaseData.hpp"

namespace pls::game {
namespace data {

void BaseData::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
}

static PLS_NOINLINE void cs_init_b08d770c239489bf_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("data.BaseData", flag, []() {

    });
}

void BaseData::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_b08d770c239489bf_slow(flag);
}

void BaseData::create_init(pls::cs::Ref<BaseData> self) {
    BaseData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.BaseData.#ctor", game);
    {
    }
}

// M:data.BaseData.#ctor
pls::cs::Ref<BaseData> BaseData::create() {
    BaseData::ensure_initialized();
    auto self = pls::cs::make_ref<BaseData>();
    BaseData::create_init(self);
    return self;
}

// M:data.BaseData.Check(System.Int32)
bool BaseData::Check(pls::cs::Int32 bit) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:data.BaseData.Check(System.Int32)", game);
    {
        return (flag_ & bit) != 0;
    }
}
} // namespace data
}
