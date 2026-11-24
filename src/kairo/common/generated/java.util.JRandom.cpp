// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.lang.JSystem.hpp"
#include "java.util.JRandom.hpp"

namespace pls::generated {
namespace java::util {

void JRandom::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(random_, visitor);
}

static PLS_NOINLINE void cs_init_a0cf9aef6a251bfd_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("java.util.JRandom", flag, []() {

    });
}

void JRandom::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_a0cf9aef6a251bfd_slow(flag);
}

void JRandom::create_init(pls::cs::Ref<JRandom> self) {
    JRandom::ensure_initialized();
    JRandom::create_init(pls::cs::static_pointer_cast<JRandom>(self), lang::JSystem::CurrentTimeMillis());
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.JRandom.#ctor", kairo);
    {
    }
}

void JRandom::create_init(pls::cs::Ref<JRandom> self, pls::cs::Int64 seed) {
    JRandom::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.JRandom.#ctor(System.Int64)", kairo);
    {
        self->random_ = ([&]() {
            auto cs_arg0 = pls::cs::to_int32(seed);
            return pls::cs::make_ref<pls::cs::Random>(cs_arg0);
        }());
    }
}

// M:java.util.JRandom.#ctor
pls::cs::Ref<JRandom> JRandom::create() {
    JRandom::ensure_initialized();
    auto self = pls::cs::make_ref<JRandom>();
    JRandom::create_init(self);
    return self;
}

// M:java.util.JRandom.#ctor(System.Int64)
pls::cs::Ref<JRandom> JRandom::create(pls::cs::Int64 seed) {
    JRandom::ensure_initialized();
    auto self = pls::cs::make_ref<JRandom>();
    JRandom::create_init(self, seed);
    return self;
}

// M:java.util.JRandom.NextInt
pls::cs::Int32 JRandom::NextInt() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.JRandom.NextInt", kairo);
    {
        return PLS_API(require(random_)->Next());
    }
}
} // namespace java::util
}
